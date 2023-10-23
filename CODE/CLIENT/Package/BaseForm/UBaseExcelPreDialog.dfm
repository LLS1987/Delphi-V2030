inherited BaseExcelPreDialog: TBaseExcelPreDialog
  Caption = 'Excel '#39044#35272
  ClientHeight = 494
  ClientWidth = 923
  Color = clBtnFace
  ExplicitWidth = 939
  ExplicitHeight = 533
  PixelsPerInch = 96
  TextHeight = 15
  object Panel_Button: TPanel [0]
    Left = 0
    Top = 453
    Width = 923
    Height = 41
    Align = alBottom
    BevelOuter = bvNone
    TabOrder = 0
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
      Left = 831
      Top = 8
      Width = 75
      Height = 25
      Action = Action_Close
      Cancel = True
      TabOrder = 3
    end
  end
  object StringGrid1: TStringGrid [1]
    Left = 0
    Top = 0
    Width = 923
    Height = 453
    Align = alClient
    BevelInner = bvNone
    BevelOuter = bvNone
    FixedColor = clSilver
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goColSizing, goFixedRowDefAlign]
    TabOrder = 1
    OnDrawCell = StringGrid1DrawCell
  end
  inherited cxStyleRepository: TcxStyleRepository
    PixelsPerInch = 96
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Excel|*.xls|Excel|*.xlsx'
    Left = 344
    Top = 144
  end
end
