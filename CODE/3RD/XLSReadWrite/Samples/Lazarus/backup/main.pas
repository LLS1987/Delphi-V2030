unit Main;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls,
  XLSReadWriteII5;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    procedure Button1Click(Sender: TObject);
  private

  public

  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.Button1Click(Sender: TObject);
var
  XLS: TXLSReadWriteII5;
begin
  XLS := TXLSReadWriteII5.Create(Nil);
  try
    XLS.LoadFromFile('d:\temp\T1.xlsx');

    ShowMessage(XLS[0].AsString[1,3]);

    XLS[0].AsString[1,4] :='Sugga';

    XLS.SaveToFile('d:\temp\T2.xlsx');
  finally
    XLS.Free;
  end;
end;

end.

