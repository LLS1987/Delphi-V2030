unit UBaseQuery;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UCustomBaseQuery, cxStyles, cxClasses,
  System.ImageList, Vcl.ImgList, System.Actions, Vcl.ActnList, Vcl.ExtCtrls,
  Datasnap.DBClient, Vcl.ComCtrls, System.Generics.Collections;

type
  TBaseQuery = class(TCustomBaseQuery)
  private
  protected
    procedure LoadData;override;    //本函数用于装载数据
  public
  end;

implementation

uses
  UComvar, System.IOUtils, System.JSON, cxGridDBTableView,
  UBaseControlManagerLayout;

//{$R *.dfm}

procedure TBaseQuery.LoadData;
begin
  inherited;
  var _Dic:TDictionary<Integer,string>;
  var _ProceName:string;
  if not QueryDictionary.TryGetValue(ActiveGridView.Name,_Dic) then Exit;
  if _Dic.TryGetValue(C_QueryMode_OPENPROC,_ProceName) and not _ProceName.IsEmpty then
    Goo.DB.OpenProc(_ProceName,ParamList,ActiveDataSet)
  else if _Dic.TryGetValue(C_QueryMode_OPENSQL,_ProceName) and not _ProceName.IsEmpty then
  begin
    //处理条件
    var swhere := EmptyStr;
    for var _con in Condition do
    begin
      if not _con.Value.Visible then Continue;
      if _con.Value.Name=EmptyStr then Continue;      
      if _con.Value.ValueText=EmptyStr then Continue;
      var _link := EditButtonFilterLink[TEditButtonFilterVer(_con.Value.LeftButtonImageIndex)];
      if _link=EmptyStr then Continue;
      var _value :string := EmptyStr;
      case TEditButtonFilterVer(_con.Value.LeftButtonImageIndex) of
        efLike       : _value := '%'+VarToStr(_con.Value.Value)+'%';
        efBeginsWith : _value := VarToStr(_con.Value.Value)+'%';
        efEndsWith   : _value := '%'+VarToStr(_con.Value.Value);
      else _value := VarToStr(_con.Value.Value);
      end;
      if _value=EmptyStr then Continue;
      if _con.Value is TControlItem_Edit then _value := ''''+_value+'''';
      swhere := swhere +Format(' and %s %s %s',[_con.Value.Name,_link,_value]);
    end;
    Goo.DB.OpenSQL(_ProceName+swhere,ActiveDataSet);
  end;
  //查询主从表
  if MainGrid.Levels[0].IsMaster and (MainGrid.Levels[0].Count>0) then
  begin
    var AView := MainGrid.Levels[0].Items[0].GridView;
    var Adata := TcxGridDBTableView(AView).DataController.DataSet as TClientDataSet;
    if not QueryDictionary.TryGetValue(AView.Name,_Dic) then Exit;
    if _Dic.TryGetValue(C_QueryMode_OPENPROC,_ProceName) and not _ProceName.IsEmpty then
      Goo.DB.OpenProc(_ProceName,ParamList,Adata)
    else if _Dic.TryGetValue(C_QueryMode_OPENSQL,_ProceName) and not _ProceName.IsEmpty then
      Goo.DB.OpenSQL(_ProceName,Adata);
  end;
end;


end.
