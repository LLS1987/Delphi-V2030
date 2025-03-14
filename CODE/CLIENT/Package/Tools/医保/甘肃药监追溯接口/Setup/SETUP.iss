; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "千方百剂 甘肃药监接口"
#define MyAppVersion "1.0.2.0"
#define MyProductVersion "2023.08.19"
#define MyAppPublisher "成都任我行千方百剂软件有限公司"
#define MyAppURL "http://www.rwxqfbj.com/"
#define MyAppExeName "DClient.exe"
#define MyAppLoggedName "甘肃药监接口"

[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{1BE7246B-0BD4-4E01-82E2-637660478B6C}}
AppName={#MyAppName}
AppVersion={#MyProductVersion}
AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultGroupName=千方百剂软件
DefaultDirName={sd}\Weway\QianFang\GSFDA
;DefaultDirName=D:\Weway\QianFang\WebServer
DisableDirPage=false
DisableProgramGroupPage=yes
Uninstallable=true
OutputDir=.\Output
OutputBaseFilename=千方百剂 甘肃药监接口 安装程序
LicenseFile=.\许可协议.txt
SetupIconFile=.\App.ico
Compression=lzma
SolidCompression=yes
VersionInfoVersion={#MyAppVersion}
VersionInfoCopyright={#MyAppPublisher}

[Languages]
Name: chinese; MessagesFile: Chinese.isl; 

[LangOptions]
WelcomeFontSize=14
CopyrightFontSize=14
LanguageName=Chinese
LanguageID=$0804
DialogFontName=宋体
DialogFontSize=9
WelcomeFontName=宋体
WelcomeFontSize=12
TitleFontName=宋体
TitleFontSize=29
CopyrightFontName=宋体                                   
CopyrightFontSize=9

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}";

[Files]
Source: ..\..\..\..\RELEASE\*.*; DestDir: {app}; Flags: ignoreversion; 
//Source: ..\..\..\..\RELEASE\SQL\*.*; DestDir: {app}\SQL; Flags: ignoreversion; 
Source: ..\..\..\..\RELEASE\SQL\*.*; DestDir: {app}\SQL\; 
Source: ..\..\..\..\RELEASE\Layout\*.*; DestDir: {app}\Layout\; 
Source: RELEASE\Layout\*.*; DestDir: {app}\Layout\;
Source: ..\..\..\..\..\..\..\Runtimes\BPL\*.*; DestDir: {app}; 
Source: ..\..\..\..\..\..\..\Runtimes\PRINT\*.*; DestDir: {app}; 

[Icons]
Name: "{group}\千方百剂 甘肃药监接口\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; WorkingDir: "{app}"
Name: "{group}\千方百剂 甘肃药监接口\卸载 {#MyAppName}"; Filename: "{uninstallexe}"; IconIndex: -1
Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon
Name: "{userstartup}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon

[Messages]  
BeveledLabel = {#MyAppPublisher}
ConfirmUninstall = "您真的想要从电脑中卸载“{#MyAppName}”吗？按“是”则完全删除 %1 以及它的所有组件; 按 “否”则让软件继续留在您的电脑上。"

[Registry]  
Root: HKLM ;SubKey:"Software\{#MyAppName}";ValueType:dword;ValueName:config;ValueData:10 ;Flags:uninsdeletevalue

[Code]
//全局变量
const 
  WM_CLOSE=$0010;
var
  IsRunning: Integer;

// 程序是否运行或在登录中
function GetLogedOrLoggingWindow() : Integer; 
begin
  result := FindWindowByWindowName('{#MyAppName}');
  if(result = 0) then
  begin
    result := FindWindowByWindowName('{#MyAppLoggedName}');  
  end;
end;

// 检测 .Net Framework 指定版本是否已安装
function IsDotNetDetected(version: string; service: cardinal): boolean;
// Indicates whether the specified version and service pack of the .NET Framework is installed.
//
// version -- Specify one of these strings for the required .NET Framework version:
//    'v1.1'          .NET Framework 1.1
//    'v2.0'          .NET Framework 2.0
//    'v3.0'          .NET Framework 3.0
//    'v3.5'          .NET Framework 3.5
//    'v4\Client'     .NET Framework 4.0 Client Profile
//    'v4\Full'       .NET Framework 4.0 Full Installation
//    'v4.5'          .NET Framework 4.5
//    'v4.5.1'        .NET Framework 4.5.1
//    'v4.5.2'        .NET Framework 4.5.2
//    'v4.6'          .NET Framework 4.6
//    'v4.6.1'        .NET Framework 4.6.1
//    'v4.6.2'        .NET Framework 4.6.2
//
// service -- Specify any non-negative integer for the required service pack level:
//    0               No service packs required
//    1, 2, etc.      Service pack 1, 2, etc. required
var
    key, versionKey: string;
    install, release, serviceCount, versionRelease: cardinal;
    success: boolean;
begin
    versionKey := version;
    versionRelease := 0;

    // .NET 1.1 and 2.0 embed release number in version key
    if version = 'v1.1' then begin
        versionKey := 'v1.1.4322';
    end else if version = 'v2.0' then begin
        versionKey := 'v2.0.50727';
    end

    // .NET 4.5 and newer install as update to .NET 4.0 Full
    else if Pos('v4.', version) = 1 then begin
        versionKey := 'v4\Full';
        case version of
          'v4.5':   versionRelease := 378389;
          'v4.5.1': versionRelease := 378675; // 378758 on Windows 8 and older
          'v4.5.2': versionRelease := 379893;
          'v4.6':   versionRelease := 393295; // 393297 on Windows 8.1 and older
          'v4.6.1': versionRelease := 394254; // 394271 on Windows 8.1 and older
          'v4.6.2': versionRelease := 394802; // 394806 on Windows 8.1 and older
        end;
    end;

    // installation key group for all .NET versions
    key := 'SOFTWARE\Microsoft\NET Framework Setup\NDP\' + versionKey;

    // .NET 3.0 uses value InstallSuccess in subkey Setup
    if Pos('v3.0', version) = 1 then begin
        success := RegQueryDWordValue(HKLM, key + '\Setup', 'InstallSuccess', install);
    end else begin
        success := RegQueryDWordValue(HKLM, key, 'Install', install);
    end;

    // .NET 4.0 and newer use value Servicing instead of SP
    if Pos('v4', version) = 1 then begin
        success := success and RegQueryDWordValue(HKLM, key, 'Servicing', serviceCount);
    end else begin
        success := success and RegQueryDWordValue(HKLM, key, 'SP', serviceCount);
    end;

    // .NET 4.5 and newer use additional value Release
    if versionRelease > 0 then begin
        success := success and RegQueryDWordValue(HKLM, key, 'Release', release);
        success := success and (release >= versionRelease);
    end;

    result := success and (install = 1) and (serviceCount >= service);
end;

// 检测 .Net Framework 4.6.2 安装环境，并安装 .Net 框架
function CheckDotNetFramework(): Boolean;
var 
  ResultCode: Integer;
  lPath, dotNetV4PackFile: string;
begin  
  if IsDotNetDetected('v4.6.2', 0) then 
  begin 
    Result := true; 
  end 
  else 
  begin 
    ExtractTemporaryFile('dotNetFx462.exe'); 
    dotNetV4PackFile := '{tmp}\dotNetFx462.exe';
    
    if MsgBox('安装程序检测到您的 Windows 操作系统没有安装 .Net Framework 4.6.2，是否立刻下载安装？', mbConfirmation, MB_YESNO) = idYes then     
    begin
      lPath := ExpandConstant(dotNetV4PackFile);
      if (FileOrDirExists(lPath)) then 
      begin
        Exec(lPath, '/norestart', '', SW_SHOWNORMAL, ewWaitUntilTerminated, ResultCode);
        Result := true;
      end
      else 
      begin                                                                                       
        if MsgBox('软件安装目录中没有 .Net Framework的安装程序，' #13#13 '单击“是”跳过 .Net Framework 4.6.2 安装，“否”将退出安装。', mbConfirmation, MB_YESNO) = idYes then 
        begin
          Result := true;
        end
        else 
        begin
          MsgBox('没有安装 .Net Framework 4.6.2 环境，无法继续进行“千方百剂 Web 服务管理器”的安装，安装程序即将退出。', mbInformation, MB_OK);
          Result := false;
        end;
      end;
    end
    else 
    begin      
      Result := false;
    end;
  end; 
end;

// 卸载之前的安装版本
function UninstallBefore(): Integer;
var 
  ResultCode: Integer;
  lUninstallFile: String;
begin
  ResultCode := -1;
  lUninstallFile := '';
  RegQueryStringValue(HKLM, 'SOFTWARE\Wow6432Node\Microsoft\Windows\CurrentVersion\Uninstall\{F1F79261-517F-4F49-9E20-AB84628AF7D3}_is1', 'UninstallString', lUninstallFile);
  StringChangeEx(lUninstallFile, '"', '', True);
  if(FileExists(lUninstallFile)) then 
  begin
    Exec(lUninstallFile, '/norestart', ExtractFilePath(lUninstallFile), SW_SHOWNORMAL, ewWaitUntilTerminated, ResultCode);
  end;
  Result := ResultCode;
end;

//初始化程序事件   
function InitializeSetup(): Boolean;
var
  lRegPath: string;
begin  
  Result := true; //安装程序继续  
  IsRunning := GetLogedOrLoggingWindow();
  while IsRunning <> 0 do 
  begin 
    if Msgbox('安装程序检测到“千方百剂 甘肃药监接口”正在运行，请确认退出程序后再进行安装。' #13#13 '单击“是”确认已退出程序并继续安装，“否”退出安装。', mbConfirmation, MB_YESNO) = idNO then
    begin  
      Result := false; //安装程序退出
      IsRunning := 0; 
      exit; 
    end 
    else 
    begin
      SendMessage(IsRunning, WM_CLOSE, 0, 0); // 关闭进程
      Result := true; // 安装程序继续
      IsRunning := GetLogedOrLoggingWindow();
    end; 
  end;

  // 检查是否已经安装过应用程序 
  lRegPath := 'SOFTWARE\{#MyAppName}';
  if RegValueExists(HKEY_LOCAL_MACHINE, lRegPath, 'config') then 
  begin
    if Msgbox('“千方百剂 甘肃药监接口”已安装过，是否卸载重装？' #13#13 '单击“是”卸载并重装，“否”退出安装程序。', mbConfirmation, MB_YESNO) = idYES then 
    begin
      UninstallBefore();
      Result := true; //安装程序继续  
    end  
    else 
    begin
      Result := false; //安装程序退出  
      IsRunning := 0;  
    end
  end 
  else 
  begin
    Result := true;//CheckDotNetFramework(); //判断是否已经安装了DotNetFramework AND SQLNCLI10
    IsRunning := GetLogedOrLoggingWindow();
  end; 
end;  

// 卸载时判断客户端是否正在运行  
function InitializeUninstall() : Boolean;  
begin  
  Result := true; //安装程序继续
  IsRunning := GetLogedOrLoggingWindow();  
  while IsRunning <> 0 do  
  begin  
    if Msgbox('系统检测到客户端正在运行，请确认是否关闭？' #13#13 '单击【是】自动关闭客户端并继续卸载，【否】退出。', mbConfirmation, MB_YESNO) = idNO then 
    begin  
      Result := false; //安装程序退出  
      IsRunning := 0;  
    end 
    else 
    begin
      SendMessage(IsRunning, WM_CLOSE, 0, 0);
      Result := true; //安装程序继续  
      IsRunning := GetLogedOrLoggingWindow();
    end;  
  end;  
end;

