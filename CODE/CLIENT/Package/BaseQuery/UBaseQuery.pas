unit UBaseQuery;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UCustomBaseQuery, cxStyles, cxClasses,
  System.ImageList, Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.ExtCtrls,
  cxGraphics, cxControls, cxLookAndFeels, cxLookAndFeelPainters, cxCustomData, cxFilter, cxData, cxDataStorage, cxEdit,
  cxNavigator, dxDateRanges, dxScrollbarAnnotations, Data.DB, cxDBData,
  Vcl.StdCtrls, cxGridLevel, cxGridCustomView, cxGridCustomTableView,
  cxGridTableView, cxGridDBTableView, cxGrid, cxGridCustomPopupMenu;

type
  TBaseQuery = class(TCustomBaseQuery)
    Button3: TButton;
    procedure Button3Click(Sender: TObject);
  private
    FMainGrid: TcxGrid;
    function GetMainView: TcxGridDBTableView;
    function GetMainIndexView(index: Integer): TcxCustomGridView;
  protected
    procedure SetGrid;override;
    procedure CustomGrid(FieldList :TDataSet);override;
    procedure LoadData;override;    //本函数用于装载数据
    function AddGridView:TcxCustomGridView;virtual;
    procedure DoAddGridPopupmenus(APopupmenu: TcxPopupMenuInfo); override;  //表格右键菜单
    procedure BeforeFormShow; override;
  public
    destructor Destroy; override;
    property MainGrid:TcxGrid read FMainGrid;
    property MainView:TcxGridDBTableView read GetMainView;
    property ItemView[index:Integer]:TcxCustomGridView read GetMainIndexView;
  end;

var
  BaseQuery: TBaseQuery;

implementation

uses
  Datasnap.DBClient, UComvar, System.IOUtils, System.JSON;

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
end;

procedure TBaseQuery.BeforeFormShow;
begin
  inherited;
  LoadData;
end;

procedure TBaseQuery.CustomGrid(FieldList: TDataSet);
var Json:TJSONArray;
begin
  inherited;
  if not FileExists(Goo.SystemPath+Format('\Layout\%s.Json', [Self.ClassName])) then Exit;
  Json := Json.ParseJSONValue(TFile.ReadAllText(Goo.SystemPath+Format('\Layout\%s.Json', [Self.ClassName]))) as TJSONArray;
  try
    for var item in Json do
    begin
      with MainView.CreateColumn do
      begin
        Name    := MainView.Name + item.GetValue<string>('FieldName');
        Caption := item.GetValue<string>('Caption');
        DataBinding.FieldName := item.GetValue<string>('FieldName');
        Width   := item.GetValue<Integer>('Width',80);
      end;
    end;
  finally
    Json.Free;
  end;

end;

destructor TBaseQuery.Destroy;
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
  inherited;
end;

procedure TBaseQuery.Button3Click(Sender: TObject);
begin
  inherited;
  for var i := 0 to MainView.ColumnCount-1 do
  begin
     var col := TcxGridTableView(MainView).Columns[i];

  end;

end;

procedure TBaseQuery.DoAddGridPopupmenus(APopupmenu: TcxPopupMenuInfo);
begin
  inherited;

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

procedure TBaseQuery.LoadData;
begin
  inherited;
  Goo.DB.OpenSQL('select * from vbillindex_query',MainView.DataController.DataSet as TClientDataSet);
  //MainView.DataController.DataSet := main
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

end.
