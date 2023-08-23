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
  Datasnap.DBClient, Vcl.ComCtrls, System.Generics.Collections;

type
  TBaseQuery = class(TCustomBaseQuery)
  private
    FMainGrid: TcxGrid;
    FGridDblClickID: Integer;
    FQueryDictionary: TDictionary<string, TDictionary<Integer,string>>;
    function GetMainView: TcxGridDBTableView;
    function GetMainIndexView(index: Integer): TcxCustomGridView;
    function GetActiveDataSet: TClientDataSet;
    function GetItemColumn(AFieldName: string): TcxGridDBColumn;
    function GetRowData(AFieldName: string; ARow: Integer): Variant;
    procedure SetRowData(AFieldName: string; ARow: Integer; const Value: Variant);
    function GetActiveRowIndex: Integer;
    function GetActiveGridView: TcxCustomGridView;
    function GetQueryDictionary: TDictionary<string, TDictionary<Integer,string>>;
  protected
    procedure DoReparePrintData; override;
    procedure SetGrid;override;
    procedure CustomGrid(AView :TcxCustomGridView);virtual;
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
    property QueryDictionary:TDictionary<string,TDictionary<Integer,string>> read GetQueryDictionary;
    property ActiveGridView: TcxCustomGridView read GetActiveGridView;
    property ActiveDataSet:TClientDataSet read GetActiveDataSet;
    property ActiveRowIndex:Integer read GetActiveRowIndex;
    property ItemView[index:Integer]:TcxCustomGridView read GetMainIndexView;
    property ItemColumn[AFieldName:string]: TcxGridDBColumn read GetItemColumn;
    property RowData[AFieldName:string;ARow:Integer]: Variant read GetRowData write SetRowData;
  end;

const C_QueryMode_OPENSQL  = 0;    //查询SQL
const C_QueryMode_OPENPROC = 1;    //查询过程

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
  //创建自定义字段
  Result.BeginUpdate();
  try
    CustomGrid(Result);
  finally
    Result.EndUpdate;
  end;
end;

procedure TBaseQuery.BeforeFormShow;
begin
  inherited;

end;

procedure TBaseQuery.CustomGrid(AView: TcxCustomGridView);
var Json:TJSONObject;
begin
  inherited;
  if not FileExists(LayoutFilePath) then Exit;
  Json := Json.ParseJSONValue(TFile.ReadAllText(LayoutFilePath)) as TJSONObject;
  try
    if not Assigned(Json) then Exit;
    if not Assigned(Json.Values['GridList']) then Exit;
    if not Assigned(TJSONObject(Json.Values['GridList']).Values[AView.Name]) then Exit;
    var _ProceName : string := EmptyStr;
    var _SQLText   : string := EmptyStr;
    TJSONObject(Json.Values['GridList']).Values[AView.Name].TryGetValue<string>('ProceName',_ProceName);
    TJSONObject(Json.Values['GridList']).Values[AView.Name].TryGetValue<string>('SQLText',_SQLText);
    var _Dic := TDictionary<Integer,string>.Create;
    _Dic.AddOrSetValue(C_QueryMode_OPENSQL,_SQLText);
    _Dic.AddOrSetValue(C_QueryMode_OPENPROC,_ProceName);
    QueryDictionary.AddOrSetValue(AView.Name,_Dic);
    if not Assigned(TJSONObject(TJSONObject(Json.Values['GridList']).Values[AView.Name]).Values['FieldList']) then Exit;
    if not (TJSONObject(TJSONObject(Json.Values['GridList']).Values[AView.Name]).Values['FieldList'] is TJSONArray) then Exit;
    for var item in TJSONObject(TJSONObject(Json.Values['GridList']).Values[AView.Name]).Values['FieldList'] as TJSONArray do
    begin
      var _Column := (AView as TcxGridDBTableView).CreateColumn;
      _Column.Name    := AView.Name + item.GetValue<string>('FieldName');
      _Column.Caption := item.GetValue<string>('Caption');
      _Column.DataBinding.FieldName := item.GetValue<string>('FieldName');
      _Column.Width   := item.GetValue<Integer>('Width',80);
      _Column.HeaderAlignmentHorz   := taCenter;
      _Column.Visible := item.GetValue<Boolean>('Visible',False);
      _Column.VisibleForCustomization := item.GetValue<Boolean>('VisibleForCustomization',Visible);
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
  if Assigned(FQueryDictionary) then
  begin
    for var dic in FQueryDictionary.Values do
      if Assigned(dic) then FreeAndNil(dic);
    FreeAndNil(FQueryDictionary);
  end;
  inherited;
end;

procedure TBaseQuery.DoAddGridPopupmenus(APopupmenu: TcxPopupMenuInfo);
begin
  inherited;

end;

procedure TBaseQuery.DoReparePrintData;
begin
  inherited;
  PrintDetailData := GetPrintData(ActiveGridView);
end;

function TBaseQuery.GetActiveDataSet: TClientDataSet;
begin
  Result := TcxGridDBTableView(MainGrid.ActiveView).DataController.DataSet as TClientDataSet
end;

function TBaseQuery.GetActiveGridView: TcxCustomGridView;
begin
  Result := MainGrid.ActiveView;
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

function TBaseQuery.GetQueryDictionary: TDictionary<string, TDictionary<Integer,string>>;
begin
  if not Assigned(FQueryDictionary) then FQueryDictionary := TDictionary<string,TDictionary<Integer,string>>.Create;
  Result := FQueryDictionary;
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
  var _Dic:TDictionary<Integer,string>;
  var _ProceName:string;
  if not QueryDictionary.TryGetValue(ActiveGridView.Name,_Dic) then Exit;
  if _Dic.TryGetValue(C_QueryMode_OPENPROC,_ProceName) and not _ProceName.IsEmpty then
    Goo.DB.OpenProc(_ProceName,ParamList,ActiveDataSet)
  else if _Dic.TryGetValue(C_QueryMode_OPENSQL,_ProceName) and not _ProceName.IsEmpty then
    Goo.DB.OpenSQL(_ProceName,ActiveDataSet);
end;

procedure TBaseQuery.OnGridViewDblClick(Sender: Tobject);
begin
  if (GridDblClickID>0) and Assigned(ButtonList.Button[GridDblClickID]) then ButtonList.Button[GridDblClickID].OnClick(Sender);
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
