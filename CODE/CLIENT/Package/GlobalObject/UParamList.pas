unit UParamList;

interface

uses
  System.Generics.Collections, System.Rtti, System.SysUtils;

type
  //�����ֵ�����
  TParamList = class(TObjectDictionary<string,TValue>)
  protected
  public
    procedure Assign(AParam:TParamList);
    function Exists(const key:string):Boolean;
    procedure Add<T>(const key:string; value:T); overload;
    procedure Add(const key:string; value:TValue); overload;
    procedure Add(const key:string; value:Variant); overload;
    procedure Add(const key:string; value:string); overload;
    procedure Add(const key:string; value:Boolean); overload;
    procedure Add(const key:string; value:Integer); overload;
    procedure Add(const key:string; value:Currency); overload;
    procedure Add(const key:string; value:TObject); overload;
    procedure Add(const key:string; value:TArray); overload;
    function AsValue(const key:string):TValue;overload;
    function AsValue<T>(const key:string):T;overload;
    function AsObject(const key:string):TObject;
    function AsVariant(const key:string):Variant;
    function AsString(const key:string):string;
    function AsBoolean(const key:string):Boolean; overload;
    function AsBoolean(const key:string; default:Boolean):Boolean; overload;
    function AsInteger(const key:string):Integer;
    function AsFloat(const key:string):Double;
    function AsArray(const key:string):TArray;
  end;

implementation

uses
  System.Variants;

procedure TParamList.Add(const key:string; value:TValue);
begin
  AddOrSetValue(key,value);
end;

procedure TParamList.Add(const key: string; value: string);
begin
  Add(key,TValue.From<string>(value));
end;

procedure TParamList.Add(const key: string; value: Boolean);
begin
  Add(key,TValue.From<Boolean>(value));
end;

procedure TParamList.Add(const key: string; value: Integer);
begin
  Add(key,TValue.From<Integer>(value));
end;

procedure TParamList.Add(const key: string; value: Variant);
begin
  Add(key,TValue.From<Variant>(value));
end;

function TParamList.AsBoolean(const key: string): Boolean;
begin
  Result := AsBoolean(key,False);
end;

function TParamList.AsArray(const key: string): TArray;
begin
  Result := nil;
  var value := AsValue(key);
  if not value.IsEmpty then Result := value.AsType<TArray>;
end;

function TParamList.AsBoolean(const key: string; default: Boolean): Boolean;
begin
  Result := default;
  var value := AsValue(key);
  if not value.IsEmpty then Result := value.AsBoolean;
end;

function TParamList.AsFloat(const key: string): Double;
begin
  Result := 0;
  var value := AsValue(key);
  if not value.IsEmpty then Result := value.AsCurrency;
end;

function TParamList.AsInteger(const key: string): Integer;
begin
  Result := 0;
  var value := AsValue(key);
  if not value.IsEmpty then Result := value.AsInteger;
end;

function TParamList.AsObject(const key: string): TObject;
begin
  Result := nil;
  var value := AsValue(key);
  if not value.IsEmpty then Result := value.AsObject;
end;

procedure TParamList.Assign(AParam: TParamList);
begin
  if not Assigned(AParam) then Exit;
  if AParam.Count=0 then Exit;
  for var lKey in AParam.Keys do
    self.AddOrSetValue(lKey, AParam.AsValue(lKey));
end;

function TParamList.AsString(const key: string): string;
begin
  Result := EmptyStr;
  var value := AsValue(key);
  if not value.IsEmpty then
  begin
    case value.Kind of
      tkInteger : Result := value.AsType<Integer>.ToString;
      tkFloat   : Result := value.AsCurrency.ToString;
    else
      Result := value.AsString;
    end;
  end;
end;

function TParamList.AsValue(const key: string): TValue;
begin
  TryGetValue(key,Result);
end;

function TParamList.AsValue<T>(const key: string): T;
begin
  Result := Default(T);
  var value := AsValue(key);
  if not value.IsEmpty then value.TryAsType<T>(Result);
end;

function TParamList.AsVariant(const key: string): Variant;
begin
  Result := Null;
  var value := AsValue(key);
  if not value.IsEmpty then Result := value.AsVariant;
end;

function TParamList.Exists(const key: string): Boolean;
begin
  Result := ContainsKey(key);
end;

procedure TParamList.Add(const key: string; value: TObject);
begin
  Add(key,TValue.From<TObject>(value));
end;

procedure TParamList.Add(const key: string; value: Currency);
begin
  Add(key,TValue.From<Currency>(value));
end;

procedure TParamList.Add(const key: string; value: TArray);
begin
  Add(key,TValue.From<TArray>(value));
end;

procedure TParamList.Add<T>(const key: string; value: T);
begin
  Add(key,TValue.From<T>(value));
end;

end.
