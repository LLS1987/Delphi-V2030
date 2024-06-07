object frmMain: TfrmMain
  Left = 0
  Top = 0
  Caption = 'Create chart simple sample'
  ClientHeight = 114
  ClientWidth = 416
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 140
    Top = 64
    Width = 137
    Height = 25
    Caption = 'Close'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 140
    Top = 24
    Width = 137
    Height = 25
    Caption = 'Create the chart'
    TabOrder = 1
    OnClick = Button2Click
  end
  object cbBarChart: TCheckBox
    Left = 288
    Top = 28
    Width = 97
    Height = 17
    Caption = 'Bar chart'
    TabOrder = 2
  end
  object XLS: TXLSReadWriteII5
    ComponentVersion = '6.01.00'
    Version = xvExcel2007
    DirectRead = False
    DirectWrite = False
    DoNotReadSheets = False
    Left = 20
    Top = 20
  end
end
