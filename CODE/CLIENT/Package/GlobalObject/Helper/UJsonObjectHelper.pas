unit UJsonObjectHelper;
{
  模仿 superobject 简化JSON的操作
}
interface

uses
  System.JSON, System.Rtti;

type

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
    class function SO(const s: string = '{}'):TJSONObject;
  end;

implementation

uses
  System.Variants;

{ TJSONObjectHelper }

function TJSONObjectHelper.Exists(PairName: string): Boolean;
begin
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
  Result := GetValue<Variant>(PairName);
end;

function TJSONObjectHelper.GetValueA(PairName: string): TJSONArray;
begin
  if PairName = '' then  Exit(nil);
  Self.TryGetValue(PairName,Result);
end;

function TJSONObjectHelper.GetB(PairName: string): Boolean;
begin
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

end.
