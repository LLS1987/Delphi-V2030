object frmMain: TfrmMain
  Left = 0
  Top = 0
  Caption = 'Table sample'
  ClientHeight = 218
  ClientWidth = 652
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  DesignSize = (
    652
    218)
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 20
    Top = 102
    Width = 28
    Height = 13
    Caption = 'Sheet'
  end
  object lblFindNext: TLabel
    Left = 433
    Top = 137
    Width = 22
    Height = 13
    Caption = 'Res:'
  end
  object lblFindFirst: TLabel
    Left = 270
    Top = 137
    Width = 22
    Height = 13
    Caption = 'Res:'
  end
  object lblRows: TLabel
    Left = 193
    Top = 163
    Width = 30
    Height = 13
    Caption = 'Rows:'
  end
  object Button1: TButton
    Left = 12
    Top = 184
    Width = 75
    Height = 25
    Caption = 'Close'
    TabOrder = 0
    OnClick = Button1Click
  end
  object sgCells: TStringGrid
    Left = 0
    Top = 36
    Width = 652
    Height = 57
    Anchors = [akLeft, akTop, akRight, akBottom]
    ColCount = 255
    DefaultRowHeight = 16
    FixedCols = 0
    RowCount = 2
    FixedRows = 0
    TabOrder = 1
  end
  object edFilename: TEdit
    Left = 89
    Top = 8
    Width = 524
    Height = 21
    Anchors = [akLeft, akTop, akRight]
    TabOrder = 2
    Text = 'D:\Temp\testXLSREAD.xlsx'
  end
  object Button2: TButton
    Left = 8
    Top = 5
    Width = 75
    Height = 25
    Caption = 'Read'
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 615
    Top = 5
    Width = 29
    Height = 25
    Anchors = [akTop, akRight]
    Caption = '...'
    TabOrder = 4
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 12
    Top = 132
    Width = 75
    Height = 25
    Caption = 'Open'
    TabOrder = 5
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 100
    Top = 132
    Width = 75
    Height = 25
    Caption = 'Close'
    TabOrder = 6
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 189
    Top = 132
    Width = 75
    Height = 25
    Caption = 'Find First'
    TabOrder = 7
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 352
    Top = 132
    Width = 75
    Height = 25
    Caption = 'Find Next'
    TabOrder = 8
    OnClick = Button7Click
  end
  object cbSheets: TComboBox
    Left = 64
    Top = 99
    Width = 291
    Height = 21
    Style = csDropDownList
    TabOrder = 9
  end
  object dlgOpen: TOpenDialog
    Filter = 'Excel files|*.xlsx|All files|*.*'
    Left = 120
    Top = 172
  end
  object XLS: TXLSReadWriteII5
    ComponentVersion = '6.01.00'
    Version = xvExcel2007
    DirectRead = False
    DirectWrite = False
    DoNotReadSheets = False
    Left = 180
    Top = 172
  end
end
