unit UMainUp;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.ExtCtrls, Vcl.StdCtrls;

type
  TMainUp = class(TForm)
    Panel1: TPanel;
    Button1: TButton;
    Button2: TButton;
    Panel_Caption: TPanel;
    Memo_changelog: TMemo;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure FormShow(Sender: TObject);
  private
    function GetSystemPath:string;
    function StringToChinese(const AStr: string): string;
    function DownUpdateFile(const AUrl,APath:string):Boolean;
    function GetHostURL(const AURL:string):string;
    function GetPathURL(const AURL:string):string;
  public
    { Public declarations }
    function CheckOnlineUpdate(const AURL:string):Boolean;
    function CompareVersion(const Version1, Version2: string): Integer;
  end;

var
  MainUp: TMainUp;
  AppVersion,AppID,AppName,AppUpdateUrl,AppFileUrl: string;

implementation

uses
  IdHTTP, System.JSON, System.IOUtils, Winapi.UrlMon, System.Zip,
  System.StrUtils, Winapi.ShellAPI, IdURI, System.Math;

{$R *.dfm}

procedure TMainUp.Button1Click(Sender: TObject);
begin
  Close;
end;

procedure TMainUp.Button2Click(Sender: TObject);
var json,item:TJSONObject;
  OutJson,AFileName,ASetupName:string;
  Encoding:TEncoding;
begin
  if not DirectoryExists(GetSystemPath+'\Download') then ForceDirectories(GetSystemPath+'\Download');
  if not DirectoryExists(GetSystemPath+'\Download\Update') then ForceDirectories(GetSystemPath+'\Download\Update');
  if AppFileUrl=EmptyStr then Exit;
  AFileName := GetSystemPath+'\Download\update_'+FormatDateTime('YYYYMMDDHHMMSS',Now)+'.zip';
  AppFileUrl:= GetHostURL(AppUpdateUrl) +AppFileUrl;
  if not DownUpdateFile(AppFileUrl,AFileName) then Exit;
  var zip := TZipFile.Create;
  Encoding:= TEncoding.GetEncoding(936);
  try
    zip.Encoding := Encoding;
    zip.Open(AFileName,zmRead);
    for var _name in zip.FileNames do
    begin
      if EndsStr('.exe',_name) then ASetupName := GetSystemPath+'\Download\Update\'+_name;
    end;
    zip.ExtractAll(GetSystemPath+'\Download\Update\');
    //自动打开安装程序
    if FileExists(ASetupName) then ShellExecute(0, 'open', PWideChar(ASetupName), '', '', SW_SHOW);
  finally
    Encoding.Free;
    zip.Free;
  end;
  Close;  //更新之后关闭当前更新窗口
end;

function TMainUp.CheckOnlineUpdate(const AURL: string): Boolean;
var json,item:TJSONObject;
  OutJson:string;
begin
  Result := False;
  if AURL=EmptyStr then
  begin
    Panel_Caption.Caption := Format(' %s:更新路径为空',[AppName]);
    Exit;
  end;
  AppFileUrl := EmptyStr;
  var http := TIdHTTP.Create(nil);
  try
    http.Request.ContentType :='application/json;charset=utf-8';// ''; // 定义发送mime类型
    http.Request.ContentEncoding := 'utf-8';
    http.Request.Connection  := 'Keep-Alive';
    http.ProtocolVersion := pv1_1;
    var b:= TStringStream.Create('',65001);   //用于接收json数据的流,支持中文
    try
      http.Get(AURL,b);
      OutJson := b.DataString;
    finally
      b.Free;
    end;
//    var _outjson :string := http.Get(updateurl+AppUpdateUrl);
    json := TJSONObject.ParseJSONValue(OutJson) as TJSONObject;
    try
      if not Assigned(json) then Exit;
      if not json.TryGetValue<TJSONObject>('item',item) then Exit;
      var _id :string := EmptyStr;
      var _version:string := EmptyStr;
      var _md5 :string := EmptyStr;
      var _changelog :string := EmptyStr;
      var _mandatory : Boolean := False;
      if not item.TryGetValue<string>('id',_id) then Exit;
      if not item.TryGetValue<string>('url',AppFileUrl) then Exit;
      if not item.TryGetValue<string>('version',_version) then Exit;
      AppName := item.GetValue<string>('name',AppName);
      _md5  := item.GetValue<string>('md5',EmptyStr);
      item.TryGetValue<string>('changelog',_changelog);
      item.TryGetValue<Boolean>('mandatory',_mandatory);
      Result := (AppFileUrl<>EmptyStr) and (CompareVersion(AppVersion,_version)>=0);// (AppFileUrl<>EmptyStr) and (_version=Copy(AppVersion,1,Length(_version)));
      Panel_Caption.Caption := Format(' %s:%s 本地版本:%s',[AppName,GetPathURL(AURL),AppVersion]);
      Memo_changelog.Lines.Clear;
      Memo_changelog.Lines.Add('最新版本：'+_version);
      Memo_changelog.Lines.Add('更新文件：'+AppFileUrl);
      Memo_changelog.Lines.Add('更新日志：');
      Memo_changelog.Lines.Add(_changelog);
    finally
      json.Free;
    end;
  finally
     http.Free;
  end;
end;

function TMainUp.CompareVersion(const Version1, Version2: string): Integer;
var Version1Parts,Version2Parts:TArray<string>;
begin
  Result := 0;
  Version1Parts := Version1.Split(['.']);
  Version2Parts := Version2.Split(['.']);
  for var I := 0 to Max(High(Version1Parts), High(Version2Parts)) do
  begin
    if I > High(Version1Parts) then Exit(-1);
    if I > High(Version2Parts) then Exit(1);

    if StrToInt(Version1Parts[I]) < StrToInt(Version2Parts[I]) then Exit(-1)
    else if StrToInt(Version1Parts[I]) > StrToInt(Version2Parts[I]) then Exit(1);
  end;
end;

function TMainUp.DownUpdateFile(const AUrl,APath: string): Boolean;
begin
  Result := False;
  if AUrl='' then Exit;
  if FileExists(APath) then DeleteFile(APath);
  try
    Result := UrlDownloadToFile(nil, PChar(AUrl), PChar(APath), 0, nil) = 0;
  except
    raise Exception.Create('文件下载异常：' + AUrl);
  end;
end;

procedure TMainUp.FormShow(Sender: TObject);
begin
  Panel_Caption.Color := RGB(133,193,95);
  //if AppUpdateUrl=EmptyStr then AppUpdateUrl := 'http://36.138.76.225:5005/winapp/gansu_spda/updater.json';
  //AppVersion   := '1.0.0.2';
  //AppUpdateUrl := 'http://qfbj-file.oss-cn-beijing.aliyuncs.com/setup/tool/qianfango2o/updater.json';
  if not CheckOnlineUpdate(AppUpdateUrl) then
  begin
    Panel1.Caption := EmptyStr;
    Button2.Enabled:= True;
  end;
end;

function TMainUp.GetHostURL(const AURL:string): string;
begin
  var HttpClient := TIdURI.Create(AURL);
  try
    Result := HttpClient.Host;
    if HttpClient.Port<>EmptyStr then Result := HttpClient.Host + ':' + HttpClient.Port;
    if Result=EmptyStr then Result := '36.138.76.225:5005';
    Result := HttpClient.Protocol + '://' + Result;
  finally
    HttpClient.Free;
  end;
end;

function TMainUp.GetPathURL(const AURL:string): string;
begin
  var HttpClient := TIdURI.Create(AURL);
  try
    Result := HttpClient.Path+HttpClient.Document;
  finally
    HttpClient.Free;
  end;
end;

function TMainUp.GetSystemPath: string;
begin
  Result := ExtractFilePath(Application.ExeName).TrimRight(['\']);
end;

function TMainUp.StringToChinese(const AStr: string): string;
var
  Encoding: TEncoding;
begin
  Encoding := TEncoding.GetEncoding(936);//TEncoding.GetEncoding('GB18030');
  try
    Result := Encoding.GetString(TEncoding.Default.GetBytes(AStr));
  finally
    Encoding.Free;
  end;
end;

end.
