unit UPrintFunc;

interface

uses
  UPrintItem, crReportIntf, Datasnap.DBClient, System.SysUtils, Windows;

type

  TPrintFuncObject = class
  private
    cdsHeader,cdsDetail:TClientDataSet;
    FPrintQuickEnter: Boolean;
    FPrintTimes: Integer;
    FExportTimes: Integer;
    FLastErrorCode: Integer;
    FLastErrorMessage: string;
  protected
  public
    constructor Create;
    destructor Destroy; override;
    procedure ClearPrintData;
    function RunPrint(Ahnd : THandle;M_data,d_data :OleVariant; reptName :PChar) :Integer;stdcall;
    function UpdateRwx:boolean;stdcall;
    function RunPrintManage(const AName: String; AItems: TPrintItems; AData1: OleVariant): Integer; overload;
    function RunPrintManage(const AName: String; AItems: TPrintItems; AData1, AData2: OleVariant): Integer; overload;
    function RunPrintManage(const AName: String; AItems: TPrintItems; AData1, AData2, AData3: OleVariant): Integer; overload;
    property PrintQuickEnter:Boolean read FPrintQuickEnter write FPrintQuickEnter;
    property PrintTimes:Integer read FPrintTimes;
    property ExportTimes:Integer read FExportTimes;
    property LastErrorCode:Integer read FLastErrorCode;
    property LastErrorMessage:string read FLastErrorMessage;
  end;
  TUpdateRwx = function :boolean;stdcall;
  TRunPrint  = function (Ahnd : THandle;M_data :OleVariant;d_data :OleVariant;reptName :PChar) :Integer;stdcall;

implementation

uses
  System.Variants, Vcl.Forms, UComvar;

{ TPrintFuncObject }

function TPrintFuncObject.RunPrintManage(const AName: String; AItems: TPrintItems; AData1: OleVariant): Integer;
var
  ReportIntf: IcrReport;
  nPos:Integer;
  szRwxFile :string;
begin
  Result := 0;
  npos:=Pos('.',AName);
  if npos>0 then szRwxFile:=Copy(AName,1,npos-1) else szRwxFile := AName;
  ReportIntf := crReportIntf.CreateReport;
  try
    //ReportIntf.OwnerAppHandle := Application.Handle; // 本行可选
    ReportIntf.MasterData := AItems.SaveToData; // 传入主表数据
    ReportIntf.DetailData := AData1; // 传入明细数据
    ReportIntf.TemplateName := szRwxFile;
    if PrintQuickEnter then
    begin
//        ShowPrintDialog := False;
      ReportIntf.Print;
      Result := 1;
    end
    else
    begin
      ReportIntf.Execute;
      Result := ReportIntf.PrintTimes;
    end;
    FLastErrorCode    := ReportIntf.LastErrorCode;
    FLastErrorMessage := StrPas(ReportIntf.LastErrorMessage);
    // 如果需要返回值，可以取属性 LastErrorCode
  finally
    ReportIntf := nil;
  end;
end;

function TPrintFuncObject.RunPrintManage(const AName: String; AItems: TPrintItems; AData1, AData2: OleVariant): Integer;
begin
  Result := RunPrintManage(AName,AItems,AData1,AData2,Null);
end;

procedure TPrintFuncObject.ClearPrintData;
begin
  cdsDetail.Close;
  cdsDetail.FieldDefs.Clear;
  cdsHeader.Close;
  cdsHeader.FieldDefs.Clear;
end;

constructor TPrintFuncObject.Create;
begin
  cdsHeader:=TClientDataSet.Create(nil);
  cdsDetail:=TClientDataSet.Create(nil);
  FPrintQuickEnter := False;
end;

destructor TPrintFuncObject.Destroy;
begin
  if Assigned(cdsHeader) then FreeAndNil(cdsHeader);
  if Assigned(cdsDetail) then FreeAndNil(cdsDetail);
  inherited;
end;

function TPrintFuncObject.RunPrint(Ahnd: THandle; M_data, d_data: OleVariant;  reptName: PChar): Integer;
var FHWD:THandle;
   ARunPrint:TRunPrint;
begin
  Result := 0;
  if not FileExists(Goo.SystemPath+'\Cprint.dll') then exit;
  FHWD := LoadLibrary(pchar(Goo.SystemPath+'\Cprint.dll'));
  if FHWD = 0 then exit;
  @ARunPrint := GetProcAddress(FHWD,'RunPrint');
  if Assigned(ARunPrint) then
  begin
    Result := ARunPrint(ahnd,m_data,d_data,reptName);
    FPrintTimes := Result;
  end;
end;

function TPrintFuncObject.RunPrintManage(const AName: String; AItems: TPrintItems; AData1, AData2, AData3: OleVariant): Integer;
var ReportIntf: IcrReport;
begin
  ReportIntf := crReportIntf.CreateReport;
  try
    with ReportIntf do
    begin
      //OwnerAppHandle := Application.Handle; // 本行可选
      MasterData := AItems.SaveToData; // 传入主表数据
      if AData1<>null then SetDetailDataByIndex(AData1,0);
      if AData2<>null then SetDetailDataByIndex(AData2,1);
      if AData3<>null then SetDetailDataByIndex(AData3,2);
      TemplateName := AName;
      if PRINTQUICKENTER then
      begin
        ShowPrintDialog := False;
        Print;
      end
      else
        Execute;
      Result := ReportIntf.PrintTimes;
      FExportTimes := ReportIntf.ExportTimes;
      FPrintTimes  := Result;
    end;
  finally
    ReportIntf := nil;
  end;
end;

function TPrintFuncObject.UpdateRwx: boolean;
var FHWD:THandle;
   AUpdateRwx:TUpdateRwx;
begin
  Result := False;
  if not FileExists(Goo.SystemPath+'\Cprint.dll') then exit;
  FHWD := LoadLibrary(pchar(Goo.SystemPath+'\Cprint.dll'));
  if FHWD = 0 then exit;
  @AUpdateRwx := GetProcAddress(FHWD,'UpdateRwx');
  if Assigned(AUpdateRwx) then Result := AUpdateRwx;
end;

end.
