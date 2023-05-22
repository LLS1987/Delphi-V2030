unit UMainClient;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants,
  System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.ComCtrls, Data.DB,
  Datasnap.DBClient, Vcl.ExtCtrls, Vcl.Menus, System.Actions, Vcl.ActnList;

type
  TMainClient = class(TForm)
    StatusBar1: TStatusBar;
    Timer_PassWork: TTimer;
    MainMenu: TMainMenu;
    N1: TMenuItem;
    N2: TMenuItem;
    N3: TMenuItem;
    N4: TMenuItem;
    ActionList: TActionList;
    Action_Close: TAction;
    Action_ChangeUser: TAction;
    Action_ChangeDB: TAction;
    N5: TMenuItem;
    N6: TMenuItem;
    N7: TMenuItem;
    procedure Action_ChangeDBExecute(Sender: TObject);
    procedure Action_ChangeUserExecute(Sender: TObject);
    procedure Action_CloseExecute(Sender: TObject);
    procedure N6Click(Sender: TObject);
    procedure N7Click(Sender: TObject);
    procedure Timer_PassWorkTimer(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
    procedure ClearAllMDIForm;
  end;

var
  MainClient: TMainClient;

implementation

uses UComvar, UGlobalInterface, UBaseForm, UParamList;

{$R *.dfm}

procedure TMainClient.Action_ChangeDBExecute(Sender: TObject);
begin
  ClearAllMDIForm;
  if not Goo.Login.LoginServer then
  begin
    Application.Terminate;
    Abort;
  end;
  StatusBar1.Panels[0].Text := Format('服务器：[%s:%d].[%s]',[Goo.DB.HostName,Goo.DB.Port,Goo.DB.DatabaseName]);
  if not Goo.Login.LoginUser then
  begin
    Application.Terminate;
    Abort;
  end;
  StatusBar1.Panels[1].Text := Format('职员：%s',[Goo.Login.LoginUserName]);
end;

procedure TMainClient.Action_ChangeUserExecute(Sender: TObject);
begin
  ClearAllMDIForm;
  if not Goo.Login.LoginUser then
  begin
    Application.Terminate;
    Abort;
  end;
  StatusBar1.Panels[1].Text := Format('职员：%s',[Goo.Login.LoginUserName]);
end;

procedure TMainClient.Action_CloseExecute(Sender: TObject);
begin
  Close;
end;

procedure TMainClient.ClearAllMDIForm;
begin
  LockWindowUpdate(Self.Handle);
  try
    for var I := MDIChildCount - 1 downto 0 do
    begin
      TCustomForm(MDIChildren[I]).Free;
    end;
  finally
    LockWindowUpdate(0);
  end;
end;

procedure TMainClient.N6Click(Sender: TObject);
begin
  Goo.Reg.ShowModal('TConfig_GanSu');
end;

procedure TMainClient.N7Click(Sender: TObject);
begin
  Goo.Reg.CallFormClass('TTransBill');
end;

procedure TMainClient.Timer_PassWorkTimer(Sender: TObject);
begin
  Timer_PassWork.Enabled := False;

  if not Goo.Login.LoginServer then
  begin
    Application.Terminate;
    Abort;
  end;
  StatusBar1.Panels[0].Text := Format('服务器：[%s:%d].[%s]',[Goo.DB.HostName,Goo.DB.Port,Goo.DB.DatabaseName]);
  if not Goo.Login.LoginUser then
  begin
    Application.Terminate;
    Abort;
  end;
  StatusBar1.Panels[1].Text := Format('职员：%s',[Goo.Login.LoginUserName]);
  Goo.Reg.CallFormClass('TTransBill');
end;

initialization


end.
