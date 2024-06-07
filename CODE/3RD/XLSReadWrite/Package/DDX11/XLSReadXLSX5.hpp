// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSReadXLSX5.pas' rev: 35.00 (Windows)

#ifndef Xlsreadxlsx5HPP
#define Xlsreadxlsx5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Math.hpp>
#include <System.Contnrs.hpp>
#include <Winapi.Windows.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Common5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12DataWorkbook5.hpp>
#include <Xc12DataWorksheet5.hpp>
#include <Xc12DataComments5.hpp>
#include <Xc12DataXLinks5.hpp>
#include <Xc12DataAutofilter5.hpp>
#include <Xc12DataTable5.hpp>
#include <Xc12Manager5.hpp>
#include <Xc12FileData5.hpp>
#include <xpgParserXLSX.hpp>
#include <xpgParseXLinks.hpp>
#include <xpgParseDrawing.hpp>
#include <xpgParserPivot.hpp>
#include <xpgPXML.hpp>
#include <xpgPUtils.hpp>
#include <xpgPXMLUtils.hpp>
#include <xpgPSimpleDOM.hpp>
#include <XLSUtils5.hpp>
#include <XLSReadWriteOPC5.hpp>
#include <XLSMMU5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSFormulaTypes5.hpp>
#include <XLSFormula5.hpp>
#include <XLSCellAreas5.hpp>
#include <XLSPivotTables5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsreadxlsx5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSSharedFormula;
class DELPHICLASS TXLSSharedFormulaList;
class DELPHICLASS TReadSheetThread;
class DELPHICLASS TXLSReadXLSX;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSSharedFormula : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12utils5::TXLSCellRef FRef;
	Xc12utils5::TXLSCellArea FApplyArea;
	Xlsformulatypes5::TXLSPtgs *FPtgs;
	int FPtgsSize;
	
public:
	__fastcall virtual ~TXLSSharedFormula();
	void __fastcall AllocPtgs(const int ASize);
	Xlsformulatypes5::PXLSPtgs __fastcall CopyPtgs(int AIndex);
	__property Xc12utils5::TXLSCellRef Ref = {read=FRef, write=FRef};
	__property Xc12utils5::TXLSCellArea ApplyArea = {read=FApplyArea, write=FApplyArea};
	__property Xlsformulatypes5::PXLSPtgs Ptgs = {read=FPtgs, write=FPtgs};
	__property int PtgsSize = {read=FPtgsSize, write=FPtgsSize, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXLSSharedFormula() : System::TObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSSharedFormulaList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSSharedFormula* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSSharedFormula* __fastcall GetItems(int Index);
	
public:
	__fastcall TXLSSharedFormulaList();
	HIDESBASE void __fastcall Insert(int AIndex, Xc12utils5::PXLSCellRef ARef, Xc12utils5::PXLSCellArea AApplyArea, Xlsformulatypes5::PXLSPtgs APtgs, int APtgsSize);
	__property TXLSSharedFormula* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXLSSharedFormulaList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TReadSheetThread : public System::Classes::TThread
{
	typedef System::Classes::TThread inherited;
	
protected:
	System::Classes::TStream* FStream;
	Xc12dataworksheet5::TXc12DataWorksheet* FSheet;
	virtual void __fastcall Execute();
	void __fastcall ReadSheet();
	void __fastcall OnCell(System::TObject* ASender);
	void __fastcall OnRow(System::TObject* ASender);
	
public:
	__fastcall TReadSheetThread(System::Classes::TStream* AStream, Xc12dataworksheet5::TXc12DataWorksheet* ASheet);
	__fastcall virtual ~TReadSheetThread();
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSReadXLSX : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	Xlsformula5::TXLSFormulaHandler* FFormulas;
	TXLSSharedFormulaList* FSharedFormulas;
	Xlscellareas5::TCellAreas* FArrayFormulas;
	Xc12dataworksheet5::TXc12DataWorksheet* FCurrSheet;
	bool FNonStandard;
	bool FExtractVBA;
	System::Classes::TStream* FVBA;
	System::Classes::TStream* Stream;
	int FTotCells;
	int FTotRows;
	int __fastcall GetEnum(int AValue, int ADefault);
	Xc12utils5::TXc12Color __fastcall GetColor(Xpgparserxlsx::TCT_Color* AColor);
	void __fastcall GetBorder(Xpgparserxlsx::TCT_BorderPr* ABorder, Xc12datastylesheet5::TXc12BorderPr* ADest);
	Xc12datastylesheet5::TXc12ApplyFormats __fastcall GetXfApply(Xpgparserxlsx::TCT_Xf* AXf);
	Xc12datastylesheet5::TXc12CellProtections __fastcall GetProtections(Xpgparserxlsx::TCT_CellProtection* AProtection);
	void __fastcall GetFont(Xpgparserxlsx::TCT_Font* ASrcFont, Xc12datastylesheet5::TXc12Font* ADestFont);
	Xc12datastylesheet5::TXc12Font* __fastcall GetPrFont(Xpgparserxlsx::TCT_RPrElt* ASrcFont);
	void __fastcall GetFill(Xpgparserxlsx::TCT_Fill* ASrcFill, Xc12datastylesheet5::TXc12Fill* ADestFill);
	void __fastcall GetBorders(Xpgparserxlsx::TCT_Border* ASrcBorder, Xc12datastylesheet5::TXc12Border* ADestBorder);
	void __fastcall GetBordersStyle(Xpgparserxlsx::TCT_Border* ASrcBorder, Xc12datastylesheet5::TXc12Border* ADestBorder);
	void __fastcall GetAlignment(Xpgparserxlsx::TCT_CellAlignment* ASrcAlign, Xc12datastylesheet5::TXc12CellAlignment* ADestAlign);
	void __fastcall GetRst(Xpgparserxlsx::TCT_Rst* ARst, /* out */ System::UnicodeString &AText, /* out */ Xc12datastylesheet5::TXc12DynFontRunArray &ARuns, /* out */ Xc12datastylesheet5::TXc12DynPhoneticRunArray &APhonetics);
	void __fastcall ReadStyles();
	void __fastcall ReadStyleNumFmts(Xpgparserxlsx::TCT_NumFmtXpgList* AList);
	void __fastcall ReadStyleFonts(Xpgparserxlsx::TCT_FontXpgList* AList);
	void __fastcall ReadStyleFills(Xpgparserxlsx::TCT_FillXpgList* AList);
	void __fastcall ReadStyleBorders(Xpgparserxlsx::TCT_BorderXpgList* AList);
	void __fastcall ReadStyleXFs(Xpgparserxlsx::TCT_XfXpgList* AList, Xc12datastylesheet5::TXc12XFs* ADest);
	void __fastcall ReadStyleCellStyles(Xpgparserxlsx::TCT_CellStyleXpgList* AList);
	void __fastcall ReadStyleDxfs(Xpgparserxlsx::TCT_DxfXpgList* AList);
	void __fastcall ReadStyleTableStyles(Xpgparserxlsx::TCT_TableStyles* AList);
	void __fastcall ReadStyleColors(Xpgparserxlsx::TCT_Colors* AColors);
	void __fastcall ReadMedia(System::UnicodeString ADrawinRId);
	void __fastcall ReadSST();
	void __fastcall ReadConnections();
	void __fastcall ReadWorkbook();
	void __fastcall ReadSheets();
	void __fastcall ReadSheetsThread();
	void __fastcall ReadSheet(const System::UnicodeString AId);
	void __fastcall ReadChartSheet(const System::UnicodeString AId);
	void __fastcall ReadSheetView(Xpgparserxlsx::TCT_SheetViews* ASheetViews);
	void __fastcall ReadSheetAutoFilter(Xpgparserxlsx::TCT_AutoFilter* ASrc, Xc12dataautofilter5::TXc12AutoFilter* ADest);
	void __fastcall ReadSheetSortState(Xpgparserxlsx::TCT_SortState* ASrc, Xc12dataautofilter5::TXc12SortState* ADest);
	void __fastcall ReadSheetCustomSheetViews(Xpgparserxlsx::TCT_CustomSheetViews* ACSViews);
	void __fastcall ReadSheetPane(Xpgparserxlsx::TCT_Pane* ASrc, Xc12dataworksheet5::TXc12Pane* ADest);
	void __fastcall ReadSheetSelection(Xpgparserxlsx::TCT_Selection* ASrc, Xc12dataworksheet5::TXc12Selection* ADest);
	void __fastcall ReadSheetPageBreak(Xpgparserxlsx::TCT_PageBreak* ASrc, Xc12dataworksheet5::TXc12PageBreaks* ADest);
	void __fastcall ReadSheetPageMargins(Xpgparserxlsx::TCT_PageMargins* ASrc, Xc12dataworksheet5::TXc12PageMargins* ADest);
	void __fastcall ReadSheetPrintOptions(Xpgparserxlsx::TCT_PrintOptions* ASrc, Xc12dataworksheet5::TXc12PrintOptions* ADest);
	void __fastcall ReadSheetPageSetup(Xpgparserxlsx::TCT_PageSetup* ASrc, Xc12dataworksheet5::TXc12PageSetup* ADest);
	void __fastcall ReadSheetHeaderFooter(Xpgparserxlsx::TCT_HeaderFooter* ASrc, Xc12dataworksheet5::TXc12HeaderFooter* ADest);
	void __fastcall ReadSheetCondFmt(Xpgparserxlsx::TCT_ConditionalFormatting* ASrc, Xc12dataworksheet5::TXc12ConditionalFormatting* ADest);
	void __fastcall ReadSheetCfvo(Xpgparserxlsx::TCT_Cfvo* ASrc, Xc12dataworksheet5::TXc12Cfvo* ADest);
	void __fastcall ReadSheetColors(Xpgparserxlsx::TCT_ColorXpgList* ASrc, Xc12dataworksheet5::TXc12Colors* ADest);
	void __fastcall ReadSheetSmartTags(Xpgparserxlsx::TCT_CellSmartTagsXpgList* ASrc, Xc12dataworksheet5::TXc12SmartTags* ADest);
	void __fastcall ReadTable(const System::UnicodeString AId);
	void __fastcall ReadComments(const System::UnicodeString ASheetId);
	void __fastcall ReadXLink(const System::UnicodeString AId);
	void __fastcall ReadDrawing(const System::UnicodeString AId);
	void __fastcall ReadVmlDrawing(const System::UnicodeString AId);
	void __fastcall ReadVBA();
	void __fastcall OnSSTItem(System::TObject* ASender);
	void __fastcall OnCell(System::TObject* ASender);
	void __fastcall OnCellDirect(System::TObject* ASender);
	void __fastcall OnRow(System::TObject* ASender);
	void __fastcall OnCol(System::TObject* ASender);
	void __fastcall OnMergeCell(System::TObject* ASender);
	void __fastcall OnHyperlink(System::TObject* ASender);
	void __fastcall OnDefinedName(System::TObject* ASender);
	void __fastcall OnComment(System::TObject* ASender);
	void __fastcall OnDummy(System::TObject* ASender);
	void __fastcall ClearArrayFormulas();
	void __fastcall HandleParseError(System::TObject* ASender);
	
public:
	__fastcall TXLSReadXLSX(Xc12manager5::TXc12Manager* AManager, Xlsformula5::TXLSFormulaHandler* AFormulas);
	__fastcall virtual ~TXLSReadXLSX();
	void __fastcall LoadFromStream(System::Classes::TStream* AZIPStream, bool AReadSheets = true);
	void __fastcall LoadSheetNamesFromStream(System::Classes::TStream* AZIPStream, System::Classes::TStrings* AList);
	__property bool ExtractVBA = {read=FExtractVBA, write=FExtractVBA, nodefault};
	__property System::Classes::TStream* VBA = {read=FVBA};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsreadxlsx5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSREADXLSX5)
using namespace Xlsreadxlsx5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsreadxlsx5HPP
