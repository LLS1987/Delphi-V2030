object MainClient: TMainClient
  Left = 0
  Top = 0
  Caption = #23458#25143#31471
  ClientHeight = 518
  ClientWidth = 962
  Color = clWindow
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  FormStyle = fsMDIForm
  Menu = MainMenu
  WindowState = wsMaximized
  PixelsPerInch = 96
  TextHeight = 15
  object StatusBar1: TStatusBar
    Left = 0
    Top = 499
    Width = 962
    Height = 19
    Panels = <
      item
        Width = 300
      end
      item
        Width = 200
      end
      item
        Width = 50
      end>
  end
  object Timer_PassWork: TTimer
    Interval = 1
    OnTimer = Timer_PassWorkTimer
    Left = 72
    Top = 136
  end
  object MainMenu: TMainMenu
    AutoHotkeys = maManual
    Left = 176
    Top = 136
    object N1: TMenuItem
      Caption = #31995#32479
      object N2: TMenuItem
        Action = Action_ChangeUser
      end
      object N3: TMenuItem
        Action = Action_ChangeDB
      end
      object N4: TMenuItem
        Action = Action_Close
      end
    end
  end
  object ActionList: TActionList
    Left = 240
    Top = 136
    object Action_Close: TAction
      Category = #31995#32479
      Caption = #36864#20986#31995#32479
      OnExecute = Action_CloseExecute
    end
    object Action_ChangeUser: TAction
      Category = #31995#32479
      Caption = #26356#25442#29992#25143
      OnExecute = Action_ChangeUserExecute
    end
    object Action_ChangeDB: TAction
      Category = #31995#32479
      Caption = #26356#25442#36134#22871
      OnExecute = Action_ChangeDBExecute
    end
  end
end
