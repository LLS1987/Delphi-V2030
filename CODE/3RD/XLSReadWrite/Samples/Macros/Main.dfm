object frmMain: TfrmMain
  Left = 728
  Top = 185
  Caption = 'Macro Sample'
  ClientHeight = 546
  ClientWidth = 749
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Splitter1: TSplitter
    Left = 137
    Top = 33
    Height = 513
    ExplicitTop = 89
    ExplicitHeight = 458
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 749
    Height = 33
    Align = alTop
    TabOrder = 0
    DesignSize = (
      749
      33)
    object Label1: TLabel
      Left = 163
      Top = 8
      Width = 42
      Height = 13
      Caption = 'Filename'
    end
    object btnClose: TButton
      Left = 4
      Top = 5
      Width = 49
      Height = 21
      Caption = 'Close'
      TabOrder = 0
      OnClick = btnCloseClick
    end
    object btnRead: TButton
      Left = 108
      Top = 5
      Width = 49
      Height = 21
      Caption = 'Read'
      TabOrder = 1
      OnClick = btnReadClick
    end
    object edFilename: TEdit
      Left = 207
      Top = 5
      Width = 514
      Height = 21
      Anchors = [akLeft, akTop, akRight]
      TabOrder = 2
      Text = 'D:\XTemp\XLSX\Backup_ABCbil.xlsm'
    end
    object btnFilename: TButton
      Left = 724
      Top = 5
      Width = 23
      Height = 21
      Anchors = [akTop, akRight]
      Caption = '...'
      TabOrder = 3
      OnClick = btnFilenameClick
    end
  end
  object Panel3: TPanel
    Left = 140
    Top = 33
    Width = 609
    Height = 513
    Align = alClient
    BevelOuter = bvNone
    TabOrder = 1
    ExplicitTop = 89
    ExplicitHeight = 457
    DesignSize = (
      609
      513)
    object memModule: TMemo
      Left = 3
      Top = 25
      Width = 603
      Height = 486
      Anchors = [akLeft, akTop, akRight, akBottom]
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Courier New'
      Font.Style = []
      ParentFont = False
      ScrollBars = ssBoth
      TabOrder = 0
      ExplicitHeight = 430
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 33
    Width = 137
    Height = 513
    Align = alLeft
    BevelOuter = bvNone
    TabOrder = 2
    ExplicitTop = 89
    ExplicitHeight = 457
    DesignSize = (
      137
      513)
    object Label2: TLabel
      Left = 4
      Top = 3
      Width = 39
      Height = 13
      Caption = 'Modules'
    end
    object lbModules: TListBox
      Left = 0
      Top = 25
      Width = 134
      Height = 460
      Anchors = [akLeft, akTop, akRight, akBottom]
      ItemHeight = 13
      TabOrder = 0
      OnDblClick = lbModulesDblClick
      ExplicitHeight = 404
    end
    object btnOpenMod: TButton
      Left = 4
      Top = 493
      Width = 37
      Height = 18
      Anchors = [akLeft, akBottom]
      Caption = 'Open'
      TabOrder = 1
      OnClick = btnOpenModClick
      ExplicitTop = 437
    end
  end
  object dlgOpen: TOpenDialog
    Filter = 'Excel files (*.xls)|*.xls|All files (*.*)|*.*'
    Left = 564
    Top = 56
  end
  object dlgOpenTxt: TOpenDialog
    Filter = 'Text files (*.txt)|*.txt|All files (*.*)|*.*'
    Left = 596
    Top = 56
  end
  object XLS: TXLSReadWriteII5
    ComponentVersion = '6.00.57'
    Version = xvExcel2007
    DirectRead = False
    DirectWrite = False
    Left = 636
    Top = 56
  end
end
