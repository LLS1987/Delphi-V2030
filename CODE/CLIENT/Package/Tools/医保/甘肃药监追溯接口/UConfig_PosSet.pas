unit UConfig_PosSet;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.Mask, Vcl.ExtCtrls,
  Vcl.Buttons, UBaseDialogForm, System.ImageList, Vcl.ImgList, System.Actions,
  Vcl.ActnList, cxStyles, cxClasses;

type
  TConfig_PosSet = class(TBaseDialogForm)
    edt_StoreName: TLabeledEdit;
    edt_StoreCode: TLabeledEdit;
    edt_Password: TLabeledEdit;
    edt_Appkey: TLabeledEdit;
    Panel1: TPanel;
    BitBtn1: TBitBtn;
    BitBtn2: TBitBtn;
    procedure BitBtn1Click(Sender: TObject);
    procedure FormShow(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Config_PosSet: TConfig_PosSet;

implementation

uses
  UComvar;

{$R *.dfm}

procedure TConfig_PosSet.BitBtn1Click(Sender: TObject);
begin
  inherited;
  ParamList.Add('@StoreName',edt_StoreName.Text);
  ParamList.Add('@StoreCode',edt_StoreCode.Text);
  ParamList.Add('@Password',edt_Password.Text);
  ParamList.Add('@Appkey',edt_Appkey.Text);
end;

procedure TConfig_PosSet.FormShow(Sender: TObject);
begin
  inherited;
  edt_StoreName.Text := ParamList.AsString('@StoreName');
  edt_StoreCode.Text := ParamList.AsString('@StoreCode');
  edt_Password.Text  := ParamList.AsString('@Password');
  edt_Appkey.Text    := ParamList.AsString('@Appkey');
end;

initialization
  Goo.Reg.RegisterClass(TConfig_PosSet)

end.
