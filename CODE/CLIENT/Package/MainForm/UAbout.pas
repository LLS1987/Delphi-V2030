unit UAbout;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.ExtCtrls, Vcl.ComCtrls, Vcl.StdCtrls;

type
  TAbout = class(TForm)
    Panel1: TPanel;
    ListView_FileVer: TListView;
    Panel2: TPanel;
    lbl_Version: TLabel;
    btn_Close: TButton;
    btn_Update: TButton;
    procedure btn_CloseClick(Sender: TObject);
    procedure btn_UpdateClick(Sender: TObject);
    procedure FormShow(Sender: TObject);
  private
    { Private declarations }
    function FileVersion(const FileName: string): string;
  public
    { Public declarations }
  end;

function ShowAbout:Boolean;

implementation

uses
  UComvar, UPackageManage, Winapi.ShellAPI;

{$R *.dfm}

function ShowAbout:Boolean;
begin
  var ff := TAbout.Create(nil);
  try
    Result := ff.ShowModal = mrOk;
  finally
    ff.Free;
  end;
end;

procedure TAbout.btn_CloseClick(Sender: TObject);
begin
  Close;
end;

procedure TAbout.btn_UpdateClick(Sender: TObject);
begin
  var AParam:string := Format('AppVersion %s AppID %s AppName %s AppUpdateUrl %s',[FileVersion(Application.ExeName),'GanSuSPDA','∏ À‡“©º‡Ω”ø⁄','http://36.138.76.225:5005/winapp/gansu_spda/updater.json']);
  ShellExecute(0, 'open', 'DUpdate.exe', PWideChar(AParam), '', SW_SHOW);
end;

procedure TAbout.FormShow(Sender: TObject);
var AList:TStrings;
begin
  Panel1.Color := RGB(133,193,95);
  Panel1.Caption := Application.Title;
  lbl_Version.Caption := 'V ' + FileVersion(Application.ExeName);
  if not FileExists(Goo.SystemPath +'\' + C_PackageList_Name) then exit;
  AList := TStringList.Create;
  try
    AList.LoadFromFile(Goo.SystemPath +'\' + C_PackageList_Name);
    for var i := 0 to AList.Count-1 do
    begin
      if not FileExists(Goo.SystemPath +'\' + AList.Strings[i]) then Continue;
      with ListView_FileVer.items.add do
      begin
        Caption := AList.Strings[i];
        subitems.add(FileVersion(Goo.SystemPath +'\' + AList.Strings[i]));
      end;
    end;
  finally
    AList.Free;
  end;
    
end;

function TAbout.FileVersion(const FileName: string): string;
var
  Size: DWORD;
  Buffer: Pointer;
  FileInfo: PVSFixedFileInfo;
  FileInfoSize: UINT;
begin
  Result := EmptyStr;
  Size := GetFileVersionInfoSize(PChar(FileName), Size);
  if Size = 0 then Exit;
  GetMem(Buffer, Size);
  try
    if GetFileVersionInfo(PChar(FileName), 0, Size, Buffer) then
    begin
      //if VerQueryValue(Buffer, PChar( LookupString + 'FileVersion' ), Pointer( Value ), Len ) then  AFileVersion := Value;
      if VerQueryValue(Buffer, '\', Pointer(FileInfo), FileInfoSize) then
      begin
        Result := Format('%d.%d.%d.%d', [HiWord(FileInfo.dwFileVersionMS),LoWord(FileInfo.dwFileVersionMS),HiWord(FileInfo.dwFileVersionLS),LoWord(FileInfo.dwFileVersionLS)]);
      end;
    end;
  finally
    FreeMem(Buffer);
  end;


end;

end.
