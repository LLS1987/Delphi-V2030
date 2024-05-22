unit UModuleBasicInfo;

interface

uses
  UModuleUnit, System.JSON, FireDAC.Comp.Client;

type

  TModuleBasicInfo = class(TModuleUnit)
  private
    //function OpenSQL(const ASQL: string):Integer;
  published
    function GetEmployee(const ARec:Integer):TJSONObject;
  end;

implementation

uses
  System.SysUtils;

{ TModuleBasicInfo }

function TModuleBasicInfo.GetEmployee(const ARec: Integer): TJSONObject;
var ds:TFDQuery;
begin
  ds := TFDQuery.Create(nil);
  try
    ds.Connection := FDConnection1;
    ds.Open('select * from DRT.dbo.employee where rec = '+ARec.ToString);
    if not ds.Active or (ds.RecordCount=0) then Exit;
    Result := TJSONObject.Create;

    Result.AddPair('usercode', ds.FieldByName('fullname').AsString);
    Result.AddPair('fullname', ds.FieldByName('fullname').AsString);
    Result.AddPair('posid',    ds.FieldByName('posid').AsInteger);
  finally
    ds.Free;
  end;
end;

end.
