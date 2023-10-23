unit UExcelObject;

interface

uses
  UComobject, System.SysUtils, Vcl.Grids, System.Generics.Collections,
  XLSReadWriteII5, XLSSheetData5, System.Classes;

type
  TExcelCellCheckList = Class;
  TExcelObject = class(TXLSReadWriteII5)
  private
    FExcelCellCheckList: TExcelCellCheckList;
    FOnImportExcelEvent: TNotifyEvent;
    FOnCheckExcelEvent: TNotifyEvent;
    function GetCheckDataColIndex: Integer;
  public
    constructor Create(AFiledName:string);overload;
    destructor Destroy; override;
    property CheckDataColIndex:Integer read GetCheckDataColIndex;
    property ExcelCellCheckList:TExcelCellCheckList read FExcelCellCheckList;
    property OnImportExcelEvent:TNotifyEvent read FOnImportExcelEvent;
    property OnCheckExcelEvent:TNotifyEvent read FOnCheckExcelEvent;
    function ReadExcel(AStringGrid:TStringGrid):Boolean; virtual;
    function CheckData(AStringGrid:TStringGrid):Boolean; virtual;
    function ImportExcel(AStringGrid:TStringGrid):Boolean; virtual;
    function PreViewExcel:Boolean;
  end;

  TExcelCellCheckDataEvent = function (AData:OleVariant;var AError:string):Boolean of object;
  TExcelCellCheckList = class(TObjectDictionary<string,TExcelCellCheckDataEvent>)
  protected
    function CheckCell_PUSerCode(AData:OleVariant;var AError:string):Boolean;virtual;
    function CheckCell_BUSerCode(AData:OleVariant;var AError:string):Boolean;virtual;
    function CheckCell_KUSerCode(AData:OleVariant;var AError:string):Boolean;virtual;
    function CheckCell_EUSerCode(AData:OleVariant;var AError:string):Boolean;virtual;
    function CheckCell_MUSerCode(AData:OleVariant;var AError:string):Boolean;virtual;
  public
    function CheckDataRow(AColName:string;AData:OleVariant;var AError:string):Boolean;
  end;

const C_Column_CheckItem_Index = 2; //数据校验的列

implementation

uses
  System.Win.ComObj, UComvar, Vcl.Controls, UParamList;

{ TExcelObject }

function TExcelObject.CheckData(AStringGrid: TStringGrid): Boolean;
var ADataErrMsg:string;
begin
  Result := True;
  if AStringGrid.ColCount <= Sheets[0].LastCol+C_Column_CheckItem_Index then AStringGrid.ColCount := Sheets[0].LastCol+C_Column_CheckItem_Index+1;
  AStringGrid.Cells[Sheets[0].LastCol+C_Column_CheckItem_Index,0] := '数据校验';
  for var i := 1 to AStringGrid.RowCount do
  begin
    var bRowCheck :Boolean := True;
    for var j := 1 to AStringGrid.ColCount do
    begin
      bRowCheck := ExcelCellCheckList.CheckDataRow(AStringGrid.Cells[j,0],AStringGrid.Cells[j,i],ADataErrMsg);
      if not bRowCheck then
      begin
        AStringGrid.Cells[Sheets[0].LastCol+C_Column_CheckItem_Index,i] := ADataErrMsg;
        Break;
      end;
    end;
    Result := Result and bRowCheck;
  end;
  if Result and Assigned(OnCheckExcelEvent) then OnCheckExcelEvent(AStringGrid);
end;

constructor TExcelObject.Create(AFiledName: string);
begin
  inherited Create(nil);
  Filename := AFiledName;
  FExcelCellCheckList := TExcelCellCheckList.Create;
end;

destructor TExcelObject.Destroy;
begin
  if Assigned(FExcelCellCheckList) then FreeAndNil(FExcelCellCheckList);
  inherited;
end;

function TExcelObject.GetCheckDataColIndex: Integer;
begin
  Result := 1;
  if not Assigned(Sheets[0]) then Exit;
  Result := Sheets[0].LastCol+C_Column_CheckItem_Index;
end;

function TExcelObject.ImportExcel(AStringGrid: TStringGrid): Boolean;
begin
  if not CheckData(AStringGrid) then Exit;  
  if Assigned(OnImportExcelEvent) then OnImportExcelEvent(AStringGrid);
end;

function TExcelObject.PreViewExcel: Boolean;
var AParamList:TParamList;
begin
  AParamList := TParamList.Create;
  try
    AParamList.Add('@InvokeObject',Self);
    if not (Goo.Reg.ShowModal('TBaseExcelPreDialog',AParamList)=mrok) then Exit;
  finally
    AParamList.Free;
  end;
end;

function TExcelObject.ReadExcel(AStringGrid: TStringGrid): Boolean;
begin
  Result := False;
  try
    Self.Read;
  except on E: Exception do Goo.Logger.Error('加载EXCEL表格:%s，错误，%s',[FileName,e.Message]);
  end;
  AStringGrid.ColCount := Sheets[0].LastCol+2;    //获取表格行
  AStringGrid.RowCount := Sheets[0].LastRow+1;    //获取表格列
  for var irow := 0 to Sheets[0].LastRow + 1 do
  begin
    AStringGrid.Cells[0,irow]  := irow.ToString;
    for var icol := 0 to Sheets[0].LastCol do
    begin
      AStringGrid.Cells[icol+1,irow] := Sheets[0].AsString[icol,irow];
    end;
  end;
  AStringGrid.Cells[0,0] := '行号';
end;

{ TExcelCellCheckList }

function TExcelCellCheckList.CheckCell_BUSerCode(AData: OleVariant; var AError: string): Boolean;
begin

end;

function TExcelCellCheckList.CheckCell_EUSerCode(AData: OleVariant; var AError: string): Boolean;
begin

end;

function TExcelCellCheckList.CheckCell_KUSerCode(AData: OleVariant; var AError: string): Boolean;
begin

end;

function TExcelCellCheckList.CheckCell_MUSerCode(AData: OleVariant; var AError: string): Boolean;
begin

end;

function TExcelCellCheckList.CheckCell_PUSerCode(AData: OleVariant; var AError: string): Boolean;
begin

end;

function TExcelCellCheckList.CheckDataRow(AColName: string; AData: OleVariant; var AError: string): Boolean;
begin
  Result := True;
  if not ContainsKey(AColName) then Exit;
  Result := Items[AColName](AData,AError);
end;

end.
