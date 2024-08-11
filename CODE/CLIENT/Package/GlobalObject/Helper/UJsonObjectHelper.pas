unit UJsonObjectHelper;
{
  模仿 superobject 简化JSON的操作
}
interface

uses
  System.JSON, System.Rtti, REST.Json, Datasnap.DBClient, Data.DB;

type
  TJSONValueHelper = class helper for TJSONValue
  public
    function IsObject: Boolean;
    function IsArray : Boolean;
    function CreateDataSet:TClientDataSet;
    function ToClientDataSet(ADataSet:TClientDataSet = nil): TClientDataSet;
  end;

  TJSONObjectHelper = class helper for TJSONObject
  private
    function GetValueA(PairName: string): TJSONArray;
    function GetB(PairName: string): Boolean;
    function GetValueD(PairName: string): Double;
    function GetValueI(PairName: string): integer;
    function GetValueI64(PairName: string): Int64;
    function GetValueO(PairName: string): TJSONObject;
    function GetValueS(PairName: string): string;
    procedure SetValueA(PairName: string; const Value: TJSONArray);
    procedure SetB(PairName: string; const Value: Boolean);
    procedure SetValueD(PairName: string; const Value: Double);
    procedure SetValueI(PairName: string; const Value: integer);
    procedure SetValueI64(PairName: string; const Value: Int64);
    procedure SetValueO(PairName: string; const Value: TJSONObject);
    procedure SetValueS(PairName: string; const Value: string);
    function GetC(PairName: string): Currency;
    procedure SetC(PairName: string; const Value: Currency);
    function GetV(PairName: string): Variant;
    procedure SetV(PairName: string; const Value: Variant);
    function GetT(PairName: string): TValue;
    procedure SetT(PairName: string; const Value: TValue);
  public
    function FindPair(PairName: string; IgnoreCase: Boolean=False):TJSONPair;
    //判断某个字段是否存在
    function Exists(PairName : string) : Boolean;
    //定义字段读取函数
    property S[PairName : string] : string      read GetValueS   write SetValueS;
    property I[PairName : string] : integer     read GetValueI   write SetValueI;
    property I64[PairName : string] : Int64     read GetValueI64 write SetValueI64;
    property D[PairName : string]: Double       read GetValueD   write SetValueD;
    property C[PairName : string] : Currency    read GetC write SetC;
    property V[PairName : string] : Variant     read GetV write SetV;
    property B[PairName : string] : Boolean     read GetB write SetB;
    property T[PairName : string] : TValue     read GetT write SetT;
    property A[PairName : string] : TJSONArray  read GetValueA   write SetValueA;
    property O[PairName : string] : TJSONObject read GetValueO   write SetValueO;
    procedure RemovePairAndNil(const PairName: string);
    function Sort:TJSONObject;
    function JsonToObject<T: class, constructor>(AOptions: TJsonOptions = [joDateIsUTC, joDateFormatISO8601, joBytesFormatArray, joIndentCaseCamel]): T; overload;
    class function ObjectToJson(AObject: TObject; AOptions: TJsonOptions = [joDateIsUTC, joDateFormatISO8601, joBytesFormatArray, joIndentCaseCamel]): TJSONObject;
    class function SO(const s: string = '{}'):TJSONObject;
  end;

  TJSONArrayObjectHelper = class helper for TJSONArray
  public
    function Sort:TJSONArray; overload;
    function Sort<T>(PairName: string):TJSONArray;overload;
  end;

implementation

uses
  System.Variants, System.Generics.Collections, System.Generics.Defaults,
  System.SysUtils, MidasLib, System.Math;

{ TJSONObjectHelper }

function TJSONObjectHelper.Exists(PairName: string): Boolean;
begin
//  Result := Assigned(FindPair(PairName));
  Result := Assigned(Self.Values[PairName]);
end;

function TJSONObjectHelper.GetC(PairName: string): Currency;
begin
  Result := GetValue<Currency>(PairName,0);
end;

function TJSONObjectHelper.GetT(PairName: string): TValue;
begin
  var value := Values[PairName];
  Result := GetValueS(PairName);
  if value is TJSONNumber then
  begin
      if Pos('.',Result.ToString)>0 then Result := GetValueD(PairName)
      else Result := GetValueI64(PairName);
  end else if value is TJSONBool then Result := GetB(PairName);
end;

function TJSONObjectHelper.GetV(PairName: string): Variant;
begin
  Result := null;
  if not Exists(PairName) then Exit;
  Result := GetValue<Variant>(PairName,null);
end;

function TJSONObjectHelper.GetValueA(PairName: string): TJSONArray;
begin
  if PairName = '' then  Exit(nil);
  Self.TryGetValue(PairName,Result);
end;

function TJSONObjectHelper.FindPair(PairName: string; IgnoreCase: Boolean): TJSONPair;
begin
  if not IgnoreCase then Result := self.FindPair(PairName)
  else
  for var item in Self do
  begin
    if SameText(item.JsonString.Value,PairName) then
    begin
      Result := item;
      Break;
    end;
  end;
end;

function TJSONObjectHelper.GetB(PairName: string): Boolean;
begin
  //Result := (FindPair(PairName).JsonValue as TJSONBool).AsBoolean;
  Result := GetValue<Boolean>(PairName,False);
end;

function TJSONObjectHelper.GetValueD(PairName: string): Double;
begin
  Result := GetValue<Double>(PairName,0);
end;

function TJSONObjectHelper.GetValueI(PairName: string): integer;
begin
  Result := GetValue<Integer>(PairName,0);
end;

function TJSONObjectHelper.GetValueI64(PairName: string): Int64;
begin
  Result := GetValue<Int64>(PairName,0);
end;

function TJSONObjectHelper.GetValueO(PairName: string): TJSONObject;
begin
  if PairName = '' then  Exit(nil);
  TryGetValue<TJSONObject>(PairName,Result);
end;

function TJSONObjectHelper.GetValueS(PairName: string): string;
begin
  Result := GetValue<string>(PairName,'');
//  Result := EmptyStr;
//  if not Exists(PairName) then Exit;
//  Result := FindPair(PairName).JsonValue.Value
end;

function TJSONObjectHelper.JsonToObject<T>(AOptions: TJsonOptions): T;
begin
  Result := TJson.JsonToObject<T>(Self,AOptions);
end;

class function TJSONObjectHelper.ObjectToJson(AObject: TObject;  AOptions: TJsonOptions): TJSONObject;
begin
  Result := TJson.ObjectToJsonObject(AObject,AOptions);
end;

procedure TJSONObjectHelper.RemovePairAndNil(const PairName: string);
begin
  var _Pair := Self.RemovePair(PairName);
  if Assigned(_Pair) then FreeAndNil(_Pair);  
end;

procedure TJSONObjectHelper.SetC(PairName: string; const Value: Currency);
begin
  if Exists(PairName) then Self.RemovePair(PairName).Free;
  Self.AddPair(PairName, Value);
end;

procedure TJSONObjectHelper.SetT(PairName: string; const Value: TValue);
begin
  SetV(PairName, Value.AsVariant);
end;

procedure TJSONObjectHelper.SetV(PairName: string; const Value: Variant);
begin
  if Exists(PairName) then Self.RemovePair(PairName).Free;
  case VarType(Value) of
    varEmpty: SetValueO(PairName,nil);
    varNull: SetValueO(PairName,nil);
    varSmallInt,varShortInt,varInteger,varByte,varWord,varLongWord, varInt64:  SetValueI(PairName,Value);
    varSingle,varDouble:      SetValueD(PairName,Value);
    varCurrency:SetC(PairName,Value);
    varBoolean:SetB(PairName,Value);
  else SetValueS(PairName,Value);
  end;
end;

procedure TJSONObjectHelper.SetValueA(PairName: string;  const Value: TJSONArray);
begin
  if Exists(PairName) then Self.RemovePair(PairName).Free;
  Self.AddPair(PairName, Value);
end;

procedure TJSONObjectHelper.SetB(PairName: string; const Value: Boolean);
begin
  if Exists(PairName) then Self.RemovePair(PairName).Free;
  Self.AddPair(PairName, Value);
end;

procedure TJSONObjectHelper.SetValueD(PairName: string; const Value: Double);
begin
  if Exists(PairName) then Self.RemovePair(PairName).Free;
  Self.AddPair(PairName, Value);
end;

procedure TJSONObjectHelper.SetValueI(PairName: string; const Value: integer);
begin
  if Exists(PairName) then Self.RemovePair(PairName).Free;
  Self.AddPair(PairName, Value);
end;

procedure TJSONObjectHelper.SetValueI64(PairName: string; const Value: Int64);
begin
  if Exists(PairName) then Self.RemovePair(PairName).Free;
  Self.AddPair(PairName, Value);
end;

procedure TJSONObjectHelper.SetValueO(PairName: string; const Value: TJSONObject);
begin
  if Exists(PairName) then Self.RemovePair(PairName).Free;
  Self.AddPair(PairName, Value as TJSONObject);
end;

procedure TJSONObjectHelper.SetValueS(PairName: string; const Value: string);
var js : TJSONString;
begin
  //1. 首先查找有没有该字段, 如果有，则直接删除
  if Self.TryGetValue(PairName,js) then Self.RemovePair(PairName).Free; //如果没有free，就会产生内存泄露
  //2. 然后在增加
  Self.AddPair(PairName, Value);
end;

class function TJSONObjectHelper.SO(const s: string): TJSONObject;
begin
  Result := TJSONObject.ParseJSONValue(s) as TJSONObject;
end;

function TJSONObjectHelper.Sort: TJSONObject;
var elementList: TList<TJSONPair>;
begin
  elementList := TList<TJSONPair>.Create;
  try
    for var item in Self do elementList.Add(item);
    elementList.Sort(TComparer<TJSONPair>.Construct(
      function(const Left, Right: TJSONPair): Integer
      begin
        Result := TComparer<string>.Default.Compare(Left.JsonString.Value, Right.JsonString.Value);
      end));

    for var item in elementList do
    begin
      if Exists(item.JsonString.Value) then Self.RemovePair(item.JsonString.Value);
      self.AddPair(item.JsonString,item.JsonValue);
    end;
  finally
    elementList.Free;
  end;
  Result := Self;
end;

{ TJSONArrayObjectHelper }

function TJSONArrayObjectHelper.Sort: TJSONArray;
var elementList: TList<TJSONValue>;
begin
  elementList := TList<TJSONValue>.Create;
  try
    for var item in Self do elementList.Add(item);
    elementList.Sort(TComparer<TJSONValue>.Construct(
        function(const Left, Right: TJSONValue): Integer
        var
          leftObject: TJSONObject;
          rightObject: TJSONObject;
        begin
          // You should do some error checking here and not just cast blindly
          leftObject := TJSONObject(Left);
          rightObject := TJSONObject(Right);

          // Compare here. I am just comparing the ToStrings but you will probably
          // want to compare something else.
          Result := TComparer<string>.Default.Compare(leftObject.ToString, rightObject.ToString);
        end));
    Self.SetElements(elementList);
    Result := Self;
  finally
    //elementList.Free; //TJSONArray  内部自动释放
  end;
end;

function TJSONArrayObjectHelper.Sort<T>(PairName: string): TJSONArray;
var elementList: TList<TJSONValue>;
begin
  elementList := TList<TJSONValue>.Create;
  try
    for var item in Self do elementList.Add(item);
    elementList.Sort(TComparer<TJSONValue>.Construct(
        function(const Left, Right: TJSONValue): Integer
        var
          leftObject,rightObject: T;
        begin
          // You should do some error checking here and not just cast blindly
          Left.TryGetValue<T>(PairName,leftObject);
          Right.TryGetValue<T>(PairName,rightObject);
          // Compare here. I am just comparing the ToStrings but you will probably
          // want to compare something else.
          Result := TComparer<T>.Default.Compare(leftObject, rightObject);
        end));
    Self.SetElements(elementList);
    Result := Self;
  finally
    //elementList.Free; //TJSONArray  内部自动释放
  end;
end;

{ TJSONValueHelper }

function TJSONValueHelper.CreateDataSet: TClientDataSet;
var FieldDef: TFieldDef;
begin
  Result := TClientDataSet.Create(nil);
  if IsObject then
  begin
    Result.FieldDefs.Clear;
    for var _Pair in Self as TJSONObject do
    begin
      FieldDef := Result.FieldDefs.AddFieldDef;
      FieldDef.Name := _Pair.JsonString.Value;
      if _Pair.JsonValue is TJSONNumber then FieldDef.DataType := ftFloat
      else if _Pair.JsonValue is TJSONBool then FieldDef.DataType := ftBoolean
      else
      begin
        FieldDef.DataType := ftString;
        FieldDef.Size     := Max(100,Length(_Pair.JsonValue.Value));
      end;
    end;
    Result.CreateDataSet;
  end;
end;

function TJSONValueHelper.IsArray: Boolean;
begin
  Result := self is TJSONArray;
end;

function TJSONValueHelper.IsObject: Boolean;
begin
  Result := self is TJSONObject;
end;

function TJSONValueHelper.ToClientDataSet(ADataSet:TClientDataSet = nil): TClientDataSet;
var
  JSONObject: TJSONObject;
  JSONArray: TJSONArray;
  JSONValue: TJSONValue;
  Field: TField;
  I: Integer;
begin
  Result := ADataSet;
  Result.DisableControls;
  try
    Result.EmptyDataSet;
    if IsArray then    // [数据集]
    begin
      JSONArray := Self as TJSONArray;
      if Assigned(JSONArray) then
      begin
        for JSONValue in JSONArray do
        begin
          Result.Append;
          for I := 0 to Result.FieldCount - 1 do
          begin
            Field := Result.Fields[I];
            Field.Value := JSONValue.GetValue<Variant>(Field.FieldName);
          end;
          Result.Post;
        end;
      end;
    end else begin     // {单节点}
      JSONObject := Self as TJSONObject;
      try
        if Assigned(JSONObject) then
        begin
          Result.Append;
          for I := 0 to Result.FieldCount - 1 do
          begin
            Field := Result.Fields[I];
            Field.Value := JSONObject.GetValue<Variant>(Field.FieldName);
          end;
          Result.Post;
        end;
      finally
        JSONObject.Free;
      end;
    end;
  finally
    Result.EnableControls;
  end;
end;

end.
