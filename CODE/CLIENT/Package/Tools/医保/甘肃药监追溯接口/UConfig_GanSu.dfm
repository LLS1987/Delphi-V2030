inherited Config_GanSu: TConfig_GanSu
  Caption = #29976#32899#33647#30417#25509#21475#37197#32622
  ClientHeight = 450
  ClientWidth = 881
  Color = clBtnFace
  ExplicitWidth = 897
  ExplicitHeight = 489
  PixelsPerInch = 96
  TextHeight = 15
  object Panel1: TPanel [0]
    Left = 0
    Top = 409
    Width = 881
    Height = 41
    Align = alBottom
    TabOrder = 0
    object BitBtn1: TBitBtn
      Left = 696
      Top = 6
      Width = 75
      Height = 25
      Caption = #30830#23450
      Kind = bkOK
      NumGlyphs = 2
      TabOrder = 0
      OnClick = BitBtn1Click
    end
    object BitBtn2: TBitBtn
      Left = 777
      Top = 6
      Width = 75
      Height = 25
      Caption = #21462#28040
      Kind = bkCancel
      NumGlyphs = 2
      TabOrder = 1
    end
    object Button1: TButton
      Left = 24
      Top = 8
      Width = 75
      Height = 25
      Caption = #21024#38500
      TabOrder = 2
      OnClick = Button1Click
    end
  end
  object GroupBox1: TGroupBox [1]
    Left = 0
    Top = 41
    Width = 881
    Height = 368
    Align = alClient
    Caption = #38376#24215#20449#24687
    TabOrder = 1
    object MainGrid: TStringGrid
      Left = 2
      Top = 17
      Width = 877
      Height = 349
      Align = alClient
      ColCount = 6
      Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goRowSelect, goFixedRowDefAlign]
      TabOrder = 0
      OnDblClick = MainGridDblClick
      ColWidths = (
        64
        81
        176
        141
        145
        206)
    end
  end
  object Panel2: TPanel [2]
    Left = 0
    Top = 0
    Width = 881
    Height = 41
    Align = alTop
    TabOrder = 2
    Visible = False
    object Label1: TLabel
      Left = 215
      Top = 13
      Width = 91
      Height = 15
      Caption = #20998#38047#19968#27425#65292#26368#36817
    end
    object Label2: TLabel
      Left = 378
      Top = 13
      Width = 52
      Height = 15
      Caption = #22825#30340#25968#25454
    end
    object chk_AutoOpen: TCheckBox
      Left = 24
      Top = 13
      Width = 121
      Height = 17
      Caption = #24320#21551#33258#21160#20256#36755#65292#27599
      TabOrder = 0
    end
    object edt_Minute: TEdit
      Left = 152
      Top = 8
      Width = 57
      Height = 23
      NumbersOnly = True
      TabOrder = 1
      Text = '5'
    end
    object edt_Day: TEdit
      Left = 312
      Top = 8
      Width = 57
      Height = 23
      NumbersOnly = True
      TabOrder = 2
      Text = '2'
    end
  end
  inherited ActionList: TActionList
    Left = 280
    Top = 112
  end
  inherited ImageList: TImageList
    Left = 352
    Top = 112
  end
  inherited cxStyleRepository: TcxStyleRepository
    PixelsPerInch = 96
  end
  object DataSource1: TDataSource
    DataSet = GridDataSet
    Left = 80
    Top = 144
  end
  object GridDataSet: TClientDataSet
    Aggregates = <>
    Params = <>
    Left = 160
    Top = 144
  end
end
