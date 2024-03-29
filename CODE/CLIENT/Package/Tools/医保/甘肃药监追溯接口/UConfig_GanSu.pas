unit UConfig_GanSu;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UBaseDialogForm, System.ImageList,
  Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.ExtCtrls, Vcl.StdCtrls,
  Vcl.Buttons, Vcl.Mask, Data.DB, Vcl.Grids, Vcl.DBGrids, Datasnap.DBClient,
  cxStyles, cxClasses;

type
  TConfig_GanSu = class(TBaseDialogForm)
    Panel1: TPanel;
    BitBtn1: TBitBtn;
    BitBtn2: TBitBtn;
    DataSource1: TDataSource;
    GridDataSet: TClientDataSet;
    GroupBox1: TGroupBox;
    Panel2: TPanel;
    MainGrid: TStringGrid;
    Button1: TButton;
    chk_AutoOpen: TCheckBox;
    edt_Minute: TEdit;
    Label1: TLabel;
    edt_Day: TEdit;
    Label2: TLabel;
    procedure BitBtn1Click(Sender: TObject);
    procedure Button1Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure MainGridDblClick(Sender: TObject);
  private
    { Private declarations }
    procedure LoadDate;
  public
    { Public declarations }
  end;

var
  Config_GanSu: TConfig_GanSu;

implementation

uses
  UComvar, UParamList;

{$R *.dfm}

procedure TConfig_GanSu.BitBtn1Click(Sender: TObject);
const aryIntBool:array[boolean]of integer=(0,1);
begin
  inherited;
  if chk_AutoOpen.Checked and (StrToIntDef(edt_Minute.Text,0)<5) then Goo.Msg.ShowErrorAndAbort('作业间隔不能少于 5 分钟！');
  Goo.DB.ExecProc('Gp_SaveSysdata',['@SubName','@SubValue','@sysflag'],['SPDA_Gansu_AutoTranOpen',aryIntBool[chk_AutoOpen.Checked],0]);
  Goo.DB.ExecProc('Gp_SaveSysdata',['@SubName','@SubValue','@sysflag'],['SPDA_Gansu_AutoTranDay',edt_Day.Text,0]);
  Goo.DB.ExecProc('Gp_SaveSysdata',['@SubName','@SubValue','@sysflag'],['SPDA_Gansu_AutoTranMinute',edt_Minute.Text,0]);
end;

procedure TConfig_GanSu.Button1Click(Sender: TObject);
begin
  inherited;
  goo.DB.ExecSQL('DELETE SPDA_PosSet WHERE PosID=%d',[MainGrid.Cells[6,MainGrid.Row].ToInteger]);
  LoadDate;
end;

procedure TConfig_GanSu.FormCreate(Sender: TObject);
begin
  inherited;
  LoadDate;
end;

procedure TConfig_GanSu.LoadDate;
begin
  with MainGrid do
  begin
    Cells[0,0] := '行号';
    Cells[1,0] := '门店编号';
    Cells[2,0] := '门店名称';
    Cells[3,0] := '信用代码';
    Cells[4,0] := '密码';
    Cells[5,0] := '授权码';
  end;
  Goo.DB.OpenSQL('SELECT p.PosId,p.PosCode,isnull(s.StoreName,p.PosName) as StoreName,s.StoreCode,Password,s.AppKey FROM dbo.PosInfo p LEFT JOIN SPDA_PosSet s ON s.PosID = p.PosId WHERE p.Deleted=0',GridDataSet);
  MainGrid.RowCount := GridDataSet.RecordCount+1;
  while not GridDataSet.Eof do
  begin
    with MainGrid do
    begin
      Cells[0,GridDataSet.RecNo] := GridDataSet.RecNo.ToString;
      Cells[1,GridDataSet.RecNo] := GridDataSet.FieldByName('PosCode').AsString;
      Cells[2,GridDataSet.RecNo] := GridDataSet.FieldByName('StoreName').AsString;
      Cells[3,GridDataSet.RecNo] := GridDataSet.FieldByName('StoreCode').AsString;
      Cells[4,GridDataSet.RecNo] := GridDataSet.FieldByName('Password').AsString;
      Cells[5,GridDataSet.RecNo] := GridDataSet.FieldByName('AppKey').AsString;
      Cells[6,GridDataSet.RecNo] := GridDataSet.FieldByName('PosId').AsString;
    end;
    GridDataSet.Next;
  end;
  chk_AutoOpen.Checked := Goo.DB.QueryOneFiled<string>('SELECT SubValue FROM dbo.sysdata WHERE SubName=''SPDA_Gansu_AutoTranOpen''')='1';
  var _day := Goo.DB.QueryOneFiled<string>('SELECT SubValue FROM dbo.sysdata WHERE SubName=''SPDA_Gansu_AutoTranDay''');
  if not VarIsNull(_day) then
  begin
    edt_Day.Text         := _day;
  end;
  var _minute := Goo.DB.QueryOneFiled<string>('SELECT SubValue FROM dbo.sysdata WHERE SubName=''SPDA_Gansu_AutoTranMinute''');
  if not VarIsNull(_minute) then
  begin
    edt_Minute.Text         := _minute;
  end;
end;

procedure TConfig_GanSu.MainGridDblClick(Sender: TObject);
var AParam:TParamList;
begin
  inherited;
  AParam := TParamList.Create;
  try
    AParam.Add('@StoreName',MainGrid.Cells[2,MainGrid.Row]);
    AParam.Add('@StoreCode',MainGrid.Cells[3,MainGrid.Row]);
    AParam.Add('@Password',MainGrid.Cells[4,MainGrid.Row]);
    AParam.Add('@Appkey',MainGrid.Cells[5,MainGrid.Row]);
    AParam.Add('@PosID',MainGrid.Cells[6,MainGrid.Row].ToInteger);
    if not Goo.Reg.ShowModal('TConfig_PosSet',AParam)=mrOk then Exit;
    MainGrid.Cells[2,MainGrid.Row] := AParam.AsString('@StoreName');
    MainGrid.Cells[3,MainGrid.Row] := AParam.AsString('@StoreCode');
    MainGrid.Cells[4,MainGrid.Row] := AParam.AsString('@Password');
    MainGrid.Cells[5,MainGrid.Row] := AParam.AsString('@Appkey');
    Goo.DB.ExecProc('GP_SPDA_SavePosInfo',AParam);
  finally
    AParam.Free;
  end;
end;

initialization
  Goo.Reg.RegisterClass(TConfig_GanSu);
end.
