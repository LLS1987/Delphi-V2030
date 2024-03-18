unit UInputBoxDialog;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UBaseDialogForm, cxStyles, cxClasses,
  System.ImageList, Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.ExtCtrls,
  Vcl.StdCtrls, Vcl.Mask;

type
  TInputBoxDialog = class(TBaseDialogForm)
    Panel1: TPanel;
    Button1: TButton;
    Button2: TButton;
    edt_InputValue: TLabeledEdit;
    procedure Button1Click(Sender: TObject);
    procedure edt_InputValueKeyPress(Sender: TObject; var Key: Char);
  private
    { Private declarations }
    function CheckValue:Boolean;
  protected
    procedure BeforeFormShow; override;
  public
    { Public declarations }
  end;

var
  InputBoxDialog: TInputBoxDialog;

implementation

uses
  UComvar;

{$R *.dfm}

procedure TInputBoxDialog.BeforeFormShow;
begin
  inherited;
  if ParamList.AsString('@Caption')<>EmptyStr then Self.Caption := ParamList.AsString('@Caption');
  if ParamList.AsString('@Title')<>EmptyStr then edt_InputValue.EditLabel.Caption := ParamList.AsString('@Title');
  if ParamList.AsString('@TextHint')<>EmptyStr then edt_InputValue.TextHint := ParamList.AsString('@TextHint');
  //edt_InputValue.NumbersOnly := ParamList.AsBoolean('@NumbersOnly');
  //edt_InputValue.EditMask    := ParamList.AsString('@EditMask');
  edt_InputValue.MaxLength   := ParamList.AsInteger('@MaxLength');
end;

procedure TInputBoxDialog.Button1Click(Sender: TObject);
begin
  inherited;
  if not CheckValue then Exit;
  if ParamList.AsBoolean('@Integer') then ParamList.Add('@RestultInput',StrToIntDef(edt_InputValue.Text,0))
  else if ParamList.AsBoolean('@Double') then ParamList.Add('@RestultInput',StrToFloatDef(edt_InputValue.Text,0))
  else ParamList.Add('@RestultInput',edt_InputValue.Text);
  ModalResult := mrOk;
end;

function TInputBoxDialog.CheckValue: Boolean;
begin
  Result := False;
  //判断最大值
  if ParamList.AsInteger('@MaxValue')>0 then
  begin
    if StrToFloatDef(edt_InputValue.Text,0)>ParamList.AsInteger('@MaxValue') then Exit;
  end;
  //判断最小值
  if ParamList.AsInteger('@MinValue')>0 then
  begin
    if StrToFloatDef(edt_InputValue.Text,0)<ParamList.AsInteger('@MinValue') then Exit;
  end;
  Result := True;
end;

procedure TInputBoxDialog.edt_InputValueKeyPress(Sender: TObject; var Key: Char);
begin
  inherited;
  if Key=#13 then
  begin
    Button1.OnClick(Sender);
    Exit;
  end;
  if ParamList.AsBoolean('@Integer') or ParamList.AsBoolean('@Double') then
  begin
    if ParamList.AsBoolean('@Integer') and not (Key in ['0'..'9', #8]) then Key := #0
    else if not (Key in ['0'..'9', '.', #8]) then Key := #0
    else if (Key = '.') and (Pos('.', edt_InputValue.Text) > 0) then Key := #0
    else if ParamList.AsInteger('@Decimal')>0 then //判断小数点
    begin
      var DecimalPos := Pos('.', edt_InputValue.Text);
      if (DecimalPos > 0) and (Length(edt_InputValue.Text) - DecimalPos >= ParamList.AsInteger('@Decimal')) and (Key <> #8) and (edt_InputValue.SelStart >= DecimalPos) then
        Key := #0; // Block more than two decimal places
    end;
  end;
end;

initialization
  Goo.Reg.RegisterClass(TInputBoxDialog);

end.
