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
  cxGridPopupMenu, cxGridCustomPopupMenu, Vcl.Menus;

type
  TGridOption = (dgAppending, dgEditing, dgAlwaysShowEditor, dgTitles, dgIndicator,
    dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect,
    dgAlwaysShowSelection, dgConfirmDelete, dgCancelOnExit, dgMultiSelect,
    dgTitleClick, dgTitleHotTrack);
  // 表格属性
  TGridOptions = set of TGridOption;

  TBaseForm = class(TForm, IForm)
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
    FParamList: TParamList;
    FGridDataSet: TClientDataSet;
    FPrintTimes: Integer;
    FRefreshDataMessageID: Integer;
    FPrintItems: TPrintItems;
    FPrintName: string;
    FPrintDetailData: OleVariant;
    FGridPopupMenu: TcxGridPopupMenu;
    FGridOptions: TGridOptions;
    { Private declarations }
    function GetObject: TObject; virtual;
    function GetForm: TForm;
    function GetActionList: TActionList;
    function GetParamList: TParamList;
    procedure SetParamList(AParamList: TParamList);
    procedure ShowFindDialog(var Message: TMessage); message REFRESH_FIND_MESSAGE;
    procedure DealRefreshRefreshDataMessage(var Msg: TMessage); message WM_RefreshData;
  protected
    procedure DoShow; override;
    procedure DoClose(var Action: TCloseAction); override;
    procedure BeforeFormShow; virtual;
    property GridDataSet: TClientDataSet read FGridDataSet;
    property GridOptions: TGridOptions read FGridOptions write FGridOptions;
    procedure InitParamList; virtual; // 产品可以在窗口创建之前先对参数进行处理
    function Find(const Msg: string; Reverse, Whole, Match: Boolean) : Boolean; virtual;
    procedure DoCloseBtnEvent; virtual;
    procedure DoHelpBtnEvent; virtual;
    procedure DoPrintBtnEvent; virtual;
    procedure DoPrintHeader; virtual;
    // 刷新事件
    procedure DoRefreshDataByMessage(Sender: TObject); virtual;
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
    constructor Create(AOwner: TComponent; AParam: TParamList); overload;
    destructor Destroy; override;
    procedure IniComponent(AForm: TForm); overload;
    procedure IniComponent(AComponent: TComponent); overload;
    procedure IniComponent(APanel: TPanel); overload;
    /// 初始化cxGrid
    procedure IniComponent(AGrid: TcxGrid); overload;
    property ParamList: TParamList read GetParamList write FParamList;
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
  end;

var
  BaseForm: TBaseForm;

const
  Default_Color = clWhite;

implementation

uses
  UComvar, System.TypInfo, UBaseGridLayout;

{$R *.dfm}

procedure TBaseForm.BeforeFormShow;
begin
  IniComponent(Self);
end;

constructor TBaseForm.Create(AOwner: TComponent; AParam: TParamList);
begin
  FParamList := TParamList.Create;
  InitParamList;
  if Assigned(AParam) then FParamList.Assign(AParam);
  inherited Create(AOwner); // 创建窗口实例 MDI一创建就显示，
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
  if Assigned(FParamList) then FParamList.Free;
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

procedure TBaseForm.DoCustomColumnGetStoredProperties
  (Sender: TcxCustomGridTableItem; AProperties: TStrings);
begin
  AProperties.Add('Caption'); // 标签
  AProperties.Add('VisibleForCustomization'); // 能否用户自定义
  AProperties.Add('Name');                    //数据绑定
end;

procedure TBaseForm.DoCustomDrawCell(Sender: TcxCustomGridTableView;
  ACanvas: TcxCanvas; AViewInfo: TcxGridTableDataCellViewInfo;
  var ADone: Boolean);
begin
  if AViewInfo.Focused then
  begin
    ACanvas.Canvas.Brush.Color := Goo.Theme.Grid.GridRowFocusColor;
    // ACanvas.Font.Color := clred; //红色字体
    // ACanvas.Font.Style := [fsUnderline];//带下划线
  end;
end;

procedure TBaseForm.DoCustomDrawIndicatorCell(Sender: TcxGridTableView;
  ACanvas: TcxCanvas; AViewInfo: TcxCustomGridIndicatorItemViewInfo;
  var ADone: Boolean);
var
  AIndicatorViewInfo: TcxGridIndicatorRowItemViewInfo;
  ATextRect: TRect;
  aCV: TcxCanvas;
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
    Sender.LookAndFeelPainter.DrawHeader(ACanvas, AViewInfo.ContentBounds,
      ATextRect, [], cxBordersAll, cxbsNormal, taCenter, vaCenter, False, False,
      IntToStr(AIndicatorViewInfo.GridRecord.Index + 1), aCV.Font,
      aCV.Font.Color, aCV.Brush.Color);
    ADone := True;
    // 画当前行的右三角
    ATextRect.Left := ATextRect.Width - 3;
    Sender.LookAndFeelPainter.DrawIndicatorImage(ACanvas, ATextRect,
      AIndicatorViewInfo.IndicatorKind);
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
    // DoReparePrintData;
    // if PrintName='' then PrintName:=Title;
    if PrintName = '' then
      PrintName := Caption;
    if PrintDetailData = Null then
      PrintDetailData := GridDataSet.Data;
    DoPrintHeader;
    FPrintTimes := Goo.Print.RunPrintManage(PrintName, PrintItems,
      PrintDetailData);
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
          var layoutpath := Goo.SystemDataPath + Format('\Layout\%s_%s.ini', [Self.ClassName,GridView.Name]);
          GridView.StoreToIniFile(layoutpath, True, [gsoUseFilter, gsoUseSummary])
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

function TBaseForm.GetObject: TObject;
begin
  Result := Self;
end;

function TBaseForm.GetParamList: TParamList;
begin
  if not Assigned(FParamList) then
  begin
    FParamList := TParamList.Create;
    InitParamList;
  end;
  Result := FParamList;
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
  if AComponent is TPanel then
    IniComponent(TPanel(AComponent))
  else if AComponent is TcxGrid then
    IniComponent(TcxGrid(AComponent))
end;

procedure TBaseForm.InitParamList;
begin

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
      var layoutpath := Goo.SystemDataPath + Format('\Layout\%s_%s.ini', [Self.ClassName,GridView.Name]);
      if FileExists(layoutpath) then GridView.RestoreFromIniFile(layoutpath, True, False,[gsoUseFilter, gsoUseSummary]);
    end;
  end;
end;

end.
