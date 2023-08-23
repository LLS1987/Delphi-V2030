unit URxIndexQuery;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs,UBaseQuery, cxStyles, cxClasses,
  System.ImageList, Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.StdCtrls,
  Vcl.ExtCtrls, Vcl.ComCtrls;

type
  TRxIndexQuery = class(TBaseQuery)
  private
    { Private declarations }
    procedure OnSelectClick(Sender:TObject);
    procedure OnParamClick(Sender:TObject);
    procedure OnSelectPtypeClick(Sender:TObject);
    procedure OnSelectEtypeClick(Sender:TObject);
  protected
    procedure OnIniButton(Sender: TObject); override;
    procedure LoadData;override;
  public
    { Public declarations }
  end;

var
  RxIndexQuery: TRxIndexQuery;

implementation

uses
  UComvar, UBaseParams, UComDBStorable;

{$R *.dfm}

{ TRxIndexQuery }

procedure TRxIndexQuery.LoadData;
begin
  //QueryDictionary.Items[ActiveGridView.Name].AddOrSetValue(C_QueryMode_OPENSQL,'select * from vbillindex_query');
  inherited;
end;

procedure TRxIndexQuery.OnIniButton(Sender: TObject);
begin
  inherited;
  //ParamList.Add('@Draft',0);
  ParamList.Add('@OrderBy','billdate');
  Condition.Memory := True;
  Condition.Add(1,'PREC','商品信息商品信息1商品信息11',True,True);
  Condition.Add(2,'Draft','草稿',False,True);
  Condition.AddThin(1,'PREC2','商品信息的测试',False,True);
  Condition.AddFat(1,'PREC3','商品信息4',False,True);
  Condition.Add(3,'PREC4','商品信息5',True,True);
  Condition.Add(6,'PREC5','商品信息6',True,True);
  Condition.Add(1,'PREC6','商品信息7',False,True);
  Condition.Add(1,'PREC7','商品信息8',True,True);
  Condition.ConditionItem['PREC7'].LastCaption := '尾部文字';
  Condition.Add(1,'PREC8','商品信息9',False,True);
  Condition.AddDateBetween('@BeginDate,@EndDate','开始日期,至',False,True);
  Condition.Add(5,'PREC11','商品信息商品信息11',False,True);
  Condition.Add(3,'PREC12','商品信息12',False,True);
  ButtonList.Add('门店选择',OnParamClick);
  ButtonList.Add('商品选择',OnSelectPtypeClick);
  GridDblClickID :=  ButtonList.Add('查询查询查询查询查询查询查询3',OnSelectClick);
  ButtonList.Add('职员选择',OnSelectEtypeClick);
  ButtonList.Add('查询5',nil,True);
  ButtonList.Add('查询6',nil,True);
  ButtonList.Add('查查询查询查询查询查询7',nil,True);
end;

procedure TRxIndexQuery.OnParamClick(Sender: TObject);
begin
  //Goo.Msg.ShowMsg(Self.ParamList.AsString('@PREC')+#13#10+Self.ParamList.AsString('@PREC9')+#13#10+Self.ParamList.AsString('@PREC11'));
//  Goo.Reg.ShowModal('TBaseInfoSel');
  var k  := TMTypeParam.Create(nil);
  try
    k.MultSel := True;
    k.GetBaseInfoSelect;
    goo.MSG.ShowMsg('Count=' + k.Return.Count.ToString + '   '+k.First.Rec.ToString+':'+ k.First.fullname)
  finally
    k .Free;
  end;
end;

procedure TRxIndexQuery.OnSelectClick(Sender: TObject);
begin
  Goo.Msg.ShowMsg(RowData['comment',ActiveRowIndex]);
end;

procedure TRxIndexQuery.OnSelectEtypeClick(Sender: TObject);
begin
  var k  := TETypeParam.Create(nil);
  try
    k.MultSel := True;
    k.GetBaseInfoSelect;
    goo.MSG.ShowMsg('Count=' + k.Count.ToString + '['+k.First.Rec.ToString+']'+ k.First.fullname + ':' + TStorable_EType(k.First).Sex)
  finally
    k .Free;
  end;
end;

procedure TRxIndexQuery.OnSelectPtypeClick(Sender: TObject);
begin
  var k  := TPTypeParam.Create(nil);
  try
    k.MultSel := True;
    k.GetBaseInfoSelect;
    goo.MSG.ShowMsg('Count=' + k.Return.Count.ToString + '   '+k.First.Rec.ToString+':'+ k.First.fullname)
  finally
    k .Free;
  end;
end;

initialization
  Goo.Reg.RegisterClass(TRxIndexQuery);
end.
