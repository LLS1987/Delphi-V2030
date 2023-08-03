unit UBaseControlManagerLayout;

interface

uses
  Vcl.ActnList, Vcl.Controls, Vcl.StdCtrls, System.Classes, System.SysUtils,
  Vcl.ExtCtrls, vcl.Forms, Vcl.Graphics, System.Generics.Collections,
  UParamList;

type
  TBaseConditionManager = class;

  TControlItem = class
    DataType:Integer;
    Name:string;
    Caption:string;
    TextHint:string;
    MustEnter:Boolean;
    Visible:Boolean;
    GroupParent:TWinControl;
    Parent:TWinControl;
    Control:TWinControl;
    Action:TAction;
    OWnerObject:TBaseConditionManager;
  private
    FLastPanel:TPanel;
    FControlLeft,FControlTop,FGroupWidth,FGroupTop:Integer;
    FFirstPanel: TPanel;
    FCenterPanel: TPanel;
    function GetStringWidth(const AStr: string; AFont: TFont): Integer;
    function GetLastCaption: string;
    procedure SetLastCaption(const Value: string);
    procedure OnControlWidthChange(Sender:TObject);
  protected
    function GetValue: Variant; virtual;
    procedure SetValue(const Value: Variant);virtual;
    function GetWidth: Integer;virtual;
    procedure SetWidth(const Value: Integer);virtual;
    function GetCaptionWidth:Integer;
  public
    constructor Create;
    destructor Destroy; override;
    property Value:Variant read GetValue write SetValue;
    property Width: Integer read GetWidth write SetWidth;
    property FirstPanel:TPanel read FFirstPanel;
    property CenterPanel:TPanel read FCenterPanel;
    property LastPanel:TPanel read FLastPanel;
    property LastCaption:string read GetLastCaption write SetLastCaption;
    function CreateControl:TWinControl; virtual;
    //控件创建之后就能设置宽度了
    procedure AfterCreateControl; virtual;
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
  protected
    function GetValue: Variant; override;
    procedure SetValue(const Value: Variant);override;
  public
    function CreateControl: TWinControl; override;
  end;
  //选择框
  TControlItem_CheckBox = class(TControlItem)
  protected
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
    function GetValue: Variant; override;
    procedure SetValue(const Value: Variant);override;
  public
    function CreateControl: TWinControl; override;
    procedure AfterCreateControl; override;
    property ItemList:string read GetItemList write SetItemList;
  end;

  TControlItem_Date = class(TControlItem)
  protected
    function GetValue: Variant; override;
    procedure SetValue(const Value: Variant);override;
  public
    constructor Create;
    function CreateControl: TWinControl; override;
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
  TControlManagerLayout = class(TBaseConditionManager)
  private
    FWidth: Integer;
    function GetParamList: TParamList;
    function CreateControl(ADataType:Integer): TControlItem;
    function SplitString(AStr:string;AIndex:Integer):string;
  protected
    //设置父类的宽度默认就是窗体的宽度
    property Width: Integer read FWidth write FWidth;
  public
    constructor Create;
    destructor Destroy; override;
    function Add(ADataType:Integer;AName,ACaption:string;AMustEnter,AVisible:Boolean;ATextHint:string=''): Integer; overload;
    function AddFat(ADataType:Integer;AName,ACaption:string;AMustEnter,AVisible:Boolean): Integer; overload;
    function AddThin(ADataType:Integer;AName,ACaption:string;AMustEnter,AVisible:Boolean): Integer; overload;
    function AddDateBetween(AName,ACaption:string;AMustEnter,AVisible:Boolean):Integer; overload;
    procedure RefreshCondition;virtual;
    procedure RefreshParamList;virtual;
    property ParamList:TParamList read GetParamList;
  end;

  const Control_Border_Width = 10;

implementation

uses
  UComvar, Vcl.ComCtrls, UBaseForm, System.Variants, cxCurrencyEdit;

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
  FirstPanel.Width := Goo.Format.iif(GetCaptionWidth>self.FControlLeft,GetCaptionWidth,FControlLeft);
  if Assigned(Control) then
  begin
    Control.Parent := CenterPanel;
    Control.Width  := CenterPanel.Width;
  end;
end;

constructor TControlItem.Create;
begin
  TextHint     := EmptyStr;
  FControlLeft := 80;
  FControlTop  := 0;
  FGroupTop    := 25;
  FGroupWidth  := 300;
end;

function TControlItem.CreateControl:TWinControl;
begin
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
  FLastPanel.Caption:= GOO.Format.iif(MustEnter,'*','');
end;

function TControlItem.GetCaptionWidth: Integer;
begin
  Result := GetStringWidth(Caption,TPanel(GroupParent).Font);
end;

function TControlItem.GetLastCaption: string;
begin
  Result := LastPanel.Caption;
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

procedure TControlItem.SetLastCaption(const Value: string);
begin
  LastPanel.Caption := Value;
  LastPanel.Width   := Goo.Format.iif(GetStringWidth(Value,LastPanel.Font)>Control_Border_Width,GetStringWidth(Value,LastPanel.Font),Control_Border_Width);
end;

procedure TControlItem.SetValue(const Value: Variant);
begin

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
  FirstPanel.Width := Goo.Format.iif(GetCaptionWidth>self.FControlLeft,GetCaptionWidth,FControlLeft);
  Control.Width    := CenterPanel.Width;
end;

constructor TControlItem_Date.Create;
begin
  inherited;
  FGroupWidth  := 150;
  FControlLeft := 60;
end;

function TControlItem_Date.CreateControl: TWinControl;
begin
  inherited;
  Result := TDateTimePicker.Create(Parent);
  TDateTimePicker(Result).Time := StrToTime('00:00:00');
end;

function TControlItem_Date.GetValue: Variant;
begin
  Result := DateToStr(TDateTimePicker(Control).Date);
end;

procedure TControlItem_Date.SetValue(const Value: Variant);
begin
  inherited;
  TDateTimePicker(Control).Date := StrToDateDef(Value,Date);
end;

constructor TControlItem_CheckBox.Create;
begin
  inherited;
  FGroupWidth  := 150;
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
  Result := Goo.Format.iif(TCheckBox(Control).Checked,1,0);
end;

procedure TControlItem_CheckBox.SetValue(const Value: Variant);
begin
  inherited;
  TCheckBox(Control).Checked := Goo.Format.iif(Value=1,True,False);
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

function TControlManagerLayout.AddDateBetween(AName,ACaption:string;AMustEnter, AVisible:Boolean): Integer;
begin
  Result := Add(3,SplitString(AName,0),SplitString(ACaption,0),AMustEnter,AVisible);
  if Result<0 then Exit;
  var _endindex := Add(3,SplitString(AName,1),SplitString(ACaption,1),AMustEnter,AVisible);
  if _endindex<0 then Exit;  
  Items[Result].Value.Width := Items[Result].Value.Width + 20;
  Items[Result].Value.Value := FormatDateTime('YYYY-MM-01',Now);
  Items[_endindex].Value.Control.Tag  := 1;
  Items[_endindex].Value.FControlLeft := 20;
  Items[_endindex].Value.FirstPanel.Alignment := taLeftJustify;
  Items[_endindex].Value.Width := Items[_endindex].Value.Width - 20;
end;

function TControlManagerLayout.AddFat(ADataType: Integer; AName, ACaption: string; AMustEnter, AVisible: Boolean): Integer;
begin
  Result := Add(ADataType, AName, ACaption, AMustEnter, AVisible);
  if Result<0 then Exit;  
  Self.Items[Result].Value.Width := Self.Items[Result].Value.Width*2;
end;

function TControlManagerLayout.AddThin(ADataType: Integer; AName, ACaption: string; AMustEnter, AVisible: Boolean): Integer;
begin
  Result := Add(ADataType, AName, ACaption, AMustEnter, AVisible);
  if Result<0 then Exit;
  Items[Result].Value.FControlLeft := 60;
  Items[Result].Value.Width := Trunc(Self.Items[Result].Value.Width/2);
end;

constructor TControlManagerLayout.Create;
begin
  inherited;
  Width := Screen.Width;
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
  else Result := TControlItem_Edit.Create;
  end;
end;

destructor TControlManagerLayout.Destroy;
begin
  inherited;
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
    item.Value.GroupParent.Left := ALeft ;//+ item.Value.CaptionWidth;
    item.Value.GroupParent.Top  := ATop;
    ALeft := item.Value.GroupParent.Left + item.Value.GroupParent.Width;
    //判断是否需要换行，如果需要就重新计算一次
    if ALeft>(Self.Width) then
    begin
      self.Parent.Height := self.Parent.Height + Control_Border_Width + item.Value.GroupParent.Height;
      ALeft := Control_Border_Width;
      ATop  := Control_Border_Width + item.Value.GroupParent.Top + item.Value.GroupParent.Height;
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

procedure TControlManagerLayout.RefreshParamList;
begin
  for var item in Self do
  begin
    if not Assigned(item.Value.Control) then Continue;
    if not item.Value.Visible then Continue;
    var _name := item.Value.Name;
    if not _name.StartsWith('@') then _name := '@'+_name;
    ParamList.Add(_name,item.Value.Value);
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

procedure TControlItem_ComboBox.SetItemList(const Value: string);
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
      TComboBox(Control).Items.Clear;
      for var i:= 0 to AList.Count -1 do
      begin
        TComboBox(Control).Items.AddObject(AList.Names[i],TObject(StrToIntdef(AList.Values[AList.Names[i]],0)));
      end;
    finally
      AList.Free;
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
    TButtonedEdit(Result).Images := (OWnerObject.OWnerObject as TBaseForm).ImageList;
    TButtonedEdit(Result).RightButton.ImageIndex := 0;
  end;
end;

function TControlItem_ButtonEdit.GetValue: Variant;
begin
  Result := TButtonedEdit(Control).Text;
end;

procedure TControlItem_ButtonEdit.SetValue(const Value: Variant);
begin
  inherited;
  TButtonedEdit(Control).Text := Value;
end;

end.
