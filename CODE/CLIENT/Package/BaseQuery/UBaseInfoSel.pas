unit UBaseInfoSel;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UBaseDialogForm, System.ImageList,
  Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.StdCtrls, Vcl.ExtCtrls,
  Vcl.Buttons, Data.DB, Vcl.Grids, Vcl.DBGrids, cxStyles, cxClasses, cxGraphics,
  cxControls, cxLookAndFeels, cxLookAndFeelPainters, UBaseQuery,
  UComDBStorable, cxGridCustomView, UBaseParams, cxGridDBTableView, cxGridTableView,
  cxGridCustomTableView;

type
  TBaseInfoSel = class(TBaseQuery)
    edt_Find: TButtonedEdit;
    lbl_Caption: TLabel;
    Action_FindLocat: TAction;
    procedure Action_FindLocatExecute(Sender: TObject);
    procedure edt_FindKeyDown(Sender: TObject; var Key: Word; Shift: TShiftState);
    procedure edt_FindRightButtonClick(Sender: TObject);
  private
    FParentButtonRec,FChildButtonRec:Integer;
    FBaseParam: TBaseParam;
    FStorable:TStorable;
    procedure OnColnumGetDisplayText(Sender: TcxCustomGridTableItem; ARecord: TcxCustomGridRecord; var AText: string);
    procedure OnFocusedRecordChanged(Sender: TcxCustomGridTableView;APrevFocusedRecord, AFocusedRecord: TcxCustomGridRecord;ANewItemRecordFocusingChanged: Boolean);
    procedure OnSelectClick(Sender: TObject);
    procedure OnParentClick(Sender: TObject);
    procedure OnChildClick(Sender: TObject);
    function CopyRowToStorable(ARow:Integer):TStorable;
    procedure InitViewTable(AStorable:TStorableClass);
  protected
    procedure CustomGrid(AView :TcxCustomGridView);override;
    procedure OnIniButton(Sender: TObject); override;
    procedure LoadData;override;
  public
    destructor Destroy; override;
    property BaseParam:TBaseParam read FBaseParam write FBaseParam;
  end;

var
  BaseInfoSel: TBaseInfoSel;

implementation

uses
  System.Rtti, UComvar, System.Generics.Collections, cxLabel, cxEdit,
  System.JSON, UComConst;

{$R *.dfm}

procedure TBaseInfoSel.Action_FindLocatExecute(Sender: TObject);
begin
  inherited;
  edt_Find.SetFocus;
end;

{ TBaseInfoSel }

function TBaseInfoSel.CopyRowToStorable(ARow: Integer): TStorable;
var
  Context:TRttiContext;
  Prop:TRttiProperty;
  typ:TRttiType;
begin
  Result := BaseParam.Storable.Create;
  Context := TRttiContext.Create;
  try
    typ := Context.GetType(Result.ClassType);
    for Prop in typ.GetProperties do
    begin   
      if not Prop.IsWritable then Continue;   
      if not Assigned(MainView.FindItemByName(MainView.Name + '_' + Prop.Name)) then Continue;
      if VarIsNull(RowData[Result.AttributeFieldName[Prop.Name],ARow]) then Continue;
      case Prop.PropertyType.TypeKind of
        //tkInteger,tkInt64: Prop.SetValue(Result,TValue.From<Integer>(0));
        //tkFloat: Prop.SetValue(Result,TValue.From<Double>(0));
        tkString,tkUString: Prop.SetValue(Result,TValue.From<string>(VarToStr(RowData[Result.AttributeFieldName[Prop.Name],ARow])));
        else Prop.SetValue(Result,TValue.FromVariant(RowData[Result.AttributeFieldName[Prop.Name],ARow]));
      end;
    end;
  finally
    Context.Free;
  end;
end;

procedure TBaseInfoSel.CustomGrid(AView: TcxCustomGridView);
begin
  inherited;
  //LayoutCustom := False;
  TcxGridDBTableView(AView).OptionsView.GroupByBox := False;
  TcxGridDBTableView(AView).OnFocusedRecordChanged := OnFocusedRecordChanged;
//  TcxGridDBTableView(AView).OnSelectionChanged
  MainGrid.SetFocus;
  Condition.FindButton.Top := edt_Find.Top - 1;
  BaseParam := ParamList.AsObject('@BaseParam_BaseInfoSelect') as TBaseParam;
  if Assigned(BaseParam) then    
  begin
    LayoutFileName := BaseParam.ClassName;
    if BaseParam.Title<>EmptyStr then lbl_Caption.Caption := BaseParam.Title+'信息选择';
    if not Assigned(FStorable) then FStorable := BaseParam.Storable.Create;
    InitViewTable(BaseParam.Storable);
    if BaseParam.MultSel then
    begin
      TcxGridDBTableView(AView).OptionsSelection.MultiSelect := True;
      TcxGridDBTableView(AView).OptionsSelection.CellMultiSelect := True;
      TcxGridDBTableView(AView).OptionsSelection.CheckBoxVisibility := [cbvDataRow, cbvGroupRow, cbvColumnHeader];
    end;
  end;
  edt_Find.Text := BaseParam.SearchString;
  if BaseParam.SearchHint<>EmptyStr then edt_Find.TextHint := BaseParam.SearchHint;
  RefreshData;
end;

destructor TBaseInfoSel.Destroy;
begin
  if Assigned(FStorable) then FStorable.Free;
  inherited;
end;

procedure TBaseInfoSel.edt_FindKeyDown(Sender: TObject; var Key: Word; Shift: TShiftState);
begin
  inherited;
  case key of
    13    : RefreshData;
    38,40 : MainGrid.SetFocus;
  end;
end;

procedure TBaseInfoSel.edt_FindRightButtonClick(Sender: TObject);
begin
  inherited;
  RefreshData;
end;

procedure TBaseInfoSel.InitViewTable(AStorable:TStorableClass);
var
  Context:TRttiContext;
  Prop:TRttiProperty;
  typ:TRttiType;
  A1,A2,AT:TCustomAttribute;
begin
  if not Assigned(AStorable) then Exit;
  Context := TRttiContext.Create;
  try
    typ := Context.GetType(AStorable);
    //先父类
    for Prop in typ.BaseType.GetProperties do
    begin
      for A2 in Prop.GetAttributes do
      begin
        if A2 is TFieldInfo then //AHa
        begin
          with MainView.CreateColumn do
          begin
            Name := MainView.Name + '_' + Prop.Name;
            HeaderAlignmentHorz       := taCenter;
            DataBinding.FieldName     := TFieldInfo(A2).FieldName;
            //Caption   := AStorable.Title+TFieldInfo(A2).Title;                  //如：商品编号
            Caption   := BaseParam.Title+TFieldInfo(A2).Title;                  //如：商品编号
            Width     := TFieldInfo(A2).Width;
            Visible   := TFieldInfo(A2).Visible;
          end;
        end;
      end;
    end;
    //在子类
    for Prop in typ.GetProperties do
    begin
      if Assigned(MainView.FindItemByName(MainView.Name + '_' + Prop.Name)) then Continue;
      for A2 in Prop.GetAttributes do
      begin
        if A2 is TFieldInfo then //AHa
        begin
          with MainView.CreateColumn do
          begin
            Name := MainView.Name + '_' + Prop.Name;
            HeaderAlignmentHorz       := taCenter;
            if TFieldInfo(A2).ColnumDisplayText.Count>0 then
            begin
              PropertiesClass         := TcxLabelProperties;
              Properties.Alignment.Horz := taLeftJustify;                       //左对齐
            end;
            DataBinding.FieldName     := TFieldInfo(A2).FieldName;
            Caption   := TFieldInfo(A2).Title;
            Width     := TFieldInfo(A2).Width;
            Visible   := TFieldInfo(A2).Visible;
            {$IFNDEF DEBUG}
            VisibleForCustomization   := TFieldInfo(A2).Visible;
            {$ENDIF}
            OnGetDisplayText := OnColnumGetDisplayText;
          end;
        end;
      end;
    end;
  finally
    Context.Free;
  end;
end;

procedure TBaseInfoSel.LoadData;
begin
  //inherited;
  if Assigned(BaseParam) then
  begin
    BaseParam.SearchString := Trim(edt_Find.Text);
    if ParamList.AsString('@ParID')<>EmptyStr then BaseParam.ParID := ParamList.AsString('@ParID');
    BaseParam.GetBaseInfoDataSet(ActiveDataSet);
  end;
end;

procedure TBaseInfoSel.OnChildClick(Sender: TObject);
begin
  if Assigned(ItemColumn['TypeID']) and not VarIsNull(RowData['Sonnum',ActiveRowIndex]) and (RowData['Sonnum',ActiveRowIndex]>0) then
  begin
    Self.ParamList.Add('@ParID',RowData['TypeID',ActiveRowIndex]);
    RefreshData;
  end;
end;

procedure TBaseInfoSel.OnColnumGetDisplayText(Sender: TcxCustomGridTableItem; ARecord: TcxCustomGridRecord; var AText: string);
begin
  if not Assigned(FStorable) then Exit;
  var APropName := string(Sender.Name).Substring(Length(MainView.Name)+1);
  if APropName=EmptyStr then Exit;  
  //var BPropName := (Sender as TcxGridDBColumn).DataBinding.FieldName;
  //var ADisplay := BaseParam.Storable.AttributeFieldDisplayText[APropName];
  var ADisplay := FStorable.AttributeFieldDisplayText[APropName];
  if Assigned(ADisplay) and (ADisplay.Count>0) and ADisplay.ContainsKey(AText.Trim) then
  begin
    AText := ADisplay.Items[AText.Trim];
  end;
end;

procedure TBaseInfoSel.OnFocusedRecordChanged(Sender: TcxCustomGridTableView;APrevFocusedRecord, AFocusedRecord: TcxCustomGridRecord;ANewItemRecordFocusingChanged: Boolean);
begin
  if (FChildButtonRec>0) then ButtonList.ConditionIndex[FChildButtonRec].Control.Visible := False;
  if (FParentButtonRec>0) then ButtonList.ConditionIndex[FParentButtonRec].Control.Visible := False;
  if Assigned(ItemColumn['Sonnum']) then
  begin
    ButtonList.ConditionIndex[FChildButtonRec].Control.Visible := True;
    var _sonnum := RowData['Sonnum',ActiveRowIndex];
    if not VarIsNull(_sonnum) then
    begin
      ButtonList.ConditionIndex[FChildButtonRec].Control.Enabled  := _sonnum>0;
    end;
  end;
  if Assigned(ItemColumn['ParID']) then
  begin
    ButtonList.ConditionIndex[FParentButtonRec].Control.Visible := True;
    var _parid := RowData['ParID',ActiveRowIndex];
    if not VarIsNull(_parid) then
    begin
      ButtonList.ConditionIndex[FParentButtonRec].Control.Enabled := _parid<>'00000';
    end;
  end;
end;

procedure TBaseInfoSel.OnIniButton(Sender: TObject);
begin
  inherited;
  if FPrintButtonRec>0 then ButtonList.ConditionIndex[FPrintButtonRec].Control.Visible := False;
  GridDblClickID  := ButtonList.Add('选择',OnSelectClick);
  FChildButtonRec := ButtonList.Add('子类',OnChildClick,True);
  FParentButtonRec:= ButtonList.Add('父类',OnParentClick,True);
end;

procedure TBaseInfoSel.OnParentClick(Sender: TObject);
begin
  if Assigned(ItemColumn['ParID']) then
  begin
    var _parid := RowData['ParID',ActiveRowIndex];
    if VarIsNull(_parid) then Exit;
    if _parid=EmptyStr then Exit;
    if _parid='00000' then Exit;
    _parid := Copy(_parid,1,string(_parid).Length-5);
    if _parid=EmptyStr then _parid := '00000';
    Self.ParamList.Add('@ParID',_parid);
    RefreshData;
  end
end;

procedure TBaseInfoSel.OnSelectClick(Sender: TObject);
begin
  if BaseParam.MultSel then
  begin
    for var i := 0 to ActiveGridView.DataController.GetSelectedCount-1 do
    begin
      BaseParam.Return.Add(CopyRowToStorable(ActiveGridView.DataController.GetSelectedRowIndex(i)));
    end;
  end 
  else BaseParam.Return.Add(CopyRowToStorable(ActiveRowIndex));

  ModalResult := mrOk;
end;

initialization
  Goo.Reg.RegisterClass(TBaseInfoSel);

end.
