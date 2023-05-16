object Container: TContainer
  OnCreate = DataModuleCreate
  OnDestroy = DataModuleDestroy
  Height = 201
  Width = 389
  PixelsPerInch = 96
  object DSServer1: TDSServer
    OnConnect = DSServer1Connect
    OnDisconnect = DSServer1Disconnect
    AutoStart = False
    Left = 96
    Top = 11
  end
  object DSTCPServerTransport1: TDSTCPServerTransport
    Port = 212
    Server = DSServer1
    BufferKBSize = 512
    Filters = <>
    OnConnect = DSTCPServerTransport1Connect
    KeepAliveEnablement = kaEnabled
    KeepAliveInterval = 6000
    Left = 96
    Top = 73
  end
  object DSServerClass1: TDSServerClass
    OnGetClass = DSServerClass1GetClass
    Server = DSServer1
    Left = 200
    Top = 11
  end
  object DSHTTPService1: TDSHTTPService
    HttpPort = 8080
    OnFormatResult = DSHTTPService1FormatResult
    Server = DSServer1
    Filters = <>
    Left = 96
    Top = 135
  end
end
