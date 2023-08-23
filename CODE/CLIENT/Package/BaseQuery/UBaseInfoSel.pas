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
    FBaseParam: TBaseParam;
    procedure OnColnumGetDisplayText(Sender: TcxCustomGridTableItem; ARecord: TcxCustomGridRecord; var AText: string);
    procedure OnSelectClick(Sender: TObject);
    function CopyRowToStorable(ARow:Integer):TStorable;
    procedure InitViewTable(AStorable:TStorable);
  protected
    procedure CustomGrid(AView :TcxCustomGridView);override;
    procedure OnIniButton(Sender: TObject); override;
    procedure LoadData;override;
  public
    property BaseParam:TBaseParam read FBaseParam write FBaseParam;
  end;

var
  BaseInfoSel: TBaseInfoSel;

implementation

uses
  System.Rtti, UComvar;

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
  Result := BaseParam.Storable.ClassType.Create as TStorable;
  Context := TRttiContext.Create;
  try
    typ := Context.GetType(Result.ClassType);
    for Prop in typ.GetProperties do
    begin   
      if not Prop.IsWritable then Continue;   
      if not Assigned(MainView.FindItemByName(MainView.Name + '_' + Prop.Name)) then Continue;
      if VarIsNull(RowData[Result.AttributeFieldName[Prop.Name],ARow]) then Continue;
      Prop.SetValue(Result,TValue.FromVariant(RowData[Result.AttributeFieldName[Prop.Name],ARow]));
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
  MainGrid.SetFocus;
  Condition.FindButton.Top := edt_Find.Top - 1;
  BaseParam := ParamList.AsObject('@BaseParam_BaseInfoSelect') as TBaseParam;
  if Assigned(BaseParam) then    
  begin
    LayoutFileName := BaseParam.ClassName;
    if BaseParam.Title<>EmptyStr then lbl_Caption.Caption := BaseParam.Title;
    InitViewTable(BaseParam.Storable);
    if BaseParam.MultSel then
    begin
      TcxGridDBTableView(AView).OptionsSelection.MultiSelect := True;
      TcxGridDBTableView(AView).OptionsSelection.CellMultiSelect := True;
      TcxGridDBTableView(AView).OptionsSelection.CheckBoxVisibility := [cbvDataRow, cbvGroupRow, cbvColumnHeader];
    end;
  end;
  edt_Find.Text := BaseParam.SearchString;
  RefreshData;
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

procedure TBaseInfoSel.InitViewTable(AStorable:TStorable);
var
  Context:TRttiContext;
  Prop:TRttiProperty;
  typ:TRttiType;
  A1,A2:TCustomAttribute;
begin
  if not Assigned(AStorable) then Exit;
  Context := TRttiContext.Create;
  try
    typ := Context.GetType(AStorable.ClassType);
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
            Caption   := TFieldInfo(A2).Title;
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
    BaseParam.GetBaseInfoDataSet(ActiveDataSet);
  end;
end;

procedure TBaseInfoSel.OnColnumGetDisplayText(Sender: TcxCustomGridTableItem; ARecord: TcxCustomGridRecord; var AText: string);
begin
  if SameText(Sender.Name,MainView.Name + '_Sex') then
    AText := Goo.Format.iif(AText='0','男','女');
end;

procedure TBaseInfoSel.OnIniButton(Sender: TObject);
begin
  inherited;
  GridDblClickID :=  ButtonList.Add('选择',OnSelectClick);
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
