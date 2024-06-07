unit Main;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, ExtCtrls, StdCtrls, XLSSheetData5, XLSReadWriteII5, BIFF_VBA5,
  Xc12Utils5;

type
  TfrmMain = class(TForm)
    Panel1: TPanel;
    Label1: TLabel;
    btnClose: TButton;
    btnRead: TButton;
    edFilename: TEdit;
    btnFilename: TButton;
    Panel3: TPanel;
    memModule: TMemo;
    Panel2: TPanel;
    Label2: TLabel;
    lbModules: TListBox;
    btnOpenMod: TButton;
    Splitter1: TSplitter;
    dlgOpen: TOpenDialog;
    dlgOpenTxt: TOpenDialog;
    XLS: TXLSReadWriteII5;
    procedure btnReadClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure btnOpenModClick(Sender: TObject);
    procedure lbModulesDblClick(Sender: TObject);
    procedure btnCloseClick(Sender: TObject);
    procedure btnFilenameClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  frmMain: TfrmMain;

implementation

{$R *.dfm}

procedure TfrmMain.btnReadClick(Sender: TObject);
var      
  i: integer;
begin
  XLS.Filename := edFilename.Text;
  XLS.ReadVBA := True;
  XLS.Read;
  lbModules.Clear;
  for i := 0 to XLS.VBA.Count - 1 do
    lbModules.Items.Add(XLS.VBA[i].Name);
end;

procedure TfrmMain.FormCreate(Sender: TObject);
begin
  // ReadVBA must be set to True to read macros.
  XLS.ReadVBA := True;
end;

procedure TfrmMain.btnOpenModClick(Sender: TObject);
begin
  if lbModules.ItemIndex >= 0 then
    memModule.Lines.Assign(XLS.VBA[lbModules.ItemIndex].Source);
end;

procedure TfrmMain.lbModulesDblClick(Sender: TObject);
begin
  btnOpenMod.Click;
end;

procedure TfrmMain.btnCloseClick(Sender: TObject);
begin
  Close;
end;

procedure TfrmMain.btnFilenameClick(Sender: TObject);
begin
  dlgOpen.FileName := edFilename.Text;
  if dlgOpen.Execute then
    edFilename.Text := dlgOpen.FileName;
end;

end.
