unit UnitMath;

interface

uses
  {$IFDEF MSWINDOWS} Windows, Messages, {$ENDIF} SysUtils, Classes, FMX.Graphics, FMX.Controls, FMX.Forms, FMX.Dialogs,
  CnMath, CnBigDecimal, FMX.StdCtrls, FMX.Edit, FMX.Memo, FMX.Types,
  FMX.ScrollBox, FMX.Controls.Presentation;

type
  TFormMath = class(TForm)
    lblRound: TLabel;
    edtValue: TEdit;
    btnInt64Sqrt: TButton;
    btnSqrt: TButton;
    btnLogN: TButton;
    btnLog2: TButton;
    btnLog10: TButton;
    edtResult: TEdit;
    btnFloatPi: TButton;
    btnGaussLegendrePi: TButton;
    edtGLRound: TEdit;
    mmoRes: TMemo;
    btnXGEuler: TButton;
    procedure btnInt64SqrtClick(Sender: TObject);
    procedure btnSqrtClick(Sender: TObject);
    procedure btnLogNClick(Sender: TObject);
    procedure btnLog2Click(Sender: TObject);
    procedure btnLog10Click(Sender: TObject);
    procedure btnFloatPiClick(Sender: TObject);
    procedure btnGaussLegendrePiClick(Sender: TObject);
    procedure btnXGEulerClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  FormMath: TFormMath;

implementation

{$R *.fmx}

procedure TFormMath.btnInt64SqrtClick(Sender: TObject);
begin
  edtResult.Text := FloatToStr(Int64Sqrt(StrToInt64(edtValue.Text)));
end;

procedure TFormMath.btnSqrtClick(Sender: TObject);
begin
  edtResult.Text := FloatToStr(FloatSqrt(StrToFloat(edtValue.Text)));
end;

procedure TFormMath.btnLogNClick(Sender: TObject);
begin
  edtResult.Text := FloatToStr(FloatLogN(StrToFloat(edtValue.Text)));
end;

procedure TFormMath.btnLog2Click(Sender: TObject);
begin
  edtResult.Text := FloatToStr(FloatLog2(StrToFloat(edtValue.Text)));
end;

procedure TFormMath.btnLog10Click(Sender: TObject);
begin
  edtResult.Text := FloatToStr(FloatLog10(StrToFloat(edtValue.Text)));
end;

procedure TFormMath.btnFloatPiClick(Sender: TObject);
begin
  edtResult.Text := FloatGaussLegendrePi;
end;

procedure TFormMath.btnGaussLegendrePiClick(Sender: TObject);
begin
  mmoRes.Lines.Text := GaussLegendrePi(StrToIntDef(edtGLRound.Text, 5));
end;

procedure TFormMath.btnXGEulerClick(Sender: TObject);
begin
  mmoRes.Lines.Text := XavierGourdonEuler(5000);
end;

end.
