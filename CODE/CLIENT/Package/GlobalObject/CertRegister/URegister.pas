unit URegister;

interface

uses
  IdHTTP, System.Classes, System.SysUtils, Windows;

type
  TRegister = class
  private
    FRegistered:Boolean;
    FDeadLine: TDateTime;
    FCompany: string;
    FCertName: string;
    FAllowOfflineDay: Integer;
    FID: Int64;
    FCertNO: string;
    FLastNetCheckDate: TDateTime;
    FLastAlertDay: Integer;
    function SystemPath:string;
    function CreateHttp:TIdHTTP;
    function GetToken:string;
    function GetRegistered: Boolean;
    function CheckRegistered:Boolean; //在线验证
    function CheckOfflineFile:Boolean;//离线验证
    procedure SaveOfflineFile;//保存离线文件
    function crypto_sm4(encdectype: Integer; inputstr, key, outsing: PAnsiChar): Integer;
    ///加密
    function Encrypt_SM4(AInput: string; AKey: string): string;
    ///解密
    function Decrypt_SM4(AInput: string; AKey: string): string;
  public
    constructor Create(const AID: Int64;const ACertNO:string);
    function TestNetworkConnection(const AURL: string): Boolean; overload;
    function TestNetworkConnection(const AHost: string; APort: Integer): Boolean; overload;
    /// 证书ID,唯一
    property ID:Int64 read FID;
    /// 注册编码
    property CertNO:string read FCertNO write FCertNO;
    property CertName: string read FCertName write FCertName;
    ///公司信息
    property Company:string read FCompany write FCompany;
    /// 是否已经注册了
    property Registered: Boolean read GetRegistered;
    ///最后一次在线验证时间
    property LastNetCheckDate:TDateTime read FLastNetCheckDate;
    ///提前X天过期提醒
    property LastAlertDay: Integer read FLastAlertDay;
    ///允许离线天数
    property AllowOfflineDay:Integer read FAllowOfflineDay;
    ///到期时间
    property DeadLine:TDateTime read FDeadLine;
  end;

  Tcrypto_sm4 = function(encdectype: Integer; inputstr: PAnsiChar; key: PAnsiChar; outsing: PAnsiChar): Integer; stdcall;
  const Cert_URL = 'http://182.92.81.190:8087';
  const Cert_Authorization = 'Basic c2FiZXI6NDQzOTc0ODE5YzQyZTMxNTY3MDBjMTAyNDFhOTNlZjc=';
  const Cert_Username = '17394971310';
  const Cert_PassWord = 'e6e407b1edb2cca3def82992c8ef32d9';
  const Cert_FileName = '%s\Data\Cert_%d_Info.lic';
  const Cert_RSA_PubKey='QF-Certs-DOG-3F5B21E907A8';

function CheckRegistered(const AID: Int64;const ACertNO:PAnsiChar): Boolean; stdcall;

implementation

uses
  System.JSON, System.IOUtils, System.DateUtils, Vcl.Dialogs, IdTCPClient,
  IdURI;

{ TRegister }

function CheckRegistered(const AID: Int64;const ACertNO:PAnsiChar): Boolean;
begin
  Result := False;
  var Reg := TRegister.Create(AID,StrPas(ACertNO));
  try
    if not Reg.TestNetworkConnection(Cert_URL) then
    begin
      ShowMessage('请检查本地与订货平台网络是否通畅！');
      Exit(False);
    end;
    Result := Reg.Registered;
    if not Result then ShowMessage(Reg.Company +'['+reg.CertName+']注册证号：'+ACertNO+'已经过期！');
  finally
    Reg.Free;
  end;
end;

function TRegister.CheckOfflineFile: Boolean;
var Json:TJSONObject;
  NextDate:TDateTime;
  ACertNO:string;
begin
  Result := False;
  if not FileExists(Format(Cert_FileName,[SystemPath,ID])) then Exit;
  Json := TJSONObject.ParseJSONValue(Decrypt_SM4(TFile.ReadAllText(Format(Cert_FileName,[SystemPath,ID])),Cert_RSA_PubKey)) as TJSONObject;
  try
    if not Assigned(Json) then Exit;
    Json.TryGetValue<string>('Company',FCompany);
    Json.TryGetValue<TDateTime>('DeadLine',FDeadLine);
    Json.TryGetValue<TDateTime>('NextDate',NextDate);
    Json.TryGetValue<string>('CertNO',ACertNO);
    Json.TryGetValue<string>('CertName',FCertName);
    Json.TryGetValue<Integer>('AlertDay',FLastAlertDay);
    Json.TryGetValue<Integer>('AllowOfflineDay',FAllowOfflineDay);
    Result := (NextDate>=Date) and (DeadLine>=Date) and (String.Compare(CertNO,ACertNO,True)=0);
  finally
    Json.Free;
  end;
end;

function TRegister.CheckRegistered: Boolean;
var http:TIdHTTP;
  item:TJSONObject;
  ADeadLine:string;
begin
  Result := False;
  http := CreateHttp;
  try
    http.Request.CustomHeaders.AddValue('Authorization',Cert_Authorization);
    http.Request.CustomHeaders.AddValue('Blade-Auth',GetToken);
    var outdata := http.Get(Cert_URL+'/api/buy-bill-common/buybill/checkRegister2?registerNum='+CertNO+'&productType='+IntToStr(ID));
    var json := TJSONValue.ParseJSONValue(outdata);
    try
      var success := json.GetValue<Boolean>('success');
      if not success then Exit;
      if not json.TryGetValue<TJSONObject>('data',item) then Exit;
      if not item.TryGetValue<string>('deadline',ADeadLine) then Exit;
      item.TryGetValue<string>('company',FCompany);
      item.TryGetValue<string>('certName',FCertName);
      item.TryGetValue<Integer>('alertDay',FLastAlertDay);
      item.TryGetValue<Integer>('allowOfflineDay',FAllowOfflineDay);
      ADeadLine := Copy(ADeadLine, 1, 10);
      FDeadLine := StrToDateDef(ADeadLine,Date-1);
      Result := success and (DeadLine>=Date);
      if Result then
      begin
        try
          SaveOfflineFile;
        except on E: Exception do
        end;
      end;
    finally
      json.Free;
    end;
  finally
    http.Free;
  end;
end;

constructor TRegister.Create(const AID: Int64; const ACertNO: string);
begin
  FRegistered := False;
  FLastNetCheckDate := StrToDate('2000-01-01');
  FID := AID;
  FCertNO := ACertNO.Trim;
  FLastAlertDay := 7;  //默认提前7天提醒
  FAllowOfflineDay := 7;
end;

function TRegister.CreateHttp: TIdHTTP;
begin
  Result := TIdHTTP.Create(nil);
  Result.HandleRedirects := True; //允许头转向
  Result.ReadTimeout :=10000;     //请求超时设置
  Result.Request.ContentType := 'application/json;charset=UTF-8'; //设置内容类型为json
  Result.Request.ContentEncoding := 'utf-8';
  Result.ProtocolVersion := pv1_1;
  Result.Request.CustomHeaders.FoldLines := False;
end;

function TRegister.crypto_sm4(encdectype: Integer; inputstr, key, outsing:
    PAnsiChar): Integer;
var
  vdll: THandle;
  FPointer: Pointer;
  Myfun: Tcrypto_sm4;
begin
  Result:=0;
  vdll := LoadLibrary(PChar(SystemPath+'\cryptodll.dll'));
  try
    FPointer := GetProcAddress(vdll, PAnsiChar('crypto_sm4base64')); //取函数的地址。
    if FPointer <> nil then //如果函数存在就调用
    begin
      Myfun := Tcrypto_sm4(FPointer);
      Result := Myfun(encdectype, inputstr, key, outsing);
    end;
  finally
    FreeLibrary(vdll);
  end;
end;

function TRegister.Decrypt_SM4(AInput: string; AKey: string): string;
const
  RETLEN = 1024 * 1024 * 5;
var
  rstpchar: PAnsiChar;
begin
  rstpchar := AllocMem(RETLEN);
  try
    crypto_sm4(0, PAnsiChar(AnsiString(AInput)), PAnsiChar(AnsiString(AKey)), rstpchar);
    Result := StrPas(rstpchar);
  finally
    FreeMem(rstpchar);
  end;
end;

function TRegister.Encrypt_SM4(AInput: string; AKey: string): string;
const
  RETLEN = 1024 * 1024 * 5;
var
  rstpchar: PAnsiChar;
begin
  rstpchar := AllocMem(RETLEN);
  try
    crypto_sm4(1, PAnsiChar(AnsiString(AInput)), PAnsiChar(AnsiString(AKey)), rstpchar);
    Result := StrPas(rstpchar);
  finally
    FreeMem(rstpchar);
  end;
end;

function TRegister.GetRegistered: Boolean;
begin
  Result := FRegistered;
  //当天只验证一次
  if Result and (DaysBetween(LastNetCheckDate,Date)=0) then Exit;
  //离线检查
  Result := CheckOfflineFile;
  if not Result then
  begin
    try
      Result := CheckRegistered;      //在线检查
    except on E: Exception do
    end;
  end;
  //提前X天提醒
  FRegistered := Result;
  if Result then FLastNetCheckDate := Date;
  //if Result and (DaysBetween(Date,DeadLine)<LastAlertDay) then Goo.Msg.ShowMsg('你的证书：%s[%s]即将到期，请提前续约！',[CertName,CertNO]);
end;

function TRegister.GetToken: string;
var http:TIdHTTP;
  ASource: TStream;
begin
  Result := EmptyStr;
  http := CreateHttp;
  ASource := TStringStream.Create('');
  try
    http.Request.CustomHeaders.AddValue('Authorization',Cert_Authorization);
    //http.Request.CustomHeaders.AddValue('Blade-Auth',GetToken);
    var outdata := http.Post(Cert_URL+'/api/blade-auth/oauth/token?tenantId=000000&username='+Cert_Username+'&password='+Cert_PassWord,ASource);
    var json := TJSONValue.ParseJSONValue(outdata);
    try
      Result := json.GetValue<string>('token_type') + ' ' + json.GetValue<string>('access_token');
    finally
      json.Free;
    end;
  finally
    http.Free;
    ASource.Free;
  end;
end;

procedure TRegister.SaveOfflineFile;
var Json: TJSONObject;
begin
  Json := TJSONObject.Create;
  try
    Json.AddPair('Company',Company);
    Json.AddPair('CertNO',CertNO);
    Json.AddPair('CertName',CertName);
    Json.AddPair('AlertDay',LastAlertDay);
    Json.AddPair('AllowOfflineDay',AllowOfflineDay);
    Json.AddPair('DeadLine',FormatDateTime('YYYY-MM-DD',DeadLine));
    Json.AddPair('NextDate',FormatDateTime('YYYY-MM-DD',Now+AllowOfflineDay));
    var FileStream := TStringStream.Create(Encrypt_SM4(Json.ToJSON,Cert_RSA_PubKey));
    try
//      TFileStream.Create(Format(Cert_FileName,[goo.SystemPath,ID]), fmCreate);
//      var JSONString := Goo.Crypto.Encrypt_AES128(Json.ToJSON,Cert_RSA_PubKey);
//      var UTF8Encoding:= TEncoding.UTF8;
//      FileStream.WriteBuffer(UTF8Encoding.GetBytes(JSONString), UTF8Encoding.GetByteCount(JSONString));
      FileStream.SaveToFile(Format(Cert_FileName,[SystemPath,ID]));
    finally
      FileStream.Free;
    end;
  finally
    Json.Free;
  end;
end;

function TRegister.SystemPath: string;
var
  ModuleName:string;
begin
  SetLength(ModuleName, 255);
  //取得Dll自身路径
  GetModuleFileName(HInstance, PChar(ModuleName), Length(ModuleName));
  Result := ExtractFilePath(PChar(ModuleName)).TrimRight(['\']);
end;

function TRegister.TestNetworkConnection(const AURL: string): Boolean;
var _host,_port:string;
begin
  var URI := TIdURI.Create(AURL);
  try
    _host := URI.Host;
    _port := URI.Port;
  finally
    URI.Free;
  end;
  Result := TestNetworkConnection(_host,StrToIntDef(_port,80));
end;

function TRegister.TestNetworkConnection(const AHost: string; APort: Integer): Boolean;
var
  IdTCPClient: TIdTCPClient;
begin
  IdTCPClient := TIdTCPClient.Create(nil);
  try
    IdTCPClient.ConnectTimeout := 5000;
    IdTCPClient.Host := AHost;
    IdTCPClient.Port := APort;
    try
      IdTCPClient.Connect;
      Result := IdTCPClient.Connected;
    except
      Result := False;
    end;
  finally
    IdTCPClient.Free;
  end;
end;

end.
