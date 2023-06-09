unit UPackageManage;
{
  应用中心插件管理，Created@2016-04-27  by lls
}
interface
uses
  Windows,//HMODULE
  Classes, //TStringList
  Forms, //Application
  SysUtils;//ExtractFilePath
const
  SUBDIR_PlgApp='\PlgApp';
  SUBDIR_PlgSys=SUBDIR_PlgApp+'\sys';
type
  TPackageLoad = procedure;
  TGetPackageInfoClass = function:string;

  TPackageManage = class
  private
    //    FPkgList:TStrings;
    FPkgHandleArray:array of THandle;
    function CheckPkgVersion(APath: string): boolean;
    procedure InnerUnLoadPkg;
    function LoadOnePackage(const AName:string): HMODULE;
    procedure UnLoadAllPackge;
  protected
    procedure UnloadModuleFormInstances(AModule: Integer);
  public
    constructor Create;
    destructor Destroy; override;
    procedure APPRun;
    procedure LoadPkg;
  end;

var QFPackage:TPackageManage=nil;
const
  C_PackageList_Name = 'PackageList.Dat';



implementation


uses uMainClient, Graphics,UComConst, UComVar;

{ TPackageManage }

procedure TPackageManage.APPRun;

begin
  try
    loadpkg;
    Application.CreateForm(TMainClient, MainClient);
    //if FileExists(GetSystemPath+'/ModifyIEMaxScript.bat') then WinExec(PChar(GetSystemPath+'/ModifyIEMaxScript.bat'), SW_HIDE);
//    DecimalSeparator := '.';
//    DateSeparator := '-';
//    ShortDateFormat := 'yyyy-MM-dd';
//    LongDateFormat := 'yyyy-MM-dd';
    Application.Run;
  finally
    Application.OnException:=nil;
    MainClient.ClearAllMDIForm;
    //globalobject.RegClassFactory.ClearPkgInfo;
    UnLoadAllPackge;
  end;
end;

function TPackageManage.CheckPkgVersion(APath: string): boolean;
var     AFileVersion,
    AProductVersion: string;
    ACompanyName:string;
    AFileDescription:String;
    AMSG:string;
begin
  Result := False;
end;

constructor TPackageManage.Create;
begin
  //GlobalObject.PackageList := TStringList.Create;
end;

destructor TPackageManage.Destroy;
begin
  FreeGlobalObject;
  InnerUnLoadPkg;
  inherited;
end;

procedure TPackageManage.InnerUnLoadPkg;
var
  i:Integer;
begin
  for i:=Low(FPkgHandleArray) to High(FPkgHandleArray) do
    if FPkgHandleArray[i]>0 then UnloadPackage(FPkgHandleArray[i]);
end;

function TPackageManage.LoadOnePackage(const AName:string): HMODULE;
var APath:string;
    AClass:TGetPackageInfoClass;
begin
  Result := 0;
  APath := ExtractFilePath(Application.ExeName) + AName;
  if not FileExists(APath) then exit;
  //CheckPkgVersion(APath);
  try
    Result := LoadPackage(APath);
  except
  end;
end;

procedure TPackageManage.LoadPkg;
var APath:string;
  AList:TStrings;
  i:integer;
  ACompanyName:string;
  AFileDescription:String;
begin
  APath := ExtractFilePath(Application.ExeName);
  if not FileExists(APath + C_PackageList_Name) then exit;
  AList := TStringList.Create; 
  try
    AList.LoadFromFile(APath + C_PackageList_Name);
    SetLength(FPkgHandleArray,AList.Count);
    for i := 0 to AList.Count-1 do
    begin
      FPkgHandleArray[i] := LoadOnePackage(AList.Strings[i]);
    end;
  finally
    AList.Free;
  end;
end;

procedure TPackageManage.UnLoadAllPackge;
var i:integer;
begin

end;

procedure TPackageManage.UnloadModuleFormInstances(AModule: Integer);
var i: integer;
begin
  with Application do
    for i := ComponentCount - 1 downto 0 do
      if FindClassHInstance(Components[i].ClassType) = AModule then
        Components[i].Free;
end;

end.
