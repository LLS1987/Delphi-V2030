unit UBaseControlManagerLayout;

interface

uses
  Vcl.ActnList, Vcl.Controls, Vcl.StdCtrls, System.Classes, System.SysUtils,
  Vcl.ExtCtrls, vcl.Forms, Vcl.Graphics, System.Generics.Collections,
  UParamList, UComDBStorable, UBaseParams, Vcl.Buttons, Vcl.Menus, System.Rtti,
  System.JSON, UComconst;

type
  TBaseConditionManager = class;
  TControlItem = class;

  TCheckControlItemDataEvent = function (AData:TControlItem;var AError:string):Boolean of object;
  TControlItem = class
    DataType:Integer;
    Name:string;
    Caption:string;
    TextHint:string;
    MustEnter:Boolean;
    //Visible:Boolean;
    GroupParent:TWinControl;
    Parent:TWinControl;
    Action:TAction;
    OWnerObject:TBaseConditionManager;
  private
    FLastPanel:TPanel;
    FControlLeft,FControlTop,FGroupWidth,FGroupTop:Integer;
    FFirstPanel: TPanel;
    FCenterPanel: TPanel;
    FOnCheckValueEvent: TCheckControlItemDataEvent;
    FGroupCaption: string;
    FVisible: Boolean;
    FControl: TWinControl;
    function GetStringWidth(const AStr: string; AFont: TFont): Integer;
    function GetLastCaption: string;
    procedure SetLastCaption(const Value: string);
    procedure OnControlWidthChange(Sender:TObject);
    function GetReadOnly: Boolean;
    procedure SetReadOnly(const Value: Boolean);
    function GetEnabled: Boolean;
    procedure SetEnabled(const Value: Boolean);
    procedure SetVisible(const Value: Boolean);
  protected
    function GetValue: Variant; virtual;
    procedure SetValue(const Value: Variant);virtual;
    function GetWidth: Integer;virtual;
    procedure SetWidth(const Value: Integer);virtual;
    function GetCaptionWidth:Integer;
    function GetValueText: string;virtual;
  public
    constructor Create;
    destructor Destroy; override;
    property Value:Variant read GetValue write SetValue;
    property ValueText: string read GetValueText;
    property Width: Integer read GetWidth write SetWidth;
    property FirstPanel:TPanel read FFirstPanel;
    property CenterPanel:TPanel read FCenterPanel;
    property LastPanel:TPanel read FLastPanel;
    property Control:TWinControl read FControl write FControl;
    function CreateControl:TWinControl; virtual;
    //控件创建之后就能设置宽度了
    procedure AfterCreateControl; virtual;
    procedure TrySetFocus;
    function CheckValue(var OutMessage:String):Boolean;virtual;
  published
    property Enabled: Boolean read GetEnabled write SetEnabled default True;
    property ReadOnly: Boolean read GetReadOnly write SetReadOnly default False;
    property Visible: Boolean read FVisible write SetVisible default True;
    property LastCaption:string read GetLastCaption write SetLastCaption;
    ///分组标签名称
    property GroupLabelCaption:string read FGroupCaption write FGroupCaption;
    ///数据检查属性
    property OnCheckValueEvent:TCheckControlItemDataEvent read FOnCheckValueEvent write FOnCheckValueEvent;
  end;

  TButtonItem = class(TControlItem)
  private
    function GetStringWidth(const AStr: string; AFont: TFont): Integer;
  public
    function CreateControl: TWinControl; override;
  end;
  //空节点，占位
  TControlItem_Null = class(TControlItem)
  public
    function CreateControl: TWinControl; override;
  end;
  //Label
  TControlItem_Label = class(TControlItem)
  protected
    procedure SetValue(const Value: Variant);override;
  public
    procedure AfterCreateControl; override;
  end;
  //EDIT
  TControlItem_Edit = class(TControlItem)
  protected
    function GetValue: Variant; override;
    procedure SetValue(const Value: Variant);override;
    procedure SetWidth(const Value: Integer);override;
  public
    function CreateControl: TWinControl; override;
  end;
  //整形输入框
  TControlItem_Edit_Integer = class(TControlItem)
  protected
    function GetValue: Variant; override;
    procedure SetValue(const Value: Variant);override;
  public
    function CreateControl: TWinControl; override;
  end;
  //浮点输入框
  TControlItem_Edit_Double = class(TControlItem)
  private
    function GetDecimalPlaces: Integer;
    procedure SetDecimalPlaces(const Value: Integer);
  protected
    function GetValue: Variant; override;
    procedure SetValue(const Value: Variant);override;
  public
    function CreateControl: TWinControl; override;
    property DecimalPlaces:Integer read GetDecimalPlaces write SetDecimalPlaces;
  end;
  //ButtonEdit
  TControlItem_ButtonEdit = class(TControlItem)
  private
    FBaseInfo:TBaseParam;
    FBaseType: Integer;
    procedure OnRightButtonClick(Sender:TObject);
    procedure OnEditKeyDown(Sender: TObject; var Key: Word; Shift: TShiftState);
    function GetBaseInfo: TBaseParam;
  protected
    function GetValueText: string;override;
    function GetValue: Variant; override;
    procedure SetValue(const Value: Variant);override;
  public
    destructor Destroy; override;
    function CreateControl: TWinControl; override;
    property BaseInfo:TBaseParam read GetBaseInfo;
    property BaseType:Integer read FBaseType write FBaseType;  //基本信息类型
  end;
  //选择框
  TControlItem_CheckBox = class(TControlItem)
  protected
    function GetValueText: string;override;
    function GetValue: Variant; override;
    procedure SetValue(const Value: Variant);override;
  public
    constructor Create;
    function CreateControl: TWinControl; override;
  end;
  //下拉选择框
  TControlItem_ComboBox = class(TControlItem)
  private
    function GetItemList: string;
    procedure SetItemList(const Value: string);
  protected
    function GetValueText: string;override;
    function GetValue: Variant; override;
    procedure SetValue(const Value: Variant);override;
  public
    function CreateControl: TWinControl; override;
    procedure AfterCreateControl; override;
  published
    property ItemList:string read GetItemList write SetItemList;
  end;
  //单选框
  TControlItem_RadioGroup = class(TControlItem)
  private
    function GetItemList: string;
    procedure SetItemList(const Value: string);
  protected
    function GetValueText: string;override;
    function GetValue: Variant; override;
    procedure SetValue(const Value: Variant);override;
  public
    function CreateControl: TWinControl; override;
  published
    property ItemList:string read GetItemList write SetItemList;
  end;
  // 时间
  TControlItem_Date = class(TControlItem)
  private
    FBetweenButton:TImage;
    FBetweenPopMenu:TPopupMenu;
    procedure OnBetweenButtonClick(Sender:Tobject);
    procedure OnBetweenPopmenuClick(Sender:Tobject);
    procedure ClearDatePopMenu;
    procedure CreateDatePopmenu;
  protected
    function GetValue: Variant; override;
    procedure SetValue(const Value: Variant);override;
  public
    constructor Create;
    destructor Destroy; override;
    function CreateControl: TWinControl; override;
    function CreateBetweenButton:TImage;
  end;

  TControlItem_DateTime = class(TControlItem)
  protected
    function GetValue: Variant; override;
    procedure SetValue(const Value: Variant);override;
  public
    function CreateControl: TWinControl; override;
  end;

  TBaseConditionManager = class(TList<TPair<string,TControlItem>>)
  private
    FParent: TWinControl;
    FOWnerObject: TObject;
    function GetControl(const AKey: string): TWinControl;
    function GetCondition(const AKey: string): TControlItem;
    function GetConditionIndex(const Index: Integer): TControlItem;
  protected
    function IndexOfKey(const aKey: string): Integer;
    function ContainsKey(const aKey: string): Boolean; inline;
  public
    destructor Destroy; override;
    property OWnerObject:TObject read FOWnerObject write FOWnerObject;
    property Parent:TWinControl read FParent write FParent;
    property ConditionItem[const AKey: string]:TControlItem read GetCondition;
    property ConditionIndex[const Index: Integer]:TControlItem read GetConditionIndex;
    property ControlItem[const AKey: string]:TWinControl read GetControl;
  end;

type
  TButtonManager = class(TBaseConditionManager)
  private
    function GetButtonByIndex(index: Integer): TButton;
  protected
  public
    function Add(ACaption:String;AEvent:TNotifyEvent; IsRight:Boolean = False): Integer; overload;virtual;
    function Add(AAction:TAction; IsRight:Boolean = False): Integer; overload;virtual;
    property Button[index:Integer]:TButton read GetButtonByIndex;
    procedure RefreshButton;
  end;

type
  TControlItemClass = class of TControlItem;
  //控件类型
  TConditionContorlType = (cctNull,           //0: Result := TControlItem_Null.Create;
                            cctEdit,          //1: Result := TControlItem_Edit.Create;
                            cctCheckBox,      //2: Result := TControlItem_CheckBox.Create;
                            cctDate,          //3: Result := TControlItem_Date.Create;
                            cctDateTime,      //4: Result := TControlItem_DateTime.Create;
                            cctComboBox,      //5: Result := TControlItem_ComboBox.Create;
                            cctButtonEdit,    //6: Result := TControlItem_ButtonEdit.Create;
                            cctRadioGroup     //7: Result := TControlItem_RadioGroup.Create;
                            );
  TControlManagerLayout = class(TBaseConditionManager)
  private
    FWidth: Integer;
    FMemory: Boolean;
    FEnumerateControl:TList<TControlItemClass>;
    function GetParamList: TParamList;
    function CreateControl(ADataType:Integer): TControlItem;overload;
    function CreateControl(ADataType:TConditionContorlType): TControlItem;overload;
    function SplitString(AStr:string;AIndex:Integer):string;
  protected
    procedure AssignPropertyValues(AObject: TObject;const AName: string; const AValues:TValue);
  public
    constructor Create;overload;
    constructor Create(AOwner:TObject;AParent:TWinControl);overload;
    destructor Destroy; override;
    function EnumerateControl:TArray<TControlItemClass>;
    function Add(ADataType:Integer;AName,ACaption:string;AMustEnter,AVisible:Boolean;ATextHint:string=''): Integer; overload;
    function Add(ADataType:Integer;AName,ACaption,AItem:string;AVisible:Boolean): Integer; overload;
    /// <summary>
    /// 增加查询条件
    /// </summary>
    /// <param name="AJson">JSONSTRING</param>
    /// <returns></returns>
    function Add(AJson:string): Integer; overload;
    /// <summary>
    /// 增加查询条件
    /// </summary>
    /// <param name="AJson">JSON</param>
    /// <returns></returns>
    function Add(AJson:TJSONObject): Integer; overload;
    /// <summary>
    /// 增加查询条件
    /// </summary>
    /// <param name="ADataType">类型</param>
    /// <param name="AName">变量名称</param>
    /// <param name="ACaption">显示名称</param>
    /// <param name="AProperty">JSON属性</param>
    /// <returns>index</returns>
    function Add(ADataType:Integer;AName,ACaption:string;APropertyJson:string=''): Integer; overload;
    /// <summary>
    /// 增加胖查询条件;宽度 * 2
    /// </summary>
    /// <returns></returns>
    function AddFat(ADataType:Integer;AName,ACaption:string;AMustEnter,AVisible:Boolean): Integer; overload;
    /// <summary>
    /// 增加瘦查询条件;宽度 / 2
    /// </summary>
    /// <returns></returns>
    function AddThin(ADataType:Integer;AName,ACaption:string;AMustEnter,AVisible:Boolean): Integer; overload;
    function AddDateBetween(AName,ACaption:string;AMustEnter,AVisible:Boolean):Integer; overload;
    procedure AddFromFile(const APath:string);
    function CheckData(const ShowMsg:Boolean=True):Boolean;
    procedure RefreshCondition;virtual;
    function RefreshParamList: boolean; virtual;
    property ParamList:TParamList read GetParamList;
    ///是否记忆参数，默认不记忆
    property Memory:Boolean       read FMemory write FMemory;
    //设置父类的宽度默认就是窗体的宽度
    property Width: Integer read FWidth write FWidth;
  end;

  const Control_Border_Width = 15;
  const DADEPOPMENUCAPTION: array[0..9] of string =('本日','本周','本月', '本季度','本年','-','上周','上月','上季度','上年');

implementation

uses
  UComvar, Vcl.ComCtrls, UBaseForm, System.Variants, cxCurrencyEdit,
  System.IniFiles, System.DateUtils, UJsonObjectHelper, System.IOUtils,
  System.Math;

{ TControlItem }

destructor TControlItem.Destroy;
begin
  if Assigned(Control) then FreeAndNil(Control);
  if Assigned(FLastPanel) then FreeAndNil(FLastPanel);
  if Assigned(FFirstPanel) then FreeAndNil(FFirstPanel);
  if Assigned(FCenterPanel) then FreeAndNil(FCenterPanel);
  if Assigned(GroupParent) then FreeAndNil(GroupParent);
  inherited;
end;

function TControlItem.GetValue: Variant;
begin

end;

function TControlItem.GetValueText: string;
begin
  Result := Value;
end;

function TControlItem.GetWidth: Integer;
begin
  Result := 0;
  if Assigned(GroupParent) then Result := GroupParent.Width;
end;

procedure TControlItem.OnControlWidthChange(Sender: TObject);
begin
  if Assigned(Control) then
  begin
    Control.Width  := CenterPanel.Width;
  end;
end;

procedure TControlItem.AfterCreateControl;
begin
  Width := FGroupWidth;
  FirstPanel.Width := Goo.Cast.iif(GetCaptionWidth>self.FControlLeft,GetCaptionWidth,FControlLeft);
  if Assigned(Control) then
  begin
    Control.Parent := CenterPanel;
    Control.Width  := CenterPanel.Width;
  end;
end;

function TControlItem.CheckValue(var OutMessage: String): Boolean;
begin
  Result := True;
end;

constructor TControlItem.Create;
begin
  TextHint     := EmptyStr;
  FControlLeft := 80;
  FControlTop  := 0;
  FGroupTop    := 25;
  FGroupWidth  := 320;
end;

function TControlItem.CreateControl:TWinControl;
begin
  Result := nil;
  GroupParent := TPanel.Create(Parent);
  GroupParent.Parent := Parent;
  TPanel(GroupParent).BevelOuter := bvNone;
  TPanel(GroupParent).BevelInner := bvNone;
  TPanel(GroupParent).BorderWidth := 0;
  TPanel(GroupParent).BorderStyle := bsNone;
  TPanel(GroupParent).Height:= FGroupTop;
  TPanel(GroupParent).Width := FGroupWidth;
  TPanel(GroupParent).Alignment := taLeftJustify;
  //dddTPanel(GroupParent).Caption := Caption;
  //头部控件
  FFirstPanel := TPanel.Create(GroupParent);
  FFirstPanel.Parent := GroupParent;
  FFirstPanel.BevelOuter := bvNone;
  FFirstPanel.BevelInner := bvNone;
  FFirstPanel.BorderWidth := 0;
  FFirstPanel.BorderStyle := bsNone;
  FFirstPanel.Align := alLeft;
  FFirstPanel.Height:= GroupParent.Height;
  FFirstPanel.Width  := FControlLeft;
  //FFirstPanel.Alignment := taRightJustify;
  FFirstPanel.Caption:= Self.Caption;
  //中间数据展示区域
  FCenterPanel := TPanel.Create(GroupParent);
  FCenterPanel.Parent := GroupParent;
  FCenterPanel.BevelOuter := bvNone;
  FCenterPanel.BevelInner := bvNone;
  FCenterPanel.BorderWidth := 0;
  FCenterPanel.BorderStyle := bsNone;
  FCenterPanel.Align := alClient;
  FCenterPanel.Height:= GroupParent.Height;
  FCenterPanel.OnResize := OnControlWidthChange;
  //尾部必录的星号
  FLastPanel := TPanel.Create(GroupParent);
  FLastPanel.Parent := GroupParent;
  FLastPanel.BevelOuter := bvNone;
  FLastPanel.BevelInner := bvNone;
  FLastPanel.BorderWidth := 0;
  FLastPanel.BorderStyle := bsNone;
  FLastPanel.Align := alRight;
  FLastPanel.Alignment  := taCenter;
  FLastPanel.Height:= GroupParent.Height;
  FLastPanel.Width := Control_Border_Width;
  FLastPanel.Caption:= GOO.Cast.iif(MustEnter,'*','');
  {$IFDEF DEBUG}
  FLastPanel.Color := clBlue;
  {$ENDIF DEBUG}
end;

function TControlItem.GetCaptionWidth: Integer;
begin
  Result := GetStringWidth(Caption,TPanel(GroupParent).Font);
end;

function TControlItem.GetEnabled: Boolean;
var
  Context: TRttiContext;
  RttiType: TRttiType;
  RttiProperty: TRttiProperty;
begin
  Result := False;
  if not Assigned(Control) then  Exit;
  Context := TRttiContext.Create;
  try
    RttiType := Context.GetType(Control.ClassType);
    RttiProperty := RttiType.GetProperty('Enabled');
    try
      if Assigned(RttiProperty) then RttiProperty.GetValue(Control).AsBoolean;
    except on E: Exception do Goo.Logger.Error('加载属性：%s，%s',['Enabled',e.Message])
    end;
  finally
    Context.Free;
  end;
end;

function TControlItem.GetLastCaption: string;
begin
  Result := LastPanel.Caption;
end;

function TControlItem.GetReadOnly: Boolean;
var
  Context: TRttiContext;
  RttiType: TRttiType;
  RttiProperty: TRttiProperty;
begin
  Result := False;
  if not Assigned(Control) then  Exit;
  Context := TRttiContext.Create;
  try
    RttiType := Context.GetType(Control.ClassType);
    RttiProperty := RttiType.GetProperty('ReadOnly');
    try
      if Assigned(RttiProperty) then RttiProperty.GetValue(Control).AsBoolean;
    except on E: Exception do Goo.Logger.Error('加载属性：%s，%s',['ReadOnly',e.Message])
    end;
  finally
    Context.Free;
  end;
end;

function TControlItem.GetStringWidth(const AStr: string; AFont: TFont): Integer;
var
  Bitmap: TBitmap;
begin
  Bitmap := TBitmap.Create;
  try
    Bitmap.Canvas.Font.Assign(AFont);
    Result := Bitmap.Canvas.TextWidth(AStr);
  finally
    Bitmap.Free;
  end;
end;

procedure TControlItem.SetEnabled(const Value: Boolean);
var
  Context: TRttiContext;
  RttiType: TRttiType;
  RttiProperty: TRttiProperty;
begin
  if not Assigned(Control) then Exit;
  Context := TRttiContext.Create;
  try
    RttiType := Context.GetType(Control.ClassType);
    RttiProperty := RttiType.GetProperty('Enabled');
    try
      if Assigned(RttiProperty) and RttiProperty.IsWritable then RttiProperty.SetValue(Control, Value);
    except on E: Exception do Goo.Logger.Error('加载属性：%s，%s',['Enabled',e.Message])
    end;
  finally
    Context.Free;
  end;
end;

procedure TControlItem.SetLastCaption(const Value: string);
begin
  LastPanel.Caption := Value;
  LastPanel.Width   := Max(GetStringWidth(Value,LastPanel.Font), Control_Border_Width);
end;

procedure TControlItem.SetReadOnly(const Value: Boolean);
var
  Context: TRttiContext;
  RttiType: TRttiType;
  RttiProperty: TRttiProperty;
begin
  if not Assigned(Control) then Exit;  
  Context := TRttiContext.Create;
  try
    RttiType := Context.GetType(Control.ClassType);
    RttiProperty := RttiType.GetProperty('ReadOnly');
    try
      if Assigned(RttiProperty) and RttiProperty.IsWritable then RttiProperty.SetValue(Control, Value);
    except on E: Exception do Goo.Logger.Error('加载属性：%s，%s',['ReadOnly',e.Message])
    end;
  finally
    Context.Free;
  end;
end;

procedure TControlItem.SetValue(const Value: Variant);
begin

end;

procedure TControlItem.SetVisible(const Value: Boolean);
var
  Context: TRttiContext;
  RttiType: TRttiType;
  RttiProperty: TRttiProperty;
begin
  FVisible := Value;
  if not Assigned(Control) then Exit;
  Context := TRttiContext.Create;
  try
    RttiType := Context.GetType(Control.ClassType);
    RttiProperty := RttiType.GetProperty('Visible');
    try
      if Assigned(RttiProperty) and RttiProperty.IsWritable then RttiProperty.SetValue(Control, Value);
    except on E: Exception do Goo.Logger.Error('加载属性：%s，%s',['Visible',e.Message])
    end;
  finally
    Context.Free;
  end;
end;

procedure TControlItem.SetWidth(const Value: Integer);
begin
  if not Assigned(GroupParent) then Exit;
  GroupParent.Width := Value;
  FirstPanel.Width  := FControlLeft;
  if Assigned(Control) then
  begin
    //Control.Left := FControlLeft;
    Control.Top  := FControlTop;
    Control.Width:= CenterPanel.Width;
  end;
end;

procedure TControlItem.TrySetFocus;
begin
  try
    if Assigned(Control) then Control.SetFocus;
  except on E: Exception do
  end;
end;

function TButtonItem.CreateControl: TWinControl;
begin
  inherited;
  if Assigned(GroupParent) then GroupParent.Visible := False;
  Control := TButton.Create(Parent);
  TButton(Control).Caption := Caption;
  var _width := GetStringWidth(Caption,TButton(Control).Font);
  if _width>Control.Width then Control.Width := _width + 20;
end;

function TButtonItem.GetStringWidth(const AStr: string; AFont: TFont): Integer;
var
  Bitmap: TBitmap;
begin
  Bitmap := TBitmap.Create;
  try
    Bitmap.Canvas.Font.Assign(AFont);
    Result := Bitmap.Canvas.TextWidth(AStr);
  finally
    Bitmap.Free;
  end;
end;

{ TControlItem_DateTime }

function TControlItem_DateTime.CreateControl: TWinControl;
begin
  inherited;
  Result := TDateTimePicker.Create(Parent);
  TDateTimePicker(Result).Time := StrToTime('00:00:00');
end;

function TControlItem_DateTime.GetValue: Variant;
begin
  Result := DateTimeToStr(TDateTimePicker(Control).DateTime);
end;

procedure TControlItem_DateTime.SetValue(const Value: Variant);
begin
  inherited;
  TDateTimePicker(Control).DateTime := Value;
end;

{ TControlItem_Edit }

function TControlItem_Edit.GetValue: Variant;
begin
  Result := TLabeledEdit(Control).Text;
end;

function TControlItem_Edit.CreateControl: TWinControl;
begin
  inherited;
  Result := TLabeledEdit.Create(CenterPanel);
  TLabeledEdit(Result).EditLabel.Caption := '';
  TLabeledEdit(Result).LabelPosition     := lpLeft;
  TLabeledEdit(Result).TextHint          := TextHint;
end;

procedure TControlItem_Edit.SetValue(const Value: Variant);
begin
  inherited;
  TLabeledEdit(Control).Text := Value;
end;

procedure TControlItem_Edit.SetWidth(const Value: Integer);
begin
  inherited;
  if not Assigned(Control) then Exit;
  FirstPanel.Width := Goo.Cast.iif(GetCaptionWidth>self.FControlLeft,GetCaptionWidth,FControlLeft);
  Control.Width    := CenterPanel.Width;
end;

procedure TControlItem_Date.ClearDatePopMenu;
begin
  if not Assigned(FBetweenPopMenu) then Exit;
  for var i := FBetweenPopMenu.Items.Count - 1 downto 0 do
    FBetweenPopMenu.Items.Delete(i);
  FBetweenPopMenu.Items.Clear;
end;

constructor TControlItem_Date.Create;
begin
  inherited;
  FGroupWidth  := Trunc(FGroupWidth/2);
  FControlLeft := 60;
end;

function TControlItem_Date.CreateBetweenButton: TImage;
var bmp:TBitmap;
begin
  FBetweenButton := TImage.Create(LastPanel);
  FBetweenButton.Parent := LastPanel;
  LastPanel.Width       := Control_Border_Width;
  FBetweenButton.Width  := Control_Border_Width;
  FBetweenButton.Top    := 4;
  bmp := TBitmap.Create;
  try
    (OWnerObject.OWnerObject as TBaseForm).ImageList.GetBitmap(5,bmp);
    FBetweenButton.Picture.Assign(bmp);
  finally
    bmp.Free;
  end;
  FBetweenPopMenu := TPopupMenu.Create(LastPanel);
  CreateDatePopmenu;
  FBetweenButton.OnClick:= OnBetweenButtonClick;
end;

function TControlItem_Date.CreateControl: TWinControl;
begin
  inherited;
  Result := TDateTimePicker.Create(Parent);
  TDateTimePicker(Result).Time := StrToTime('00:00:00');
end;

procedure TControlItem_Date.CreateDatePopmenu;
var vitem :TMenuItem;
begin
  ClearDatePopMenu;
  FBetweenPopMenu.AutoHotkeys := maManual;
  for var i := Low(DADEPOPMENUCAPTION) to High(DADEPOPMENUCAPTION) do
  begin
    vitem := TMenuItem.Create(FBetweenPopMenu);
    vitem.Caption := DADEPOPMENUCAPTION[i];
    vitem.Tag := i;
    vitem.OnClick := OnBetweenPopmenuClick;
    vitem.AutoHotkeys := maParent;
    FBetweenPopMenu.Items.Add(vitem);
  end;
end;

destructor TControlItem_Date.Destroy;
begin
  ClearDatePopMenu;
  if Assigned(FBetweenPopMenu) then FreeAndNil(FBetweenPopMenu);
  if Assigned(FBetweenButton) then FreeAndNil(FBetweenButton);
  inherited;
end;

function TControlItem_Date.GetValue: Variant;
begin
  Result := DateToStr(TDateTimePicker(Control).Date);
end;

procedure TControlItem_Date.OnBetweenButtonClick(Sender: Tobject);
begin
  FBetweenPopMenu.PopupComponent := TComponent(Sender);
  FBetweenPopMenu.Popup(LastPanel.ClientOrigin.x, LastPanel.ClientOrigin.Y+LastPanel.Width);
end;

procedure TControlItem_Date.OnBetweenPopmenuClick(Sender: Tobject);
var
  tsdate, tedate:  TDateTimePicker;
  vitem: string;
  vmonth,vyear, vday: word;
  vdate: TDateTime;
begin
  tsdate := OWnerObject.ConditionIndex[Control.Tag].Control as TDateTimePicker;
  tedate := Control as TDateTimePicker;
  if Assigned(tsdate) and Assigned(tedate) then
  begin
    vitem := (Sender as TMenuItem).Caption;
    DecodeDate(Date, vyear, vmonth, vday);
    if vitem='本日' then
    begin
      tsdate.Date := Date;
      tedate.Date := Date;
    end
    else if vitem = '本周' then
    begin
      tsdate.Date := StartOfTheWeek(Date);
      tedate.Date := EndOfTheWeek(Date);
    end
    else if vitem = '本月' then
    begin
      tsdate.Date := StartOfTheMonth(Date);
      tedate.Date := EndOfTheMonth(Date);
    end
    else if vitem = '本季度' then
    begin
      Dec(vmonth, (vmonth - 1) mod 3);
      tsdate.Date := DateOf(StartOfAMonth(vyear, vmonth));
      tedate.Date := DateOf(EndOfAMonth(vyear, vmonth + 2));
    end
    else if vitem = '本年' then
    begin
      tsdate.Date := StartOfTheYear(Date);
      tedate.Date := EndOfTheYear(Date);
    end
    else if vitem = '上周' then
    begin
      tsdate.Date := StartOfTheWeek(StartOfTheWeek(Date)-1);
      tedate.Date := StartOfTheWeek(Date)-1;
    end
    else if vitem = '上月' then
    begin
      tsdate.Date := StartOfTheMonth(StartOfTheMonth(Date)-1);
      tedate.Date := StartOfTheMonth(Date)-1;
    end
    else if vitem = '上季度' then
    begin
      vdate := IncMonth(Date,-3);
      DecodeDate(vdate, vyear, vmonth, vday);
      if vmonth mod 3=0 then
      vmonth:=vmonth-2
      else
        vmonth:=vmonth-(vmonth mod 3)+1;
      tsdate.Date := DateOf(StartOfAMonth(vyear, vmonth));
      tedate.Date := DateOf(EndOfAMonth(vyear, vmonth + 2));

    end
    else if vitem = '上年' then
    begin
      Dec(vyear,1);
      tsdate.Date := DateOf(StartOfAYear(vyear));
      tedate.Date := DateOf(EndOfAYear(vyear));
    end
  end;
end;

procedure TControlItem_Date.SetValue(const Value: Variant);
begin
  inherited;
  TDateTimePicker(Control).Date := StrToDateDef(Value,Date);
end;

constructor TControlItem_CheckBox.Create;
begin
  inherited;
  FGroupWidth  := Trunc(FGroupWidth/2);
  FControlTop  := 4;
  FControlLeft := 10;
end;

function TControlItem_CheckBox.CreateControl: TWinControl;
begin
  inherited;
  Result := TCheckBox.Create(CenterPanel);
  TCheckBox(Result).Caption := Caption;
  FirstPanel.Visible := False;
  TPanel(GroupParent).Caption:= EmptyStr;
end;

function TControlItem_CheckBox.GetValue: Variant;
begin
  Result := Goo.Cast.iif(TCheckBox(Control).Checked,1,0);
end;

function TControlItem_CheckBox.GetValueText: string;
begin
  Result := Goo.Cast.iif(TCheckBox(Control).Checked,'是','否');
end;

procedure TControlItem_CheckBox.SetValue(const Value: Variant);
begin
  inherited;
  TCheckBox(Control).Checked := Goo.Cast.iif(Value=1,True,False);
end;

{ TBaseConditionManager }

function TBaseConditionManager.ContainsKey(const aKey: string): Boolean;
begin
  Result := IndexOfKey(aKey) >= 0;
end;

destructor TBaseConditionManager.Destroy;
begin
  for var item in Self do
  begin
    if Assigned(item.Value) then  FreeAndNil(item.Value);
  end;
  self.Clear;
  inherited;
end;

function TBaseConditionManager.GetCondition(const AKey: string): TControlItem;
begin
  if IndexOfKey(AKey)>=0 then Result := Items[IndexOfKey(AKey)].Value;
end;

function TBaseConditionManager.GetConditionIndex(const Index: Integer): TControlItem;
begin
  Result := Items[index].Value;
end;

function TBaseConditionManager.GetControl(const AKey: string): TWinControl;
begin
  if Assigned(ConditionItem[AKey]) then Result := ConditionItem[AKey].Control;
end;

function TBaseConditionManager.IndexOfKey(const aKey: string): Integer;
var
  i: Integer;
begin
  Result := -1;
  for i := 0 to Count - 1 do
    if string.Compare(Items[i].Key, aKey) = 0 then
      begin
        Result := i;
        break;
      end;
end;

{ TButtonManager }

function TButtonManager.Add(ACaption:String;AEvent:TNotifyEvent; IsRight:Boolean = False): Integer;
begin
  if ContainsKey(ACaption) then
  begin
    Goo.Logger.Info('%s:TButtonManager已经存在该控件，%s',[OWnerObject.ClassName,ACaption]);
    Exit;
  end;
  var item := TButtonItem.Create;
  item.Caption   := ACaption;
  item.Parent    := FParent;
  item.Visible   := True;
  //创建控件
  item.CreateControl;
  with item.Control as TButton do
  begin
    if Assigned(AEvent) then OnClick := AEvent;
    Parent  := FParent;
    Anchors := [akLeft,akTop];
    if IsRight then Anchors := [TAnchorKind.akRight,TAnchorKind.akTop];
  end;
  var _Pair:TPair<string,TControlItem>;
  _Pair.Key   := ACaption;
  _Pair.Value := item;
  Result := self.Add(_Pair);
end;

function TButtonManager.Add(AAction: TAction; IsRight: Boolean): Integer;
begin
  if ContainsKey(AAction.Caption) then
  begin
    Goo.Logger.Info('%s:TButtonManager已经存在该控件，%s',[OWnerObject.ClassName,AAction.Caption]);
    Exit;
  end;
  var item := TButtonItem.Create;
  item.Caption   := AAction.Caption;
  item.Parent    := FParent;
  item.Visible   := AAction.Visible;
  //创建控件
  item.CreateControl;
  with item.Control as TButton do
  begin
    Action  := AAction;
    Parent  := FParent;
    Anchors := [akLeft,akTop];
    if IsRight then Anchors := [TAnchorKind.akRight,TAnchorKind.akTop];
  end;
  var _Pair:TPair<string,TControlItem>;
  _Pair.Key   := AAction.Caption;
  _Pair.Value := item;
  Result := self.Add(_Pair);
end;

function TButtonManager.GetButtonByIndex(index: Integer): TButton;
begin
  if (index>=0) and (index<self.Count) and Assigned(Items[index].Value) and Assigned(Items[index].Value.Control) then
    Result := Items[index].Value.Control as TButton;
end;

procedure TButtonManager.RefreshButton;
begin
  var _lcount:Integer := 10;
  var _rcount:Integer := 10;
  for var item in self do
  begin
    if not Assigned(item.Value.Control) then Continue;
    if not item.Value.Visible then Continue;
    if not item.Value.Control.Visible then Continue;
    item.Value.Control.Top  := 10;
    if akLeft in item.Value.Control.Anchors then
    begin
      item.Value.Control.Left := 5 + _lcount;
      _lcount := item.Value.Control.Left + item.Value.Control.Width;
    end else begin
      item.Value.Control.Left := Parent.Width - (5 + _rcount + item.Value.Control.Width);
      _rcount := _rcount + item.Value.Control.Width + 5;
    end;
  end;
end;

{ TControlManagerLayout }

function TControlManagerLayout.Add(ADataType:Integer;AName,ACaption:string; AMustEnter,AVisible:Boolean;ATextHint:string): Integer;
begin
  Result := -1;
  if ContainsKey(AName) then
  begin
    Goo.Logger.Info('%s:TConditionManager已经存在该控件，%s:%s',[OWnerObject.ClassName,AName,ACaption]);
    Exit;
  end;
  var item := CreateControl(ADataType);
  if not Assigned(item) then Exit;
  item.Name      := AName;
  item.Caption   := ACaption;
  item.MustEnter := AMustEnter;
  item.Visible   := AVisible;
  item.Parent    := FParent;
  item.TextHint  := ATextHint;
  //创建控件
  item.OWnerObject := Self;
  item.Control   := item.CreateControl;
  //if item is TControlItem_ComboBox then (item as TControlItem_ComboBox).ItemList := '药品生产企业=0,药品批发经营企业=1,营利性医疗机构=2,其他企业=3,医疗器械生产企业=4,医疗器械经营企业=5,非营利性医疗机构=6,零售企业=7';
  item.AfterCreateControl;
  if Assigned(item.GroupParent) then
  begin
    item.GroupParent.Visible := AVisible;
    //item.GroupParent.Parent  := Parent;
    if Assigned(item.Control) then item.Control.Parent := item.CenterPanel;
  end;
  var _Pair:TPair<string,TControlItem>;
  _Pair.Key   := item.Name;
  _Pair.Value := item;
  Result := self.Add(_Pair);
end;

function TControlManagerLayout.Add(ADataType: Integer; AName, ACaption, AItem: string; AVisible: Boolean): Integer;
begin
  Result := Add(ADataType, AName, ACaption, False, AVisible);
  if Result<0 then Exit;
  if Items[Result].Value is TControlItem_ComboBox then TControlItem_ComboBox(Items[Result].Value).ItemList := AItem
  else if Items[Result].Value is TControlItem_RadioGroup then TControlItem_RadioGroup(Items[Result].Value).ItemList := AItem;
end;

function TControlManagerLayout.Add(ADataType: Integer; AName, ACaption, APropertyJson: string): Integer;
var json:TJSONObject;
begin
  json := TJSONObject.SO(APropertyJson);
  try
    if not Assigned(json) then Exit;    
    Result := Add(ADataType,AName,ACaption,json.B['MustEnter'],json.GetValue<Boolean>('Visible',True),json.S['TextHint']);
    if Result<0 then Exit;
    for var item in json do
    begin
      AssignPropertyValues(ConditionIndex[Result],item.JsonString.Value,item.JsonValue.ToString.TrimLeft(['"']).TrimRight(['"']));
    end;
  finally
    json.Free;
  end;
end;

function TControlManagerLayout.AddDateBetween(AName,ACaption:string;AMustEnter, AVisible:Boolean): Integer;
begin
  Result := Add(3,SplitString(AName,0),SplitString(ACaption,0),AMustEnter,AVisible);
  if Result<0 then Exit;
  var _endindex := Add(3,SplitString(AName,1),SplitString(ACaption,1),AMustEnter,AVisible);
  if _endindex<0 then Exit;  
  Items[Result].Value.LastPanel.Width := 5;
  Items[_endindex].Value.FControlLeft := 65;
  Items[Result].Value.Width := Items[Result].Value.Width + 10;
  Items[Result].Value.Value := FormatDateTime('YYYY-MM-01',Now);
  Items[Result].Value.Control.Tag     := _endindex;                             //开始时间上面标记结束时间的控件
  Items[_endindex].Value.Control.Tag  := Result;                                //结束时间上面标记开始时间的控件
  Items[_endindex].Value.FControlLeft := 30;
  //Items[_endindex].Value.FirstPanel.Alignment := taLeftJustify;
  Items[_endindex].Value.Width := Items[_endindex].Value.Width - 10;
  TControlItem_Date(Items[_endindex].Value).CreateBetweenButton;
end;

function TControlManagerLayout.AddFat(ADataType: Integer; AName, ACaption: string; AMustEnter, AVisible: Boolean): Integer;
begin
  Result := Add(ADataType, AName, ACaption, AMustEnter, AVisible);
  if Result<0 then Exit;  
  Self.Items[Result].Value.Width := Self.Items[Result].Value.Width*2;
end;

procedure TControlManagerLayout.AddFromFile(const APath: string);
var Json:TJSONObject;
begin
  if FileExists(APath) then
  begin
    JSON := TJSONObject.ParseJSONValue(TFile.ReadAllText(APath)) as TJSONObject;
    try
      if not Assigned(JSON) then Exit;
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
          17:AddDateBetween(_Name.TrimLeft(['@']),_Caption.Trim,_MustField,_Visible);   //时间段
        else
          Add(item as TJSONObject);
          //Add(_ControlType,_Name.TrimLeft(['@']),_Caption.Trim,_MustField,_Visible,_TextHint);
        end;
      end;
    finally
      JSON.Free;
    end;
  end;

end;

function TControlManagerLayout.AddThin(ADataType: Integer; AName, ACaption: string; AMustEnter, AVisible: Boolean): Integer;
begin
  Result := Add(ADataType, AName, ACaption, AMustEnter, AVisible);
  if Result<0 then Exit;
  Items[Result].Value.FControlLeft := 60;
  Items[Result].Value.Width := Trunc(Self.Items[Result].Value.Width/2);
end;

procedure TControlManagerLayout.AssignPropertyValues(AObject: TObject; const AName: string; const AValues:TValue);
var
  I: Integer;
  Context: TRttiContext;
  RttiType: TRttiType;
  RttiProperty: TRttiProperty;
begin
    Context := TRttiContext.Create;
  try
    RttiType := Context.GetType(AObject.ClassType);
    RttiProperty := RttiType.GetProperty(AName);
    try
      if Assigned(RttiProperty) and RttiProperty.IsWritable then
      begin
        case RttiProperty.PropertyType.TypeKind of
          TTypeKind.tkInteger : RttiProperty.SetValue(AObject, TValue.From<Integer>(StrToIntDef(AValues.AsString,0)));
          else RttiProperty.SetValue(AObject, AValues);
        end;
      end;

    except on E: Exception do Goo.Logger.Error('加载属性：%s，%s',[AName,e.Message])
    end;
  finally
    Context.Free;
  end;
end;

constructor TControlManagerLayout.Create;
begin
  inherited;
  Width := Application.MainForm.Width;
  FMemory := False;
end;

function TControlManagerLayout.CheckData(const ShowMsg:Boolean): Boolean;
var AErrMsg:string;
begin
  Result := True;
  for var item in Self do
  begin
    if not Assigned(item.Value.Control) then Continue;
    if not item.Value.Visible then Continue;
    Result := item.Value.CheckValue(AErrMsg);
    if Result and Assigned(item.Value.OnCheckValueEvent) then Result := item.Value.OnCheckValueEvent(item.Value,AErrMsg);
    if not Result then
    begin
      if ShowMsg then Goo.Msg.ShowMsg(AErrMsg);
      item.Value.TrySetFocus;
      Break;
    end;
    if VarIsNull(item.Value.Name) then Continue;
    if item.Value.MustEnter and (VarIsStr(item.Value.Value) and (item.Value.Value=EmptyStr)) then
    begin
      if ShowMsg then
      begin
        Goo.Msg.ShowMsg('%s 不能为空',[item.Value.Caption]);
        item.Value.TrySetFocus;
      end;
      Result := False;
      Break;
    end;
  end;
end;

constructor TControlManagerLayout.Create(AOwner: TObject; AParent: TWinControl);
begin
  Create;
  self.OWnerObject := AOwner;
  self.Parent      := AParent;
  Width            := AParent.Width;
end;

function TControlManagerLayout.CreateControl(ADataType: TConditionContorlType): TControlItem;
begin
  Result := EnumerateControl[Ord(ADataType)].Create;
end;

function TControlManagerLayout.CreateControl(ADataType:Integer): TControlItem;
begin
  case ADataType of
    0: Result := TControlItem_Null.Create;
    1: Result := TControlItem_Edit.Create;
    2: Result := TControlItem_CheckBox.Create;
    3: Result := TControlItem_Date.Create;
    4: Result := TControlItem_DateTime.Create;
    5: Result := TControlItem_ComboBox.Create;
    6: Result := TControlItem_ButtonEdit.Create;
    7: Result := TControlItem_RadioGroup.Create;
    8: Result := TControlItem_Label.Create;
  else Result := TControlItem_Edit.Create;
  end;
end;

destructor TControlManagerLayout.Destroy;
begin
  if Assigned(FEnumerateControl) then FreeAndNil(FEnumerateControl);
  inherited;
end;

function TControlManagerLayout.EnumerateControl: TArray<TControlItemClass>;
begin
  if not Assigned(FEnumerateControl) then
  begin
    FEnumerateControl := TList<TControlItemClass>.Create;
    FEnumerateControl.Add(TControlItem_Null);
    FEnumerateControl.Add(TControlItem_Edit);
    FEnumerateControl.Add(TControlItem_CheckBox);
    FEnumerateControl.Add(TControlItem_Date);
    FEnumerateControl.Add(TControlItem_DateTime);
    FEnumerateControl.Add(TControlItem_ComboBox);
    FEnumerateControl.Add(TControlItem_ButtonEdit);
    FEnumerateControl.Add(TControlItem_RadioGroup);
  end;
  Result := FEnumerateControl.ToArray;
end;

function TControlManagerLayout.GetParamList: TParamList;
begin
  Result := (OWnerObject as TBaseForm).ParamList;
end;

procedure TControlManagerLayout.RefreshCondition;
begin
  var ALeft : Integer := Control_Border_Width;
  var ATop  : Integer := Control_Border_Width;
  for var item in Self do
  begin
    if not Assigned(item.Value.GroupParent) then Continue;
    if not item.Value.Visible then Continue;
    //判断是否需要换行，如果需要就重新计算一次
    if ALeft+item.Value.GroupParent.Width>(Self.Width) then
    begin
      self.Parent.Height := self.Parent.Height + Control_Border_Width + item.Value.GroupParent.Height;
      ALeft := Control_Border_Width;
      ATop  := ATop + Control_Border_Width + item.Value.GroupParent.Height - 5;
    end;
    item.Value.GroupParent.Left := ALeft ;//+ item.Value.CaptionWidth;
    item.Value.GroupParent.Top  := ATop;
    ALeft := item.Value.GroupParent.Left + item.Value.GroupParent.Width;
    //读取记忆
    if Memory then
    begin
      var inifile := TIniFile.Create(Goo.SystemDataPath+'\Daterecord.ini');
      try
        try
          if inifile.ValueExists(OWnerObject.ClassName,item.Value.Name.TrimLeft(['@'])) then
            item.Value.Value := inifile.ReadString(OWnerObject.ClassName,item.Value.Name.TrimLeft(['@']),'');
        except on E: Exception do
        end;
      finally
        inifile.Free;
      end;
    end;
    //给控件添加默认值
    if ParamList.ContainsKey('@'+item.Value.Name.TrimLeft(['@'])) then item.Value.Value := ParamList.AsVariant('@'+item.Value.Name.TrimLeft(['@']));
  end;
  //最后扣减多增加出来的行
  if (ALeft = Control_Border_Width) and (ATop > Control_Border_Width) and (Count>0) then
  begin
    Parent.Height := self.Parent.Height - Control_Border_Width - self.Items[0].Value.FGroupTop;
  end;
end;

function TControlManagerLayout.RefreshParamList: boolean;
begin
  Result := CheckData;
  if not Result then Abort;
  var inifile := TIniFile.Create(Goo.SystemDataPath+'\Daterecord.ini');
  try
    for var item in Self do
    begin
      if not Assigned(item.Value.Control) then Continue;
      if not item.Value.Visible then Continue;
      if VarIsNull(item.Value.Name) then Continue;
      var _name := item.Value.Name;
      if not _name.StartsWith('@') then _name := '@'+_name;
      ParamList.Add(_name,item.Value.Value);
      if Memory then
      begin
        if VarIsStr(item.Value.Value) and (item.Value.Value=EmptyStr) then Continue;
        inifile.WriteString(OWnerObject.ClassName,_name.TrimLeft(['@']),item.Value.Value);
      end;
    end;
  finally
    inifile.Free;
  end;
end;

function TControlManagerLayout.SplitString(AStr: string; AIndex: Integer): string;
var AList:TStringList;
begin
  AList := TStringList.Create;
  try
    AList.Delimiter := ',';
    AList.DelimitedText := AStr;
    Result := AList[AIndex];
  finally
    AList.Free;
  end;
end;

procedure TControlItem_ComboBox.AfterCreateControl;
begin
  inherited;
  if TComboBox(Control).GetCount>0 then
  begin
    TComboBox(Control).Style := csDropDownList;
    TComboBox(Control).ItemIndex := 0;
  end;
end;

function TControlItem_ComboBox.CreateControl: TWinControl;
begin
  inherited;
  Result := TComboBox.Create(CenterPanel);
  Result.Parent := CenterPanel;
end;

function TControlItem_ComboBox.GetItemList: string;
begin
  Result := TComboBox(Control).Items.ToString;
end;

function TControlItem_ComboBox.GetValue: Variant;
begin
  if TComboBox(Control).Style = csDropDownList then
  begin
    Result := TComboBox(Control).ItemIndex;
    if (Result>=0) and Assigned(TComboBox(Control).Items.Objects[Result]) then Result := Integer(TComboBox(Control).Items.Objects[Result]);
  end else Result := TComboBox(Control).Text;
end;

function TControlItem_ComboBox.GetValueText: string;
begin
  Result := TComboBox(Control).Text;
end;

procedure TControlItem_ComboBox.SetItemList(const Value: string);
var ArrList:TArray<string>;
begin
  if not Assigned(Control) then Exit;
  if Value=EmptyStr then Exit;
  if Pos('=',Value) >0 then
  begin
    ArrList := Value.Split([',']);
    TComboBox(Control).Items.Clear;
    for var i := Low(ArrList) to High(ArrList) do
    begin
      TComboBox(Control).Items.AddObject(ArrList[i].Split(['='])[0],TObject(StrToIntDef(ArrList[i].Split(['='])[1],0)));
    end;
  end
  else TComboBox(Control).Items.DelimitedText := Value;
end;

procedure TControlItem_ComboBox.SetValue(const Value: Variant);
begin
  inherited;
  if (TComboBox(Control).Style = csDropDownList) then
  begin
    var _index := TComboBox(Control).Items.IndexOfObject(TObject(Integer(Value)));
    if (_index<0) or (_index>=TComboBox(Control).GetCount) then _index := Value;
    if (_index<0) or (_index>=TComboBox(Control).GetCount) then _index := 0;
    TComboBox(Control).ItemIndex := _index;
  end else TComboBox(Control).Text := Value;
end;

function TControlManagerLayout.Add(AJson: string): Integer;
begin
  var json := TJSONObject.SO(AJson);
  try
    if not Assigned(json) then Exit;
    Result := Add(json);
  finally
    json.Free;
  end;
end;

function TControlManagerLayout.Add(AJson: TJSONObject): Integer;
begin
  if not Assigned(AJson) then Exit;
  if not AJson.Exists('ControlType') then Exit;
  if not AJson.Exists('Name') then Exit;
  if not AJson.Exists('Caption') then Exit;
  Result := Add(AJson.I['ControlType'],AJson.S['Name'],AJson.S['Caption'],AJson.B['MustEnter'],AJson.GetValue<Boolean>('Visible',True),AJson.S['TextHint']);
  if Result<0 then Exit;
  for var item in AJson do
  begin
    if SameText(item.JsonString.Value,'ControlType') then Continue;
    if SameText(item.JsonString.Value,'Name') then Continue;
    if SameText(item.JsonString.Value,'Caption') then Continue;
    if SameText(item.JsonString.Value,'MustEnter') then Continue;
    if SameText(item.JsonString.Value,'Visible') then Continue;
    if SameText(item.JsonString.Value,'TextHint') then Continue;
    //AssignPropertyValues(ConditionIndex[Result],item.JsonString.Value,item.JsonValue.ToString);
    AssignPropertyValues(ConditionIndex[Result],item.JsonString.Value,AJson.T[item.JsonString.Value]);
  end;
end;

{ TControlItem_Null }

function TControlItem_Null.CreateControl: TWinControl;
begin
  Result := nil;
end;

{ TControlItem_Edit_Integer }

function TControlItem_Edit_Integer.CreateControl: TWinControl;
begin
  inherited;
  Result := TEdit.Create(CenterPanel);
  Result.Parent := CenterPanel;
  TEdit(Result).TextHint := TextHint;
  TEdit(Result).NumbersOnly := True;
end;

function TControlItem_Edit_Integer.GetValue: Variant;
begin
  Result := StrToIntDef(TEdit(Control).Text,0);
end;

procedure TControlItem_Edit_Integer.SetValue(const Value: Variant);
begin
  inherited;
  TEdit(Control).Text := Value;
end;

{ TControlItem_Edit_Double }

function TControlItem_Edit_Double.CreateControl: TWinControl;
begin
  inherited;
  Result := TcxCurrencyEdit.Create(CenterPanel);
  Result.Parent := CenterPanel;
  TcxCurrencyEdit(Result).TextHint := TextHint;
  TcxCurrencyEdit(Result).Properties.DisplayFormat := EmptyStr;
  TcxCurrencyEdit(Result).Properties.DecimalPlaces := 2;
end;

function TControlItem_Edit_Double.GetDecimalPlaces: Integer;
begin
  Result := TcxCurrencyEdit(Control).Properties.DecimalPlaces;
end;

function TControlItem_Edit_Double.GetValue: Variant;
begin
  Result := TcxCurrencyEdit(Control).Value;
end;

procedure TControlItem_Edit_Double.SetDecimalPlaces(const Value: Integer);
begin
  TcxCurrencyEdit(Control).Properties.DecimalPlaces := Value;
end;

procedure TControlItem_Edit_Double.SetValue(const Value: Variant);
begin
  inherited;
  TcxCurrencyEdit(Control).Value := Value;
end;

{ TControlItem_ButtonEdit }

function TControlItem_ButtonEdit.CreateControl: TWinControl;
begin
  inherited;
  Result := TButtonedEdit.Create(CenterPanel);
  TButtonedEdit(Result).TextHint := TextHint;
  TButtonedEdit(Result).RightButton.Visible := True;
  if Assigned(OWnerObject) and Assigned(OWnerObject.OWnerObject) and (OWnerObject.OWnerObject is TBaseForm) then
  begin
    TButtonedEdit(Result).OnRightButtonClick := OnRightButtonClick;
    TButtonedEdit(Result).OnDblClick         := OnRightButtonClick;
    TButtonedEdit(Result).OnKeyDown  := OnEditKeyDown;
    TButtonedEdit(Result).Images := (OWnerObject.OWnerObject as TBaseForm).ImageList;
    TButtonedEdit(Result).RightButton.ImageIndex := 0;
  end;
end;

destructor TControlItem_ButtonEdit.Destroy;
begin
  if Assigned(FBaseInfo) then FreeAndNil(FBaseInfo);
  inherited;
end;

function TControlItem_ButtonEdit.GetBaseInfo: TBaseParam;
begin
  if not Assigned(FBaseInfo) then
  begin
    case TBasicType(BaseType) of
      btPtype : FBaseInfo := TPTypeParam.Create(GroupParent);
      btEtype : FBaseInfo := TETypeParam.Create(GroupParent);
      btKtype : FBaseInfo := TKTypeParam.Create(GroupParent);
      btBtype : FBaseInfo := TBTypeParam.Create(GroupParent);
      btMtype : FBaseInfo := TMTypeParam.Create(GroupParent);
      btVipCard:FBaseInfo := TVipCardParam.Create(GroupParent);
      btVchType:FBaseInfo := TBillTypeParam.Create(GroupParent);
    else FBaseInfo := TMTypeParam.Create(GroupParent);
    end;
  end;
  Result := FBaseInfo;
end;

function TControlItem_ButtonEdit.GetValue: Variant;
begin
  if (BaseInfo.Count>0) and (GetValueText<>EmptyStr) then
  begin
    if BaseInfo.MultSel then
    begin
      Result := EmptyStr;
      for var _item in BaseInfo.Return.Values do
        Result := Result + _item.Rec.ToString + ',';
      Result := string(Result).TrimRight([',']);
    end else Result := TMTypeParam(BaseInfo).First.Rec
  end
  else
    Result := 0;
end;

function TControlItem_ButtonEdit.GetValueText: string;
begin
  Result := TButtonedEdit(Control).Text;
end;

procedure TControlItem_ButtonEdit.OnEditKeyDown(Sender: TObject; var Key: Word;  Shift: TShiftState);
begin
  case Key of
    13   : 
      begin
        BaseInfo.SearchString := TButtonedEdit(Control).Text;
        if BaseInfo.GetBaseInfoSelect>0 then
          Value := BaseInfo.First.FullName;
      end;
    8,46 :  
      begin
        if Length(TButtonedEdit(Control).Text)<=1 then
        begin
          BaseInfo.Return.ClearAndFree;
        end;   
      end;
  end;
end;

procedure TControlItem_ButtonEdit.OnRightButtonClick(Sender: TObject);
begin
  if BaseInfo.GetBaseInfoSelect>0 then Value := BaseInfo.First.FullName;
end;

procedure TControlItem_ButtonEdit.SetValue(const Value: Variant);
begin
  inherited;
  TButtonedEdit(Control).Text := Value;
end;

function TControlItem_RadioGroup.CreateControl: TWinControl;
begin
  Result := TRadioGroup.Create(CenterPanel);
  Result.Parent := CenterPanel;
  TRadioGroup(Result).ShowFrame := False;
  TRadioGroup(Result).StyleElements := [];
  TRadioGroup(Result).Caption := EmptyStr;
end;

function TControlItem_RadioGroup.GetItemList: string;
begin
  Result := TRadioGroup(Control).Items.ToString;
end;

function TControlItem_RadioGroup.GetValue: Variant;
begin
  Result := TRadioGroup(Control).ItemIndex;
  if (Result>=0) and Assigned(TRadioGroup(Control).Items.Objects[Result]) then Result := Integer(TRadioGroup(Control).Items.Objects[Result]);
end;

function TControlItem_RadioGroup.GetValueText: string;
begin
  Result := TRadioGroup(Control).Items[TRadioGroup(Control).ItemIndex];
end;

procedure TControlItem_RadioGroup.SetItemList(const Value: string);
var AList:TStringList;
begin
  if not Assigned(Control) then Exit;
  if Value=EmptyStr then Exit;
  if Pos('=',Value) >0 then
  begin
    AList := TStringList.Create;
    try
      AList.Delimiter := ',';
      AList.DelimitedText := Value;
      TRadioGroup(Control).Items.Clear;
      for var i:= 0 to AList.Count -1 do
      begin
        TRadioGroup(Control).Items.AddObject(AList.Names[i],TObject(StrToIntdef(AList.Values[AList.Names[i]],0)));
      end;
    finally
      AList.Free;
    end;
  end
  else TRadioGroup(Control).Items.DelimitedText := Value;
  if TRadioGroup(Control).Items.Count>0 then
  begin
    TRadioGroup(Control).ItemIndex := 0;
    TRadioGroup(Control).Columns   := TRadioGroup(Control).Items.Count;
  end;
end;

procedure TControlItem_RadioGroup.SetValue(const Value: Variant);
begin
  inherited;
  TRadioGroup(Control).ItemIndex := Value;
end;

{ TControlItem_Label }

procedure TControlItem_Label.AfterCreateControl;
begin
  inherited;
  FirstPanel.Alignment := taRightJustify;
  CenterPanel.Alignment:= taLeftJustify;
  if not string(FirstPanel.Caption).EndsWith('：') then FirstPanel.Caption := FirstPanel.Caption + '：';
  CenterPanel.Caption  := TextHint;
end;

procedure TControlItem_Label.SetValue(const Value: Variant);
begin
  inherited;
  CenterPanel.Caption := VarToStrDef(Value,TextHint);
end;

end.
