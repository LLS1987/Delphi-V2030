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
  dxSkinWhiteprint, dxSkinXmas2008Blue, Vcl.Mask, UBaseForm;

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
    Button_Up: TButton;
    Button_Down: TButton;
    edt_ProceName: TLabeledEdit;
    procedure Button_DownClick(Sender: TObject);
    procedure Button_SaveClick(Sender: TObject);
    procedure Button_LoadClick(Sender: TObject);
    procedure Button_UpClick(Sender: TObject);
    procedure MainGridTableViewEditing(Sender: TcxCustomGridTableView; AItem: TcxCustomGridTableItem; var AAllow: Boolean);
  private
    { Private declarations }
    SetView:TcxCustomGridView;
    CallForm:TBaseForm;
  public
    { Public declarations }
  end;

var
  BaseGridLayout: TBaseGridLayout;
  function ShowTablaViewLayout(AForm:TForm;GridView:TcxCustomGridView):Boolean;

implementation

uses
  UComvar, cxGridDBDataDefinitions, System.JSON, System.IOUtils;

{$R *.dfm}
function ShowTablaViewLayout(AForm:TForm;GridView:TcxCustomGridView):Boolean;
begin
  BaseGridLayout := TBaseGridLayout.Create(nil);
  try
    BaseGridLayout.GridOptions := BaseGridLayout.GridOptions - [dgColumnResize,dgAppending] + [dgEditing];
    BaseGridLayout.SetView := GridView;
    BaseGridLayout.CallForm := AForm as TBaseForm;
    Result := BaseGridLayout.ShowModal=mrOk;
  finally
    BaseGridLayout.Free;
  end;
end;

procedure TBaseGridLayout.Button_DownClick(Sender: TObject);
var
  AIndex,_NewRow: Integer;
begin
  if MainGridTableView.ViewData.RowCount<2 then Exit;
  if MainGridTableView.DataController.IsEOF then Exit;
  //MainGridTableView.BeginUpdate;
  try
    var AFromIndex := MainGridTableView.ViewData.DataController.FocusedRowIndex;
    var AToIndex   := AFromIndex+2;
    var ARecord := MainGridTableView.ViewData.Records[AFromIndex];
    if AToIndex >= MainGridTableView.ViewData.RowCount then
      _NewRow := MainGridTableView.ViewData.DataController.AppendRecord
    else
      _NewRow := MainGridTableView.ViewData.DataController.InsertRecord(AToIndex);
    for var i := 0 to MainGridTableView.ColumnCount-1 do
    begin
      MainGridTableView.ViewData.Records[_NewRow].Values[I] := ARecord.Values[I];
    end;
    MainGridTableView.ViewData.DataController.DeleteRecord(AFromIndex+1);
    MainGridTableView.Controller.FocusedRowIndex := _NewRow;
  finally
    //MainGridTableView.EndUpdate;
  end;
end;

procedure TBaseGridLayout.Button_SaveClick(Sender: TObject);
var Json:TJSONArray;
  JsonField,JsonLayout:TJSONObject;
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
      JsonField.AddPair('SortIndex',Integer(MainGridTableView.DataController.Values[i,MainGridTableView_SortIndex.Index]));
      JsonField.AddPair('Visible',Boolean(MainGridTableView.DataController.Values[i,MainGridTableView_Visible.Index]));
      JsonField.AddPair('VisibleForCustomization',Boolean(MainGridTableView.DataController.Values[i,MainGridTableView_VisibleForCustomization.Index]));
      Json.Add(JsonField);
    end;
    if FileExists(CallForm.LayoutFilePath) then
    begin
      try
        JsonLayout := JsonLayout.ParseJSONValue(UTF8Decode(TFile.ReadAllText(Goo.SystemPath+Format('\Layout\%s.Json', [CallForm.ClassName])))) as TJSONObject;
      except on E: Exception do
      end;
    end;
    if not Assigned(JsonLayout) then JsonLayout := TJSONObject.Create;
    var ViewJson := TJSONObject.Create;
    ViewJson.AddPair('ProceName',Trim(edt_ProceName.Text));
    ViewJson.AddPair('FieldList',Json);
    if not Assigned(JsonLayout.Values['GridList']) then JsonLayout.AddPair('GridList',TJSONObject.Create);
    TJSONObject(JsonLayout.Values['GridList']).RemovePair(SetView.Name);
    TJSONObject(JsonLayout.Values['GridList']).AddPair(SetView.Name,ViewJson);
    TFile.WriteAllText(CallForm.LayoutFilePath,JsonLayout.ToString,TEncoding.ANSI);
    Goo.Msg.ShowMsg('保存文件成功：%s',[CallForm.LayoutFilePath]);
  finally
    if Assigned(JsonLayout) then JsonLayout.Free;
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
      TcxGridTableView(SetView).Columns[i].ApplyBestFit;
      TcxGridTableView(SetView).Columns[i].OnGetStoredProperties := DoCustomColumnGetStoredProperties;
      if (TcxGridTableView(SetView).Columns[i].DataBinding as TcxGridItemDBDataBinding).FieldName=EmptyStr then Continue;
      //TcxGridTableView(SetView).Columns[i].Name := (TcxGridTableView(SetView).Columns[i].DataBinding as TcxGridItemDBDataBinding).FieldName;
    end;
  end;
  MainGridTableView.DataController.RecordCount := 0;
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

procedure TBaseGridLayout.Button_UpClick(Sender: TObject);
var
  AIndex: Integer;
begin
  if MainGridTableView.ViewData.RowCount<2 then Exit;
  if MainGridTableView.DataController.IsBOF then Exit;
  MainGridTableView.BeginUpdate;
  try
    var AFromIndex := MainGridTableView.ViewData.DataController.FocusedRowIndex;
    var AToIndex   := AFromIndex-1;
    var ARecord := MainGridTableView.ViewData.Records[AFromIndex+1];
    MainGridTableView.ViewData.DataController.InsertRecord(AToIndex);
    for var i := 0 to MainGridTableView.ColumnCount-1 do
    begin
      MainGridTableView.ViewData.Records[AToIndex].Values[I] := ARecord.Values[I];
    end;
    MainGridTableView.ViewData.DataController.DeleteRecord(AFromIndex+1);
    MainGridTableView.Controller.FocusedRowIndex := AToIndex;
  finally
    MainGridTableView.EndUpdate;
  end;
end;

procedure TBaseGridLayout.MainGridTableViewEditing(Sender: TcxCustomGridTableView; AItem: TcxCustomGridTableItem; var AAllow: Boolean);
begin
  inherited;
  if VarIsStr(AItem.EditValue) and (AItem.EditValue=EmptyStr) then Exit;
  if AItem.Name='MainGridTableView_Caption' then
  begin
    TcxGridTableView(SetView).Columns[Sender.DataController.FocusedRowIndex].Caption := AItem.EditValue;
  end else if AItem.Name='MainGridTableView_FiledName' then
  begin
    (TcxGridTableView(SetView).Columns[Sender.DataController.FocusedRowIndex].DataBinding as TcxGridItemDBDataBinding).FieldName := AItem.EditValue;
  end;
end;

initialization
  Goo.Reg.RegisterClass(TBaseGridLayout);

end.
