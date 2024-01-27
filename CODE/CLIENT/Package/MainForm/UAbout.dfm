object About: TAbout
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = #20851#20110
  ClientHeight = 321
  ClientWidth = 620
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poMainFormCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 15
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 620
    Height = 37
    Align = alTop
    BevelOuter = bvNone
    Caption = 'DClient'
    Color = clMoneyGreen
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentBackground = False
    ParentFont = False
    TabOrder = 0
    object lbl_Version: TLabel
      Left = 511
      Top = 21
      Width = 76
      Height = 15
      Caption = 'V 9.5.1.32700'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Segoe UI'
      Font.Style = [fsBold]
      ParentFont = False
    end
  end
  object ListView_FileVer: TListView
    Left = 0
    Top = 65
    Width = 620
    Height = 215
    Align = alClient
    Columns = <
      item
        Caption = #32452#20214#21517#31216
        Width = 400
      end
      item
        Caption = #29256#26412
        Width = 200
      end>
    ReadOnly = True
    RowSelect = True
    TabOrder = 1
    ViewStyle = vsReport
    ExplicitTop = 152
    ExplicitHeight = 128
  end
  object Panel2: TPanel
    Left = 0
    Top = 280
    Width = 620
    Height = 41
    Align = alBottom
    BevelOuter = bvNone
    Color = clWindow
    ParentBackground = False
    TabOrder = 2
    object btn_Close: TButton
      Left = 536
      Top = 8
      Width = 75
      Height = 25
      Cancel = True
      Caption = #20851#38381
      TabOrder = 0
      OnClick = btn_CloseClick
    end
    object btn_Update: TButton
      Left = 8
      Top = 8
      Width = 98
      Height = 25
      Caption = #26816#26597#26356#26032' ...'
      TabOrder = 1
      OnClick = btn_UpdateClick
    end
  end
  object Panel3: TPanel
    Left = 0
    Top = 37
    Width = 620
    Height = 28
    Align = alTop
    BevelOuter = bvNone
    Color = clGreen
    ParentBackground = False
    TabOrder = 3
    object lbl_MacAddress: TLabel
      Left = 8
      Top = 13
      Width = 30
      Height = 15
      Caption = 'MAC:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
    object lbl_IPAddress: TLabel
      Left = 8
      Top = 0
      Width = 13
      Height = 15
      Caption = 'IP:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
  end
end
