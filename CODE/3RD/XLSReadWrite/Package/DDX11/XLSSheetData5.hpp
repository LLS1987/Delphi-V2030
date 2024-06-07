// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSSheetData5.pas' rev: 35.00 (Windows)

#ifndef Xlssheetdata5HPP
#define Xlssheetdata5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Types.hpp>
#include <System.Contnrs.hpp>
#include <System.Math.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ComCtrls.hpp>
#include <System.Variants.hpp>
#include <BIFF5.hpp>
#include <BIFF_EncodeFormulaII5.hpp>
#include <BIFF_SheetData5.hpp>
#include <BIFF_DrawingObj5.hpp>
#include <BIFF_VBA5.hpp>
#include <xpgParseDrawing.hpp>
#include <xpgParserPivot.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Common5.hpp>
#include <Xc12DataSST5.hpp>
#include <Xc12DataWorkbook5.hpp>
#include <Xc12DataWorksheet5.hpp>
#include <Xc12Manager5.hpp>
#include <Xc12FileData5.hpp>
#include <XLSUtils5.hpp>
#include <XLSMMU5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSRow5.hpp>
#include <XLSColumn5.hpp>
#include <XLSCellAreas5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12DataAutofilter5.hpp>
#include <XLSValidate5.hpp>
#include <XLSMergedCells5.hpp>
#include <XLSHyperlinks5.hpp>
#include <XLSCondFormat5.hpp>
#include <XLSAutofilter5.hpp>
#include <XLSDrawing5.hpp>
#include <XLSDecodeFmla5.hpp>
#include <XLSFormula5.hpp>
#include <XLSMask5.hpp>
#include <XLSFormulaTypes5.hpp>
#include <XLSNames5.hpp>
#include <XLSClassFactory5.hpp>
#include <XLSComment5.hpp>
#include <XLSFormattedObj5.hpp>
#include <XLSRange5.hpp>
#include <XLSCmdFormat5.hpp>
#include <XLSRelCells5.hpp>
#include <XLSSharedItems5.hpp>
#include <XLSPivotTables5.hpp>
#include <XLSRTFUtils.hpp>
#include <XLSReadRTF.hpp>
#include <XLSWriteRTF.hpp>
#include <XLSRichPainter5.hpp>
#include <XLSRTFReadWrite5.hpp>
#include <XLSAXWEditor.hpp>
#include <XLSClipboard5.hpp>
#include <XLSTools5.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlssheetdata5
{
//-- forward type declarations -----------------------------------------------
struct TXLSCellSortItem;
class DELPHICLASS TXLSSelectedArea;
class DELPHICLASS TXLSSelectedAreas;
class DELPHICLASS TXLSHorizPagebreak;
class DELPHICLASS TXLSHorizPagebreaks;
class DELPHICLASS TXLSVertPagebreak;
class DELPHICLASS TXLSVertPagebreaks;
class DELPHICLASS TXLSHeaderFooter;
class DELPHICLASS TXLSPrintSettings;
class DELPHICLASS TXLSPane;
class DELPHICLASS TXLSSheetProtection;
class DELPHICLASS TXLSRelCellsImpl;
class DELPHICLASS TXLSWorksheet;
class DELPHICLASS TXLSWorkbookData;
class DELPHICLASS TXLSOptionsDialog;
class DELPHICLASS TXLSWorkbook;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXLSDeleteOption : unsigned char { xdoCellValues, xdoFormats, xdoComments, xdoDataValidations, xdoConditionalFormats, xdoAutofilters, xdoDrawing };

typedef System::Set<TXLSDeleteOption, TXLSDeleteOption::xdoCellValues, TXLSDeleteOption::xdoDrawing> TXLSDeleteOptions;

enum DECLSPEC_DENUM TPaneType : unsigned char { ptNone, ptFrozen, ptSplit, ptFrozenSplit };

enum DECLSPEC_DENUM TActivePane : unsigned char { apBottomRight, apTopRight, apBottomLeft, apTopLeft };

enum DECLSPEC_DENUM TWorkspaceOption : unsigned char { woShowAutoBreaks, woApplyStyles, woRowSumsBelow, woColSumsRight, woFitToPage, woOutlineSymbols };

typedef System::Set<TWorkspaceOption, TWorkspaceOption::woShowAutoBreaks, TWorkspaceOption::woOutlineSymbols> TWorkspaceOptions;

enum DECLSPEC_DENUM TWorkbookOption : unsigned char { woHidden, woIconized, woHScroll, woVScroll, woTabs };

typedef System::Set<TWorkbookOption, TWorkbookOption::woHidden, TWorkbookOption::woTabs> TWorkbookOptions;

enum DECLSPEC_DENUM TCopyCellsOption : unsigned char { ccoAdjustCells, ccoLockStartRow, ccoForceAdjust, ccoCopyValues, ccoCopyClearFormulas, ccoCopyShapes, ccoCopyNotes, ccoCopyCondFmt, ccoCopyValidations, ccoCopyMerged };

typedef System::Set<TCopyCellsOption, TCopyCellsOption::ccoAdjustCells, TCopyCellsOption::ccoCopyMerged> TCopyCellsOptions;

enum DECLSPEC_DENUM TPrintSetupOption : unsigned char { psoLeftToRight, psoPortrait, psoNoColor, psoDraftQuality, psoNotes, psoRowColHeading, psoGridlines, psoHorizCenter, psoVertCenter };

typedef System::Set<TPrintSetupOption, TPrintSetupOption::psoLeftToRight, TPrintSetupOption::psoVertCenter> TPrintSetupOptions;

enum DECLSPEC_DENUM TXLSSheetOption : unsigned char { soGridlines, soRowColHeadings, soShowFormulas, soShowZeros };

typedef System::Set<TXLSSheetOption, TXLSSheetOption::soGridlines, TXLSSheetOption::soShowZeros> TXLSSheetOptions;

enum DECLSPEC_DENUM TSelectedAreaHit : unsigned char { sahNo, sahInside, sahEdge, sahActiveCell };

enum DECLSPEC_DENUM TSelectedEdgeHit : unsigned char { sehLeft, sehTop, sehRight, sehBottom };

typedef System::Set<TSelectedEdgeHit, TSelectedEdgeHit::sehLeft, TSelectedEdgeHit::sehBottom> TSelectedEdgeHits;

struct DECLSPEC_DRECORD TXLSCellSortItem
{
public:
	Xlscellmmu5::TXLSCellItem Cell;
	int Row;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSSelectedArea : public Xlscellareas5::TCellArea
{
	typedef Xlscellareas5::TCellArea inherited;
	
protected:
	int FCol1;
	int FRow1;
	int FCol2;
	int FRow2;
	virtual int __fastcall GetCol1();
	virtual int __fastcall GetRow1();
	virtual int __fastcall GetCol2();
	virtual int __fastcall GetRow2();
	virtual void __fastcall SetCol1(const int AValue);
	virtual void __fastcall SetRow1(const int AValue);
	virtual void __fastcall SetCol2(const int AValue);
	virtual void __fastcall SetRow2(const int AValue);
	
public:
	bool __fastcall Hit(int ACol, int ARow);
	Xc12utils5::TXLSCellArea __fastcall AsRect();
	void __fastcall SetArea(int C1, int R1, int C2, int R2);
	void __fastcall Intersect(int C1, int R1, int C2, int R2);
	bool __fastcall IsColumns();
public:
	/* TObject.Create */ inline __fastcall TXLSSelectedArea() : Xlscellareas5::TCellArea() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSSelectedArea() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSSelectedAreas : public Xlscellareas5::TCellAreas
{
	typedef Xlscellareas5::TCellAreas inherited;
	
public:
	TXLSSelectedArea* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TXLSSelectedArea* __fastcall GetItems(int Index);
	
protected:
	int FActiveCol;
	int FActiveRow;
	int FActiveArea;
	void __fastcall SetActiveCol(const int Value);
	void __fastcall SetActiveRow(const int Value);
	
public:
	__fastcall TXLSSelectedAreas();
	void __fastcall Init(int ACol = 0x0, int ARow = 0x0)/* overload */;
	void __fastcall Init(int C1, int R1, int C2, int R2, int ActC, int ActR)/* overload */;
	void __fastcall CursorCell(int ACol, int ARow);
	HIDESBASE TXLSSelectedArea* __fastcall Add()/* overload */;
	HIDESBASE TXLSSelectedArea* __fastcall Add(int C1, int R1, int C2, int R2)/* overload */;
	HIDESBASE TXLSSelectedArea* __fastcall First();
	HIDESBASE TXLSSelectedArea* __fastcall Last();
	HIDESBASE int __fastcall CellInAreas(int ACol, int ARow, TSelectedEdgeHits &EdgeHit, TSelectedAreaHit &AreaHit);
	bool __fastcall CursorVisible();
	__property int ActiveCol = {read=FActiveCol, write=SetActiveCol, nodefault};
	__property int ActiveRow = {read=FActiveRow, write=SetActiveRow, nodefault};
	__property int ActiveArea = {read=FActiveArea, write=FActiveArea, nodefault};
	__property TXLSSelectedArea* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXLSSelectedAreas() { }
	
	/* Hoisted overloads: */
	
public:
	inline Xlscellareas5::TCellArea* __fastcall  Add(const System::UnicodeString ARef){ return Xlscellareas5::TBaseCellAreas::Add(ARef); }
	inline Xlscellareas5::TCellArea* __fastcall  Add(const Xc12utils5::PXLSCellArea AArea){ return Xlscellareas5::TBaseCellAreas::Add(AArea); }
	inline Xlscellareas5::TCellArea* __fastcall  Add(const int C, const int R){ return Xlscellareas5::TBaseCellAreas::Add(C, R); }
	inline void __fastcall  Add(const int C1, const int R1, const int C2, const int R2, Xlscellareas5::TBaseCellAreas* AAreas){ Xlscellareas5::TBaseCellAreas::Add(C1, R1, C2, R2, AAreas); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSHorizPagebreak : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12dataworksheet5::TXc12Break* FXc12PageBreak;
	int __fastcall GetRow();
	int __fastcall GetCol1();
	int __fastcall GetCol2();
	void __fastcall SetRow(const int Value);
	void __fastcall SetCol1(const int Value);
	void __fastcall SetCol2(const int Value);
	
public:
	__fastcall TXLSHorizPagebreak(Xc12dataworksheet5::TXc12Break* APageBreak);
	__property int Row = {read=GetRow, write=SetRow, nodefault};
	__property int Col1 = {read=GetCol1, write=SetCol1, nodefault};
	__property int Col2 = {read=GetCol2, write=SetCol2, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSHorizPagebreak() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSHorizPagebreaks : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSHorizPagebreak* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSHorizPagebreak* __fastcall GetItems(int Index);
	
protected:
	Xc12dataworksheet5::TXc12PageBreaks* FXc12PageBreaks;
	
public:
	__fastcall TXLSHorizPagebreaks(Xc12dataworksheet5::TXc12PageBreaks* AXc12PageBreaks);
	HIDESBASE TXLSHorizPagebreak* __fastcall Add()/* overload */;
	HIDESBASE TXLSHorizPagebreak* __fastcall Add(const int ARow)/* overload */;
	TXLSHorizPagebreak* __fastcall Find(const int ARow);
	int __fastcall FindIndex(const int ARow);
	__property TXLSHorizPagebreak* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXLSHorizPagebreaks() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSVertPagebreak : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12dataworksheet5::TXc12Break* FXc12PageBreak;
	int __fastcall GetCol();
	int __fastcall GetRow1();
	int __fastcall GetRow2();
	void __fastcall SetCol(const int Value);
	void __fastcall SetRow1(const int Value);
	void __fastcall SetRow2(const int Value);
	
public:
	__fastcall TXLSVertPagebreak(Xc12dataworksheet5::TXc12Break* APageBreak);
	__property int Col = {read=GetCol, write=SetCol, nodefault};
	__property int Row1 = {read=GetRow1, write=SetRow1, nodefault};
	__property int Row2 = {read=GetRow2, write=SetRow2, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSVertPagebreak() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSVertPagebreaks : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSVertPagebreak* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSVertPagebreak* __fastcall GetItems(int Index);
	
protected:
	Xc12dataworksheet5::TXc12PageBreaks* FXc12PageBreaks;
	
public:
	__fastcall TXLSVertPagebreaks(Xc12dataworksheet5::TXc12PageBreaks* AXc12PageBreaks);
	HIDESBASE TXLSVertPagebreak* __fastcall Add()/* overload */;
	HIDESBASE TXLSVertPagebreak* __fastcall Add(const int ACol)/* overload */;
	TXLSVertPagebreak* __fastcall Find(const int ACol);
	int __fastcall FindIndex(const int ACol);
	__property TXLSVertPagebreak* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXLSVertPagebreaks() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSHeaderFooter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool __fastcall GetAlignWithMargins();
	bool __fastcall GetDifferentFirst();
	bool __fastcall GetDifferentOddEven();
	System::UnicodeString __fastcall GetEvenFooter();
	System::UnicodeString __fastcall GetEvenHeader();
	System::UnicodeString __fastcall GetFirstFooter();
	System::UnicodeString __fastcall GetFirstHeader();
	System::UnicodeString __fastcall GetOddFooter();
	System::UnicodeString __fastcall GetOddHeader();
	bool __fastcall GetScaleWithDoc();
	void __fastcall SetAlignWithMargins(const bool Value);
	void __fastcall SetDifferentFirst(const bool Value);
	void __fastcall SetDifferentOddEven(const bool Value);
	void __fastcall SetEvenFooter(const System::UnicodeString Value);
	void __fastcall SetEvenHeader(const System::UnicodeString Value);
	void __fastcall SetFirstFooter(const System::UnicodeString Value);
	void __fastcall SetFirstHeader(const System::UnicodeString Value);
	void __fastcall SetOddFooter(const System::UnicodeString Value);
	void __fastcall SetOddHeader(const System::UnicodeString Value);
	void __fastcall SetScaleWithDoc(const bool Value);
	
protected:
	Xc12dataworksheet5::TXc12HeaderFooter* FXc12HeaderFooter;
	
public:
	__fastcall TXLSHeaderFooter(Xc12dataworksheet5::TXc12HeaderFooter* AXc12HeaderFooter);
	void __fastcall Clear();
	__property bool DifferentOddEven = {read=GetDifferentOddEven, write=SetDifferentOddEven, nodefault};
	__property bool DifferentFirst = {read=GetDifferentFirst, write=SetDifferentFirst, nodefault};
	__property bool ScaleWithDoc = {read=GetScaleWithDoc, write=SetScaleWithDoc, nodefault};
	__property bool AlignWithMargins = {read=GetAlignWithMargins, write=SetAlignWithMargins, nodefault};
	__property System::UnicodeString OddHeader = {read=GetOddHeader, write=SetOddHeader};
	__property System::UnicodeString OddFooter = {read=GetOddFooter, write=SetOddFooter};
	__property System::UnicodeString EvenHeader = {read=GetEvenHeader, write=SetEvenHeader};
	__property System::UnicodeString EvenFooter = {read=GetEvenFooter, write=SetEvenFooter};
	__property System::UnicodeString FirstHeader = {read=GetFirstHeader, write=SetFirstHeader};
	__property System::UnicodeString FirstFooter = {read=GetFirstFooter, write=SetFirstFooter};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSHeaderFooter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSPrintSettings : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TPrintSetupOptions __fastcall GetOptions();
	void __fastcall SetOptions(const TPrintSetupOptions Value);
	int __fastcall GetCopies();
	double __fastcall GetFooterMargin();
	double __fastcall GetHeaderMargin();
	Xc12utils5::TXc12PaperSize __fastcall GetPaperSize();
	int __fastcall GetScalingFactor();
	int __fastcall GetStartingPage();
	void __fastcall SetCopies(const int Value);
	void __fastcall SetFooterMargin(const double Value);
	void __fastcall SetHeaderMargin(const double Value);
	void __fastcall SetPaperSize(const Xc12utils5::TXc12PaperSize Value);
	void __fastcall SetScalingFactor(const int Value);
	void __fastcall SetStartingPage(const int Value);
	int __fastcall GetResolution();
	void __fastcall SetResolution(const int Value);
	double __fastcall GetMarginBottomCm();
	double __fastcall GetMarginLeftCm();
	double __fastcall GetMarginRightCm();
	double __fastcall GetMarginTopCm();
	void __fastcall SetMarginBottomCm(const double Value);
	void __fastcall SetMarginLeftCm(const double Value);
	void __fastcall SetMarginRightCm(const double Value);
	void __fastcall SetMarginTopCm(const double Value);
	int __fastcall GetFitHeight();
	int __fastcall GetFitWidth();
	void __fastcall SetFitHeight(const int Value);
	void __fastcall SetFitWidth(const int Value);
	double __fastcall GetFooterMarginCm();
	double __fastcall GetHeaderMarginCm();
	void __fastcall SetFooterMarginCm(const double Value);
	void __fastcall SetHeaderMarginCm(const double Value);
	double __fastcall GetMarginBottom();
	double __fastcall GetMarginLeft();
	double __fastcall GetMarginRight();
	double __fastcall GetMarginTop();
	void __fastcall SetMarginBottom(const double Value);
	void __fastcall SetMarginLeft(const double Value);
	void __fastcall SetMarginRight(const double Value);
	void __fastcall SetMarginTop(const double Value);
	
protected:
	Xc12dataworksheet5::TXc12DataWorksheet* FXc12Sheet;
	Xlsnames5::TXLSNames* FNames;
	TXLSHeaderFooter* FXLSHeaderFooter;
	TXLSVertPagebreaks* FVertPagebreaks;
	TXLSHorizPagebreaks* FHorizPagebreaks;
	
public:
	__fastcall TXLSPrintSettings(Xc12dataworksheet5::TXc12DataWorksheet* AXc12Sheet, Xlsnames5::TXLSNames* ANames);
	__fastcall virtual ~TXLSPrintSettings();
	void __fastcall PrintArea(const int ACol1, const int ARow1, const int ACol2, const int ARow2);
	bool __fastcall GetPrintArea(/* out */ int &ACol1, /* out */ int &ARow1, /* out */ int &ACol2, /* out */ int &ARow2);
	void __fastcall ClearPrintArea();
	void __fastcall PrintTitles(const int ACol1, const int ACol2, const int ARow1, const int ARow2);
	bool __fastcall GetPrintTitles(/* out */ int &ACol1, /* out */ int &ACol2, /* out */ int &ARow1, /* out */ int &ARow2);
	bool __fastcall GetPrintTitlesRows(/* out */ int &ARow1, /* out */ int &ARow2);
	bool __fastcall GetPrintTitlesCols(/* out */ int &ACol1, /* out */ int &ACol2);
	void __fastcall ClearPrintTitles();
	void __fastcall Clear();
	Xlsutils5::TXLSPointF __fastcall PaperSizeDim();
	__property int Copies = {read=GetCopies, write=SetCopies, nodefault};
	__property TXLSHeaderFooter* HeaderFooter = {read=FXLSHeaderFooter};
	__property double FooterMargin = {read=GetFooterMargin, write=SetFooterMargin};
	__property double FooterMarginCm = {read=GetFooterMarginCm, write=SetFooterMarginCm};
	__property double HeaderMargin = {read=GetHeaderMargin, write=SetHeaderMargin};
	__property double HeaderMarginCm = {read=GetHeaderMarginCm, write=SetHeaderMarginCm};
	__property double MarginBottom = {read=GetMarginBottom, write=SetMarginBottom};
	__property double MarginLeft = {read=GetMarginLeft, write=SetMarginLeft};
	__property double MarginRight = {read=GetMarginRight, write=SetMarginRight};
	__property double MarginTop = {read=GetMarginTop, write=SetMarginTop};
	__property double MarginBottomCm = {read=GetMarginBottomCm, write=SetMarginBottomCm};
	__property double MarginLeftCm = {read=GetMarginLeftCm, write=SetMarginLeftCm};
	__property double MarginRightCm = {read=GetMarginRightCm, write=SetMarginRightCm};
	__property double MarginTopCm = {read=GetMarginTopCm, write=SetMarginTopCm};
	__property TPrintSetupOptions Options = {read=GetOptions, write=SetOptions, nodefault};
	__property Xc12utils5::TXc12PaperSize PaperSize = {read=GetPaperSize, write=SetPaperSize, nodefault};
	__property int ScalingFactor = {read=GetScalingFactor, write=SetScalingFactor, nodefault};
	__property int StartingPage = {read=GetStartingPage, write=SetStartingPage, nodefault};
	__property TXLSHorizPagebreaks* HorizPagebreaks = {read=FHorizPagebreaks};
	__property TXLSVertPagebreaks* VertPagebreaks = {read=FVertPagebreaks};
	__property int Resolution = {read=GetResolution, write=SetResolution, nodefault};
	__property int FitWidth = {read=GetFitWidth, write=SetFitWidth, nodefault};
	__property int FitHeight = {read=GetFitHeight, write=SetFitHeight, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSPane : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Xc12dataworksheet5::TXc12Pane* FXc12Pane;
	TActivePane __fastcall GetActivePane();
	int __fastcall GetLeftCol();
	TPaneType __fastcall GetPaneType();
	double __fastcall GetSplitColX();
	double __fastcall GetSplitRowY();
	int __fastcall GetTopRow();
	void __fastcall SetActivePane(const TActivePane Value);
	void __fastcall SetLeftCol(const int Value);
	void __fastcall SetPaneType(const TPaneType Value);
	void __fastcall SetSplitColX(const double Value);
	void __fastcall SetSplitRowY(const double Value);
	void __fastcall SetTopRow(const int Value);
	
public:
	__fastcall TXLSPane(Xc12dataworksheet5::TXc12Pane* const AXc12Pane);
	void __fastcall Clear();
	__property TActivePane ActivePane = {read=GetActivePane, write=SetActivePane, nodefault};
	__property TPaneType PaneType = {read=GetPaneType, write=SetPaneType, nodefault};
	__property double SplitColX = {read=GetSplitColX, write=SetSplitColX};
	__property double SplitRowY = {read=GetSplitRowY, write=SetSplitRowY};
	__property int LeftCol = {read=GetLeftCol, write=SetLeftCol, nodefault};
	__property int TopRow = {read=GetTopRow, write=SetTopRow, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSPane() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSSheetProtection : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool __fastcall GetAutoFilter();
	bool __fastcall GetDeleteColumns();
	bool __fastcall GetDeleteRows();
	bool __fastcall GetFormatCells();
	bool __fastcall GetFormatColumns();
	bool __fastcall GetFormatRows();
	bool __fastcall GetInsertColumns();
	bool __fastcall GetInsertHyperlinks();
	bool __fastcall GetInsertRows();
	bool __fastcall GetObjects();
	System::UnicodeString __fastcall GetPasswordString();
	bool __fastcall GetPivotTables();
	bool __fastcall GetScenarios();
	bool __fastcall GetSelectLockedCells();
	bool __fastcall GetSelectUnlockedCells();
	bool __fastcall GetSheet();
	bool __fastcall GetSort();
	void __fastcall SetAutoFilter(const bool Value);
	void __fastcall SetDeleteColumns(const bool Value);
	void __fastcall SetDeleteRows(const bool Value);
	void __fastcall SetFormatCells(const bool Value);
	void __fastcall SetFormatColumns(const bool Value);
	void __fastcall SetFormatRows(const bool Value);
	void __fastcall SetInsertColumns(const bool Value);
	void __fastcall SetInsertHyperlinks(const bool Value);
	void __fastcall SetInsertRows(const bool Value);
	void __fastcall SetObjects(const bool Value);
	void __fastcall SetPasswordString(const System::UnicodeString Value);
	void __fastcall SetPivotTables(const bool Value);
	void __fastcall SetScenarios(const bool Value);
	void __fastcall SetSelectLockedCells(const bool Value);
	void __fastcall SetSelectUnlockedCells(const bool Value);
	void __fastcall SetSheet(const bool Value);
	void __fastcall SetSort(const bool Value);
	
protected:
	Xc12dataworksheet5::TXc12SheetProtection* FProtection;
	bool FAssigned;
	
public:
	__fastcall TXLSSheetProtection(Xc12dataworksheet5::TXc12SheetProtection* AProtection);
	void __fastcall Clear();
	__property System::UnicodeString Password = {read=GetPasswordString, write=SetPasswordString};
	__property bool Sheet = {read=GetSheet, write=SetSheet, nodefault};
	__property bool Objects = {read=GetObjects, write=SetObjects, nodefault};
	__property bool Scenarios = {read=GetScenarios, write=SetScenarios, nodefault};
	__property bool FormatCells = {read=GetFormatCells, write=SetFormatCells, nodefault};
	__property bool FormatColumns = {read=GetFormatColumns, write=SetFormatColumns, nodefault};
	__property bool FormatRows = {read=GetFormatRows, write=SetFormatRows, nodefault};
	__property bool InsertColumns = {read=GetInsertColumns, write=SetInsertColumns, nodefault};
	__property bool InsertRows = {read=GetInsertRows, write=SetInsertRows, nodefault};
	__property bool InsertHyperlinks = {read=GetInsertHyperlinks, write=SetInsertHyperlinks, nodefault};
	__property bool DeleteColumns = {read=GetDeleteColumns, write=SetDeleteColumns, nodefault};
	__property bool DeleteRows = {read=GetDeleteRows, write=SetDeleteRows, nodefault};
	__property bool SelectLockedCells = {read=GetSelectLockedCells, write=SetSelectLockedCells, nodefault};
	__property bool Sort = {read=GetSort, write=SetSort, nodefault};
	__property bool AutoFilter = {read=GetAutoFilter, write=SetAutoFilter, nodefault};
	__property bool PivotTables = {read=GetPivotTables, write=SetPivotTables, nodefault};
	__property bool SelectUnlockedCells = {read=GetSelectUnlockedCells, write=SetSelectUnlockedCells, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSSheetProtection() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSRelCellsImpl : public Xlsrelcells5::TXLSRelCells
{
	typedef Xlsrelcells5::TXLSRelCells inherited;
	
protected:
	TXLSWorksheet* FSheet;
	virtual Xlsrelcells5::TXLSRelCells* __fastcall Clone();
	virtual double __fastcall GetAsFloat(int ACol, int ARow);
	virtual System::UnicodeString __fastcall GetAsString(int ACol, int ARow);
	virtual bool __fastcall GetAsBoolean(int ACol, int ARow);
	virtual Xc12utils5::TXc12CellError __fastcall GetAsError(int ACol, int ARow);
	virtual bool __fastcall GetAsBlank(int ACol, int ARow);
	virtual bool __fastcall GetAsEmpty(int ACol, int ARow);
	virtual System::UnicodeString __fastcall GetAsFmtString(int ACol, int ARow);
	virtual Xlsshareditems5::TXLSSharedItemsValue* __fastcall GetAsSharedItem(int ACol, int ARow);
	virtual Xc12utils5::TXLSCellType __fastcall GetCellType(int ACol, int ARow);
	virtual bool __fastcall GetIsDateTime(int Col, int Row);
	virtual void __fastcall SetAsBoolean(int ACol, int ARow, const bool AValue);
	virtual void __fastcall SetAsFloat(int ACol, int ARow, const double AValue);
	virtual void __fastcall SetAsString(int ACol, int ARow, const System::UnicodeString AValue);
	virtual void __fastcall SetAsError(int ACol, int ARow, const Xc12utils5::TXc12CellError AValue);
	virtual void __fastcall SetAsBlank(int ACol, int ARow, const bool Value);
	virtual void __fastcall SetAsSharedItem(int ACol, int ARow, Xlsshareditems5::TXLSSharedItemsValue* Value);
	
public:
	__fastcall TXLSRelCellsImpl(TXLSWorksheet* ASheet);
	virtual void __fastcall ClearAll(int ACol1, int ARow1, int ACol2, int ARow2)/* overload */;
	virtual System::UnicodeString __fastcall SheetName();
	virtual int __fastcall SheetIndex();
	virtual void __fastcall AutoWidthCol(int ACol);
	virtual void __fastcall BeginCommand();
	virtual void __fastcall ApplyCommand()/* overload */;
	virtual void __fastcall ApplyCommand(const int ACol, const int ARow)/* overload */;
	virtual void __fastcall ApplyCommand(int ACol1, int ARow1, int ACol2, int ARow2)/* overload */;
	__property TXLSWorksheet* Sheet = {read=FSheet, write=FSheet};
public:
	/* TXLSRelCells.Destroy */ inline __fastcall virtual ~TXLSRelCellsImpl() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  ClearAll(){ Xlsrelcells5::TXLSRelCells::ClearAll(); }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSWorksheet : public Xlsutils5::TIndexObject
{
	typedef Xlsutils5::TIndexObject inherited;
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	Xlsclassfactory5::TXLSClassFactory* FClassFactory;
	TXLSWorkbook* FOwner;
	Xc12dataworksheet5::TXc12DataWorksheet* FXc12Sheet;
	Xc12dataworksheet5::TXc12SheetView* FXc12SheetView;
	bool FOwnsSheetView;
	Xlscellmmu5::TXLSCellMMU* FCells;
	Xlsformattedobj5::TXLSCell* FTheCell;
	Xlsformattedobj5::TXLSFormattedCell* FTheCellFormat;
	Xlsrange5::TXLSRange* FRange;
	Xlsrow5::TXLSRows* FRows;
	Xlscolumn5::TXLSColumns* FColumns;
	Xlsmergedcells5::TXLSMergedCells* FMergedCells;
	Xlsvalidate5::TXLSDataValidations* FValidations;
	Xlshyperlinks5::TXLSHyperlinks* FHyperlinks;
	Xlscondformat5::TXLSConditionalFormats* FCondFormats;
	Xlsautofilter5::TXLSAutofilter* FAutofilter;
	Xlscomment5::TXLSComments* FComments;
	Xlsdrawing5::TXLSDrawing* FDrawing;
	Xlspivottables5::TXLSPivotTables* FPivotTables;
	TXLSSelectedAreas* FSelectedAreas;
	Xlscellareas5::TCellAreas* FVisibleAreas;
	TXLSPrintSettings* FPrintSettings;
	TXLSPane* FPane;
	TXLSSheetProtection* FProtection;
	System::Uitypes::TColor FTabColor;
	int FCurrFindPos;
	int FCurrFindCol;
	int FCurrFindRow;
	int FDefDecimals;
	Xc12utils5::TXc12RefEvent FXSSCellInvalidateEvent;
	Xlsrow5::TXLSRows* __fastcall GetRows();
	Xlscolumn5::TXLSColumns* __fastcall GetColumns();
	double __fastcall GetAsFloat(int ACol, int ARow);
	void __fastcall SetAsFloat(int ACol, int ARow, double AValue);
	bool __fastcall GetAsBlank(int ACol, int ARow);
	bool __fastcall GetAsEmpty(int ACol, int ARow);
	void __fastcall SetAsBlank(int ACol, int ARow, const bool Value);
	Xlsautofilter5::TXLSAutofilter* __fastcall GetAutofilter();
	int __fastcall GetDefaultRowHeight();
	void __fastcall SetDefaultRowHeight(const int Value);
	Xlshyperlinks5::TXLSHyperlinks* __fastcall GetHyperlinks();
	TXLSSelectedAreas* __fastcall GetSelectedAreas();
	Xlsmergedcells5::TXLSMergedCells* __fastcall GetMergedCells();
	TXLSPrintSettings* __fastcall GetPrintSettings();
	TXLSSheetOptions __fastcall GetOptions();
	void __fastcall SetOptions(const TXLSSheetOptions Value);
	Xlsdrawing5::TXLSDrawing* __fastcall GetDrawing();
	Xlscellareas5::TCellAreas* __fastcall GetVisibleAreas();
	Xlsformattedobj5::TXLSCell* __fastcall GetCell(int ACol, int ARow);
	Xlscondformat5::TXLSConditionalFormats* __fastcall GetConditionalFormats();
	int __fastcall GetLeftCol();
	int __fastcall GetTopRow();
	void __fastcall SetLeftCol(const int Value);
	void __fastcall SetTopRow(const int Value);
	int __fastcall GetZoom();
	void __fastcall SetZoom(const int Value);
	System::UnicodeString __fastcall GetName();
	unsigned __fastcall GetTabColor();
	void __fastcall SetName(const System::UnicodeString Value);
	void __fastcall SetTabColor(const unsigned Value);
	bool __fastcall GetAsBlankRef(const System::UnicodeString ARef);
	bool __fastcall GetAsBoolean(int ACol, int ARow);
	bool __fastcall GetAsBooleanRef(const System::UnicodeString ARef);
	bool __fastcall GetAsBoolFormulaValue(int ACol, int ARow);
	bool __fastcall GetAsBoolFormulaValueRef(const System::UnicodeString ARef);
	System::TDateTime __fastcall GetAsDateTime(int ACol, int ARow);
	System::TDateTime __fastcall GetAsDateTimeRef(const System::UnicodeString ARef);
	Xc12utils5::TXc12CellError __fastcall GetAsError(int ACol, int ARow);
	Xc12utils5::TXc12CellError __fastcall GetAsErrorRef(const System::UnicodeString ARef);
	double __fastcall GetAsFloatRef(const System::UnicodeString ARef);
	System::UnicodeString __fastcall GetAsFormula(int ACol, int ARow)/* overload */;
	System::UnicodeString __fastcall GetAsFormulaRef(const System::UnicodeString ARef);
	System::UnicodeString __fastcall GetAsHTML(int ACol, int ARow);
	System::UnicodeString __fastcall GetAsHTMLRef(const System::UnicodeString ARef);
	System::UnicodeString __fastcall GetAsHyperlink(int ACol, int ARow);
	int __fastcall GetAsInteger(int ACol, int ARow);
	int __fastcall GetAsIntegerRef(const System::UnicodeString ARef);
	double __fastcall GetAsNumFormulaValue(int ACol, int ARow);
	double __fastcall GetAsNumFormulaValueRef(const System::UnicodeString ARef);
	System::AnsiString __fastcall GetAsRichText(int ACol, int ARow);
	System::UnicodeString __fastcall GetAsRichTextRef(const System::UnicodeString ARef);
	System::UnicodeString __fastcall GetAsSimpleTags(int ACol, int ARow);
	System::UnicodeString __fastcall GetAsSimpleTagsRef(const System::UnicodeString ARef);
	System::UnicodeString __fastcall GetAsStrFormulaValue(int ACol, int ARow);
	System::UnicodeString __fastcall GetAsStrFormulaValueRef(const System::UnicodeString ARef);
	System::UnicodeString __fastcall GetAsString(int ACol, int ARow);
	System::UnicodeString __fastcall GetAsStringRef(const System::UnicodeString ARef);
	System::Variant __fastcall GetAsVariant(int ACol, int ARow);
	System::Variant __fastcall GetAsVariantRef(const System::UnicodeString ARef);
	Xc12utils5::TXLSCellType __fastcall GetCellType(int ACol, int ARow);
	Xlscellmmu5::TXLSCellFormulaType __fastcall GetFormulaType(int ACol, int ARow);
	int __fastcall GetDefaultColWidth();
	System::UnicodeString __fastcall GetAsFmtString(int ACol, int ARow);
	System::UnicodeString __fastcall GetAsFmtStringRef(const System::UnicodeString ARef);
	bool __fastcall GetIsDateTime(int ACol, int ARow);
	bool __fastcall GetRecalcFormulas();
	Xlsvalidate5::TXLSDataValidations* __fastcall GetValidations();
	TWorkspaceOptions __fastcall GetWorkspaceOptions();
	int __fastcall GetZoomPreview();
	bool __fastcall GetTabSelected();
	void __fastcall SetTabSelected(const bool Value);
	void __fastcall SetAsBlankRef(const System::UnicodeString ARef, const bool Value);
	void __fastcall SetAsBoolean(int ACol, int ARow, const bool Value);
	void __fastcall SetAsBooleanRef(const System::UnicodeString ARef, const bool Value);
	void __fastcall SetAsBoolFormulaValue(int ACol, int ARow, const bool Value);
	void __fastcall SetAsBoolFormulaValueRef(const System::UnicodeString ARef, const bool Value);
	void __fastcall SetAsDateTime(int ACol, int ARow, const System::TDateTime Value);
	void __fastcall SetAsDateTimeRef(const System::UnicodeString ARef, const System::TDateTime Value);
	void __fastcall SetAsError(int ACol, int ARow, const Xc12utils5::TXc12CellError Value);
	void __fastcall SetAsErrorRef(const System::UnicodeString ARef, const Xc12utils5::TXc12CellError Value);
	void __fastcall SetAsFloatRef(const System::UnicodeString ARef, const double Value);
	void __fastcall SetAsFormula(int ACol, int ARow, const System::UnicodeString Value);
	void __fastcall SetAsFormulaRef(const System::UnicodeString ARef, const System::UnicodeString Value);
	void __fastcall SetAsHyperlink(int ACol, int ARow, const System::UnicodeString Value);
	void __fastcall SetAsInteger(int ACol, int ARow, const int Value);
	void __fastcall SetAsIntegerRef(const System::UnicodeString ARef, const int Value);
	void __fastcall SetAsNumFormulaValue(int ACol, int ARow, const double Value);
	void __fastcall SetAsNumFormulaValueRef(const System::UnicodeString ARef, const double Value);
	void __fastcall SetAsRichText(int ACol, int ARow, const System::AnsiString Value);
	void __fastcall SetAsRichTextRef(const System::UnicodeString ARef, const System::UnicodeString Value);
	void __fastcall SetAsSimpleTags(int ACol, int ARow, const System::UnicodeString Value);
	void __fastcall SetAsSimpleTagsRef(const System::UnicodeString ARef, const System::UnicodeString Value);
	void __fastcall SetAsStrFormulaValue(int ACol, int ARow, const System::UnicodeString Value);
	void __fastcall SetAsStrFormulaValueRef(const System::UnicodeString ARef, const System::UnicodeString Value);
	void __fastcall SetAsString(int ACol, int ARow, const System::UnicodeString Value);
	void __fastcall SetAsStringRef(const System::UnicodeString ARef, const System::UnicodeString Value);
	void __fastcall SetAsVariant(int ACol, int ARow, const System::Variant &Value);
	void __fastcall SetAsVariantRef(const System::UnicodeString ARef, const System::Variant &Value);
	void __fastcall SetDefaultColWidth(const int Value);
	void __fastcall SetRecalcFormulas(const bool Value);
	void __fastcall SetWorkspaceOptions(const TWorkspaceOptions Value);
	void __fastcall SetZoomPreview(const int Value);
	TXLSPane* __fastcall GetPane();
	Xlsformattedobj5::TXLSFormattedCell* __fastcall GetCellFormat(const int ACol, const int ARow);
	System::UnicodeString __fastcall GetAsArray(int Col1, int Row1, int Col2, int Row2, int MaxLength);
	Xc12utils5::TXc12Visibility __fastcall GetVisibility();
	void __fastcall SetVisibility(const Xc12utils5::TXc12Visibility Value);
	void __fastcall SetIgnoreErrorNumbersAsText(const bool Value);
	void __fastcall MoveCellObjects(int ACol1, int ARow1, int ACol2, int ARow2, int ADeltaCol, int ADeltaRow);
	void __fastcall DeleteCellObjects(int ACol1, int ARow1, int ACol2, int ARow2);
	void __fastcall CompileFormula(const int ACol, const int ARow, Xlscellmmu5::PXLSCellItem ACell);
	void __fastcall CompileFormulas();
	int __fastcall GetDefaultFormat(const int ACol, const int ARow);
	void __fastcall ColWidthChanged(System::TObject* ASender, const int ACol1, const int ACol2);
	void __fastcall RowHeightChanged(System::TObject* ASender, const int ARow);
	int __fastcall CompareCells(const Xlscellmmu5::PXLSCellItem ACell1, const Xlscellmmu5::PXLSCellItem ACell2, const bool ACaseSencitive);
	int __fastcall CompareRowCells(const Xlscellmmu5::PXLSCellItem ACell1, const Xlscellmmu5::PXLSCellItem ACell2, const int ARow1, const int ARow2, const int ACol1, const int ACol2, const bool AAscending, const bool ACaseSencitive);
	void __fastcall AdjustCell(int ACol, int ARow, int ADestCol, int ADestRow, bool ALockStartRow);
	void __fastcall AdjustColumnsFormulas(const int ACol, const int ADeltaCols);
	void __fastcall AdjustRowsFormulas(const int ARow, const int ADeltaRows);
	void __fastcall AfterRead();
	bool __fastcall DrawingAddImage97(Xpgparsedrawing::TCT_TwoCellAnchor* AAnchor);
	
public:
	__fastcall TXLSWorksheet(Xlsclassfactory5::TXLSClassFactory* AClassFactory, TXLSWorkbook* AOwner, Xc12manager5::TXc12Manager* AManager, Xc12dataworksheet5::TXc12DataWorksheet* AXc12Sheet);
	__fastcall virtual ~TXLSWorksheet();
	virtual System::TObject* __fastcall RequestObject(System::UnicodeString AClass);
	Xlstools5::TXLSFormattedText* __fastcall MakeFormattedText(const Xlscellmmu5::TXLSCellItem &ACell)/* overload */;
	bool __fastcall MakeFormattedText(const int ACol, const int ARow, Xlstools5::TXLSFormattedText* &AFormattedText)/* overload */;
	void __fastcall Assign(TXLSWorksheet* ASource);
	Xlscellmmu5::TXLSCellMMU* __fastcall MMUCells();
	void __fastcall Clear();
	void __fastcall ClearData _DEPRECATED_ATTRIBUTE1("Use Clear") ();
	void __fastcall ClearWorksheet();
	void __fastcall MakePivotTable(int ACol1, int ARow1, int ACol2, int ARow2);
	void __fastcall FillRandom(const System::UnicodeString AArea, const int AValue);
	int __fastcall AutoWidthCol(const int ACol, int AMinWidth = 0x0, int AMaxWidth = 0x7fffffff);
	void __fastcall AutoWidthCols(const int Col1, const int Col2, int AMinWidth = 0x0, int AMaxWidth = 0x7fffffff);
	bool __fastcall AutoHeightRow(const int ARow, int AMinHeight = 0x0, int AMaxHeight = 0x7fffffff);
	bool __fastcall AutoHeightRows(const int Row1, const int Row2, int AMinHeight = 0x0, int AMaxHeight = 0x7fffffff);
	void __fastcall AutoSizeCell(const int ACol, const int ARow, const bool ASizeCol, const bool ASizeRow);
	void __fastcall UnfreezePanes();
	void __fastcall FreezePanes(const int AColumns, const int ARows);
	void __fastcall UnsplitPanes();
	void __fastcall SplitPanes(const int APointsWidth, const int APointsHeight);
	void __fastcall CalcDimensions();
	void __fastcall CalcDimensionsEx();
	System::Variant __fastcall Calculate(const int ACol, const int ARow);
	System::Variant __fastcall CalculateEx _DEPRECATED_ATTRIBUTE1("Use Calculate") (int Col, int Row, bool CalculateOptions);
	System::UnicodeString __fastcall CalculateAsString(const int ACol, const int ARow);
	void __fastcall CalculateSheet _DEPRECATED_ATTRIBUTE1("Use Workbook.Calculate") ();
	void __fastcall Calculated _DEPRECATED_ATTRIBUTE1("Not used anymore") (const bool IsCalculated);
	void __fastcall CopyCell(const int ACol, const int ARow, const int ADestCol, const int ADestRow, bool ALockStartRow, bool AClearFmla = false);
	void __fastcall CopyCells(const int ACol1, const int ARow1, const int ACol2, const int ARow2, const int ADestCol, const int ADestRow, const TCopyCellsOptions ACopyOptions = (TCopyCellsOptions() << TCopyCellsOption::ccoCopyValues << TCopyCellsOption::ccoCopyShapes << TCopyCellsOption::ccoCopyNotes << TCopyCellsOption::ccoCopyCondFmt << TCopyCellsOption::ccoCopyValidations << TCopyCellsOption::ccoCopyMerged ));
	void __fastcall DeleteCell(const int ACol, const int ARow, const TXLSDeleteOptions AOptions = (TXLSDeleteOptions() << TXLSDeleteOption::xdoCellValues << TXLSDeleteOption::xdoFormats << TXLSDeleteOption::xdoComments << TXLSDeleteOption::xdoDataValidations << TXLSDeleteOption::xdoConditionalFormats << TXLSDeleteOption::xdoAutofilters << TXLSDeleteOption::xdoDrawing ));
	void __fastcall DeleteCells(const int ACol1, const int ARow1, const int ACol2, const int ARow2, const TXLSDeleteOptions AOptions = (TXLSDeleteOptions() << TXLSDeleteOption::xdoCellValues << TXLSDeleteOption::xdoFormats << TXLSDeleteOption::xdoComments << TXLSDeleteOption::xdoDataValidations << TXLSDeleteOption::xdoConditionalFormats << TXLSDeleteOption::xdoAutofilters << TXLSDeleteOption::xdoDrawing ));
	void __fastcall ClearCell(const int ACol, const int ARow);
	void __fastcall ClearCells(const int ACol1, const int ARow1, const int ACol2, const int ARow2);
	void __fastcall MoveCell(const int ACol, const int ARow, const int ADestCol, const int ADestRow, bool AAdjustCell = false, bool ALockStartRow = false);
	void __fastcall MoveCells(const int ACol1, const int ARow1, const int ACol2, const int ARow2, const int ADestCol, const int ADestRow, const TCopyCellsOptions ACopyOptions = (TCopyCellsOptions() << TCopyCellsOption::ccoCopyValues << TCopyCellsOption::ccoCopyShapes << TCopyCellsOption::ccoCopyNotes << TCopyCellsOption::ccoCopyCondFmt << TCopyCellsOption::ccoCopyValidations << TCopyCellsOption::ccoCopyMerged ));
	void __fastcall MergeCells()/* overload */;
	bool __fastcall MergeCells(int Col1, int Row1, int Col2, int Row2)/* overload */;
	void __fastcall UnMergeCells()/* overload */;
	void __fastcall UnMergeCells(int Col1, int Row1, int Col2, int Row2)/* overload */;
	void __fastcall DeleteRows(const int ARow1, const int ARow2);
	void __fastcall ClearRows(const int ARow1, const int ARow2);
	void __fastcall InsertRows(const int ARow, const int ARowCount);
	void __fastcall CopyRows(const int ARow1, const int ARow2, const int ADestRow);
	void __fastcall MoveRows(const int ARow1, const int ARow2, const int ADestRow);
	void __fastcall DeleteColumns(const int ACol1, const int ACol2);
	void __fastcall ClearColumns(const int ACol1, const int ACol2);
	void __fastcall InsertColumns(const int ACol, const int AColCount);
	void __fastcall CopyColumns(const int ACol1, const int ACol2, const int ADestCol);
	void __fastcall MoveColumns(const int ACol1, const int ACol2, const int ADestCol);
	bool __fastcall IsEmpty();
	bool __fastcall IsCellLocked(const int ACol, const int ARow);
	void __fastcall Sort(const bool AAscending, const bool ACaseSencitive)/* overload */;
	void __fastcall Sort(int ACol1, int ARow1, int ACol2, int ARow2, const bool AAscending, const bool ACaseSencitive)/* overload */;
	void __fastcall GroupRows(const int ARow1, const int ARow2, bool ACollapsed = false);
	void __fastcall GroupColumns(const int ACol1, const int ACol2, bool ACollapsed = false);
	bool __fastcall UngroupRows(const int ARow1, const int ARow2);
	bool __fastcall UngroupColumns(const int ACol1, const int ACol2);
	void __fastcall RichTextCell(const int ACol, const int ARow, const System::UnicodeString AText, Xc12datastylesheet5::TXc12DynFontRunArray AFontRuns);
	void __fastcall RichTextLoadFromFile(const int ACol, const int ARow, const System::UnicodeString Filename, const bool AllText = true);
	void __fastcall RichTextLoadFromStream(const int ACol, const int ARow, System::Classes::TStream* Stream, const bool AllText = true);
	void __fastcall RichTextSaveToFile(const int ACol, const int ARow, const System::UnicodeString Filename);
	void __fastcall RichTextSaveToStream(const int ACol, const int ARow, System::Classes::TStream* Stream);
	void __fastcall CopyToRichEdit(const int ACol, const int ARow, Vcl::Comctrls::TRichEdit* &ARichEdit);
	void __fastcall ImportRichText(int ACol, int ARow, System::Classes::TStream* AStream)/* overload */;
	void __fastcall ImportRichText(int ACol, int ARow, System::UnicodeString AFilename)/* overload */;
	bool __fastcall FindCell(const int ACol, const int ARow);
	void __fastcall BeginFindText();
	bool __fastcall FindText(const System::UnicodeString AText, bool CaseInsensitive = true);
	void __fastcall GetFindData(int &ACol, int &ARow, int &ATextPos, System::UnicodeString &AText);
	System::UnicodeString __fastcall GetFormatString(const Xlscellmmu5::TXLSCellItem &ACell, System::PLongWord AColor);
	void __fastcall InsertFloatRowValues(const int ACol, const int ARow, const double *AValues, const int AValues_High)/* overload */;
	void __fastcall InsertStringRowValues(const int ACol, const int ARow, const System::UnicodeString *AValues, const int AValues_High)/* overload */;
	void __fastcall InsertRowValues(const int ACol, const int ARow, const System::Variant *AValues, const int AValues_High)/* overload */;
	void __fastcall InsertFloatColValues(const int ACol, const int ARow, const double *AValues, const int AValues_High)/* overload */;
	void __fastcall InsertStringColValues(const int ACol, const int ARow, const System::UnicodeString *AValues, const int AValues_High)/* overload */;
	void __fastcall InsertColValues(const int ACol, const int ARow, const System::Variant *AValues, const int AValues_High)/* overload */;
	void __fastcall MakeHyperlink(const int ACol, const int ARow, const System::UnicodeString AAddress, const System::UnicodeString AText)/* overload */;
	void __fastcall MakeHyperlink(const int ACol, const int ARow, const System::UnicodeString AAddress, const System::UnicodeString AText, const System::UnicodeString ATooltip)/* overload */;
	void __fastcall GetShapePixelSize(Xlsdrawing5::TXLSDrwTwoPosShape* AShape, /* out */ int &AWidth, /* out */ int &AHeight);
	void __fastcall BeginIterate();
	bool __fastcall IterateNext();
	void __fastcall IteratePos(/* out */ int &ACol, /* out */ int &ARow);
	int __fastcall FirstCol();
	int __fastcall LastCol();
	int __fastcall FirstRow();
	int __fastcall LastRow();
	void __fastcall ApplyAutofilter();
	void __fastcall EditPivotTables();
	Xlsrelcells5::TXLSRelCells* __fastcall CreateRelativeCells()/* overload */;
	Xlsrelcells5::TXLSRelCells* __fastcall CreateRelativeCells(System::UnicodeString ARefStr)/* overload */;
	Xlsrelcells5::TXLSRelCells* __fastcall CreateRelativeCells(int ACol, int ARow)/* overload */;
	Xlsrelcells5::TXLSRelCells* __fastcall CreateRelativeCells(int ACol1, int ARow1, int ACol2, int ARow2)/* overload */;
	Xlsrelcells5::TXLSRelCells* __fastcall CreateRelativeCells(const Xc12utils5::TXLSCellArea &AArea)/* overload */;
	__property int LeftCol = {read=GetLeftCol, write=SetLeftCol, nodefault};
	__property int TopRow = {read=GetTopRow, write=SetTopRow, nodefault};
	__property int DefaultColWidth = {read=GetDefaultColWidth, write=SetDefaultColWidth, nodefault};
	__property int DefaultRowHeight = {read=GetDefaultRowHeight, write=SetDefaultRowHeight, nodefault};
	__property bool AsBlank[int Col][int Row] = {read=GetAsBlank, write=SetAsBlank};
	__property int AsInteger[int Col][int Row] = {read=GetAsInteger, write=SetAsInteger};
	__property double AsFloat[int Col][int Row] = {read=GetAsFloat, write=SetAsFloat};
	__property System::TDateTime AsDateTime[int Col][int Row] = {read=GetAsDateTime, write=SetAsDateTime};
	__property System::UnicodeString AsString[int Col][int Row] = {read=GetAsString, write=SetAsString};
	__property System::AnsiString AsRichText[int Col][int Row] = {read=GetAsRichText, write=SetAsRichText};
	__property System::UnicodeString AsSimpleTags[int ACol][int ARow] = {read=GetAsSimpleTags, write=SetAsSimpleTags};
	__property System::UnicodeString AsFmtString[int Col][int Row] = {read=GetAsFmtString};
	__property System::UnicodeString AsHyperlink[int Col][int Row] = {read=GetAsHyperlink, write=SetAsHyperlink};
	__property System::UnicodeString AsHTML[int Col][int Row] = {read=GetAsHTML};
	__property bool AsBoolean[int Col][int Row] = {read=GetAsBoolean, write=SetAsBoolean};
	__property Xc12utils5::TXc12CellError AsError[int Col][int Row] = {read=GetAsError, write=SetAsError};
	__property System::Variant AsVariant[int Col][int Row] = {read=GetAsVariant, write=SetAsVariant};
	__property bool AsEmpty[int Col][int Row] = {read=GetAsEmpty};
	__property System::UnicodeString AsFormula[int Col][int Row] = {read=GetAsFormula, write=SetAsFormula};
	__property double AsNumFormulaValue[int Col][int Row] = {read=GetAsNumFormulaValue, write=SetAsNumFormulaValue};
	__property System::UnicodeString AsStrFormulaValue[int Col][int Row] = {read=GetAsStrFormulaValue, write=SetAsStrFormulaValue};
	__property bool AsBoolFormulaValue[int Col][int Row] = {read=GetAsBoolFormulaValue, write=SetAsBoolFormulaValue};
	__property bool IsDateTime[int Col][int Row] = {read=GetIsDateTime};
	__property System::UnicodeString AsArray[int Col1][int Row1][int Col2][int Row2][int MaxLength] = {read=GetAsArray};
	__property bool AsBlankRef[const System::UnicodeString ARef] = {read=GetAsBlankRef, write=SetAsBlankRef};
	__property int AsIntegerRef[const System::UnicodeString ARef] = {read=GetAsIntegerRef, write=SetAsIntegerRef};
	__property double AsFloatRef[const System::UnicodeString ARef] = {read=GetAsFloatRef, write=SetAsFloatRef};
	__property System::TDateTime AsDateTimeRef[const System::UnicodeString ARef] = {read=GetAsDateTimeRef, write=SetAsDateTimeRef};
	__property System::UnicodeString AsStringRef[const System::UnicodeString ARef] = {read=GetAsStringRef, write=SetAsStringRef};
	__property System::UnicodeString AsRichTextRef[const System::UnicodeString ARef] = {read=GetAsRichTextRef, write=SetAsRichTextRef};
	__property System::UnicodeString AsSimpleTagsRef[const System::UnicodeString ARef] = {read=GetAsSimpleTagsRef, write=SetAsSimpleTagsRef};
	__property System::UnicodeString AsFmtStringRef[const System::UnicodeString ARef] = {read=GetAsFmtStringRef};
	__property System::UnicodeString AsHTMLRef[const System::UnicodeString ARef] = {read=GetAsHTMLRef};
	__property bool AsBooleanRef[const System::UnicodeString ARef] = {read=GetAsBooleanRef, write=SetAsBooleanRef};
	__property Xc12utils5::TXc12CellError AsErrorRef[const System::UnicodeString ARef] = {read=GetAsErrorRef, write=SetAsErrorRef};
	__property System::UnicodeString AsFormulaRef[const System::UnicodeString ARef] = {read=GetAsFormulaRef, write=SetAsFormulaRef};
	__property double AsNumFormulaValueRef[const System::UnicodeString ARef] = {read=GetAsNumFormulaValueRef, write=SetAsNumFormulaValueRef};
	__property System::UnicodeString AsStrFormulaValueRef[const System::UnicodeString ARef] = {read=GetAsStrFormulaValueRef, write=SetAsStrFormulaValueRef};
	__property bool AsBoolFormulaValueRef[const System::UnicodeString ARef] = {read=GetAsBoolFormulaValueRef, write=SetAsBoolFormulaValueRef};
	__property System::Variant AsVariantRef[const System::UnicodeString ARef] = {read=GetAsVariantRef, write=SetAsVariantRef};
	__property int DefDecimals = {read=FDefDecimals, write=FDefDecimals, nodefault};
	__property Xlsformattedobj5::TXLSCell* Cell[int Col][int Row] = {read=GetCell};
	__property Xlsformattedobj5::TXLSFormattedCell* CellFormat[const int ACol][const int ARow] = {read=GetCellFormat};
	__property Xc12utils5::TXLSCellType CellType[int Col][int Row] = {read=GetCellType};
	__property Xlscellmmu5::TXLSCellFormulaType FormulaType[int Col][int Row] = {read=GetFormulaType};
	__property Xlsrow5::TXLSRows* Rows = {read=GetRows};
	__property Xlscolumn5::TXLSColumns* Columns = {read=GetColumns};
	__property Xlsautofilter5::TXLSAutofilter* Autofilter = {read=GetAutofilter};
	__property Xlshyperlinks5::TXLSHyperlinks* Hyperlinks = {read=GetHyperlinks};
	__property Xlsmergedcells5::TXLSMergedCells* MergedCells = {read=GetMergedCells};
	__property Xlscondformat5::TXLSConditionalFormats* ConditionalFormats = {read=GetConditionalFormats};
	__property Xlsvalidate5::TXLSDataValidations* Validations = {read=GetValidations};
	__property Xlscomment5::TXLSComments* Comments = {read=FComments};
	__property TXLSPrintSettings* PrintSettings = {read=GetPrintSettings};
	__property TXLSSelectedAreas* SelectedAreas = {read=GetSelectedAreas};
	__property Xlscellareas5::TCellAreas* VisibleAreas = {read=GetVisibleAreas};
	__property Xlsdrawing5::TXLSDrawing* Drawing = {read=GetDrawing};
	__property Xlspivottables5::TXLSPivotTables* PivotTables = {read=FPivotTables};
	__property Xlsrange5::TXLSRange* Range = {read=FRange};
	__property TXLSPane* Pane = {read=GetPane};
	__property TXLSSheetProtection* Protection = {read=FProtection};
	__property bool IgnoreErrorNumbersAsText = {write=SetIgnoreErrorNumbersAsText, nodefault};
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property unsigned TabColor = {read=GetTabColor, write=SetTabColor, nodefault};
	__property bool TabSelected = {read=GetTabSelected, write=SetTabSelected, nodefault};
	__property TXLSSheetOptions Options = {read=GetOptions, write=SetOptions, nodefault};
	__property TWorkspaceOptions WorkspaceOptions = {read=GetWorkspaceOptions, write=SetWorkspaceOptions, nodefault};
	__property int Zoom = {read=GetZoom, write=SetZoom, nodefault};
	__property int ZoomPreview = {read=GetZoomPreview, write=SetZoomPreview, nodefault};
	__property bool RecalcFormulas = {read=GetRecalcFormulas, write=SetRecalcFormulas, nodefault};
	__property Xc12utils5::TXc12Visibility Visibility = {read=GetVisibility, write=SetVisibility, nodefault};
	__property Xc12dataworksheet5::TXc12DataWorksheet* Xc12Sheet = {read=FXc12Sheet};
	__property Xc12utils5::TXc12RefEvent XSSCellInvalidateEvent = {read=FXSSCellInvalidateEvent, write=FXSSCellInvalidateEvent};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSWorkbookData : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int __fastcall ReadHeight();
	int __fastcall ReadLeft();
	TWorkbookOptions __fastcall ReadOptions();
	int __fastcall ReadSelectedTab();
	int __fastcall ReadTop();
	int __fastcall ReadWidth();
	void __fastcall WriteHeight(const int Value);
	void __fastcall WriteLeft(const int Value);
	void __fastcall WriteOptions(const TWorkbookOptions Value);
	void __fastcall WriteSelectedTab(const int Value);
	void __fastcall WriteTop(const int Value);
	void __fastcall WriteWidth(const int Value);
	
protected:
	Xc12dataworkbook5::TXc12BookViews* FBookViews;
	
public:
	__fastcall TXLSWorkbookData(Xc12dataworkbook5::TXc12BookViews* ABookViews);
	__property int Left = {read=ReadLeft, write=WriteLeft, nodefault};
	__property int Top = {read=ReadTop, write=WriteTop, nodefault};
	__property int Width = {read=ReadWidth, write=WriteWidth, nodefault};
	__property int Height = {read=ReadHeight, write=WriteHeight, nodefault};
	__property int SelectedTab = {read=ReadSelectedTab, write=WriteSelectedTab, nodefault};
	__property TWorkbookOptions Options = {read=ReadOptions, write=WriteOptions, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TXLSWorkbookData() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSOptionsDialog : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Xc12dataworkbook5::TXc12CalcPr* FCalcPr;
	Xc12dataworkbook5::TXc12WorkbookPr* FWorkbookPr;
	bool FRightToLeftAssigned;
	bool FRightToLeft;
	bool FSaveRecalc;
	Xc12dataworkbook5::TXc12Objects __fastcall GetShowObjects();
	void __fastcall SetShowObjects(const Xc12dataworkbook5::TXc12Objects Value);
	bool __fastcall GetPrecisionAsDisplayed();
	void __fastcall SetPrecisionAsDisplayed(const bool Value);
	bool __fastcall GetSaveExtLinkVal();
	void __fastcall SetSaveExtLinkVal(const bool Value);
	void __fastcall SetMaxIterations(const int Value);
	int __fastcall GetMaxIterations();
	Xc12dataworkbook5::TXc12CalcMode __fastcall GetCalcMode();
	double __fastcall GetDelta();
	bool __fastcall GetIteration();
	bool __fastcall GetR1C1Mode();
	bool __fastcall GetRecalcBeforeSave();
	bool __fastcall GetRightToLeft();
	bool __fastcall GetSaveRecalc();
	bool __fastcall GetUncalced();
	void __fastcall SetCalcMode(const Xc12dataworkbook5::TXc12CalcMode Value);
	void __fastcall SetDelta(const double Value);
	void __fastcall SetIteration(const bool Value);
	void __fastcall SetR1C1Mode(const bool Value);
	void __fastcall SetRecalcBeforeSave(const bool Value);
	void __fastcall SetRightToLeft(const bool Value);
	void __fastcall SetSaveRecalc(const bool Value);
	void __fastcall SetUncalced(const bool Value);
	bool __fastcall GetDate1904();
	void __fastcall SetDate1904(const bool Value);
	
public:
	__fastcall TXLSOptionsDialog(Xc12dataworkbook5::TXc12CalcPr* ACalcPr, Xc12dataworkbook5::TXc12WorkbookPr* AWorkbookPr);
	void __fastcall Clear();
	__property bool SaveExtLinkVal = {read=GetSaveExtLinkVal, write=SetSaveExtLinkVal, nodefault};
	__property int CalcCount = {read=GetMaxIterations, write=SetMaxIterations, nodefault};
	__property int MaxIterations = {read=GetMaxIterations, write=SetMaxIterations, nodefault};
	__property Xc12dataworkbook5::TXc12CalcMode CalcMode = {read=GetCalcMode, write=SetCalcMode, nodefault};
	__property double Delta = {read=GetDelta, write=SetDelta};
	__property Xc12dataworkbook5::TXc12Objects ShowObjects = {read=GetShowObjects, write=SetShowObjects, nodefault};
	__property bool Iteration = {read=GetIteration, write=SetIteration, nodefault};
	__property bool PrecisionAsDisplayed = {read=GetPrecisionAsDisplayed, write=SetPrecisionAsDisplayed, nodefault};
	__property bool R1C1Mode = {read=GetR1C1Mode, write=SetR1C1Mode, nodefault};
	__property bool RecalcBeforeSave = {read=GetRecalcBeforeSave, write=SetRecalcBeforeSave, nodefault};
	__property bool Uncalced = {read=GetUncalced, write=SetUncalced, nodefault};
	__property bool SaveRecalc = {read=GetSaveRecalc, write=SetSaveRecalc, nodefault};
	__property bool Date1904 = {read=GetDate1904, write=SetDate1904, nodefault};
	__property bool RightToLeft = {read=GetRightToLeft, write=SetRightToLeft, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TXLSOptionsDialog() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSWorkbook : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
public:
	TXLSWorksheet* operator[](int Index) { return this->Items[Index]; }
	
private:
	void __fastcall SetDefaultName(const System::UnicodeString Value);
	Xc12datastylesheet5::TXc12Font* __fastcall GetFont();
	bool __fastcall GetNameIsSimpeName(const System::UnicodeString AName);
	bool __fastcall GetNameAsBoolean(const System::UnicodeString AName);
	bool __fastcall GetNameAsBoolFormulaValue(const System::UnicodeString AName);
	Xc12utils5::TXc12CellError __fastcall GetNameAsError(const System::UnicodeString AName);
	double __fastcall GetNameAsFloat(const System::UnicodeString AName);
	System::UnicodeString __fastcall GetNameAsFmtString(const System::UnicodeString AName);
	System::UnicodeString __fastcall GetNameAsFormula(const System::UnicodeString AName);
	double __fastcall GetNameAsNumFormulaValue(const System::UnicodeString AName);
	System::UnicodeString __fastcall GetNameAsStrFormulaValue(const System::UnicodeString AName);
	System::UnicodeString __fastcall GetNameAsString(const System::UnicodeString AName);
	void __fastcall SetNameAsBoolean(const System::UnicodeString AName, const bool Value);
	void __fastcall SetNameAsBoolFormulaValue(const System::UnicodeString AName, const bool Value);
	void __fastcall SetNameAsError(const System::UnicodeString AName, const Xc12utils5::TXc12CellError Value);
	void __fastcall SetNameAsFloat(const System::UnicodeString AName, const double Value);
	void __fastcall SetNameAsFormula(const System::UnicodeString AName, const System::UnicodeString Value);
	void __fastcall SetNameAsNumFormulaValue(const System::UnicodeString AName, const double Value);
	void __fastcall SetNameAsStrFormulaValue(const System::UnicodeString AName, const System::UnicodeString Value);
	void __fastcall SetNameAsString(const System::UnicodeString AName, const System::UnicodeString Value);
	bool __fastcall GetBackup();
	void __fastcall SetBackup(const bool Value);
	bool __fastcall GetRefreshAll();
	void __fastcall SetRefreshAll(const bool Value);
	System::UnicodeString __fastcall GetUserName();
	void __fastcall SetUserName(const System::UnicodeString Value);
	System::Uitypes::TColor __fastcall GetPalette(int Index);
	void __fastcall SetPalette(int Index, const System::Uitypes::TColor Value);
	Biff_vba5::TXLSVBA* __fastcall GetVBA();
	Xlsnames5::TXLSNames* __fastcall GetNames();
	Xlsnames5::TXLSNames* __fastcall GetInternalNames();
	int __fastcall GetSelectedTab();
	void __fastcall SetSelectedTab(const int Value);
	Xc12manager5::TXc12DocProps* __fastcall GetDocProps();
	bool __fastcall GetFormulasUncalced();
	void __fastcall SetFormulasUncalced(const bool Value);
	
protected:
	Xlsutils5::TIndexObjectList* FItems;
	Xlsclassfactory5::TXLSClassFactory* FClassFactory;
	Xc12manager5::TXc12Manager* FManager;
	System::UnicodeString FDefaultName;
	Xlsformula5::TXLSFormulaHandler* FFormulas;
	Xlscmdformat5::TXLSCmdFormat* FCmdFormat;
	Xlscmdformat5::TXLSDefaultFormat* FDefaultFormat;
	Xlsnames5::TXLSNames_Int* FNames;
	TXLSOptionsDialog* FOptionsDialog;
	TXLSWorkbookData* FWorkbookData;
	Biff5::TBIFF5* FBIFF;
	Xlsclipboard5::TXLSClipboard* FXLSClipboard;
	Xc12utils5::TXc12PaperSize FDefaultPaperSize;
	bool FShowFormulas;
	int FSelectedTab;
	int FCurrFindSheet;
	bool FCompiled;
	bool FLocalizedFormulas;
	TXLSWorksheet* __fastcall GetItems(int Index);
	void __fastcall AfterReadAdd(int AIndex);
	void __fastcall AdjustSheetIndex(const int ASheetIndex, const int ACount);
	System::UnicodeString __fastcall GetUniqueSheetname();
	virtual bool __fastcall AddImage97(Xpgparsedrawing::TCT_TwoCellAnchor* AAnchor, const int ASheetIndex);
	void __fastcall CopyColumnHeaders(const int ASrcSheet, const int ACol1, const int ACol2, const int ADestSheet, const int ADestCol);
	void __fastcall GetSheetExtent(const int ASheet, /* out */ int &ACol1, /* out */ int &Arow1, /* out */ int &ACol2, /* out */ int &ARow2);
	void __fastcall CreateMembers();
	void __fastcall AdjustColumnsFormulas1d(const int AActiveSheet, const int ACol, const int ADeltaCols);
	void __fastcall AdjustRowsFormulas1d(const int AActiveSheet, const int ARow, const int ADeltaRows);
	
public:
	__fastcall virtual ~TXLSWorkbook();
	int __fastcall Count();
	void __fastcall Delete(const int AIndex, int ACount = 0x1);
	HIDESBASE void __fastcall Insert(const int AIndex, int ACount = 0x1);
	void __fastcall Clear();
	void __fastcall ClearCells _DEPRECATED_ATTRIBUTE1("Use Clear") ();
	TXLSWorksheet* __fastcall Add();
	TXLSWorksheet* __fastcall SheetByName(const System::UnicodeString Name);
	void __fastcall AfterRead();
	void __fastcall BeforeWrite();
	void __fastcall CalcDimensions();
	void __fastcall CompileFormulas();
	void __fastcall Calculate();
	System::UnicodeString __fastcall GetWeakPassword();
	int __fastcall MaxRowCount();
	int __fastcall MaxColCount();
	bool __fastcall CopyCells(const int ASrcSheet, Xlscellareas5::TBaseCellAreas* ASrcAreas, const int ADestSheet, const int ADestCol, const int ADestRow, const bool ANoFormat = false)/* overload */;
	void __fastcall CopyCells(int SrcSheet, int Col1, int Row1, int Col2, int Row2, int DestSheet, int DestCol, int DestRow, const TCopyCellsOptions CopyOptions = (TCopyCellsOptions() << TCopyCellsOption::ccoAdjustCells << TCopyCellsOption::ccoCopyValues << TCopyCellsOption::ccoCopyShapes << TCopyCellsOption::ccoCopyNotes << TCopyCellsOption::ccoCopyCondFmt << TCopyCellsOption::ccoCopyValidations << TCopyCellsOption::ccoCopyMerged ), const bool ANoFormat = false)/* overload */;
	void __fastcall CopyCells(TXLSWorkbook* ASrcXLS, const int ASrcSheet, const int ACol1, const int ARow1, const int ACol2, const int ARow2, const int ADestSheet, const int ADestCol, const int ADestRow, const bool ANoFormat = false)/* overload */;
	void __fastcall MoveCells(const int SrcSheet, const int Col1, const int Row1, const int Col2, const int Row2, const int DestSheet, const int DestCol, const int DestRow, const TCopyCellsOptions CopyOptions = (TCopyCellsOptions() << TCopyCellsOption::ccoAdjustCells << TCopyCellsOption::ccoCopyValues << TCopyCellsOption::ccoCopyShapes << TCopyCellsOption::ccoCopyNotes << TCopyCellsOption::ccoCopyCondFmt << TCopyCellsOption::ccoCopyValidations << TCopyCellsOption::ccoCopyMerged ));
	void __fastcall DeleteCells(const int ASheet, Xlscellareas5::TBaseCellAreas* AAreas, TXLSDeleteOptions AOptions = (TXLSDeleteOptions() << TXLSDeleteOption::xdoCellValues << TXLSDeleteOption::xdoFormats << TXLSDeleteOption::xdoComments << TXLSDeleteOption::xdoDataValidations << TXLSDeleteOption::xdoConditionalFormats << TXLSDeleteOption::xdoAutofilters << TXLSDeleteOption::xdoDrawing ))/* overload */;
	void __fastcall DeleteCells(const int ASheet, Xlscellareas5::TCellArea* AArea, TXLSDeleteOptions AOptions = (TXLSDeleteOptions() << TXLSDeleteOption::xdoCellValues << TXLSDeleteOption::xdoFormats << TXLSDeleteOption::xdoComments << TXLSDeleteOption::xdoDataValidations << TXLSDeleteOption::xdoConditionalFormats << TXLSDeleteOption::xdoAutofilters << TXLSDeleteOption::xdoDrawing ))/* overload */;
	void __fastcall DeleteCells(const int ASheet, const int ACol1, const int ARow1, const int ACol2, const int ARow2, TXLSDeleteOptions AOptions = (TXLSDeleteOptions() << TXLSDeleteOption::xdoCellValues << TXLSDeleteOption::xdoFormats << TXLSDeleteOption::xdoComments << TXLSDeleteOption::xdoDataValidations << TXLSDeleteOption::xdoConditionalFormats << TXLSDeleteOption::xdoAutofilters << TXLSDeleteOption::xdoDrawing ))/* overload */;
	void __fastcall CopyColumns(const int ASrcSheet, const int ACol1, const int ACol2, const int ADestSheet, const int ADestCol);
	void __fastcall MoveColumns(const int ASrcSheet, const int ACol1, const int ACol2, const int ADestSheet, const int ADestCol);
	void __fastcall DeleteColumns(const int ASheet, const int ACol1, const int ACol2);
	void __fastcall ClearColumns(const int ASheet, const int ACol1, const int ACol2);
	void __fastcall InsertColumns(const int ASheet, const int ACol, const int AColCount);
	void __fastcall CopyRows(const int ASrcSheet, const int ARow1, const int ARow2, const int ADestSheet, const int ADestRow);
	void __fastcall MoveRows(const int ASrcSheet, const int ARow1, const int ARow2, const int ADestSheet, const int ADestRow);
	void __fastcall DeleteRows(const int ASheet, const int ARow1, const int ARow2);
	void __fastcall ClearRows(const int ASheet, const int ARow1, const int ARow2);
	void __fastcall InsertRows(const int ASheet, const int ARow, const int ARowCount);
	void __fastcall CopySheet(const int ASrcSheet, const int ADestSheet)/* overload */;
	void __fastcall CopySheet(TXLSWorkbook* ASrcXLS, const int ASrcSheet, const int ADestSheet)/* overload */;
	void __fastcall BeginFindText();
	bool __fastcall FindText(const System::UnicodeString Text, const bool CaseInsensitive = true);
	void __fastcall GetFindData(int &Sheet, int &Col, int &Row, int &TextPos, System::UnicodeString &Text);
	__property bool Backup = {read=GetBackup, write=SetBackup, nodefault};
	__property bool RefreshAll = {read=GetRefreshAll, write=SetRefreshAll, nodefault};
	__property System::UnicodeString UserName = {read=GetUserName, write=SetUserName};
	__property bool NameIsSimpeName[const System::UnicodeString AName] = {read=GetNameIsSimpeName};
	__property double NameAsFloat[const System::UnicodeString AName] = {read=GetNameAsFloat, write=SetNameAsFloat};
	__property System::UnicodeString NameAsString[const System::UnicodeString AName] = {read=GetNameAsString, write=SetNameAsString};
	__property System::UnicodeString NameAsFmtString[const System::UnicodeString AName] = {read=GetNameAsFmtString};
	__property bool NameAsBoolean[const System::UnicodeString AName] = {read=GetNameAsBoolean, write=SetNameAsBoolean};
	__property Xc12utils5::TXc12CellError NameAsError[const System::UnicodeString AName] = {read=GetNameAsError, write=SetNameAsError};
	__property System::UnicodeString NameAsFormula[const System::UnicodeString AName] = {read=GetNameAsFormula, write=SetNameAsFormula};
	__property double NameAsNumFormulaValue[const System::UnicodeString AName] = {read=GetNameAsNumFormulaValue, write=SetNameAsNumFormulaValue};
	__property System::UnicodeString NameAsStrFormulaValue[const System::UnicodeString AName] = {read=GetNameAsStrFormulaValue, write=SetNameAsStrFormulaValue};
	__property bool NameAsBoolFormulaValue[const System::UnicodeString AName] = {read=GetNameAsBoolFormulaValue, write=SetNameAsBoolFormulaValue};
	__property System::UnicodeString DefaultName = {read=FDefaultName, write=SetDefaultName};
	__property bool ShowFormulas = {read=FShowFormulas, write=FShowFormulas, nodefault};
	__property TXLSOptionsDialog* OptionsDialog = {read=FOptionsDialog};
	__property TXLSWorkbookData* WorkbookData = {read=FWorkbookData};
	__property Xlsformula5::TXLSFormulaHandler* Formulas = {read=FFormulas};
	__property Xlsnames5::TXLSNames* Names = {read=GetNames};
	__property Xlsnames5::TXLSNames* InternalNames = {read=GetInternalNames};
	__property System::Uitypes::TColor Palette[int Index] = {read=GetPalette, write=SetPalette};
	__property Biff5::TBIFF5* BIFF = {read=FBIFF};
	__property Biff_vba5::TXLSVBA* VBA = {read=GetVBA};
	__property Xlsclipboard5::TXLSClipboard* Clipboard = {read=FXLSClipboard};
	__property Xlscmdformat5::TXLSCmdFormat* CmdFormat = {read=FCmdFormat};
	__property Xlscmdformat5::TXLSDefaultFormat* DefaultFormat = {read=FDefaultFormat, write=FDefaultFormat};
	__property Xc12manager5::TXc12DocProps* DocProps = {read=GetDocProps};
	__property Xc12datastylesheet5::TXc12Font* Font = {read=GetFont};
	__property int SelectedTab = {read=GetSelectedTab, write=SetSelectedTab, nodefault};
	__property Xc12utils5::TXc12PaperSize DefaultPaperSize = {read=FDefaultPaperSize, write=FDefaultPaperSize, nodefault};
	__property bool FormulasUncalced = {read=GetFormulasUncalced, write=SetFormulasUncalced, nodefault};
	__property bool LocalizedFormulas = {read=FLocalizedFormulas, write=FLocalizedFormulas, nodefault};
	__property TXLSWorksheet* Items[int Index] = {read=GetItems/*, default*/};
	__property TXLSWorksheet* Sheets[int Index] = {read=GetItems};
public:
	/* TComponent.Create */ inline __fastcall virtual TXLSWorkbook(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define DefaultDeleteOptions (System::Set<TXLSDeleteOption, TXLSDeleteOption::xdoCellValues, TXLSDeleteOption::xdoDrawing>() << TXLSDeleteOption::xdoCellValues << TXLSDeleteOption::xdoFormats << TXLSDeleteOption::xdoComments << TXLSDeleteOption::xdoDataValidations << TXLSDeleteOption::xdoConditionalFormats << TXLSDeleteOption::xdoAutofilters << TXLSDeleteOption::xdoDrawing )
#define CopyAllCells (System::Set<TCopyCellsOption, TCopyCellsOption::ccoAdjustCells, TCopyCellsOption::ccoCopyMerged>() << TCopyCellsOption::ccoCopyValues << TCopyCellsOption::ccoCopyShapes << TCopyCellsOption::ccoCopyNotes << TCopyCellsOption::ccoCopyCondFmt << TCopyCellsOption::ccoCopyValidations << TCopyCellsOption::ccoCopyMerged )
}	/* namespace Xlssheetdata5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSSHEETDATA5)
using namespace Xlssheetdata5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlssheetdata5HPP
