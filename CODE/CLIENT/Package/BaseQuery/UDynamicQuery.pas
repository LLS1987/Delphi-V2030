unit UDynamicQuery;

interface

uses
  UBaseQuery;

type
  TDynamicQuery = class(TBaseQuery)
  protected
    procedure iniForm;override;
  end;


implementation

uses
  UComvar;

{ TDynamicQuery }

procedure TDynamicQuery.iniForm;
begin
  inherited;
  LayoutFileName := self.ParamList.AsString('@LayoutFileName');
end;

initialization
  Goo.Reg.RegisterClass(TDynamicQuery);

end.
