inherited LoginUser: TLoginUser
  Caption = #29992#25143#30331#24405
  ClientHeight = 281
  ClientWidth = 674
  ExplicitWidth = 690
  ExplicitHeight = 320
  PixelsPerInch = 96
  TextHeight = 15
  object Image1: TImage [0]
    Left = 0
    Top = 0
    Width = 674
    Height = 281
    Align = alClient
    Transparent = True
    ExplicitLeft = 56
    ExplicitTop = 48
  end
  object Label1: TLabel [1]
    Left = 359
    Top = 87
    Width = 39
    Height = 15
    Caption = #29992#25143#65306
  end
  object Label2: TLabel [2]
    Left = 64
    Top = 72
    Width = 187
    Height = 68
    Caption = 'LOGIN'
    Color = clSilver
    Font.Charset = ANSI_CHARSET
    Font.Color = clSilver
    Font.Height = -56
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object Label3: TLabel [3]
    Left = 64
    Top = 117
    Width = 80
    Height = 20
    Caption = #27426#36814#30331#24405
    Font.Charset = ANSI_CHARSET
    Font.Color = clBlack
    Font.Height = -20
    Font.Name = #40657#20307
    Font.Style = []
    ParentFont = False
  end
  object BitBtn2: TBitBtn [4]
    Left = 544
    Top = 192
    Width = 78
    Height = 33
    Cancel = True
    Caption = #36864#20986
    ModalResult = 2
    TabOrder = 3
  end
  object edt_Pass: TLabeledEdit [5]
    Left = 400
    Top = 125
    Width = 233
    Height = 23
    EditLabel.Width = 39
    EditLabel.Height = 15
    EditLabel.Caption = #23494#30721#65306
    EditLabel.Font.Charset = DEFAULT_CHARSET
    EditLabel.Font.Color = clWindowText
    EditLabel.Font.Height = -12
    EditLabel.Font.Name = 'Segoe UI'
    EditLabel.Font.Style = []
    EditLabel.ParentFont = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    LabelPosition = lpLeft
    ParentFont = False
    PasswordChar = '*'
    TabOrder = 1
    Text = ''
  end
  object btn_Login: TBitBtn [6]
    Left = 436
    Top = 192
    Width = 78
    Height = 33
    Caption = #30331#24405
    Default = True
    NumGlyphs = 2
    TabOrder = 2
    OnClick = btn_LoginClick
  end
  object LabeledEdit1: TLabeledEdit [7]
    Left = 400
    Top = 84
    Width = 233
    Height = 23
    EditLabel.Width = 39
    EditLabel.Height = 15
    EditLabel.Caption = #29992#25143#65306
    EditLabel.Font.Charset = DEFAULT_CHARSET
    EditLabel.Font.Color = clWindowText
    EditLabel.Font.Height = -12
    EditLabel.Font.Name = 'Segoe UI'
    EditLabel.Font.Style = []
    EditLabel.ParentFont = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    LabelPosition = lpLeft
    ParentFont = False
    TabOrder = 0
    Text = ''
    Visible = False
  end
  object cob_USerList: TComboBox [8]
    Left = 400
    Top = 84
    Width = 233
    Height = 23
    TabOrder = 4
  end
  inherited cxStyleRepository: TcxStyleRepository
    PixelsPerInch = 96
  end
  object ds_USerList: TClientDataSet
    Aggregates = <>
    Params = <>
    Left = 336
    Top = 24
  end
  object DataSource1: TDataSource
    DataSet = ds_USerList
    Left = 280
    Top = 136
  end
end
