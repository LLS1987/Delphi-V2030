inherited CustomBaseQuery: TCustomBaseQuery
  Caption = 'CustomBaseQuery'
  PixelsPerInch = 96
  TextHeight = 15
  inherited Panel_Button: TPanel
    object Button1: TButton
      Left = 536
      Top = 6
      Width = 75
      Height = 25
      Action = Action_Close
      TabOrder = 0
    end
    object Button2: TButton
      Left = 455
      Top = 6
      Width = 75
      Height = 25
      Action = Action_Print
      TabOrder = 1
    end
  end
  inherited cxStyleRepository: TcxStyleRepository
    PixelsPerInch = 96
  end
end
