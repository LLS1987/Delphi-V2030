program DUpdate;

uses
  Vcl.Forms,
  UMainUp in 'UMainUp.pas' {MainUp},
  System.SysUtils;

{$R *.res}

begin
  Application.Initialize;  
  for var i:=1 to ParamCount-1 do
  begin
    if SameText(ParamStr(i),'appversion') then
      AppVersion:=ParamStr(i+1)
    else if  SameText(ParamStr(i),'appid') then
      appid:=ParamStr(i+1)
    else if  SameText(ParamStr(i),'appname') then
      appname:=ParamStr(i+1)
    else if SameText(ParamStr(i),'appupdateurl') then AppUpdateUrl := ParamStr(i+1);
  end;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TMainUp, MainUp);
  Application.Run;
end.
