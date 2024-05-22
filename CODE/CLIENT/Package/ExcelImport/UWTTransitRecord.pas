unit UWTTransitRecord;

interface

uses
  System.Classes, System.SysUtils,UBaseQuery;

type

  TWTTransitRecord = class(TBaseQuery)
  private
    procedure OnViewBill(Sender: TObject);
    procedure OnBasicData(Sender: TObject);
    procedure OnImportBill(Sender: TObject);
    procedure OnThreadClick(Sender: TObject);
    procedure OnLinkBillCode(Sender: TObject);
  protected
    procedure OnIniButton(Sender: TObject); override;
  end;

implementation

uses
  UComvar, UExcelObject, Vcl.Grids, UComConst, UComDBStorable, UParamList,
  System.Win.ComObj, UWTTransitRecordBillCodeInput;

procedure TWTTransitRecord.OnBasicData(Sender: TObject);
begin
  //Goo.Msg.ShowMsg(Goo.Local.BasicData[btPtype].GetTypeID<TStorable_PType>('0000900005').FullName);
  Goo.Msg.ShowMsg(Goo.Local.GetRec<TStorable_BType>(RowData['BRec',MainView.DataController.FocusedRowIndex]).FullName);
//  for var i in Goo.Local.BasicData[btPtype] do
//    begin
//      Goo.Logger.Info('Rec=%d,FullName=%s',[i.Value.Rec,i.Value.FullName]);
//    end;
//  MainView.DataController.get
//  Goo.Msg.ShowMsg(RowData['BUnitType',ActiveRowIndex])
//  Goo.Msg.ShowMsg(MainView.DataController.GetDisplayText(ActiveRowIndex,7));
//  Goo.Msg.ShowMsg(RowData['SendDate',ActiveRowIndex]);
//  Goo.Msg.ShowMsg(GetRowText('BUnitType'));
end;

procedure TWTTransitRecord.OnImportBill(Sender: TObject);
var AParamList:TParamList;
begin
  var AExcel := Sender as TExcelObject;
  for var i := 1 to AExcel.RowCount-1 do
  begin
    AParamList := TParamList.Create;
    try
      AParamList.Assign(ParamList);
      AParamList.Add('@BillID',0);
      AParamList.Add('@BRec',Goo.Local.GetUserCode<TStorable_BType>(AExcel.AsString('单位编号',i)).Rec);
      AParamList.Add('@SendDate',AExcel.AsString('发货时间经办人',i));
      AParamList.Add('@StarDate',AExcel.AsString('发货时间经办人',i));
      AParamList.Add('@SendAddr',AExcel.AsString('发货地址',i));
      AParamList.Add('@AcceptAddr',Goo.Local.GetUserCode<TStorable_BType>(AExcel.AsString('单位编号',i)).WarehouseAddress);
      AParamList.Add('@BillCode',AExcel.AsString('货单号',i));
      AParamList.Add('@PackQty',AExcel.AsFloat('药品件数',i));
      AParamList.Add('@TransWeway',AExcel.AsString('运输方式',i));
      AParamList.Add('@WtEName',AExcel.AsString('经办人',i));
      AParamList.Add('@Carrier',AExcel.AsString('承运单位',i));
      AParamList.Add('@CarNo',AExcel.AsString('车牌号',i));
      AParamList.Add('@Driver',AExcel.AsString('驾驶人',i));
      AParamList.Add('@UniqueID',CreateClassID);
      AParamList.Add('@Flag',1);
      AParamList.Add('@TranTimeLimit',AExcel.AsInteger('运输时限',i));
      AParamList.Add('@TransWD',AExcel.AsString('启运温度',i));
      AParamList.Add('@TransGJ',AExcel.AsString('运输工具',i));
      //AParamList.Add('@ReDate   DATETIME=NULL,
      AParamList.Add('@ArriveTemp',AExcel.AsString('到货温度',i));
      Goo.DB.ExecProc('GSP_InsWTTransitRecord',AParamList);
    finally
      AParamList.Free;
    end;
  end;
  RefreshData;
end;

procedure TWTTransitRecord.OnIniButton(Sender: TObject);
begin
  inherited;
  //ButtonList.Add('Excel导入',OnViewBill);
  //ButtonList.Add('Btype.Rec',OnBasicData);
  //ButtonList.Add('OnThreadClick',OnThreadClick);
  GridDblClickID := ButtonList.Add('关联销售单',OnLinkBillCode);
end;

procedure TWTTransitRecord.OnLinkBillCode(Sender: TObject);
var ABillCode:string;
begin
  Goo.Msg.CheckAndAbort(MainView.DataController.RowCount>0,'运输记录为空，不能进行关联操作！');
  if not ShowWTTransitRecordBillCodeInput(ABillCode) then Exit;
  Goo.DB.ExecSQL('UPDATE GSP_WTTransitRecord SET BillCode=''%s'' WHERE BillID=%s',[ABillCode,RowData['BillID',MainView.DataController.FocusedRowIndex]]);
  RowData['BillCode',MainView.DataController.FocusedRowIndex] := ABillCode;
end;

procedure TWTTransitRecord.OnThreadClick(Sender: TObject);
begin
  TThread.CreateAnonymousThread(
    procedure
    begin
      Goo.Logger.Debug('类型：btBtype  Count='+ Goo.Local.BasicData[btBtype].Count.ToString);
    end).Start;
  TThread.CreateAnonymousThread(
    procedure
    begin
      Goo.Logger.Debug('类型：btPtype  Count='+ Goo.Local.BasicData[btPtype].Count.ToString);
    end).Start;
  TThread.CreateAnonymousThread(
    procedure
    begin
      Goo.Logger.Debug('类型：btMtype  Count='+ Goo.Local.BasicData[btMtype].Count.ToString);
    end).Start;
end;

procedure TWTTransitRecord.OnViewBill(Sender: TObject);
var Excel:TExcelObject;
begin
  Excel := TExcelObject.Create('D:\LLS\Downloads\导入模版.xlsx');
  try
    Excel.OnImportExcelEvent := OnImportBill;
    Excel.ExcelCellCheckList.UseCheckBUSerCode := True; //.Add('单位编号',CheckCell_BUserCode);
    Excel.ExcelCellCheckList.AddCheckEmpty('货运号');
    Excel.ExcelCellCheckList.AddCheckEmpty(['运送人','药品件数']);
    Excel.PreViewExcel;
  finally
    Excel.Free;
  end;
end;

initialization
  Goo.Reg.RegisterClass(TWTTransitRecord)

end.
