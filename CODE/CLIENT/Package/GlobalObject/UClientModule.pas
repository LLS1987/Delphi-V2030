unit UClientModule;

interface

uses
  System.SysUtils, System.Classes, Data.DBXDataSnap, Data.DBXCommon,
  IPPeerClient, Data.DB, Data.SqlExpr,Datasnap.DBClient, Data.FMTBcd,
  Datasnap.DSConnect, FireDAC.Stan.Intf, FireDAC.Stan.Option,
  FireDAC.Stan.Param, FireDAC.Stan.Error, FireDAC.DatS, FireDAC.Phys.Intf,
  FireDAC.DApt.Intf, FireDAC.Stan.Async, FireDAC.DApt, FireDAC.Comp.DataSet,
  FireDAC.Comp.Client, FireDAC.Stan.StorageBin, Data.DBXMSSQL, Datasnap.Provider,
  Vcl.ExtCtrls;

type
  TClientModule = class(TDataModule)
    conn: TSQLConnection;
    DSProvider_OpenSQL: TDSProviderConnection;
    DSProvider_OpenPRoc: TDSProviderConnection;
    ConnectTimer: TTimer;
    procedure ConnectTimerTimer(Sender: TObject);
  private
    FHeartbeatConnection: Boolean;
    { Private declarations }
    function CopyStream(const AStream: TStream): TMemoryStream;
    procedure SetHeartbeatConnection(const Value: Boolean);
  public
    { Public declarations }
    destructor Destroy; override;
    function ChangeSQLString(const ASQL: string): Integer;
    function ChangeDataBase(const ADataBaseName: string): Boolean; virtual;
    function ExecuteFile(const AFileName:string):Boolean; virtual;
    function OpenSQL(const ASQL: string; ADataSet:TClientDataSet):Integer; virtual;
    function ExecSQL(const ASQL: string): Integer;virtual;
    function OpenProc(szProcedureName: string; AParamName: array of string;AParamValue: array of OleVariant; ADataSet:TClientDataSet; AParams: TParams): Integer;overload;virtual;
    function ExecProc(szProcedureName: string; AParamName: array of string;AParamValue: array of OleVariant; AParams: TParams): Integer;virtual;
    function QueryOneFiled(const ASQL: string):Variant;
    property HeartbeatConnection:Boolean read FHeartbeatConnection write SetHeartbeatConnection;
  end;

//var
//  DM: TClientModule;

implementation

uses
  UClientDataSnap_LIB,MidasLib, System.Variants;

///客户端必须加入此单元：MidasLib  不然获取 TDSProviderConnection 数据集报错

{%CLASSGROUP 'Vcl.Controls.TControl'}

{$R *.dfm}

{ TClientModule }

function TClientModule.ChangeDataBase(const ADataBaseName: string): Boolean;
var
  oDataModel: TModuleUnitClient;
begin
  try
     //创建应用服务器上的Sample Methods在客户端的实现类
    oDataModel := TModuleUnitClient.Create(conn.DBXConnection);
    Result := oDataModel.ChangeDataBase(ADataBaseName);
  finally
    oDataModel.Free;
  end;
end;

function TClientModule.ChangeSQLString(const ASQL: string): Integer;
var
  oDataModel: TModuleUnitClient;
begin
  try
     //创建应用服务器上的Sample Methods在客户端的实现类
    oDataModel := TModuleUnitClient.Create(conn.DBXConnection);
    Result := oDataModel.ChangeSQLString(ASQL);
  finally
    oDataModel.Free;
  end;
end;

function TClientModule.CopyStream(const AStream: TStream): TMemoryStream;
const
  LBufSize = $F000;
var
  LBuffer: TBytes;
  LReadLen: Integer;
begin
  Result := nil;
  if AStream = nil then Exit;
  Result := TMemoryStream.Create;
  try
    if AStream.Size = -1 then
    begin
      SetLength(LBuffer, LBufSize);
      repeat
        LReadLen := AStream.Read(LBuffer[0], LBufSize);
        if LReadLen > 0 then
          Result.WriteBuffer(LBuffer[0], LReadLen);
        if LReadLen < LBufSize then
          break;
      until LReadLen < LBufSize;
    end
    else
      Result.CopyFrom(AStream, 0);
    Result.Position := 0;
  except
    Result.Free;
  end;
end;

destructor TClientModule.Destroy;
begin
  conn.Connected := False;
  inherited;
end;

procedure TClientModule.ConnectTimerTimer(Sender: TObject);
var oDataModel: TModuleUnitClient;
begin
  ConnectTimer.Enabled := False;
  try
    oDataModel := TModuleUnitClient.Create(conn.DBXConnection);
    try
      oDataModel.TestConnect;
    except on E: Exception do
    end;
  finally
    oDataModel.Free;
    ConnectTimer.Enabled := True;
  end;
end;

function TClientModule.ExecProc(szProcedureName: string; AParamName: array of string; AParamValue: array of OleVariant; AParams: TParams): Integer;
var
  oDataModel: TModuleUnitClient;
  Params,outVariant: OleVariant;
  InParams:TParams;
begin
  Result := -1;
  InParams := TParams.Create(nil);
  try
    for var i := Low(AParamName) to High(AParamName) do
    begin
      with TParam(InParams.Add) do
      begin
        Name := AParamName[I];
        Value := AParamValue[I];
      end;
    end;
    Params := PackageParams(InParams);
    oDataModel := TModuleUnitClient.Create(conn.DBXConnection);
    outVariant := oDataModel.ExecProc(szProcedureName,Params);
    UnpackParams(outVariant, AParams);
    if Assigned(AParams.FindParam('@RETURN_VALUE')) then Result := AParams.ParamValues['@RETURN_VALUE'];
  finally
    outVariant := Null;
    InParams.Free;
    oDataModel.Free;
  end;
end;

function TClientModule.ExecSQL(const ASQL: string): Integer;
var
  oDataModel: TModuleUnitClient;
begin
  Result := -1;
  try
    oDataModel := TModuleUnitClient.Create(conn.DBXConnection);
    Result := oDataModel.ExecSQL(ASQL);
  finally
    oDataModel.Free;
  end;
end;

function TClientModule.ExecuteFile(const AFileName: string): Boolean;
var
  oDataModel: TModuleUnitClient;
begin
  Result := False;
  try
    oDataModel := TModuleUnitClient.Create(conn.DBXConnection);
    Result := oDataModel.ExecuteFile(AFileName)=0;
  finally
    oDataModel.Free;
  end;
end;

function TClientModule.OpenProc(szProcedureName: string; AParamName: array of string; AParamValue: array of OleVariant; ADataSet: TClientDataSet; AParams: TParams): Integer;
var
  oDataModel: TModuleUnitClient;
  inVariant,outVariant: OleVariant;
  InParams:TParams;
begin
  Result := -1;
  ADataSet.Active  := False;
  InParams := TParams.Create(nil);
  try
    oDataModel := TModuleUnitClient.Create(conn.DBXConnection);
    for var i := Low(AParamName) to High(AParamName) do
    begin
      with TParam(InParams.Add) do
      begin
        Name := AParamName[I];
        Value := AParamValue[I];
      end;
    end;
    inVariant  := PackageParams(InParams);
    outVariant := oDataModel.OpenProc(szProcedureName,inVariant);
    ADataSet.Active := False;
    ADataSet.RemoteServer := DSProvider_OpenPRoc;
    ADataSet.ProviderName := 'DataSetProvider_Proc_Open';
    ADataSet.Open;
    //再来获取一次，准确的Diss到返回值
    outVariant := oDataModel.OpenProc(szProcedureName,inVariant);
    UnpackParams(outVariant, AParams);
    if Assigned(AParams.FindParam('@RETURN_VALUE')) then Result := AParams.ParamValues['@RETURN_VALUE'];
  finally
    outVariant := Null;
    InParams.Free;
    if Assigned(oDataModel) then oDataModel.Free;
  end;
end;

function TClientModule.OpenSQL(const ASQL: string; ADataSet: TClientDataSet): Integer;
var
  oDataModel: TModuleUnitClient;
begin
  Result := -1;
  try
    oDataModel := TModuleUnitClient.Create(conn.DBXConnection);
    Result := oDataModel.OpenSQL(ASQL);
    //if ds.Active then Result := ds.RecordCount;
    //while ds.State = dsInactive do sleep(0);  //:确认返回了数据
    ADataSet.Active := False;
    ADataSet.RemoteServer := DSProvider_OpenSQL;
    ADataSet.ProviderName := 'DataSetProvider_Query_Open';
    //ADataSet.SetProvider(ds);
    ADataSet.Open;
  finally
    oDataModel.Free;
  end;
end;

function TClientModule.QueryOneFiled(const ASQL: string): Variant;
var ds:TClientDataSet;
begin
  Result := Null;
  ds := TClientDataSet.Create(nil);
  try
    if OpenSQL(ASQL,ds)<0 then Exit;
    if not ds.Active then Exit;
    if ds.RecordCount=0 then Exit;
    Result := ds.FieldValues[ds.Fields[0].FieldName];
  finally
    ds.Free;
  end;
end;

procedure TClientModule.SetHeartbeatConnection(const Value: Boolean);
begin
  FHeartbeatConnection := Value;
  ConnectTimer.Enabled := False;
  if Value and conn.Connected then ConnectTimer.Enabled := True;
end;

end.
