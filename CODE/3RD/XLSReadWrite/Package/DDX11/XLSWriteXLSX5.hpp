// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSWriteXLSX5.pas' rev: 35.00 (Windows)

#ifndef Xlswritexlsx5HPP
#define Xlswritexlsx5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <xpgPUtils.hpp>
#include <xpgParseDocPropsApp.hpp>
#include <xpgParserXLSX.hpp>
#include <xpgParseXLinks.hpp>
#include <xpgParseDrawing.hpp>
#include <xpgPSimpleDOM.hpp>
#include <xpgParserPivot.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DefaultData5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12DataWorkbook5.hpp>
#include <Xc12DataWorksheet5.hpp>
#include <Xc12DataSST5.hpp>
#include <Xc12DataComments5.hpp>
#include <Xc12DataXLinks5.hpp>
#include <Xc12DataAutofilter5.hpp>
#include <Xc12DataTable5.hpp>
#include <Xc12FileData5.hpp>
#include <Xc12Manager5.hpp>
#include <XLSUtils5.hpp>
#include <XLSReadWriteOPC5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSMMU5.hpp>
#include <XLSFormula5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlswritexlsx5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSWriteSheetData;
class DELPHICLASS TXLSWriteXLSX;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSWriteSheetData : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TXLSWriteXLSX* FOwner;
	Xc12manager5::TXc12Manager* FManager;
	Xc12dataworksheet5::TXc12DataWorksheet* FCurrSheet;
	Xpgparserxlsx::TCT_SheetData* FSheetData;
	Xpgparserxlsx::TCT_Comments* FComments;
	int FCurrCol;
	int FCurrIndex;
	void __fastcall OnWriteRow(System::TObject* ASender, bool &AWriteElement);
	void __fastcall OnWriteRowDirect(System::TObject* ASender, bool &AWriteElement);
	void __fastcall OnWriteCell(System::TObject* ASender, bool &AWriteElement);
	void __fastcall OnWriteCellDirect(System::TObject* ASender, bool &AWriteElement);
	void __fastcall OnWriteCol(System::TObject* ASender, bool &AWriteElement);
	void __fastcall OnWriteComment(System::TObject* ASender, bool &AWriteElement);
	
public:
	__fastcall TXLSWriteSheetData(TXLSWriteXLSX* AOwner, Xc12dataworksheet5::TXc12DataWorksheet* ASheet, Xpgparserxlsx::TCT_SheetData* ASheetData, Xpgparserxlsx::TCT_Comments* AComments);
	void __fastcall Initiate();
	void __fastcall WriteComments(Xpgparserxlsx::TXPGDocXLSX* AXML, Xlsreadwriteopc5::TOPCItem* AOwner);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSWriteSheetData() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSWriteXLSX : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	Xlsformula5::TXLSFormulaHandler* FFormulas;
	Xc12dataworksheet5::TXc12DataWorksheet* FCurrSheet;
	Xlsreadwriteopc5::TOPCItem* FOPCSheet;
	int FCurrCount;
	int FCurrIndex;
	int FCurrMergeCell;
	int FCurrHyperlink;
	Xpgparserxlsx::TXPGDocXLSX* FXML;
	int __fastcall GetEnum(int AValue, int ADefault);
	void __fastcall GetRst(System::UnicodeString AText, Xc12datastylesheet5::TXc12DynFontRunArray ARuns, Xc12datastylesheet5::TXc12DynPhoneticRunArray APhonetics, Xpgparserxlsx::TCT_Rst* ADestRst);
	void __fastcall GetColor(const Xc12utils5::TXc12Color &ASrcColor, Xpgparserxlsx::TCT_Color* ADestColor);
	void __fastcall GetBorder(Xc12datastylesheet5::TXc12BorderPr* ASrcBorder, Xpgparserxlsx::TCT_BorderPr* ADestBorder);
	void __fastcall GetBorders(Xc12datastylesheet5::TXc12Border* ASrcBorder, Xpgparserxlsx::TCT_Border* ADestBorder);
	void __fastcall GetFont(Xc12datastylesheet5::TXc12Font* ASrcFont, Xpgparserxlsx::TCT_Font* ADestFont);
	void __fastcall GetPrFont(Xc12datastylesheet5::TXc12Font* ASrcFont, Xpgparserxlsx::TCT_RPrElt* ADestFont);
	void __fastcall GetFill(Xc12datastylesheet5::TXc12Fill* ASrcFill, Xpgparserxlsx::TCT_Fill* ADestFill);
	void __fastcall GetAlignment(Xc12datastylesheet5::TXc12CellAlignment* ASrcAlign, Xpgparserxlsx::TCT_CellAlignment* ADestAlign);
	void __fastcall GetProtection(Xc12datastylesheet5::TXc12CellProtections ASrcProtection, Xpgparserxlsx::TCT_CellProtection* ADestProtection);
	void __fastcall WriteDocPropsApp();
	void __fastcall WriteMedia();
	void __fastcall WriteSST();
	void __fastcall WriteConnections();
	void __fastcall WriteBorders();
	void __fastcall WriteFills();
	void __fastcall WriteFonts();
	void __fastcall WriteNumberFormats();
	void __fastcall WriteXFs(Xc12datastylesheet5::TXc12XFs* ASrc, Xpgparserxlsx::TCT_XfXpgList* ADest);
	void __fastcall WriteCellStyles();
	void __fastcall WriteDXFs();
	void __fastcall WriteTableStyles();
	void __fastcall WriteColors();
	void __fastcall WriteStyles();
	System::UnicodeString __fastcall WriteDrawing(Xlsreadwriteopc5::TOPCItem* AOwner);
	System::UnicodeString __fastcall WriteVmlDrawing(Xlsreadwriteopc5::TOPCItem* AOwner);
	void __fastcall WriteSheet(Xc12dataworksheet5::TXc12DataWorksheet* ASheet);
	void __fastcall WriteChartSheet(Xc12dataworksheet5::TXc12DataWorksheet* ASheet);
	void __fastcall WriteSheetViews(Xc12dataworksheet5::TXc12DataWorksheet* ASheet);
	void __fastcall WriteSheetCustomSheetViews(Xc12dataworksheet5::TXc12CustomSheetViews* ACSViews);
	void __fastcall WriteSheetAutoFilter(Xc12dataautofilter5::TXc12AutoFilter* ASrc, Xpgparserxlsx::TCT_AutoFilter* ADest);
	void __fastcall WriteSheetSortState(Xc12dataautofilter5::TXc12SortState* ASrc, Xpgparserxlsx::TCT_SortState* ADest);
	void __fastcall WriteSheetPane(Xc12dataworksheet5::TXc12Pane* ASrc, Xpgparserxlsx::TCT_Pane* ADest);
	void __fastcall WriteSheetSelection(Xc12dataworksheet5::TXc12Selection* ASrc, Xpgparserxlsx::TCT_Selection* ADest);
	void __fastcall WriteSheetPageBreak(Xc12dataworksheet5::TXc12PageBreaks* ASrc, Xpgparserxlsx::TCT_PageBreak* ADest);
	void __fastcall WriteSheetPageMargins(Xc12dataworksheet5::TXc12PageMargins* ASrc, Xpgparserxlsx::TCT_PageMargins* ADest);
	void __fastcall WriteSheetPrintOptions(Xc12dataworksheet5::TXc12PrintOptions* ASrc, Xpgparserxlsx::TCT_PrintOptions* ADest);
	void __fastcall WriteSheetPageSetup(Xc12dataworksheet5::TXc12PageSetup* ASrc, Xpgparserxlsx::TCT_PageSetup* ADest);
	void __fastcall WriteSheetHeaderFooter(Xc12dataworksheet5::TXc12HeaderFooter* ASrc, Xpgparserxlsx::TCT_HeaderFooter* ADest);
	System::UnicodeString __fastcall WriteSheetTable(Xc12datatable5::TXc12Table* ASrc, Xlsreadwriteopc5::TOPCItem* AOwner);
	void __fastcall WriteSheetCondFmt(Xc12dataworksheet5::TXc12ConditionalFormatting* ASrc, Xpgparserxlsx::TCT_ConditionalFormatting* ADest);
	void __fastcall WriteSheetCfvo(Xc12dataworksheet5::TXc12Cfvo* ASrc, Xpgparserxlsx::TCT_Cfvo* ADest);
	void __fastcall WriteSheetColors(Xc12dataworksheet5::TXc12Colors* ASrc, Xpgparserxlsx::TCT_ColorXpgList* ADest);
	void __fastcall WriteSheetSmartTags(Xc12dataworksheet5::TXc12SmartTags* ASrc, Xpgparserxlsx::TCT_CellSmartTagsXpgList* ADest);
	System::UnicodeString __fastcall WriteXLink(int AIndex);
	void __fastcall BeginWriteWorkbook();
	void __fastcall EndWriteWorkbook();
	void __fastcall OnWriteSSTItem(System::TObject* ASender, bool &AWriteElement);
	void __fastcall OnWriteDefinedName(System::TObject* ASender, bool &AWriteElement);
	void __fastcall OnWriteDefinedNames(System::TObject* ASender, bool &AWriteElement);
	void __fastcall OnWriteMergeCell(System::TObject* ASender, bool &AWriteElement);
	void __fastcall OnWriteHyperlink(System::TObject* ASender, bool &AWriteElement);
	
public:
	__fastcall TXLSWriteXLSX(Xc12manager5::TXc12Manager* AManager, Xlsformula5::TXLSFormulaHandler* AFormulas);
	__fastcall virtual ~TXLSWriteXLSX();
	void __fastcall SaveToStream(System::Classes::TStream* AStream);
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlswritexlsx5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSWRITEXLSX5)
using namespace Xlswritexlsx5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlswritexlsx5HPP
