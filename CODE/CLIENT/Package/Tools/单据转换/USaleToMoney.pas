unit USaleToMoney;

interface

uses
  UBaseQuery;

type

  TSaleToMoney = class(TBaseQuery)
  private
    procedure OnCreateBill(Sender: TObject);
  protected
    procedure SetGrid;override;
    procedure OnIniButton(Sender: TObject); override;
  end;

implementation

uses
  UComvar;

procedure TSaleToMoney.OnCreateBill(Sender: TObject);
var ARow,ACount:Integer;
  Atotalqty,Atotalmoney:Double;
begin
  ACount := 0;
  Atotalmoney := 0;
  Atotalqty := 0;
  for var i := 0 to ActiveGridView.DataController.GetSelectedCount-1 do
  begin
    ARow := ActiveGridView.DataController.GetSelectedRowIndex(i);
    if Goo.DB.ExecProc('GP_ConvertBill',['@BillID','@BillType','@DescBill','@ERec'],[RowData['BillID',ARow],RowData['BillType',ARow],4,Goo.Login.LoginUserRec])>0 then
    begin
      Inc(ACount);
      Atotalqty := Atotalqty + RowData['totalqty',ARow];
      Atotalmoney := Atotalmoney + RowData['totalmoney',ARow];
    end;
  end;
  if ACount>0 then
  begin
    Goo.Msg.ShowMsg('收款单成功生成 %d 条，合计数量 %f ，合计金额 %f 元',[ACount,Atotalqty,Atotalmoney]);
    RefreshData;
  end;
end;

procedure TSaleToMoney.OnIniButton(Sender: TObject);
begin
  inherited;
  ButtonList.Add('生成收款单',OnCreateBill);
end;

procedure TSaleToMoney.SetGrid;
begin
  inherited;
  MultSel := True;
end;

initialization
  Goo.Reg.RegisterClass(TSaleToMoney);

end.
