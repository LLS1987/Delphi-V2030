unit UBaseDialogForm;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs,UBaseForm, System.ImageList, Vcl.ImgList,
  System.Actions, Vcl.ActnList, Vcl.ExtCtrls, cxStyles, cxClasses,
  cxLocalization, Vcl.Menus;

type
  TBaseDialogForm = class(TBaseForm)
  private
    { Private declarations }
  protected
  public
    { Public declarations }
  end;

var
  BaseDialogForm: TBaseDialogForm;

implementation

{$R *.dfm}

end.
