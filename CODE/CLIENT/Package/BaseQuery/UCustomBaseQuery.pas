unit UCustomBaseQuery;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UBaseMdiForm, cxStyles, cxClasses,
  System.ImageList, Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.ExtCtrls,
  cxGraphics, cxControls, cxLookAndFeels, cxLookAndFeelPainters, cxCustomData, cxFilter, cxData, cxDataStorage, cxEdit,
  cxNavigator, dxDateRanges, dxScrollbarAnnotations, Data.DB, cxDBData,
  cxGridLevel, cxGridCustomView, cxGridCustomTableView, cxGridTableView,
  cxGridDBTableView, cxGrid, Vcl.StdCtrls, System.Generics.Collections,
  UParamList, Vcl.ComCtrls, UBaseControlManagerLayout;

type
  TConditionManager = class;

  TCustomBaseQuery = class(TBaseMdiForm)
  private
    FCondition: TConditionManager;
    FButton: TButtonManager;
    { Private declarations }
  protected
    FCloseButtonRec:Integer;
    procedure DoShow; override;
    procedure SetGrid;virtual;   //表格的数据读取及设置
    procedure iniForm;virtual;
    procedure LoadFormLayout;virtual; //加载窗体样式（查询条件）
    procedure LoadData;virtual;       //本函数用于装载数据
    procedure OnIniButton(Sender: TObject); virtual;
  public
    { Public declarations }
    destructor Destroy; override;
    procedure DoPrintHeader; override;
    procedure RefreshData;override;
    property Condition:TConditionManager read FCondition;
    property ButtonList:TButtonManager read FButton;
  end;
  TConditionManager = class(TControlManagerLayout)
  private
    FFindButton:TButton;
    function GetFindButton: TButton;
  public
    destructor Destroy; override;
    procedure RefreshCondition; override;
    property FindButton:TButton read GetFindButton;
  end;

implementation

uses
  UComvar, System.JSON, System.IOUtils;

{$R *.dfm}

destructor TCustomBaseQuery.Destroy;
begin
  if Assigned(FCondition) then FreeAndNil(FCondition);
  if Assigned(FButton) then FreeAndNil(FButton);
  inherited;
end;

procedure TCustomBaseQuery.DoPrintHeader;
begin
  inherited;
  for var item in Condition do
  begin
    PrintItems.Add(item.Value.Caption,item.Value.ValueText);
  end;
end;

procedure TCustomBaseQuery.DoShow;
begin
  iniForm;
  LoadFormLayout;
  SetGrid;
  inherited;
end;

procedure TCustomBaseQuery.iniForm;
begin
  if not Assigned(FCondition) then FCondition := TConditionManager.Create;
  Condition.Parent := Panel_Top;
  Condition.OWnerObject := Self;
  if not Assigned(FButton) then FButton := TButtonManager.Create;
  ButtonList.Parent := Panel_Button;
  ButtonList.OWnerObject := Self;
  //子类继承添加按钮
  OnIniButton(nil);
end;

procedure TCustomBaseQuery.LoadData;
begin

end;

procedure TCustomBaseQuery.LoadFormLayout;
var Json:TJSONObject;
begin
  if FileExists(LayoutFilePath) then
  begin
    JSON := TJSONObject.ParseJSONValue(TFile.ReadAllText(LayoutFilePath)) as TJSONObject;
    try
      if not Assigned(JSON) then Exit;
      self.Caption := JSON.GetValue<string>('Caption',Caption);
      if not(JSON.Values['Condition'] is TJSONArray) then Exit;
      for var item in JSON.Values['Condition'] as TJSONArray do
      begin
        var _ControlType:Integer := 0;
        var _Name:string := EmptyStr;
        var _Caption:string := EmptyStr;
        var _TextHint:string := EmptyStr;
        var _MustField:Boolean := False;
        var _Visible:Boolean := True;

        if not item.TryGetValue<Integer>('ControlType',_ControlType) then Continue;
        item.TryGetValue<string>('Name',_Name);
        item.TryGetValue<string>('Caption',_Caption);
        item.TryGetValue<string>('TextHint',_TextHint);
        item.TryGetValue<Boolean>('MustField',_MustField);
        item.TryGetValue<Boolean>('Visible',_Visible);
        case _ControlType of
          17:Condition.AddDateBetween(_Name.TrimLeft(['@']),_Caption.Trim,_MustField,_Visible);   //时间段
        else
          Condition.Add(_ControlType,_Name.TrimLeft(['@']),_Caption.Trim,_MustField,_Visible,_TextHint);
        end;
      end;
    finally
      JSON.Free;
    end;
  end;
end;

procedure TCustomBaseQuery.OnIniButton(Sender: TObject);
begin
  FCloseButtonRec := ButtonList.Add(Action_Close,True);//关闭
  ButtonList.Add(Action_Print,True);//打印
  if FormStyle in [fsNormal,fsStayOnTop] then ButtonList.Button[FCloseButtonRec].Cancel := True;
end;

procedure TCustomBaseQuery.RefreshData;
begin
  inherited;
  Condition.RefreshParamList;
  LoadData;
end;

procedure TCustomBaseQuery.SetGrid;
begin
  Condition.RefreshCondition;
  ButtonList.RefreshButton;
end;

destructor TConditionManager.Destroy;
begin
  if Assigned(FFindButton) then FreeAndNil(FFindButton);
  inherited;
end;

function TConditionManager.GetFindButton: TButton;
begin
  if not Assigned(FFindButton) then FFindButton := TButton.Create(Parent);
  Result := FFindButton;
end;

procedure TConditionManager.RefreshCondition;
begin
  Self.Width := Self.Width-400;
  inherited;
  //单独刷新查询按钮
  FindButton.Parent  := self.Parent;
  FindButton.Caption := '查询';
  FindButton.Top     := Control_Border_Width;
  FindButton.Left    := Parent.Width - FindButton.Width - 20;
  FindButton.Anchors := [TAnchorKind.akRight,TAnchorKind.akTop];
  FindButton.OnClick := TCustomBaseQuery(OWnerObject).DoRefreshDataByMessage;
end;

end.
