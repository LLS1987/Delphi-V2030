unit UComDBStorable;

interface

uses
  System.SysUtils,UClientModule, DB, Datasnap.DBClient,RTTI, TypInfo,Types,
  UComObject, UParamList, Vcl.DBGrids, System.Classes;

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
  public
    constructor Create(ATableName,AFieldName, ATitle: string;AWidth:Integer=80;AFieldAlias:string='';AIDENTITY:Boolean=False;AFixed:Boolean=False;AVisible:Boolean=True);overload;
    //只关注于表格
    constructor Create(AFieldName, ATitle: string;AWidth:Integer=80;AVisible:Boolean=True);overload;
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
    function GetFieldTitle(const AFieldName: string): string;
  protected
    procedure IniSelectSQL; virtual;
  public
    constructor Create;
    destructor Destroy; override;
    procedure InitViewTable(AGrid: TViewGrid); virtual;
    property SelectSQL:string read FSelectSQL;
    //插入SQL语句
    function Insert: string;
    //查询表
    function Select: string;
    //获取字段标题
    property FieldTitle[const AFieldName: string]:string read GetFieldTitle;
    //设置
    //function SetAttributeValue(const PropName, AttributeValue: string): Boolean;
    property Wheres:TStrings read FWheres;
    property Selects:TStrings read FSelects;
  end;

implementation

{ TStorable }

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
  FieldName := AFieldName;
  Title     := ATitle;
  Width     := AWidth;
  Visible   := AVisible;
end;

{ TTableSub }

constructor TTableSub.Create(ATableName, ATitle, AJoinMode, AJoinCondition: string);
begin
  FName   := ATableName;
  FTitle  := ATitle;
  FJoinMode      := AJoinMode;
  FJoinCondition := AJoinCondition;
end;

end.
