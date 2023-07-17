inherited BaseNormalForm: TBaseNormalForm
  Caption = 'BaseNormalForm'
  Visible = True
  PixelsPerInch = 96
  TextHeight = 15
  object Panel_Top: TPanel [0]
    Left = 0
    Top = 0
    Width = 624
    Height = 41
    Align = alTop
    BevelOuter = bvNone
    TabOrder = 0
  end
  object Panel_Client: TPanel [1]
    Left = 0
    Top = 41
    Width = 624
    Height = 359
    Align = alClient
    BevelOuter = bvNone
    TabOrder = 1
  end
  object Panel_Button: TPanel [2]
    Left = 0
    Top = 400
    Width = 624
    Height = 41
    Align = alBottom
    BevelOuter = bvNone
    TabOrder = 2
  end
  inherited cxStyleRepository: TcxStyleRepository
    PixelsPerInch = 96
  end
end
