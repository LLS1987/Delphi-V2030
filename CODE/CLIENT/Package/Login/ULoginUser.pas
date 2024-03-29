unit ULoginUser;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.Buttons, Vcl.Mask,
  Vcl.ExtCtrls, Vcl.DBCtrls,UBaseDialogForm, System.ImageList, Vcl.ImgList,
  System.Actions, Vcl.ActnList, Data.DB, Datasnap.DBClient, Vcl.FileCtrl,
  Vcl.ComCtrls, Vcl.Imaging.jpeg, cxStyles, cxClasses;

type
  TLoginUser = class(TBaseDialogForm)
    LabeledEdit1: TLabeledEdit;
    edt_Pass: TLabeledEdit;
    btn_Login: TBitBtn;
    BitBtn2: TBitBtn;
    Image1: TImage;
    ds_USerList: TClientDataSet;
    DataSource1: TDataSource;
    cob_USerList: TComboBox;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    procedure FormCreate(Sender: TObject);
    procedure btn_LoginClick(Sender: TObject);
  private
    { Private declarations }
    FLastLoginUser:Integer;
  public
    { Public declarations }
  end;

var
  LoginUser: TLoginUser;

implementation

uses
  UComvar, System.IniFiles;

{$R *.dfm}

procedure TLoginUser.FormCreate(Sender: TObject);
begin
  inherited;
  var ini := TIniFile.Create(ExtractFilePath(Application.ExeName)+'Config.ini');
  try
    FLastLoginUser    := ini.ReadInteger('LOGIN','LastLoginUser',0);
  finally
    ini.Free;
  end;
  Goo.DB.OpenSQL('SELECT e.REC,e.UserCode,e.FullName,CAST(l.password AS VARCHAR(10)) AS password FROM dbo.loginuser l INNER JOIN dbo.Employee e ON e.REC=l.ERec WHERE e.deleted=0',ds_USerList);
  if ds_USerList.Active and (ds_USerList.RecordCount>0) then
  begin
    while not ds_USerList.Eof do
    begin
      cob_USerList.Items.AddObject(ds_USerList.FieldValues['FullName'],TObject(ds_USerList.FieldByName('REC').AsInteger));
      ds_USerList.Next;
    end;
    cob_USerList.ItemIndex := 0;
    var index := cob_USerList.Items.IndexOfObject(TObject(FLastLoginUser));
    if index>0 then cob_USerList.ItemIndex := index;
    
  end;
end;

procedure TLoginUser.btn_LoginClick(Sender: TObject);
begin
  inherited;
  var erec := Integer(cob_USerList.Items.Objects[cob_USerList.ItemIndex]);
  if not ds_USerList.Locate('REC',erec,[]) then Exit;  
  var pass := ds_USerList.FieldValues['password'];
  Goo.Msg.CheckAndAbort(pass=edt_Pass.Text,'����¼�����');
  Self.ParamList.Add('@LoginUserRec',ds_USerList.FieldByName('REC').AsInteger);
  Self.ParamList.Add('@LoginUserCode',ds_USerList.FieldByName('UserCode').AsString);
  Self.ParamList.Add('@LoginUserName',ds_USerList.FieldByName('FullName').AsString);
  var ini := TIniFile.Create(ExtractFilePath(Application.ExeName)+'Config.ini');
  try
    ini.WriteInteger('LOGIN','LastLoginUser',erec);
  finally
    ini.Free;
  end;
  ModalResult := mrOk;
end;

initialization
  Goo.Reg.RegisterClass(TLoginUser);

end.
