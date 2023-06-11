unit UProgressBarDialog;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.ComCtrls, Vcl.StdCtrls,
  UBaseDialogForm, System.ImageList, Vcl.ImgList, System.Actions, Vcl.ActnList,UGlobalInterface;

type
  TProgressBarDialog = class(TBaseDialogForm,IProgressBarFormInt)
    ProgressBar1: TProgressBar;
    Label_Title: TLabel;
  private
    { Private declarations }
    procedure ShowProgressBar(Sender: TForm);
    procedure StepBy(var Message: TMessage); message $8001;
  protected
    procedure BeforeFormShow; override;
  public
  end;

var
  ProgressBarDialog: TProgressBarDialog;

implementation

uses
  UComVar;

{$R *.dfm}

{ TProgressBarDialog }

procedure TProgressBarDialog.BeforeFormShow;
begin
  inherited;
  if ParamList.AsString('@Caption')<>EmptyStr then Caption := ParamList.AsString('@Caption');
  if ParamList.AsString('@Title')<>EmptyStr then Label_Title.Caption := ParamList.AsString('@Title');
  if ParamList.AsInteger('@Step')>0 then ProgressBar1.Step := ParamList.AsInteger('@Step');
  if ParamList.AsInteger('@Max')>0 then ProgressBar1.Max := ParamList.AsInteger('@Max');
end;

procedure TProgressBarDialog.ShowProgressBar(Sender: TForm);
begin
  Sender.Show;
  ProgressBar1.Position := 0;
end;

procedure TProgressBarDialog.StepBy(var Message: TMessage);
var ATitle:string;
begin
  if ProgressBar1.Position+Message.WParam >= ProgressBar1.Max then Self.Hide;
  ATitle := string(Pointer(Message.LParam)^); //БъЬт
  if ATitle<>EmptyStr then Label_Title.Caption := ATitle;
  ProgressBar1.Position := ProgressBar1.Position + Message.WParam;
  Application.ProcessMessages;
end;

initialization
  Goo.Reg.RegisterClass(TProgressBarDialog)

end.
