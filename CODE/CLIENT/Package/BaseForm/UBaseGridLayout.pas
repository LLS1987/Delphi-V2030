unit UBaseGridLayout;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UBaseDialogForm, cxStyles, cxClasses,
  System.ImageList, Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.ExtCtrls,
  cxGraphics, cxControls, cxLookAndFeels, cxLookAndFeelPainters, cxCustomData,
  cxFilter, cxData, cxDataStorage, cxEdit, cxNavigator, dxDateRanges,
  dxScrollbarAnnotations, Data.DB, cxDBData, cxGridLevel, cxGridCustomView,
  cxGridCustomTableView, cxGridTableView, cxGridDBTableView, cxGrid,
  dxLayoutContainer, cxGridCustomLayoutView, cxGridLayoutView, Vcl.StdCtrls,
  cxCheckBox, dxSkinsCore, dxSkinBasic, dxSkinBlack, dxSkinBlue,
  dxSkinBlueprint, dxSkinCaramel, dxSkinCoffee, dxSkinDarkroom, dxSkinDarkSide,
  dxSkinDevExpressDarkStyle, dxSkinDevExpressStyle, dxSkinFoggy,
  dxSkinGlassOceans, dxSkinHighContrast, dxSkiniMaginary, dxSkinLilian,
  dxSkinLiquidSky, dxSkinLondonLiquidSky, dxSkinMcSkin, dxSkinMetropolis,
  dxSkinMetropolisDark, dxSkinMoneyTwins, dxSkinOffice2007Black,
  dxSkinOffice2007Blue, dxSkinOffice2007Green, dxSkinOffice2007Pink,
  dxSkinOffice2007Silver, dxSkinOffice2010Black, dxSkinOffice2010Blue,
  dxSkinOffice2010Silver, dxSkinOffice2013DarkGray, dxSkinOffice2013LightGray,
  dxSkinOffice2013White, dxSkinOffice2016Colorful, dxSkinOffice2016Dark,
  dxSkinOffice2019Black, dxSkinOffice2019Colorful, dxSkinOffice2019DarkGray,
  dxSkinOffice2019White, dxSkinPumpkin, dxSkinSeven, dxSkinSevenClassic,
  dxSkinSharp, dxSkinSharpPlus, dxSkinSilver, dxSkinSpringtime, dxSkinStardust,
  dxSkinSummer2008, dxSkinTheAsphaltWorld, dxSkinTheBezier,
  dxSkinsDefaultPainters, dxSkinValentine, dxSkinVisualStudio2013Blue,
  dxSkinVisualStudio2013Dark, dxSkinVisualStudio2013Light, dxSkinVS2010,
  dxSkinWhiteprint, dxSkinXmas2008Blue;

type
  TBaseGridLayout = class(TBaseDialogForm)
    Panel_Top: TPanel;
    Panel_Button: TPanel;
    MainGridLevel: TcxGridLevel;
    MainGrid: TcxGrid;
    MainGridTableView: TcxGridTableView;
    MainGridTableView_Caption: TcxGridColumn;
    MainGridTableView_FiledName: TcxGridColumn;
    MainGridTableView_Visible: TcxGridColumn;
    MainGridTableView_VisibleForCustomization: TcxGridColumn;
    MainGridTableView_SortIndex: TcxGridColumn;
    MainGridTableView_Width: TcxGridColumn;
    Button_Load: TButton;
    Button_Save: TButton;
    Button2: TButton;
    procedure Button_SaveClick(Sender: TObject);
    procedure Button_LoadClick(Sender: TObject);
    procedure MainGridTableViewEditing(Sender: TcxCustomGridTableView; AItem:
        TcxCustomGridTableItem; var AAllow: Boolean);
  private
    { Private declarations }
    SetView:TcxCustomGridView;
    CallForm:TForm;
  public
    { Public declarations }
  end;

var
  BaseGridLayout: TBaseGridLayout;
  function ShowTablaViewLayout(AForm:TForm;GridView:TcxCustomGridView):Boolean;

implementation

uses
  UComvar, UBaseForm, cxGridDBDataDefinitions, System.JSON, System.IOUtils;

{$R *.dfm}
function ShowTablaViewLayout(AForm:TForm;GridView:TcxCustomGridView):Boolean;
begin
  BaseGridLayout := TBaseGridLayout.Create(nil);
  try
    BaseGridLayout.GridOptions := BaseGridLayout.GridOptions - [dgColumnResize,dgAppending] + [dgEditing];
    BaseGridLayout.SetView := GridView;
    BaseGridLayout.CallForm := AForm;
    Result := BaseGridLayout.ShowModal=mrOk;
  finally
    BaseGridLayout.Free;
  end;
end;

procedure TBaseGridLayout.Button_SaveClick(Sender: TObject);
var Json:TJSONArray;
  JsonField:TJSONObject;
begin
  inherited;  //
  if MainGridTableView.DataController.RowCount=0 then Exit;
  Json := TJSONArray.Create;
  try
    for var i := 0 to MainGridTableView.DataController.RowCount-1 do
    begin
      JsonField := TJSONObject.Create;
      JsonField.AddPair('Caption',VarToStr(MainGridTableView.DataController.Values[i,MainGridTableView_Caption.Index]));
      JsonField.AddPair('FieldName',VarToStr(MainGridTableView.DataController.Values[i,MainGridTableView_FiledName.Index]));
      JsonField.AddPair('Width',Integer(MainGridTableView.DataController.Values[i,MainGridTableView_Width.Index]));
      Json.Add(JsonField);
    end;
    TFile.WriteAllText(Goo.SystemPath+Format('\Layout\%s.Json', [CallForm.ClassName]),Json.ToJSON);
    Goo.Msg.ShowMsg('�����ļ��ɹ���%s\Layout\%s.Json',[Goo.SystemPath,CallForm.ClassName]);
  finally
    Json.Free;
  end;

end;

procedure TBaseGridLayout.Button_LoadClick(Sender: TObject);
begin
  inherited;
  if (SetView is TcxGridDBTableView) and (TcxGridTableView(SetView).ColumnCount=0) then
  begin
    TcxGridDBTableView(SetView).DataController.CreateAllItems();
    for var i := 0 to TcxGridTableView(SetView).ColumnCount-1 do
    begin
      TcxGridTableView(SetView).Columns[i].OnGetStoredProperties := DoCustomColumnGetStoredProperties;
      if (TcxGridTableView(SetView).Columns[i].DataBinding as TcxGridItemDBDataBinding).FieldName=EmptyStr then Continue;
      //TcxGridTableView(SetView).Columns[i].Name := (TcxGridTableView(SetView).Columns[i].DataBinding as TcxGridItemDBDataBinding).FieldName;
    end;
  end;
  for var i := 0 to TcxGridTableView(SetView).ColumnCount-1 do
  begin
    var _Row := MainGridTableView.DataController.AppendRecord;
    MainGridTableView.DataController.Values[_Row,MainGridTableView_Caption.Index]   := TcxGridTableView(SetView).Columns[i].Caption;
    MainGridTableView.DataController.Values[_Row,MainGridTableView_FiledName.Index] := (TcxGridTableView(SetView).Columns[i].DataBinding as TcxGridItemDBDataBinding).FieldName;
    MainGridTableView.DataController.Values[_Row,2] := TcxGridTableView(SetView).Columns[i].Visible;
    MainGridTableView.DataController.Values[_Row,3] := TcxGridTableView(SetView).Columns[i].VisibleForCustomization;
    MainGridTableView.DataController.Values[_Row,4] := TcxGridTableView(SetView).Columns[i].Index;
    MainGridTableView.DataController.Values[_Row,5] := TcxGridTableView(SetView).Columns[i].Width;
  end;
end;

procedure TBaseGridLayout.MainGridTableViewEditing(Sender: TcxCustomGridTableView; AItem: TcxCustomGridTableItem; var AAllow: Boolean);
begin
  inherited;
  if AItem.EditValue=EmptyStr then Exit;
  if AItem.Name='MainGridTableView_Caption' then
  begin
    TcxGridTableView(SetView).Columns[Sender.DataController.FocusedRowIndex-1].Caption := AItem.EditValue;
  end else if AItem.Name='MainGridTableView_FiledName' then
  begin
    (TcxGridTableView(SetView).Columns[Sender.DataController.FocusedRowIndex-1].DataBinding as TcxGridItemDBDataBinding).FieldName := AItem.EditValue;
  end;
end;

initialization
  Goo.Reg.RegisterClass(TBaseGridLayout);

end.