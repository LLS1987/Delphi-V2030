unit UCustomBaseQuery;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UBaseMdiForm, cxStyles, cxClasses,
  System.ImageList, Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.ExtCtrls,
  cxGraphics, cxControls, cxLookAndFeels, cxLookAndFeelPainters, cxCustomData, cxFilter, cxData, cxDataStorage, cxEdit,
  cxNavigator, dxDateRanges, dxScrollbarAnnotations, Data.DB, cxDBData,
  cxGridLevel, cxGridCustomView, cxGridCustomTableView, cxGridTableView,
  cxGridDBTableView, cxGrid, Vcl.StdCtrls, System.Generics.Collections,
  UParamList, Vcl.ComCtrls, UBaseControlManagerLayout, Datasnap.DBClient,
  System.JSON;

type
  TConditionManager = class;

  TCustomBaseQuery = class(TBaseMdiForm)
  private
    FCondition: TConditionManager;
    FButton: TButtonManager;
    FMainGrid: TcxGrid;
    FQueryDictionary: TDictionary<string, TDictionary<Integer,string>>;
    FColumnDictionary: TDictionary<string, string>;
    FGridDblClickID: Integer;
    FUseMasterAndDetail: Boolean;
    FDetailGridView: TcxCustomGridView;
    function GetMainIndexView(index: Integer): TcxCustomGridView;
    function GetMainView: TcxGridDBTableView;
    function GetActiveRowIndex: Integer;
    function GetItemColumn(AFieldName: string): TcxGridDBColumn;
    function GetRowData(AFieldName: string; ARow: Integer): Variant;overload;
    procedure SetRowData(AFieldName: string; ARow: Integer; const Value: Variant);
    function GetQueryDictionary: TDictionary<string, TDictionary<Integer, string>>;
    function GetActiveDataSet: TClientDataSet;
    function GetActiveGridView: TcxCustomGridView;
    function GetMultSel: Boolean;
    procedure SetMultSel(const Value: Boolean);
    procedure FreeGridView(ALevel:TcxGridLevel);
    function GetColumnDictionary: TDictionary<string, string>;
    { Private declarations }
  protected
    FCloseButtonRec:Integer;
    FPrintButtonRec:Integer;
    procedure DoReparePrintData; override;
    procedure DoShow; override;
    procedure SetGrid;virtual;   //表格的数据读取及设置
    procedure CustomGrid(AView :TcxCustomGridView);overload;virtual;
    procedure CustomGrid(AView :TcxCustomGridView;AJson:TJSONObject);overload;virtual;
    function AddGridView(ALevel:TcxGridLevel=nil;AGridName:string=''):TcxGridLevel;overload;virtual;
    function AddGridView(AJson:TJSONValue;ALevel:TcxGridLevel=nil):TcxGridLevel;overload;virtual;
    procedure iniForm;virtual;
    procedure LoadFormLayout;virtual; //加载窗体样式（查询条件）
    procedure LoadData;virtual;       //本函数用于装载数据
    procedure OnIniButton(Sender: TObject); virtual;
    procedure OnGridViewDblClick(Sender:Tobject);virtual;
    procedure OnGridViewSelectionChanged(Sender: TcxCustomGridTableView);virtual;
    procedure OnColumnGetDataText(Sender: TcxCustomGridTableItem; ARecordIndex: Integer; var AText: string);virtual;
    procedure OnColnumGetDisplayText(Sender: TcxCustomGridTableItem; ARecord: TcxCustomGridRecord; var AText: string);virtual;
    procedure OnColnumGetFilterDisplayText(Sender: TcxCustomGridTableItem; const AValue: Variant; var ADisplayText: string);virtual;
  public
    { Public declarations }
    destructor Destroy; override;
    procedure DoPrintHeader; override;
    procedure RefreshParamList;virtual;
    procedure RefreshData;override;
    procedure RefreshGrid;virtual;
    property Condition:TConditionManager read FCondition;
    property ButtonList:TButtonManager read FButton;
    /// <summary>
    /// 查询数据集的数据字典
    /// </summary>
    property QueryDictionary:TDictionary<string,TDictionary<Integer,string>> read GetQueryDictionary;
    /// <summary>
    /// 表格列的数据字典
    /// </summary>
    property ColumnDictionary:TDictionary<string,string> read GetColumnDictionary;
    property MainGrid:TcxGrid read FMainGrid;
    property MainView:TcxGridDBTableView read GetMainView;
    property ItemView[index:Integer]:TcxCustomGridView read GetMainIndexView;
    property ActiveRowIndex:Integer read GetActiveRowIndex;
    property ActiveGridView: TcxCustomGridView read GetActiveGridView;
    property ActiveDataSet:TClientDataSet read GetActiveDataSet;
    property ItemColumn[AFieldName:string]: TcxGridDBColumn read GetItemColumn;
    property RowData[AFieldName:string;ARow:Integer]: Variant read GetRowData write SetRowData;
    property GridDblClickID:Integer read FGridDblClickID write FGridDblClickID;
    property MultSel: Boolean read GetMultSel write SetMultSel;
    property UseMasterAndDetail: Boolean read FUseMasterAndDetail write FUseMasterAndDetail;
    property DetailGridView : TcxCustomGridView read FDetailGridView;
    function GetRowText(AFieldName:string;ARow:Integer=-1):string;
    function GetRowData<T>(AFieldName:string;ARow:Integer=-1):T; overload;
  end;
  TConditionManager = class(TControlManagerLayout)
  private
    FFindButton:TButton;
    function GetFindButton: TButton;
  protected
    procedure CreateControlAfter(AControl:TControlItem);override;
  public
    destructor Destroy; override;
    procedure RefreshCondition; override;
    property FindButton:TButton read GetFindButton;
  end;

const C_QueryMode_OPENSQL  = 0;    //查询SQL
const C_QueryMode_OPENPROC = 1;    //查询过程
const C_QueryMode_OPENJSON = 2;    //查询JSON

implementation

uses
  UComvar, System.IOUtils, UJsonObjectHelper, UComDBStorable,
  UComConst, cxFindPanel, System.Rtti;

{$R *.dfm}

function TCustomBaseQuery.AddGridView(ALevel:TcxGridLevel;AGridName:string): TcxGridLevel;
begin
  if not Assigned(ALevel) then ALevel := MainGrid.Levels;  
  Result:= CreatecxGridView(MainGrid,ALevel,AGridName);
  TcxGridDBTableView(Result.GridView).OnDblClick := OnGridViewDblClick;
  //TcxGridDBTableView(Result.GridView).OptionsSelection.CellSelect := True;//单元格的复制
  TcxGridDBTableView(Result.GridView).FindPanel.DisplayMode := fpdmManual;//fpdmAlways;//fpdmManual;   //Ctrl+F  显示查询面板
  TcxGridDBTableView(Result.GridView).FindPanel.InfoText    := '输入文本进行搜索';
  TcxGridDBTableView(Result.GridView).FindPanel.Location    := fplGroupByBox;
  //过滤筛选
  //TcxGridDBTableView(Result).OptionsCustomize.ColumnFiltering := True;
  //创建自定义字段
  Result.GridView.BeginUpdate();
  try
    CustomGrid(Result.GridView);
  finally
    Result.GridView.EndUpdate;
  end;
end;

procedure TCustomBaseQuery.CustomGrid(AView: TcxCustomGridView);
begin
  inherited;
  if not FileExists(LayoutFilePath) then Exit;
  if not Assigned(LayoutJson) then Exit;
  if not LayoutJson.Exists('GridList') then Exit;
  if LayoutJson.GetValue('GridList') is TJSONArray then
  begin
    for var item in LayoutJson.A['GridList'] do
    begin
      if string.Compare(item.GetValue<string>('Name',''),AView.Name)=0 then
      begin
        CustomGrid(AView,item as TJSONObject);
        Break;
      end;
    end;
  end else CustomGrid(AView,LayoutJson.O['GridList'].O[AView.Name]);
end;

function TCustomBaseQuery.AddGridView(AJson: TJSONValue; ALevel: TcxGridLevel): TcxGridLevel;
begin
  if not Assigned(AJson) then Exit;
  if not Assigned(ALevel) then ALevel := MainGrid.Levels;
  if AJson is TJSONArray then
  begin
    for var item in AJson as TJSONArray do
    begin
      //ALevel := AddGridView(ALevel,item.GetValue<string>('Name',''));
      Result := CreatecxGridView(MainGrid,ALevel,item.GetValue<string>('Name',''));
      Result.Caption := item.GetValue<string>('Caption','');
      TcxGridDBTableView(Result.GridView).OnDblClick := OnGridViewDblClick;
      TcxGridDBTableView(Result.GridView).FindPanel.DisplayMode := fpdmManual;//fpdmAlways;//fpdmManual;   //Ctrl+F  显示查询面板
      TcxGridDBTableView(Result.GridView).FindPanel.InfoText    := '输入文本进行搜索';
      TcxGridDBTableView(Result.GridView).FindPanel.Location    := fplGroupByBox;
      //表格是否多选
      if item.GetValue<Boolean>('MultSel',False) then
      begin
        TcxGridDBTableView(Result.GridView).OptionsSelection.MultiSelect := True;
        TcxGridDBTableView(Result.GridView).OptionsSelection.CellMultiSelect := True;
        TcxGridDBTableView(Result.GridView).OptionsSelection.CheckBoxVisibility := [cbvDataRow, cbvGroupRow, cbvColumnHeader];
      end;
      //过滤筛选
      //TcxGridDBTableView(Result).OptionsCustomize.ColumnFiltering := True;
      //创建自定义字段
      Result.GridView.BeginUpdate();
      try
        CustomGrid(Result.GridView,item as TJSONObject);
        if Result.GridView.IsDetail then
        begin
          FDetailGridView := Result.GridView;
          TcxGridDBTableView(Result.GridView).OptionsView.GroupByBox := False;
        end;
      finally
        Result.GridView.EndUpdate;
      end;
      //递归子表
      if TJSONObject(item).Exists('GridList') and Assigned(item.GetValue<TJSONArray>('GridList')) then AddGridView(item.GetValue<TJSONArray>('GridList'),Result);
    end;
  end else AddGridView(ALevel).Caption := AJson.GetValue<string>('Caption','');
end;

procedure TCustomBaseQuery.CustomGrid(AView: TcxCustomGridView; AJson: TJSONObject);
var _Column:TcxGridColumn;
begin
  inherited;
  if not Assigned(AJson) then Exit;
  var _ProceName : string := EmptyStr;
  var _SQLText   : string := EmptyStr;
  AJson.TryGetValue<string>('ProceName',_ProceName);
  AJson.TryGetValue<string>('SQLText',_SQLText);
  var _Dic := TDictionary<Integer,string>.Create;
  _Dic.AddOrSetValue(C_QueryMode_OPENSQL,_SQLText);
  _Dic.AddOrSetValue(C_QueryMode_OPENPROC,_ProceName);
  _Dic.AddOrSetValue(C_QueryMode_OPENJSON,AJson.S['JSON']);
  QueryDictionary.AddOrSetValue(AView.Name,_Dic);
  if (AView is TcxGridDBTableView) then
  begin
    (AView as TcxGridDBTableView).DataController.DetailKeyFieldNames := AJson.S['DetailKeyFieldNames'];
    (AView as TcxGridDBTableView).DataController.KeyFieldNames       := AJson.S['KeyFieldNames'];
    (AView as TcxGridDBTableView).DataController.MasterKeyFieldNames := AJson.S['MasterKeyFieldNames'];
  end;
  if not AJson.Exists('FieldList') then Exit;
  if not (AJson.Values['FieldList'] is TJSONArray) then Exit;
  for var item in AJson.A['FieldList'] do
  begin
    if (AView is TcxGridDBTableView) then
    begin
      _Column := (AView as TcxGridDBTableView).CreateColumn;
      TcxGridDBColumn(_Column).DataBinding.FieldName := item.GetValue<string>('FieldName');
      //if Assigned(item.FindValue('BasicInfo')) then _Column.Options.FilteringWithFindPanel := False;  是否参与过滤
    end else if AView is TcxGridTableView then
    begin
      _Column := (AView as TcxGridTableView).CreateColumn;
      //_Column.DataBinding.FieldName := item.GetValue<string>('FieldName');
    end;
    _Column.Name    := AView.Name + item.GetValue<string>('FieldName');
    _Column.Caption := item.GetValue<string>('Caption');
    _Column.Width   := item.GetValue<Integer>('Width',80);
    _Column.HeaderAlignmentHorz   := taCenter;
    _Column.Visible := item.GetValue<Boolean>('Visible',False);
    _Column.VisibleForCustomization := item.GetValue<Boolean>('VisibleForCustomization',Visible);
    //_Column.OnGetFilterDisplayText  := OnColnumGetFilterDisplayText;
    _Column.OnGetDataText    := OnColumnGetDataText;
    _Column.OnGetDisplayText := OnColnumGetDisplayText;
    //_Column.Options.Filtering:= True;
    ColumnDictionary.AddOrSetValue(_Column.Name,item.ToJSON);
  end;
end;

destructor TCustomBaseQuery.Destroy;
begin
  if Assigned(FCondition) then FreeAndNil(FCondition);
  if Assigned(FButton) then FreeAndNil(FButton);
  if Assigned(MainGrid) then FreeGridView(MainGrid.Levels);
  if Assigned(FColumnDictionary) then FreeAndNil(FColumnDictionary);  
  if Assigned(FQueryDictionary) then
  begin
    for var dic in FQueryDictionary.Values do
      if Assigned(dic) then FreeAndNil(dic);
    FreeAndNil(FQueryDictionary);
  end;
  inherited;
end;

procedure TCustomBaseQuery.DoPrintHeader;
begin
  inherited;
  for var item in Condition do
  begin
    PrintItems.Add(item.Value.Caption,item.Value.ValueText);
  end;
end;

procedure TCustomBaseQuery.DoReparePrintData;
begin
  inherited;
  PrintDetailData := GetPrintData(ActiveGridView);
end;

procedure TCustomBaseQuery.DoShow;
begin
  iniForm;
  LoadFormLayout;
  SetGrid;
  inherited;
end;

procedure TCustomBaseQuery.FreeGridView(ALevel: TcxGridLevel);
begin
  for var i := ALevel.Count-1 downto 0 do
  begin
    //递归释放子类
    if ALevel[i].Count>0 then FreeGridView(ALevel[i]);
    var GridView := ALevel[i].GridView;
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

function TCustomBaseQuery.GetActiveDataSet: TClientDataSet;
begin
  Result := TcxGridDBTableView(MainGrid.ActiveView).DataController.DataSet as TClientDataSet
end;

function TCustomBaseQuery.GetActiveGridView: TcxCustomGridView;
begin
  Result := MainGrid.ActiveView;
end;

function TCustomBaseQuery.GetActiveRowIndex: Integer;
begin
  Result := ActiveGridView.DataController.FocusedRecordIndex;      //表格行
//  Result := MainGrid.ActiveView.DataController.FocusedRecordIndex;     //数据行
end;

function TCustomBaseQuery.GetColumnDictionary: TDictionary<string, string>;
begin
  if not Assigned(FColumnDictionary) then FColumnDictionary := TDictionary<string,string>.Create;
  Result := FColumnDictionary;
end;

function TCustomBaseQuery.GetItemColumn(AFieldName: string): TcxGridDBColumn;
begin
  Result := MainView.GetColumnByFieldName(AFieldName);
end;

function TCustomBaseQuery.GetMainIndexView(index: Integer): TcxCustomGridView;
begin
  Result := MainGrid.Levels[index].GridView;
end;

function TCustomBaseQuery.GetMainView: TcxGridDBTableView;
begin
  var view := MainGrid.ActiveView;
  if view is TcxGridDBTableView then
    Result := view as TcxGridDBTableView;
end;

function TCustomBaseQuery.GetMultSel: Boolean;
begin
  Result := TcxGridDBTableView(ActiveGridView).OptionsSelection.MultiSelect;
end;

function TCustomBaseQuery.GetQueryDictionary: TDictionary<string, TDictionary<Integer, string>>;
begin
  if not Assigned(FQueryDictionary) then FQueryDictionary := TDictionary<string,TDictionary<Integer,string>>.Create;
  Result := FQueryDictionary;
end;

function TCustomBaseQuery.GetRowData(AFieldName: string;  ARow: Integer): Variant;
begin
  Result := null;
  if not Assigned(MainGrid) then Exit;
  if not Assigned(MainGrid.ActiveView) then Exit;
  if (MainGrid.ActiveView.DataController.RowCount=0) or (ARow>=MainGrid.ActiveView.DataController.RowCount) or (ARow<0) then Exit;
  var _column := ItemColumn[AFieldName];
  if not Assigned(_column) then Exit;
  if not(MainGrid.ActiveView is TcxGridDBTableView) then
    Result := MainGrid.ActiveView.DataController.Values[ARow,_column.Index]      //排序过滤后取值异常
  else
    Result := MainView.DataController.GetRowValue(MainView.DataController.GetRowInfo(ARow),_column.Index);  //排序过滤后取值正常
end;

function TCustomBaseQuery.GetRowText(AFieldName: string; ARow: Integer): string;
begin
  Result := EmptyStr;
  if not Assigned(MainGrid) then Exit;
  if not Assigned(MainGrid.ActiveView) then Exit;
  if ARow<0 then ARow := ActiveRowIndex;
  if (MainGrid.ActiveView.DataController.RowCount=0) or (ARow>=MainGrid.ActiveView.DataController.RowCount) or (ARow<0) then Exit;
  var _column := ItemColumn[AFieldName];
  if not Assigned(_column) then Exit;
  if not(MainGrid.ActiveView is TcxGridDBTableView) then
  begin
    Result := MainGrid.ActiveView.DataController.Values[ARow,_column.Index]      //排序过滤后取值异常
  end else begin
    var RowInfo := MainView.DataController.GetRowInfo(ARow);
    if VarIsNull(MainView.DataController.GetRowValue(RowInfo,_column.Index)) then Exit;
    Result := MainView.DataController.GetRowValue(RowInfo,_column.Index);  //排序过滤后取值正常
    if Assigned(_column.OnGetDisplayText) then _column.OnGetDisplayText(_column,MainView.ViewData.Records[RowInfo.RowIndex],Result);
  end;
end;

function TCustomBaseQuery.GetRowData<T>(AFieldName: string; ARow: Integer): T;
begin
  Result := Default(T);
  if ARow<0 then ARow := ActiveRowIndex;
  var AValue := RowData[AFieldName,ARow];
  //if not Assigned(ItemColumn[AFieldName]) then Exit;
  //var AValue := MainView.DataController.GetItemByFieldName(AFieldName).EditValue;
  if VarIsNull(AValue) then Exit;  
  //Result := TValue.FromVariant(AValue).AsType<T>;
  Result := TValue.From<Variant>(AValue).AsType<T>;
end;

procedure TCustomBaseQuery.iniForm;
begin
  if not Assigned(FCondition) then FCondition := TConditionManager.Create;
  Condition.Parent := Panel_Top;
  Condition.OWnerObject := Self;
  if not Assigned(FButton) then FButton := TButtonManager.Create;
  ButtonList.Parent := Panel_Button;
  ButtonList.OWnerObject := Self;
  //子类继承添加按钮
  OnIniButton(nil);
end;

procedure TCustomBaseQuery.LoadData;
begin

end;

procedure TCustomBaseQuery.LoadFormLayout;
var Json:TJSONObject;
begin
  if FileExists(LayoutFilePath) then
  begin
    JSON := TJSONObject.ParseJSONValue(TFile.ReadAllText(LayoutFilePath)) as TJSONObject;
    try
      if not Assigned(JSON) then Exit;
      self.Caption := JSON.GetValue<string>('Caption',Caption);
      if JSON.Exists('ParamList') then
        for var item in JSON.O['ParamList'] do
          ParamList.Add(item.JsonString.Value,JSON.O['ParamList'].T[item.JsonString.Value]);
      if not(JSON.Values['Condition'] is TJSONArray) then Exit;
      for var item in JSON.Values['Condition'] as TJSONArray do
      begin
        var _ControlType:Integer := 0;
        var _Name:string := EmptyStr;
        var _Caption:string := EmptyStr;
        var _TextHint:string := EmptyStr;
        var _MustField:Boolean := False;
        var _Visible:Boolean := True;

        if not item.TryGetValue<Integer>('ControlType',_ControlType) then Continue;
        item.TryGetValue<string>('Name',_Name);
        item.TryGetValue<string>('Caption',_Caption);
        item.TryGetValue<string>('TextHint',_TextHint);
        item.TryGetValue<Boolean>('MustField',_MustField);
        item.TryGetValue<Boolean>('Visible',_Visible);
        case _ControlType of
          17:Condition.AddDateBetween(_Name.TrimLeft(['@']),_Caption.Trim,_MustField,_Visible);   //时间段
        else
          Condition.Add(item as TJSONObject);
          //Condition.Add(_ControlType,_Name.TrimLeft(['@']),_Caption.Trim,_MustField,_Visible,_TextHint);
        end;
      end;
    finally
      JSON.Free;
    end;
  end;
end;

procedure TCustomBaseQuery.OnColnumGetDisplayText(Sender: TcxCustomGridTableItem; ARecord: TcxCustomGridRecord; var AText: string);
begin
  if not ColumnDictionary.ContainsKey(Sender.Name) then Exit;
  var _s := ColumnDictionary.Items[Sender.Name];
  var AJson := TJSONObject.SO(_s);
  try
    if not Assigned(AJson) then Exit;
    if not AJson.Exists('BasicInfo') then Exit;
    var ABasicType:Integer;
    var ABasicField,ABasicDisplay:string;
    if not AJson.O['BasicInfo'].TryGetValue<Integer>('BasicType',ABasicType) then Exit;
    if not AJson.O['BasicInfo'].TryGetValue<string>('BasicField',ABasicField) then Exit;
    if not AJson.O['BasicInfo'].TryGetValue<string>('BasicDisplay',ABasicDisplay) then Exit;
    //判断本地化数据是否为枚举值
    var ADisplay := Goo.Local.BasicData[TBasicType(ABasicType)].First.AttributeFieldDisplayText[ABasicDisplay];
    if Assigned(ADisplay) and (ADisplay.Count>0) and ADisplay.ContainsKey(AText.Trim) then AText := ADisplay.Items[AText.Trim];
  finally
    AJson.Free;
  end;
  {var APropName := (Sender as TcxGridDBColumn).DataBinding.FieldName;
  if not Assigned(LayoutJson) then Exit;
  if not LayoutJson.Exists('GridLayout') then Exit;
  var _name := (Sender as TcxGridDBColumn).GridView.Name;
  if not LayoutJson.O['GridLayout'].Exists(_name) then Exit;
  for var item in LayoutJson.O['GridLayout'].O[_name].A['FieldList'] do
  begin
    if SameText(item.GetValue<string>('FieldName',''),APropName) then  //寻找列属性
    begin
      if not TJSONObject(item).Exists('BasicInfo') then Continue;
      var ABasicType:Integer;
      var ABasicField,ABasicDisplay:string;
      if not TJSONObject(item).O['BasicInfo'].TryGetValue<Integer>('BasicType',ABasicType) then Continue;
      if not TJSONObject(item).O['BasicInfo'].TryGetValue<string>('BasicField',ABasicField) then Continue;
      if not TJSONObject(item).O['BasicInfo'].TryGetValue<string>('BasicDisplay',ABasicDisplay) then Continue;
      //var ABasicRec : Integer := MainView.DataController.Values[ARecord.Index,ItemColumn[ABasicField].ID];//RowData[ABasicField,ARecord.Index];
      //if not Goo.Local.BasicData[TBasicType(ABasicType)].ContainsKey(ABasicRec) then Continue;
      //AText := Goo.Local.GetRec<TStorable_BType>(RowData[TJSONObject(item).O['BasicInfo'].S['BasicField'],ARecord.Index]).FullName;
      //AText := Goo.Local.BasicData[TBasicType(ABasicType)].GetValue(ABasicDisplay,ABasicRec);
      //判断本地化数据是否为枚举值
      var ADisplay := Goo.Local.BasicData[TBasicType(ABasicType)].First.AttributeFieldDisplayText[ABasicDisplay];
      if Assigned(ADisplay) and (ADisplay.Count>0) and ADisplay.ContainsKey(AText.Trim) then AText := ADisplay.Items[AText.Trim];
      Break;
    end;
  end;}
end;

procedure TCustomBaseQuery.OnColnumGetFilterDisplayText(Sender: TcxCustomGridTableItem; const AValue: Variant; var ADisplayText: string);
begin
  if VarIsNull(AValue) then ADisplayText := EmptyStr;
end;

procedure TCustomBaseQuery.OnColumnGetDataText(Sender: TcxCustomGridTableItem;  ARecordIndex: Integer; var AText: string);
begin
  var _viewname := Sender.Name;
  if (_viewname=EmptyStr) and Assigned(DetailGridView) and DetailGridView.IsDetail then _viewname := DetailGridView.Name+TcxGridDBColumn(Sender).DataBinding.FieldName;
  if not ColumnDictionary.ContainsKey(_viewname) then Exit;
  var _s := ColumnDictionary.Items[_viewname];
  var AJson := TJSONObject.SO(_s);
  try
    if not Assigned(AJson) then Exit;
    if not AJson.Exists('BasicInfo') then Exit;
    var ABasicType:Integer;
    var ABasicField,ABasicDisplay:string;
    if not AJson.O['BasicInfo'].TryGetValue<Integer>('BasicType',ABasicType) then Exit;
    if not AJson.O['BasicInfo'].TryGetValue<string>('BasicField',ABasicField) then Exit;
    if not AJson.O['BasicInfo'].TryGetValue<string>('BasicDisplay',ABasicDisplay) then Exit;
    try
      var _view := Sender.GridView as TcxGridDBTableView;
      var _filed:= _view.GetColumnByFieldName(ABasicField);
      if not Assigned(_filed) then Exit;
      var ABasicRec : Integer := _view.DataController.Values[ARecordIndex,_filed.ID];// RowData[ABasicField,ARecordIndex];
      if not Goo.Local.BasicData[TBasicType(ABasicType)].ContainsKey(ABasicRec) then Exit;
      AText := Goo.Local.BasicData[TBasicType(ABasicType)].GetValue(ABasicDisplay,ABasicRec);
    except on E: Exception do Goo.Logger.Error('%s.OnColumnGetDataText(%s):%s',[ClassName,Sender.Name,E.Message])
    end;
  finally
    AJson.Free;
  end;
  {try
    var APropName := (Sender as TcxGridDBColumn).DataBinding.FieldName;
    if not Assigned(LayoutJson) then Exit;
    if not LayoutJson.Exists('GridLayout') then Exit;
    var _name := (Sender as TcxGridDBColumn).GridView.Name;
    if (Sender as TcxGridDBColumn).GridView.IsDetail and (_name=EmptyStr) then _name :='MainGridView2';
    if not LayoutJson.O['GridLayout'].Exists(_name) then Exit;
    for var item in LayoutJson.O['GridLayout'].O[_name].A['FieldList'] do
    begin
      if SameText(item.GetValue<string>('FieldName',''),APropName) then  //寻找列属性
      begin
        if not TJSONObject(item).Exists('BasicInfo') then Continue;
        var ABasicType:Integer;
        var ABasicField,ABasicDisplay:string;
        if not TJSONObject(item).O['BasicInfo'].TryGetValue<Integer>('BasicType',ABasicType) then Continue;
        if not TJSONObject(item).O['BasicInfo'].TryGetValue<string>('BasicField',ABasicField) then Continue;
        if not TJSONObject(item).O['BasicInfo'].TryGetValue<string>('BasicDisplay',ABasicDisplay) then Continue;
        var ABasicRec : Integer := MainView.DataController.Values[ARecordIndex,ItemColumn[ABasicField].ID];// RowData[ABasicField,ARecordIndex];
        if not Goo.Local.BasicData[TBasicType(ABasicType)].ContainsKey(ABasicRec) then Continue;
        AText := Goo.Local.BasicData[TBasicType(ABasicType)].GetValue(ABasicDisplay,ABasicRec);
        Break;
      end;
    end;
  except on E: Exception do
  end;}
end;

procedure TCustomBaseQuery.OnGridViewDblClick(Sender: Tobject);
begin
  if Assigned(ItemColumn['TypeID']) and not VarIsNull(RowData['Sonnum',ActiveRowIndex]) and (RowData['Sonnum',ActiveRowIndex]>0) then
  begin
    Self.ParamList.Add('@ParID',RowData['TypeID',ActiveRowIndex]);
    RefreshData;
  end
  else if (GridDblClickID>0) and Assigned(ButtonList.Button[GridDblClickID]) then ButtonList.Button[GridDblClickID].OnClick(Sender);
end;

procedure TCustomBaseQuery.OnGridViewSelectionChanged(Sender: TcxCustomGridTableView);
begin

end;

procedure TCustomBaseQuery.OnIniButton(Sender: TObject);
begin
  FCloseButtonRec := ButtonList.Add(Action_Close,True);//关闭
  FPrintButtonRec := ButtonList.Add(Action_Print,True);//打印
  if FormStyle in [fsNormal,fsStayOnTop] then ButtonList.Button[FCloseButtonRec].Cancel := True;
end;

procedure TCustomBaseQuery.RefreshData;
begin
  inherited;
  RefreshParamList;
  LoadData;
  RefreshGrid;
end;

procedure TCustomBaseQuery.RefreshGrid;
begin

end;

procedure TCustomBaseQuery.RefreshParamList;
begin
  Condition.RefreshParamList;
end;

procedure TCustomBaseQuery.SetGrid;
begin
  Condition.RefreshCondition;
  ButtonList.RefreshButton;
  {创建表格}
  FMainGrid := CreatecxGrid('MaincxGrid',Panel_Client);
  {创建数据层}
  //var AView := AddGridView;
  {创建Master/Detail}
  //if UseMasterAndDetail then AddGridView(TcxGridLevel(AView.Level));
  if Assigned(LayoutJson) and LayoutJson.Exists('GridList') then AddGridView(LayoutJson.GetValue<TJSONValue>('GridList'))
  else AddGridView;
end;

procedure TCustomBaseQuery.SetMultSel(const Value: Boolean);
begin
  if Value then
  begin
    TcxGridDBTableView(ActiveGridView).OptionsSelection.MultiSelect := True;
    TcxGridDBTableView(ActiveGridView).OptionsSelection.CellMultiSelect := True;
    TcxGridDBTableView(ActiveGridView).OptionsSelection.CheckBoxVisibility := [cbvDataRow, cbvGroupRow, cbvColumnHeader];
    MainView.OnSelectionChanged := OnGridViewSelectionChanged;
  end else begin
    TcxGridDBTableView(ActiveGridView).OptionsSelection.MultiSelect := False;
    TcxGridDBTableView(ActiveGridView).OptionsSelection.CellMultiSelect := False;
    TcxGridDBTableView(ActiveGridView).OptionsSelection.CheckBoxVisibility := TcxGridDBTableView(ActiveGridView).OptionsSelection.CheckBoxVisibility-[cbvDataRow, cbvGroupRow, cbvColumnHeader];
  end;
end;

procedure TCustomBaseQuery.SetRowData(AFieldName: string; ARow: Integer; const Value: Variant);
begin
  if not Assigned(MainGrid) then Exit;
  if not Assigned(MainGrid.ActiveView) then Exit;
  if (MainGrid.ActiveView.DataController.RowCount=0) or (ARow>=MainGrid.ActiveView.DataController.RowCount) then Exit;
  if MainGrid.ActiveView is TcxGridTableView then
  begin
    for var I := 0 to (MainGrid.ActiveView as TcxGridTableView).ColumnCount-1 do
    begin
      if string((MainGrid.ActiveView as TcxGridTableView).Columns[i].Name).EndsWith(AFieldName,True) then
      begin
        MainGrid.ActiveView.DataController.Values[ARow,(MainGrid.ActiveView as TcxGridTableView).Columns[i].Index] := Value;
        Break;
      end;
    end;
  end else begin
    var _column := ItemColumn[AFieldName];
    if not Assigned(_column) then Exit;
    MainView.DataController.Values[MainView.DataController.GetRowInfo(ARow).RecordIndex,_column.Index] := Value;
  end;
end;

procedure TConditionManager.CreateControlAfter(AControl: TControlItem);
begin
  inherited;
  if AControl is TControlItem_Edit then
  begin
    with AControl as TControlItem_Edit do
    begin
      //LeftButtonImageIndex := 7
    end;
  end;
end;

destructor TConditionManager.Destroy;
begin
  if Assigned(FFindButton) then FreeAndNil(FFindButton);
  inherited;
end;

function TConditionManager.GetFindButton: TButton;
begin
  if not Assigned(FFindButton) then FFindButton := TButton.Create(Parent);
  Result := FFindButton;
end;

procedure TConditionManager.RefreshCondition;
begin
  Self.Width := Self.Width-200;
  inherited;
  //单独刷新查询按钮
  FindButton.Parent  := self.Parent;
  FindButton.Caption := '查询';
  FindButton.Top     := Control_Border_Width - 5;
  FindButton.Left    := Parent.Width - FindButton.Width - 20;
  FindButton.Anchors := [TAnchorKind.akRight,TAnchorKind.akTop];
  FindButton.OnClick := TCustomBaseQuery(OWnerObject).DoRefreshDataByMessage;
end;

end.
