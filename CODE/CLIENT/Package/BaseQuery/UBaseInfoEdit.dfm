inherited BaseInfoEdit: TBaseInfoEdit
  Caption = 'BaseInfoEdit'
  ClientWidth = 684
  Color = clBtnFace
  Position = poMainFormCenter
  Visible = False
  ExplicitWidth = 700
  PixelsPerInch = 96
  TextHeight = 15
  inherited Panel_Top: TPanel
    Width = 684
    ExplicitWidth = 684
  end
  inherited Panel_Client: TPanel
    Width = 684
    ExplicitTop = 15
    ExplicitWidth = 684
    ExplicitHeight = 385
    object ScrollBox_Client: TScrollBox
      Left = 0
      Top = 25
      Width = 684
      Height = 334
      Align = alClient
      BorderStyle = bsNone
      Color = clWindow
      ParentColor = False
      TabOrder = 0
      ExplicitTop = 16
      ExplicitHeight = 369
    end
    object Panel_Location: TPanel
      Left = 0
      Top = 0
      Width = 684
      Height = 25
      Align = alTop
      BevelOuter = bvNone
      Color = clGradientActiveCaption
      ParentBackground = False
      TabOrder = 1
      Visible = False
    end
  end
  inherited Panel_Button: TPanel
    Width = 684
    ExplicitWidth = 684
  end
  inherited ActionList: TActionList
    object Action_Save: TAction
      Caption = #20445#23384
      OnExecute = Action_SaveExecute
    end
  end
  inherited cxStyleRepository: TcxStyleRepository
    PixelsPerInch = 96
  end
end
