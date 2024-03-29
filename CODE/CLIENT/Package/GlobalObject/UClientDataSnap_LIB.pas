//
// Created by the DataSnap proxy generator.
// 2023-04-13 20:57:54
//

unit UClientDataSnap_LIB;

interface

uses System.JSON, Data.DBXCommon, Data.DBXClient, Data.DBXDataSnap, Data.DBXJSON, Datasnap.DSProxy, System.Classes, System.SysUtils, Data.DB, Data.SqlExpr, Data.DBXDBReaders, Data.DBXCDSReaders, Data.DBXJSONReflect;

type
  TModuleUnitClient = class(TDSAdminClient)
  private
    FChangeDataBaseCommand: TDBXCommand;
    FChangeSQLStringCommand: TDBXCommand;
    FExecuteFileCommand: TDBXCommand;
    FOpenSQLCommand: TDBXCommand;
    FExecSQLCommand: TDBXCommand;
    FOpenProcCommand: TDBXCommand;
    FExecProcCommand: TDBXCommand;
    FTestConnectCommand: TDBXCommand;
  public
    constructor Create(ADBXConnection: TDBXConnection); overload;
    constructor Create(ADBXConnection: TDBXConnection; AInstanceOwner: Boolean); overload;
    destructor Destroy; override;
    function ChangeDataBase(ADataBaseName: string): Boolean;
    function ChangeSQLString(ASQL: string): Integer;
    function ExecuteFile(AFileName:string):Integer;
    function OpenSQL(ASQL: string): Integer;
    function ExecSQL(ASQL: string): Integer;
    function OpenProc(szProcedureName: string; AParams: OleVariant): OleVariant;
    function ExecProc(szProcedureName: string; AParams: OleVariant): OleVariant;
    function TestConnect: Boolean;
  end;

implementation

function TModuleUnitClient.ChangeDataBase(ADataBaseName: string): Boolean;
begin
  if FChangeDataBaseCommand = nil then
  begin
    FChangeDataBaseCommand := FDBXConnection.CreateCommand;
    FChangeDataBaseCommand.CommandType := TDBXCommandTypes.DSServerMethod;
    FChangeDataBaseCommand.Text := 'TModuleUnit.ChangeDataBase';
    FChangeDataBaseCommand.Prepare;
  end;
  FChangeDataBaseCommand.Parameters[0].Value.SetWideString(ADataBaseName);
  FChangeDataBaseCommand.ExecuteUpdate;
  Result := FChangeDataBaseCommand.Parameters[1].Value.GetBoolean;
end;

function TModuleUnitClient.ChangeSQLString(ASQL: string): Integer;
begin
  if FChangeSQLStringCommand = nil then
  begin
    FChangeSQLStringCommand := FDBXConnection.CreateCommand;
    FChangeSQLStringCommand.CommandType := TDBXCommandTypes.DSServerMethod;
    FChangeSQLStringCommand.Text := 'TModuleUnit.ChangeSQLString';
    FChangeSQLStringCommand.Prepare;
  end;
  FChangeSQLStringCommand.Parameters[0].Value.SetWideString(ASQL);
  FChangeSQLStringCommand.ExecuteUpdate;
  Result := FChangeSQLStringCommand.Parameters[1].Value.GetInt32;
end;

function TModuleUnitClient.OpenSQL(ASQL: string): Integer;
begin
  if FOpenSQLCommand = nil then
  begin
    FOpenSQLCommand := FDBXConnection.CreateCommand;
    FOpenSQLCommand.CommandType := TDBXCommandTypes.DSServerMethod;
    FOpenSQLCommand.Text := 'TModuleUnit.OpenSQL';
    FOpenSQLCommand.Prepare;
  end;
  FOpenSQLCommand.Parameters[0].Value.SetWideString(ASQL);
  FOpenSQLCommand.ExecuteUpdate;
  Result := FOpenSQLCommand.Parameters[1].Value.GetInt32;
end;

function TModuleUnitClient.TestConnect: Boolean;
begin
  if FTestConnectCommand = nil then
  begin
    FTestConnectCommand := FDBXConnection.CreateCommand;
    FTestConnectCommand.CommandType := TDBXCommandTypes.DSServerMethod;
    FTestConnectCommand.Text := 'TModuleUnit.TestConnect';
    FTestConnectCommand.Prepare;
  end;
  FTestConnectCommand.ExecuteUpdate;
  Result := FTestConnectCommand.Parameters[0].Value.GetBoolean;
end;

function TModuleUnitClient.ExecSQL(ASQL: string): Integer;
begin
  if FExecSQLCommand = nil then
  begin
    FExecSQLCommand := FDBXConnection.CreateCommand;
    FExecSQLCommand.CommandType := TDBXCommandTypes.DSServerMethod;
    FExecSQLCommand.Text := 'TModuleUnit.ExecSQL';
    FExecSQLCommand.Prepare;
  end;
  FExecSQLCommand.Parameters[0].Value.SetWideString(ASQL);
  FExecSQLCommand.ExecuteUpdate;
  Result := FExecSQLCommand.Parameters[1].Value.GetInt32;
end;

function TModuleUnitClient.ExecuteFile(AFileName: string): Integer;
begin
  if FExecuteFileCommand = nil then
  begin
    FExecuteFileCommand := FDBXConnection.CreateCommand;
    FExecuteFileCommand.CommandType := TDBXCommandTypes.DSServerMethod;
    FExecuteFileCommand.Text := 'TModuleUnit.ExecuteFile';
    FExecuteFileCommand.Prepare;
  end;
  FExecuteFileCommand.Parameters[0].Value.SetWideString(AFileName);
  FExecuteFileCommand.ExecuteUpdate;
  Result := FExecuteFileCommand.Parameters[1].Value.GetInt32;
end;

function TModuleUnitClient.OpenProc(szProcedureName: string; AParams: OleVariant): OleVariant;
begin
  if FOpenProcCommand = nil then
  begin
    FOpenProcCommand := FDBXConnection.CreateCommand;
    FOpenProcCommand.CommandType := TDBXCommandTypes.DSServerMethod;
    FOpenProcCommand.Text := 'TModuleUnit.OpenProc';
    FOpenProcCommand.Prepare;
  end;
  FOpenProcCommand.Parameters[0].Value.SetWideString(szProcedureName);
  FOpenProcCommand.Parameters[1].Value.AsVariant := AParams;
  FOpenProcCommand.ExecuteUpdate;
  Result := FOpenProcCommand.Parameters[2].Value.AsVariant;
end;

function TModuleUnitClient.ExecProc(szProcedureName: string; AParams: OleVariant): OleVariant;
begin
  if FExecProcCommand = nil then
  begin
    FExecProcCommand := FDBXConnection.CreateCommand;
    FExecProcCommand.CommandType := TDBXCommandTypes.DSServerMethod;
    FExecProcCommand.Text := 'TModuleUnit.ExecProc';
    FExecProcCommand.Prepare;
  end;
  FExecProcCommand.Parameters[0].Value.SetWideString(szProcedureName);
  FExecProcCommand.Parameters[1].Value.AsVariant := AParams;
  FExecProcCommand.ExecuteUpdate;
  Result := FExecProcCommand.Parameters[2].Value.AsVariant;
end;

constructor TModuleUnitClient.Create(ADBXConnection: TDBXConnection);
begin
  inherited Create(ADBXConnection);
end;

constructor TModuleUnitClient.Create(ADBXConnection: TDBXConnection; AInstanceOwner: Boolean);
begin
  inherited Create(ADBXConnection, AInstanceOwner);
end;

destructor TModuleUnitClient.Destroy;
begin
  FChangeDataBaseCommand.DisposeOf;
  FChangeSQLStringCommand.DisposeOf;
  FExecuteFileCommand.DisposeOf;
  FOpenSQLCommand.DisposeOf;
  FExecSQLCommand.DisposeOf;
  FOpenProcCommand.DisposeOf;
  FExecProcCommand.DisposeOf;
  FTestConnectCommand.DisposeOf;
  inherited;
end;

end.

