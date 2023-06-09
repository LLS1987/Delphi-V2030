unit UComObject;

interface

uses
  UGlobalInterface, System.Classes, System.SysUtils,
  System.Generics.Collections, System.Rtti, UComConst, Vcl.Forms, Vcl.Controls,
  UParamList;

type
  //基类
  TBaseCommObject = class(TInterfacedPersistent,IBase)
  private
    FGlobalObject: TObject;
  protected
    {IBase}
    function GetObject: TObject;
    property GlobalObject:TObject read FGlobalObject;
  public
    constructor Create(AOwner: TObject);
  end;
  //注册工厂类     类似原生的：System.Classes.TRegGroup
  TClassDictionary = TDictionary<string, TValue>;
  TRegisterClassItem = record
    ClassName: string;              //注册名称
    ClassObject:TFormClass;             //类
    ClassMethod:TMethod;            //类方法
    ClassVisible:TMethod;           //是否可用（类方法）
    RegisterType:TRegisterType;     //注册类型
    VersFlags:TLimitVers;           //类版本
    LimitID:integer;                //权限ID
    SubLimit:Integer;               //权限子节点
  end;
  PRegisterClassItem = ^TRegisterClassItem;
  TRegisterClassVisibleEvent = function:boolean of object;
  TRegisterClassEvent = function(AParam:TParamList = nil):boolean of object;
  TRegisterClassFactory = class(TBaseCommObject)
  private
    var
    FClassList: TClassDictionary;
    FGroupClasses: TList<PRegisterClassItem>;
    function GetItem(const AClass:string):TRegisterClassItem;overload;
    function GetItem(const AClass:string; AType:TRegisterType):TRegisterClassItem;overload;
    function CheckItem(p:TRegisterClassItem):Boolean;
  public
    constructor Create(AOwner: TObject);
    destructor Destroy; override;
    //注册 类
    procedure RegisterClass(AClass:TFormClass; AVers: TLimitVers=[]; ALimit:Integer=-1;ASubLimit:Integer=-1);overload;
    procedure RegisterClass(AClass:TFormClass; AVisible:TRegisterClassVisibleEvent; AVers: TLimitVers=[]; ALimit:Integer=-1;ASubLimit:Integer=-1);overload;
    //注册方法，注意这里的方法是 published
    procedure RegisterClass(AName:string; AClass:TRegisterClassEvent; AVers: TLimitVers=[]; ALimit:Integer=-1;ASubLimit:Integer=-1);overload;
    procedure RegisterClass(AName:string; AClass:TRegisterClassEvent; AVisible:TRegisterClassVisibleEvent; AVers: TLimitVers=[]; ALimit:Integer=-1;ASubLimit:Integer=-1);overload;
    //调用
    function CreateFormClass(AClass:string; AParam:TParamList=nil):TForm;
    function CallFormClass(AClass:string; AParam:TParamList=nil):TForm;
    function ShowModal(AClass:string; AParam:TParamList=nil):TModalResult;
    function Run(AName:string; AParam:TParamList=nil):Boolean;
  end;

implementation

uses
  System.Variants;

constructor TBaseCommObject.Create(AOwner: TObject);
begin
  inherited Create;
  FGlobalObject := AOwner;
end;

function TBaseCommObject.GetObject: TObject;
begin
  Result := Self;
end;

{$REGION 'TRegisterClassFactory 类实现'}

function TRegisterClassFactory.CallFormClass(AClass: string; AParam: TParamList): TForm;
begin
  var rf := GetItem(AClass,rmtForm);
  if Assigned(rf.ClassObject) then
  begin
    Result := rf.ClassObject.Create(Application);
    try
      if Assigned(AParam) then (Result as IForm).SetParamList(AParam);
      //Supports
      case Result.FormStyle of
        fsMDIChild :
        begin
          Result.WindowState := TWindowState.wsMaximized;
          Result.Show;
        end
      else
        Result.ShowModal;
      end;
      if Assigned(AParam) then AParam.Assign((Result as IForm).GetParamList);
    finally
      if Assigned(Result) and (Result.FormStyle <> fsMDIChild) then FreeAndNil(Result);
    end;
  end;
end;

function TRegisterClassFactory.CheckItem(p: TRegisterClassItem): Boolean;
begin
  Result := True;
end;

constructor TRegisterClassFactory.Create(AOwner: TObject);
begin
  inherited Create(AOwner);
  FGroupClasses := TList<PRegisterClassItem>.Create;
end;

function TRegisterClassFactory.CreateFormClass(AClass: string; AParam: TParamList): TForm;
begin
  var rf := GetItem(AClass,rmtForm);
  if Assigned(rf.ClassObject) then
  begin
    Result := rf.ClassObject.Create(Application);
    if Assigned(AParam) then (Result as IForm).SetParamList(AParam);
  end;
end;

procedure TRegisterClassFactory.RegisterClass(AClass: TFormClass; AVisible: TRegisterClassVisibleEvent; AVers: TLimitVers; ALimit, ASubLimit: Integer);
var p:PRegisterClassItem;
begin
  New(p);
  p^.ClassName     := AClass.ClassName;
  p^.ClassObject   := AClass;
  p^.ClassVisible  := TMethod(AVisible);
  p^.RegisterType  := rmtForm;
  p^.VersFlags     := AVers;
  p^.LimitID       := ALimit;
  p^.SubLimit      := ASubLimit;
  FGroupClasses.Add(p);
end;

destructor TRegisterClassFactory.Destroy;
begin
  for var p in FGroupClasses do Dispose(p);
  FGroupClasses.Free;
  inherited;
end;

function TRegisterClassFactory.GetItem(const AClass: string): TRegisterClassItem;
begin
  if AClass=EmptyStr then Exit;
  for var p in FGroupClasses do
  begin
    if SameText(p^.ClassName,AClass) then
    begin
      Result := p^;
      Break;
    end;
  end;
end;

function TRegisterClassFactory.GetItem(const AClass: string; AType:TRegisterType): TRegisterClassItem;
begin
  if AClass=EmptyStr then Exit;
  for var p in FGroupClasses do
  begin
    if SameText(p^.ClassName,AClass)  and (p^.RegisterType = AType) then
    begin
      Result := p^;
      Break;
    end;
  end;
end;

procedure TRegisterClassFactory.RegisterClass(AClass: TFormClass; AVers: TLimitVers; ALimit, ASubLimit: Integer);
var p:PRegisterClassItem;
begin
  New(p);
  p^.ClassName     := AClass.ClassName;
  p^.ClassObject   := AClass;
  //p^.ClassVisible  := AVisible;
  p^.RegisterType  := rmtForm;
  p^.VersFlags     := AVers;
  p^.LimitID       := ALimit;
  p^.SubLimit      := ASubLimit;
  FGroupClasses.Add(p);
end;

procedure TRegisterClassFactory.RegisterClass(AName:string; AClass:TRegisterClassEvent; AVisible:TRegisterClassVisibleEvent; AVers: TLimitVers; ALimit, ASubLimit: Integer);
var p:PRegisterClassItem;
begin
  New(p);
  p^.ClassName     := AName;
  p^.ClassMethod   := TMethod(AClass);
  p^.ClassVisible  := TMethod(AVisible);
  p^.RegisterType  := rmtMethod;
  p^.VersFlags     := AVers;
  p^.LimitID       := ALimit;
  p^.SubLimit      := ASubLimit;
  FGroupClasses.Add(p);
end;

function TRegisterClassFactory.Run(AName: string; AParam: TParamList): Boolean;
var exec:TRegisterClassEvent;
begin
  var p := GetItem(AName,rmtMethod);
  if Assigned(p.ClassMethod.Code) then
  begin
    exec   := TRegisterClassEvent(p.ClassMethod);
    Result := exec(AParam);
  end;
end;

procedure TRegisterClassFactory.RegisterClass(AName:string; AClass: TRegisterClassEvent; AVers: TLimitVers; ALimit, ASubLimit: Integer);
begin
  RegisterClass(AName,AClass,nil,AVers,ALimit,ASubLimit);
end;

function TRegisterClassFactory.ShowModal(AClass:string; AParam: TParamList): TModalResult;
begin
  var p := GetItem(AClass,rmtForm);
  if Assigned(p.ClassObject) then
  begin
    var ff := p.ClassObject.Create(Application);
    try
      if Assigned(AParam) then (ff as IForm).SetParamList(AParam);
      //Supports
      Result := ff.ShowModal;
      if Assigned(AParam) then AParam.Assign((ff as IForm).GetParamList);
    finally
      ff.Free;
    end;
  end;
end;

{$ENDREGION}

end.
