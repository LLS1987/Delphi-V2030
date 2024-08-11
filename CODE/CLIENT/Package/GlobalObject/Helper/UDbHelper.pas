unit UDbHelper;

interface
uses
  Vcl.Forms, System.SysUtils, System.Classes, Datasnap.DBClient, Data.DB,
  Winapi.Windows, Winapi.Messages, Vcl.Dialogs, System.JSON;

type
  TClientDataSetHelper = class helper for TClientDataSet
  private
    function GetBoolean(const FieldName: string): Boolean;
    function GetCurrency(const FieldName: string): Currency;
    function GetDateTime(const FieldName: string): TDateTime;
    function GetInteger(const FieldName: string): integer;
    function GetString(const FieldName: string): string;
    function GetVariant(const FieldName: string): Variant;

    procedure SetBoolean(const FieldName: string; const Value: Boolean);
    procedure SetCurrency(const FieldName: string; const Value: Currency);
    procedure SetDateTime(const FieldName: string; const Value: TDateTime);
    procedure SetInteger(const FieldName: string; const Value: integer);
    procedure SetString(const FieldName, Value: string);
    procedure SetVariant(const FieldName: string; const Value: Variant);
  public
    property S[const FieldName: string]: string read GetString write SetString;
    property I[const FieldName: string]: integer read GetInteger write SetInteger;
    property B[const FieldName: string]: Boolean read GetBoolean write SetBoolean;
    property C[const FieldName: string]: Currency read GetCurrency write SetCurrency;
    property D[const FieldName: string]: TDateTime read GetDateTime write SetDateTime;
    property V[const FieldName: string]: Variant read GetVariant write SetVariant;
    function ToJSONObject:TJSONObject;  //数据集转JSON单节点
    function ToJSONArray:TJSONArray;    //数据集转JSON表单
  end;

implementation

uses
  System.Variants, UJsonObjectHelper, System.DateUtils;

{ TClientDataSetHelper }

function TClientDataSetHelper.GetBoolean(const FieldName: string): Boolean;
begin
  var _field := self.FindField(FieldName);
  if not Assigned(_field) then Exit(False);
  Result := _field.AsBoolean;
end;

function TClientDataSetHelper.GetCurrency(const FieldName: string): Currency;
begin
  var _field := self.FindField(FieldName);
  if not Assigned(_field) then Exit(0);
  Result := _field.AsCurrency;
end;

function TClientDataSetHelper.GetDateTime(const FieldName: string): TDateTime;
begin
  var _field := self.FindField(FieldName);
  if not Assigned(_field) then Exit(null);
  Result := _field.AsDateTime;
end;

function TClientDataSetHelper.GetInteger(const FieldName: string): integer;
begin
  var _field := self.FindField(FieldName);
  if not Assigned(_field) then Exit(0);
  Result := _field.AsInteger;
end;

function TClientDataSetHelper.GetString(const FieldName: string): string;
begin
  var _field := self.FindField(FieldName);
  if not Assigned(_field) then Exit(EmptyStr);
  Result := _field.AsString;
end;

function TClientDataSetHelper.GetVariant(const FieldName: string): Variant;
begin
  var _field := self.FindField(FieldName);
  if not Assigned(_field) then Exit(null);
  Result := _field.AsVariant;
end;

procedure TClientDataSetHelper.SetBoolean(const FieldName: string; const Value: Boolean);
begin
  var _field := self.FindField(FieldName);
  if not Assigned(_field) then Exit;  
  _field.AsBoolean := Value;
end;

procedure TClientDataSetHelper.SetCurrency(const FieldName: string; const Value: Currency);
begin
  var _field := self.FindField(FieldName);
  if not Assigned(_field) then Exit;
  _field.AsCurrency := Value;
end;

procedure TClientDataSetHelper.SetDateTime(const FieldName: string; const Value: TDateTime);
begin
  var _field := self.FindField(FieldName);
  if not Assigned(_field) then Exit;
  _field.AsDateTime := Value;
end;

procedure TClientDataSetHelper.SetInteger(const FieldName: string; const Value: integer);
begin
  var _field := self.FindField(FieldName);
  if not Assigned(_field) then Exit;
  _field.AsInteger := Value;
end;

procedure TClientDataSetHelper.SetString(const FieldName, Value: string);
begin
  var _field := self.FindField(FieldName);
  if not Assigned(_field) then Exit;
  _field.AsString := Value;
end;

procedure TClientDataSetHelper.SetVariant(const FieldName: string; const Value: Variant);
begin
  var _field := self.FindField(FieldName);
  if not Assigned(_field) then Exit;
  _field.AsVariant := Value;
end;

function TClientDataSetHelper.ToJSONArray: TJSONArray;
begin
  Result := TJSONArray.Create;
  if not self.Active then Exit;
  if Self.RecordCount=0 then Exit;
  Self.First;
  while not Self.Eof do
  begin
    Result.AddElement(ToJSONObject);
    Self.Next;
  end;
  
end;

function TClientDataSetHelper.ToJSONObject: TJSONObject;
begin
  Result := TJSONObject.SO();
  if not self.Active then Exit;
  if Self.RecordCount=0 then Exit;
  for var f in self.Fields do
  begin
    case f.DataType of
      ftString, ftWideString, ftMemo, ftWideMemo: Result.AddPair(f.FieldName, f.AsString);
      ftSmallint, ftInteger, ftWord, ftAutoInc:  Result.AddPair(f.FieldName, TJSONNumber.Create(f.AsInteger));
      ftFloat, ftCurrency, ftBCD, ftFMTBcd: Result.AddPair(f.FieldName, TJSONNumber.Create(f.AsFloat));
      ftBoolean: Result.AddPair(f.FieldName, TJSONBool.Create(f.AsBoolean));
      ftDate, ftTime, ftDateTime, ftTimeStamp: Result.AddPair(f.FieldName, DateToISO8601(f.AsDateTime));
    else
      Result.V[f.FieldName] := f.Value;
    end;
  end;
    
end;

end.
