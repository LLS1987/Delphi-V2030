object Form5: TForm5
  Left = 0
  Top = 0
  Caption = 'Test XLSGrid'
  ClientHeight = 913
  ClientWidth = 1248
  Color = clWindow
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 1248
    Height = 41
    Align = alTop
    TabOrder = 0
    object Label1: TLabel
      Left = 168
      Top = 12
      Width = 42
      Height = 13
      Caption = 'Filename'
    end
    object Button1: TButton
      Left = 4
      Top = 8
      Width = 75
      Height = 25
      Caption = 'Close'
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 88
      Top = 8
      Width = 75
      Height = 25
      Caption = 'Read'
      TabOrder = 1
      OnClick = Button2Click
    end
    object edFilename: TEdit
      Left = 216
      Top = 8
      Width = 429
      Height = 21
      TabOrder = 2
      Text = 'd:\xtemp\XLSGrid.xlsx'
    end
    object Button3: TButton
      Left = 648
      Top = 8
      Width = 29
      Height = 21
      Caption = '...'
      TabOrder = 3
      OnClick = Button3Click
    end
  end
  object dlgOpen: TOpenDialog
    Filter = 'Excel files|*.xls;*.xlt;*.xlsx;*.xlsm;*.xlst|All files|*.*'
    Left = 28
    Top = 56
  end
end
