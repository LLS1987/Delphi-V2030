unit UComDBStorable;

interface

uses
  System.SysUtils,UClientModule, DB, Datasnap.DBClient,RTTI, TypInfo,Types,
  UComObject, UParamList, Vcl.DBGrids, System.Classes, UComConst,
  System.Generics.Collections;

type
  /// 查询匹配方式      右匹配(%X)、左匹配(x%)、全匹配(%x%)。
  TSelectMatchType = (smtRight, smtLeft, smtAll);
  //数据库主表
  TTable = class(TCustomAttribute)
  private
    FName: string;
    FTitle: string;
    FMatchType: TSelectMatchType;
  public
    constructor Create(ATableName, ATitle: string; AMatchType: TSelectMatchType=smtLeft);
    //表名
    property Name: string read FName write FName;
    //表体
    property Title: string read FTitle write FTitle;
    //匹配方式
    property MatchType : TSelectMatchType read FMatchType write FMatchType;
  end;
  //从表
  TTableSub = class sealed(TCustomAttribute)
  private
    FName: string;
    FJoinCondition: string;
    FJoinMode: string;
    FTitle: string;
  public
    constructor Create(ATableName, ATitle, AJoinMode, AJoinCondition: string);
    //表名
    property Name: string read FName write FName;
    //表体
    property Title: string read FTitle write FTitle;
    ///连接模式       如：left join、inner join、left outer join等。
    property JoinMode : string read FJoinMode write FJoinMode;
    ///连接条件       如：主表.ID=TableName.xxx and 主表.ID2=Table.yyy等。
    property JoinCondition : string read FJoinCondition write FJoinCondition;
  end;
  ///动态模糊查询Where条件自定义描述类。

  //字段
  TFieldInfo = class sealed(TCustomAttribute)
  private
    FFieldName: string;
    FTitle: string;
    FIDENTITY: Boolean;
    FFieldAlias: string;
    FVisible: Boolean;
    FFixed: Boolean;
    FTableName: string;
    FWidth: Integer;
    FColnumDisplayText: TDictionary<string,string>;
  public
    constructor Create(ATableName,AFieldName, ATitle: string;AWidth:Integer=80;AFieldAlias:string='';AIDENTITY:Boolean=False;AFixed:Boolean=False;AVisible:Boolean=True);overload;
    //只关注于表格
    constructor Create(AFieldName, ATitle: string;AWidth:Integer=80;AVisible:Boolean=True);overload;
    destructor Destroy; override;
    //用于列表展示
    property ColnumDisplayText :TDictionary<string,string> read FColnumDisplayText;
    //function SelectExists()Boolean;;
    property TableName: string read FTableName write FTableName;
    //字段名
    property FieldName: string read FFieldName write FFieldName;
    //字段别名      如：select s_values as xxx from systeminfo中的xxx。
    property FieldAlias : string read FFieldAlias write FFieldAlias;
    //标题，用于表格展示
    property Title: string read FTitle write FTitle;
    //宽度，用于表格展示
    property Width: Integer read FWidth write FWidth;
    //是否自增
    property IDENTITY:Boolean read FIDENTITY write FIDENTITY;
    /// 是否为必须select的字段，比如ID字段。默认False。
    property Fixed : Boolean read FFixed write FFixed;
    /// 字段是否被勾选。
    property Visible : Boolean read FVisible write FVisible;
  end;
  //定义用于展示数据的表格控件
  TViewGrid = TDBGrid;
  //存储仓库
  TStorable = class(TObject)
  private
    FSelectSQL : string;
    FSelectMatchType:TSelectMatchType;
    FWheres: TStrings;
    FSelects: TStrings;
    FRec: Integer;
    FTypeID: string;
    FUserCode: string;
    FSonnum: Integer;
    FParID: string;
    FFullName: string;
    function GetFieldTitle(const AFieldName: string): string;
    procedure SetFieldTitle(const AFieldName, Value: string);
    function getAttributeFieldName(const AProp: string): string;
    procedure setAttributeFieldName(const AProp, Value: string);
    function getAttributeFieldCaption(const AProp: string): string;
    procedure setAttributeFieldCaption(const AProp, Value: string);
    function getAttributeFieldVisible(const AProp: string): Boolean;
    procedure setAttributeFieldVisible(const AProp: string; const Value: Boolean);
    function GetTitle: string;
    function getAttributeFieldDisplayText(const AProp: string): TDictionary<string,string>;
  protected
    procedure IniSelectSQL; virtual;
  public
    constructor Create;virtual;
    destructor Destroy; override;
    procedure InitViewTable(AGrid: TViewGrid); virtual;
    property SelectSQL:string read FSelectSQL;
    function AsTValue(ATypeInfo: PTypeInfo; var AValue: TValue): Boolean;
    function AsType<T>: T;
    //插入SQL语句
    function Insert: string;
    //查询表
    function Select: string;
    //获取字段标题
    //property FieldCaption[const AFieldName: string]:string     read GetFieldTitle write SetFieldTitle;
    property AttributeFieldCaption[const AProp: string]:string read getAttributeFieldCaption write setAttributeFieldCaption;
    property AttributeFieldName[const AProp:string]: string    read getAttributeFieldName write setAttributeFieldName;
    property AttributeFieldVisible[const AProp:string]:Boolean read getAttributeFieldVisible write setAttributeFieldVisible;
    property AttributeFieldDisplayText[const AProp:string]: TDictionary<string,string> read getAttributeFieldDisplayText;
    //设置
    //function SetAttributeValue(const PropName, AttributeValue: string): Boolean;
    property Wheres:TStrings read FWheres;
    property Selects:TStrings read FSelects;
    property Title: string read GetTitle;
    //基础信息字段
    [TFieldInfo('Rec','主键REC',80,False)]
    property Rec:Integer read FRec write FRec;
    [TFieldInfo('TypeID','主键TypeID',80,False)]
    property TypeID:string read FTypeID write FTypeID;
    [TFieldInfo('ParID','父类编码',80,False)]
    property ParID:string read FParID write FParID;
    [TFieldInfo('Sonnum','儿子数',80,False)]
    property Sonnum:Integer read FSonnum write FSonnum;
    [TFieldInfo('UserCode','编号',100)]
    property UserCode: string read FUserCode write FUserCode;
    [TFieldInfo('FullName','名称',200)]
    property FullName: string read FFullName write FFullName;
  end;
  TStorableClass = class of TStorable;
  //商品
  [TTable('ptype','商品')]
  TStorable_PType = class(TStorable)
  private
    FUnit1: string;
    FType: string;
    FStandard: string;
    FArea: Integer;
  public
    [TFieldInfo('Unit1','基本单位')]
    property Unit1: string read FUnit1 write FUnit1;
    [TFieldInfo('Standard','规格')]
    property Standard: string read FStandard write FStandard;
    [TFieldInfo('Type','剂型')]
    property PType: string read FType write FType;
    [TFieldInfo('Area','Area',80,False)]
    property Area: Integer read FArea write FArea;
  end;
  [TTable('cstype','厂商')]
  TStorable_CSType = class(TStorable)

  end;
  //门店
  [TTable('posinfo','门店')]
  TStorable_MType = class(TStorable)
  public
  end;
  //职员
  [TTable('employee','职员')]
  TStorable_EType = class(TStorable)
  private
    FPosid: Integer;
    FSex: string;
    FPosName: string;
    FDepartment: string;
    FTel: string;
  public
    constructor Create;override;
    [TFieldInfo('Department','所在部门')]
    property Department: string read FDepartment write FDepartment;
    [TFieldInfo('Tel','电话')]
    property Tel: string read FTel write FTel;
    [TFieldInfo('Sex','性别',60)]
    property Sex: string read FSex write FSex;
    [TFieldInfo('Posid','Posid',80,False)]
    property Posid: Integer read FPosid write FPosid;
    [TFieldInfo('PosName','所属门店',100)]
    property PosName: string read FPosName write FPosName;
  end;
  //仓库
  [TTable('stock','仓库')]
  TStorable_KType = class(TStorable)
  public
  end;
  //仓库
  [TTable('btype','单位')]
  TStorable_BType = class(TStorable)
  private
    FUnitType: Integer;
    FProjectType: Integer;
    FPerson: string;
    FName: string;
  public
    constructor Create;override;
    [TFieldInfo('Name' ,'单位简名',80,False)]
    property Name: string read FName write FName;
    [TFieldInfo('ifUnitType' ,'单位类型',80)]
    property UnitType: Integer read FUnitType write FUnitType;
    [TFieldInfo('ProjectType','企业类型',80)]
    property ProjectType: Integer read FProjectType write FProjectType;
    [TFieldInfo('Person' ,'联系人',60)]
    property Person:string read FPerson write FPerson;
  end;

  TStorableDictionary = class(TObjectDictionary<Integer,TStorable>)
  private
    FTypeIDDictionary:TDictionary<string,Integer>;
    FUSerCodeDictionary:TDictionary<string,Integer>;
  public
    constructor Create;overload;
    destructor Destroy; override;
    procedure Add(AItem:TStorable); overload;
    procedure ClearAndFree;
    function First:TStorable;
    //GetRec       列表
    function GetRec<T>(ARec:Integer): T;
    //GetTypeID    列表
    function GetTypeID<T>(ATypeID:string): T;
    //GetUserCode  列表
    function GetUserCode<T>(AUserCode:string): T;
    //GetValue     具体属性的值
    function GetValue<T>(APropName:string;ARec:Integer):T; overload;
    function GetValue(APropName:string;ARec:Integer):string; overload;
  end;
  //管理基本信息本地化的类：TStorableDictionary 系统统一加载和释放
  TStorableManage = class
  private
    FBasicData : array[Low(TBasicType)..High(TBasicType)] of TStorableDictionary;
    function DataToObject(ds:TClientDataSet ;AStorable:TStorableClass):TStorable;
    procedure LoadBtype(ADic:TStorableDictionary);
    procedure LoadPtype(ADic:TStorableDictionary);
    procedure LoadEtype(ADic:TStorableDictionary);
    procedure LoadMtype(ADic:TStorableDictionary);
    procedure LoadKtype(ADic:TStorableDictionary);
    function GetBasicData(ABasicType: TBasicType): TStorableDictionary;overload;
    function GetBasicData(ABasicClass: string): TStorableDictionary;overload;
  public
    constructor Create;
    destructor Destroy; override;
    //GetRec       列表
    function GetRec<T>(ARec:Integer): T;
    //GetTypeID    列表
    function GetTypeID<T>(ATypeID:string): T;
    //GetUserCode  列表
    function GetUserCode<T>(AUserCode:string): T;
    property BasicData[ABasicType:TBasicType]: TStorableDictionary read GetBasicData ;//write SetBasicData;
  end;

implementation

uses
  UComvar, System.Variants;

{ TStorable }

function TStorable.AsTValue(ATypeInfo: PTypeInfo; var AValue: TValue): Boolean;
begin
  Result := True;
  case ATypeInfo^.Kind of
    tkClass:
      TValue.Make(@Self, ATypeInfo, AValue);
    else
      Result := False;
  end;
end;

function TStorable.AsType<T>: T;
var
  LTypeInfo: PTypeInfo;
  LValue: TValue;
begin
  LTypeInfo := System.TypeInfo(T);
  if AsTValue(LTypeInfo, LValue) then Result := LValue.AsType<T>;
end;

constructor TStorable.Create;
begin
  FWheres  := TStringList.Create;
  FSelects := TStringList.Create;
  IniSelectSQL;
end;

destructor TStorable.Destroy;
begin
  if Assigned(FWheres) then FreeAndNil(FWheres);
  if Assigned(FSelects) then FreeAndNil(FSelects);
  inherited;
end;

function TStorable.getAttributeFieldCaption(const AProp: string): string;
var
  Context: TRttiContext;
  typ: TRttiType;
  Prop: TRttiProperty;
begin
  Context := TRttiContext.Create;
  try
    typ := Context.GetType(ClassType);
    Prop:= typ.GetProperty(AProp);
    if not Assigned(Prop) then Exit;
    Result := Prop.GetAttribute<TFieldInfo>.Title;
  finally
    Context.Free;
  end;
end;

function TStorable.getAttributeFieldDisplayText(const AProp: string): TDictionary<string,string>;
var
  Context: TRttiContext;
  typ: TRttiType;
  Prop: TRttiProperty;
begin
  Result := nil;
  Context := TRttiContext.Create;
  try
    typ := Context.GetType(ClassType);
    Prop:= typ.GetProperty(AProp);
    if not Assigned(Prop) then Exit;
    Result := Prop.GetAttribute<TFieldInfo>.ColnumDisplayText;
  finally
    Context.Free;
  end;
end;

function TStorable.getAttributeFieldName(const AProp: string): string;
var
  Context: TRttiContext;
  typ: TRttiType;
  Prop: TRttiProperty;
begin
  Context := TRttiContext.Create;
  try
    typ := Context.GetType(ClassType);
    Prop:= typ.GetProperty(AProp);
    if not Assigned(Prop) then Exit;
    Result := Prop.GetAttribute<TFieldInfo>.FieldName;
  finally
    Context.Free;
  end;
end;

function TStorable.getAttributeFieldVisible(const AProp: string): Boolean;
var
  Context: TRttiContext;
  typ: TRttiType;
  Prop: TRttiProperty;
begin
  Context := TRttiContext.Create;
  try
    typ := Context.GetType(ClassType);
    Prop:= typ.GetProperty(AProp);
    if not Assigned(Prop) then Exit;
    Result := Prop.GetAttribute<TFieldInfo>.Visible;
  finally
    Context.Free;
  end;
end;

function TStorable.GetFieldTitle(const AFieldName: string): string;
var
  Context: TRttiContext;
  typ: TRttiType;
  A2: TCustomAttribute;
  Prop: TRttiProperty;
begin
  Context := TRttiContext.Create;
  try
    typ := Context.GetType(ClassType);
    for Prop in typ.GetProperties do
    begin
      for A2 in Prop.GetAttributes do
      begin
        if (A2 is TFieldInfo) and SameText(TFieldInfo(A2).FieldName, AFieldName) then
        begin
          Result := TFieldInfo(A2).Title;
          Break;
        end;
      end;
    end;
  finally
    Context.Free;
  end;
end;

function TStorable.GetTitle: string;
var
  Context:TRttiContext;
  Prop:TRttiProperty;
  typ:TRttiType;
  A1,A2:TCustomAttribute;
begin
  Result := EmptyStr;
  Context := TRttiContext.Create;
  try
    typ := Context.GetType(ClassType);
    for A1 in typ.GetAttributes do
    begin
      if A1 is TTable then
      begin
        Result := TTable(A1).Title;
      end;
    end;
  finally
    Context.Free;
  end;
end;

procedure TStorable.IniSelectSQL;
var
  ctx : TRttiContext;
  t : TRttiType;
  p : TRttiProperty;
  a : TCustomAttribute;

  AValid : Boolean;
  szSQL, szSelect, szWhere, szFrom, szWhereDefault : string;
  szWhereItem, szSelectItem : string;
begin
  szSQL := '';
  szSelect := '';
  szWhere := '';
  szWhereDefault := '1=1';
  ctx := TRttiContext.Create;
  try
    t := ctx.GetType(ClassType);
    //表
    for a in t.GetAttributes do
    begin
      if a is TTable then
      begin
        szFrom := TTable(a).Name+' with(nolock)';
        FSelectMatchType := TSelectMatchType.smtLeft;
      end;
    end;
    for a in t.GetAttributes do
    begin
      if a is TTableSub then
      begin
        szFrom := szFrom + Format(' %s %s with(nolock) on %s',[TTableSub(a).FJoinMode,TTableSub(a).Name,TTableSub(a).JoinCondition]);
      end;
    end;
    //字段
    for p in t.GetProperties do
      for a in p.GetAttributes do
      begin
        if a is TFieldInfo then
        begin
          szSelectItem := TFieldInfo(a).Title;
          //if not TFieldInfo.SelectExists(TFieldInfo(a).FieldAlias) then
            AValid := TFieldInfo(a).Visible;
          //else
          //  AValid := TFieldInfo.SelectChecked(TFieldInfo(a).FieldAlias);
          if AValid or TFieldInfo(a).Fixed then
          begin
            if (TFieldInfo(a).FieldAlias<>EmptyStr) and (TFieldInfo(a).FieldAlias <> TFieldInfo(a).FieldName) then
            begin
              szSelect := szSelect + TFieldInfo(a).FieldName +' as '+TFieldInfo(a).FieldAlias+','
            end
            else
            begin
              szSelect := szSelect + Format('%s.%s,',[TFieldInfo(a).TableName,TFieldInfo(a).FieldName])
            end;

            if AValid then
            begin
              szSelectItem := szSelectItem + '=1;'+TFieldInfo(a).FieldAlias
            end
            else
            begin
              (* 隐藏的固定Select字段不支持自定义。*)
              Continue;
            end;
          end
          else
          begin
            szSelectItem := szSelectItem + '=0;'+TFieldInfo(a).FieldAlias;
          end;
          FSelects.Add(szSelectItem);
        end;
      end;
    if szWhere = '' then
    begin
      szWhere := szWhereDefault;
    end;
    szWhere := szWhere.Substring(0, szWhere.Length-3);
    szSelect := szSelect.TrimRight([',']);
    szSQL := 'select ' + szSelect +' from ' +szFrom + ' where ' +'('+ szWhere+')';
    FSelectSQL := szSQL;
  finally
    ctx.Free;
  end;
end;

procedure TStorable.InitViewTable(AGrid: TViewGrid);
var
  Context:TRttiContext;
  Prop:TRttiProperty;
  typ:TRttiType;
  A1,A2:TCustomAttribute;
begin
  Context := TRttiContext.Create;
  try
    typ := Context.GetType(ClassType);
    for A1 in typ.GetAttributes do
    begin
      if A1 is TTable then
      begin
        for Prop in typ.GetProperties do
        begin
          AGrid.Columns.Clear;
          for A2 in Prop.GetAttributes do
          begin
            if A2 is TFieldInfo then //AHa
            begin
              with AGrid.Columns.Add do
              begin
                FieldName     := TFieldInfo(A2).FieldName;
                Title.Caption := TFieldInfo(A2).Title;
                Width     := 80;
                Visible   := not TFieldInfo(A2).IDENTITY;
              end;
            end;
          end;
        end;
      end;
    end;
  finally
    Context.Free;
  end;
end;

function TStorable.Insert: string;
var
  Context:TRttiContext;
  Prop:TRttiProperty;
  typ:TRttiType;
  A1,A2:TCustomAttribute;
  Sqls,Fields,Values,Value:string;
begin
  Context := TRttiContext.Create;
  try
    Sqls := '';
    Fields := '';
    Values := '';
    typ := Context.GetType(ClassType);
    for A1 in typ.GetAttributes do
    begin
      if A1 is TTable then
      begin
        Sqls := 'Insert Into '+TTable(A1).Name; //获取Insert表名
        for Prop in typ.GetProperties do
        begin
          for A2 in Prop.GetAttributes do
          begin
            if A2 is TFieldInfo then //AHa
            begin
              if TFieldInfo(A2).IDENTITY then Continue;
              
              Fields := Fields + ','+ TFieldInfo(A2).FieldName ;
              // the value of the attribute
              Value := Prop.GetValue(Self).ToString;
              //根据数据类型对属性值加以编辑
              case Prop.GetValue(Self).Kind of
                tkString, tkChar, tkWChar, tkWString, tkUString: Value := QuotedStr(Value);
                tkInteger, tkInt64, tkFloat: Value := Value;
              else
                Value := QuotedStr(Value);
              end;
              Values := Values + ',' + Value ;
            end; //for A2 in Prop.GetAttributes
          end;
        end; //enf of for Prop
        Delete(Fields,1,1);
        Delete(Values,1,1);

        Sqls := Sqls + ' (' + Fields + ') VALUES (' + Values + ');';
        Result := Sqls;
      end; //if A1 is TTable then
    end; //for A1 in typ.GetAttributes do
  finally
    Context.Free;
  end;
end;

function TStorable.Select: string;
var
  Context:TRttiContext;
  Prop:TRttiProperty;
  typ:TRttiType;
  A1,A2:TCustomAttribute;
  Sqls,Fields,Values,Value:string;
begin
  Context := TRttiContext.Create;
  try
    Sqls := '';
    Fields := '';
    Values := '';
    typ := Context.GetType(ClassType);
    for A1 in typ.GetAttributes do
    begin
      if A1 is TTable then
      begin
        for Prop in typ.GetProperties do
        begin
          for A2 in Prop.GetAttributes do
          begin
            if A2 is TFieldInfo then //AHa
            begin
              Fields := Fields + ','+ TFieldInfo(A2).FieldName ;
            end;
          end;
        end;
        Delete(Fields,1,1);
        Sqls := Sqls + ' (' + Fields + ') VALUES (' + Values + ');';
        Result := Format('select %s from %s with(nolock)',[Fields,TTable(A1).Name]);
      end;
    end;
  finally
    Context.Free;
  end;
end;

procedure TStorable.setAttributeFieldCaption(const AProp, Value: string);
var
  Context: TRttiContext;
  typ: TRttiType;
  Prop: TRttiProperty;
begin
  Context := TRttiContext.Create;
  try
    typ := Context.GetType(ClassType);
    Prop:= typ.GetProperty(AProp);
    if not Assigned(Prop) then Exit;
    Prop.GetAttribute<TFieldInfo>.Title := Value;
  finally
    Context.Free;
  end;
end;

procedure TStorable.setAttributeFieldName(const AProp, Value: string);
var
  Context: TRttiContext;
  typ: TRttiType;
  Prop: TRttiProperty;
begin
  Context := TRttiContext.Create;
  try
    typ := Context.GetType(ClassType);
    Prop:= typ.GetProperty(AProp);
    if not Assigned(Prop) then Exit;
    Prop.GetAttribute<TFieldInfo>.FieldName := Value;
  finally
    Context.Free;
  end;
end;

procedure TStorable.setAttributeFieldVisible(const AProp: string;  const Value: Boolean);
var
  Context: TRttiContext;
  typ: TRttiType;
  Prop: TRttiProperty;
begin
  Context := TRttiContext.Create;
  try
    typ := Context.GetType(ClassType);
    Prop:= typ.GetProperty(AProp);
    if not Assigned(Prop) then Exit;
    Prop.GetAttribute<TFieldInfo>.Visible := Value;
  finally
    Context.Free;
  end;
end;

procedure TStorable.SetFieldTitle(const AFieldName, Value: string);
var
  Context: TRttiContext;
  typ: TRttiType;
  A2: TCustomAttribute;
  Prop: TRttiProperty;
begin
  Context := TRttiContext.Create;
  try
    typ := Context.GetType(ClassType);
    for Prop in typ.GetProperties do
    begin
      for A2 in Prop.GetAttributes do
      begin
        if (A2 is TFieldInfo) and SameText(TFieldInfo(A2).FieldName, AFieldName) then
        begin
          TFieldInfo(A2).Title := Value;
          Break;
        end;
      end;
    end;
  finally
    Context.Free;
  end;
end;

{ TTable }

constructor TTable.Create(ATableName, ATitle: string; AMatchType: TSelectMatchType);
begin
  FName  := ATableName;
  FTitle := ATitle;
  FMatchType := AMatchType;
end;

{ TFieldInfo }

constructor TFieldInfo.Create(ATableName,AFieldName, ATitle: string;AWidth:Integer;AFieldAlias:string;AIDENTITY:Boolean;AFixed:Boolean;AVisible:Boolean);
begin
  FColnumDisplayText := TDictionary<string,string>.Create;
  FTableName := ATableName;
  FFieldName := AFieldName;
  FTitle     := ATitle;
  FWidth     := AWidth;
  FIDENTITY  := AIDENTITY;
  FFieldAlias:= AFieldAlias;
  FFixed     := AFixed;
  FVisible   := AVisible;
end;

constructor TFieldInfo.Create(AFieldName, ATitle: string; AWidth: Integer; AVisible: Boolean);
begin
  inherited Create;
  FColnumDisplayText := TDictionary<string,string>.Create;
  FieldName := AFieldName;
  Title     := ATitle;
  Width     := AWidth;
  Visible   := AVisible;
end;

destructor TFieldInfo.Destroy;
begin
  if Assigned(FColnumDisplayText) then FreeAndNil(FColnumDisplayText);  
  inherited;
end;

{ TTableSub }

constructor TTableSub.Create(ATableName, ATitle, AJoinMode, AJoinCondition: string);
begin
  FName   := ATableName;
  FTitle  := ATitle;
  FJoinMode      := AJoinMode;
  FJoinCondition := AJoinCondition;
end;

{ TStorableManage }

constructor TStorableManage.Create;
begin

end;

function TStorableManage.DataToObject(ds: TClientDataSet; AStorable: TStorableClass): TStorable;
var Context:TRttiContext;
  Prop:TRttiProperty;
  typ:TRttiType;
  AFieldName:string;
begin
  Result := AStorable.Create;
  Context := TRttiContext.Create;
  try
    typ := Context.GetType(Result.ClassType);
    for Prop in typ.GetProperties do
    begin
      if not Prop.IsWritable then Continue;
      AFieldName := Prop.Name;
      //获取属性对应的数据库字段
      if Prop.HasAttribute<TFieldInfo> then AFieldName := Prop.GetAttribute<TFieldInfo>.FieldName;
      if AFieldName.IsEmpty then AFieldName := Prop.Name;
      if not Assigned(ds.FindField(AFieldName)) then Continue;
      if VarIsNull(ds.FieldValues[AFieldName]) then Continue;
      Prop.SetValue(Result,TValue.FromVariant(ds.FieldValues[AFieldName]));
    end;
  finally
    Context.Free;
  end;
end;

destructor TStorableManage.Destroy;
begin
  for var i := Low(TBasicType) to High(TBasicType) do
    if Assigned(FBasicData[TBasicType(i)]) then FreeAndNil(FBasicData[TBasicType(i)]);
  inherited;
end;

function TStorableManage.GetBasicData(ABasicType: TBasicType): TStorableDictionary;
begin
  if not Assigned(FBasicData[ABasicType]) then
  begin
    FBasicData[ABasicType] := TStorableDictionary.Create;
    case ABasicType of
      btNo: ;
      btAtype: ;
      btPtype: LoadPtype(FBasicData[ABasicType]);
      btBtype: LoadBtype(FBasicData[ABasicType]);
      btEtype: LoadEtype(FBasicData[ABasicType]);
      btKtype: LoadKtype(FBasicData[ABasicType]);
      btGtype: ;
      btDtype: ;
      btRtype: ;
      btVchType: ;
      btMtype: LoadMtype(FBasicData[ABasicType]);
      btNType: ;
      btCSType: ;
      btLBType: ;
      btOtype: ;
      btFType: ;
    end;

  end;
  Result := FBasicData[ABasicType];
end;

function TStorableManage.GetBasicData(ABasicClass: string): TStorableDictionary;
begin
  Result := nil;
  if ABasicClass = TStorable_PType.ClassName then  Result := BasicData[btPtype]
  else if ABasicClass = TStorable_BType.ClassName then  Result := BasicData[btBtype]
  else if ABasicClass = TStorable_EType.ClassName then  Result := BasicData[btEtype]
  else if ABasicClass = TStorable_KType.ClassName then  Result := BasicData[btKtype]
  else if ABasicClass = TStorable_MType.ClassName then  Result := BasicData[btMtype]
end;

function TStorableManage.GetRec<T>(ARec: Integer): T;
begin
  Result := Default(T);
  var p := GetBasicData(PTypeInfo(System.TypeInfo(T))^.Name);
  if Assigned(p) then Result := p.GetRec<T>(ARec);
end;

function TStorableManage.GetTypeID<T>(ATypeID: string): T;
begin
  Result := Default(T);
  var p := GetBasicData(PTypeInfo(System.TypeInfo(T))^.Name);
  if Assigned(p) then Result := p.GetTypeID<T>(ATypeID);
end;

function TStorableManage.GetUserCode<T>(AUserCode: string): T;
begin
  Result := Default(T);
  var p := GetBasicData(PTypeInfo(System.TypeInfo(T))^.Name);
  if Assigned(p) then Result := p.GetUserCode<T>(AUserCode);
end;

procedure TStorableManage.LoadBtype(ADic: TStorableDictionary);
var ds:TClientDataSet;
begin
  ds := TClientDataSet.Create(nil);
  try
    Goo.DB.OpenSQL('SELECT * FROM dbo.btype',ds);
    ds.First;
    while not ds.Eof do
    begin
      ADic.Add(DataToObject(ds,TStorable_BType));
      ds.Next;
    end;
  finally
    ds.Free;
  end;
end;

procedure TStorableManage.LoadEtype(ADic: TStorableDictionary);
var ds:TClientDataSet;
begin
  ds := TClientDataSet.Create(nil);
  try
    Goo.DB.OpenSQL('SELECT * FROM dbo.employee',ds);
    ds.First;
    while not ds.Eof do
    begin
      ADic.Add(DataToObject(ds,TStorable_EType));
      ds.Next;
    end;
  finally
    ds.Free;
  end;
end;

procedure TStorableManage.LoadKtype(ADic: TStorableDictionary);
var ds:TClientDataSet;
begin
  ds := TClientDataSet.Create(nil);
  try
    Goo.DB.OpenSQL('SELECT * FROM dbo.stock',ds);
    ds.First;
    while not ds.Eof do
    begin
      ADic.Add(DataToObject(ds,TStorable_KType));
      ds.Next;
    end;
  finally
    ds.Free;
  end;
end;

procedure TStorableManage.LoadMtype(ADic: TStorableDictionary);
var ds:TClientDataSet;
begin
  ds := TClientDataSet.Create(nil);
  try
    Goo.DB.OpenSQL('SELECT posid as Rec,posid as typeid,poscode as UserCode,* FROM dbo.posinfo',ds);
    ds.First;
    while not ds.Eof do
    begin
      ADic.Add(DataToObject(ds,TStorable_MType));
      ds.Next;
    end;
  finally
    ds.Free;
  end;
end;

procedure TStorableManage.LoadPtype(ADic: TStorableDictionary);
var ds:TClientDataSet;
begin
  ds := TClientDataSet.Create(nil);
  try
    Goo.DB.OpenSQL('SELECT * FROM dbo.ptype',ds);
    ds.First;
    while not ds.Eof do
    begin
      ADic.Add(DataToObject(ds,TStorable_PType));
      ds.Next;
    end;
  finally
    ds.Free;
  end;
end;

{ TStorableDictionary }

procedure TStorableDictionary.Add(AItem:TStorable);
begin
  if not Assigned(AItem) then Exit;
  Self.AddOrSetValue(AItem.Rec,AItem);
  FTypeIDDictionary.Add(AItem.TypeID,AItem.Rec);
  if not FUSerCodeDictionary.ContainsKey(AItem.UserCode) then FUSerCodeDictionary.Add(AItem.UserCode,AItem.Rec);
end;

procedure TStorableDictionary.ClearAndFree;
begin
  for var _item in Self.Values do  if Assigned(_item) then FreeAndNil(_item);
  Clear;
end;

constructor TStorableDictionary.Create;
begin
  inherited Create;
  FTypeIDDictionary  := TDictionary<string,Integer>.Create;
  FUSerCodeDictionary:= TDictionary<string,Integer>.Create;
end;

destructor TStorableDictionary.Destroy;
begin
  for var _item in Self.Values do  if Assigned(_item) then FreeAndNil(_item);
  if Assigned(FTypeIDDictionary) then FreeAndNil(FTypeIDDictionary);
  if Assigned(FUSerCodeDictionary) then FreeAndNil(FUSerCodeDictionary);
  inherited;
end;

function TStorableDictionary.First: TStorable;
begin
  if Count=0 then Exit;
  for Result in Values do Break;
  //Result := Values.ToArray[0];
end;

function TStorableDictionary.GetRec<T>(ARec:Integer): T;
begin
  Result := Default(T);
  if not ContainsKey(ARec) then Exit;
  Result := self.Items[ARec].AsType<T>;
end;

function TStorableDictionary.GetTypeID<T>(ATypeID:string): T;
begin
  Result := Default(T);
  if not FTypeIDDictionary.ContainsKey(ATypeID) then Exit;
  Result := GetRec<T>(FTypeIDDictionary.Items[ATypeID]);
end;

function TStorableDictionary.GetUserCode<T>(AUserCode:string): T;
begin
  Result := Default(T);
  if not FUSerCodeDictionary.ContainsKey(AUserCode) then Exit;
  Result := GetRec<T>(FUSerCodeDictionary.Items[AUserCode]);
end;

function TStorableDictionary.GetValue(APropName: string; ARec: Integer): string;
var
    RttiContext: TRttiContext;
    RttiType: TRttiType;
    RttiProperty: TRttiProperty;
begin
  Result := EmptyStr;
  if not ContainsKey(ARec) then Exit;
  RttiContext := TRttiContext.Create;
  try
    RttiType := RttiContext.GetType(self.Items[ARec].ClassType);
    RttiProperty := RttiType.GetProperty(APropName);
    if Assigned(RttiProperty) then
    begin
//      var AValue := RttiProperty.GetValue(self.Items[ARec]);
//      var a := GetValue<TValue>(APropName,ARec);
      Result := RttiProperty.GetValue(self.Items[ARec]).ToString;
    end;
  finally
    RttiContext.Free;
  end;
end;

function TStorableDictionary.GetValue<T>(APropName: string; ARec: Integer): T;
var
    RttiContext: TRttiContext;
    RttiType: TRttiType;
    RttiProperty: TRttiProperty;
begin
  Result := Default(T);
  if not ContainsKey(ARec) then Exit;
  RttiContext := TRttiContext.Create;
  try
    RttiType := RttiContext.GetType(self.Items[ARec].ClassType);
    RttiProperty := RttiType.GetProperty(APropName);
    if Assigned(RttiProperty) then
      Result := RttiProperty.GetValue(self.Items[ARec]).AsType<T>;
  finally
    RttiContext.Free;
  end;
end;

{ TStorable_BType }

constructor TStorable_BType.Create;
begin
  inherited;
  with AttributeFieldDisplayText['UnitType'] do
  begin
    AddOrSetValue('0','主销兼供');
    AddOrSetValue('1','供货单位');
    AddOrSetValue('2','销售单位');
    AddOrSetValue('3','主供兼销');
  end;
  with AttributeFieldDisplayText['ProjectType'] do
  begin
    AddOrSetValue('0','药品生产企业');
    AddOrSetValue('1','药品批发经营企业');
    AddOrSetValue('2','营利性医疗机构');
    AddOrSetValue('3','其他企业');
    AddOrSetValue('4','医疗器械生产企业');
    AddOrSetValue('5','医疗器械经营企业');
    AddOrSetValue('6','非营利性医疗机构');
    AddOrSetValue('7','零售企业');
  end;
end;

{ TStorable_EType }

constructor TStorable_EType.Create;
begin
  inherited;
  if Assigned(AttributeFieldDisplayText['Sex']) then
  begin
    with AttributeFieldDisplayText['Sex'] do
    begin
      AddOrSetValue('0','男');
      AddOrSetValue('1','女');
    end;
  end;
end;

end.
