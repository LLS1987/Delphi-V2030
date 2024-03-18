inherited InputBoxDialog: TInputBoxDialog
  ActiveControl = edt_InputValue
  Caption = #36755#20837#31383#21475
  ClientHeight = 137
  ClientWidth = 473
  Color = clBtnFace
  ExplicitWidth = 489
  ExplicitHeight = 176
  PixelsPerInch = 96
  TextHeight = 15
  object Panel1: TPanel [0]
    Left = 0
    Top = 96
    Width = 473
    Height = 41
    Align = alBottom
    TabOrder = 0
    ExplicitLeft = 408
    ExplicitTop = 120
    ExplicitWidth = 185
    DesignSize = (
      473
      41)
    object Button1: TButton
      Left = 299
      Top = 8
      Width = 75
      Height = 25
      Anchors = [akRight, akBottom]
      Caption = #30830#23450
      TabOrder = 0
      OnClick = Button1Click
      ExplicitLeft = 363
    end
    object Button2: TButton
      Left = 380
      Top = 8
      Width = 75
      Height = 25
      Action = Action_Close
      Anchors = [akRight, akBottom]
      Cancel = True
      TabOrder = 1
      ExplicitLeft = 444
    end
  end
  object edt_InputValue: TLabeledEdit [1]
    Left = 20
    Top = 42
    Width = 435
    Height = 23
    EditLabel.Width = 89
    EditLabel.Height = 15
    EditLabel.Caption = #35831#36755#20837#20869#23481' ... ...'
    TabOrder = 1
    Text = ''
    OnKeyPress = edt_InputValueKeyPress
  end
  inherited ActionList: TActionList
    Left = 160
    Top = 48
  end
  inherited ImageList: TImageList
    Left = 224
    Top = 48
  end
  inherited cxStyleRepository: TcxStyleRepository
    Left = 280
    Top = 48
    PixelsPerInch = 96
  end
end
