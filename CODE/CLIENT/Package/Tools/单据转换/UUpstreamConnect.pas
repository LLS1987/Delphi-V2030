unit UUpstreamConnect;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UBaseDialogForm, cxStyles, cxClasses,
  System.ImageList, Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.StdCtrls,
  Vcl.Mask, Vcl.ExtCtrls, UComDB;

type
  TUpstreamConnect = class(TBaseDialogForm)
    edt_DBAddr: TLabeledEdit;
    edt_DBSa: TLabeledEdit;
    edt_DBPass: TLabeledEdit;
    edt_DBName: TLabeledEdit;
    Panel1: TPanel;
    btn_OK: TButton;
    Button2: TButton;
    procedure btn_OKClick(Sender: TObject);
  private
    { Private declarations }
  public
    procedure BeforeFormShow; override;
  end;
  function UpStreamDB: TDataBaseCommObject;

var
  UpstreamConnect: TUpstreamConnect;
  FStreamDBObject:TDataBaseCommObject;

implementation

uses
  UComvar, System.IniFiles;

{$R *.dfm}

function UpStreamDB: TDataBaseCommObject;
var AHostName,AUserName,APassword,ADBName:string;
begin
  with TIniFile.Create(Goo.SystemDataPath+'\Daterecord.ini') do
  begin
    AHostName := ReadString('TUpstreamConnect','HostName',EmptyStr);
    AUserName := ReadString('TUpstreamConnect','UserName',EmptyStr);
    APassword := ReadString('TUpstreamConnect','Password',EmptyStr);
    ADBName := ReadString('TUpstreamConnect','DataBaseName',EmptyStr);
    Free;
  end;
  Goo.Msg.CheckAndAbort((AHostName<>EmptyStr) and (AUserName<>EmptyStr),'请先配置数据库连接信息！');
  if not Assigned(FStreamDBObject) then
  begin
    FStreamDBObject := TDataBaseCommObject.Create;
    try
      FStreamDBObject.ConnectType := dbctRemote;
      FStreamDBObject.HostName := AHostName;
      FStreamDBObject.UserName := AUserName;
      FStreamDBObject.Password := APassword;
      FStreamDBObject.Connected:= True;
      Goo.Msg.CheckAndAbort(FStreamDBObject.ChangeDataBase(ADBName),'账套切换不成功！');
    except
      Goo.MSG.ShowError('数据库连接错误！');
    end;
  end;
  Result := FStreamDBObject;
end;

procedure TUpstreamConnect.BeforeFormShow;
begin
  inherited;
  with TIniFile.Create(Goo.SystemDataPath+'\Daterecord.ini') do
  begin
    edt_DBAddr.Text := ReadString('TUpstreamConnect','HostName',EmptyStr);
    edt_DBSa.Text   := ReadString('TUpstreamConnect','UserName',EmptyStr);
    edt_DBPass.Text := ReadString('TUpstreamConnect','Password',EmptyStr);
    edt_DBName.Text := ReadString('TUpstreamConnect','DataBaseName',EmptyStr);
    Free;
  end;
end;

procedure TUpstreamConnect.btn_OKClick(Sender: TObject);
begin
  inherited;  //创建数据库连接
  if not Assigned(FStreamDBObject) then FStreamDBObject := TDataBaseCommObject.Create;
  //if not Goo.ComVar.ContainsKey('') then Goo.ComVar.Add('',FDBObject);
  try
    FStreamDBObject.ConnectType := dbctLocal;
    FStreamDBObject.HostName := Trim(edt_DBAddr.Text);
    FStreamDBObject.UserName := Trim(edt_DBSa.Text);
    FStreamDBObject.Password := Trim(edt_DBPass.Text);
    FStreamDBObject.Connected:= True;
    Goo.Msg.CheckAndAbort(FStreamDBObject.ChangeDataBase(Trim(edt_DBName.Text)),'账套切换不成功！');
    ModalResult := mrOk;
    with TIniFile.Create(Goo.SystemDataPath+'\Daterecord.ini') do
    begin
      WriteString(self.ClassName,'HostName',edt_DBAddr.Text);
      WriteString(self.ClassName,'UserName',edt_DBSa.Text);
      WriteString(self.ClassName,'Password',edt_DBPass.Text);
      WriteString(self.ClassName,'DataBaseName',edt_DBName.Text);
      Free;
    end;
  except
    Goo.MSG.ShowError('数据库连接错误！');
  end;
end;

initialization
  Goo.Reg.RegisterClass(TUpstreamConnect);

finalization
  if Assigned(FStreamDBObject) then FreeAndNil(FStreamDBObject);

end.
