unit UComDB;

interface

uses
  System.SysUtils,UClientModule, DB, Datasnap.DBClient,RTTI, TypInfo,Types,
  UComObject, UParamList, System.SyncObjs;

type
  //数据库访问类
  TDBConnectType = (dbctRemote,dbctLocal,dbctLocalADO);
  TDataBaseCommObject = class(TBaseCommObject)
  private
    FHostName: string;
    FPort: Integer;
    FDatabaseName: string;
    FConnectType: TDBConnectType;
    FUserName: string;
    FPassword: string;
    DM: TClientModule;
    FLockVar: TCriticalSection;
    function ClientDM:TClientModule;
    function GetConnected: Boolean;
    procedure SetConnected(const Value: Boolean);
    procedure SetDatabaseName(const Value: string);
  public
    constructor Create;
    destructor Destroy; override;
    function CheckConnected:Boolean;
    function ChangeDataBase(const ADataBaseName: string): Boolean;
    function ExecuteFile(const AFileName:string):Boolean;
    function OpenSQL(const ASQL: string; ADataSet:TClientDataSet):Integer; overload;
    function OpenSQL(const ASQL: string; const Args: array of const; ADataSet:TClientDataSet):Integer; overload;
    function ExecSQL(const ASQL: string): Integer;overload;
    function ExecSQL(const ASQL: string; const Args: array of const): Integer;overload;
    function OpenProc(szProcedureName: string; AParamName: array of string;AParamValue: array of OleVariant; ADataSet:TClientDataSet; AParams: TParams): Integer;overload;
    function OpenProc(szProcedureName: string; AParamName: array of string;AParamValue: array of OleVariant; ADataSet:TClientDataSet): Integer;overload;
    function OpenProc(szProcedureName: string; AParamList:TParamList; ADataSet:TClientDataSet): Integer;overload;
    function OpenProc(szProcedureName: string; ADataSet:TClientDataSet): Integer;overload;
    function ExecProc(szProcedureName: string; AParamName: array of string;AParamValue: array of OleVariant; AParams: TParams): Integer;overload;
    function ExecProc(szProcedureName: string; AParamName: array of string;AParamValue: array of OleVariant): Integer;overload;
    function ExecProc(szProcedureName: string; AParams: TParams): Integer;overload;
    function ExecProc(szProcedureName: string; AParams: TParamList): Integer;overload;
    function ExecProc(szProcedureName: string): Integer;overload;
    function QueryOneFiled(const ASQL: string):Variant;overload;
    function QueryOneFiled<T>(const ASQL: string):Variant;overload;
    function SysCfgValue(czName: string): string;
    function SetSubValue(czName, czValue: string;ASysflag:Integer=-1;AComment:string = ''): integer;
    procedure Lock;
    procedure UnLock;
  published
    property HostName:string read FHostName write FHostName;
    property Port:Integer read FPort write FPort;
    ///本地连接的时候的sa和密码
    property UserName:string read FUserName write FUserName;
    property Password:string read FPassword write FPassword;
    property DatabaseName:string read FDatabaseName;// write SetDatabaseName;
    property Connected:Boolean read GetConnected write SetConnected;
    property ConnectType:TDBConnectType  read FConnectType write FConnectType;
  end;

implementation

uses
  System.Variants, UClientModule_Local, UComVar, UClientModule_LocalADO;

{ TDataBaseCommObject }

function TDataBaseCommObject.ChangeDataBase(const ADataBaseName: string): Boolean;
begin
  Result := False;
  if not CheckConnected then Exit;
  Result := ClientDM.ChangeDataBase(ADataBaseName);
  if Result then FDatabaseName := ADataBaseName;  
end;

function TDataBaseCommObject.CheckConnected: Boolean;
begin
  if not Connected then Connected := True;
  Result := Connected;
end;

function TDataBaseCommObject.ClientDM: TClientModule;
begin
  Result := DM;
  if Assigned(Result) then Exit;
  case ConnectType of
    dbctLocal    : DM := TClientModule_Local.Create(nil);
    dbctLocalADO : DM := TClientModule_LocalADO.Create(nil);
  else DM := TClientModule.Create(nil);
  end;
  Result := DM;
end;

constructor TDataBaseCommObject.Create;
begin
  if Assigned(DM) then   FreeAndNil(DM);
  FLockVar := TCriticalSection.Create;
end;

destructor TDataBaseCommObject.Destroy;
begin
  if Assigned(DM) then   FreeAndNil(DM);
  if Assigned(FLockVar) then FreeAndNil(FLockVar);
  inherited;
end;

function TDataBaseCommObject.ExecProc(szProcedureName: string;AParamName: array of string; AParamValue: array of OleVariant; AParams: TParams): Integer;
begin
  Result := -1;
  if not CheckConnected then Exit;
  try
    Result := ClientDM.ExecProc(szProcedureName,AParamName,AParamValue,AParams);
  except on E: Exception do
  end;
end;

function TDataBaseCommObject.ExecProc(szProcedureName: string): Integer;
var AParams: TParams;
begin
  AParams := TParams.Create(nil);
  try
    Result := ExecProc(szProcedureName,AParams);
  finally
    AParams.Free;
  end;
end;

function TDataBaseCommObject.ExecProc(szProcedureName: string; AParamName: array of string; AParamValue: array of OleVariant): Integer;
var AParams: TParams;
begin
  AParams := TParams.Create(nil);
  try
    Result := ExecProc(szProcedureName,AParamName,AParamValue,AParams);
  finally
    AParams.Free;
  end;

end;

function TDataBaseCommObject.ExecProc(szProcedureName: string; AParams: TParams): Integer;
begin
  Result := ExecProc(szProcedureName,[],[],AParams);
end;

function TDataBaseCommObject.ExecProc(szProcedureName: string; AParams: TParamList): Integer;
var AParamName: array of string;
    AParamValue: array of OleVariant;
    i:Integer;
begin
  i := 0;
  SetLength(AParamName,AParams.Count);
  SetLength(AParamValue,AParams.Count);
  for var p in AParams do
  begin
    AParamName[i]  := p.Key;
    case p.Value.Kind of
      TTypeKind.tkString,TTypeKind.tkUString,TTypeKind.tkLString,TTypeKind.tkWString  : AParamValue[i] := p.Value.AsString;
      TTypeKind.tkInteger : AParamValue[i] := p.Value.AsInteger;
      TTypeKind.tkInt64   : AParamValue[i] := p.Value.AsInt64;
      TTypeKind.tkFloat   : AParamValue[i] := p.Value.AsCurrency;
      TTypeKind.tkVariant : AParamValue[i] := p.Value.AsVariant;
      TTypeKind.tkEnumeration:
        if p.Value.IsType<Boolean> then
        begin
          AParamValue[i] := p.Value.AsBoolean;
        end
        else
          AParamValue[i] := p.Value.AsInteger;
    end;
    Inc(i);
  end;
  ExecProc(szProcedureName,AParamName,AParamValue);
end;

function TDataBaseCommObject.ExecSQL(const ASQL: string; const Args: array of const): Integer;
begin
  Result := ExecSQL(Format(ASQL,Args));
end;

function TDataBaseCommObject.ExecuteFile(const AFileName: string): Boolean;
begin
  Result := False;
  if not CheckConnected then Exit;
  Result := ClientDM.ExecuteFile(AFileName);
end;

function TDataBaseCommObject.ExecSQL(const ASQL: string): Integer;
begin
  Result := -1;
  if not CheckConnected then Exit;
  Result := ClientDM.ExecSQL(ASQL);
end;

function TDataBaseCommObject.GetConnected: Boolean;
begin
  case ConnectType of
    dbctLocalADO : Result := TClientModule_LocalADO(ClientDM).Conn_ADO.Connected;
  else Result := ClientDM.conn.Connected;
  end;
end;

procedure TDataBaseCommObject.Lock;
begin
  FLockVar.Enter;
end;

function TDataBaseCommObject.OpenProc(szProcedureName: string; AParamName: array of string; AParamValue: array of OleVariant; ADataSet: TClientDataSet; AParams: TParams): Integer;
begin
  Result := -1;
  if szProcedureName=EmptyStr then Exit;  
  if not CheckConnected then Exit;
  try
    Goo.Logger.Debug('开始数据库查询[%s]:%s',[ClientDM.ClassName,szProcedureName]);
    Result := ClientDM.OpenProc(szProcedureName,AParamName,AParamValue,ADataSet,AParams);
    Goo.Logger.Debug('数据库完成，返回行:%d',[ADataSet.RecordCount]);
  except on E: Exception do Goo.Msg.ShowError('过程：%s，打开数据错误：%s',[szProcedureName,e.Message]);
  end;
end;

function TDataBaseCommObject.OpenProc(szProcedureName: string; AParamName: array of string; AParamValue: array of OleVariant; ADataSet: TClientDataSet): Integer;
var AParams: TParams;
begin
  AParams := TParams.Create(nil);
  try
    Result := OpenProc(szProcedureName,AParamName,AParamValue,ADataSet,AParams);
  finally
    AParams.Free;
  end;
end;

function TDataBaseCommObject.OpenProc(szProcedureName: string; ADataSet: TClientDataSet): Integer;
begin
  Result := OpenProc(szProcedureName,[],[],ADataSet);
end;

function TDataBaseCommObject.OpenProc(szProcedureName: string; AParamList: TParamList; ADataSet: TClientDataSet): Integer;
var AParamName: array of string;
    AParamValue: array of OleVariant;
    i:Integer;
begin
  i := 0;
  SetLength(AParamName,AParamList.Count);
  SetLength(AParamValue,AParamList.Count);
  for var p in AParamList do
  begin
    AParamName[i]  := p.Key;
    case VarType(p.Value.AsVariant) of
      vtInteger : AParamValue[i] := p.Value.AsInteger;
      vtInt64   : AParamValue[i] := p.Value.AsInt64;
      vtCurrency: AParamValue[i] := p.Value.AsCurrency;
      vtExtended: AParamValue[i] := p.Value.AsExtended;
      vtString  : AParamValue[i] := p.Value.AsString;
      vtBoolean : AParamValue[i] := p.Value.AsBoolean;
    else
      if p.Value.IsType<string> then AParamValue[i] := p.Value.AsType<string>
      else if p.Value.IsType<Integer> then AParamValue[i] := p.Value.AsType<Integer>
      else if p.Value.IsType<Double> then AParamValue[i] := p.Value.AsType<Double>
      else if p.Value.IsType<Currency> then AParamValue[i] := p.Value.AsType<Currency>
      else if p.Value.IsType<Boolean> then AParamValue[i] := p.Value.AsType<Boolean>
      else AParamValue[i] := p.Value.AsString;
    end;
    Inc(i);
  end;
  Result := OpenProc(szProcedureName,AParamName,AParamValue,ADataSet);
end;

function TDataBaseCommObject.OpenSQL(const ASQL: string; const Args: array of const; ADataSet: TClientDataSet): Integer;
begin
  Result := OpenSQL(Format(ASQL,Args),ADataSet)
end;

function TDataBaseCommObject.OpenSQL(const ASQL: string; ADataSet: TClientDataSet): Integer;
begin
  Result := -1;
  if not CheckConnected then Exit;
  Goo.Logger.Debug('开始数据库查询[%s]:%s',[ClientDM.ClassName,ASQL]);
  Result := ClientDM.OpenSQL(ASQL,ADataSet);
  Goo.Logger.Debug('数据库完成，返回行:%d',[ADataSet.RecordCount]);
end;

function TDataBaseCommObject.QueryOneFiled(const ASQL: string): Variant;
begin
  Result := Null;
  if not CheckConnected then Exit;
  Result := ClientDM.QueryOneFiled(ASQL);
end;

function TDataBaseCommObject.QueryOneFiled<T>(const ASQL: string): Variant;
begin
  Result := QueryOneFiled(ASQL);
  if VarIsNull(Result) then
  begin
    case PTypeInfo(TypeInfo(T))^.Kind of
      TTypeKind.tkString : Result := EmptyStr;
      TTypeKind.tkFloat,TTypeKind.tkInteger,TTypeKind.tkInt64 : Result := 0;
    end;
  end;
end;

procedure TDataBaseCommObject.SetConnected(const Value: Boolean);
begin
  if Connected = Value then Exit;
  try
    ClientDM.Conn.Connected := False;
    case ConnectType of
      dbctRemote  :
          begin
            ClientDM.Conn.ConnectionName := 'DataSnapCONNECTION';
            ClientDM.Conn.DriverName := 'DataSnap';
            ClientDM.Conn.Params.Values['HostName'] := HostName;
            ClientDM.Conn.Params.Values['Port']     := Port.ToString;
            ClientDM.Conn.Params.Add('User_Name='+'***');
            ClientDM.Conn.Params.Add('Password='+'***');
            ClientDM.Conn.Connected := Value;
          end;
      dbctLocal  :
          begin
            ClientDM.Conn.ConnectionName := 'MSSQLConnection';
            ClientDM.Conn.DriverName := 'MSSQL';
            ClientDM.Conn.LibraryName := 'dbxmss.dll';
            ClientDM.Conn.VendorLib := 'sqlncli10.dll';
            ClientDM.Conn.Params.Values['HostName']  := HostName;
            ClientDM.Conn.Params.Values['User_Name'] := UserName;
            ClientDM.Conn.Params.Values['Password']  := Password;
            ClientDM.Conn.Params.Values['DataBase']  := 'master';
            //net copy code
            ClientDM.Conn.Params.Add('LibraryName=dbxmss.dll');
            ClientDM.Conn.Params.Add('VendorLibWin64=sqlncli10.dll');
            ClientDM.Conn.Params.Add('MaxBlobSize=-1');
            ClientDM.Conn.Params.Add('OSAuthentication=False');
            ClientDM.Conn.Params.Add('PrepareSQL=True');
            ClientDM.Conn.Params.Add('SchemaOverride=sa.dbo');
            ClientDM.Conn.Params.Add('DriverName=MSSQL');
            ClientDM.Conn.Params.Add('BlobSize=-1');
            ClientDM.Conn.Params.Add('IsolationLevel=ReadCommitted');
            ClientDM.Conn.Params.Add('OS Authentication=False');
            ClientDM.Conn.Params.Add('Prepare SQL=False');
            ClientDM.Conn.Params.Add('ConnectTimeout=60');
            ClientDM.Conn.Params.Add('Mars_Connection=False');
            ClientDM.Conn.Connected := Value;
          end;
      dbctLocalADO :
          begin
            TClientModule_LocalADO(ClientDM).Conn_ADO.Connected := False;
            TClientModule_LocalADO(ClientDM).Conn_ADO.ConnectionString := 'Provider=SQLOLEDB.1;Password='+Password+';Persist Security Info=True;User ID='+UserName+';Initial Catalog='+DatabaseName+';Data Source='+HostName;
            TClientModule_LocalADO(ClientDM).Conn_ADO.Connected := Value;
          end;
    end;
  except on E: Exception do
    Goo.Logger.Error('数据库连接错误:%s',[e.Message]);
  end;
end;

procedure TDataBaseCommObject.SetDatabaseName(const Value: string);
begin
  if FDatabaseName=Value then Exit;
  //if not ChangeDataBase(Value) then Exit;
  FDatabaseName := Value;
end;

function TDataBaseCommObject.SetSubValue(czName, czValue: string; ASysflag: Integer; AComment: string): integer;
begin
  Result := ExecProc('Gp_SetSubValue', ['@szName', '@szValue','@SysFlag','@szComment'], [czName,czValue,ASysflag,AComment]);
end;

function TDataBaseCommObject.SysCfgValue(czName: string): string;
var  vParams : TParams;
begin
  Result := '';
  vParams := TParams.Create;
  try
    ExecProc('gp_GetSubValue', ['@szName', '@szReturn'], [czName,''], vParams);
    if vParams.Count > 0 then Result := vParams.ParamByName('@szReturn').AsString;
  finally
    Vparams.free;
  end;
end;

procedure TDataBaseCommObject.UnLock;
begin
  FLockVar.Leave;
end;

end.
