unit UMessageBoxDialog;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.ExtCtrls, UBaseDialogForm,
  System.ImageList, Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.StdCtrls,
  Vcl.Buttons, cxStyles, cxClasses;

type
  TMessageBoxDialog = class(TBaseDialogForm)
    Image1: TImage;
    Panel_Button: TPanel;
    Label1: TLabel;
  private
    FDlgType: TMsgDlgType;
    FButtons: TMsgDlgButtons;
  protected
    procedure BeforeFormShow; override;
  public
    property DlgType: TMsgDlgType read FDlgType;
    property Buttons: TMsgDlgButtons read FButtons;
  end;

implementation

uses
  UComvar;

{$R *.dfm}

{ TMessageBoxDialog }

procedure TMessageBoxDialog.BeforeFormShow;
var buttoncount,nleft:Integer;
begin
  inherited;
  Self.Caption := ParamList.AsString('@Caption');
  Label1.Caption := ParamList.AsString('@Message');
  if (Label1.Left+label1.Width)>ClientWidth then ClientWidth := Label1.Left+label1.Width + 30;
  ClientHeight := ClientHeight + Label1.ClientHeight - 15;
  Image1.Top   := ((ClientHeight-Panel_Button.ClientHeight) div 2) - (Image1.ClientHeight div 2);
  //根据消息动态调整消息框的宽度和高度
  FDlgType     := TMsgDlgType(ParamList.AsInteger('@DlgType'));
  case DlgType of
    mtWarning       :Image1.Picture.Icon.Handle:=loadicon(Image1.Picture.Icon.Handle, IDI_ASTERISK);
    mtError         :Image1.Picture.Icon.Handle:=loadicon(Image1.Picture.Icon.Handle, IDI_ERROR);
    mtInformation   :Image1.Picture.Icon.Handle:=loadicon(Image1.Picture.Icon.Handle, IDI_WARNING);
    mtConfirmation  :Image1.Picture.Icon.Handle:=loadicon(Image1.Picture.Icon.Handle, IDI_QUESTION);
    mtCustom        :Image1.Picture.Icon.Handle:=loadicon(Image1.Picture.Icon.Handle, IDI_HAND);
  end;
  FButtons := ParamList.AsValue('@Buttons').AsType<TMsgDlgButtons>;
  buttoncount := 0;
  for var btn in Buttons do Inc(buttoncount);
  nleft := (Width - buttoncount*90) div 2;
  for var btn in Buttons do
  begin
    case btn of
      mbYes:
        begin
          with TBitBtn.CreateParented(Panel_Button.Handle) do
          begin
            Parent := Panel_Button;
            Name   := 'btn_'+Ord(mbYes).ToString;
            Tag    := Ord(mbYes);
            Left   := nleft;
            Inc(nleft,Width+10);
            Caption := '是';
            ModalResult := mrYes;
          end;
        end;
      mbOK:
        begin
          with TBitBtn.CreateParented(Panel_Button.Handle) do
          begin
            Parent := Panel_Button;
            Name   := 'btn_'+Ord(mbOK).ToString;
            Tag    := Ord(mbOK);
            Left   := nleft;
            Inc(nleft,Width+10);
            Caption := '确定';
            ModalResult := mrOk;
          end;
        end;
      mbNo :
        begin
          with TBitBtn.CreateParented(Panel_Button.Handle) do
          begin
            Parent := Panel_Button;
            Name   := 'btn_'+Ord(mbNo).ToString;
            Tag    := Ord(mbNo);
            Left   := nleft;
            Inc(nleft,Width+10);
            Caption := '否';
            ModalResult := mrNo;
          end;
        end;
      mbCancel :
        begin
          with TBitBtn.CreateParented(Panel_Button.Handle) do
          begin
            Parent := Panel_Button;
            Name   := 'btn_'+Ord(mbCancel).ToString;
            Tag    := Ord(mbCancel);
            Left   := nleft;
            Inc(nleft,Width+10);
            Caption := '取消';
            ModalResult := mrCancel;
          end;
        end;
      TMsgDlgBtn.mbAbort :
        begin
          with TBitBtn.CreateParented(Panel_Button.Handle) do
          begin
            Parent := Panel_Button;
            Name   := 'btn_'+Ord(mbAbort).ToString;
            Tag    := Ord(mbAbort);
            Left   := nleft;
            Inc(nleft,Width+10);
            Caption := '退出';
            ModalResult := mrAbort;
          end;
        end;
      TMsgDlgBtn.mbClose :
        begin
          with TBitBtn.CreateParented(Panel_Button.Handle) do
          begin
            Parent := Panel_Button;
            Name   := 'btn_'+Ord(mbClose).ToString;
            Tag    := Ord(mbClose);
            Left   := nleft;
            Inc(nleft,Width+10);
            Caption := '关闭';
            ModalResult := mrClose;
          end;
        end;
    end;
  end;
end;

initialization
  Goo.Reg.RegisterClass(TMessageBoxDialog)

end.
