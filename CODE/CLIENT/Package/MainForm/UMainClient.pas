unit UMainClient;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants,
  System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.ComCtrls, Data.DB,
  Datasnap.DBClient, Vcl.ExtCtrls, Vcl.Menus, System.Actions, Vcl.ActnList,
  Vcl.ToolWin, Vcl.ActnMan, Vcl.ActnCtrls, Vcl.PlatformDefaultStyleActnCtrls,
  Vcl.ActnMenus, System.JSON;

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
    procedure Action_ChangeDBExecute(Sender: TObject);
    procedure Action_ChangeUserExecute(Sender: TObject);
    procedure Action_CloseExecute(Sender: TObject);
    procedure Timer_PassWorkTimer(Sender: TObject);
  private
    procedure CreateMenu;overload;
    procedure CreateMenu(JSON: TJSONObject; ParentItem:TMenuItem=nil);overload;
    procedure MenuClick(Sender: TObject);
  public
    { Public declarations }
    procedure ClearAllMDIForm;
  end;

var
  MainClient: TMainClient;

implementation

uses UComvar, UGlobalInterface, UBaseForm, UParamList,
  System.IOUtils, System.Generics.Collections, System.Generics.Defaults,
  UComConst, Winapi.ShellAPI;

{$R *.dfm}

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
          if not TJSONObject(Left).TryGetValue<Integer>('sort',leftSort) then leftSort := 0;;
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
        if Assigned(JSON.Values['action']) and (Trim(JSON.GetValue<string>('action'))<>EmptyStr) then
        begin
          Action := FindComponent(JSON.GetValue<string>('action')) as TAction;
        end;
        if not Assigned(Action) then
        begin
          Action := TAction.Create(ActionList);
          Action.Category := '菜单自动创建';
          if Assigned(JSON.Values['action']) and (Trim(JSON.GetValue<string>('action'))<>EmptyStr) then
            Action.Name     := Trim(JSON.GetValue<string>('action'));
          Action.OnExecute:= MenuClick;
          Action.Caption  := JSON.GetValue<string>('caption');
          Action.Tag      := JSON.GetValue<Integer>('classtype');
          Action.Hint     := JSON.GetValue<string>('classname');
          if Assigned(JSON.Values['shortcut']) then
            Action.ShortCut := TextToShortCut(JSON.GetValue<string>('shortcut'));
        end;
        MenuItem.Action  := Action;
      end;
      if Assigned(ParentItem) then ParentItem.Add(MenuItem) else MainMenu.Items.Add(MenuItem);
    end;
  end;
end;

procedure TMainClient.MenuClick(Sender: TObject);
var Action:TAction;
begin
  if not(Sender is TAction) then Exit;
  Action := Sender as TAction;
  if Action.Hint=EmptyStr then Exit;
  case TRegisterType(Action.Tag) of
    rmtForm   : Goo.Reg.CallFormClass(Action.Hint);
    rmtBill   : Goo.Reg.CallFormClass(Action.Hint);
    rmtRepot  : Goo.Reg.CallFormClass(Action.Hint);
    rmtMethod : Goo.Reg.Run(Action.Hint);
    rmtFile   : ShellExecute(Handle, 'OPEN', PChar(Trim(Action.Hint)), nil, nil, 1);
    rmtURL    : Goo.MSG.ShowMsg(Action.Hint);
  end;
end;

procedure TMainClient.CreateMenu;
var JSON:TJSONObject;
  Pair: TJSONPair;

begin
  if not FileExists(goo.SystemPath+'\menuinfo.json') then Exit;
  //先清除一次菜单
  MainMenu.Items.Clear;
  JSON := TJSONObject.ParseJSONValue(TFile.ReadAllText(goo.SystemPath+'\menuinfo.json')) as TJSONObject;
  try
    CreateMenu(JSON);
  finally
    JSON.Free;
  end;
end;

procedure TMainClient.Timer_PassWorkTimer(Sender: TObject);
begin
  Timer_PassWork.Enabled := False;

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
  StatusBar1.Panels[1].Text := Format('职员：%s',[Goo.Login.LoginUserName]);
  CreateMenu;
end;

initialization


end.
