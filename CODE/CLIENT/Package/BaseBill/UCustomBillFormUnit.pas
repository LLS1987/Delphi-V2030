unit UCustomBillFormUnit;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UBaseMdiForm, cxStyles, cxClasses,
  System.ImageList, Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.ExtCtrls;

type
  TCustomBillFormUnit = class(TBaseMdiForm)
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  CustomBillFormUnit: TCustomBillFormUnit;

implementation

{$R *.dfm}

end.
