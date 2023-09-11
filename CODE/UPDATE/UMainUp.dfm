object MainUp: TMainUp
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = #26356#26032
  ClientHeight = 315
  ClientWidth = 576
  Color = clWindow
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poDesktopCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 15
  object Panel1: TPanel
    Left = 0
    Top = 274
    Width = 576
    Height = 41
    Align = alBottom
    Alignment = taLeftJustify
    BevelOuter = bvNone
    Caption = '    '#24685#21916#20320#65281#24403#21069#31243#24207#24050#32463#26159#26368#26032#29256#26412#65281
    Color = clWindow
    ParentBackground = False
    TabOrder = 0
    object Button1: TButton
      Left = 480
      Top = 8
      Width = 75
      Height = 25
      Cancel = True
      Caption = #36864#20986
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 399
      Top = 8
      Width = 75
      Height = 25
      Caption = #26356#26032
      Enabled = False
      TabOrder = 1
      OnClick = Button2Click
    end
  end
  object Panel_Caption: TPanel
    Left = 0
    Top = 0
    Width = 576
    Height = 41
    Align = alTop
    Alignment = taLeftJustify
    Caption = 'Panel_Caption'
    Color = clWindow
    ParentBackground = False
    TabOrder = 1
  end
  object Memo_changelog: TMemo
    Left = 0
    Top = 41
    Width = 576
    Height = 233
    Align = alClient
    BevelInner = bvNone
    BevelOuter = bvNone
    TabOrder = 2
  end
end
