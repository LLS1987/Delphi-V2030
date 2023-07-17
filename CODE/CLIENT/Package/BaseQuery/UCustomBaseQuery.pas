unit UCustomBaseQuery;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UBaseMdiForm, cxStyles, cxClasses,
  System.ImageList, Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.ExtCtrls,
  cxGraphics, cxControls, cxLookAndFeels, cxLookAndFeelPainters, cxCustomData, cxFilter, cxData, cxDataStorage, cxEdit,
  cxNavigator, dxDateRanges, dxScrollbarAnnotations, Data.DB, cxDBData,
  cxGridLevel, cxGridCustomView, cxGridCustomTableView, cxGridTableView,
  cxGridDBTableView, cxGrid, Vcl.StdCtrls;

type
  TCustomBaseQuery = class(TBaseMdiForm)
    Button1: TButton;
    Button2: TButton;
  private
    { Private declarations }
  protected
    procedure DoShow; override;
    procedure SetGrid;virtual;   //表格的数据读取及设置
    procedure CustomGrid(FieldList :TDataSet);virtual;
    procedure iniForm;virtual;
    procedure LoadData;virtual;    //本函数用于装载数据
  public
    { Public declarations }
    procedure RefreshData;override;
  end;

var
  CustomBaseQuery: TCustomBaseQuery;

implementation

{$R *.dfm}

{ TCustomBaseQuery }

procedure TCustomBaseQuery.CustomGrid(FieldList: TDataSet);
begin

end;

procedure TCustomBaseQuery.DoShow;
begin
  SetGrid;
  iniForm;
  inherited;
end;

procedure TCustomBaseQuery.iniForm;
begin

end;

procedure TCustomBaseQuery.LoadData;
begin

end;

procedure TCustomBaseQuery.RefreshData;
begin
  inherited;
  LoadData;
end;

procedure TCustomBaseQuery.SetGrid;
begin

end;

end.
