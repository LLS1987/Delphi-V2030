inherited Config_PosSet: TConfig_PosSet
  Caption = #38376#24215#20449#24687#35774#32622
  ClientHeight = 196
  ClientWidth = 450
  Color = clBtnFace
  OnShow = FormShow
  ExplicitWidth = 466
  ExplicitHeight = 235
  PixelsPerInch = 96
  TextHeight = 15
  object Panel1: TPanel [0]
    Left = 0
    Top = 155
    Width = 450
    Height = 41
    Align = alBottom
    TabOrder = 4
    object BitBtn1: TBitBtn
      Left = 272
      Top = 8
      Width = 75
      Height = 25
      Caption = #30830#23450
      Kind = bkOK
      NumGlyphs = 2
      TabOrder = 0
      OnClick = BitBtn1Click
    end
    object BitBtn2: TBitBtn
      Left = 353
      Top = 8
      Width = 75
      Height = 25
      Caption = #21462#28040
      Kind = bkCancel
      NumGlyphs = 2
      TabOrder = 1
    end
  end
  object edt_Appkey: TLabeledEdit [1]
    Left = 139
    Top = 109
    Width = 269
    Height = 23
    EditLabel.Width = 39
    EditLabel.Height = 15
    EditLabel.Caption = #25480#26435#30721
    LabelPosition = lpLeft
    TabOrder = 3
    Text = ''
  end
  object edt_Password: TLabeledEdit [2]
    Left = 139
    Top = 80
    Width = 269
    Height = 23
    EditLabel.Width = 26
    EditLabel.Height = 15
    EditLabel.Caption = #23494#30721
    LabelPosition = lpLeft
    TabOrder = 2
    Text = ''
  end
  object edt_StoreCode: TLabeledEdit [3]
    Left = 139
    Top = 51
    Width = 269
    Height = 23
    EditLabel.Width = 104
    EditLabel.Height = 15
    EditLabel.Caption = #31038#20250#32479#19968#20449#29992#20195#30721
    LabelPosition = lpLeft
    TabOrder = 1
    Text = ''
  end
  object edt_StoreName: TLabeledEdit [4]
    Left = 138
    Top = 22
    Width = 270
    Height = 23
    EditLabel.Width = 52
    EditLabel.Height = 15
    EditLabel.Caption = #33647#24215#21517#31216
    LabelPosition = lpLeft
    TabOrder = 0
    Text = ''
  end
  inherited cxStyleRepository: TcxStyleRepository
    PixelsPerInch = 96
  end
end
