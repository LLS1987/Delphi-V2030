unit UClientModule_Local;

interface

uses
  System.SysUtils, System.Classes, Data.DBXDataSnap, Data.DBXCommon,
  IPPeerClient, Data.DB, Data.SqlExpr,Datasnap.DBClient, Data.FMTBcd,
  Datasnap.DSConnect, FireDAC.Stan.Intf, FireDAC.Stan.Option,
  FireDAC.Stan.Param, FireDAC.Stan.Error, FireDAC.DatS, FireDAC.Phys.Intf,
  FireDAC.DApt.Intf, FireDAC.Stan.Async, FireDAC.DApt, FireDAC.Comp.DataSet,
  FireDAC.Comp.Client, FireDAC.Stan.StorageBin, Data.DBXMSSQL,
  Datasnap.Provider, UClientModule;

type
  TClientModule_Local = class(TClientModule)
    query_open: TSQLQuery;
    DataSetProvider_query_open: TDataSetProvider;
    DataSetProvider_proc_open: TDataSetProvider;
    query_exec: TSQLQuery;
    proc_exec: TSQLStoredProc;
  private
  public
    function ChangeDataBase(const ADataBaseName: string): Boolean; override;
    function ExecuteFile(const AFileName:string):Boolean; override;
    function OpenSQL(const ASQL: string; ADataSet:TClientDataSet):Integer; override;
    function ExecSQL(const ASQL: string): Integer;override;
    function OpenProc(szProcedureName: string; AParamName: array of string;AParamValue: array of OleVariant; ADataSet:TClientDataSet; AParams: TParams): Integer;overload;override;
    function ExecProc(szProcedureName: string; AParamName: array of string;AParamValue: array of OleVariant; AParams: TParams): Integer;override;
  end;

implementation

uses
  UClientDataSnap_LIB,MidasLib, System.Variants, UComvar;

///客户端必须加入此单元：MidasLib  不然获取 TDSProviderConnection 数据集报错

{%CLASSGROUP 'Vcl.Controls.TControl'}

{$R *.dfm}

function TClientModule_Local.ChangeDataBase(const ADataBaseName: string): Boolean;
begin
  Result := False;
  conn.Connected := False;
  conn.Params.Values['DataBase'] := ADataBaseName;
  conn.Connected := True;
  Result := conn.Connected;
end;

function TClientModule_Local.ExecProc(szProcedureName: string; AParamName: array of string; AParamValue: array of OleVariant; AParams: TParams): Integer;
begin
  Result := -1;
  proc_exec.Active := False;
  proc_exec.StoredProcName := szProcedureName;
  for var p in proc_exec.Params do
  begin
//    case TParam(p).DataType of
//      ftInteger : TParam(p).Value := 0;
//      ftString  : TParam(p).Value := EmptyStr;
//    end;
    for var i := Low(AParamName) to High(AParamName) do
    begin
      if SameText(p.DisplayName,AParamName[i]) then
      begin
        TParam(p).Value := AParamValue[I];
        Break;
      end;
    end;
  end;
  Result := proc_exec.ExecProc;
  AParams.Assign(proc_exec.Params);
end;

function TClientModule_Local.ExecSQL(const ASQL: string): Integer;
begin
  Result := -1;
  query_exec.Active := False;
  query_exec.SQL.Text := ASQL;
  Result := query_exec.ExecSQL();
end;

function TClientModule_Local.ExecuteFile(const AFileName: string): Boolean;
begin
  Result := False;
  var _FilePath := Goo.SystemPath + '\' + AFileName;
  if not FileExists(_FilePath) then Exit;
  Goo.Msg.ShowMsg(_FilePath)
end;

function TClientModule_Local.OpenProc(szProcedureName: string; AParamName: array of string; AParamValue: array of OleVariant; ADataSet: TClientDataSet; AParams: TParams): Integer;
begin
  Result := -1;
  ADataSet.Active  := False;
  var proc_open := TSQLStoredProc.Create(nil);
  try
    proc_open.SQLConnection := conn;
    DataSetProvider_proc_open.DataSet := proc_open;
    proc_open.Active := False;
    proc_open.StoredProcName := szProcedureName;
    for var p in proc_open.Params do
    begin
//      case TParam(p).DataType of
//        ftInteger : TParam(p).Value := 0;
//        ftString  : TParam(p).Value := '';
//      end;
      for var i := Low(AParamName) to High(AParamName) do
      begin
        if SameText(p.DisplayName,AParamName[i]) then
        begin
          TParam(p).Value := AParamValue[I];
          Break;
        end;
      end;
      //if VarIsEmpty(_temp) or VarIsNull(_temp) or (TVarData(_temp).VType = varDispatch) and (TVarData(_temp).VDispatch = nil) then
    end;
    ADataSet.Data := DataSetProvider_proc_open.Data;
    AParams.Assign(proc_open.Params);
    if Assigned(AParams.FindParam('@RETURN_VALUE')) then Result := AParams.ParamValues['@RETURN_VALUE'];
  finally
    proc_open.Free;
  end;
end;

function TClientModule_Local.OpenSQL(const ASQL: string; ADataSet: TClientDataSet): Integer;
begin
  Result := -1;
  query_open.Active := False;
  query_open.SQL.Text := ASQL;
  //query_open.Open;
  ADataSet.Data := DataSetProvider_query_open.Data;
  Result := 0;
end;

end.
