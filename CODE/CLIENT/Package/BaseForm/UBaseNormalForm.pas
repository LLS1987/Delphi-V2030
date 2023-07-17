unit UBaseNormalForm;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UBaseForm, Vcl.ExtCtrls,
  System.ImageList, Vcl.ImgList, System.Actions, Vcl.ActnList, cxStyles,
  cxClasses;

type
  TBaseNormalForm = class(TBaseForm)
    Panel_Top: TPanel;
    Panel_Client: TPanel;
    Panel_Button: TPanel;
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  BaseNormalForm: TBaseNormalForm;

implementation

{$R *.dfm}

end.
