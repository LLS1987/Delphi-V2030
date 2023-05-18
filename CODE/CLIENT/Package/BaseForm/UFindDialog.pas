unit UFindDialog;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants,
  System.Classes, Vcl.Graphics, UBaseDialogForm, Vcl.Controls, Vcl.ExtCtrls,
  System.ImageList, Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.StdCtrls,
  Vcl.Mask;

type
  TFindDialog = class(TBaseDialogForm)
    edt_Find: TLabeledEdit;
    chk_Reverse: TCheckBox;
    chk_Whole: TCheckBox;
    chk_Match: TCheckBox;
    btn_Find: TButton;
    Button2: TButton;
    procedure btn_FindClick(Sender: TObject);
    procedure edt_FindKeyPress(Sender: TObject; var Key: Char);
  private
    { Private declarations }
  public
    { Public declarations }
    class function CompareString(A,B:string;Whole:Boolean=False;Match:Boolean=False):Boolean;
  end;

var
  FindDialog: TFindDialog;

implementation

uses
  UComvar, UComConst;

{$R *.dfm}

procedure TFindDialog.btn_FindClick(Sender: TObject);
var
  H: HWND;
  AWParam, ALParam: Longint;
  msg:string;
begin
  inherited;
  H := ParamList.AsInteger('@SoureHandle');
  if H=0 then Exit;
  msg := edt_Find.Text;
  ALParam := 0;
  ALParam := SetBitValue(ALParam,1,chk_Reverse.Checked);
  ALParam := SetBitValue(ALParam,2,chk_Whole.Checked);
  ALParam := SetBitValue(ALParam,3,chk_Match.Checked);
  SendMessage(H, REFRESH_FIND_MESSAGE, Integer(@msg),ALParam);
end;

class function TFindDialog.CompareString(A, B: string; Whole, Match: Boolean): Boolean;
begin
  Result := False;
  if not Match then
  begin
    A := A.ToUpper;
    B := B.ToUpper;
  end;
  if Whole then
  begin
    if string.Compare(A,B)=0 then Result := True;
  end
  else if Pos(A,B)>0 then Result := True;
end;

procedure TFindDialog.edt_FindKeyPress(Sender: TObject; var Key: Char);
begin
  inherited;
  if Key=#13 then btn_Find.OnClick(Sender);  
end;

initialization
  Goo.Reg.RegisterClass(TFindDialog);

end.
