inherited LoginServer: TLoginServer
  ActiveControl = edt_DBAddr
  Caption = #30331#24405#26381#21153#22120
  ClientHeight = 247
  ClientWidth = 517
  OnShow = FormShow
  ExplicitWidth = 533
  ExplicitHeight = 286
  PixelsPerInch = 96
  TextHeight = 15
  object rg_ServerType: TRadioGroup [0]
    Left = 56
    Top = 7
    Width = 409
    Height = 59
    Caption = #25968#25454#24211#36830#25509#26041#24335
    Columns = 3
    ItemIndex = 0
    Items.Strings = (
      #20013#38388#38190#65288'DServer'#65289
      #25968#25454#24211#65288'DBX'#65289
      #25968#25454#24211#65288'ADO'#65289)
    TabOrder = 0
    OnClick = rg_ServerTypeClick
  end
  object PageControl1: TPageControl [1]
    Left = 56
    Top = 69
    Width = 409
    Height = 133
    ActivePage = TabSheet_DataBase
    TabOrder = 1
    object TabSheet_DataSnap: TTabSheet
      Caption = #20013#38388#38190
      object edt_DSAddr: TLabeledEdit
        Left = 94
        Top = 27
        Width = 295
        Height = 23
        EditLabel.Width = 78
        EditLabel.Height = 15
        EditLabel.Caption = #26381#21153#22120#22320#22336#65306
        LabelPosition = lpLeft
        TabOrder = 0
        Text = '127.0.0.1'
        OnKeyPress = edt_DSAddrKeyPress
      end
      object edt_DSPort: TLabeledEdit
        Left = 94
        Top = 56
        Width = 295
        Height = 23
        EditLabel.Width = 78
        EditLabel.Height = 15
        EditLabel.Caption = #26381#21153#22120#31471#21475#65306
        LabelPosition = lpLeft
        NumbersOnly = True
        TabOrder = 1
        Text = '212'
      end
    end
    object TabSheet_DataBase: TTabSheet
      Caption = #25968#25454#24211
      ImageIndex = 1
      object edt_DBAddr: TLabeledEdit
        Left = 95
        Top = 8
        Width = 295
        Height = 23
        EditLabel.Width = 78
        EditLabel.Height = 15
        EditLabel.Caption = #25968#25454#24211#22320#22336#65306
        LabelPosition = lpLeft
        TabOrder = 0
        Text = ''
      end
      object edt_DBSa: TLabeledEdit
        Left = 95
        Top = 41
        Width = 295
        Height = 23
        EditLabel.Width = 39
        EditLabel.Height = 15
        EditLabel.Caption = #29992#25143#65306
        LabelPosition = lpLeft
        TabOrder = 1
        Text = 'sa'
      end
      object edt_DBPass: TLabeledEdit
        Left = 95
        Top = 74
        Width = 295
        Height = 23
        EditLabel.Width = 39
        EditLabel.Height = 15
        EditLabel.Caption = #23494#30721#65306
        LabelPosition = lpLeft
        PasswordChar = '*'
        TabOrder = 2
        Text = ''
      end
    end
  end
  object GridAccount: TStringGrid [2]
    Left = 56
    Top = 206
    Width = 409
    Height = 227
    ColCount = 3
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goRowSelect, goFixedRowDefAlign]
    TabOrder = 2
    OnDblClick = GridAccountDblClick
    OnKeyDown = GridAccountKeyDown
    ColWidths = (
      64
      145
      161)
  end
  object Panel_Button: TPanel [3]
    Left = 0
    Top = 206
    Width = 517
    Height = 41
    Align = alBottom
    BevelOuter = bvNone
    TabOrder = 3
    DesignSize = (
      517
      41)
    object btn_ConnectDB: TBitBtn
      Left = 345
      Top = 3
      Width = 75
      Height = 30
      Anchors = [akTop, akRight]
      Caption = #30830#23450
      NumGlyphs = 2
      TabOrder = 0
      OnClick = btn_ConnectDBClick
    end
    object BitBtn2: TBitBtn
      Left = 426
      Top = 3
      Width = 75
      Height = 30
      Action = Action_Close
      Anchors = [akTop, akRight]
      Cancel = True
      Caption = #20851#38381
      ModalResult = 2
      NumGlyphs = 2
      TabOrder = 1
    end
    object btn_SelectDB: TBitBtn
      Left = 264
      Top = 3
      Width = 75
      Height = 30
      Anchors = [akTop, akRight]
      Caption = #36873#25321#36134#22871
      Default = True
      ModalResult = 1
      NumGlyphs = 2
      TabOrder = 2
      Visible = False
      OnClick = btn_SelectDBClick
    end
  end
  inherited cxStyleRepository: TcxStyleRepository
    PixelsPerInch = 96
  end
end
