unit UPrintItem;

interface

uses
  System.Generics.Collections, System.Rtti, System.SysUtils, System.Types,
  System.Generics.Defaults, Datasnap.DBClient, DB;

type
  TValueType=(vtString,vtDouble,vtInteger,vtDate,vtDoubleNoTotal,vtTime);//数值类型
  PPrintItem=^TPrintItem;
  TPrintItem=record
    Name:String;
    Value:OleVariant;
    DataType: TValueType;
  end;

  TPrintItemList = class(TObjectDictionary<string,PPrintItem>)
  private
    procedure CreateHeaderField(ADataSet: TClientDataSet);
    procedure SaveHeaderData(ADataSet: TClientDataSet);
  protected
    procedure ValueNotify(const Value: PPrintItem; Action: TCollectionNotification); override;
    procedure AddDefaultItems; virtual;
  public
    procedure Add(const AName: string; const Avalue: Olevariant; const AvalueType: TValueType = vtString); overload;
    procedure Add(const AName: string; const Avalue: TDate); overload;
    procedure Add(const AName: string; const Avalue: TDateTime); overload;
    procedure Add(AItem:TPrintItem); overload;
    function SaveToData: OleVariant;
  end;

  TPrintItems = class(TPrintItemList)
  protected
    procedure AddDefaultItems; override;
  public
    procedure Assign(ASource:TPrintItemList);
  end;

const
  MAX_ITEM_COUNT=255;

implementation

uses
  System.Math, MidasLib, System.Variants;

{ TPrintItemList }

procedure TPrintItemList.Add(AItem: TPrintItem);
begin
  Add(AItem.Name,AItem.Value,AItem.DataType);
end;

procedure TPrintItemList.Add(const AName: string; const Avalue: TDate);
begin
  Add(AName,DateToStr(Avalue));
end;

procedure TPrintItemList.Add(const AName: string; const Avalue: TDateTime);
begin
  Add(AName,FormatDateTime('YYYY-MM-DD HH:MM:SS',Avalue));
end;

procedure TPrintItemList.AddDefaultItems;
begin
  Add('RWX','RWX');
end;

procedure TPrintItemList.CreateHeaderField(ADataSet: TClientDataSet);
begin
  try
    for var Key in Keys do
    begin
      case Items[Key]^.DataType of
        vtString:
          ADataSet.FieldDefs.Add(Copy(Items[Key]^.Name,0,30),ftString,Max(Length(VarToStr(Items[Key]^.Value)),50));
        vtInteger:
          ADataSet.FieldDefs.Add(Copy(Items[Key]^.Name,0,30),ftInteger);
        vtDouble:
          ADataSet.FieldDefs.Add(Copy(Items[Key]^.Name,0,30),ftFloat);
      else
        ADataSet.FieldDefs.Add(Copy(Items[Key]^.Name,0,30),ftString,max(Length(VarToStr(Items[Key]^.Value)),50));
      end;
    end;
    ADataSet.CreateDataSet;
  except
    on E:Exception do
      raise Exception.CreateFmt('生成打印表头字段失败,错误内容:%s',[e.Message]);
  end;
end;

procedure TPrintItemList.SaveHeaderData(ADataSet: TClientDataSet);
begin
  try
    ADataSet.Append;
    for var Key in Keys do
    begin
      ADataSet.FieldByName(copy(Items[Key]^.Name,0,30)).Value:= Items[Key]^.Value;
    end;
    ADataSet.Post;
  except
    on E:Exception do
      raise Exception.CreateFmt('生成打印表头数据失败,错误内容:%s',[e.Message]);
  end;
end;

function TPrintItemList.SaveToData: OleVariant;
var
  cdsTemp:TClientDataSet;
begin
  AddDefaultItems;
  cdsTemp:= TClientDataSet.Create(nil);
  try
    //生成表头字段
    CreateHeaderField(cdsTemp);
    //生成表数据
    SaveHeaderData(cdsTemp);
    Result:= cdsTemp.Data;
  finally
    cdsTemp.Free;
  end;
end;

procedure TPrintItemList.ValueNotify(const Value: PPrintItem; Action: TCollectionNotification);
begin
  inherited;
  if (Action = cnRemoved) then Dispose(Value);
end;

procedure TPrintItemList.Add(const AName: string; const Avalue: Olevariant; const AvalueType: TValueType);
var p:PPrintItem;
begin
  if TryGetValue(AName,p) then
  begin
    p^.Value     := Avalue;
    p^.DataType  := AvalueType;
  end
  else
  begin
    if Count >= MAX_ITEM_COUNT then Exit;
    New(p);
    p^.Name      := AName;
    p^.Value     := Avalue;
    p^.DataType  := AvalueType;
    TryAdd(AName,p);
  end;
//  AddOrSetValue(AName,p);
end;

{ TPrintItems }

procedure TPrintItems.AddDefaultItems;
begin
  Add('公司全名','');
  Add('公司电话','');
  Add('公司帐号','');
  Add('公司税号','');
  Add('公司地址','');
end;

procedure TPrintItems.Assign(ASource: TPrintItemList);
begin
  Clear;
  for var Key in ASource.Keys do
    Add(ASource.Items[Key]^);
end;

end.
