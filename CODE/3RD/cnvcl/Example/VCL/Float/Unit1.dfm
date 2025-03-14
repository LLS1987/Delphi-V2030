object FormFloat: TFormFloat
  Left = 350
  Top = 240
  Width = 447
  Height = 189
  Caption = '浮点数转换成字符串 & Extract Float 测试'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 60
    Height = 13
    Caption = '输入浮点数'
  end
  object Edit1: TEdit
    Left = 8
    Top = 27
    Width = 337
    Height = 21
    TabOrder = 0
    Text = '128.125'
  end
  object CheckBox1: TCheckBox
    Left = 8
    Top = 54
    Width = 121
    Height = 17
    Caption = '十进制指数部分'
    TabOrder = 1
  end
  object CheckBox2: TCheckBox
    Left = 8
    Top = 77
    Width = 97
    Height = 17
    Caption = '一定使用指数'
    TabOrder = 2
  end
  object Button1: TButton
    Left = 353
    Top = 25
    Width = 75
    Height = 25
    Caption = '转换'
    TabOrder = 3
    OnClick = Button1Click
  end
  object rdoBin: TRadioButton
    Left = 8
    Top = 112
    Width = 113
    Height = 17
    Caption = '二进制(Binary)'
    Checked = True
    TabOrder = 4
    TabStop = True
  end
  object rdoOct: TRadioButton
    Left = 127
    Top = 112
    Width = 113
    Height = 17
    Caption = '八进制(Octal)'
    TabOrder = 5
  end
  object rdoHex: TRadioButton
    Left = 246
    Top = 112
    Width = 139
    Height = 17
    Caption = '十六进制(Hexdecimal)'
    TabOrder = 6
  end
  object btnExtract: TButton
    Left = 352
    Top = 64
    Width = 75
    Height = 25
    Caption = 'Extract'
    TabOrder = 7
    OnClick = btnExtractClick
  end
  object btnUInt64ToFloat: TButton
    Left = 144
    Top = 64
    Width = 97
    Height = 25
    Caption = 'UInt64 To Float'
    TabOrder = 8
    OnClick = btnUInt64ToFloatClick
  end
  object btnFloatToUInt64: TButton
    Left = 248
    Top = 64
    Width = 97
    Height = 25
    Caption = 'Float To UInt64'
    TabOrder = 9
    OnClick = btnFloatToUInt64Click
  end
end
