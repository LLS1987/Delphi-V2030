inherited UpstreamConnect: TUpstreamConnect
  Caption = #19978#28216#25968#25454#24211#36830#25509
  ClientHeight = 200
  ClientWidth = 411
  Color = clBtnFace
  ExplicitWidth = 427
  ExplicitHeight = 239
  PixelsPerInch = 96
  TextHeight = 15
  object edt_DBAddr: TLabeledEdit [0]
    Left = 95
    Top = 21
    Width = 295
    Height = 23
    EditLabel.Width = 78
    EditLabel.Height = 15
    EditLabel.Caption = #25968#25454#24211#22320#22336#65306
    LabelPosition = lpLeft
    TabOrder = 0
    Text = ''
  end
  object edt_DBSa: TLabeledEdit [1]
    Left = 95
    Top = 56
    Width = 295
    Height = 23
    EditLabel.Width = 39
    EditLabel.Height = 15
    EditLabel.Caption = #29992#25143#65306
    LabelPosition = lpLeft
    TabOrder = 1
    Text = 'sa'
  end
  object edt_DBPass: TLabeledEdit [2]
    Left = 95
    Top = 90
    Width = 295
    Height = 23
    EditLabel.Width = 39
    EditLabel.Height = 15
    EditLabel.Caption = #23494#30721#65306
    LabelPosition = lpLeft
    PasswordChar = '*'
    TabOrder = 2
    Text = ''
  end
  object edt_DBName: TLabeledEdit [3]
    Left = 95
    Top = 125
    Width = 295
    Height = 23
    EditLabel.Width = 52
    EditLabel.Height = 15
    EditLabel.Caption = #25968#25454#24211#65306
    LabelPosition = lpLeft
    TabOrder = 3
    Text = ''
  end
  object Panel1: TPanel [4]
    Left = 0
    Top = 159
    Width = 411
    Height = 41
    Align = alBottom
    TabOrder = 4
    ExplicitLeft = 240
    ExplicitTop = 168
    ExplicitWidth = 185
    object btn_OK: TButton
      Left = 234
      Top = 8
      Width = 75
      Height = 25
      Caption = #30830#23450
      TabOrder = 0
      OnClick = btn_OKClick
    end
    object Button2: TButton
      Left = 315
      Top = 8
      Width = 75
      Height = 25
      Action = Action_Close
      TabOrder = 1
    end
  end
  inherited ActionList: TActionList
    Top = 48
  end
  inherited ImageList: TImageList
    Top = 48
  end
  inherited cxStyleRepository: TcxStyleRepository
    Top = 48
    PixelsPerInch = 96
  end
end
