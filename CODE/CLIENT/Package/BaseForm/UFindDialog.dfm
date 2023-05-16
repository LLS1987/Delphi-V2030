inherited FindDialog: TFindDialog
  Caption = #26597#25214
  ClientHeight = 146
  ClientWidth = 512
  Color = clBtnFace
  ExplicitWidth = 528
  ExplicitHeight = 185
  PixelsPerInch = 96
  TextHeight = 15
  object chk_Reverse: TCheckBox [0]
    Left = 24
    Top = 56
    Width = 97
    Height = 17
    Caption = #21453#21521
    TabOrder = 1
  end
  object chk_Whole: TCheckBox [1]
    Left = 24
    Top = 83
    Width = 97
    Height = 17
    Caption = #20840#35789#21305#37197
    TabOrder = 2
  end
  object chk_Match: TCheckBox [2]
    Left = 24
    Top = 110
    Width = 97
    Height = 17
    Caption = #21305#37197#22823#23567#20889
    TabOrder = 3
  end
  object edt_Find: TLabeledEdit [3]
    Left = 88
    Top = 16
    Width = 321
    Height = 23
    EditLabel.Width = 79
    EditLabel.Height = 15
    EditLabel.Caption = #26597#25214#30446#26631'(&F)'#65306
    LabelPosition = lpLeft
    TabOrder = 0
    Text = ''
    OnKeyPress = edt_FindKeyPress
  end
  object Button2: TButton [4]
    Left = 419
    Top = 46
    Width = 75
    Height = 25
    Cancel = True
    Caption = #36864#20986
    ModalResult = 2
    TabOrder = 5
  end
  object btn_Find: TButton [5]
    Left = 419
    Top = 15
    Width = 75
    Height = 25
    Caption = #26597#25214#19979#19968#20010
    TabOrder = 4
    OnClick = btn_FindClick
  end
  inherited ActionList: TActionList
    Left = 176
    Top = 8
  end
  inherited ImageList: TImageList
    Left = 224
    Top = 8
  end
end
