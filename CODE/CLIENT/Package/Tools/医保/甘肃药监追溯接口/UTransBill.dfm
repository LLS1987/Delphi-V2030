﻿inherited TransBill: TTransBill
  Caption = #38144#21806#25968#25454#19978#20256
  ClientWidth = 944
  OnShow = FormShow
  ExplicitWidth = 960
  PixelsPerInch = 96
  TextHeight = 15
  inherited Panel_Top: TPanel
    Width = 944
    ExplicitWidth = 944
    object lbl_BgnDate: TLabel
      Left = 16
      Top = 16
      Width = 65
      Height = 15
      Caption = #24320#22987#26085#26399#65306
    end
    object Label2: TLabel
      Left = 201
      Top = 16
      Width = 13
      Height = 15
      Caption = #33267
    end
    object Label1: TLabel
      Left = 661
      Top = 15
      Width = 91
      Height = 15
      Caption = #20998#38047#19968#27425#65292#26368#36817
    end
    object Label3: TLabel
      Left = 824
      Top = 15
      Width = 52
      Height = 15
      Caption = #22825#30340#25968#25454
    end
    object dtp_bgndate: TDateTimePicker
      Left = 80
      Top = 12
      Width = 113
      Height = 23
      Date = 45041.000000000000000000
      Time = 0.912067418983497200
      TabOrder = 0
    end
    object dtp_enddate: TDateTimePicker
      Left = 222
      Top = 12
      Width = 113
      Height = 23
      Date = 45041.000000000000000000
      Time = 0.912067418983497200
      TabOrder = 1
    end
    object btn_Find: TBitBtn
      Left = 368
      Top = 10
      Width = 75
      Height = 25
      Caption = #26597#35810
      TabOrder = 2
      OnClick = btn_FindClick
    end
    object chk_AutoOpen: TCheckBox
      Left = 470
      Top = 15
      Width = 121
      Height = 17
      Caption = #24320#21551#33258#21160#20256#36755#65292#27599
      TabOrder = 3
      OnClick = chk_AutoOpenClick
    end
    object edt_Minute: TEdit
      Left = 598
      Top = 10
      Width = 57
      Height = 23
      NumbersOnly = True
      TabOrder = 4
      Text = '5'
    end
    object edt_Day: TEdit
      Left = 758
      Top = 10
      Width = 57
      Height = 23
      NumbersOnly = True
      TabOrder = 5
      Text = '2'
    end
  end
  inherited Panel_Client: TPanel
    Width = 944
    ExplicitWidth = 944
    object PageControl1: TPageControl
      Left = 0
      Top = 0
      Width = 944
      Height = 359
      ActivePage = 自动传输记录
      Align = alClient
      TabOrder = 0
      object TabSheet1: TTabSheet
        Caption = #26597#35810#35760#24405
        object DBGrid1: TDBGrid
          Left = 0
          Top = 0
          Width = 936
          Height = 329
          Align = alClient
          DataSource = DataSource1
          Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
          ReadOnly = True
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -12
          TitleFont.Name = 'Segoe UI'
          TitleFont.Style = []
        end
      end
      object 自动传输记录: TTabSheet
        Caption = #33258#21160#20256#36755#35760#24405
        ImageIndex = 1
        object Memo_Log: TMemo
          Left = 0
          Top = 0
          Width = 936
          Height = 329
          Align = alClient
          TabOrder = 0
        end
      end
    end
  end
  inherited Panel_Button: TPanel
    Width = 944
    ExplicitWidth = 944
    object BitBtn1: TBitBtn
      Left = 856
      Top = 6
      Width = 75
      Height = 25
      Anchors = [akRight, akBottom]
      Caption = #36864#20986
      Kind = bkCancel
      NumGlyphs = 2
      TabOrder = 0
    end
    object btn_Upload: TBitBtn
      Left = 16
      Top = 6
      Width = 75
      Height = 25
      Caption = #21333#26465#19978#20256
      TabOrder = 1
      OnClick = btn_UploadClick
    end
    object BitBtn3: TBitBtn
      Left = 97
      Top = 6
      Width = 75
      Height = 25
      Caption = 'BitBtn1'
      TabOrder = 2
      Visible = False
      OnClick = BitBtn3Click
    end
  end
  object MainDataSet: TClientDataSet
    Aggregates = <>
    Params = <>
    Left = 328
    Top = 161
  end
  object DataSource1: TDataSource
    DataSet = MainDataSet
    Left = 256
    Top = 161
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 520
    Top = 113
  end
end
