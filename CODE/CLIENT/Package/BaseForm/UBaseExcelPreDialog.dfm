inherited BaseExcelPreDialog: TBaseExcelPreDialog
  BorderStyle = bsSizeable
  Caption = 'Excel '#39044#35272
  ClientHeight = 574
  ClientWidth = 996
  Color = clBtnFace
  ExplicitWidth = 1012
  ExplicitHeight = 613
  PixelsPerInch = 96
  TextHeight = 15
  object Panel_Button: TPanel [0]
    Left = 0
    Top = 533
    Width = 996
    Height = 41
    Align = alBottom
    BevelOuter = bvNone
    TabOrder = 0
    DesignSize = (
      996
      41)
    object Button_OpenFile: TButton
      Left = 16
      Top = 8
      Width = 75
      Height = 25
      Caption = #36873#25321#25991#20214
      TabOrder = 0
      OnClick = Button_OpenFileClick
    end
    object Button_CheckData: TButton
      Left = 97
      Top = 8
      Width = 75
      Height = 25
      Caption = #25968#25454#26657#39564
      TabOrder = 1
      OnClick = Button_CheckDataClick
    end
    object Button_ImportData: TButton
      Left = 178
      Top = 8
      Width = 75
      Height = 25
      Caption = #25968#25454#23548#20837
      TabOrder = 2
      OnClick = Button_ImportDataClick
    end
    object Button1: TButton
      Left = 904
      Top = 8
      Width = 75
      Height = 25
      Action = Action_Close
      Anchors = [akTop, akRight]
      Cancel = True
      TabOrder = 3
    end
  end
  object StringGrid1: TStringGrid [1]
    Left = 0
    Top = 20
    Width = 996
    Height = 493
    Align = alClient
    BevelInner = bvNone
    BevelOuter = bvNone
    FixedColor = clSilver
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goColSizing, goFixedRowDefAlign]
    TabOrder = 1
    OnDrawCell = StringGrid1DrawCell
    ExplicitTop = 176
    ExplicitHeight = 337
  end
  object pnl_Status: TPanel [2]
    Left = 0
    Top = 513
    Width = 996
    Height = 20
    Align = alBottom
    Alignment = taLeftJustify
    Caption = '  '#35831#28857#20987'"'#36873#25321#25991#20214'"'#25353#38062#35835#21462'EXCEL'#25991#20214#65292#20877#28857#20987'"'#25968#25454#23548#20837'"'#25353#38062#65307#22914#26377#24322#24120#25968#25454#20449#24687#65292#22312#34920#26684#26368#21518#19968#21015#32418#33394#23383#20307#26174#31034#12290
    Font.Charset = ANSI_CHARSET
    Font.Color = clBlue
    Font.Height = -12
    Font.Name = #24494#36719#38597#40657
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object pnl_Header: TPanel [3]
    Left = 0
    Top = 0
    Width = 996
    Height = 20
    Align = alTop
    Alignment = taLeftJustify
    BevelOuter = bvNone
    Caption = '  '#24517#24405#23383#27573#65306
    Font.Charset = ANSI_CHARSET
    Font.Color = clBlack
    Font.Height = -12
    Font.Name = #24494#36719#38597#40657
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    ExplicitTop = 521
  end
  inherited cxStyleRepository: TcxStyleRepository
    PixelsPerInch = 96
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Excel|*.xls;*.xlsx'
    Left = 344
    Top = 144
  end
end
