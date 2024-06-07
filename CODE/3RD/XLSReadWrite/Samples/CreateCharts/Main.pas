unit Main;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, XLSSheetData5, XLSReadWriteII5, XLSRelCells5,
  xpgParseChart;

type
  TfrmMain = class(TForm)
    Button1: TButton;
    Button2: TButton;
    XLS: TXLSReadWriteII5;
    cbBarChart: TCheckBox;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
  private
    procedure MakeChart;
  public
    { Public declarations }
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
  MakeChart;
end;

procedure TfrmMain.MakeChart;
var
  c,r       : integer;
  RCells    : TXLSRelCells;
  ChartSpace: TCT_ChartSpace;
begin
  for r := 1 to 12 do
    XLS[0].AsString[0,r] := FormatSettings.ShortMonthNames[r];

  for r := 1 to 12 do begin
    for c := 1 to 2 do
      XLS[0].AsFloat[c,r] := Random(100);
  end;

  RCells := XLS[0].CreateRelativeCells;
  RCells.SetArea(1,0,2,12);

  if cbBarChart.Checked then begin
    // stmsNone = no markers.
    ChartSpace := XLS[0].Drawing.Charts.MakeBarChart(RCells,1,12,False);
    // Set colors
    ChartSpace.Chart.PlotArea.BarChart.Shared.Series[0].ColorRGB := $FF0000;
    ChartSpace.Chart.PlotArea.BarChart.Shared.Series[1].ColorRGB := $00FF00;

    // Set series name
    XLS[0].AsString[0,28] := 'My serie 1';
    XLS[0].AsString[0,29] := 'My serie 2';
    ChartSpace.Chart.PlotArea.BarChart.Shared.Series[0].Shared.Create_Tx.Create_StrRef.F := 'Sheet1!$A$29';
    ChartSpace.Chart.PlotArea.BarChart.Shared.Series[1].Shared.Create_Tx.Create_StrRef.F := 'Sheet1!$A$30';

    // Data labels on
    ChartSpace.Chart.PlotArea.BarChart.Shared.Series[0].Create_DLbls.Group_DLbls.EG_DLblSShared.Create_ShowVal.Val := True;
    ChartSpace.Chart.PlotArea.BarChart.Shared.Series[1].Create_DLbls.Group_DLbls.EG_DLblSShared.Create_ShowVal.Val := True;
  end
  else begin
    // stmsNone = no markers.
    ChartSpace := XLS[0].Drawing.Charts.MakeLineChart(RCells,1,12,False,stmsNone);
    // Set colors
    ChartSpace.Chart.PlotArea.LineChart.Shared.Series[0].ColorRGB := $FF0000;
    ChartSpace.Chart.PlotArea.LineChart.Shared.Series[1].ColorRGB := $00FF00;

    // Set series name
    XLS[0].AsString[0,28] := 'My serie 1';
    XLS[0].AsString[0,29] := 'My serie 2';
    ChartSpace.Chart.PlotArea.LineChart.Shared.Series[0].Shared.Create_Tx.Create_StrRef.F := 'Sheet1!$A$29';
    ChartSpace.Chart.PlotArea.LineChart.Shared.Series[1].Shared.Create_Tx.Create_StrRef.F := 'Sheet1!$A$30';

    // Data labels on
    ChartSpace.Chart.PlotArea.LineChart.Shared.Series[0].Create_DLbls.Group_DLbls.EG_DLblSShared.Create_ShowVal.Val := True;
    ChartSpace.Chart.PlotArea.LineChart.Shared.Series[1].Create_DLbls.Group_DLbls.EG_DLblSShared.Create_ShowVal.Val := True;
  end;

  // Set X-axis min and max
  ChartSpace.Chart.PlotArea.ValAxis[0].SetMinMax(0,200);

  // Legend
  ChartSpace.Chart.CreateDefaultLegend;
  ChartSpace.Chart.Legend.Create_LegendPos;
  ChartSpace.Chart.Legend.LegendPos.Val := stlpB;
//
//
//  XLS[0].AsString[0,99] := 'Suggor';
//
//  ChartSpace.Chart.PlotArea.BarChart.Shared.Series[0].Shared.Tx.StrRef.RCells.Ref := 'Sheet1!$A$100';
//
//  ChartSpace.Chart.PlotArea.BarChart.Shared.Series[0].Shared.Create_Tx.V := 'Suggor';

  XLS.SaveToFile('d:\xtemp\wtest.xlsx');
end;

end.
