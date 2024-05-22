unit UImportBuyBillAndSaleBill;

interface

uses
  UBaseQuery, System.SysUtils;

type
  TImportBuyBillAndSaleBill = class(TBaseQuery)
  private
    { Private declarations }
    procedure OnExcelPre(Sender:TObject);
    procedure OnImportExcel(Sender:TObject);
    procedure OnImportDB(Sender:TObject);
    procedure OnExpandAllNodes(Sender:TObject);
    function CheckCell_BFullName(AData:OleVariant;var AError:string): Boolean;
    function CheckCell_BSaleName(AData:OleVariant;var AError:string): Boolean;
    function CheckCell_PFullName(AData:OleVariant;var AError:string): Boolean;
    function CheckCell_Qty(AData:OleVariant;var AError:string): Boolean;
    function CheckCell_Date(AData:OleVariant;var AError:string): Boolean;
  protected
    procedure OnIniButton(Sender: TObject); override;
    procedure LoadData;override;
  public
    { Public declarations }
  end;

implementation

uses
  UComvar, UExcelObject, UComConst, UComDBStorable, UParamList,
  System.DateUtils, System.Variants;

{ TImportBuyBillAndSaleBill }

function TImportBuyBillAndSaleBill.CheckCell_BFullName(AData:OleVariant;var AError:string): Boolean;
begin
  Result := AData<>EmptyStr;
  if not Result then
  begin
    AError := '上游往来单位不能为空';
    Exit;
  end;
  var n :Integer := 0;
  for var _item in Goo.Local.BasicData[btBtype] do
  begin
    if string.Compare(_item.Value.FullName,AData,True)=0 then Inc(n);
  end;
  Result := n=1;
  if n=0 then AError := '无此单位';
  if n>1 then AError := '往来单位存在多个相同的上游名称';
end;

function TImportBuyBillAndSaleBill.CheckCell_BSaleName(AData: OleVariant; var AError: string): Boolean;
begin
  Result := AData<>EmptyStr;
  if not Result then
  begin
    AError := '购买方名称不能为空';
    Exit;
  end;
  var n :Integer := 0;
  for var _item in Goo.Local.BasicData[btBtype] do
  begin
    if string.Compare(_item.Value.FullName,AData,True)=0 then Inc(n);
  end;
  Result := n=1;
  if n=0 then AError := '无此单位';
  if n>1 then AError := '往来单位存在多个相同的购买方名称';
end;

function TImportBuyBillAndSaleBill.CheckCell_PFullName(AData: OleVariant; var AError: string): Boolean;
begin
  Result := AData<>EmptyStr;
  if not Result then
  begin
    AError := '规格型号不能为空';
    Exit;
  end;
  var n :Integer := 0;
  for var _item in Goo.Local.BasicData[btPtype] do
  begin
    if string.Compare(TStorable_PType(_item.Value).Standard,AData,True)=0 then Inc(n);
  end;
  Result := n=1;
  if n=0 then AError := '无此商品';
  if n>1 then AError := '存在多个相同的数据';
end;

function TImportBuyBillAndSaleBill.CheckCell_Qty(AData: OleVariant; var AError: string): Boolean;
begin
  Result := StrToFloatDef(AData,0)>0;
  if not Result then AError := '必须大于 0';  
end;

function TImportBuyBillAndSaleBill.CheckCell_Date(AData:OleVariant;var AError:string): Boolean;
begin
  Result := AData<>EmptyStr;
  if not Result then
  begin
    AError := '不能为空';
    Exit;
  end;
  var _date := StrToDateDef(AData,StrToDate('2000-01-01'));
  if _date <= StrToDate('2000-01-01') then
  begin
    Result := False;
    AError := '格式不正确';
    Exit;
  end;
end;

procedure TImportBuyBillAndSaleBill.LoadData;
begin
  inherited;
end;

procedure TImportBuyBillAndSaleBill.OnExcelPre(Sender: TObject);
var Excel:TExcelObject;
begin
  Excel := TExcelObject.Create('');
  try
    Excel.OnImportExcelEvent := OnImportExcel;
    Excel.ExcelCellCheckList.Add('上游',CheckCell_BFullName);
    Excel.ExcelCellCheckList.Add('购买方名称',CheckCell_BSaleName);
    Excel.ExcelCellCheckList.Add('规格型号',CheckCell_PFullName);
    Excel.ExcelCellCheckList.Add('数量',CheckCell_Qty);
    Excel.ExcelCellCheckList.Add('采购金额',CheckCell_Qty);
    Excel.ExcelCellCheckList.Add('销售金额',CheckCell_Qty);
    Excel.ExcelCellCheckList.Add('千方百计做入系统日期',CheckCell_Date);
    Excel.ExcelCellCheckList.Add('收款日期',CheckCell_Date);
    Excel.ExcelCellCheckList.Add('到期日期',CheckCell_Date);
    Excel.PreViewExcel;
  finally
    Excel.Free;
  end;
end;

procedure TImportBuyBillAndSaleBill.OnExpandAllNodes(Sender: TObject);
begin
//  for var I := 0 to MainView.DataController.RecordCount - 1 do
//  begin
//    if TcxGridTableView(MainView).DataController.Records[I] is TcxGridMasterDataRow then
//    begin
//      var AMasterRow := TcxGridMasterDataRow(MainView.DataController.Records[I]);
//      if AMasterRow.Level = ALevel then
//        AMasterRow.Expand(True);
//    end;
//  end;
end;

procedure TImportBuyBillAndSaleBill.OnImportDB(Sender: TObject);
begin
  Goo.Msg.CheckAndAbort(ParamList.AsString('@UniqueBillid')<>EmptyStr,'请选择EXCEL');
  var _succ := Goo.DB.ExecProc('GP_Excel_ImportBill',ParamList);
  var _msg : string := EmptyStr;
  case _succ of
    -1 : _msg := '没有找到能导入的单据';
    -2 : _msg := '不能重复导入EXCEL';
    -3 : _msg := '文件中存在效期大于入库时间的数据';
    -19 .. -10 : _msg := '采购入库单导入不成功';
    -29 .. -20 : _msg := '销售单单导入不成功';
    else _msg := '生成千方单据异常！';
  end;
  Goo.Msg.CheckAndAbort(_succ>0,_msg);
  Goo.Msg.ShowMsg('导入成功');
  RefreshData;
end;

procedure TImportBuyBillAndSaleBill.OnImportExcel(Sender: TObject);
var AParam:TParamList;
begin
  var Excel:TExcelObject := Sender as TExcelObject;
  //var dc := MainView.DataController;
  var _succ :Boolean := True;
  var _guid :string := Goo.GetGUIDString;
  AParam := TParamList.Create;
  try
    for var i := 1 to Excel.RowCount - 1 do
    begin
      AParam.Clear;
      //var ARow := dc.AppendRecord;
      AParam.Add('@BuyDate',DateTimeToStr(Excel.AsDateTime('千方百计做入系统日期',i)));
      AParam.Add('@BuyUnit',Excel.AsString('上游',i));
      AParam.Add('@BuyPrice',Excel.AsFloat('采购单价',i));
      AParam.Add('@BuyTotal',Excel.AsFloat('采购金额',i));
      AParam.Add('@BuyTax',13);
      AParam.Add('@BuyTaxPrice',Excel.AsFloat('采购单价',i));
      AParam.Add('@BuyTaxTotal',Excel.AsFloat('采购金额',i));
      AParam.Add('@BuyComment',EmptyStr);
      AParam.Add('@BuyExplain',Excel.AsString('数电票号码',i));
		  AParam.Add('@SaleDate',DateTimeToStr(Excel.AsDateTime('收款日期',i)));
      AParam.Add('@SaleUnit',Excel.AsString('购买方名称',i));
      AParam.Add('@SalePrice',Excel.AsFloat('销售单价',i));
      AParam.Add('@SaleTotal',Excel.AsFloat('销售金额',i));
      AParam.Add('@SaleTax',13);
      AParam.Add('@SaleTaxPrice',Excel.AsFloat('销售单价',i));
      AParam.Add('@SaleTaxTotal',Excel.AsFloat('销售金额',i));
      AParam.Add('@SaleComment',EmptyStr);
      AParam.Add('@SaleExplain',Excel.AsString('数电票号码',i));
		  AParam.Add('@PFullName',Excel.AsString('货物或应税劳务名称',i));
      AParam.Add('@PStandard',Excel.AsString('规格型号',i));
      AParam.Add('@PUnit',Excel.AsString('单位',i));
      AParam.Add('@Qty',Excel.AsFloat('数量',i));
      AParam.Add('@Jobnumber',Excel.AsString('批号',i));
      AParam.Add('@OutFactoryDate',DateTimeToStr(Excel.AsDateTime('生产日期',i)));
      AParam.Add('@ValidityPeriod',DateTimeToStr(Excel.AsDateTime('到期日期',i)));
		  AParam.Add('@ERec',Goo.Login.LoginUserRec);
      AParam.Add('@UniqueBillid',_guid);
      _succ := _succ and (Goo.DB.ExecProc('GP_Excel_InsertTempBill',AParam)>=0);
      if not _succ then Break;
    end;
  finally
    AParam.Free;
  end;
  if not _succ then Exit;
  ParamList.Add('@UniqueBillid',_guid);
  RefreshData;
end;

procedure TImportBuyBillAndSaleBill.OnIniButton(Sender: TObject);
begin
  inherited;
  ButtonList.Add('打开Excel',OnExcelPre);
  ButtonList.Add('生成单据',OnImportDB);
  //ButtonList.Add('全部展开',OnExpandAllNodes);
end;

initialization
  Goo.Reg.RegisterClass(TImportBuyBillAndSaleBill);

end.
