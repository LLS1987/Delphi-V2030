unit Main;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Xc12Utils5, Vcl.Grids, Vcl.StdCtrls,
  XLSSheetData5, XLSReadWriteII5, XLSTable5;

type
  TfrmMain = class(TForm)
    Button1: TButton;
    sgCells: TStringGrid;
    edFilename: TEdit;
    Button2: TButton;
    Button3: TButton;
    dlgOpen: TOpenDialog;
    XLS: TXLSReadWriteII5;
    Button4: TButton;
    Button5: TButton;
    Button6: TButton;
    Button7: TButton;
    Label1: TLabel;
    cbSheets: TComboBox;
    lblFindNext: TLabel;
    lblFindFirst: TLabel;
    lblRows: TLabel;
    procedure Button1Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure Button3Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure FormDestroy(Sender: TObject);
    procedure Button4Click(Sender: TObject);
    procedure Button5Click(Sender: TObject);
    procedure Button6Click(Sender: TObject);
    procedure Button7Click(Sender: TObject);
  private
    FTable: TXLSTable;

    procedure FillGrid;
public
  end;

var
  frmMain: TfrmMain;

implementation

{$R *.dfm}

procedure TfrmMain.Button1Click(Sender: TObject);
begin
  Close;
end;

procedure TfrmMain.Button2Click(Sender: TObject);
begin
  cbSheets.Items.Clear;

  XLS.Filename := edFilename.Text;

  XLS.Clear();

  XLS.GetSheetNames(edFilename.Text,cbSheets.Items);
  cbSheets.ItemIndex := 0;
end;

procedure TfrmMain.Button3Click(Sender: TObject);
begin
  dlgOpen.FileName := edFilename.Text;
  if dlgOpen.Execute then
    edFilename.Text := dlgOpen.FileName;
end;

procedure TfrmMain.Button4Click(Sender: TObject);
begin
  FTable.Open(cbSheets.ItemIndex);
end;

procedure TfrmMain.Button5Click(Sender: TObject);
begin
  FTable.Close;
end;

procedure TfrmMain.Button6Click(Sender: TObject);
begin
  if FTable.FindFirst then begin
    lblFindFirst.Caption := 'Res: True';

    lblRows.Caption := 'Rows: ' + IntToStr(FTable.RowCount)
  end
  else begin
    lblFindFirst.Caption := 'Res: False';

    lblRows.Caption := 'Rows:';
  end;

  FillGrid;
end;

procedure TfrmMain.Button7Click(Sender: TObject);
begin
  if FTable.FindNext then
    lblFindNext.Caption := 'Res: True'
  else
    lblFindNext.Caption := 'Res: False';

  FillGrid;
end;

procedure TfrmMain.FillGrid;
var
  C: integer;
begin
  for C := 0 to sgCells.ColCount - 1 do
    sgCells.Cells[C,1] := XLS[0].AsString[C,0];
end;

procedure TfrmMain.FormCreate(Sender: TObject);
var
  C: integer;
begin
  for C := 0 to sgCells.ColCount - 1 do
    sgCells.Cells[C,0] := ColToRefStr(C,False);

  FTable := TXLSTable.Create(XLS);
end;

procedure TfrmMain.FormDestroy(Sender: TObject);
begin
  FTable.Free;
end;

end.
