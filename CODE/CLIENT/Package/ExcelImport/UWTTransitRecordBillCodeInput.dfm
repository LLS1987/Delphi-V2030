inherited WTTransitRecordBillCodeInput: TWTTransitRecordBillCodeInput
  ActiveControl = edt_BillCode
  Caption = #20851#32852#38144#21806#21333#32534#21495
  ClientHeight = 106
  ClientWidth = 422
  Color = clBtnFace
  ExplicitWidth = 438
  ExplicitHeight = 145
  PixelsPerInch = 96
  TextHeight = 15
  object edt_BillCode: TLabeledEdit [0]
    Left = 88
    Top = 25
    Width = 305
    Height = 23
    EditLabel.Width = 52
    EditLabel.Height = 15
    EditLabel.Caption = #21333#25454#32534#21495
    LabelPosition = lpLeft
    TabOrder = 0
    Text = ''
    TextHint = #35831#24405#20837#27491#30830#30340#21333#25454#32534#21495
  end
  object Button1: TButton [1]
    Left = 237
    Top = 64
    Width = 75
    Height = 25
    Caption = #30830#23450
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton [2]
    Left = 318
    Top = 64
    Width = 75
    Height = 25
    Action = Action_Close
    TabOrder = 2
  end
  inherited ActionList: TActionList
    Left = 96
    Top = 48
  end
  inherited ImageList: TImageList
    Left = 168
    Top = 48
  end
  inherited cxStyleRepository: TcxStyleRepository
    Left = 248
    Top = 48
    PixelsPerInch = 96
  end
end
