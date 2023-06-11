unit UBaseFieldManage;

interface

uses
  Vcl.Controls, System.Generics.Collections, System.Rtti, System.SysUtils;

type
  TFieldItem = class
  private
    FMustField: Boolean;
    FCurrObject: TControl;
    FAReadOnly: Boolean;
    FControlHeight: integer;
    function GetCaption: String;
    function GetConVisible: Boolean;
    function GetEnabled: Boolean;
    function GetLastLabel: String;
    procedure SetAReadOnly(const Value: Boolean);
    procedure SetCaption(const Value: String);
    procedure SetConVisible(const Value: Boolean);
    procedure SetEnabled(const Value: Boolean);
    procedure SetLastLabel(const Value: String);
    procedure SetMustField(const Value: Boolean);
  protected
    function getValue: Variant;virtual;
    procedure SetValue(const Value: Variant);virtual;
  public
    constructor Create;
    destructor Destroy; override;
    property Height:integer  read FControlHeight write FControlHeight;
    property CurrObject:TControl read FCurrObject write FCurrObject;
    property Fieldvalue:Variant read getValue write SetValue;          //字段点的值
    property MustField :Boolean read FMustField write SetMustField;   //是否必须有值
    property ReadOnly:Boolean read FAReadOnly write SetAReadOnly;
    property Caption :String read GetCaption write SetCaption;
    property Visible :Boolean read GetConVisible write SetConVisible;
    property Enabled:Boolean read GetEnabled write SetEnabled;
    property LastLabel:String read GetLastLabel write SetLastLabel;
    function CheckValue(var OutMessage:string):Boolean; virtual;//检查数据是否有效 返回提示信息
    function PrintValue:Variant;virtual;
    procedure SetFocus;
    procedure FieldClear; virtual;
  end;

  TFieldList = class(TObjectDictionary<string,TFieldItem>)
  end;

implementation

{ TFieldItem }

function TFieldItem.CheckValue(var OutMessage: string): Boolean;
begin

end;

constructor TFieldItem.Create;
begin

end;

destructor TFieldItem.Destroy;
begin

  inherited;
end;

procedure TFieldItem.FieldClear;
begin

end;

function TFieldItem.GetCaption: String;
begin

end;

function TFieldItem.GetConVisible: Boolean;
begin

end;

function TFieldItem.GetEnabled: Boolean;
begin

end;

function TFieldItem.GetLastLabel: String;
begin

end;

function TFieldItem.getValue: Variant;
begin

end;

function TFieldItem.PrintValue: Variant;
begin

end;

procedure TFieldItem.SetAReadOnly(const Value: Boolean);
begin
  FAReadOnly := Value;
end;

procedure TFieldItem.SetCaption(const Value: String);
begin

end;

procedure TFieldItem.SetConVisible(const Value: Boolean);
begin

end;

procedure TFieldItem.SetEnabled(const Value: Boolean);
begin

end;

procedure TFieldItem.SetFocus;
begin

end;

procedure TFieldItem.SetLastLabel(const Value: String);
begin

end;

procedure TFieldItem.SetMustField(const Value: Boolean);
begin
  FMustField := Value;
end;

procedure TFieldItem.SetValue(const Value: Variant);
begin

end;

end.
