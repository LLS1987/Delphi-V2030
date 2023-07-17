inherited BaseQuery: TBaseQuery
  Caption = 'BaseQuery'
  PixelsPerInch = 96
  TextHeight = 15
  inherited Panel_Button: TPanel
    object Button3: TButton
      Left = 24
      Top = 8
      Width = 75
      Height = 25
      Caption = 'Button3'
      TabOrder = 2
      OnClick = Button3Click
    end
  end
  inherited cxStyleRepository: TcxStyleRepository
    PixelsPerInch = 96
  end
end
