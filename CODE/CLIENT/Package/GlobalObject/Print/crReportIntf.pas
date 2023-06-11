{ ******************************************************* }
{                                                         }
{ 打印管理器新DLL接口                                     }
{                                                         }
{ 成都任我行软件股份有限公司                              }
{                                                         }
{ ******************************************************* }
unit crReportIntf;

interface

uses
  SysUtils, DB, Windows, Classes, Controls;

type
  // 接口辅助类
  TcrUtils = class
    // 设置水印，调用打印管理器时是加密进行的
    class procedure SetPrintWatermark(const AValue: string);
    // 返回 'PRINTWATERMARK'，但编译出来的exe中没有保存该内容的明文
    class function GetPrintWatermarkKey: string;
  end;

  // 模板名称错
  ETemplateNameError = class(Exception);
  // 生成报表错

  EPrepareError = class(Exception);

  TTemplateStoreType = (tstMDB, tstDBF);

  TRemoteDataFormat = ( // 远程下载数据格式
    rdfXML, // XML格式
    rdfZip // 压缩XML格式
);

  IcrReport = interface;

  IcrTemplateIntf = interface;

  IcrContentIntf = interface;

  IcrPrinterSetup = interface;

  TcrBeforeOutputEvent = procedure(AReportIntf: IcrReport) of object;

  IcrReport = interface
    ['{439E2B5A-479C-419C-88D0-3CA855B301BA}']
    procedure SetOwnerAppHandle(const Value: HWND);
    function GetTemplateStoreType: TTemplateStoreType;
    procedure SetTemplateStoreType(Value: TTemplateStoreType);
    function GetTemplateName: ShortString;
    procedure SetTemplateName(const Value: ShortString);
    function GetMasterData: OleVariant;
    procedure SetMasterData(Value: OleVariant);
    function GetDetailData: OleVariant;
    procedure SetDetailData(Value: OleVariant);
    function GetMasterDataSet: TDataSet;
    procedure SetMasterDataSet(Value: TDataSet);
    function GetDetailDataSet: TDataSet;
    procedure SetDetailDataSet(Value: TDataSet);
    function GetShowPrintDialog: Boolean;
    procedure SetShowPrintDialog(const Value: Boolean);
    function GetPrintedPageCount: Integer;
    function GetLastErrorCode: Integer;
    function GetLastErrorMessage: PChar;
    function GetPrinterSetup: IcrPrinterSetup;
    // 打印
    procedure Print;
    // 打印预览
    procedure Preview;
    // 设计
    procedure Design;
    // 显示打印对话框
    procedure Execute;
    // 显示关于对话框
    procedure ShowAboutBox;
    // 返回版本信息
    function VersionInfo: ShortString;
    function GetTemplateStyleIndex: Integer;
    procedure SetTemplateStyleIndex(const Value: Integer);
    function GetTemplateStyleNames: PChar;
    function CreateTemplate: IcrTemplateIntf;
    // SaveTemplate 不再返回异常而直接显示错误，调用后应加以下处理代码
    // if LastErrorCode <> 0 then Abort;
    procedure SaveTemplate(Template: IcrTemplateIntf);

    // 从文件装入表头数据
    procedure LoadMasterDataFile;
    // 从文件装入表体数据
    procedure LoadDetailDataFile;
    // 根据模板编号获取名称
    function GetTemplateNameByNumber(const Value: Integer): ShortString;
    // 导出数据
    procedure ExportData;
    // 加载一个已经存在的由TemplateName指定的模板并返回其接口
    function GetTemplate: IcrTemplateIntf; overload;
    // 加载一个已经存在的模板并返回其接口
    function GetTemplate(const TemplateName: string): IcrTemplateIntf; overload;

    // 创建内容实例
    function CreateContentIntf: IcrContentIntf;
    // 检查当前内容是否超过一页，超过则换页
    procedure CheckContentPage;
    // 保存最后一页或者强行换页
    procedure SaveContentPage;
    // 直接预览内容
    procedure PreviewContent;
    // 直接打印内容
    procedure PrintContent;
    // 检查基本样式更新
    procedure CheckUpdateTemplates;
    // 从远程地址下载明细数据
    procedure LoadDetailFromURL(const AURL: PChar; const ADataFormat: TRemoteDataFormat; const ASaveDataToFile: Boolean = False);

    // 报表（模板）存储类型
    property TemplateStoreType: TTemplateStoreType read GetTemplateStoreType write SetTemplateStoreType;
    // 报表（模板）（文件）名
    property TemplateName: ShortString read GetTemplateName write SetTemplateName;
    // 报表（模板）（文件）当前样式索引
    property TemplateStyleIndex: Integer read GetTemplateStyleIndex write SetTemplateStyleIndex;
    // 报表（模板）（文件）有的样式逗号隔开列表
    property TemplateStyleNames: PChar read GetTemplateStyleNames;
    // 主表数据
    property MasterData: OleVariant read GetMasterData write SetMasterData;
    // 明细数据
    property DetailData: OleVariant read GetDetailData write SetDetailData;
    // 主表数据集，暂时还没支持
    property MasterDataSet: TDataSet read GetMasterDataSet write SetMasterDataSet;
    // 明细数据集，暂时还没支持
    property DetailDataSet: TDataSet read GetDetailDataSet write SetDetailDataSet;

    // 打印时是否显示设置对话框，默认为True，为False时使用上次设置或者PrinterSetup中设置
    property ShowPrintDialog: Boolean read GetShowPrintDialog write SetShowPrintDialog;

    // 数组应用Exe的 Application.Handle ，可选设置
    property OwnerAppHandle: HWND write SetOwnerAppHandle;
    // 已打印页数，没打印时返回  0
    property PrintedPageCount: Integer read GetPrintedPageCount;
    // 返回上次执行结果
    property LastErrorCode: Integer read GetLastErrorCode;
    // 返回上次错误信息
    property LastErrorMessage: PChar read GetLastErrorMessage;
    // 打印设置
    property PrinterSetup: IcrPrinterSetup read GetPrinterSetup;
    function GetOnBeforeOutput: TcrBeforeOutputEvent;
    procedure SetOnBeforeOutput(AValue: TcrBeforeOutputEvent);
    // 生成报表前的事件处理
    property OnBeforeOutput: TcrBeforeOutputEvent read GetOnBeforeOutput write SetOnBeforeOutput;

    // 初始化
    procedure Init(AParams: OleVariant);

    // 从Carpa3加载数据
    procedure LoadDataFromCarpa3(AData: OleVariant; const ADataVersion: Integer; const ASaveDataToFile: Boolean = False);

    // 导出数据
    procedure ExportDataForOcx;
    // Carpa3专用，设数据目录名
    procedure SetDataDirName(const Value: ShortString);

    // 添加不到出的明细字段
    procedure AddNoExportDetailField(const AFieldName: ShortString);
    function GetPrintTimes: Integer;
    function GetExportTimes: Integer;
    // 打印次数
    property PrintTimes: Integer read GetPrintTimes;
    // 导出次数
    property ExportTimes: Integer read GetExportTimes;
    procedure SetPrintTimesLimit(const Value: Integer);
    function BeginBatchPrint: Boolean;
    procedure EndBatchPrint;
    procedure SetAllowExport(const Value: Boolean);
    procedure Invoke(const AMethodName, AParamsData: string);
    // 不显示对话框打印
    procedure PrintWithoutDialog;
    procedure SetAllowPrint(const Value: Boolean);
    procedure SetAllowPreviewEdit(const Value: Boolean);
    procedure SetIsUseServiceCall(const Value: Boolean);
    procedure ClearPageExpands;
    function ExpandPageRow(const ACellText, ACellItems: WideString; AExpandHeader, AExpandDetail, AExpandFooter: WordBool): Integer;
    function ExpandPageHeader(const ACellText: WideString; ACellArray: OleVariant): Integer;
    function ExpandPageDetail(const ACellText: WideString; ACellArray: OleVariant): Integer;
    procedure CreateBaseTemplate;
    procedure SaveBaseTemplate;
    function GetClientInfo(AType: Integer): WideString;
    function GetOrientation: Integer;
    procedure SetOrientation(const Value: Integer);
    // 纸张方向 0 纵向 1 横向
    property Orientation: Integer read GetOrientation write SetOrientation;
    function ExpandPageRowEx(const APageIndex: Integer; const ACellText, ACellItems: WideString; AExpandHeader, AExpandDetail, AExpandFooter: WordBool): Integer;
    procedure AddTemplatePage; // 增加模板页->返回页索引
    procedure AddTemplateTable;
    procedure AddTemplateRow;
    procedure AddTemplateCell(const AText: WideString; const ACellWidth, ADecimal: Integer);
    procedure SetTemplateCellLine(const ALeftLine, ATopLine, ArightLine, AbottomLine: Boolean; const ALeftLineWidth, ATopLineWidth, ARightLineWidth, AbottomLineWidth: Integer);
    procedure SetTemplateCellFont(const AFontName: WideString; AFontSize: Integer; AIsBold, AIsItalic, AIsUnderline, AIsStrikeOut: Boolean);
    procedure SetTemplateCellAlign(const AHorzAlign, AVertAlign: Integer);
    procedure SetTemplateRowHeight(const ARowHeight: Integer);
    function MergeTemplateTableCell(const aTopLeftRowIndex, aTopLeftCellIndex, aRightBottomRowIndex, aRightBottomCellIndex: Integer): Boolean;
    procedure SetReportMargin(const ALeft, ATop, ARight, ABottom: Integer);
    procedure SetRelationKeyField(AMasterField, ADetailField: string; AMasterKeyVisible, ADetailKeyVisible: Boolean);   //批量打印时，主从表关联字段
    // 设置多表格的明细数据  索引0开始
    procedure SetDetailDataByIndex(Value: OleVariant; const AIndex: Integer);
    // 获取所有的模板名称  以逗号分隔
    function GetTemplateNames: PChar;
    // 获取样式名称
    function GetStyleNames(const ATemplateName: PWideChar): PWideChar; // 以逗号分隔
    // 获取样式内容
    procedure CreateBaseTemplateFromJson(aJson: OleVariant);
    procedure CloseAllForms;
    procedure SetIsBprint(Value: Boolean);
    procedure SetIsSaveDataSet(Value: Boolean);
    property IsBprint: Boolean write SetIsBprint;
    property IsSaveDataSet: Boolean write SetIsSaveDataSet;
    function GetTemplateFields: PWideChar; //获取当前模板中选择的字段
    procedure SetPrinterName(const APrinterName: PChar);  //设置打印机名称
    procedure SetShowErrorMessageBox(const aValue: Boolean); //异常时，是否弹框
    procedure SetTemplateNameStr(aName: OleVariant);
    procedure DoCallBackPrintExportTimes; //回调carpa3 传输打印次数 导出次数

    procedure DesignInParentControl(AParentHandle: THandle; aWidth, aHeight: Integer);
    procedure PreviewInParentControl(AParentHandle: THandle; aWidth, aHeight: Integer);
//    function SaveTemplateFromJson(aJson: string): Boolean; //从样式Json获取样式并保存
    procedure DesignThenLoadTemplate;
    procedure UploadCurStyle(var aTemplateName: PAnsiChar; var aTemplate: OleVariant; var aStyleName: PWideChar);
    function DownLoadCloudStyle(aJson: OleVariant; aStyleName: PAnsiChar; aIsAdd: Boolean): Boolean;
    procedure UpdateV11Template(const aFilePath: OleVariant);
    procedure LoadDataFromJson(AData: OleVariant; const ASaveDataToFile: Boolean = False);
    function GetCurStyleIndex(const aTemplatName: PChar): Integer;
    function GetPrinterNames: PChar;
    procedure AppendStyle(const ATemplateName: PChar; const AStyleName: PChar; const AStyleContent: PChar);
    procedure RemotePrint(const AContent, APrinterName: PChar);
    function ExportPdf(const APdfPath: PChar): string;
  end;

  // 打印设置
  IcrPrinterSetup = interface
    ['{4B73A512-051C-4C97-99D0-26A3CE1C1E44}']
    function GetPages: PChar;
    procedure SetPages(const Value: PChar);
    function GetPageLimit: Integer;
    procedure SetPageLimit(const Value: Integer);
    function GetCopies: Integer;
    procedure SetCopies(const Value: Integer);
    function GetCollateCopies: Boolean;
    procedure SetCollateCopies(const Value: Boolean);
    function GetPrinterIndex: Integer;
    procedure SetPrinterIndex(const Value: Integer);
    function GetScaleFactor: Integer;
    procedure SetScaleFactor(const Value: Integer);
    function GetPageSizeIndex: Integer;
    procedure SetPageSizeIndex(const Value: Integer);
    function GetPageWidth: Integer;
    procedure SetPageWidth(const Value: Integer);
    function GetPageHeight: Integer;
    procedure SetPageHeight(const Value: Integer);
    function GetOffsetTop: Integer;
    procedure SetOffsetTop(const Value: Integer);
    function GetOffsetLeft: Integer;
    procedure SetOffsetLeft(const Value: Integer);

    // 页码范围
    property Pages: PChar read GetPages write SetPages;
    // 页面打印内容{0=所有页面,1=奇数页,2=偶数页}
    property PageLimit: Integer read GetPageLimit write SetPageLimit;
    // 份数
    property Copies: Integer read GetCopies write SetCopies;
    // 是否逐份打印
    property CollateCopies: Boolean read GetCollateCopies write SetCollateCopies;
    // 打印机索引号
    property PrinterIndex: Integer read GetPrinterIndex write SetPrinterIndex;
    // 缩放比例
    property ScaleFactor: Integer read GetScaleFactor write SetScaleFactor;
    // 打印纸张大小序号
    property PageSizeIndex: Integer read GetPageSizeIndex write SetPageSizeIndex;
    // 纸张宽度
    property PageWidth: Integer read GetPageWidth write SetPageWidth;
    // 纸张高度
    property PageHeight: Integer read GetPageHeight write SetPageHeight;
    // 左偏移
    property OffsetLeft: Integer read GetOffsetLeft write SetOffsetLeft;
    // 上偏移
    property OffsetTop: Integer read GetOffsetTop write SetOffsetTop;
  end;

  IcrLineIntf = interface;

  IcrCellIntf = interface;

  IcrModelIntf = interface
    ['{792D66D9-94E7-465F-BB0B-A936A70D856F}']
    function ToObject: TObject;
    function GetOrientation: Integer;
    procedure SetOrientation(const Value: Integer);
    function GetPageWidth: Integer;
    function GetPageHeight: Integer;
    function GetLeftMargin: Integer;
    procedure SetLeftMargin(const Value: Integer);
    function GetRightMargin: Integer;
    procedure SetRightMargin(const Value: Integer);
    function GetTopMargin: Integer;
    procedure SetTopMargin(const Value: Integer);
    function GetBottomMargin: Integer;
    procedure SetBottomMargin(const Value: Integer);
    function GetLineCount: Integer;
    function GetLineIntfs(const Index: Integer): IcrLineIntf;

    // 新建行
    function CreateLineIntf: IcrLineIntf;
    // 往模板中添加一行
    procedure AddLineIntf(Line: IcrLineIntf); overload;
    // 创建并往模板中添加一行
    function AddLineIntf: IcrLineIntf; overload;
    // 指定左上角和右下角的单元格座标 合并单元格
    function MergeCell(const ATopLeftLineIndex, aTopLeftCellIndex, ARightBottomLineIndex, aRightBottomCellIndex: Integer): Boolean;
    property LineCount: Integer read GetLineCount;
    property LineIntfs[const Index: Integer]: IcrLineIntf read GetLineIntfs;

    // 纸张方向 0 纵向 1 横向
    property Orientation: Integer read GetOrientation write SetOrientation;
    // 页面宽度（单位：屏幕象素）
    property PageWidth: Integer read GetPageWidth;
    // 页面高度（单位：屏幕象素）
    property PageHeight: Integer read GetPageHeight;
    // 上下左右边距，单位为毫米
    property LeftMargin: Integer read GetLeftMargin write SetLeftMargin;
    property RightMargin: Integer read GetRightMargin write SetRightMargin;
    property TopMargin: Integer read GetTopMargin write SetTopMargin;
    property BottomMargin: Integer read GetBottomMargin write SetBottomMargin;
    function GetFixLineCount: Integer;
    procedure SetFixLineCount(const AValue: Integer);
    // 打印的明细行数
    property FixLineCount: Integer read GetFixLineCount write SetFixLineCount;
  end;

  IcrTemplateIntf = interface(IcrModelIntf)
    ['{108F88F1-E8BB-46F5-B05B-3F88E55A6159}']
    function GetTemplateName: ShortString;
    procedure SetTemplateName(const Value: ShortString);
    function GetPageHeaderLineIntfs(const Index: Integer): IcrLineIntf;
    function GetPageDetailLineIntfs(const Index: Integer): IcrLineIntf;
    function GetPageFooterLineIntfs(const Index: Integer): IcrLineIntf;
    function GetReportFooterLineIntfs(const Index: Integer): IcrLineIntf;
    function GetLastPageHeaderLineIntf: IcrLineIntf;
    function GetFirstPageDetailLineIntf: IcrLineIntf;
    function GetPageHeaderLineCount: Integer;
    function GetPageDetailLineCount: Integer;
    function GetPageFooterLineCount: Integer;
    function GetReportFooterLineCount: Integer;
    property TemplateName: ShortString read GetTemplateName write SetTemplateName;

    // 获取模板的表头行
    property PageHeaderLineIntfs[const Index: Integer]: IcrLineIntf read GetPageHeaderLineIntfs;
    // 获取模板的表体行
    property PageDetailLineIntfs[const Index: Integer]: IcrLineIntf read GetPageDetailLineIntfs;
    // 获取模板的表尾行
    property PageFooterLineIntfs[const Index: Integer]: IcrLineIntf read GetPageFooterLineIntfs;
    // 获取模板的封底行
    property ReportFooterLineIntfs[const Index: Integer]: IcrLineIntf read GetReportFooterLineIntfs;

    // 获取模板的表头最后一行（一般表体部分都由表头最后一行和一行表体构成）
    property LastPageHeaderLineIntf: IcrLineIntf read GetLastPageHeaderLineIntf;
    // 获取模板的表体第一行（一般表体部分都由表头最后一行和一行表体构成）
    property FirstPageDetailLineIntf: IcrLineIntf read GetFirstPageDetailLineIntf;
    property PageHeaderLineCount: Integer read GetPageHeaderLineCount;
    property PageDetailLineCount: Integer read GetPageDetailLineCount;
    property PageFooterLineCount: Integer read GetPageFooterLineCount;
    property ReportFooterLineCount: Integer read GetReportFooterLineCount;

    // 展开页眉（ACellArray应包含被展开的单元格文本）
    procedure ExpandPageHeader(const ACellText: ShortString; ACellArray: OleVariant);
    // 展开明细
    procedure ExpandPageDetail(const ACellText: ShortString; ACellArray: OleVariant);
    // 展开页脚
    procedure ExpandPageFooter(const ACellText: ShortString; ACellArray: OleVariant);
  end;

  IcrContentIntf = interface(IcrModelIntf)
    ['{6FDB9F42-9846-4E56-9F8E-A64F6F52BCD6}']
  end;

  IcrLineIntf = interface
    ['{BD9F5BB6-2826-4C55-9939-997A38B6ACC6}']
    function ToObject: TObject;
    function GetLineWidth: Integer;
    function GetLineHeight: Integer;
    procedure SetLineHeight(const Value: Integer);
    function GetCellCount: Integer;
    function GetCellIntfs(const Index: Integer): IcrCellIntf;
    function CreateCellIntf: IcrCellIntf;
    procedure AddCellIntf(Cell: IcrCellIntf); overload;
    function AddCellIntf: IcrCellIntf; overload;

    // 清除所有单元格
    procedure ClearCells;
    property CellIntfs[const Index: Integer]: IcrCellIntf read GetCellIntfs;
    // 行高
    property LineHeight: Integer read GetLineHeight write SetLineHeight;
    // 当前行宽（所有单元格宽度合计）
    property LineWidth: Integer read GetLineWidth;
    // 单元格数
    property CellCount: Integer read GetCellCount;
  end;

  IcrCellIntf = interface
    ['{ED2580ED-E11C-4535-9EE0-864523DD97B1}']
    function ToObject: TObject;
    function GetCellText: ShortString;
    procedure SetCellText(const Value: ShortString);
    function GetCellWordWrap: Boolean;
    procedure SetCellWordWrap(const Value: Boolean);
    function GetFontSize: Integer;
    procedure SetFontSize(const Value: Integer);
    function GetCellWidth: Integer;
    procedure SetCellWidth(const Value: Integer);
    function GetLeftLine: Boolean;
    procedure SetLeftLine(const Value: Boolean);
    function GetLeftLineWidth: Integer;
    procedure SetLeftLineWidth(const Value: Integer);
    function GetRightLine: Boolean;
    procedure SetRightLine(const Value: Boolean);
    function GetRightLineWidth: Integer;
    procedure SetRightLineWidth(const Value: Integer);
    function GetTopLine: Boolean;
    procedure SetTopLine(const Value: Boolean);
    function GetTopLineWidth: Integer;
    procedure SetTopLineWidth(const Value: Integer);
    function GetBottomLine: Boolean;
    procedure SetBottomLine(const Value: Boolean);
    function GetBottomLineWidth: Integer;
    procedure SetBottomLineWidth(const Value: Integer);
    function GetDecimal: Integer;
    procedure SetDecimal(const Value: Integer);
    function GetHorzAlign: Integer;
    procedure SetHorzAlign(const Value: Integer);
    function GetVertAlign: Integer;
    procedure SetVertAlign(const Value: Integer);
    function GetFontName: ShortString;
    procedure SetFontName(const Value: ShortString);
    procedure SetCellFont(const FontName: ShortString; const FontSize: Integer = 9; const IsBold: Boolean = False; const IsItalic: Boolean = False; const IsUnderline: Boolean = False; const IsStrikeOut: Boolean = False);

    // 单元格中的文字
    property CellText: ShortString read GetCellText write SetCellText;
    // 是否自动拆行
    property CellWordWrap: Boolean read GetCellWordWrap write SetCellWordWrap;
    // 字体大小 一般情况为宋体9号字
    property FontSize: Integer read GetFontSize write SetFontSize;
    // 字体名称 一般情况为宋体9号字
    property FontName: ShortString read GetFontName write SetFontName;

    // 单元格宽度
    property CellWidth: Integer read GetCellWidth write SetCellWidth;
    property LeftLine: Boolean read GetLeftLine write SetLeftLine;
    property LeftLineWidth: Integer read GetLeftLineWidth write SetLeftLineWidth;
    property RightLine: Boolean read GetRightLine write SetRightLine;
    property RightLineWidth: Integer read GetRightLineWidth write SetRightLineWidth;

    // 是否有上边线
    property TopLine: Boolean read GetTopLine write SetTopLine;
    // 上边线宽度 一般线条为1
    property TopLineWidth: Integer read GetTopLineWidth write SetTopLineWidth;
    property BottomLine: Boolean read GetBottomLine write SetBottomLine;
    property BottomLineWidth: Integer read GetBottomLineWidth write SetBottomLineWidth;

    // -1 代表对传入的数据不格式化 0 代表不保留小数 1保留一位
    property Decimal: Integer read GetDecimal write SetDecimal;
    // 水平对齐方式 0 左对齐 1 水平居中 2 对右对齐
    property HorzAlign: Integer read GetHorzAlign write SetHorzAlign;
    // 垂直对齐方式 0 上对齐 1 居中对齐 2 下对齐
    property VertAlign: Integer read GetVertAlign write SetVertAlign;
  end;

function CreateReport: IcrReport;

procedure SetDllPath(const AValue: string);

procedure UnloadDll;

implementation

const
  cDll = 'CPrint.Dll';

var
  HDll: THandle = 0;

procedure UnloadDll;
begin
  if HDll <> 0 then
  begin
    FreeLibrary(HDll);
    HDll := 0;
  end;
end;

var
  FDllPath: string = '';

procedure SetDllPath(const AValue: string);
begin
  FDllPath := AValue;
end;

procedure RaiseErrorFmt(const AMsg: string; AArgs: array of const);
begin
  raise Exception.CreateFmt(AMsg, AArgs);
end;

function GetProc(const AProcName: string): Pointer;
begin
  if HDll = 0 then
  begin
    if (FDllPath <> '') and (not FileExists(FDllPath + cDll)) then
      RaiseErrorFmt('无法加载 %s，%s', [FDllPath + cDll, '文件不存在']);

    HDll := LoadLibrary(PChar(FDllPath + cDll));
    if HDll = 0 then
      HDll := LoadLibraryEx(PChar(FDllPath + cDll), 0, LOAD_WITH_ALTERED_SEARCH_PATH);
    if HDll = 0 then
      RaiseErrorFmt('无法加载 %s，%s', [FDllPath + cDll, SysErrorMessage(GetLastError)]);
  end;
{$WARNINGS OFF}
  Result := GetProcAddress(HDll, PChar(AProcName));
  if Result = nil then
    RaiseErrorFmt('%s 无法获取 %s 方法入口', [FDllPath + cDll, AProcName]);
{$WARNINGS ON}
end;

type
  TCreateReportMethod = function: IcrReport; stdcall;

function CreateReport: IcrReport;
var
  CreateReportMethod: TCreateReportMethod;
begin
  CreateReportMethod := GetProc('CreateReport');
  Result := CreateReportMethod;
end;

{ TcrUtils }

{ TcrUtils }

function Encode(const AText: string): string;
var
  i, iRandomKey, iStartKey, iMultKey, iAddKey, iChar: Integer;
begin
  Result := '';
  if AText = '' then
    Exit;
  Randomize;
  iRandomKey := Random(100);
  iStartKey := $03 + iRandomKey;
  iMultKey := $07 + iRandomKey;
  iAddKey := $16 + iRandomKey;
  Result := Format('%1.2X', [iRandomKey]);
  for i := 1 to Length(AText) do
  begin
    iChar := Byte(Byte(AText[i]) xor (iStartKey shr 8));
    Result := Result + Format('%1.2X', [iChar]);
    iStartKey := (iChar + iStartKey) * iMultKey + iAddKey;
  end;
end;

function Decode(const AText: string): string;
var
  i, iRandomKey, iStartKey, iMultKey, iAddKey, iChar: Integer;
begin
  Result := '';
  if AText = '' then
    Exit;
  iRandomKey := StrToIntDef('$' + Copy(AText, 1, 2), -1);
  if iRandomKey = -1 then
    raise Exception.CreateFmt('“%s”错误', [AText]);
  iStartKey := $03 + iRandomKey;
  iMultKey := $07 + iRandomKey;
  iAddKey := $16 + iRandomKey;
  for i := 1 to Length(AText) div 2 - 1 do
  begin
    iChar := StrToInt('$' + Copy(AText, i * 2 + 1, 2));
    Result := Result + Char(iChar xor (iStartKey shr 8));
    iStartKey := (iChar + iStartKey) * iMultKey + iAddKey;
  end;
end;

class function TcrUtils.GetPrintWatermarkKey: string;
begin
  Result := Decode('2F5049AE91669C446D671A76FB2964'); // PRINTWATERMARK
end;

class procedure TcrUtils.SetPrintWatermark(const AValue: string);
var
  Params: OleVariant;
begin
  with CreateReport do
  begin
    Params := Encode(GetPrintWatermarkKey + '=' + AValue);
    Init(Params);
  end;
end;

end.

