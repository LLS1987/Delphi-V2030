inherited Config_SPDA_QingDao: TConfig_SPDA_QingDao
  Caption = #21307#20445#35774#32622
  ClientHeight = 323
  ClientWidth = 529
  Color = clBtnFace
  ExplicitWidth = 545
  ExplicitHeight = 362
  PixelsPerInch = 96
  TextHeight = 15
  object Label1: TLabel [0]
    Left = 24
    Top = 26
    Width = 91
    Height = 15
    Caption = #38376#24215#20449#24687#36873#25321#65306
  end
  object edt_HostPort: TLabeledEdit [1]
    Left = 399
    Top = 241
    Width = 113
    Height = 23
    EditLabel.Width = 104
    EditLabel.Height = 15
    EditLabel.Caption = #36143#26631#20013#38388#38190#31471#21475#65306
    LabelPosition = lpLeft
    TabOrder = 8
    Text = '48905'
  end
  object edt_HostIP: TLabeledEdit [2]
    Left = 131
    Top = 241
    Width = 113
    Height = 23
    EditLabel.Width = 104
    EditLabel.Height = 15
    EditLabel.Caption = #36143#26631#20013#38388#38190#22320#22336#65306
    LabelPosition = lpLeft
    TabOrder = 7
    Text = '127.0.0.1'
  end
  object edt_accessSecret: TLabeledEdit [3]
    Left = 184
    Top = 132
    Width = 328
    Height = 23
    EditLabel.Width = 157
    EditLabel.Height = 15
    EditLabel.Caption = #35775#38382#31192#38053#65288'accessSecret'#65289#65306
    LabelPosition = lpLeft
    TabOrder = 3
    Text = ''
  end
  object edt_insuplc_admdvs: TLabeledEdit [4]
    Left = 399
    Top = 205
    Width = 113
    Height = 23
    EditLabel.Width = 104
    EditLabel.Height = 15
    EditLabel.Caption = #21442#20445#22320#21307#20445#21306#21010#65306
    LabelPosition = lpLeft
    TabOrder = 6
    Text = ''
  end
  object edt_mdtrtarea_admvs: TLabeledEdit [5]
    Left = 131
    Top = 205
    Width = 113
    Height = 23
    EditLabel.Width = 104
    EditLabel.Height = 15
    EditLabel.Caption = #23601#21307#22320#21307#20445#21306#21010#65306
    LabelPosition = lpLeft
    TabOrder = 5
    Text = ''
  end
  object edt_infver: TLabeledEdit [6]
    Left = 237
    Top = 168
    Width = 275
    Height = 23
    EditLabel.Width = 210
    EditLabel.Height = 15
    EditLabel.Caption = #21307#20445#29256#26412#21495'(infver,'#25353#29031#26412#22320#21306#35774#32622')'#65306
    LabelPosition = lpLeft
    TabOrder = 4
    Text = 'V1.0'
  end
  object edt_PosName: TLabeledEdit [7]
    Left = 118
    Top = 96
    Width = 394
    Height = 23
    EditLabel.Width = 91
    EditLabel.Height = 15
    EditLabel.Caption = #21307#30103#26426#26500#21517#31216#65306
    LabelPosition = lpLeft
    TabOrder = 2
    Text = ''
  end
  object edt_PosCode: TLabeledEdit [8]
    Left = 118
    Top = 59
    Width = 394
    Height = 23
    EditLabel.Width = 91
    EditLabel.Height = 15
    EditLabel.Caption = #21307#30103#26426#26500#32534#30721#65306
    LabelPosition = lpLeft
    TabOrder = 1
    Text = ''
  end
  object edt_PosID: TButtonedEdit [9]
    Left = 118
    Top = 23
    Width = 394
    Height = 23
    Images = ImageList
    RightButton.ImageIndex = 0
    RightButton.Visible = True
    TabOrder = 9
    TextHint = #36873#25321#21315#26041#38376#24215
    OnKeyPress = edt_PosIDKeyPress
    OnRightButtonClick = edt_PosIDRightButtonClick
  end
  object Panel1: TPanel [10]
    Left = 0
    Top = 282
    Width = 529
    Height = 41
    Align = alBottom
    TabOrder = 0
    object Button1: TButton
      Left = 356
      Top = 8
      Width = 75
      Height = 25
      Caption = #30830#23450
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 437
      Top = 8
      Width = 75
      Height = 25
      Action = Action_Close
      Cancel = True
      TabOrder = 1
    end
  end
  inherited ActionList: TActionList
    Left = 152
    Top = 40
  end
  inherited ImageList: TImageList
    Left = 200
    Top = 40
  end
  inherited cxStyleRepository: TcxStyleRepository
    Left = 264
    Top = 40
    PixelsPerInch = 96
  end
end
