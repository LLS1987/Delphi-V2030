unit UBaseMdiForm;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UBaseNormalForm, System.ImageList,
  Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.ExtCtrls;

type
  TBaseMdiForm = class(TBaseNormalForm)
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  BaseMdiForm: TBaseMdiForm;

implementation

{$R *.dfm}

procedure TBaseMdiForm.FormClose(Sender: TObject; var Action: TCloseAction);
begin
  inherited;
  Action := caFree;
end;

end.
