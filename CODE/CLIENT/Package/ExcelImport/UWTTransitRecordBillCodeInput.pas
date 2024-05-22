unit UWTTransitRecordBillCodeInput;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UBaseDialogForm, cxStyles, cxClasses,
  System.ImageList, Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.StdCtrls,
  Vcl.Mask, Vcl.ExtCtrls;

type
  TWTTransitRecordBillCodeInput = class(TBaseDialogForm)
    edt_BillCode: TLabeledEdit;
    Button1: TButton;
    Button2: TButton;
    procedure Button1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

function ShowWTTransitRecordBillCodeInput(var ABillCode:string):Boolean;

implementation

uses
  UComvar;

{$R *.dfm}

function ShowWTTransitRecordBillCodeInput(var ABillCode:string):Boolean;
var ff:TWTTransitRecordBillCodeInput;
begin
  ff := TWTTransitRecordBillCodeInput.Create(nil);
  try
    Result := ff.ShowModal = mrOk;
    ABillCode := string(ff.edt_BillCode.Text).Trim;
  finally
    ff.Free;
  end;
end;

procedure TWTTransitRecordBillCodeInput.Button1Click(Sender: TObject);
begin
  inherited;
  if Goo.DB.QueryOneFiled<Integer>('IF EXISTS(SELECT 1 FROM dbo.vBillIndex_Query WHERE draft=0 AND BillType IN (11,704) AND BillCode=''%s'') SELECT 1 ELSE SELECT 0',[string(edt_BillCode.Text).Trim])=0 then
  begin
    Goo.Msg.ShowError('录入的单据编号错误，请重新录入！');
    edt_BillCode.SelectAll;
    edt_BillCode.SetFocus;
    Exit;
  end;
  ModalResult := mrOk;
end;

end.
