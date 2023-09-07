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
  UComvar, System.IOUtils, System.JSON;

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
    Goo.DB.OpenSQL(_ProceName,ActiveDataSet);
end;


end.
