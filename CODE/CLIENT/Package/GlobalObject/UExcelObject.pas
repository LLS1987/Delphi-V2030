unit UExcelObject;

interface

uses
  UComobject, System.SysUtils, Vcl.Grids, System.Generics.Collections,
  XLSReadWriteII5, XLSSheetData5, System.Classes, UComDBStorable;

type
  TExcelCellCheckList = Class;
  TExcelChecked = record
    RowIndex:Integer;
    Success:Boolean;
    Mgs:string;
  end;
  PExcelChecked = ^TExcelChecked;
  TExcelObject = class(TXLSReadWriteII5)
  private
    FExcelCellCheckList: TExcelCellCheckList;
    FOnImportExcelEvent: TNotifyEvent;
    FOnCheckExcelEvent: TNotifyEvent;
    FGrid:TStringGrid;
    FRowCheckedRecord:TDictionary<Integer,PExcelChecked>;
    FIgnoreException: Boolean;
    FCheckStatusMessage: string;
    function GetCheckDataColIndex: Integer;
    function GetColumnIndex(AName: string): Integer;
    function GetSheetColIndex(AName: string): Integer;
    function GetRowChecked(ARow: Integer): Boolean;
    procedure ClearExcelChecked;
  public
    constructor Create(AFiledName:string);overload;
    destructor Destroy; override;
    property CheckDataColIndex:Integer read GetCheckDataColIndex;
    property ExcelCellCheckList:TExcelCellCheckList read FExcelCellCheckList;
    property OnImportExcelEvent:TNotifyEvent read FOnImportExcelEvent write FOnImportExcelEvent;
    property OnCheckExcelEvent:TNotifyEvent read FOnCheckExcelEvent;
    property ColumnIndex[AName:string]:Integer read GetColumnIndex;
    /// <summary>
    /// 获取行是否检查通过
    /// </summary>
    property RowChecked[ARow:Integer]:Boolean read GetRowChecked;
    /// 导入的时候忽略异常判断
    property IgnoreException :Boolean read FIgnoreException write FIgnoreException;
    /// 检查状态信息
    property CheckStatusMessage :string read FCheckStatusMessage;
    function ReadExcel(AStringGrid:TStringGrid):Boolean; virtual;
    function ReadOneCell(ACol,ARow:Integer):Variant;
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
    ///判断列是否存在
    function FieldExists(AColName:string):Boolean;
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
  if not Assigned(FRowCheckedRecord) then FRowCheckedRecord := TDictionary<Integer,PExcelChecked>.Create;
  ClearExcelChecked;
  if AStringGrid.ColCount <= Sheets[0].LastCol+C_Column_CheckItem_Index then AStringGrid.ColCount := Sheets[0].LastCol+C_Column_CheckItem_Index+1;
  AStringGrid.Cells[Sheets[0].LastCol+C_Column_CheckItem_Index,0] := '数据校验';
  FCheckStatusMessage := EmptyStr;
  var _suc :Integer := 0;
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
    var p : PExcelChecked;
    New(p);
    p^.RowIndex := i;
    p^.Success  := bRowCheck;
    if not bRowCheck then p^.Mgs := ADataErrMsg else Inc(_suc);
    FRowCheckedRecord.Add(i,p);
    Result := Result and bRowCheck;
  end;
  FCheckStatusMessage := Format(' 表格总数据：%d 行；数据校验成功：%d 行；失败：%d 行',[FRowCheckedRecord.Count,_suc,FRowCheckedRecord.Count-_suc]);
  //检查需要验证的列是否存在
  for var item in ExcelCellCheckList do
  begin
    Goo.Msg.CheckAndAbort(ColumnIndex[item.Key]>=0,'需要的列：%s 不存在！',[item.Key]);
  end;
  if Result and Assigned(OnCheckExcelEvent) then OnCheckExcelEvent(AStringGrid);
end;

procedure TExcelObject.ClearExcelChecked;
begin
  if not Assigned(FRowCheckedRecord) then Exit;
  for var _item in FRowCheckedRecord do
  begin
    Dispose(_item.Value);
    FRowCheckedRecord.Remove(_item.Key);
  end;
  FRowCheckedRecord.Clear;
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
  FIgnoreException    := False;
end;

destructor TExcelObject.Destroy;
begin
  if Assigned(FExcelCellCheckList) then FreeAndNil(FExcelCellCheckList);
  ClearExcelChecked;
  if Assigned(FRowCheckedRecord) then FreeAndNil(FRowCheckedRecord);  
  inherited;
end;

function TExcelObject.FieldExists(AColName: string): Boolean;
begin
  Result := GetSheetColIndex(AColName)>=0;
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
  if not Assigned(FGrid) then Exit;  
  for var i := 1 to FGrid.ColCount-1 do
  begin
    if SameText(FGrid.Cells[i,0],AName) then
    begin
      Result := i;
      Break;
    end;
  end;
end;

function TExcelObject.GetRowChecked(ARow: Integer): Boolean;
begin
  if not FRowCheckedRecord.ContainsKey(ARow) then Exit(False);
  Result := FRowCheckedRecord.Items[ARow]^.Success;
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
  if FileName=EmptyStr then Exit(False);  
  try
    Self.Read;
  except
    on E: Exception do
    begin
      Goo.Logger.Error('加载EXCEL表格:%s，错误，%s',[FileName,e.Message]);
      Goo.Msg.ShowError('加载EXCEL表格:%s，错误，%s',[FileName,e.Message]);
      Exit;
    end;
  end;
  AStringGrid.ColCount := Sheets[0].LastCol+2;    //获取表格行
  AStringGrid.RowCount := Sheets[0].LastRow+1;    //获取表格列
  for var irow := 0 to Sheets[0].LastRow + 1 do
  begin
    AStringGrid.Cells[0,irow]  := irow.ToString;
    for var icol := 0 to Sheets[0].LastCol do
    begin
      if Sheets[0].IsDateTime[icol,irow] then
        AStringGrid.Cells[icol+1,irow] := DateTimeToStr(Sheets[0].AsDateTime[icol,irow])
      else AStringGrid.Cells[icol+1,irow] := Sheets[0].AsString[icol,irow];
    end;
  end;
  Result := True;
  AStringGrid.Cells[0,0] := '行号';
  FGrid := AStringGrid;
end;

function TExcelObject.ReadOneCell(ACol, ARow: Integer): Variant;
begin

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
  if not CheckCell_Empty(AData,AError) then Exit(False);
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
  if Value then Self.TryAdd('职员编号',CheckCell_EUSerCode) else Self.Remove('职员编号');
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
