inherited MessageBoxDialog: TMessageBoxDialog
  Caption = 'MessageBoxDialog'
  ClientHeight = 111
  ClientWidth = 409
  Color = clBtnFace
  FormStyle = fsStayOnTop
  OnKeyDown = FormKeyDown
  ExplicitWidth = 425
  ExplicitHeight = 150
  PixelsPerInch = 96
  TextHeight = 15
  object Image1: TImage [0]
    Left = 25
    Top = 18
    Width = 32
    Height = 32
    AutoSize = True
    OnClick = Image1Click
  end
  object Label1: TLabel [1]
    Left = 78
    Top = 23
    Width = 34
    Height = 15
    Caption = 'Label1'
  end
  object Panel_Button: TPanel [2]
    Left = 0
    Top = 70
    Width = 409
    Height = 41
    Align = alBottom
    BevelOuter = bvNone
    TabOrder = 0
  end
  inherited ActionList: TActionList
    Left = 312
    Top = 24
  end
  inherited ImageList: TImageList
    Left = 376
    Top = 24
  end
  inherited cxStyleRepository: TcxStyleRepository
    PixelsPerInch = 96
  end
end
