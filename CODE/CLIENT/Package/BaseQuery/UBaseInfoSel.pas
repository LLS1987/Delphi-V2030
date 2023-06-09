unit UBaseInfoSel;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UBaseDialogForm, System.ImageList,
  Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.StdCtrls, Vcl.ExtCtrls,
  Vcl.Buttons, Data.DB, Vcl.Grids, Vcl.DBGrids;

type
  TBaseInfoSel = class(TBaseDialogForm)
    Panel3: TPanel;
    edt_Find: TButtonedEdit;
    btn_Find: TButton;
    Panel2: TPanel;
    btn_Select: TBitBtn;
    BitBtn2: TBitBtn;
    MainGrid: TDBGrid;
  private
    { Private declarations }
  protected
    procedure InitViewTable;virtual;
    procedure BeforeFormShow; override;
  public
    { Public declarations }
  end;

var
  BaseInfoSel: TBaseInfoSel;

implementation

uses
  System.Rtti, UComDBStorable;

{$R *.dfm}

{ TBaseInfoSel }

procedure TBaseInfoSel.BeforeFormShow;
begin
  inherited;
  InitViewTable;
end;

procedure TBaseInfoSel.InitViewTable;
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
          for A2 in Prop.GetAttributes do
          begin
            if A2 is TFieldInfo then //AHa
            begin
              with MainGrid.Columns.Add do
              begin
                FieldName     := TFieldInfo(A2).FieldName;
                Title.Caption := TFieldInfo(A2).Title;
                Width     := TFieldInfo(A2).Width;
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

end.
