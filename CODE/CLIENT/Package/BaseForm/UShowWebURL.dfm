inherited ShowWebURL: TShowWebURL
  Caption = #27983#35272#22120'Edge'
  PixelsPerInch = 96
  TextHeight = 15
  inherited Panel_Top: TPanel
    Visible = False
  end
  inherited Panel_Client: TPanel
    object EdgeBrowser: TEdgeBrowser
      Left = 0
      Top = 0
      Width = 624
      Height = 359
      Align = alClient
      TabOrder = 0
      OnDocumentTitleChanged = EdgeBrowserDocumentTitleChanged
      OnNewWindowRequested = EdgeBrowserNewWindowRequested
      OnWebResourceRequested = EdgeBrowserWebResourceRequested
      OnWindowCloseRequested = EdgeBrowserWindowCloseRequested
      ExplicitLeft = 88
      ExplicitTop = 64
      ExplicitWidth = 100
      ExplicitHeight = 41
    end
  end
  inherited Panel_Button: TPanel
    Visible = False
  end
  inherited cxStyleRepository: TcxStyleRepository
    PixelsPerInch = 96
  end
end
