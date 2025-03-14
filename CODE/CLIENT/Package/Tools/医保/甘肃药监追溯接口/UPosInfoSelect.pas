unit UPosInfoSelect;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UBaseDialogForm, System.ImageList,
  Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.ExtCtrls, Vcl.StdCtrls,
  Vcl.Buttons, UComDBStorable, Data.DB, Vcl.Grids, Vcl.DBGrids,
  Datasnap.DBClient, cxGraphics, cxControls, cxLookAndFeels,
  cxLookAndFeelPainters, dxSkinsCore, dxSkinBasic, dxSkinBlack, dxSkinBlue,
  dxSkinBlueprint, dxSkinCaramel, dxSkinCoffee, dxSkinDarkroom, dxSkinDarkSide,
  dxSkinDevExpressDarkStyle, dxSkinDevExpressStyle, dxSkinFoggy,
  dxSkinGlassOceans, dxSkinHighContrast, dxSkiniMaginary, dxSkinLilian,
  dxSkinLiquidSky, dxSkinLondonLiquidSky, dxSkinMcSkin, dxSkinMetropolis,
  dxSkinMetropolisDark, dxSkinMoneyTwins, dxSkinOffice2007Black,
  dxSkinOffice2007Blue, dxSkinOffice2007Green, dxSkinOffice2007Pink,
  dxSkinOffice2007Silver, dxSkinOffice2010Black, dxSkinOffice2010Blue,
  dxSkinOffice2010Silver, dxSkinOffice2013DarkGray, dxSkinOffice2013LightGray,
  dxSkinOffice2013White, dxSkinOffice2016Colorful, dxSkinOffice2016Dark,
  dxSkinOffice2019Black, dxSkinOffice2019Colorful, dxSkinOffice2019DarkGray,
  dxSkinOffice2019White, dxSkinPumpkin, dxSkinSeven, dxSkinSevenClassic,
  dxSkinSharp, dxSkinSharpPlus, dxSkinSilver, dxSkinSpringtime, dxSkinStardust,
  dxSkinSummer2008, dxSkinTheAsphaltWorld, dxSkinTheBezier,
  dxSkinsDefaultPainters, dxSkinValentine, dxSkinVisualStudio2013Blue,
  dxSkinVisualStudio2013Dark, dxSkinVisualStudio2013Light, dxSkinVS2010,
  dxSkinWhiteprint, dxSkinXmas2008Blue, cxStyles, cxCustomData, cxFilter,
  cxData, cxDataStorage, cxEdit, cxNavigator, dxDateRanges,
  dxScrollbarAnnotations, cxDBData, cxGridLevel, cxGridCustomView,
  cxGridCustomTableView, cxGridTableView, cxGridDBTableView, cxGrid, cxClasses,
  cxLocalization, Vcl.Menus;

type
  [TTable('posinfo','门店信息', smtRight)]
  TPosInfoSelect = class(TBaseDialogForm)
    Panel1: TPanel;
    Panel2: TPanel;
    btn_Select: TBitBtn;
    BitBtn2: TBitBtn;
    Panel3: TPanel;
    Label1: TLabel;
    edt_Find: TButtonedEdit;
    btn_Find: TButton;
    DataSource1: TDataSource;
    ClientDataSet1: TClientDataSet;
    MainGridView: TcxGridDBTableView;
    cxGrid1Level1: TcxGridLevel;
    cxGrid1: TcxGrid;
    procedure FormCreate(Sender: TObject);
    procedure btn_FindClick(Sender: TObject);
    procedure btn_SelectClick(Sender: TObject);
    procedure edt_FindKeyPress(Sender: TObject; var Key: Char);
    procedure edt_FindRightButtonClick(Sender: TObject);
    procedure MainGridViewDblClick(Sender: TObject);
  private
    FPosID: Integer;
    FPosName: string;
    FPosCode: string;
    { Private declarations }
    procedure InitViewTable;
  public
    { Public declarations }
    [TFieldInfo('posinfo','posid','门店ID',80,'',True)]
    property PosID :Integer read FPosID;
    [TFieldInfo('posinfo','poscode','门店编号',120)]
    property PosCode :string read FPosCode write FPosCode;
    [TFieldInfo('posinfo','posname','门店名称',200)]
    property PosName :string read FPosName write FPosName;
  end;
  [TTable('posinfo','门店信息', smtRight)]
  //[TTableSub('employee','职员', 'left join', 'posinfo.ManageRec=employee.rec')]
  TPosInfo = class(TStorable)
  private
    FPosID: Integer;
    FPosCode: string;
    FPosName: string;
  protected
    procedure InitViewTable(AGrid: TViewGrid); override;
  public
    constructor Create(AGrid: TViewGrid);overload;
    [TFieldInfo('posinfo','posid','门店ID',80,'',True)]
    property PosID :Integer read FPosID;
    [TFieldInfo('posinfo','poscode','门店编号')]
    property PosCode :string read FPosCode write FPosCode;
    [TFieldInfo('posinfo','posname','门店名称')]
    property PosName :string read FPosName write FPosName;
  end;

var
  PosInfoSelect: TPosInfoSelect;

implementation

uses
  UComvar,RTTI, TypInfo,Types;

{$R *.dfm}

procedure TPosInfoSelect.FormCreate(Sender: TObject);
begin
  inherited;
  InitViewTable;
  Goo.DB.OpenSQL('select * from posinfo where deleted=0',ClientDataSet1);
end;

procedure TPosInfoSelect.btn_FindClick(Sender: TObject);
var szSQL,szFilter:string;
begin
  inherited;
  szSQL := 'select * from posinfo where deleted=0';
  if Trim(edt_Find.Text)<>EmptyStr then
  begin
    szFilter := Trim(edt_Find.Text) + '%';
    szSQL := szSQL + Format(' and (poscode like ''%s'' or posname like ''%s'' or PYZJM like ''%s'')',[szFilter,szFilter,szFilter]);
  end;
  Goo.DB.OpenSQL(szSQL,ClientDataSet1);
end;

procedure TPosInfoSelect.btn_SelectClick(Sender: TObject);
begin
  inherited;
  if not ClientDataSet1.Active then Exit;
  if ClientDataSet1.RecordCount=0 then Exit;  
  ParamList.Add('@PosID',ClientDataSet1.FieldByName('PosID').AsInteger);
  ParamList.Add('@PosCode',ClientDataSet1.FieldByName('PosCode').AsString);
  ParamList.Add('@PosName',ClientDataSet1.FieldByName('PosName').AsString);
  ModalResult := mrOk;
end;

procedure TPosInfoSelect.edt_FindKeyPress(Sender: TObject; var Key: Char);
begin
  inherited;
  if Key=#13 then edt_FindRightButtonClick(Sender);
end;

procedure TPosInfoSelect.edt_FindRightButtonClick(Sender: TObject);
begin
  inherited;
  btn_Find.OnClick(Sender);
end;

procedure TPosInfoSelect.InitViewTable;
var
  Context:TRttiContext;
  Prop:TRttiProperty;
  typ:TRttiType;
  A1,A2:TCustomAttribute;
begin
  Context := TRttiContext.Create;
  try
    typ := Context.GetType(ClassType);
    for A1 in typ.GetAttributes do
    begin
      if A1 is TTable then
      begin
        for Prop in typ.GetProperties do
        begin
          for A2 in Prop.GetAttributes do
          begin
            if A2 is TFieldInfo then //AHa
            begin
              with MainGridView.CreateColumn do
              begin
                Name := MainGridView.Name + '_' + TFieldInfo(A2).FieldName;
                HeaderAlignmentHorz       := taCenter;
                DataBinding.FieldName     := TFieldInfo(A2).FieldName;
                Caption := TFieldInfo(A2).Title;
                Width     := TFieldInfo(A2).Width;
                Visible   := not TFieldInfo(A2).IDENTITY;
              end;
            end;
          end;
        end;
      end;
    end;
  finally
    Context.Free;
  end;
end;

procedure TPosInfoSelect.MainGridViewDblClick(Sender: TObject);
begin
  inherited;
  btn_Select.OnClick(Sender);
end;

{ TPosInfo }


{ TPosInfo }

constructor TPosInfo.Create(AGrid: TViewGrid);
begin
  inherited Create;
  InitViewTable(AGrid);
end;

procedure TPosInfo.InitViewTable(AGrid: TViewGrid);
var
  Context:TRttiContext;
  Prop:TRttiProperty;
  typ:TRttiType;
  A1,A2:TCustomAttribute;
begin
  Context := TRttiContext.Create;
  try
    typ := Context.GetType(ClassType);
    for A1 in typ.GetAttributes do
    begin
      if A1 is TTable then
      begin
        for Prop in typ.GetProperties do
        begin
          AGrid.Columns.Clear;
          for A2 in Prop.GetAttributes do
          begin
            if A2 is TFieldInfo then //AHa
            begin
              with AGrid.Columns.Add do
              begin
                FieldName     := TFieldInfo(A2).FieldName;
                Title.Caption := TFieldInfo(A2).Title;
                Width     := TFieldInfo(A2).Width;
                Visible   := not TFieldInfo(A2).IDENTITY;
              end;
            end;
          end;
        end;
      end;
    end;
  finally
    Context.Free;
  end;
end;

initialization
  goo.Reg.RegisterClass(TPosInfoSelect)

end.
