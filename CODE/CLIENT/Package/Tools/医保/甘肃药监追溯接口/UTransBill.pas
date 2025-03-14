unit UTransBill;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UBaseMdiForm, System.ImageList,
  Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.ExtCtrls, Vcl.StdCtrls,
  Vcl.Buttons, IdBaseComponent, IdComponent, IdTCPConnection, IdTCPClient,
  IdHTTP, IdIOHandler, IdIOHandlerSocket, IdIOHandlerStack, IdSSL,
  IdSSLOpenSSL, UParamList, UBaseNormalForm, Data.DB, Vcl.ComCtrls, Vcl.Grids,
  Vcl.DBGrids, Datasnap.DBClient, System.JSON, Vcl.Mask, cxStyles, cxClasses;

type
  TTransBill = class(TBaseMdiForm)
    BitBtn1: TBitBtn;
    btn_Upload: TBitBtn;
    BitBtn3: TBitBtn;
    dtp_bgndate: TDateTimePicker;
    dtp_enddate: TDateTimePicker;
    lbl_BgnDate: TLabel;
    Label2: TLabel;
    MainDataSet: TClientDataSet;
    btn_Find: TBitBtn;
    DataSource1: TDataSource;
    chk_AutoOpen: TCheckBox;
    edt_Minute: TEdit;
    Label1: TLabel;
    edt_Day: TEdit;
    Label3: TLabel;
    Timer1: TTimer;
    PageControl1: TPageControl;
    TabSheet1: TTabSheet;
    自动传输记录: TTabSheet;
    DBGrid1: TDBGrid;
    Memo_Log: TMemo;
    edt_PosID: TButtonedEdit;
    Label4: TLabel;
    chk_OnlyRX: TCheckBox;
    BitBtn2: TBitBtn;
    chk_OnlyBuyer: TCheckBox;
    btn_allUpLoad: TButton;
    procedure btn_UploadClick(Sender: TObject);
    procedure BitBtn3Click(Sender: TObject);
    procedure btn_FindClick(Sender: TObject);
    procedure btn_allUpLoadClick(Sender: TObject);
    procedure chk_AutoOpenClick(Sender: TObject);
    procedure edt_PosIDKeyPress(Sender: TObject; var Key: Char);
    procedure edt_PosIDRightButtonClick(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure Timer1Timer(Sender: TObject);
  private
    { Private declarations }
    FLastErrorCode:Integer;
    FLastErrorMsg,FLastErrorData:string;
    function Post(url,injson:string;header:TParamList=nil):string;
    function GetToken(const loginid,password:string):string;
    function DataSetToJSON(DataSet: TDataSet): TJSONArray;
    function DBGridToJSON(DataSet: TDataSet): TJSONArray;
    procedure AddLog(const msg:string);
    function GetPrintDate:OleVariant;
    { Public declarations }
    function Salesaledata(DataSet: TDataSet): Boolean;
    class function ShowSalesaledata(AParam:TParamList = nil):Boolean;
  protected
    procedure DoPrintBtnEvent; override;
  end;

var
  TransBill: TTransBill;

implementation

uses
  UComvar,REST.Types, REST.Client, System.Net.HttpClient, UCertManage,
  crReportIntf, MidasLib, System.IniFiles;

{$R *.dfm}

procedure TTransBill.AddLog(const msg: string);
var
  LogFile: TextFile;
  path:string;
begin
  if not DirectoryExists(ExtractFilePath(Application.ExeName)+'Log') then ForceDirectories(ExtractFilePath(Application.ExeName)+'Log');
  path := ExtractFilePath(Application.ExeName)+'Log\'+FormatDateTime('yyyy-mm-dd',Now)+'log.txt';
  AssignFile(LogFile, path);
  if FileExists(path) then
    Append(LogFile)
  else
    Rewrite(LogFile);
  try
    Writeln(LogFile, FormatDateTime('yyyy-mm-dd hh:nn:ss', Now) + ': ' + msg);
  finally
    CloseFile(LogFile);
  end;

end;

procedure TTransBill.btn_UploadClick(Sender: TObject);
begin
  inherited;
  if not Salesaledata(MainDataSet) then
  begin
    Goo.Msg.ShowError('销售上传失败[%d]：%s,%s',[FLastErrorCode,FLastErrorMsg,FLastErrorData]);
  end else begin
    Goo.Msg.ShowMsg('上传成功');
    btn_Find.OnClick(Sender);
  end;
end;

procedure TTransBill.BitBtn3Click(Sender: TObject);
begin
  goo.Reg.ShowModal('TPosInfoSelect');
  if not MainDataSet.Active then Exit;
  if MainDataSet.RecordCount=0 then Exit;
  var json := DBGridToJSON(MainDataSet);
  ShowMessage(json.ToString);
  json.Free;
end;

procedure TTransBill.btn_FindClick(Sender: TObject);
const aryIntBool:array[boolean]of integer=(0,1);
begin
  inherited;
  MainDataSet.Active := False;
  Goo.Msg.CheckAndAbort(edt_PosID.Tag>0,'必须选择查询的门店！');
  Goo.DB.OpenProc('GP_SPDA_QueryBill',['@PosID','@BgnDate','@EndDate','@OnlyRX','@OnlyBuyer'],[edt_PosID.Tag,dtp_bgndate.Date,dtp_enddate.Date,aryIntBool[chk_OnlyRX.Checked],aryIntBool[chk_OnlyBuyer.Checked]],MainDataSet);
  PageControl1.ActivePageIndex := 0;
//  Goo.Logger.Memo[Memo_Log].Debug('开始查询','');
//  Goo.Logger.Memo[Memo_Log].Info('开始查询','');
end;

procedure TTransBill.btn_allUpLoadClick(Sender: TObject);
begin
  inherited;
  MainDataSet.First;
  while not MainDataSet.Eof do
  begin
    try
      Salesaledata(MainDataSet);
    except
      Memo_Log.Lines.Add(Format('%s %s：%s %d:%s,%s',[FormatDateTime('yyyy-mm-dd hh:nn:ss', Now),MainDataSet.FieldValues['BillCode'],MainDataSet.FieldValues['drugName'],500,'导入异','']));
    end;
    Memo_Log.Lines.Add(Format('%s %s：%s %d:%s,%s',[FormatDateTime('yyyy-mm-dd hh:nn:ss', Now),MainDataSet.FieldValues['BillCode'],MainDataSet.FieldValues['drugName'],FLastErrorCode,FLastErrorMsg,FLastErrorData]));
    MainDataSet.Next;
  end;
  Goo.Msg.ShowMsg('上传完成');
  btn_Find.OnClick(Sender);
end;

procedure TTransBill.chk_AutoOpenClick(Sender: TObject);
begin
  inherited;
  var inifile := TIniFile.Create(Goo.SystemDataPath+'\Daterecord.ini');
  try
    inifile.WriteBool(LayoutFileName,'chk_OnlyRX',chk_OnlyRX.Checked);
    inifile.WriteBool(LayoutFileName,'chk_OnlyBuyer',chk_OnlyBuyer.Checked);
    inifile.WriteBool(LayoutFileName,'chk_AutoOpen',chk_AutoOpen.Checked);
  finally
    inifile.Free;
  end;
  if StrToIntDef(edt_Minute.Text,0)<10 then edt_Minute.Text := '10'; 
  Timer1.Enabled   := False;
  Timer1.Interval  := StrToIntDef(edt_Minute.Text,0) * 1000 * 60;
  btn_Find.Enabled := not chk_AutoOpen.Checked;
  btn_Upload.Enabled := not chk_AutoOpen.Checked;
  btn_allUpLoad.Enabled := not chk_AutoOpen.Checked;
  if not chk_AutoOpen.Checked then Exit;
  PageControl1.ActivePageIndex := 1;
  Timer1.Enabled := True;
end;

function TTransBill.DataSetToJSON(DataSet: TDataSet): TJSONArray;
var
  Field: TField;
  Row: TJSONObject;
begin
  Result := TJSONArray.Create;
  DataSet.DisableControls;
  try
    DataSet.First;
    while not DataSet.Eof do
    begin
      Row := TJSONObject.Create;
      try
        for Field in DataSet.Fields do
        begin
          if Field.FullName='AppKey' then Continue;
          if Field.FullName='Password' then Continue;
          if Field.FullName='billid' then Continue;
          if Field.FullName='ord' then Continue;  
          if Field.FullName='BillCode' then Continue;
          Row.AddPair(Field.FieldName, Field.AsString);
        end;
        Result.AddElement(Row);
      except
        Row.Free;
        raise;
      end;
      DataSet.Next;
    end;
  finally
    DataSet.EnableControls;
  end;
end;

function TTransBill.DBGridToJSON(DataSet: TDataSet): TJSONArray;
var
  Field: TField;
  Row: TJSONObject;
begin
  Result := TJSONArray.Create;
  DataSet.DisableControls;
  try
    //DataSet.First;
    //while not DataSet.Eof do
    //begin
      Row := TJSONObject.Create;
      try
        for Field in DataSet.Fields do
        begin
          if Field.FullName='AppKey' then Continue;
          if Field.FullName='Password' then Continue;
          if Field.FullName='billid' then Continue;
          if Field.FullName='ord' then Continue;
          if Field.FullName='BillCode' then Continue;
          Row.AddPair(Field.FieldName, Field.AsString);
        end;
        Result.AddElement(Row);
      except
        Row.Free;
        raise;
      end;
      //DataSet.Next;
    //end;
  finally
    DataSet.EnableControls;
  end;
end;

procedure TTransBill.DoPrintBtnEvent;
begin
  //inherited;
  PrintItems.Add('门店',edt_PosID.Text);
  PrintDetailData := MainDataSet.Data;
  PrintItems.Add('开始时间',dtp_bgndate.Date);
  PrintItems.Add('结束时间',dtp_enddate.DateTime);
  inherited;
  {var ReportIntf := crReportIntf.CreateReport;
  try
    with ReportIntf do
    begin
      //ReportIntf.OwnerAppHandle := Application.Handle; // 本行可选
      ReportIntf.MasterData := PrintItems.SaveToData; // 传入主表数据
      ReportIntf.DetailData := PrintDetailData; // 传入明细数据
//      ReportIntf.DetailDataSet := MainDataSet;
      ReportIntf.TemplateName := self.Caption;
      if False then
      begin
        ShowPrintDialog := False;
        ReportIntf.Print;
      end
      else
      ReportIntf.Execute;
    end;
    // 如果需要返回值，可以取属性 LastErrorCode
  finally
    ReportIntf := nil;
  end;}
end;

procedure TTransBill.edt_PosIDKeyPress(Sender: TObject; var Key: Char);
begin
  inherited;
  case key of
    #13:edt_PosIDRightButtonClick(Sender);
    #46,#8:edt_PosID.Tag := 0;
  end;
end;

procedure TTransBill.edt_PosIDRightButtonClick(Sender: TObject);
var AParamList:TParamList;
begin
  inherited;
  AParamList := TParamList.Create;
  try
    if Goo.Reg.ShowModal('TPosInfoSelect',AParamList)<>mrOk then Exit;
    edt_PosID.Tag  := AParamList.AsInteger('@PosID');
    edt_PosID.Text := AParamList.AsString('@PosName');
  finally
    AParamList.Free;
  end;
end;

procedure TTransBill.FormShow(Sender: TObject);
begin
  inherited;
  dtp_bgndate.Date := StrToDate(FormatDateTime('yyyy-mm-01',Now));
  dtp_enddate.Date := Now;
  //读取文件配置
  var inifile := TIniFile.Create(Goo.SystemDataPath+'\Daterecord.ini');
  try
    chk_OnlyRX.Checked    := inifile.ReadBool(LayoutFileName,'chk_OnlyRX',False);
    chk_OnlyBuyer.Checked := inifile.ReadBool(LayoutFileName,'chk_OnlyBuyer',False);
    chk_AutoOpen.Checked  := inifile.ReadBool(LayoutFileName,'chk_AutoOpen',False);
  finally
    inifile.Free;
  end;
  with DBGrid1.Columns.Add do
  begin
    FieldName := 'drugType';
    Width := 80;
    Title.Caption := '医保类型';
  end;
  with DBGrid1.Columns.Add do
  begin
    FieldName := 'drugName';
    Width := 100;
    Title.Caption := '药品名称';
  end;
    with DBGrid1.Columns.Add do
  begin
    FieldName := 'quantity';
    Width := 80;
    Title.Caption := '数量';
  end;
  with DBGrid1.Columns.Add do
  begin
    FieldName := 'purchaserName';
    Width := 80;
    Title.Caption := '购药人';
  end;
  with DBGrid1.Columns.Add do
  begin
    FieldName := 'purchaserld';
    Width := 80;
    Title.Caption := '身份证';
  end;
  with DBGrid1.Columns.Add do
  begin
    FieldName := 'purchaserPhone';
    Width := 80;
    Title.Caption := '电话';
  end;
  with DBGrid1.Columns.Add do
  begin
    FieldName := 'purchaserResidence';
    Width := 80;
    Title.Caption := '住址';
  end;
  //drugstoreName=pos.StoreName,--药店名称
  with DBGrid1.Columns.Add do
  begin
    FieldName := 'drugstoreName';
    Width := 80;
    Title.Caption := '药店名称';
  end;
	//pos.AppKey,
  with DBGrid1.Columns.Add do
  begin
    FieldName := 'AppKey';
    Width := 80;
    Title.Caption := '授权码';
  end;
	//drugstoreTyshxydm=pos.StoreCode,--社会统一信用代码
  with DBGrid1.Columns.Add do
  begin
    FieldName := 'drugstoreTyshxydm';
    Width := 80;
    Title.Caption := '社会统一信息用代码';
  end;
	//saleTime=i.BillDate,
  with DBGrid1.Columns.Add do
  begin
    FieldName := 'saleTime';
    Width := 80;
    Title.Caption := '销售时间';
  end;
	//approvalNo=p.PermitNo,
  with DBGrid1.Columns.Add do
  begin
    FieldName := 'approvalNo';
    Width := 80;
    Title.Caption := '批准文号';
  end;
	//dataSource='1'				--数据来源（1 ERP系统对接，2互联网采集，3其它)
  with DBGrid1.Columns.Add do
  begin
    FieldName := 'dataSource';
    Width := 80;
    Title.Caption := '数据来源';
  end;
  with DBGrid1.Columns.Add do
  begin
    FieldName := 'BillID';
    Width := 80;
    Title.Caption := 'BillID';
    Visible := False;
  end;
  with DBGrid1.Columns.Add do
  begin
    FieldName := 'ORD';
    Width := 80;
    Title.Caption := 'ORD';
    Visible := False;
  end;
end;

{ TTransBill }

function TTransBill.GetPrintDate: OleVariant;
var ds:TClientDataSet;
begin
  Result := Null;
  if not MainDataSet.Active then Exit;
  ds := TClientDataSet.Create(nil);
  try
    for var i := 0 to DBGrid1.Columns.Count-1 do
    begin
      if not DBGrid1.Columns[i].Visible then Continue;
      ds.FieldDefs.Add(DBGrid1.Columns[i].Title.Caption,ftString,200);
    end;
    ds.CreateDataSet;
  finally
    ds.Free;
  end;
end;

function TTransBill.GetToken(const loginid,password:string): string;
begin
  Result := Post('token/getToken',format('{"loginId":"%s","password":"%s"}',[loginid,password]));
end;

function TTransBill.Post(url,injson: string; header: TParamList): string;
var RESTClient1: TRESTClient;
    RESTRequest1: TRESTRequest;
    RESTResponse1: TRESTResponse;
begin
  Result := EmptyStr;
  AddLog('injson='+injson);
  RESTClient1:= TRESTClient.Create('https://sly.yjj.gansu.gov.cn:8100/'+url);
  RESTRequest1:= TRESTRequest.Create(nil);
  RESTResponse1:= TRESTResponse.Create(nil);
  try
    var LSecProts: THTTPSecureProtocols := [THTTPSecureProtocol.SSL2, THTTPSecureProtocol.SSL3, THTTPSecureProtocol.TLS1, THTTPSecureProtocol.TLS11, THTTPSecureProtocol.TLS12, THTTPSecureProtocol.TLS13];
    //RESTClient1.SecureProtocols := LSecProts;
    RESTClient1.Accept          := 'application/json;q=0.9,text/plain;q=0.9,text/html';
    RESTClient1.AcceptCharset   := 'UTF-8';
    RESTRequest1.AssignedValues := [TCustomRESTRequest.TAssignedValue.rvAccept,
        TCustomRESTRequest.TAssignedValue.rvAcceptCharset, TCustomRESTRequest.TAssignedValue.rvConnectTimeout,
        TCustomRESTRequest.TAssignedValue.rvReadTimeout];
    RESTRequest1.Client  := RESTClient1;
    RESTRequest1.Response:= RESTResponse1;
    RESTRequest1.Timeout := 0;
    RESTRequest1.Method  :=rmPOST;
    if Assigned(header) then
    begin
      for var p in header do
      begin
        //RESTClient1.Params.AddHeader(p.Key,p.Value.AsString);
        //RESTClient1.AddParameter(p.Key,p.Value.AsString,TRESTRequestParameterKind.pkHTTPHEADER);
        //RESTRequest1.Params.AddHeader(p.Key,p.Value.AsString);
        RESTRequest1.AddParameter(p.Key,p.Value.AsString,TRESTRequestParameterKind.pkHTTPHEADER,[poDoNotEncode]);
        //RESTRequest1.AddParameter(ParamJson.Pairs[J].JsonString.Value,ParamJson.Pairs[J].JSONValue.Value,TRESTRequestParameterKind.pkHTTPHEADER,[poDoNotEncode]);
      end;
    end;
//    RESTRequest1.AddParameter('<Name>','<Value>',TRESTRequestParameterKind.pkHTTPHEADER);
    RESTRequest1.AddBody(injson,ContentTypeFromString(CONTENTTYPE_APPLICATION_JSON));
    RESTRequest1.Execute;
    var outjson := RESTResponse1.Content;
    AddLog('outjson='+outjson);
    var json := TJSONObject.ParseJSONValue(outjson);
    try
      FLastErrorCode := json.GetValue<Integer>('code');
      FLastErrorMsg  := json.GetValue<string>('msg');
      FLastErrorData := json.GetValue<string>('data');
      if not SameText(FLastErrorMsg,'success') then Exit;
      Result := json.GetValue<string>('data');
    finally
      json.Free;
    end;
  finally
    RESTClient1.Free;
    RESTRequest1.Free;
    RESTResponse1.Free;
  end;
end;

function TTransBill.salesaledata(DataSet: TDataSet): Boolean;
var AParam:TParamList;
  json:TJSONArray;
  _loginId,_password,_appKey:string;
  _billid,_ord:Integer;
begin
  inherited;
  Result := False;
  if not DataSet.Active then Exit;
  if DataSet.RecordCount=0 then Exit;
  //{"loginId":"91621122MA7410UY83","password":"Xx0eWQHGgcvYlLDUCHj8Rw=="}
  _appKey   := DataSet.FieldByName('AppKey').AsString;
  _loginId  := DataSet.FieldByName('drugstoreTyshxydm').AsString;
  _password := DataSet.FieldByName('Password').AsString;
  _billid   := DataSet.FieldByName('billid').AsInteger;
  _ord      := DataSet.FieldByName('ord').AsInteger;
  goo.Msg.CheckAndAbort(Goo.Cert.CheckRegistered(1660193135694123009,_loginId));
  var token := GetToken(_loginId,_password);
  Result := token<>EmptyStr;
  if not Result then Exit;    
  AParam := TParamList.Create;
  json := DBGridToJSON(DataSet);
  try
    AParam.Add('Authorization',token);
    AParam.Add('appKey',_appKey);   //'0PacHbe5GNFM02tzAe+FmUW5GNL1fSmLvMzLFohszjI='
    var data := Post('api/v1/saveSaleData',json.ToString,AParam);
    Result := FLastErrorCode=200;
    if not Result then Exit;
    goo.DB.Lock;
    try
      goo.DB.ExecSQL('INSERT INTO dbo.SPDA_TransBillRecord(BillID,Ord,DoDate,out_code,out_msg)VALUES(%d,%d,GETDATE(),%d,''%s'')',[_billid,_ord,FLastErrorCode,FLastErrorMsg]);
    finally
      goo.DB.UnLock;
    end;
  finally
    json.Free;
    AParam.Free;
  end;
end;

class function TTransBill.ShowSalesaledata(AParam: TParamList): Boolean;
begin
  ShowMessage('OK');
end;

procedure TTransBill.Timer1Timer(Sender: TObject);
const aryIntBool:array[boolean]of integer=(0,1);
begin
  inherited;
  var ds := TClientDataSet.Create(nil);
  try
    Goo.DB.Lock;
    try
      Goo.DB.OpenProc('GP_SPDA_QueryBill',['@PosID','@BgnDate','@EndDate','@Day','@OnlyRX'],[edt_PosID.Tag,dtp_bgndate.Date,dtp_enddate.Date,strtointdef(edt_day.Text,2),aryIntBool[chk_OnlyRX.Checked]],ds);
    finally
      Goo.DB.UnLock;
    end;
    while not ds.Eof do
    begin
      try
        Salesaledata(ds);
      except
        Memo_Log.Lines.Add(Format('%s %s：%s %d:%s,%s',[FormatDateTime('yyyy-mm-dd hh:nn:ss', Now),ds.FieldValues['BillCode'],ds.FieldValues['drugName'],500,'导入异','']));
      end;
      Memo_Log.Lines.Add(Format('%s %s：%s %d:%s,%s',[FormatDateTime('yyyy-mm-dd hh:nn:ss', Now),ds.FieldValues['BillCode'],ds.FieldValues['drugName'],FLastErrorCode,FLastErrorMsg,FLastErrorData]));
      ds.Next;      
    end;    
  finally
    ds.Free;
  end;
end;

initialization
  Goo.Reg.FirstRunClass := TTransBill.ClassName;
  Goo.Reg.RegisterClass(TTransBill);
  Goo.Reg.RegisterClass('ShowSalesaledata',TTransBill.ShowSalesaledata)
end.
