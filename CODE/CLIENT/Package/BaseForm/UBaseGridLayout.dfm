inherited BaseGridLayout: TBaseGridLayout
  Caption = #34920#26684#37197#32622
  ClientHeight = 477
  ClientWidth = 875
  Color = clBtnFace
  ExplicitWidth = 891
  ExplicitHeight = 516
  PixelsPerInch = 96
  TextHeight = 15
  object Panel_Top: TPanel [0]
    Left = 0
    Top = 0
    Width = 875
    Height = 44
    Align = alTop
    TabOrder = 0
    object edt_ProceName: TLabeledEdit
      Left = 96
      Top = 11
      Width = 369
      Height = 23
      EditLabel.Width = 65
      EditLabel.Height = 15
      EditLabel.Caption = #36807#31243#21517#31216#65306
      LabelPosition = lpLeft
      TabOrder = 0
      Text = ''
    end
  end
  object Panel_Button: TPanel [1]
    Left = 0
    Top = 436
    Width = 875
    Height = 41
    Align = alBottom
    TabOrder = 1
    object Button_Load: TButton
      Left = 15
      Top = 8
      Width = 75
      Height = 25
      Caption = #21152#36733
      TabOrder = 0
      OnClick = Button_LoadClick
    end
    object Button_Save: TButton
      Left = 250
      Top = 8
      Width = 75
      Height = 25
      Caption = #20445#23384
      TabOrder = 3
      OnClick = Button_SaveClick
    end
    object Button2: TButton
      Left = 785
      Top = 8
      Width = 75
      Height = 25
      Action = Action_Close
      Cancel = True
      TabOrder = 4
    end
    object Button_Up: TButton
      Left = 93
      Top = 8
      Width = 75
      Height = 25
      Caption = #19978#31227
      TabOrder = 1
      OnClick = Button_UpClick
    end
    object Button_Down: TButton
      Left = 172
      Top = 8
      Width = 75
      Height = 25
      Caption = #19979#31227
      TabOrder = 2
      OnClick = Button_DownClick
    end
  end
  object MainGrid: TcxGrid [2]
    Left = 0
    Top = 44
    Width = 875
    Height = 392
    Align = alClient
    TabOrder = 2
    object MainGridTableView: TcxGridTableView
      Navigator.Buttons.CustomButtons = <>
      ScrollbarAnnotations.CustomAnnotations = <>
      OnEditing = MainGridTableViewEditing
      DataController.Summary.DefaultGroupSummaryItems = <>
      DataController.Summary.FooterSummaryItems = <>
      DataController.Summary.SummaryGroups = <>
      object MainGridTableView_Caption: TcxGridColumn
        Caption = #26174#31034#21517#31216
        HeaderAlignmentHorz = taCenter
        Width = 253
      end
      object MainGridTableView_FiledName: TcxGridColumn
        Caption = #23383#27573#21517#31216
        HeaderAlignmentHorz = taCenter
        Width = 117
      end
      object MainGridTableView_Visible: TcxGridColumn
        Caption = #26159#21542#26174#31034
        DataBinding.ValueType = 'Boolean'
        PropertiesClassName = 'TcxCheckBoxProperties'
      end
      object MainGridTableView_VisibleForCustomization: TcxGridColumn
        Caption = #26159#21542#33258#23450#20041
        DataBinding.ValueType = 'Boolean'
        PropertiesClassName = 'TcxCheckBoxProperties'
        HeaderAlignmentHorz = taCenter
        Width = 112
      end
      object MainGridTableView_SortIndex: TcxGridColumn
        Caption = #26174#31034#39034#24207
        DataBinding.ValueType = 'Integer'
        HeaderAlignmentHorz = taCenter
        Width = 72
      end
      object MainGridTableView_Width: TcxGridColumn
        Caption = #23485#24230
        DataBinding.ValueType = 'Integer'
        HeaderAlignmentHorz = taCenter
        Width = 76
      end
      object MainGridTableView_Operate: TcxGridColumn
        Caption = #25805#20316
        PropertiesClassName = 'TcxButtonEditProperties'
        Properties.Buttons = <
          item
            Caption = #21024#38500
            Default = True
            Kind = bkText
          end
          item
            Caption = #19978#31227
            Kind = bkText
          end
          item
            Caption = #19979#31227
            Kind = bkText
          end>
        Properties.ViewStyle = vsButtonsOnly
        HeaderAlignmentHorz = taCenter
        Width = 160
      end
    end
    object MainGridLevel: TcxGridLevel
      GridView = MainGridTableView
    end
  end
  inherited ActionList: TActionList
    Left = 144
    Top = 136
  end
  inherited ImageList: TImageList
    Left = 216
    Top = 136
  end
  inherited cxStyleRepository: TcxStyleRepository
    Left = 296
    Top = 136
    PixelsPerInch = 96
  end
end
