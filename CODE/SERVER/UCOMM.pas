unit UCOMM;

interface

uses System.Variants,ULogger;

var
  //数据库连接参数信息
  DataBaseAddress  : string;
  DataBaseUser     : string;
  DataBasePassword : string;
  //服务器端口信息
  DataSnapPort :Integer;   //DataSnap端口
  HttpPort     :Integer;  //HTTP 端口
  //客户端连接数
  Connections  :Integer;
  _Logger:TLogger;
  function Logger:TLogger;
implementation

function Logger:TLogger;
begin
  if not Assigned(_Logger) then _Logger := TLogger.Create;
  Result := _Logger;
end;

initialization

finalization
  if Assigned(_Logger) then _Logger.Free;


end.
