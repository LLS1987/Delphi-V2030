unit UExcelObject;

interface

uses
  UComobject, System.SysUtils, Vcl.Grids, System.Generics.Collections,
  XLSReadWriteII5, XLSSheetData5, System.Classes, UComDBStorable;

type
  TExcelCellCheckList = Class;
  TExcelObject = class(TXLSReadWriteII5)
  private
    FExcelCellCheckList: TExcelCellCheckList;
    FOnImportExcelEvent: TNotifyEvent;
    FOnCheckExcelEvent: TNotifyEvent;
    FGrid:TStringGrid;
    function GetCheckDataColIndex: Integer;
    function GetColumnIndex(AName: string): Integer;
    function GetSheetColIndex(AName: string): Integer;
  public
    constructor Create(AFiledName:string);overload;
    destructor Destroy; override;
    property CheckDataColIndex:Integer read GetCheckDataColIndex;
    property ExcelCellCheckList:TExcelCellCheckList read FExcelCellCheckList;
    property OnImportExcelEvent:TNotifyEvent read FOnImportExcelEvent write FOnImportExcelEvent;
    property OnCheckExcelEvent:TNotifyEvent read FOnCheckExcelEvent;
    property ColumnIndex[AName:string]:Integer read GetColumnIndex;
    function ReadExcel(AStringGrid:TStringGrid):Boolean; virtual;
    function CheckData(AStringGrid:TStringGrid):Boolean; virtual;
    function ImportExcel(AStringGrid:TStringGrid):Boolean; virtual;
    function PreViewExcel:Boolean;
    function ColCount:Integer;
    function RowCount:Integer;
    function AsString(AColName:string;ARow:Integer):string;
    function AsFloat(AColName:string;ARow:Integer):Double;
    function AsInteger(AColName:string;ARow:Integer):Integer;
    function AsDateTime(AColName:string;ARow:Integer):TDateTime;
    function AsBoolean(AColName:string;ARow:Integer):Boolean;
  end;

  TExcelCellCheckDataEvent = function (AData:OleVariant;var AError:string):Boolean of object;
  TExcelCellCheckList = class(TObjectDictionary<string,TExcelCellCheckDataEvent>)
  private
    function GetUseCheckPUSerCode: Boolean;
    procedure SetUseCheckPUSerCode(const Value: Boolean);
    function GetUseCheckBUSerCode: Boolean;
    procedure SetUseCheckBUSerCode(const Value: Boolean);
    function GetUseCheckEUSerCode: Boolean;
    function GetUseCheckKUSerCode: Boolean;
    function GetUseCheckMUSerCode: Boolean;
    procedure SetUseCheckEUSerCode(const Value: Boolean);
    procedure SetUseCheckKUSerCode(const Value: Boolean);
    procedure SetUseCheckMUSerCode(const Value: Boolean);
    function CheckBasicUSerCode<T:class>(AData:OleVariant;var AError:string):Boolean;
  protected
    function CheckCell_PUSerCode(AData:OleVariant;var AError:string):Boolean;virtual;
    function CheckCell_BUSerCode(AData:OleVariant;var AError:string):Boolean;virtual;
    function CheckCell_KUSerCode(AData:OleVariant;var AError:string):Boolean;virtual;
    function CheckCell_EUSerCode(AData:OleVariant;var AError:string):Boolean;virtual;
    function CheckCell_MUSerCode(AData:OleVariant;var AError:string):Boolean;virtual;
    function CheckCell_Empty(AData:OleVariant;var AError:string):Boolean;virtual;
  public
    function CheckDataRow(AColName:string;AData:OleVariant;var AError:string):Boolean;
    procedure AddCheckEmpty(AColName:string); overload;
    procedure AddCheckEmpty(AColArray:array of string); overload;
    ///添加默认的基本信息判断
    property UseCheckPUSerCode:Boolean read GetUseCheckPUSerCode write SetUseCheckPUSerCode;
    property UseCheckBUSerCode:Boolean read GetUseCheckBUSerCode write SetUseCheckBUSerCode;
    property UseCheckKUSerCode:Boolean read GetUseCheckKUSerCode write SetUseCheckKUSerCode;
    property UseCheckEUSerCode:Boolean read GetUseCheckEUSerCode write SetUseCheckEUSerCode;
    property UseCheckMUSerCode:Boolean read GetUseCheckMUSerCode write SetUseCheckMUSerCode;
  end;

const C_Column_CheckItem_Index = 2; //数据校验的列

implementation

uses
  System.Win.ComObj, UComvar, Vcl.Controls, UParamList;

{ TExcelObject }

function TExcelObject.AsBoolean(AColName: string; ARow: Integer): Boolean;
begin
  var ACol:=GetSheetColIndex(AColName);
  if ACol<0 then Exit(False);
  Result := Sheets[0].AsBoolean[ACol,ARow];
end;

function TExcelObject.AsDateTime(AColName: string; ARow: Integer): TDateTime;
begin
  var ACol:=GetSheetColIndex(AColName);
  if ACol<0 then Exit(0);
  Result := Sheets[0].AsDateTime[ACol,ARow];
end;

function TExcelObject.AsFloat(AColName: string; ARow: Integer): Double;
begin
  var ACol:=GetSheetColIndex(AColName);
  if ACol<0 then Exit(0);
  Result := Sheets[0].AsFloat[ACol,ARow];
end;

function TExcelObject.AsInteger(AColName: string; ARow: Integer): Integer;
begin
  var ACol:=GetSheetColIndex(AColName);
  if ACol<0 then Exit(0);
  Result := Sheets[0].AsInteger[ACol,ARow];
end;

function TExcelObject.AsString(AColName: string; ARow: Integer): string;
begin
  var ACol:=GetSheetColIndex(AColName);
  if ACol<0 then Exit(EmptyStr);
  Result := Sheets[0].AsString[ACol,ARow];
end;

function TExcelObject.CheckData(AStringGrid: TStringGrid): Boolean;
var ADataErrMsg:string;
begin
  Result := True;
  if AStringGrid.ColCount <= Sheets[0].LastCol+C_Column_CheckItem_Index then AStringGrid.ColCount := Sheets[0].LastCol+C_Column_CheckItem_Index+1;
  AStringGrid.Cells[Sheets[0].LastCol+C_Column_CheckItem_Index,0] := '数据校验';
  for var i := 1 to AStringGrid.RowCount-1 do
  begin
    var bRowCheck :Boolean := True;
    for var j := 1 to AStringGrid.ColCount-1 do
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
  //检查需要验证的列是否存在
  for var item in ExcelCellCheckList do
  begin
    Goo.Msg.CheckAndAbort(ColumnIndex[item.Key]>=0,'需要的列：%s 不存在！',[item.Key]);
  end;
  if Result and Assigned(OnCheckExcelEvent) then OnCheckExcelEvent(AStringGrid);
end;

function TExcelObject.ColCount: Integer;
begin
  Result := Sheets[0].LastCol+1;
end;

constructor TExcelObject.Create(AFiledName: string);
begin
  inherited Create(nil);
  if AFiledName<>EmptyStr then Filename := AFiledName;
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

function TExcelObject.GetColumnIndex(AName: string): Integer;
begin
  Result := -1;
  for var i := 1 to FGrid.ColCount do
  begin
    if SameText(FGrid.Cells[i,0],AName) then
    begin
      Result := i;
      Break;
    end;
  end;
end;

function TExcelObject.GetSheetColIndex(AName: string): Integer;
begin
  Result := -1;
  for var i := 0 to Sheets[0].LastCol do
  begin
    if SameText(Sheets[0].AsString[i,0],AName) then
    begin
      Result := i;
      Break;
    end;
  end;
end;

function TExcelObject.ImportExcel(AStringGrid: TStringGrid): Boolean;
begin
  if Assigned(OnImportExcelEvent) then OnImportExcelEvent(Self);
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
  FGrid := AStringGrid;
end;

function TExcelObject.RowCount: Integer;
begin
  Result := Sheets[0].LastRow+1;
end;

{ TExcelCellCheckList }

procedure TExcelCellCheckList.AddCheckEmpty(AColName: string);
begin
  Self.TryAdd(AColName,CheckCell_Empty);
end;

procedure TExcelCellCheckList.AddCheckEmpty(AColArray: array of string);
begin
  for var i in AColArray do AddCheckEmpty(i);
end;

function TExcelCellCheckList.CheckBasicUSerCode<T>(AData: OleVariant; var AError: string): Boolean;
begin
  if not CheckCell_Empty(AData,AError) then Exit(False);
  Result := Assigned(Goo.Local.GetUserCode<T>(AData));
  if not Result then  AError := '错误';
end;

function TExcelCellCheckList.CheckCell_BUSerCode(AData: OleVariant; var AError: string): Boolean;
begin
  Result := CheckBasicUSerCode<TStorable_BType>(AData,AError);
end;

function TExcelCellCheckList.CheckCell_Empty(AData: OleVariant; var AError: string): Boolean;
begin
  Result := not(AData=EmptyStr);
  if not Result then AError := '字段为空';
end;

function TExcelCellCheckList.CheckCell_EUSerCode(AData: OleVariant; var AError: string): Boolean;
begin
  if not CheckCell_Empty(AData,AError) then Exit(False);
  Result := Assigned(Goo.Local.GetUserCode<TStorable_EType>(AData));
  if not Result then  AError := '职员编号错误';
end;

function TExcelCellCheckList.CheckCell_KUSerCode(AData: OleVariant; var AError: string): Boolean;
begin
  if not CheckCell_Empty(AData,AError) then Exit(False);
  Result := Assigned(Goo.Local.GetUserCode<TStorable_KType>(AData));
  if not Result then  AError := '仓库编号错误';
end;

function TExcelCellCheckList.CheckCell_MUSerCode(AData: OleVariant; var AError: string): Boolean;
begin
  if not CheckCell_Empty(AData,AError) then Exit(False);
  Result := Assigned(Goo.Local.GetUserCode<TStorable_MType>(AData));
  if not Result then  AError := '门店编号错误';
end;

function TExcelCellCheckList.CheckCell_PUSerCode(AData: OleVariant; var AError: string): Boolean;
begin
  if not CheckCell_Empty(AData,AError) then Exit(False);
  Result := Assigned(Goo.Local.GetUserCode<TStorable_PType>(AData));
  if not Result then  AError := '商品编号错误';
end;

function TExcelCellCheckList.CheckDataRow(AColName: string; AData: OleVariant; var AError: string): Boolean;
begin
  Result := True;
  if not ContainsKey(AColName) then Exit;
  Result := Items[AColName](AData,AError);
  if not Result and not AError.StartsText(AColName,AError) then AError := AColName +':'+ AError;
end;

function TExcelCellCheckList.GetUseCheckBUSerCode: Boolean;
begin
  Result := ContainsKey('单位编号');
end;

function TExcelCellCheckList.GetUseCheckEUSerCode: Boolean;
begin
  Result := ContainsKey('职员编号');
end;

function TExcelCellCheckList.GetUseCheckKUSerCode: Boolean;
begin
  Result := ContainsKey('仓库编号');
end;

function TExcelCellCheckList.GetUseCheckMUSerCode: Boolean;
begin
  Result := ContainsKey('门店编号');
end;

function TExcelCellCheckList.GetUseCheckPUSerCode: Boolean;
begin
  Result := ContainsKey('商品编号');
end;

procedure TExcelCellCheckList.SetUseCheckBUSerCode(const Value: Boolean);
begin
  if Value then Self.TryAdd('单位编号',CheckCell_BUSerCode) else Self.Remove('单位编号');
end;

procedure TExcelCellCheckList.SetUseCheckEUSerCode(const Value: Boolean);
begin
  if Value then Self.TryAdd('职员编号',CheckCell_EUSerCode) else Self.Remove('职员位编号');
end;

procedure TExcelCellCheckList.SetUseCheckKUSerCode(const Value: Boolean);
begin
  if Value then Self.TryAdd('仓库编号',CheckCell_KUSerCode) else Self.Remove('仓库编号');
end;

procedure TExcelCellCheckList.SetUseCheckMUSerCode(const Value: Boolean);
begin
  if Value then Self.TryAdd('门店编号',CheckCell_MUSerCode) else Self.Remove('门店编号');
end;

procedure TExcelCellCheckList.SetUseCheckPUSerCode(const Value: Boolean);
begin
  if Value then Self.TryAdd('商品编号',CheckCell_PUSerCode) else Self.Remove('商品编号');
end;

end.
