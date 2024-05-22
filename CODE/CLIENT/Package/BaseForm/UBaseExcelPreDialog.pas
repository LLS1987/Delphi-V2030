unit UBaseExcelPreDialog;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UBaseDialogForm, cxStyles, cxClasses,
  System.ImageList, Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.ExtCtrls,
  Vcl.StdCtrls, Vcl.Grids;

type
  TBaseExcelPreDialog = class(TBaseDialogForm)
    Panel_Button: TPanel;
    Button_OpenFile: TButton;
    Button_CheckData: TButton;
    Button_ImportData: TButton;
    StringGrid1: TStringGrid;
    OpenDialog1: TOpenDialog;
    Button1: TButton;
    pnl_Status: TPanel;
    pnl_Header: TPanel;
    procedure Button_CheckDataClick(Sender: TObject);
    procedure Button_ImportDataClick(Sender: TObject);
    procedure Button_OpenFileClick(Sender: TObject);
    procedure StringGrid1DrawCell(Sender: TObject; ACol, ARow: Integer; Rect: TRect; State: TGridDrawState);
  private
    { Private declarations }
  protected
    procedure BeforeFormShow; override;
  public
    { Public declarations }
  end;

implementation

uses
  UExcelObject, UComvar, Winapi.ActiveX;

{$R *.dfm}

{ TBaseExcelPreDialog }

procedure TBaseExcelPreDialog.BeforeFormShow;
begin
  inherited;
  Self.Caption := 'Excel 预览:' + TExcelObject(ParamList.AsObject('@InvokeObject')).FileName;
  for var _item in TExcelObject(ParamList.AsObject('@InvokeObject')).ExcelCellCheckList do
    pnl_Header.Caption := pnl_Header.Caption + _item.Key + '*| ';
  CoInitialize(nil);
  try
    TExcelObject(ParamList.AsObject('@InvokeObject')).ReadExcel(StringGrid1);
  finally
    CoUninitialize();
  end;
end;

procedure TBaseExcelPreDialog.Button_CheckDataClick(Sender: TObject);
begin
  inherited;
  TExcelObject(ParamList.AsObject('@InvokeObject')).CheckData(StringGrid1);
  pnl_Status.Caption := TExcelObject(ParamList.AsObject('@InvokeObject')).CheckStatusMessage;
end;

procedure TBaseExcelPreDialog.Button_ImportDataClick(Sender: TObject);
begin
  inherited;
  if not TExcelObject(ParamList.AsObject('@InvokeObject')).CheckData(StringGrid1) then
  begin
    pnl_Status.Caption := TExcelObject(ParamList.AsObject('@InvokeObject')).CheckStatusMessage;
    if not TExcelObject(ParamList.AsObject('@InvokeObject')).IgnoreException then Goo.Msg.ShowErrorAndAbort('数据校验异常（表格最后一列红色为异常信息）！');
    if not Goo.Msg.Question('存在异常数据，是否忽略异常继续导入？','') then Exit;
  end;
  if TExcelObject(ParamList.AsObject('@InvokeObject')).ImportExcel(StringGrid1) then ModalResult := mrOk;
end;

procedure TBaseExcelPreDialog.Button_OpenFileClick(Sender: TObject);
begin
  inherited;
  if not OpenDialog1.Execute then Exit;
  Self.Caption := 'Excel 预览:' + OpenDialog1.FileName;
  pnl_Status.Caption := '  请点击"数据导入"按钮；如有异常数据信息，在表格最后一列红色字体显示。';
  TExcelObject(ParamList.AsObject('@InvokeObject')).FileName := OpenDialog1.FileName;
  TExcelObject(ParamList.AsObject('@InvokeObject')).ReadExcel(StringGrid1);
  StringGrid1.FixedRows := 1;
end;

procedure TBaseExcelPreDialog.StringGrid1DrawCell(Sender: TObject; ACol, ARow: Integer; Rect: TRect; State: TGridDrawState);
begin
  inherited;
  if (ACol=TExcelObject(ParamList.AsObject('@InvokeObject')).CheckDataColIndex) and (ARow>0) then
  begin
    StringGrid1.Canvas.Font.Color := clred; //字体颜色为红的
    //StringGrid1.Canvas.Brush.color:=clMoneyGreen; //背景为 美元绿色
    StringGrid1.Canvas.FillRect(Rect);
    StringGrid1.Canvas.TextOut(Rect.Left+3,Rect.Top+3,StringGrid1.Cells[ACol,ARow]);
  end;
end;

initialization
  Goo.Reg.RegisterClass(TBaseExcelPreDialog);

end.
