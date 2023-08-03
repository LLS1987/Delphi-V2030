unit UModuleUnit;

interface

uses
  System.SysUtils, System.Classes, System.Json,
  DataSnap.DSProviderDataModuleAdapter, Datasnap.DSServer, Datasnap.DSAuth,
  Data.DBXMSSQL, Data.DB, Data.SqlExpr, Data.FMTBcd, Datasnap.Provider,
  FireDAC.Stan.Intf, FireDAC.Stan.Option, FireDAC.Stan.Param, FireDAC.Stan.Error,
  FireDAC.DatS, FireDAC.Phys.Intf, FireDAC.DApt.Intf, FireDAC.Stan.Async,
  FireDAC.DApt, FireDAC.Comp.DataSet, FireDAC.Comp.Client, FireDAC.UI.Intf,
  FireDAC.Stan.Def, FireDAC.Stan.Pool, FireDAC.Phys, FireDAC.Phys.MSSQL,
  FireDAC.Phys.MSSQLDef, FireDAC.VCLUI.Wait, FireDAC.Stan.StorageBin,
  IPPeerServer, Datasnap.DSCommonServer, Datasnap.DSTCPServerTransport,
  FireDAC.Phys.ODBCBase,MidasLib, FireDAC.Comp.ScriptCommands,
  FireDAC.Stan.Util, FireDAC.Comp.Script;

type
{$METHODINFO ON}
  TModuleUnit = class(TDSServerModule)
    FDQuery_Open: TFDQuery;
    FDConnection1: TFDConnection;
    DataSetProvider_Query_Open: TDataSetProvider;
    FDQuery_Exec: TFDQuery;
    FDStoredProc_Open: TFDStoredProc;
    DataSetProvider_Proc_Open: TDataSetProvider;
    FDStoredProc_Exec: TFDStoredProc;
    DataSetProvider_Proc_Exec: TDataSetProvider;
    FDScript_Upgrade: TFDScript;
  private    { Private declarations }
    function CheckConnected: Boolean;
    function UnpackFDParams(const OleVariantValue: OleVariant; const AParams: TFDParams): Boolean;
    function PackageFDParams(const Params: TFDParams): OleVariant;
    function GetParamValues(AParams:TParams;const Name:string):Variant;
  public    { Public declarations }
    function ChangeDataBase(const ADataBaseName: string): Boolean;
    function ChangeSQLString(const ASQL: string): Integer;
    function ExecuteFile(AFileName:string):Integer;
    function OpenSQL(const ASQL: string):Integer;
    function ExecSQL(const ASQL: string):Integer;
    function OpenProc(szProcedureName: string; AParams: OleVariant): OleVariant;
    function ExecProc(szProcedureName: string; AParams: OleVariant): OleVariant;
  end;
{$METHODINFO OFF}

implementation

{$R *.dfm}

uses
  System.StrUtils, UCOMM, System.Variants, Datasnap.DBClient, vcl.Forms;

function TModuleUnit.ChangeDataBase(const ADataBaseName: string): Boolean;
begin
  Result := False;
  Logger.Info('ChangeDataBase=%s',[ADataBaseName],'服务端');
  try
    FDConnection1.Connected       := False;
    FDConnection1.Params.Database := ADataBaseName;
    Result := CheckConnected;
  except
    on E: Exception do Logger.Error('ChangeDataBase=%s  Error:%s',[ADataBaseName,e.Message],'服务端');
  end;
end;

function TModuleUnit.ChangeSQLString(const ASQL: string): Integer;
begin
  Result := -1;
  if not CheckConnected then Exit;
  try
    FDQuery_Open.Open(ASQL);
    Result   := FDQuery_Open.RecordCount;
  except
    on E: Exception do Logger.Error('ChangeSQLString=%s Error:%s',[ASQL,e.Message],'服务端');
  end;
end;

function TModuleUnit.CheckConnected: Boolean;
begin
  Logger.Error('CheckConnected DataBaseAddress:%s',[DataBaseAddress],'服务端');
  Result := FDConnection1.Connected;
  if Result then Exit;
  FDConnection1.Connected := False;
  try
    FDConnection1.DriverName := 'MSSQL';
    FDConnection1.Params.DriverID := 'MSSQL';
    FDConnection1.Params.Values['Address'] := DataBaseAddress;
    FDConnection1.Params.Values['Server']  := DataBaseAddress;
    FDConnection1.Params.UserName          := DataBaseUser;
    FDConnection1.Params.Password          := DataBasePassword;
      //net copy code
    FDConnection1.Params.Add('LibraryName=dbxmss.dll');
    FDConnection1.Params.Add('VendorLibWin64=sqlncli10.dll');
    FDConnection1.Params.Add('MaxBlobSize=-1');
    FDConnection1.Params.Add('OSAuthentication=False');
    FDConnection1.Params.Add('PrepareSQL=True');
    FDConnection1.Params.Add('SchemaOverride=sa.dbo');
    FDConnection1.Params.Add('DriverName=MSSQL');
    FDConnection1.Params.Add('BlobSize=-1');
    FDConnection1.Params.Add('IsolationLevel=ReadCommitted');
    FDConnection1.Params.Add('OS Authentication=False');
    FDConnection1.Params.Add('Prepare SQL=False');
    FDConnection1.Params.Add('ConnectTimeout=60');
    FDConnection1.Params.Add('Mars_Connection=False');
    FDConnection1.Connected := True;
  except
    on E: Exception do Logger.Error('CheckConnected:%s',[e.Message],'服务端');
  end;
  Result := FDConnection1.Connected;
end;

function TModuleUnit.ExecProc(szProcedureName: string; AParams: OleVariant): OleVariant;
var APDParams: TParams;
begin
  Result := null;
  if not CheckConnected then Exit;
  try
    FDStoredProc_Open.Close;
    FDStoredProc_Open.StoredProcName := szProcedureName;
    //刷新过程的参数列表
    FDStoredProc_Open.Prepare;
    APDParams := TParams.Create;
    try
      UnpackParams(AParams, APDParams);
      for var i:=FDStoredProc_Open.ParamCount-1 downto 0 do
      begin
        if FDStoredProc_Open.Params[i].ParamType in [ptInput,ptInputOutput] then
        begin
          var tmp := GetParamValues(APDParams,FDStoredProc_Open.Params[i].Name);
          if not VarIsNull(tmp) then FDStoredProc_Open.Params[i].Value := tmp;
        end;
      end;
    finally
      APDParams.Free;
    end;
    //打开过程
    FDStoredProc_Open.ExecProc;
    Result := PackageFDParams(FDStoredProc_Open.Params);
  except
    on E: Exception do Logger.Error('ExecProc=%s  Error:%s',[szProcedureName,e.Message],'服务端');
  end;
end;

function TModuleUnit.ExecSQL(const ASQL: string): Integer;
begin
  Result := -1;
  if not CheckConnected then Exit;
  try
    FDQuery_Exec.Close;
    Result := FDQuery_Exec.ExecSQL(ASQL);
  except
    on E: Exception do Logger.Error('ExecSQL=%s Error:%s',[ASQL,e.Message],'服务端');
  end;
end;

function TModuleUnit.ExecuteFile(AFileName: string): Integer;
begin
  Result := -1;
  if not CheckConnected then Exit;
  try
    AFileName := ExtractFilePath(Application.ExeName) + AFileName;
    if not FileExists(AFileName) then Exit;    
    FDScript_Upgrade.ExecuteFile(AFileName);
    Result := FDScript_Upgrade.TotalErrors;
  except
    on E: Exception do Logger.Error('ExecuteFile=%s Error:%s',[AFileName,e.Message],'服务端');
  end;
end;

function TModuleUnit.GetParamValues(AParams: TParams;const Name: string): Variant;
begin
  Result := null;
  for var i:=0 to AParams.Count -1 do
  begin
    if SameText(Name,AParams[i].Name) then
    begin
      Result := AParams[i].Value;
      Break;
    end;
  end;
end;

function TModuleUnit.OpenProc(szProcedureName: string; AParams: OleVariant): OleVariant;
var APDParams: TParams;
begin
  Result := null;
  if not CheckConnected then Exit;
  try
    FDStoredProc_Open.Close;
    FDStoredProc_Open.StoredProcName := szProcedureName;
    //刷新过程的参数列表
    FDStoredProc_Open.Prepare;
    APDParams := TParams.Create;
    try
      UnpackParams(AParams, APDParams);
      for var i:=FDStoredProc_Open.ParamCount-1 downto 0 do
      begin
        if FDStoredProc_Open.Params[i].ParamType in [ptInput,ptInputOutput] then
        begin
          var tmp := GetParamValues(APDParams,FDStoredProc_Open.Params[i].Name);
          if not VarIsNull(tmp) then FDStoredProc_Open.Params[i].Value := tmp;
        end;
      end;
    finally
      APDParams.Free;
    end;
    //打开过程
    //FDStoredProc_Open.Open;
    Result := PackageFDParams(FDStoredProc_Open.Params);
  except
    on E: Exception do Logger.Error('OpenProc=%s  Error:%s',[szProcedureName,e.Message],'服务端');
  end;
end;

function TModuleUnit.OpenSQL(const ASQL: string): Integer;
begin
  Result := -1;
  if not CheckConnected then Exit;
  try
    FDQuery_Open.Close;
    FDQuery_Open.SQL.Text := ASQL;
    DataSetProvider_Query_Open.DataSet := FDQuery_Open;
    DataSetProvider_Query_Open.Options := DataSetProvider_Query_Open.Options + [poAllowCommandText];
    Result := 0;
  except
    on E: Exception do Logger.Error('OpenSQL=%s  Error:%s',[ASQL,e.Message],'服务端');
  end;
end;

function TModuleUnit.PackageFDParams(const Params: TFDParams): OleVariant;
var
  I, Idx, Count: Integer;
begin
  Result := NULL;
  Count := 0;
  for I := 0 to Params.Count - 1 do
    if Params[I].ParamType in [ptOutput, ptInputOutput, ptResult] then Inc(Count);
  if Count > 0 then
  begin
    Idx := 0;
    Result := VarArrayCreate([0, Count - 1], varVariant);
    for I := 0 to Params.Count - 1 do
      if Params[I].ParamType in [ptOutput, ptInputOutput, ptResult] then
      begin
        if VarIsCustom(Params[I].Value) then
          Result[Idx] := VarArrayOf([Params[I].Name, VarToStr(Params[I].Value), Ord(Params[I].DataType), Ord(Params[I].ParamType),
                                     Params[I].Size, Params[I].Precision, Params[I].NumericScale])
        else
          Result[Idx] := VarArrayOf([Params[I].Name, Params[I].Value, Ord(Params[I].DataType), Ord(Params[I].ParamType),
                                     Params[I].Size, Params[I].Precision, Params[I].NumericScale]);
        Inc(Idx);
      end;
  end;
  Result[I]
//  Result := VarArrayCreate([0, AParams.Count - 1], varVariant);
//  for var i := 0 to AParams.Count - 1 do
//  begin
//    Result[I].FieldName := AParams[I].Name;
//    Result[I].Value     := AParams[I].Value;
//  end;
end;

function TModuleUnit.UnpackFDParams(const OleVariantValue: OleVariant;const AParams: TFDParams): Boolean;
var FieldName: string;
begin
  Result := False;
  if VarIsArray(OleVariantValue) then
  begin
    for var I := VarArrayLowBound(OleVariantValue, 1) to VarArrayHighBound(OleVariantValue, 1) do
    begin
      FieldName := OleVariantValue[I].FieldName;
      if FieldName <> '' then
      begin
        AParams.ParamByName(FieldName).Value := OleVariantValue[I].Value;
      end;
    end;
    Result := True;
  end;
end;

end.

