///基础包的代理类
// Created by LLS the UGlobalObject_Proxy
// 2023-04-09 22:49:16
//

unit UGlobalObject_Proxy;

interface

uses
  UGlobalInterface, UComObject,UParamList, System.UITypes, Winapi.Windows, Vcl.Forms;

type
  TLoginCommObject = class(TBaseCommObject)
  private
    FLoginUserRec: Integer;
    FLoginUserName: string;
    FLoginUserCode: string;
    function GetLocalComputerName: string;
    function GetLocalIPAddress: string;
    function GetLocalMACAddress(idx: Integer): string;
  public
    function LoginServer:Boolean;
    function LoginUser:Boolean;
    ///本机IP
    property LocalIPAddress:string read GetLocalIPAddress;
    ///本机名
    property LocalComputerName: string read GetLocalComputerName;
    ///本机MAC
    property LocalMACAddress[idx:Integer]:string read GetLocalMACAddress;
  published
    ///职员登录信息
    property LoginUserRec:Integer read FLoginUserRec;
    property LoginUserCode:string read FLoginUserCode;
    property LoginUserName:string read FLoginUserName;
  end;
  TFormatCommObject = class(TBaseCommObject)
  public
    function iif(condtion: boolean; A: integer; B: integer): integer; overload;
    function iif(condtion: boolean; A: string; B: string): string; overload;
    function iif(condtion: Boolean; A: Boolean; B: Boolean): boolean; overload;
    function iif(condtion: boolean; A: Double; B: Double): Double; overload;
    function iif(condtion: boolean; A: OleVariant; B: OleVariant): OleVariant; overload;
    function IsNull(ACheckvalue,AReplaceValue:olevariant): olevariant;
    function HtmlToColor(const AHtmlColor: string): TColor;
    function ColorToHtml(AColor: TColor): string;
  end;
  {样式}
  TThemeGrid = record
    GridItemHeight:Integer;     //=25;表格行高
    GridRowFontSize:Integer;    //=10;表格区域字体大小
    GridHeadHeight:Integer;     //=25;表头行高
    GridTitleFontSize:Integer;  //=10;表头区域字体大小
    GridFontColor:TColor;       //=#4B5053;表格字体颜色
    GridHeadFontColor:TColor;   //=#023350;表头字体颜色
    GridFooterFontColor:TColor; //=#4B5053;合计行字体颜色
    GridBackColor:TColor;       //=#FFFFFF;表格背景颜色
    GridHeadBackColor:TColor;   //=#F5F5F5;表头背景颜色
    GridOneItemColor:TColor;    //=#FFFFFF;表格奇行颜色
    GridTwoItemColor:TColor;    //=#F5F5F5;表格偶行颜色
    GridSelectItemColor:TColor; //=#DDF2D0;表格选中行颜色
    GridFooterColor:TColor;     //=#FFFFFF;表格合计行颜色
    GridFixBackBolor:TColor;    //=#F5F5F5;表格左边固定列背景颜色
    GridRowFocusColor:TColor;   //=#AEE18E;鼠标选中单元格颜色
  end;
  TThemeObject = class(TBaseCommObject)
  private
    FThemeGrid: TThemeGrid;
  public
    constructor Create(AOwner: TObject);
    class function HtmlToColor(const AHtmlColor: string): TColor;
    class function ColorToHtml(AColor: TColor): string;
    property Grid :TThemeGrid read FThemeGrid;
  end;
  {消息窗口}
  TMessageBoxObject = class(TBaseCommObject)
  private
    FProgressBarForm:TForm;
  public
    constructor Create(AOwner: TObject);
    destructor Destroy; override;
    function MessageBox(const AMsg,ATitle:string;ADlgType:TMsgDlgType;ADlgButtons:TMsgDlgButtons):Integer;
    procedure ShowMsg(const AMsg:string);overload;
    procedure ShowMsg(const AMsg:string; Args:array of const);overload;
    procedure ShowError(Const AMsg:String); overload;
    procedure ShowError(Const AMsg:String;const Args: array of const); overload;
    procedure ShowErrorAndAbort(Const AMsg:String); overload;
    procedure ShowErrorAndAbort(Const AMsg:String;const Args: array of const); overload;
    function Question(Const AMsg:String;Const ATitle:string='提示'): Boolean; overload;
    function Question(Const AMsg:String;const Args: array of const;Const ATitle:string='提示'): Boolean; overload;
    //判断信息
    procedure CheckAndAbort(AResult:Boolean); overload;
    procedure CheckAndAbort(AResult:Boolean;Const AMSG:String); overload;
    procedure CheckAndAbort(AResult:Boolean;Const AMSG:String; const Args: array of const); overload;
    //进度条
    procedure ShowProgressBar(AMax:Integer=100;ATitle:string='');
    procedure StepBy(Delta: Integer=1;ATitle:string='');
  end;

implementation

uses
  Vcl.Controls,UComvar, Vcl.Dialogs, System.SysUtils, System.Rtti,
  Vcl.Graphics, System.Variants, Winapi.WinSock, Winapi.Nb30;

{ TLoginCommObject }

function TLoginCommObject.GetLocalComputerName: string;
var
  Buffer: array[0..MAX_COMPUTERNAME_LENGTH + 1] of Char;
  Size: DWORD;
begin
  Size := MAX_COMPUTERNAME_LENGTH + 1;
  if GetComputerName(Buffer, Size) then
    Result := Buffer
  else
    Result := '';
end;

function TLoginCommObject.GetLocalIPAddress: string;
var
  WSData: TWSAData;
  P: PHostEnt;
  HostName: array[0..255] of AnsiChar;
begin
  Result := '127.0.0.1';
  if WSAStartup($101, WSData) = 0 then
  begin
    try
      if GetHostName(@HostName, SizeOf(HostName)) = 0 then
      begin
        P := GetHostByName(@HostName);
        if P <> nil then
        begin
          Result := string(inet_ntoa(PInAddr(P^.h_addr_list^)^));
        end;
      end;
    finally
      WSACleanup;
    end;
  end;

end;

function TLoginCommObject.GetLocalMACAddress(idx: Integer): string;
var
  NCB: TNCB;
  ADAPTER: TADAPTERSTATUS;
  LANAENUM: TLANAENUM;
  intidx: integer;
  crc: AnsiChar;
  strtemp: string;
begin
  result := '';
  try
    zeromemory(@NCB, sizeof(NCB));
    NCB.ncb_command := chr(NCBENUM);
    netbios(@NCB);
    NCB.ncb_buffer := @LANAENUM;
    NCB.ncb_length := sizeof(LANAENUM);
    crc := netbios(@NCB);
    if ord(crc) <> 0 then exit;
    zeromemory(@NCB, sizeof(NCB));
    NCB.ncb_command := chr(NCBRESET);
    NCB.ncb_lana_num := LANAENUM.lana[idx];
    crc := netbios(@NCB);
    if ord(crc) <> 0 then exit;
    zeromemory(@NCB, sizeof(NCB));
    NCB.ncb_command := chr(NCBASTAT);
    NCB.ncb_lana_num := LANAENUM.lana[idx];
    strpcopy(NCB.ncb_callname, '*');
    NCB.ncb_buffer := @ADAPTER;
    NCB.ncb_length := sizeof(ADAPTER);
    netbios(@NCB);
    strtemp := '';
    for intidx := 0 to 5 do
      strtemp := strtemp + inttohex(integer(ADAPTER.adapter_address[intidx]), 2);
    result := strtemp;
  finally
    zeromemory(@NCB, sizeof(NCB));
  end;
end;

function TLoginCommObject.LoginServer: Boolean;
begin
  Result := Goo.Reg.ShowModal('TLoginServer') = mrOk;
end;

function TLoginCommObject.LoginUser: Boolean;
var AParamList:TParamList;
begin
  AParamList := TParamList.Create;
  try
    Result := Goo.Reg.ShowModal('TLoginUser',AParamList) = mrOk;
    if Result then
    begin
      FLoginUserRec := AParamList.AsInteger('@LoginUserRec');
      FLoginUserCode := AParamList.AsString('@LoginUserCode');
      FLoginUserName := AParamList.AsString('@LoginUserName');
    end;
  finally
    AParamList.Free;
  end;
end;

{ TMessageBoxObject }

procedure TMessageBoxObject.ShowMsg(const AMsg:string);
begin
  MessageBox(AMsg,'提示',mtWarning,[mbOK]);
end;

procedure TMessageBoxObject.CheckAndAbort(AResult: Boolean; const AMSG: String);
begin
  if Not AResult then ShowErrorAndAbort(AMSG);
end;

procedure TMessageBoxObject.CheckAndAbort(AResult: Boolean);
begin
  if Not AResult then Abort;
end;

procedure TMessageBoxObject.CheckAndAbort(AResult: Boolean; const AMSG: String; const Args: array of const);
begin
  CheckAndAbort(AResult,Format(AMSG,Args));
end;

constructor TMessageBoxObject.Create(AOwner: TObject);
begin
  inherited ;
  FProgressBarForm := nil;
end;

destructor TMessageBoxObject.Destroy;
begin
  if Assigned(FProgressBarForm) then FreeAndNil(FProgressBarForm);  
  inherited;
end;

function TMessageBoxObject.MessageBox(const AMsg, ATitle: string; ADlgType: TMsgDlgType; ADlgButtons: TMsgDlgButtons): Integer;
var AParam:TParamList;
begin
  AParam := TParamList.Create;
  try
    AParam.Add('@Caption',ATitle);
    AParam.Add('@Message',AMsg);
    AParam.Add('@DlgType',ADlgType);
    AParam.AddOrSetValue('@Buttons',TValue.From<TMsgDlgButtons>(ADlgButtons));
    Result := Goo.Reg.ShowModal('TMessageBoxDialog',AParam);
  finally
    AParam.Free;
  end;

end;

function TMessageBoxObject.Question(const AMsg: String; const Args: array of const; const ATitle: string): Boolean;
begin
  Result := Question(Format(AMsg,Args),ATitle);
end;

function TMessageBoxObject.Question(const AMsg, ATitle: string): Boolean;
begin
  Result := MessageBox(AMsg,'请确认？？？',mtConfirmation,[mbOK,TMsgDlgBtn.mbCancel]) = mrOk;
end;

procedure TMessageBoxObject.ShowError(const AMsg: String; const Args: array of const);
begin
  ShowError(Format(AMsg,Args));
end;

procedure TMessageBoxObject.ShowErrorAndAbort(const AMsg: String; const Args: array of const);
begin
  ShowErrorAndAbort(Format(AMsg,Args));
end;

procedure TMessageBoxObject.ShowErrorAndAbort(const AMsg: String);
begin
  ShowError(AMsg);
  Abort;
end;

procedure TMessageBoxObject.ShowError(const AMsg: String);
begin
  MessageBox(AMsg,'提示',mtError,[mbOK]);
end;

procedure TMessageBoxObject.ShowMsg(const AMsg:string; Args: array of const);
begin
  ShowMsg(Format(AMsg,Args));
end;

procedure TMessageBoxObject.ShowProgressBar(AMax: Integer; ATitle: string);
var AParam:TParamList;
begin
  AParam := TParamList.Create;
  try
    AParam.Add('@Title',ATitle);
    AParam.Add('@Max',AMax);
    if not Assigned(FProgressBarForm) then FProgressBarForm := Goo.Reg.CreateFormClass('TProgressBarDialog',AParam);
    (FProgressBarForm as IProgressBarFormInt).ShowProgressBar(FProgressBarForm);
  finally
    AParam.Free;
  end;
end;

procedure TMessageBoxObject.StepBy(Delta: Integer; ATitle: string);
begin
  if Assigned(FProgressBarForm) then
  begin
    SendMessage(FProgressBarForm.Handle,$8001,Delta,Integer(@ATitle));
  end;
end;

{ TThemeObject }

class function TThemeObject.ColorToHtml(AColor: TColor): string;
begin
  Result := Format('#%.2x%.2x%.2x', [GetRValue(AColor), GetGValue(AColor), GetBValue(AColor)]);
end;

constructor TThemeObject.Create(AOwner: TObject);
begin
    inherited Create(AOwner);
    FThemeGrid.GridItemHeight       := 25;     //=25;表格行高
    FThemeGrid.GridRowFontSize      := 10;     //=10;表格区域字体大小
    FThemeGrid.GridHeadHeight       := 25;     //=25;表头行高
    FThemeGrid.GridTitleFontSize    := 10;     //=10;表头区域字体大小
    FThemeGrid.GridFontColor        := HtmlToColor('#4B5053'); //;表格字体颜色
    FThemeGrid.GridHeadFontColor    := HtmlToColor('#023350'); //=;表头字体颜色
    FThemeGrid.GridFooterFontColor  := HtmlToColor('#4B5053'); //=;合计行字体颜色
    FThemeGrid.GridBackColor        := HtmlToColor('#FFFFFF'); //=;表格背景颜色
    FThemeGrid.GridHeadBackColor    := HtmlToColor('#F5F5F5'); //=;表头背景颜色
    FThemeGrid.GridOneItemColor     := HtmlToColor('#FFFFFF'); //=;表格奇行颜色
    FThemeGrid.GridTwoItemColor     := HtmlToColor('#F5F5F5'); //=;表格偶行颜色
    FThemeGrid.GridSelectItemColor  := HtmlToColor('#DDF2D0'); //=;表格选中行颜色
    FThemeGrid.GridFooterColor      := HtmlToColor('#FFFFFF'); //=;表格合计行颜色
    FThemeGrid.GridFixBackBolor     := HtmlToColor('#F5F5F5'); //=;表格左边固定列背景颜色
    FThemeGrid.GridRowFocusColor    := HtmlToColor('#AEE18E'); //=;鼠标选中单元格颜色
end;

class function TThemeObject.HtmlToColor(const AHtmlColor: string): TColor;
var
  R, G, B: Byte;
begin
  Result := clNone;
  if Length(AHtmlColor) = 7 then
  begin
    R := StrToInt('$' + Copy(AHtmlColor, 2, 2));
    G := StrToInt('$' + Copy(AHtmlColor, 4, 2));
    B := StrToInt('$' + Copy(AHtmlColor, 6, 2));
    Result := RGB(R, G, B);
  end;
end;

{ TFormatCommObject }

function TFormatCommObject.ColorToHtml(AColor: TColor): string;
begin
  Result := Format('#%.2x%.2x%.2x', [GetRValue(AColor), GetGValue(AColor), GetBValue(AColor)]);
end;

function TFormatCommObject.HtmlToColor(const AHtmlColor: string): TColor;
var
  R, G, B: Byte;
begin
  Result := clNone;
  if Length(AHtmlColor) = 7 then
  begin
    R := StrToInt('$' + Copy(AHtmlColor, 2, 2));
    G := StrToInt('$' + Copy(AHtmlColor, 4, 2));
    B := StrToInt('$' + Copy(AHtmlColor, 6, 2));
    Result := RGB(R, G, B);
  end;
end;

function TFormatCommObject.iif(condtion: boolean; A, B: integer): integer;
begin
  if condtion then Result := A else Result := B;  
end;

function TFormatCommObject.iif(condtion: boolean; A, B: string): string;
begin
  if condtion then Result := A else Result := B;
end;

function TFormatCommObject.iif(condtion, A, B: Boolean): boolean;
begin
  if condtion then Result := A else Result := B;
end;

function TFormatCommObject.iif(condtion: boolean; A, B: Double): Double;
begin
  if condtion then Result := A else Result := B;
end;

function TFormatCommObject.iif(condtion: boolean; A, B: OleVariant): OleVariant;
begin
  if condtion then Result := A else Result := B;
end;

function TFormatCommObject.IsNull(ACheckvalue, AReplaceValue: olevariant): olevariant;
begin
  if ACheckvalue=Null then
    Result := AReplaceValue
  else
    Result := ACheckvalue;
end;

end.
