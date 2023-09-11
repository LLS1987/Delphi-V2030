unit UClientModule_LocalADO;

interface

uses
  System.SysUtils, System.Classes, UClientModule, Data.DBXDataSnap,
  Data.DBXCommon, IPPeerClient, Datasnap.DBClient, Datasnap.DSConnect, Data.DB,
  Data.SqlExpr, Data.Win.ADODB, Datasnap.Provider;

type
  TClientModule_LocalADO = class(TClientModule)
    Conn_ADO: TADOConnection;
    DataSetProvider_query_open: TDataSetProvider;
    DataSetProvider_proc_open: TDataSetProvider;
    query_open: TADOQuery;
    proc_exec: TADOStoredProc;
    query_exec: TADOQuery;
    proc_open: TADOStoredProc;
  private
    { Private declarations }
  public
    function ChangeDataBase(const ADataBaseName: string): Boolean; override;
    function ExecuteFile(const AFileName:string):Boolean; override;
    function OpenSQL(const ASQL: string; ADataSet:TClientDataSet):Integer; override;
    function ExecSQL(const ASQL: string): Integer;override;
    function OpenProc(szProcedureName: string; AParamName: array of string;AParamValue: array of OleVariant; ADataSet:TClientDataSet; AParams: TParams): Integer;overload;override;
    function ExecProc(szProcedureName: string; AParamName: array of string;AParamValue: array of OleVariant; AParams: TParams): Integer;override;
  end;

var
  ClientModule_LocalADO: TClientModule_LocalADO;

implementation

uses
  UComvar, UComDBSQLDMO;

{%CLASSGROUP 'Vcl.Controls.TControl'}

{$R *.dfm}

{ TClientModule_LocalADO }

function TClientModule_LocalADO.ChangeDataBase(const ADataBaseName: string): Boolean;
begin
  Result := False;
  Conn_ADO.Connected := False;
  Conn_ADO.DefaultDatabase := ADataBaseName;
  Conn_ADO.Connected := True;
  Result := Conn_ADO.Connected;
end;

function TClientModule_LocalADO.ExecProc(szProcedureName: string; AParamName: array of string; AParamValue: array of OleVariant; AParams: TParams): Integer;
begin
  Result := -1;
  proc_exec.Active := False;
  proc_exec.ProcedureName := szProcedureName;
  for var p in proc_exec.Parameters do
  begin
    for var i := Low(AParamName) to High(AParamName) do
    begin
      if SameText(p.DisplayName,AParamName[i]) then
      begin
        TParameter(p).Value := AParamValue[I];
        Break;
      end;
    end;
  end;
  proc_exec.ExecProc;
  AParams.Assign(proc_exec.Parameters);
  if Assigned(AParams.FindParam('@RETURN_VALUE')) then Result := AParams.ParamValues['@RETURN_VALUE'];
end;

function TClientModule_LocalADO.ExecSQL(const ASQL: string): Integer;
begin
  Result := -1;
  query_exec.Active := False;
  query_exec.SQL.Text := ASQL;
  Result := query_exec.ExecSQL();
end;

function TClientModule_LocalADO.ExecuteFile(const AFileName: string): Boolean;
begin
  Result := False;
  var _FilePath := Goo.SystemPath + '\' + AFileName;
  if not FileExists(_FilePath) then Exit;
  var _dmo := TSQLDMO.Create(Conn_ADO);
  try
    Result := _dmo.ExecSQLScriptPath(_FilePath);
  finally
    _dmo.Free;
  end;
end;

function TClientModule_LocalADO.OpenProc(szProcedureName: string; AParamName: array of string; AParamValue: array of OleVariant; ADataSet: TClientDataSet; AParams: TParams): Integer;
begin
  Result := -1;
  ADataSet.Active  := False;
  DataSetProvider_proc_open.DataSet := proc_open;
  proc_open.Active := False;
  proc_open.ProcedureName := szProcedureName;
  proc_open.Parameters.Refresh;
  for var p in proc_open.Parameters do
  begin
    for var i := Low(AParamName) to High(AParamName) do
    begin
      if SameText(p.DisplayName,AParamName[i]) then
      begin
        TParameter(p).Value := AParamValue[I];
        Break;
      end;
    end;
  end;
  ADataSet.Data := DataSetProvider_proc_open.Data;
  AParams.Assign(proc_open.Parameters);
  if Assigned(AParams.FindParam('@RETURN_VALUE')) then Result := AParams.ParamValues['@RETURN_VALUE'];
end;

function TClientModule_LocalADO.OpenSQL(const ASQL: string; ADataSet: TClientDataSet): Integer;
begin
  Result := -1;
  query_open.Active := False;
  query_open.SQL.Text := ASQL;
  //query_open.Open;
  ADataSet.Data := DataSetProvider_query_open.Data;
  Result := 0;
end;

end.
