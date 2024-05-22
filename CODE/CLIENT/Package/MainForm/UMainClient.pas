unit UMainClient;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants,
  System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.ComCtrls, Data.DB,
  Datasnap.DBClient, Vcl.ExtCtrls, Vcl.Menus, System.Actions, Vcl.ActnList,
  Vcl.ToolWin, Vcl.ActnMan, Vcl.ActnCtrls, Vcl.PlatformDefaultStyleActnCtrls,
  Vcl.ActnMenus, System.JSON, cxPC, dxBarBuiltInMenu, cxClasses, dxTabbedMDI,
  dxSkinsCore, dxSkinBasic, dxSkinBlack, dxSkinBlue, dxSkinBlueprint,
  dxSkinCaramel, dxSkinCoffee, dxSkinDarkroom, dxSkinDarkSide,
  dxSkinDevExpressDarkStyle, dxSkinDevExpressStyle, dxSkinFoggy,
  dxSkinGlassOceans, dxSkinHighContrast, dxSkiniMaginary, dxSkinLilian,
  dxSkinLiquidSky, dxSkinLondonLiquidSky, dxSkinMcSkin, dxSkinMetropolis,
  dxSkinMetropolisDark, dxSkinMoneyTwins, dxSkinOffice2007Black,
  dxSkinOffice2007Blue, dxSkinOffice2007Green, dxSkinOffice2007Pink,
  dxSkinOffice2007Silver, dxSkinOffice2010Black, dxSkinOffice2010Blue,
  dxSkinOffice2010Silver, dxSkinOffice2013DarkGray, dxSkinOffice2013LightGray,
  dxSkinOffice2013White, dxSkinOffice2016Colorful, dxSkinOffice2016Dark,
  dxSkinOffice2019Black, dxSkinOffice2019Colorful, dxSkinOffice2019DarkGray,
  dxSkinOffice2019White, dxSkinPumpkin, dxSkinSeven, dxSkinSevenClassic,
  dxSkinSharp, dxSkinSharpPlus, dxSkinSilver, dxSkinSpringtime, dxSkinStardust,
  dxSkinSummer2008, dxSkinTheAsphaltWorld, dxSkinTheBezier,
  dxSkinsDefaultPainters, dxSkinValentine, dxSkinVisualStudio2013Blue,
  dxSkinVisualStudio2013Dark, dxSkinVisualStudio2013Light, dxSkinVS2010,
  dxSkinWhiteprint, dxSkinXmas2008Blue, dxGDIPlusClasses, cxLocalization;

type
  TMainClient = class(TForm)
    StatusBar1: TStatusBar;
    Timer_PassWork: TTimer;
    MainMenu: TMainMenu;
    N1: TMenuItem;
    N2: TMenuItem;
    N3: TMenuItem;
    N4: TMenuItem;
    ActionList: TActionList;
    Action_Close: TAction;
    Action_ChangeUser: TAction;
    Action_ChangeDB: TAction;
    Action_Upgrade: TAction;
    Panel_TopBorder: TPanel;
    dxTabbedMDIManager1: TdxTabbedMDIManager;
    Image1: TImage;
    cxLocalizer1: TcxLocalizer;
    Action_Update: TAction;
    Action_About: TAction;
    ProgressBar1: TProgressBar;
    procedure Action_AboutExecute(Sender: TObject);
    procedure Action_ChangeDBExecute(Sender: TObject);
    procedure Action_ChangeUserExecute(Sender: TObject);
    procedure Action_CloseExecute(Sender: TObject);
    procedure Action_UpdateExecute(Sender: TObject);
    procedure Action_UpgradeExecute(Sender: TObject);
    procedure StatusBar1DrawPanel(StatusBar: TStatusBar; Panel: TStatusPanel; const Rect: TRect);
    procedure Timer_PassWorkTimer(Sender: TObject);
  private
    procedure CreateMenu;overload;
    procedure CreateMenu(JSON: TJSONObject; ParentItem:TMenuItem=nil);overload;
    procedure MenuClick(Sender: TObject);
    procedure LoadBaseInfoThread;
    ///增加版本信息判断，升级数据库
    function FileVersion(const FileName: string): string;
    function CheckDBVersion:Boolean;
  public
    { Public declarations }
    procedure ClearAllMDIForm;
  end;

var
  MainClient: TMainClient;

implementation

uses UComvar, UGlobalInterface, UParamList,
  System.IOUtils, System.Generics.Collections, System.Generics.Defaults,
  UComConst, Winapi.ShellAPI, UJsonObjectHelper, UAbout, System.Rtti,
  System.Math;

{$R *.dfm}

procedure TMainClient.Action_AboutExecute(Sender: TObject);
begin
  ShowAbout;//关于
end;

procedure TMainClient.Action_ChangeDBExecute(Sender: TObject);
begin
  ClearAllMDIForm;
  if not Goo.Login.LoginServer then
  begin
    Application.Terminate;
    Abort;
  end;
  StatusBar1.Panels[0].Text := Format('服务器：[%s:%d].[%s]',[Goo.DB.HostName,Goo.DB.Port,Goo.DB.DatabaseName]);
  if not Goo.Login.LoginUser then
  begin
    Application.Terminate;
    Abort;
  end;
  LoadBaseInfoThread;
  StatusBar1.Panels[1].Text := Format('职员：%s',[Goo.Login.LoginUserName]);
end;

procedure TMainClient.Action_ChangeUserExecute(Sender: TObject);
begin
  ClearAllMDIForm;
  if not Goo.Login.LoginUser then
  begin
    Application.Terminate;
    Abort;
  end;
  StatusBar1.Panels[1].Text := Format('职员：%s',[Goo.Login.LoginUserName]);
end;

procedure TMainClient.Action_CloseExecute(Sender: TObject);
begin
  Close;
end;

procedure TMainClient.Action_UpdateExecute(Sender: TObject);
begin
  //程序更新
end;

procedure TMainClient.Action_UpgradeExecute(Sender: TObject);
begin
  if Goo.DB.ExecuteFile('SQL\Upgrade.sql') then Goo.Msg.ShowMsg('数据库升级成功！');
end;

function TMainClient.CheckDBVersion: Boolean;
  const c_sysname = 'COPYRIGHT_LINK';
  function CompareVersion(const Version1, Version2: string): Integer;
  var Version1Parts,Version2Parts:TArray<string>;
  begin
    Result := 0;
    Version1Parts := Version1.Split(['.']);
    Version2Parts := Version2.Split(['.']);
    for var I := 0 to Max(High(Version1Parts), High(Version2Parts)) do
    begin
      if I > High(Version1Parts) then Exit(-1);
      if I > High(Version2Parts) then Exit(1);

      if StrToInt(Version1Parts[I]) < StrToInt(Version2Parts[I]) then Exit(-1)
      else if StrToInt(Version1Parts[I]) > StrToInt(Version2Parts[I]) then Exit(1);
    end;
  end;
begin
  var _dbver := Goo.DB.SysCfgValue(c_sysname);
  var _ffver := FileVersion(Application.ExeName);
  if CompareVersion(_dbver,_ffver)<0 then
  begin
    Result := Goo.DB.ExecuteFile('SQL\Upgrade.sql');
    if Result then Goo.DB.ExecProc('Gp_SaveSysdata',['@SubName','@SubValue','@sysflag'],[c_sysname,_ffver,0]);
  end else Result := True;
end;

procedure TMainClient.ClearAllMDIForm;
begin
  LockWindowUpdate(Self.Handle);
  try
    for var I := MDIChildCount - 1 downto 0 do
    begin
      TCustomForm(MDIChildren[I]).Free;
    end;
  finally
    LockWindowUpdate(0);
  end;
end;

procedure TMainClient.CreateMenu(JSON: TJSONObject; ParentItem:TMenuItem);
var MenuItem : TMenuItem;
  Action:TAction;
  Json_List:TList<TJSONObject>;
begin
  if not Assigned(JSON) then Exit;
  MenuItem := nil;
  if Assigned(JSON.Values['item']) and (JSON.Values['item'] is TJSONArray) then
  begin
    //父节点
    if Assigned(JSON.Values['caption']) then
    begin
      MenuItem := TMenuItem.Create(MainMenu);
      MenuItem.Caption := JSON.GetValue<string>('caption');
      if Assigned(ParentItem) then ParentItem.Add(MenuItem) else MainMenu.Items.Add(MenuItem);
    end;
    //先将同一节点下面的item进行排序
    Json_List := TList<TJSONObject>.Create;
    try
      for var item in JSON.Values['item'] as TJSONArray do Json_List.Add(item as TJSONObject);
      //排序
      Json_List.Sort(TComparer<TJSONObject>.Construct(
        function(const Left, Right: TJSONObject): Integer
        var leftSort,rightSort: Integer;
        begin
          // You should do some error checking here and not just cast blindly
          if not TJSONObject(Left).TryGetValue<Integer>('sort',leftSort) then leftSort := 0;
          if not TJSONObject(Right).TryGetValue<Integer>('sort',rightSort) then rightSort := 0;
          // Compare here. I am just comparing the ToStrings but you will probably
          // want to compare something else.
          Result := TComparer<Integer>.Default.Compare(leftSort, rightSort);
        end));
      //递归
      for var list in Json_List  do CreateMenu(list,MenuItem);
    finally
      Json_List.Free;
    end;
    //for var item in JSON.Values['item'] as TJSONArray do CreateMenu(item as TJSONObject,MenuItem);
  end else begin
    if Assigned(JSON.Values['caption']) then
    begin
      MenuItem := TMenuItem.Create(MainMenu);
      MenuItem.Caption := JSON.GetValue<string>('caption');
      MenuItem.ShortCut:=0;
      if Assigned(JSON.Values['classname']) and Assigned(JSON.Values['classtype']) then
      begin
        Action := nil;
        if JSON.S['action']<>EmptyStr then
        begin
          Action := FindComponent(JSON.S['action']) as TAction;
        end;
        if not Assigned(Action) then
        begin
          Action := TAction.Create(ActionList);
          Action.Category := '菜单自动创建';
          if Assigned(JSON.Values['action']) and (Trim(JSON.GetValue<string>('action'))<>EmptyStr) then
            Action.Name     := Trim(JSON.GetValue<string>('action'));
          Action.OnExecute:= MenuClick;
          Action.Caption  := JSON.S['caption'];
          Action.Tag      := JSON.GetValue<Integer>('classtype');
          Action.Hint     := JSON.ToString;
          if Assigned(JSON.Values['shortcut']) then
            Action.ShortCut := TextToShortCut(JSON.GetValue<string>('shortcut'));
        end;
        MenuItem.Action  := Action;
      end;
      if Assigned(ParentItem) then ParentItem.Add(MenuItem) else MainMenu.Items.Add(MenuItem);
    end;
  end;
end;

function TMainClient.FileVersion(const FileName: string): string;
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

procedure TMainClient.LoadBaseInfoThread;
var AProBar:TProgressBar;
begin
  Goo.Local.Clear;
  Goo.Msg.ShowMainThreadBar(Goo.Local.Count,'开始基本信息本地化');
  TThread.CreateAnonymousThread(
    procedure
    begin
      for var i := Low(TBasicType) to High(TBasicType) do
      begin
        Goo.Local.BasicData[i];
        TThread.Synchronize( nil,
          procedure
          begin
            Goo.Msg.StepByMainThreadBar(1,Format('加载：%s 信息，完成 ',[TBasicCaption[i]]));
            //线程同步的内容
          end);         //|/-\|/-\|/-\:
      end;
    end
  ).Start;
end;

procedure TMainClient.MenuClick(Sender: TObject);
var Action:TAction;
  AClassName:string;
  AParamList:TParamList;
begin
  if not(Sender is TAction) then Exit;
  Action := Sender as TAction;
  if Action.Hint=EmptyStr then Exit;
  var _json  := TJSONObject.SO(Action.Hint);
  AParamList := TParamList.Create;
  try
    AClassName := _json.S['classname'].Trim;
    if AClassName=EmptyStr then Exit;
    if _json.Exists('ParamList') and Assigned(_json.O['ParamList']) then
    begin
      for var item in _json.O['ParamList'] do
      begin
        AParamList.Add(item.JsonString.Value,_json.O['ParamList'].T[item.JsonString.Value]);
      end;
    end;
    case TRegisterType(_json.I['classtype']) of
      rmtForm   : Goo.Reg.CallFormClass(AClassName,AParamList);
      rmtBill   : Goo.Reg.CallFormClass(AClassName,AParamList);
      rmtRepot  : Goo.Reg.CallFormClass(AClassName,AParamList);
      rmtMethod : Goo.Reg.Run(AClassName,AParamList);
      rmtFile   : ShellExecute(Handle, 'OPEN', PChar(AClassName), nil, nil, 1);
      rmtURL    : Goo.Reg.ShowWebUrl(AClassName);
    end;
  finally
    AParamList.Free;
    _json.Free;
  end;
end;

procedure TMainClient.CreateMenu;
var JSON:TJSONObject;
  Pair: TJSONPair;
  menupath:string;
begin
  //data目录为用户自定义的菜单
  //if FileExists(goo.SystemPath+'\Layout\menuinfo.json') then
    //CopyFile(PWideChar(goo.SystemPath+'\Layout\menuinfo.json'),PWideChar(goo.SystemDataPath+'\menuinfo.json'),True);
  menupath := goo.SystemPath+'\Layout\menuinfo.json';
  if FileExists(goo.SystemDataPath+'\Layout\menuinfo.json') then menupath := goo.SystemDataPath+'\Layout\menuinfo.json';
  //先清除一次菜单
  MainMenu.Items.Clear;
  JSON := TJSONObject.ParseJSONValue(TFile.ReadAllText(menupath)) as TJSONObject;
  try
    CreateMenu(JSON);
  finally
    JSON.Free;
  end;
end;

procedure TMainClient.StatusBar1DrawPanel(StatusBar: TStatusBar; Panel: TStatusPanel; const Rect: TRect);
begin
  if  Panel.ID = StatusBar1.Panels.Count-2 then
    with ProgressBar1 do
    begin
      Parent := StatusBar1;
      //设置长度、宽度和高度
      //left:=Rect.Right-width-15;
      left := Rect.Left;
      top  := Rect.Top;
      //width:=MyRect2.Right-MyRect2.Left;
      height:=Rect.Bottom-Rect.Top;
      //设置进度条的值
      //Min:=0;
      //Max:=100;
      //Position:=Position+10;
      //进度条可见
      //Visible:=True;
    end;
end;

procedure TMainClient.Timer_PassWorkTimer(Sender: TObject);
begin
  Timer_PassWork.Enabled := False;
  Panel_TopBorder.Color := RGB(133,193,95);
  if not Goo.Login.LoginServer then
  begin
    Application.Terminate;
    Abort;
  end;
  StatusBar1.Panels[0].Text := Format('服务器：[%s:%d].[%s]',[Goo.DB.HostName,Goo.DB.Port,Goo.DB.DatabaseName]);
  ///增加版本信息判断，升级数据库
  if not CheckDBVersion then Exit;  
  if not Goo.Login.LoginUser then
  begin
    Application.Terminate;
    Abort;
  end;
  StatusBar1.Panels[1].Text := Format('职员：%s',[Goo.Login.LoginUserName]);
  Goo.ComVar.Add('@AppMainForm_ProgressBar',ProgressBar1);
  Goo.ComVar.Add('@AppMainForm_StutasMessageBar',StatusBar1.Panels[StatusBar1.Panels.Count-1]);
  Goo.ComVar.Add('@AppMainForm_TopPanel',Panel_TopBorder);
  //创建菜单
  CreateMenu;
  //开启线程加载本地化数据
  LoadBaseInfoThread;
  //首次打开的菜单
  if Goo.Reg.FirstRunClass <> EmptyStr then Goo.Reg.CallFormClass(Goo.Reg.FirstRunClass);
  //cx控件的中文展示
  if FileExists(Goo.SystemPath + '\Layout\DevChs.ini') then
  begin
    TThread.CreateAnonymousThread(
      procedure
      begin
        cxLocalizer1.FileName := Goo.SystemPath + '\Layout\DevChs.ini';
        cxLocalizer1.Active := True;
        cxLocalizer1.Language := '中文(简体，中国)';
      end).Start;
  end;
end;

initialization


end.
