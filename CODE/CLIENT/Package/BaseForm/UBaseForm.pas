unit UBaseForm;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants,
  System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, System.ImageList, Vcl.ImgList,
  System.Actions, Vcl.ActnList, UGlobalInterface, UParamList, Datasnap.DBClient,
  Vcl.ExtCtrls, UComConst, UPrintItem, cxClasses, cxStyles, cxGraphics,
  cxControls, cxLookAndFeels, cxLookAndFeelPainters, cxCustomData, cxFilter,
  cxData, cxDataStorage, cxEdit, cxNavigator, dxDateRanges,
  dxScrollbarAnnotations, Data.DB, cxDBData, cxGridLevel, cxGridCustomView,
  cxGridCustomTableView, cxGridTableView, cxGridDBTableView, cxGrid,
  cxGridPopupMenu, cxGridCustomPopupMenu, Vcl.Menus, UParamForm;

type
  TGridOption = (dgAppending, dgEditing, dgAlwaysShowEditor, dgTitles, dgIndicator,
    dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect,
    dgAlwaysShowSelection, dgConfirmDelete, dgCancelOnExit, dgMultiSelect,
    dgTitleClick, dgTitleHotTrack,dgExportToExcel);
  // 表格属性
  TGridOptions = set of TGridOption;

  TBaseForm = class(TParamForm, IForm)
    ActionList: TActionList;
    ImageList: TImageList;
    Action_Close: TAction;
    Action_Print: TAction;
    Action_Help: TAction;
    cxStyleRepository: TcxStyleRepository;
    cxStyle_GridView_Header: TcxStyle;
    cxStyle_GridView_Content: TcxStyle;
    cxStyle_GridView_ContentOdd: TcxStyle;
    cxStyle_GridView_ContentEven: TcxStyle;
    cxStyle_GridView_Selection: TcxStyle;
    cxStyle_GridView_Footer: TcxStyle;
    procedure FormCreate(Sender: TObject);
    procedure Action_CloseExecute(Sender: TObject);
    procedure Action_HelpExecute(Sender: TObject);
    procedure Action_PrintExecute(Sender: TObject);
  private
    FGridDataSet: TClientDataSet;
    FPrintTimes: Integer;
    FRefreshDataMessageID: Integer;
    FPrintItems: TPrintItems;
    FPrintName: string;
    FPrintDetailData: OleVariant;
    FGridPopupMenu: TcxGridPopupMenu;
    FGridOptions: TGridOptions;
    FLayoutFileName: string;
    FLayoutCustom: Boolean;
    function GetForm: TForm;
    function GetActionList: TActionList;
    procedure SetParamList(AParamList: TParamList);
    procedure ShowFindDialog(var Message: TMessage); message REFRESH_FIND_MESSAGE;
    procedure DealRefreshRefreshDataMessage(var Msg: TMessage); message WM_RefreshData;
    function GetLayoutFileName: string;
    procedure SetLayoutFileName(const Value: string);
    function GetLayoutFilePath: string;
  protected
    procedure DoShow; override;
    procedure DoClose(var Action: TCloseAction); override;
    procedure BeforeFormShow; virtual;
    property GridDataSet: TClientDataSet read FGridDataSet;
    property GridOptions: TGridOptions read FGridOptions write FGridOptions;
    function Find(const Msg: string; Reverse, Whole, Match: Boolean) : Boolean; virtual;
    procedure DoCloseBtnEvent; virtual;
    procedure DoHelpBtnEvent; virtual;
    procedure DoReparePrintData; virtual;
    procedure DoPrintBtnEvent; virtual;
    procedure DoPrintHeader; virtual;
    // 刷新事件
    procedure DoRefreshDataByMessage(Sender: TObject); virtual;
    procedure DoExportGridToExcel(Sender: TObject); virtual;
    procedure RefreshData; virtual;
    // 表格
    procedure DoGridViewLayout(Sender: TObject); virtual;
    procedure StoreToIniFile; virtual;
    procedure DoCustomDrawIndicatorCell(Sender: TcxGridTableView; ACanvas: TcxCanvas; AViewInfo: TcxCustomGridIndicatorItemViewInfo; var ADone: Boolean); virtual;
    procedure DoCustomDrawCell(Sender: TcxCustomGridTableView; ACanvas: TcxCanvas; AViewInfo: TcxGridTableDataCellViewInfo;var ADone: Boolean); virtual;
    // 表格列
    procedure DoCustomColumnGetStoredProperties(Sender: TcxCustomGridTableItem; AProperties: TStrings); virtual;
    // 右键菜单
    procedure DoAddGridPopupmenus(APopupmenu: TcxPopupMenuInfo); virtual;
    procedure AddGridPopupmenu(AAction: TAction);
  public
    destructor Destroy; override;
    procedure IniComponent(AForm: TForm); overload;
    procedure IniComponent(AComponent: TComponent); overload;
    procedure IniComponent(APanel: TPanel); overload;
    procedure IniComponent(AComponent: TRadioGroup); overload;
    /// 初始化cxGrid
    procedure IniComponent(AGrid: TcxGrid); overload;
    // 当天按钮的打印次数
    property PrintTimes: Integer read FPrintTimes;
    property PrintItems: TPrintItems read FPrintItems;
    property PrintName: string read FPrintName write FPrintName;
    property PrintDetailData: OleVariant read FPrintDetailData write FPrintDetailData;
    // 刷新类型ID
    property RefreshDataMessageID: Integer read FRefreshDataMessageID write FRefreshDataMessageID;
    // 发送页面的刷新消息
    procedure SendRefreshData(ARefreshID: Integer); overload;
    procedure SendRefreshData(ARefreshClass: string); overload;
    // 页面配置信息
    property LayoutCustom :Boolean  read FLayoutCustom write FLayoutCustom;
    property LayoutFileName :string read GetLayoutFileName write SetLayoutFileName;
    property LayoutFilePath :string read GetLayoutFilePath;
    ///创建控件方法列表
    function CreatecxGrid(const AName:string; AParent:TWinControl=nil):TcxGrid;
    function CreatecxGridView(AGrid:TcxGrid):TcxCustomGridView;
    function CreatecxGridColumn(AView:TcxCustomGridView):Integer;
    class function GetPrintData(AGridView:TcxCustomGridView):OleVariant;
  end;

var
  BaseForm: TBaseForm;

const
  Default_Color = clWhite;

implementation

uses
  UComvar, System.TypInfo, UBaseGridLayout, MidasLib, System.Math, System.JSON,
  System.IOUtils, cxGridExportLink;

{$R *.dfm}

procedure TBaseForm.BeforeFormShow;
begin
  IniComponent(Self);
end;

function TBaseForm.CreatecxGrid(const AName:string;AParent: TWinControl): TcxGrid;
begin
  Result := TcxGrid.Create(Self);
  Result.Name := AName;
  if Assigned(AParent) then
  begin
    Result.Parent := AParent;
    Result.Align  := alClient;
  end;
  IniComponent(Result);
end;

function TBaseForm.CreatecxGridColumn(AView: TcxCustomGridView): Integer;
var Json:TJSONObject;
begin
  Result := 0;
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
      Inc(Result);
    end;
  finally
    Json.Free;
  end;
end;

function TBaseForm.CreatecxGridView(AGrid:TcxGrid): TcxCustomGridView;
begin
  var Level := AGrid.Levels.Add;
  Result := TcxGridDBTableView.Create(Level);
  Level.GridView := Result;
  Result.Name := 'MainGridView' + AGrid.Levels.Count.ToString;
  {自动给数据表格创建一个数据集}
  TcxGridDBTableView(Result).DataController.DataSource := TDataSource.Create(Self);
  TcxGridDBTableView(Result).DataController.DataSource.DataSet := TClientDataSet.Create(Self);
  //TcxGridDBTableView(Result).DataController.DataModeController.GridMode := True;  //大数据加载速度提升，但是丢失表格的合计
  //TcxGridDBTableView(Result).OnDblClick := OnGridViewDblClick;
  //创建自定义字段
//  Result.BeginUpdate();
//  try
//    CustomGrid(Result);
//  finally
//    Result.EndUpdate;
//  end;
end;

procedure TBaseForm.DealRefreshRefreshDataMessage(var Msg: TMessage);
var
  AClassName: string;
begin
  if Msg.WParam > 0 then
    AClassName := string(Pointer(Msg.WParam)^);
  if ((FRefreshDataMessageID > 0) and (Msg.LParam = FRefreshDataMessageID)) or
    SameText(AClassName, ClassName) then
    DoRefreshDataByMessage(nil);
end;

destructor TBaseForm.Destroy;
begin
  if Assigned(FGridDataSet) then FreeAndNil(FGridDataSet);
  if Assigned(FPrintItems) then FreeAndNil(FPrintItems);
  if Assigned(FGridPopupMenu) then FreeAndNil(FGridPopupMenu);
  inherited;
end;

procedure TBaseForm.Action_CloseExecute(Sender: TObject);
begin
  DoCloseBtnEvent;
end;

procedure TBaseForm.Action_HelpExecute(Sender: TObject);
begin
  DoHelpBtnEvent;
end;

procedure TBaseForm.Action_PrintExecute(Sender: TObject);
begin
  DoPrintBtnEvent;
end;

procedure TBaseForm.AddGridPopupmenu(AAction: TAction);
begin

end;

procedure TBaseForm.DoAddGridPopupmenus(APopupmenu: TcxPopupMenuInfo);
begin
  if not Assigned(APopupmenu.PopupMenu) then APopupmenu.PopupMenu := TPopupMenu.Create(Self);
{$IFDEF DEBUG}
  if dgColumnResize in GridOptions then
  begin
    var _SetItem := TMenuItem.Create(APopupmenu.PopupMenu);
    _SetItem.Caption := '表格配置';
    _SetItem.OnClick := DoGridViewLayout;
    TPopupMenu(APopupmenu.PopupMenu).Items.Add(_SetItem);
  end;
{$ENDIF}
  var _MenuItem := TMenuItem.Create(APopupmenu.PopupMenu);
  _MenuItem.Caption := '刷新数据';
  _MenuItem.OnClick := DoRefreshDataByMessage;
  TPopupMenu(APopupmenu.PopupMenu).Items.Add(_MenuItem);
  var _MenuItem_ := TMenuItem.Create(APopupmenu.PopupMenu);
  _MenuItem_.Caption := '-';
  TPopupMenu(APopupmenu.PopupMenu).Items.Add(_MenuItem_);
  if dgExportToExcel in GridOptions then
  begin
    var _MenuItem_ExportExcel := TMenuItem.Create(APopupmenu.PopupMenu);
    _MenuItem_ExportExcel.Caption := '导出EXCEL';
    _MenuItem_ExportExcel.OnClick := DoExportGridToExcel;
    TPopupMenu(APopupmenu.PopupMenu).Items.Add(_MenuItem_ExportExcel);
  end;
end;

procedure TBaseForm.DoClose(var Action: TCloseAction);
begin
  inherited;
  try
    StoreToIniFile;
  except
    on E: Exception do Goo.Logger.Error('类：%s  保存配置信息错误，%s', [Self.ClassName, E.Message]);
  end;
end;

procedure TBaseForm.DoCloseBtnEvent;
begin
  if Self.BorderStyle = bsDialog then
    ModalResult := mrCancel
  else
    Close;
end;

procedure TBaseForm.DoCustomColumnGetStoredProperties(Sender: TcxCustomGridTableItem; AProperties: TStrings);
begin
  AProperties.Add('Caption'); // 标签
  AProperties.Add('VisibleForCustomization'); // 能否用户自定义
  AProperties.Add('Name');                    //数据绑定
end;

procedure TBaseForm.DoCustomDrawCell(Sender: TcxCustomGridTableView;
  ACanvas: TcxCanvas; AViewInfo: TcxGridTableDataCellViewInfo; var ADone: Boolean);
begin
  if AViewInfo.Focused then
  begin
    ACanvas.Canvas.Brush.Color := Goo.Theme.Grid.GridRowFocusColor;
    // ACanvas.Font.Color := clred; //红色字体
    // ACanvas.Font.Style := [fsUnderline];//带下划线
  end;
end;

procedure TBaseForm.DoCustomDrawIndicatorCell(Sender: TcxGridTableView;
  ACanvas: TcxCanvas; AViewInfo: TcxCustomGridIndicatorItemViewInfo;var ADone: Boolean);
var
  AIndicatorViewInfo: TcxGridIndicatorRowItemViewInfo;
  ATextRect: TRect;
  aCV: TcxCanvas;
  ARowStr:string;
begin
  aCV := ACanvas;
  ATextRect := AViewInfo.ContentBounds;
  if (AViewInfo is TcxGridIndicatorHeaderItemViewInfo) then
  begin
    ATextRect := AViewInfo.Bounds;
    InflateRect(ATextRect, -1, -1);
    Sender.LookAndFeelPainter.DrawHeader(ACanvas, AViewInfo.Bounds, ATextRect,
      [], cxBordersAll, cxbsNormal, taCenter, TcxAlignmentVert.vaCenter, False,
      False, '序号', aCV.Font, aCV.Font.Color, aCV.Brush.Color);
    ADone := True;
  end
  else if (AViewInfo is TcxGridIndicatorFooterItemViewInfo) then
  begin
    ATextRect := AViewInfo.Bounds;
    InflateRect(ATextRect, -1, -1);
    Sender.LookAndFeelPainter.DrawHeader(ACanvas, AViewInfo.Bounds, ATextRect,
      [], cxBordersAll, cxbsNormal, taCenter, TcxAlignmentVert.vaCenter, False,
      False, '合计', aCV.Font, aCV.Font.Color, aCV.Brush.Color);
    ADone := True;
  end
  else if (AViewInfo is TcxGridIndicatorRowItemViewInfo) then
  begin
    AIndicatorViewInfo := AViewInfo as TcxGridIndicatorRowItemViewInfo;
    InflateRect(ATextRect, -2, -1);
    if AIndicatorViewInfo.GridRecord.Selected then
    // 这个if段是为了在行号处把把选中的行号跟别的区分开，可不用
    begin
      aCV.Font.Style := Canvas.Font.Style + [fsBold];
      // aCV.Font.Name := '黑体';
      // aCV.Font.Size := 12;
      aCV.Font.Color := clRed;
    end
    else
    begin
      aCV.Font.Style := Canvas.Font.Style - [fsBold];
      aCV.Font.Color := Canvas.Font.Color;
    end;
    ARowStr := IntToStr(AIndicatorViewInfo.GridRecord.Index + 1);
    //处理基本信息的父类增加 *
    if (Sender is TcxGridDBTableView) then
    begin
      var _Sonnum := (Sender as TcxGridDBTableView).GetColumnByFieldName('Sonnum');
      if Assigned(_Sonnum) then
      begin
        var _value  := AIndicatorViewInfo.GridRecord.Values[_Sonnum.Index];
        if VarIsNumeric(_value) and _value>0 then ARowStr := ARowStr + '*';
      end;
    end;
    Sender.LookAndFeelPainter.DrawHeader(ACanvas, AViewInfo.ContentBounds, ATextRect, [], cxBordersAll, cxbsNormal, taCenter, vaCenter, False, False,
      ARowStr, aCV.Font,aCV.Font.Color, aCV.Brush.Color);
    ADone := True;
    // 画当前行的右三角
    ATextRect.Left := ATextRect.Width - 3;
    Sender.LookAndFeelPainter.DrawIndicatorImage(ACanvas, ATextRect,AIndicatorViewInfo.IndicatorKind);
  end;
end;

procedure TBaseForm.DoExportGridToExcel(Sender: TObject);
var SaveFileDialog: TSaveDialog;
begin
  SaveFileDialog := TSaveDialog.Create(nil);
  try
    SaveFileDialog.FileName := self.Caption;
    SaveFileDialog.Filter := '*.xls';
    if SaveFileDialog.Execute then
    begin
      if pos('.XLS', UpperCase(SaveFileDialog.FileName)) <= 0 then SaveFileDialog.FileName := SaveFileDialog.FileName + '.XLS';
      //ExportGridToExcel(SaveFileDialog.FileName, cxGrid);
    end;
  finally
    SaveFileDialog.Free;
  end;
end;

procedure TBaseForm.DoGridViewLayout(Sender: TObject);
begin
  if FGridPopupMenu.Count = 0 then Exit;
  ShowTablaViewLayout(Self,FGridPopupMenu.PopupMenus[0].GridView);
end;

procedure TBaseForm.DoHelpBtnEvent;
begin

end;

procedure TBaseForm.DoPrintBtnEvent;
begin
  try
     DoReparePrintData;
    // if PrintName='' then PrintName:=Title;
    if PrintName = '' then PrintName := Caption;
    if PrintDetailData = Null then PrintDetailData := GridDataSet.Data;
    DoPrintHeader;
    FPrintTimes := Goo.Print.RunPrintManage(PrintName, PrintItems, PrintDetailData);
  except
    on E: EAbort do
    else
      raise;
  end;
end;

procedure TBaseForm.DoPrintHeader;
begin

end;

procedure TBaseForm.DoRefreshDataByMessage(Sender: TObject);
begin
  RefreshData;
end;

procedure TBaseForm.DoReparePrintData;
begin

end;

procedure TBaseForm.DoShow;
begin
  inherited;
  BeforeFormShow;
end;

function TBaseForm.Find(const Msg: string;
  Reverse, Whole, Match: Boolean): Boolean;
begin
  Result := False;
end;

procedure TBaseForm.ShowFindDialog(var Message: TMessage);
var
  strMSG: string;
  AFlag: Integer;
begin
  strMSG := string(Pointer(Message.WParam)^);
  AFlag := Message.LParam;
  Find(strMSG, GetBitValue(AFlag, 1), GetBitValue(AFlag, 2),
    GetBitValue(AFlag, 3));
end;

procedure TBaseForm.StoreToIniFile;
begin
  if not TDirectory.Exists(Goo.SystemDataPath+'\Layout') then TDirectory.CreateDirectory(Goo.SystemDataPath+'\Layout');
  for var i := 0 to Self.ComponentCount - 1 do
  begin
    if Self.Components[i] is TWinControl then
    begin
      if Self.Components[i] is TcxGrid then
      begin
        for var j := 0 to TcxGrid(Self.Components[i]).Levels.Count - 1 do
        begin
          var GridView := TcxGrid(Self.Components[i]).Levels[j].GridView;
          if not Assigned(GridView) then Continue;
          // 保存表格配置
          GridView.StoreToIniFile(Goo.SystemDataPath + Format('\Layout\%s_%s.ini', [LayoutFileName,GridView.Name]), True, [gsoUseFilter, gsoUseSummary])
        end;
      end;
    end;
  end;
end;

procedure TBaseForm.FormCreate(Sender: TObject);
begin
  FGridDataSet := TClientDataSet.Create(Self);
  FPrintTimes := 0;
  FRefreshDataMessageID := 0;
  FPrintItems := TPrintItems.Create;
  PrintDetailData := Null;
  FLayoutFileName := EmptyStr;
  LayoutCustom := True;
  GridOptions := [dgIndicator,dgColumnResize];
end;

function TBaseForm.GetActionList: TActionList;
begin
  Result := ActionList;
end;

function TBaseForm.GetForm: TForm;
begin
  Result := Self;
end;

function TBaseForm.GetLayoutFileName: string;
begin
  Result := Goo.Format.iif(FLayoutFileName=EmptyStr,ClassName,ClassName+'_'+FLayoutFileName)
end;

function TBaseForm.GetLayoutFilePath: string;
begin
  Result := Goo.SystemPath+Format('\Layout\%s.Json', [GetLayoutFileName]);
end;

class function TBaseForm.GetPrintData(AGridView: TcxCustomGridView): OleVariant;
var ds:TClientDataSet;
  AColnum:TcxGridDBColumn;
  AField:TField;
  i:Integer;
  AValue:Variant;
begin
  ds := TClientDataSet.Create(nil);
  try
    //复制表格
    for i := 0 to TcxGridDBTableView(AGridView).VisibleColumnCount-1 do
    begin
      AColnum := TcxGridDBTableView(AGridView).VisibleColumns[i] as TcxGridDBColumn;
      AField := TcxGridDBTableView(AGridView).DataController.DataSource.DataSet.FindField(AColnum.DataBinding.FieldName);
      if Assigned(AField) then
      begin
        ds.FieldDefs.Add(AColnum.Caption,ftString,Max(AField.Size,50));
      end else begin
        ds.FieldDefs.Add(AColnum.Caption,ftString,50);
      end;
    end;
    ds.CreateDataSet;
    //复制数据
    for i := 0 to TcxGridDBTableView(AGridView).DataController.DataRowCount-1 do
    begin
      ds.Append;
      for var j := 0 to TcxGridDBTableView(AGridView).VisibleColumnCount-1 do
      begin
        AColnum := TcxGridDBTableView(AGridView).VisibleColumns[j] as TcxGridDBColumn;
        AValue  := TcxGridDBTableView(AGridView).DataController.Values[i,AColnum.Index];
        if VarIsNull(AValue) then Continue;        
        ds.FieldValues[AColnum.Caption] := AValue;
      end;
    end;
    if ds.Modified then ds.Post;
    Result := ds.Data;
  finally
    ds.Free;
  end;
end;

procedure TBaseForm.IniComponent(AForm: TForm);
var
  APropInfo: PPropInfo;
begin
  AForm.Color := Default_Color;
  for var i := 0 to AForm.ComponentCount - 1 do
  begin
    if AForm.Components[i] is TcxGridColumn then Continue;
    if AForm.Components[i] is TWinControl then
    begin
      IniComponent(TWinControl(AForm.Components[i]));
      // 清除输入法
      APropInfo := GetPropInfo(AForm.Components[i], 'IMENAME');
      if Assigned(APropInfo) then
        SetStrProp(AForm.Components[i], APropInfo, '');
    end;
  end;
end;

procedure TBaseForm.IniComponent(APanel: TPanel);
begin
  APanel.Color := Default_Color;
end;

procedure TBaseForm.IniComponent(AComponent: TComponent);
begin
  if AComponent is TPanel then           IniComponent(AComponent as TPanel)
  else if AComponent is TcxGrid then     IniComponent(AComponent as TcxGrid)
  else if AComponent is TRadioGroup then IniComponent(AComponent as TRadioGroup)
end;

procedure TBaseForm.RefreshData;
begin

end;

procedure TBaseForm.SendRefreshData(ARefreshID: Integer);
begin
  FOR var i := 0 TO Screen.FormCount - 1 DO
    SendMessage(Screen.Forms[i].Handle, WM_RefreshData, 0, ARefreshID);
end;

procedure TBaseForm.SendRefreshData(ARefreshClass: string);
begin
  FOR var i := 0 TO Screen.FormCount - 1 DO
    SendMessage(Screen.Forms[i].Handle, WM_RefreshData,Integer(@ARefreshClass), 0);
end;

procedure TBaseForm.SetLayoutFileName(const Value: string);
begin
  FLayoutFileName := Value;
end;

procedure TBaseForm.SetParamList(AParamList: TParamList);
begin
  Self.ParamList.Assign(AParamList);
end;

procedure TBaseForm.IniComponent(AGrid: TcxGrid);
begin
  if AGrid.Levels.Count > 1 then
    AGrid.RootLevelOptions.DetailTabsPosition := dtpTop;
  if not Assigned(FGridPopupMenu) then FGridPopupMenu := TcxGridPopupMenu.Create(Self);
  FGridPopupMenu.Grid := AGrid;
  for var i := 0 to AGrid.Levels.Count - 1 do
  begin
    var
    GridView := AGrid.Levels[i].GridView;
    if GridView is TcxGridTableView then // TcxGridTableView
    begin
      // 右键菜单
      var
      _Popupmenu := TcxPopupMenuInfo(FGridPopupMenu.PopupMenus.Add);
      _Popupmenu.GridView := GridView;
      _Popupmenu.HitTypes := [gvhtCell,gvhtNone];
      DoAddGridPopupmenus(_Popupmenu);
      // 样式
      TcxGridTableView(GridView).Styles.Header := cxStyle_GridView_Header;
      // 表头样式
      TcxGridTableView(GridView).Styles.Content := cxStyle_GridView_Content;
      // 表格默认
      TcxGridTableView(GridView).Styles.ContentEven := cxStyle_GridView_ContentEven; // 奇数行
      TcxGridTableView(GridView).Styles.ContentOdd :=  cxStyle_GridView_ContentOdd; // 偶数行
      TcxGridTableView(GridView).Styles.Selection := cxStyle_GridView_Selection;
      // 选中行样式
      TcxGridTableView(GridView).Styles.Footer := cxStyle_GridView_Footer;
      // 表尾样式
      // 读写
      TcxGridTableView(GridView).NewItemRow.Visible    := dgAppending in GridOptions;
      TcxGridTableView(GridView).OptionsBehavior.CopyCaptionsToClipboard := False;  //Ctrl+C 复制表头
      TcxGridTableView(GridView).OptionsBehavior.FocusCellOnCycle := dgAppending in GridOptions;
      TcxGridTableView(GridView).OptionsBehavior.FocusFirstCellOnNewRecord := dgAppending in GridOptions;
      TcxGridTableView(GridView).OptionsBehavior.GoToNextCellOnEnter := dgAppending in GridOptions;
      //TcxGridTableView(GridView).NewItemRow.
      TcxGridTableView(GridView).OptionsData.Deleting  := dgEditing in GridOptions;
      TcxGridTableView(GridView).OptionsData.Inserting := dgEditing in GridOptions;
      TcxGridTableView(GridView).OptionsData.Editing   := dgEditing in GridOptions;
      TcxGridTableView(GridView).OptionsView.DataRowHeight := Goo.Theme.Grid.GridItemHeight; // 网格高度
      TcxGridTableView(GridView).OptionsSelection.MultiSelect := dgMultiSelect in GridOptions;
      // 表头
      TcxGridTableView(GridView).OptionsView.HeaderHeight := Goo.Theme.Grid.GridHeadHeight; // 行高
      TcxGridTableView(GridView).OptionsView.Indicator := dgIndicator in GridOptions; // 显示行号
      TcxGridTableView(GridView).OptionsView.IndicatorWidth := 60; // 行号宽度
      TcxGridTableView(GridView).Styles.Header.Color := Goo.Theme.Grid.GridHeadBackColor;
      // 颜色
      TcxGridTableView(GridView).Styles.ContentEven.Color := Goo.Theme.Grid.GridOneItemColor; // 奇数行颜色
      TcxGridTableView(GridView).Styles.ContentOdd.Color  := Goo.Theme.Grid.GridTwoItemColor; // 偶数行颜色
      // SelectRow
      TcxGridTableView(GridView).Styles.Selection.Color := Goo.Theme.Grid.GridSelectItemColor; // 选中行颜色
      TcxGridTableView(GridView).Styles.Selection.TextColor := cxStyle_GridView_Selection.TextColor; // 选中行字体颜色
      TcxGridTableView(GridView).OnCustomDrawIndicatorCell  := DoCustomDrawIndicatorCell;
      TcxGridTableView(GridView).OnCustomDrawCell := DoCustomDrawCell;
      for var j := 0 to TcxGridTableView(GridView).ColumnCount - 1 do
      begin
        TcxGridTableView(GridView).Columns[j].Styles.Header := cxStyle_GridView_Header;
        TcxGridTableView(GridView).Columns[j].Styles.Header.Color   := Goo.Theme.Grid.GridHeadBackColor;
        TcxGridTableView(GridView).Columns[j].OnGetStoredProperties := DoCustomColumnGetStoredProperties;
      end;
      // 读取配置信息
      var layoutpath := Goo.SystemDataPath + Format('\Layout\%s_%s.ini', [LayoutFileName,GridView.Name]);
      if LayoutCustom and FileExists(layoutpath) then GridView.RestoreFromIniFile(layoutpath, True, False,[gsoUseFilter, gsoUseSummary]);
    end;
  end;
end;

procedure TBaseForm.IniComponent(AComponent: TRadioGroup);
begin
  AComponent.Color := Default_Color;
end;

end.
