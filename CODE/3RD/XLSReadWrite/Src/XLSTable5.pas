unit XLSTable5;

interface

{-
********************************************************************************
******* XLSReadWriteII V6.00                                             *******
*******                                                                  *******
******* Copyright(C) 1999,2017 Lars Arvidsson, Axolot Data               *******
*******                                                                  *******
******* email: components@axolot.com                                     *******
******* URL:   http://www.axolot.com                                     *******
********************************************************************************
** Users of the XLSReadWriteII component must accept the following            **
** disclaimer of warranty:                                                    **
**                                                                            **
** XLSReadWriteII is supplied as is. The author disclaims all warranties,     **
** expressedor implied, including, without limitation, the warranties of      **
** merchantability and of fitness for any purpose. The author assumes no      **
** liability for damages, direct or consequential, which may result from the  **
** use of XLSReadWriteII.                                                     **
********************************************************************************
}

{$B-}
{$H+}
{$R-}
{$I AxCompilers.inc}
{$I XLSRWII.inc}

uses Classes, SysUtils, Math,
     xpgPUtils, xpgPXMLUtils, xpgParserXLSX,
     xc12Utils5, Xc12DataWorksheet5, Xc12DataWorkbook5,
     XLSUtils5, XLSFormulaTypes5, XLSFormula5, XLSReadXLSX5, XLSReadWriteII5;

type TXLSTable = class(TObject)
protected
     FXLS           : TXLSReadWriteII5;
     FFormulas      : TXLSFormulaHandler;
     FRead          : TXLSReadXLSX;
     FZStream       : TStream;
     FStream        : TStream;
     FXML           : TXPGDocXLSX;
     FSheetIndex    : integer;
     FCurrSheet     : TXc12Sheet;
     FSharedFormulas: TXLSSharedFormulaList;
     FRowRead       : boolean;
     FRowCount      : integer;

     procedure OnCellDirect(ASender: TObject);
     function  ReadRow: boolean;
     procedure ClearRow;
public
     constructor Create(AXLS: TXLSReadWriteII5);
     destructor Destroy; override;

     procedure Open(ASheetIndex: integer);
     procedure Close;

     function  FindFirst: boolean;
     function  FindNext: boolean;

     property RowCount: integer read FRowCount;
     end;

implementation

{ TXLSTable }

procedure TXLSTable.ClearRow;
begin
  FXLS[0].ClearRows(0,0)
end;

procedure TXLSTable.Close;
begin
  if FZStream <> Nil then begin
    FZStream.Free;

    FZStream := Nil;
  end;

  if FStream <> Nil then begin
    FStream.Free;

    FStream := Nil;
  end;

  if FXML <> Nil then begin
    FXML.Free;

    FXML := Nil;
  end;

  FXLS.Manager.FileData.OPC.Close;
end;

constructor TXLSTable.Create(AXLS: TXLSReadWriteII5);
begin
  FXLS := AXLS;
  FFormulas := FXLS.Formulas;

  FRead := TXLSReadXLSX.Create(FXLS.Manager,FXLS.Formulas);
  FSharedFormulas := TXLSSharedFormulaList.Create;
end;

destructor TXLSTable.Destroy;
begin
  Close;

  FSharedFormulas.Free;
  FRead.Free;

  inherited;
end;

function TXLSTable.FindFirst: boolean;
begin
  Close;
  Open(FSheetIndex);

  ClearRow;

  FXML.LoadFromStream(FStream);

  FRowCount := AreaStrToCellArea(FXML.Worksheet.Dimension.Ref).Row2 + 1;

  Result := FRowRead;
end;

function TXLSTable.FindNext: boolean;
begin
  ClearRow;

  Result := ReadRow;
end;

procedure TXLSTable.OnCellDirect(ASender: TObject);
var
  i       : integer;
  R,C     : integer;
  Sz      : integer;
  Cell    : TCT_Cell;
  CellType: TST_CellType;
  Ref     : TXLSCellRef;
  Area    : TXLSCellArea;
  Shared  : TXLSSharedFormula;
  Ptgs    : PXLSPtgs;
begin
  Cell := TCT_Cell(ASender);

  RefStrToColRow(Cell.R,C,R);

  CellType := Cell.T;

//  FManager.EventCell.SheetIndex := FCurrSheet.Index;
//  FManager.EventCell.Ref := Cell.R;

  if xaRead in Cell.F.Assigneds then begin
    case Cell.F.T of
      stcftArray    : begin
//        FArrayFormulas.Add(Cell.F.Ref);
//        Exit;
      end;
      stcftDataTable: begin
//        FArrayFormulas.Add(Cell.F.Ref);
//        Exit;
      end;
      stcftShared   : begin
        RefStrToColRow(Cell.R,Ref.Col,Ref.Row);
        if Cell.F.Content <> '' then begin
          Sz := FFormulas.EncodeFormula(Cell.F.Content,Ptgs,FSheetIndex);
          AreaStrToColRow(Cell.F.Ref,Area.Col1,Area.Row1,Area.Col2,Area.Row2);
          FSharedFormulas.Insert(Cell.F.Si,@Ref,@Area,Ptgs,Sz);
        end
        else begin
          Shared := FSharedFormulas[Cell.F.Si];
          if (Ref.Col >= Shared.ApplyArea.Col1) and (Ref.Col <= Shared.ApplyArea.Col2) and (Ref.Row >= Shared.ApplyArea.Row1) and (Ref.Row <= Shared.ApplyArea.Row2) then begin
            Ptgs := Shared.CopyPtgs(Cell.F.Si);
            FFormulas.AdjustCell(Ptgs,Shared.PtgsSize,Ref.Col - Shared.Ref.Col,Ref.Row - Shared.Ref.Row);

            FXLS[0].AsFormula[C,0] := FFormulas.DecodeFormula(Nil,FSheetIndex,Ptgs,Shared.PtgsSize,False)
          end;
        end;
      end
      else begin
//        FCurrSheet.Cells.FormulaHelper.PtgsSize := FFormulas.EncodeFormula(Cell.F.Content,Ptgs);
//        FCurrSheet.Cells.FormulaHelper.Ptgs := Ptgs;
        FXLS[0].AsFormula[C,0] := Cell.F.Content;
      end;
    end;

    case CellType of
      stctB  : FXLS[0].AsBoolean[C,0] := XmlStrToBoolDef(Cell.V,False);
      stctN  : FXLS[0].AsFloat[C,0] := XmlStrToFloatDef(Cell.V,0);
      stctE  : FXLS[0].AsError[C,0] := ErrorTextToCellError(Cell.V);
      stctStr: FXLS[0].AsString[C,0] := Cell.V;
      else     raise XLSRWException.Create('Unsupported type of formula cell: ' + IntToStr(Integer(Cell.T)));
    end;

    if Ptgs <> Nil then
      FreeMem(Ptgs);
  end
  else begin
//    if (FArrayFormulas.Count > 0) and (FArrayFormulas.CellInAreas(C,R) >= 0) then
//      Exit;

    if Cell.V = '' then begin
      if (CellType = stctInlineStr) and (Cell.Is_ <> Nil) then
        FXLS[0].AsString[C,0] := Cell.Is_.T
      else
        Exit;  // Blank cell
    end
    else begin
      case CellType of
        stctB: FXLS[0].AsBoolean[C,0] := XmlStrToBoolDef(Cell.V,False);
        stctN: FXLS[0].AsFloat[C,0] := XmlStrToFloatDef(Cell.V,0);
        stctE: FXLS[0].AsError[C,0] := ErrorTextToCellError(Cell.V);
        stctS: begin
          i := XmlStrToIntDef(Cell.V,0);
          FXLS[0].AsString[C,0] := FXLS.Manager.SST.ItemText[i];
        end;
        stctStr: FXLS[0].AsString[C,0] := Cell.V;
        stctInlineStr: raise XLSRWException.Create('Unhandled string type in file'); // FCurrSheet.IntWriteSSTString(C,R,FI,'Inline string');
      end;
    end;
  end;

  FRowRead := True;
end;

procedure TXLSTable.Open(ASheetIndex: integer);
begin
  FSheetIndex := ASheetIndex;

  FXLS.DoNotReadSheets := True;

  FXLS.Read;

  FXLS.Add;

  FCurrSheet := FXLS.Manager.Workbook.Sheets[FSheetIndex];

  FZStream := TFileStream.Create(FXLS.Filename,fmOpenRead + fmShareDenyNone);

  FXLS.Manager.FileData.LoadFromStream(FZStream);
  FStream := FXLS.Manager.FileData.OPC.OpenAndReadSheet(FCurrSheet.RId);
  FXML := TXPGDocXLSX.Create;

  FXML.Worksheet.SheetData.Row.OnReadC := OnCellDirect;
  FXML.Worksheet.SheetData.TableMode := True;
  FXML.Worksheet.SheetData.Row.TableMode := True;

  FSharedFormulas.Clear;
end;

function TXLSTable.ReadRow: boolean;
begin
  FRowRead := False;

  FXML.LoadFromStream(FStream,True);

  Result := FRowRead;
end;

end.
