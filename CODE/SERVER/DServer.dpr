program DServer;

uses
  Vcl.Forms,
  UServer in 'UServer.pas' {Server},
  UContainer in 'UContainer.pas' {Container: TDataModule},
  UModuleUnit in 'UModuleUnit.pas' {ModuleUnit: TDSServerModule},
  UCOMM in 'UCOMM.pas',
  UDBSET in 'UDBSET.pas' {DBSET},
  ULogger in '..\CLIENT\Package\GlobalObject\ULogger.pas',
  UModuleBasicInfo in 'UModuleBasicInfo.pas';

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.Title := '中间键服务器';
  Application.CreateForm(TServer, Server);
  Application.CreateForm(TContainer, Container);
  Application.Run;
end.
