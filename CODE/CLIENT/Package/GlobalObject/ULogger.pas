unit ULogger;

interface

uses
  LoggerPro, System.SysUtils, Vcl.StdCtrls, System.Generics.Collections, System.Rtti;

type
  TLogTypes = set of TLogType;
  TLogger = class
  private
    _Lock: TObject;
    _LoggerProFile:ILogWriter;
    _VclMemo:TObjectDictionary<THandle,ILogWriter>;
    FMaxLogLines: Word;
    FLog_Format: string;
    FLogTypes: TLogTypes;
    function GetSystemPath: string;
  protected
    function LoggerFile:ILogWriter;virtual;
    function LoggerMemo(AMemo:TMemo):ILogWriter;virtual;
  public
    constructor Create;
    destructor Destroy; override;

    procedure Debug(const aMessage: string); overload;
    procedure Debug(const aMessage: string; const aTag: string); overload;
    procedure Debug(const aMessage: string; const aParams: array of TVarRec); overload;
    procedure Debug(const aMessage: string; const aParams: array of TVarRec; const aTag: string); overload;

    procedure Info(const aMessage: string); overload;
    procedure Info(const aMessage: string; const aTag: string); overload;
    procedure Info(const aMessage: string; const aParams: array of TVarRec); overload;
    procedure Info(const aMessage: string; const aParams: array of TVarRec; const aTag: string); overload;

    procedure Warn(const aMessage: string); overload;
    procedure Warn(const aMessage: string; const aTag: string); overload;
    procedure Warn(const aMessage: string; const aParams: array of TVarRec; const aTag: string); overload;
    procedure Warn(const aMessage: string; const aParams: array of TVarRec); overload;

    procedure Error(const aMessage: string); overload;
    procedure Error(const aMessage: string; const aTag: string); overload;
    procedure Error(const aMessage: string; const aParams: array of TVarRec; const aTag: string); overload;
    procedure Error(const aMessage: string; const aParams: array of TVarRec); overload;
    //日志级别
    property LogTypes:TLogTypes read FLogTypes write FLogTypes;
    //VCL返回日志类
    property Log_Format:string read FLog_Format write FLog_Format;
    property MaxLogLines:Word read FMaxLogLines write FMaxLogLines;
    property Memo[AMemo:TMemo]:ILogWriter read LoggerMemo;
    //procedure LogMemo(const aMessage: string)
  end;

implementation

uses
  LoggerPro.FileAppender, LoggerPro.VCLMemoAppender, System.IniFiles, Vcl.Forms;

{ TLogger }

constructor TLogger.Create;
var
  iniFile: TIniFile;
begin
  _Lock := TObject.Create;
  _VclMemo := TObjectDictionary<THandle,ILogWriter>.Create;
  FLog_Format  := '%0:s:[%2:-8s] %3:s';
  FMaxLogLines := 0;
  LogTypes := [];
  //LogTypes := [TLogType.Debug, TLogType.Info, TLogType.Warning, TLogType.Error];
  if FileExists(GetSystemPath+'\Log\Config.ini') then
  begin
    iniFile := TIniFile.Create(GetSystemPath+'\Log\Config.ini');
    try
      if iniFile.ReadBool('LOGCONFIG','TLogType.Debug',False) then LogTypes := LogTypes+[TLogType.Debug];
      if iniFile.ReadBool('LOGCONFIG','TLogType.Info',False) then LogTypes := LogTypes+[TLogType.Info]; 
      if iniFile.ReadBool('LOGCONFIG','TLogType.Warning',False) then LogTypes := LogTypes+[TLogType.Warning]; 
      if iniFile.ReadBool('LOGCONFIG','TLogType.Error',True) then LogTypes := LogTypes+[TLogType.Error];
    finally
      iniFile.Free;
    end;
  end;
end;

procedure TLogger.Debug(const aMessage: string; const aParams: array of TVarRec);
begin
  Debug(Format(aMessage,aParams));
end;

procedure TLogger.Debug(const aMessage: string);
begin
  Debug(aMessage,'系统');
end;

destructor TLogger.Destroy;
begin
  if Assigned(_Lock) then FreeAndNil(_Lock);
  if Assigned(_VclMemo) then FreeAndNil(_VclMemo);
  _LoggerProFile := nil;
  inherited;
end;

procedure TLogger.Error(const aMessage: string; const aParams: array of TVarRec);
begin
  Error(Format(aMessage,aParams));
end;

function TLogger.GetSystemPath: string;
begin
  Result := ExtractFilePath(Application.ExeName).TrimRight(['\']);
end;

procedure TLogger.Error(const aMessage, aTag: string);
begin
  //Goo.Msg.LastErrorMessage := aMessage;
  if not (TLogType.Error in LogTypes) then Exit;
  LoggerFile.Error(aMessage,aTag);
end;

procedure TLogger.Error(const aMessage: string; const aParams: array of TVarRec; const aTag: string);
begin
  Error(Format(aMessage,aParams),aTag);
end;

procedure TLogger.Info(const aMessage: string; const aParams: array of TVarRec; const aTag: string);
begin
  Info(Format(aMessage,aParams),aTag);
end;

procedure TLogger.Info(const aMessage, aTag: string);
begin
  if not (TLogType.Info in LogTypes) then Exit;
  LoggerFile.Info(aMessage,aTag);
end;

procedure TLogger.Error(const aMessage: string);
begin
  Error(aMessage,'系统');
end;

procedure TLogger.Info(const aMessage: string);
begin
  Info(aMessage,'系统');
end;

procedure TLogger.Info(const aMessage: string; const aParams: array of TVarRec);
begin
  Info(Format(aMessage,aParams));
end;

function TLogger.LoggerFile: ILogWriter;
begin
  if _LoggerProFile = nil then
  begin
    System.TMonitor.Enter(_Lock);
    try
      if _LoggerProFile = nil then // double check
      begin
        _LoggerProFile := BuildLogWriter([TLoggerProFileAppender.Create(5,1000,'',[],'%2:s.%1:2.2d.log','%0:s [TID %1:-6d][%2:-8s] %3:s')]);
      end;
    finally
      System.TMonitor.Exit(_Lock);
    end;
  end;
  Result := _LoggerProFile;
end;

function TLogger.LoggerMemo(AMemo:TMemo): ILogWriter;
begin
  if _VclMemo.TryGetValue(AMemo.Handle,Result) then Exit;
  Result := BuildLogWriter([TVCLMemoLogAppender.Create(AMemo,MaxLogLines,False,Log_Format)]);
  _VclMemo.TryAdd(AMemo.Handle,Result);
end;

procedure TLogger.Warn(const aMessage, aTag: string);
begin
  if not (TLogType.Warning in LogTypes) then Exit;
  LoggerFile.Warn(aMessage,aTag);
end;

procedure TLogger.Warn(const aMessage: string; const aParams: array of TVarRec; const aTag: string);
begin
  Warn(Format(aMessage,aParams),aTag);
end;

procedure TLogger.Warn(const aMessage: string; const aParams: array of TVarRec);
begin
  Warn(Format(aMessage,aParams));
end;

procedure TLogger.Warn(const aMessage: string);
begin
  Warn(aMessage,'系统');
end;

procedure TLogger.Debug(const aMessage: string; const aParams: array of TVarRec; const aTag: string);
begin
  Debug(Format(aMessage,aParams),aTag);
end;

procedure TLogger.Debug(const aMessage, aTag: string);
begin
  if not (TLogType.Debug in LogTypes) then Exit;
  LoggerFile.Debug(aMessage,aTag);
end;

end.
