unit UContainer;

interface

uses
  System.SysUtils, System.Classes, IPPeerServer, DbxCompressionFilter,
  Datasnap.DSHTTP, Datasnap.DSCommonServer, Datasnap.DSServer,
  Datasnap.DSTCPServerTransport, System.Rtti, System.Generics.Collections,
  Data.DBXCommon, System.JSON, Datasnap.DSHTTPCommon;

type
  TContainer = class(TDataModule)
    DSServer1: TDSServer;
    DSTCPServerTransport1: TDSTCPServerTransport;
    DSServerClass1: TDSServerClass;
    DSHTTPService1: TDSHTTPService;
    DSServerClass_Http: TDSServerClass;
    procedure DataModuleDestroy(Sender: TObject);
    procedure DataModuleCreate(Sender: TObject);
    procedure DSHTTPService1FormatResult(Sender: TObject; var ResultVal: TJSONValue; const Command: TDBXCommand; var Handled: Boolean);
    procedure DSHTTPService1HTTPTrace(Sender: TObject; AContext: TDSHTTPContext; ARequest: TDSHTTPRequest; AResponse: TDSHTTPResponse);
    procedure DSServer1Connect(DSConnectEventObject: TDSConnectEventObject);
    procedure DSServer1Disconnect(DSConnectEventObject: TDSConnectEventObject);
    procedure DSServerClass1GetClass(DSServerClass: TDSServerClass; var PersistentClass: TPersistentClass);
    procedure DSServerClass_HttpGetClass(DSServerClass: TDSServerClass; var PersistentClass: TPersistentClass);
    procedure DSTCPServerTransport1Connect(Event: TDSTCPConnectEventObject);
  private
    FClientConnectList: TDictionary<Integer, TValue>;
    { Private declarations }
    procedure ClientDisconnectEvent(Sender: TObject);
  public
    { Public declarations }
    property ClientConnectList:TDictionary<Integer,TValue> read FClientConnectList;
  end;
  TCP_KeepAlive = record
    OnOff: Cardinal;
    KeepAliveTime: Cardinal;          // 多长时间（ms）没有数据就开始send心跳包
    KeepAliveInterval: Cardinal;      // 每隔多长时间（ms）send一个心跳包，发5次（系统值）
  end;
var
  Container: TContainer;

implementation

uses
  UModuleUnit, IdTCPConnection,Data.DBXTransport, UCOMM, UServer,IdWinsock2,
  UModuleBasicInfo;

{%CLASSGROUP 'Vcl.Controls.TControl'}

{$R *.dfm}

procedure TContainer.DataModuleDestroy(Sender: TObject);
begin
  if Assigned(FClientConnectList) then FreeAndNil(FClientConnectList);  
end;

procedure TContainer.DataModuleCreate(Sender: TObject);
begin
  FClientConnectList := TDictionary<Integer,TValue>.Create;
end;

procedure TContainer.ClientDisconnectEvent(Sender: TObject);
begin
  inc(Connections,-1);
end;

procedure TContainer.DSHTTPService1FormatResult(Sender: TObject; var ResultVal: TJSONValue; const Command: TDBXCommand; var Handled: Boolean);
var
    Aux: TJSONValue;
begin
  //if Command.Text.ToUpper = UpperCase('TServerMethods.EchoString') then
  Aux := ResultVal;
  try
    ResultVal := TJSONObject.Create;
    TJSONObject(ResultVal).AddPair('success',true);
    TJSONObject(ResultVal).AddPair('data',Aux);
  finally
    //Aux.Free;
  end;
  Handled := true;    //we do not need "result" tag
end;

procedure TContainer.DSHTTPService1HTTPTrace(Sender: TObject; AContext:TDSHTTPContext; ARequest: TDSHTTPRequest; AResponse: TDSHTTPResponse);
begin
//  Logger.Info('HTTP Trace :' + AContext.ToString,'服务端');
//  Logger.Info('ARequest.Params:'+ARequest.Params.Text,'服务端');
//  Logger.Info('ARequest.Document :' + ARequest.Document,'服务端');
//  Logger.Info(' ' + AResponse.ResponseText,'服务端');
end;

procedure TContainer.DSServer1Connect(DSConnectEventObject: TDSConnectEventObject);
var
  Ret: Integer;
  ClientConnection: TDBXClientInfo;
begin
  // 最大连接数量，验证来访者密码
//  if (DSConnectEventObject.ChannelInfo = nil) or (Connections >= 0) or
//      (DSConnectEventObject.ConnectProperties[TDBXPropertyNames.UserName] <> 'sunstone') or (DSConnectEventObject.ConnectProperties[TDBXPropertyNames.Password] <> 'mypassword') then
//  begin
//    DSConnectEventObject.DbxConnection.Destroy;
//  end
//  else
//  begin
    // 获取socket连接
    //ClientConnection := TIdTCPConnection(DSConnectEventObject.ChannelInfo.Id);
    ClientConnection := DSConnectEventObject.ChannelInfo.ClientInfo;
//    ClientConnection.OnDisconnected := ClientDisconnectEvent;
    ClientConnectList.AddOrSetValue(DSConnectEventObject.ChannelInfo.Id,TValue.From<TDSConnectEventObject>(DSConnectEventObject));
    // 记录来访者数量
    inc(Connections);
    Server.StatusBar.Panels[4].Text := Format('连接数：%d',[ClientConnectList.Count]);
    with Server.ListView_ConnectInfo.items.add do
    begin
      Caption := IntToStr(DSConnectEventObject.ChannelInfo.Id);
      subitems.add(ClientConnection.IpAddress + ':' + ClientConnection.ClientPort);
      subitems.add(DSConnectEventObject.ConnectProperties[TDBXPropertyNames.UserName]);
      subitems.add(DSConnectEventObject.ConnectProperties[TDBXPropertyNames.Password]);
      subitems.add(ClientConnection.AppName);
      subitems.add(FormatDateTime('yyyy-mm-dd hh:nn:ss', Now));
    end;
    Logger.Info('连接成功：IP:%s  ClientID:%d',[ClientConnection.IpAddress + ':' + ClientConnection.ClientPort,DSConnectEventObject.ChannelInfo.Id],'服务端')
    //end;
end;

procedure TContainer.DSServer1Disconnect(DSConnectEventObject: TDSConnectEventObject);
begin
  ClientConnectList.Remove(DSConnectEventObject.ChannelInfo.Id);
  inc(Connections,-1);
  Server.StatusBar.Panels[4].Text := Format('连接数：%d',[ClientConnectList.Count]);
  for var i := Server.ListView_ConnectInfo.items.Count-1 downto 0 do
  begin
    if Server.ListView_ConnectInfo.items[i].Caption = IntToStr(DSConnectEventObject.ChannelInfo.Id) then Server.ListView_ConnectInfo.items[i].Delete;
  end;
end;

procedure TContainer.DSServerClass1GetClass(DSServerClass: TDSServerClass; var PersistentClass: TPersistentClass);
begin
  PersistentClass := UModuleUnit.TModuleUnit;
end;

procedure TContainer.DSServerClass_HttpGetClass(DSServerClass: TDSServerClass; var PersistentClass: TPersistentClass);
begin
  PersistentClass := UModuleBasicInfo.TModuleBasicInfo;
end;

procedure TContainer.DSTCPServerTransport1Connect(Event:TDSTCPConnectEventObject);
var
  Val: TCP_KeepAlive;
  tcpConnection: TIdTCPConnection;
begin
//  增加心跳事件
//  try                 Event.Channel.
//    tcpConnection := TIdTCPConnection(Event.);
////    tcpConnection.OnDisconnected := ClientDisconnectEvent;
//    Val.OnOff := 1;
//    Val.KeepAliveTime := 5000;
//    Val.KeepAliveInterval := 1000;      //每三秒发送一次
//    WSAIoctl(tcpConnection.Socket.Binding.Handle, IOC_IN or IOC_VENDOR or 4, @val, SizeOf(val), nil, 0, @Ret, nil, nil);
//  except on E: Exception do
//  end;
end;

end.
