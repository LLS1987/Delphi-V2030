unit UBaseQuery;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UCustomBaseQuery, cxStyles, cxClasses,
  System.ImageList, Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.ExtCtrls,
  cxGraphics, cxControls, cxLookAndFeels, cxLookAndFeelPainters, cxCustomData, cxFilter, cxData, cxDataStorage, cxEdit,
  cxNavigator, dxDateRanges, dxScrollbarAnnotations, Data.DB, cxDBData,
  Vcl.StdCtrls, cxGridLevel, cxGridCustomView, cxGridCustomTableView,
  cxGridTableView, cxGridDBTableView, cxGrid, cxGridCustomPopupMenu,
  Datasnap.DBClient, Vcl.ComCtrls;

type
  TBaseQuery = class(TCustomBaseQuery)
  private
    FMainGrid: TcxGrid;
    FGridDblClickID: Integer;
    function GetMainView: TcxGridDBTableView;
    function GetMainIndexView(index: Integer): TcxCustomGridView;
    function GetActiveDataSet: TClientDataSet;
    function GetItemColumn(AFieldName: string): TcxGridDBColumn;
    function GetRowData(AFieldName: string; ARow: Integer): Variant;
    procedure SetRowData(AFieldName: string; ARow: Integer; const Value: Variant);
    function GetActiveRowIndex: Integer;
  protected
    procedure SetGrid;override;
    procedure CustomGrid(FieldList :TDataSet);override;
    procedure LoadData;override;    //本函数用于装载数据
    function AddGridView:TcxCustomGridView;virtual;
    procedure DoAddGridPopupmenus(APopupmenu: TcxPopupMenuInfo); override;  //表格右键菜单
    procedure BeforeFormShow; override;
    property GridDblClickID:Integer read FGridDblClickID write FGridDblClickID;
    procedure OnGridViewDblClick(Sender:Tobject);virtual;
  public
    destructor Destroy; override;
    property MainGrid:TcxGrid read FMainGrid;
    property MainView:TcxGridDBTableView read GetMainView;
    property ActiveDataSet:TClientDataSet read GetActiveDataSet;
    property ActiveRowIndex:Integer read GetActiveRowIndex;
    property ItemView[index:Integer]:TcxCustomGridView read GetMainIndexView;
    property ItemColumn[AFieldName:string]: TcxGridDBColumn read GetItemColumn;
    property RowData[AFieldName:string;ARow:Integer]: Variant read GetRowData write SetRowData;
  end;

var
  BaseQuery: TBaseQuery;

implementation

uses
  UComvar, System.IOUtils, System.JSON;

{$R *.dfm}

{ TBaseQuery }

function TBaseQuery.AddGridView: TcxCustomGridView;
begin
  var Level := FMainGrid.Levels.Add;
  Result := TcxGridDBTableView.Create(Level);
  Level.GridView := Result;
  Result.Name := 'MainGridView' + MainGrid.Levels.Count.ToString;
  {自动给数据表格创建一个数据集}
  TcxGridDBTableView(Result).DataController.DataSource := TDataSource.Create(Self);
  TcxGridDBTableView(Result).DataController.DataSource.DataSet := TClientDataSet.Create(Self);
  //TcxGridDBTableView(Result).DataController.DataModeController.GridMode := True;  //大数据加载速度提升，但是丢失表格的合计
  TcxGridDBTableView(Result).OnDblClick := OnGridViewDblClick;
end;

procedure TBaseQuery.BeforeFormShow;
begin
  inherited;

end;

procedure TBaseQuery.CustomGrid(FieldList: TDataSet);
var Json:TJSONArray;
begin
  inherited;
  if not FileExists(Goo.SystemPath+Format('\Layout\%s.Json', [Self.ClassName])) then Exit;
  Json := Json.ParseJSONValue(UTF8Decode(TFile.ReadAllText(Goo.SystemPath+Format('\Layout\%s.Json', [Self.ClassName])))) as TJSONArray;
  try
    for var item in Json do
    begin
      with MainView.CreateColumn do
      begin
        Name    := MainView.Name + item.GetValue<string>('FieldName');
        Caption := item.GetValue<string>('Caption');
        DataBinding.FieldName := item.GetValue<string>('FieldName');
        Width   := item.GetValue<Integer>('Width',80);
        HeaderAlignmentHorz   := taCenter;
        Visible := item.GetValue<Boolean>('Visible',True);
        VisibleForCustomization := item.GetValue<Boolean>('VisibleForCustomization',Visible);
      end;
    end;
  finally
    Json.Free;
  end;

end;

destructor TBaseQuery.Destroy;
begin
  if Assigned(MainGrid) then
  begin
    for var i := MainGrid.Levels.Count-1 downto 0 do
    begin
      var GridView := MainGrid.Levels[i].GridView;
      if Assigned(GridView) then
      begin
        if (GridView is TcxGridDBTableView) and Assigned(TcxGridDBTableView(GridView).DataController.DataSource) then
        begin
          //释放 DataSet
          if Assigned(TcxGridDBTableView(GridView).DataController.DataSource.DataSet) then
            FreeAndNil(TcxGridDBTableView(GridView).DataController.DataSet);
          //释放 DataSource
          FreeAndNil(TcxGridDBTableView(GridView).DataController.DataSource);
        end;
        FreeAndNil(GridView);
      end;
    end;
  end;
  inherited;
end;

procedure TBaseQuery.DoAddGridPopupmenus(APopupmenu: TcxPopupMenuInfo);
begin
  inherited;

end;

function TBaseQuery.GetActiveDataSet: TClientDataSet;
begin
  Result := TcxGridDBTableView(MainGrid.ActiveView).DataController.DataSet as TClientDataSet
end;

function TBaseQuery.GetActiveRowIndex: Integer;
begin
  Result := MainGrid.ActiveView.DataController.FocusedRowIndex;
end;

function TBaseQuery.GetItemColumn(AFieldName: string): TcxGridDBColumn;
begin
  Result := MainView.GetColumnByFieldName(AFieldName);
end;

function TBaseQuery.GetMainIndexView(index: Integer): TcxCustomGridView;
begin
  Result := MainGrid.Levels[index].GridView;
end;

function TBaseQuery.GetMainView: TcxGridDBTableView;
begin
  var view := ItemView[0];
  if view is TcxGridDBTableView then
    Result := view as TcxGridDBTableView;
end;

function TBaseQuery.GetRowData(AFieldName: string; ARow: Integer): Variant;
begin
  Result := null;
  if not Assigned(MainGrid) then Exit;
  if not Assigned(MainGrid.ActiveView) then Exit;
  if (MainGrid.ActiveView.DataController.RowCount=0) or (ARow>=MainGrid.ActiveView.DataController.RowCount) or (ARow<0) then Exit;
  var _column := ItemColumn[AFieldName];
  if not Assigned(_column) then Exit;
  Result := MainGrid.ActiveView.DataController.Values[ARow,_column.Index];
end;

procedure TBaseQuery.LoadData;
begin
  inherited;
  Goo.DB.OpenSQL('select * from vbillindex_query',ActiveDataSet);
end;

procedure TBaseQuery.OnGridViewDblClick(Sender: Tobject);
begin
  if Assigned(ButtonList.Button[GridDblClickID]) then ButtonList.Button[GridDblClickID].OnClick(Sender);
end;

procedure TBaseQuery.SetGrid;
begin
  inherited;
  {创建表格}
  FMainGrid := TcxGrid.Create(Self);
  FMainGrid.Name := 'MaincxGrid';
  FMainGrid.Parent := Panel_Client;
  FMainGrid.Align  := alClient;
  {创建数据层}
  AddGridView;
  CustomGrid(nil);
end;

procedure TBaseQuery.SetRowData(AFieldName: string; ARow: Integer; const Value: Variant);
begin
  if not Assigned(MainGrid) then Exit;
  if not Assigned(MainGrid.ActiveView) then Exit;
  if (MainGrid.ActiveView.DataController.RowCount=0) or (ARow>=MainGrid.ActiveView.DataController.RowCount) then Exit;
  var _column := ItemColumn[AFieldName];
  if not Assigned(_column) then Exit;
  MainGrid.ActiveView.DataController.Values[ARow,_column.Index] := Value;
end;


end.
