unit ULoginServer;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.ExtCtrls, Vcl.ComCtrls,
  Vcl.Mask, Vcl.Buttons, Vcl.Grids, UBaseDialogForm, System.ImageList,
  Vcl.ImgList, System.Actions, Vcl.ActnList, cxStyles, cxClasses;

type
  TLoginServer = class(TBaseDialogForm)
    rg_ServerType: TRadioGroup;
    PageControl1: TPageControl;
    TabSheet_DataSnap: TTabSheet;
    TabSheet_DataBase: TTabSheet;
    edt_DBAddr: TLabeledEdit;
    edt_DBSa: TLabeledEdit;
    edt_DBPass: TLabeledEdit;
    edt_DSAddr: TLabeledEdit;
    GridAccount: TStringGrid;
    Panel_Button: TPanel;
    btn_ConnectDB: TBitBtn;
    BitBtn2: TBitBtn;
    btn_SelectDB: TBitBtn;
    edt_DSPort: TLabeledEdit;
    procedure btn_ConnectDBClick(Sender: TObject);
    procedure btn_SelectDBClick(Sender: TObject);
    procedure edt_DSAddrKeyPress(Sender: TObject; var Key: Char);
    procedure FormShow(Sender: TObject);
    procedure GridAccountDblClick(Sender: TObject);
    procedure GridAccountKeyDown(Sender: TObject; var Key: Word; Shift: TShiftState);
    procedure rg_ServerTypeClick(Sender: TObject);
  private
    { Private declarations }
    FLastLoginDB:string;
    function GetZTDB:Boolean;
  protected
    function Find(const Msg:string;Reverse,Whole,Match:Boolean):Boolean;override;
  public
    { Public declarations }
  end;

var
  LoginServer: TLoginServer;

implementation

uses
  UComvar, Datasnap.DBClient, System.IniFiles, UComDB, UParamList, UFindDialog;

{$R *.dfm}

procedure TLoginServer.btn_ConnectDBClick(Sender: TObject);
begin
  Goo.DB.ConnectType := TDBConnectType(rg_ServerType.ItemIndex);
  if Goo.DB.ConnectType=dbctRemote then
  begin
    Goo.DB.HostName := Trim(edt_DSAddr.Text);
    Goo.DB.Port     := StrToIntDef(edt_DSPort.Text,DataSnapPort);
  end
  else
  begin
    Goo.DB.HostName := Trim(edt_DBAddr.Text);
    Goo.DB.UserName := Trim(edt_DBSa.Text);
    Goo.DB.Password := Trim(edt_DBPass.Text);
  end;
  Goo.DB.Connected:= True;
  GetZTDB;
end;

procedure TLoginServer.btn_SelectDBClick(Sender: TObject);
begin
  inherited;    //
  Self.ParamList.Add('@DataSanap_Address',Trim(edt_DSAddr.Text));
  Self.ParamList.Add('@DataSanap_Port',edt_DSPort.Text);
  Self.ParamList.Add('@AccountName',GridAccount.Cells[1,GridAccount.Row]);
  Self.ParamList.Add('@DatabaseName',GridAccount.Cells[2,GridAccount.Row]);
  Goo.DB.ChangeDataBase(GridAccount.Cells[2,GridAccount.Row]);
  var ini := TIniFile.Create(ExtractFilePath(Application.ExeName)+'Config.ini');
  try
    ini.WriteString('LOGIN','LastServerAddress',Goo.DB.HostName);
    ini.WriteInteger('LOGIN','LastServerPort',Goo.DB.Port);
    ini.WriteString('LOGIN','LastLoginDB',Goo.DB.DatabaseName);
    ini.WriteString('LOGIN','LastDataBaseAddress',Goo.DB.HostName);
    ini.WriteString('LOGIN','LastDataBaseUserName',Goo.DB.UserName);
    ini.WriteString('LOGIN','LastDataBasePassword',Goo.DB.Password);
    ini.WriteInteger('LOGIN','LastDataConnectType',ord(Goo.DB.ConnectType));
    edt_DBAddr.Text := ini.ReadString('LOGIN','LastDataBaseAddress',EmptyStr);
    edt_DBSa.Text   := ini.ReadString('LOGIN','LastDataBaseUserName',EmptyStr);
    edt_DBPass.Text := ini.ReadString('LOGIN','LastDataBasePassword',EmptyStr);
    rg_ServerType.ItemIndex := ini.ReadInteger('LOGIN','LastDataConnectType',0);
  finally
    ini.Free;
  end;
  ModalResult := mrOk;
end;

procedure TLoginServer.edt_DSAddrKeyPress(Sender: TObject; var Key: Char);
begin
  inherited;
  if Key=#13 then btn_ConnectDB.OnClick(Sender);
end;

function TLoginServer.Find(const Msg: string; Reverse, Whole, Match: Boolean): Boolean;
begin
  Result := False;
  //Goo.Msg.ShowMsg(Msg + ' Reverse=' + BoolToStr(Reverse)+ ' Whole=' + BoolToStr(Whole)+ ' Match=' + BoolToStr(Match));
  if not Goo.DB.Connected then Exit;
  if Reverse then   //反向
  begin
    for var i := GridAccount.Row-1 downto 0 do
    begin
      if TFindDialog.CompareString(Msg,GridAccount.Cells[1,i],Whole,Match) or TFindDialog.CompareString(Msg,GridAccount.Cells[2,i],Whole,Match) then
      begin
        GridAccount.Row := i;
        Result := True;
        Break;
      end;
    end;
  end
  else              //正向
  begin
    for var i := GridAccount.Row+1 to GridAccount.RowCount-1 do
    begin
      if TFindDialog.CompareString(Msg,GridAccount.Cells[1,i],Whole,Match) or TFindDialog.CompareString(Msg,GridAccount.Cells[2,i],Whole,Match) then
      begin
        GridAccount.Row := i;
        Result := True;
        Break;
      end;
    end;
  end;
end;

procedure TLoginServer.FormShow(Sender: TObject);
begin
  inherited;
  GridAccount.Cells[0,0] := '行号';
  GridAccount.Cells[1,0] := '账套名称';
  GridAccount.Cells[2,0] := '数据库名称';
  var ini := TIniFile.Create(ExtractFilePath(Application.ExeName)+'Config.ini');
  try
    edt_DSAddr.Text := ini.ReadString('LOGIN','LastServerAddress',EmptyStr);
    edt_DSPort.Text := ini.ReadString('LOGIN','LastServerPort',EmptyStr);
    edt_DBAddr.Text := ini.ReadString('LOGIN','LastDataBaseAddress',EmptyStr);
    edt_DBSa.Text   := ini.ReadString('LOGIN','LastDataBaseUserName','sa');
    edt_DBPass.Text := ini.ReadString('LOGIN','LastDataBasePassword',EmptyStr);
    rg_ServerType.ItemIndex := ini.ReadInteger('LOGIN','LastDataConnectType',0);
    PageControl1.ActivePageIndex := Goo.Cast.iif(rg_ServerType.ItemIndex=0,0,1);
    if edt_DBAddr.Text=EmptyStr then edt_DBAddr.Text := DataSnapAddress;
    if edt_DSAddr.Text=EmptyStr then edt_DSAddr.Text := DataSnapAddress;
    if StrToIntDef(edt_DSPort.Text,211)<211 then edt_DSPort.Text := IntToStr(DataSnapPort);
    FLastLoginDB    := ini.ReadString('LOGIN','LastLoginDB','');
    btn_ConnectDB.SetFocus;
  finally
    ini.Free;
  end;
end;

function TLoginServer.GetZTDB: Boolean;
var ds: TClientDataSet;
begin
  Goo.Logger.Debug('开始账套选择，当前%s:%s',[Goo.DB.DatabaseName,Goo.DB.Connected.ToString()]);
  if not Goo.DB.Connected then Exit;
  btn_SelectDB.Visible := Goo.DB.Connected;
  btn_SelectDB.SetFocus;
  Self.ClientHeight    := 480;
  ds := TClientDataSet.Create(nil);
  try
    try
      Goo.DB.OpenSQL('select * from qfmaster.dbo.ztdb',ds);                     //新版本是qfmaster
    except
      Goo.DB.OpenSQL('select * from master.dbo.ztdb',ds);                       //否则查询老版本
    end;
    if ds.Active and (ds.RecordCount>0) then
    begin
      GridAccount.RowCount := ds.RecordCount+1;
      while not ds.Eof do
      begin
        var ARow := ds.RecNo;
        GridAccount.Cells[0,ARow] := ARow.ToString;
        GridAccount.Cells[1,ARow] := ds.FieldValues['ztname'];
        GridAccount.Cells[2,ARow] := ds.FieldValues['dbname'];
        if (FLastLoginDB<>EmptyStr) and (ds.FieldValues['dbname']=FLastLoginDB) then GridAccount.Row := ARow;
        ds.Next;
      end;
    end;
  finally
    ds.Free;
  end;
end;

procedure TLoginServer.GridAccountDblClick(Sender: TObject);
begin
  inherited;
  btn_SelectDB.OnClick(Sender);
end;

procedure TLoginServer.GridAccountKeyDown(Sender: TObject; var Key: Word; Shift: TShiftState);
var AParam:TParamList;
begin
  inherited;  //
  if (Key=70) and (Shift = [ssCtrl]) then
  begin
    AParam := TParamList.Create;
    try
      AParam.Add('@SoureHandle',Integer(Self.Handle));
      Goo.Reg.ShowModal('TFindDialog',AParam);
    finally
      AParam.Free;
    end;
  end;
end;

procedure TLoginServer.rg_ServerTypeClick(Sender: TObject);
begin
  inherited;
  PageControl1.ActivePageIndex := Goo.Cast.iif(rg_ServerType.ItemIndex=0,0,1);
end;

initialization
  Goo.Reg.RegisterClass(TLoginServer);

end.
