// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Xc12Utils5.pas' rev: 35.00 (Windows)

#ifndef Xc12utils5HPP
#define Xc12utils5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Contnrs.hpp>
#include <System.Math.hpp>
#include <System.UITypes.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xc12utils5
{
//-- forward type declarations -----------------------------------------------
struct TXc12Color;
struct TRGBRec;
struct THLSRec;
struct TXLS3dCompactRef;
struct TXLS3dCellArea;
struct TXLSCellArea;
struct TXLSCellRef;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TExcelVersion : unsigned char { xvNone, xvExcelUnknown, xvExcel21, xvExcel30, xvExcel40, xvExcel50, xvExcel97, xvExcel2007, xvOffice2007Encrypted };

enum DECLSPEC_DENUM TXLSCellType : unsigned char { xctNone, xctBlank, xctBoolean, xctError, xctString, xctFloat, xctFloatFormula, xctStringFormula, xctBooleanFormula, xctErrorFormula };

typedef System::UnicodeString TXc12RId;

typedef void __fastcall (__closure *TXc12RefEvent)(int Col, int Row);

typedef void __fastcall (__closure *TXc12CreateObjectEvent)(System::TClass AClass, /* out */ System::TObject* &AObject);

enum DECLSPEC_DENUM TXLSHyperlinkType : unsigned char { xhltUnknown, xhltURL, xhltFile, xhltUNC, xhltWorkbook };

enum DECLSPEC_DENUM TXc12Visibility : unsigned char { x12vVisible, x12vHidden, x12vVeryHidden };

enum DECLSPEC_DENUM TXc12BuiltInName : unsigned char { bnConsolidateArea, bnExtract, bnDatabase, bnCriteria, bnPrintArea, bnPrintTitles, bnSheetTitle, bnFilterDatabase, bnNone };

enum DECLSPEC_DENUM TXc12SimpleNameType : unsigned char { xsntNone, xsntRef, xsntArea, xsntError };

enum DECLSPEC_DENUM TXc12CellError : unsigned char { errUnknown, errNull, errDiv0, errValue, errRef, errName, errNum, errNA, errGettingData };

typedef TXc12CellError *PXc12CellError;

typedef System::StaticArray<System::UnicodeString, 9> Xc12utils5__1;

enum DECLSPEC_DENUM TXc12PaperSize : unsigned char { psNone, psLetter, psLetterSmall, psTabloid, psLedger, psLegal, psStatement, psExecutive, psA3, psA4, psA4Small, psA5, psB4, psB5, psFolio, psQuarto, ps10X14, ps11X17, psNote, psEnv9, psEnv10, psEnv11, psEnv12, psEnv14, psCSheet, psDSheet, psESheet, psEnvDL, psEnvC5, psEnvC3, psEnvC4, psEnvC6, psEnvC65, psEnvB4, psEnvB5, psEnvB6, psEnvItaly, psEnvMonarch, psEnvPersonal, psFanfoldUS, psFanfoldStdGerman, psFanfoldLglGerman, psISO_B4, psJapanesePostcard, ps9X11, ps10X11, ps15X11, psEnvInvite, psReserved48, psReserved49, psLetterExtra, psLegalExtra, psTabloidExtra, psA4Extra, psLetterTransverse, psA4Transverse, psLetterExtraTransverse, psAPlus, psBPlus, psLetterPlus, psA4Plus, psA5Transverse, psB5transverse, 
	psA3Extra, psA5Extra, psB5Extra, psA2, psA3Transverse, psA3ExtraTransverse };

typedef System::StaticArray<System::UnicodeString, 69> Xc12utils5__2;

typedef unsigned TXc12RGBColor;

enum DECLSPEC_DENUM TXc12IndexColor : unsigned char { xc0, xc1, xc2, xc3, xc4, xc5, xc6, xc7, xcBlack, xcWhite, xcRed, xcBrightGreen, xcBlue, xcYellow, xcPink, xcTurquoise, xcDarkRed, xcGreen, xcDarkBlue, xcBrownGreen, xcViolet, xcBlueGreen, xcGray25, xcGray50, xc24, xc25, xc26, xc27, xc28, xc29, xc30, xc31, xc32, xc33, xc34, xc35, xc36, xc37, xc38, xc39, xcSky, xcPaleTurquois, xcPaleGreen, xcLightYellow, xcPaleSky, xcRose, xcLilac, xcLightBrown, xcDarkSky, xcDarkTurquois, xcGrass, xcGold, xcLightOrange, xcOrange, xcDarkBlueGray, xcGray40, xcDarkGreenGray, xcEmerald, xcDarkGreen, xcOlive, xcBrown, xcCherry, xcIndigo, xcGray80, xcAutomatic };

enum DECLSPEC_DENUM TXc12ClrSchemeColor : unsigned char { cscLt1, cscDk1, cscLt2, cscDk2, cscAccent1, cscAccent2, cscAccent3, cscAccent4, cscAccent5, cscAccent6, cscHLink, cscFolHLink, cscExtList };

typedef System::StaticArray<System::UnicodeString, 13> Xc12utils5__3;

enum DECLSPEC_DENUM TXc12ColorType : unsigned char { exctAuto, exctIndexed, exctRgb, exctTheme, exctUnassigned };

typedef TXc12Color *PXc12Color;

struct DECLSPEC_DRECORD TXc12Color
{
public:
	unsigned ARGB;
	double Tint;
	
public:
	TXc12ColorType ColorType;
	union
	{
		struct 
		{
			TXc12ClrSchemeColor Theme;
		};
		struct 
		{
			unsigned OrigRGB;
		};
		struct 
		{
			TXc12IndexColor Indexed;
		};
		struct 
		{
			bool Auto;
		};
		
	};
};


#pragma pack(push,1)
struct DECLSPEC_DRECORD TRGBRec
{
	
public:
	union
	{
		struct 
		{
			System::Word Index;
		};
		struct 
		{
			System::Byte R;
			System::Byte G;
			System::Byte B;
			System::Byte Flag;
		};
		struct 
		{
			System::Byte Red;
			System::Byte Green;
			System::Byte Blue;
		};
		struct 
		{
			unsigned Value;
		};
		
	};
};
#pragma pack(pop)


struct DECLSPEC_DRECORD THLSRec
{
public:
	System::Byte H;
	System::Byte L;
	System::Byte S;
};


typedef TXLS3dCompactRef *PXLS3dCompactRef;

struct DECLSPEC_DRECORD TXLS3dCompactRef
{
public:
	System::Word SheetId;
	System::Word Col;
	unsigned Row;
};


typedef TXLS3dCellArea *PXLS3dCellArea;

struct DECLSPEC_DRECORD TXLS3dCellArea
{
public:
	int SheetIndex;
	int Row1;
	int Row2;
	int Col1;
	int Col2;
};


typedef TXLSCellArea *PXLSCellArea;

struct DECLSPEC_DRECORD TXLSCellArea
{
public:
	int Row1;
	int Row2;
	int Col1;
	int Col2;
};


typedef TXLSCellRef *PXLSCellRef;

struct DECLSPEC_DRECORD TXLSCellRef
{
public:
	int Row;
	int Col;
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 XLS_STYLE_DEFAULT_XF = System::Int8(0x0);
static const System::Int8 XLS_STYLE_DEFAULT_FONT = System::Int8(0x0);
static const System::Int8 XLS_STYLE_DEFAULT_XF_COUNT = System::Int8(0x1);
static const System::Int8 XLS_STYLE_DEFAULT_FONT_COUNT = System::Int8(0x1);
static const System::Int8 XLS_STYLE_DEFAULT_XF_97 = System::Int8(0xf);
static const System::Int8 XLS_STYLE_DEFAULT_XF_COUNT_97 = System::Int8(0x15);
static const int XLS_MAXROWS = int(0x100000);
static const System::Word XLS_MAXCOLS = System::Word(0x4000);
static const int XLS_MAXROW = int(0xfffff);
static const System::Word XLS_MAXCOL = System::Word(0x3fff);
static const System::Byte XLS_MAXCOL_97 = System::Byte(0xff);
static const System::Word XLS_MAXROW_97 = System::Word(0xffff);
static const System::Byte XLS_MAXSHEETS = System::Byte(0xff);
static const System::Word MAXSELROW = System::Word(0x3fff);
static const System::Byte MAX_EXCEL_ARGCOUNT = System::Byte(0xfe);
static const System::Word MAX_EXCEL_STRSZ = System::Word(0x7ffe);
static const System::Word XLS_DEFAULT_COLWIDTH = System::Word(0x924);
static const System::Word XLS_DEFAULT_ROWHEIGHT = System::Word(0x12c);
static const System::Word XLS_DEFAULT_ROWHEIGHT_FLAG = System::Word(0xffff);
static const System::Word COL_ABSFLAG = System::Word(0x8000);
static const unsigned ROW_ABSFLAG = unsigned(0x80000000);
static const System::Word NOT_COL_ABSFLAG = System::Word(0x7fff);
static const int NOT_ROW_ABSFLAG = int(0x7fffffff);
static const int XLS_COLOR_DEFAULT_COMMENT = int(0xffffe1);
static const unsigned XLS_COLOR_AUTO = unsigned(0xff000000);
static const unsigned XLS_COLOR_NONE = unsigned(0xfe000000);
#define XLSCellTypeFormulas (System::Set<TXLSCellType, TXLSCellType::xctNone, TXLSCellType::xctErrorFormula>() << TXLSCellType::xctFloatFormula << TXLSCellType::xctStringFormula << TXLSCellType::xctBooleanFormula << TXLSCellType::xctErrorFormula )
#define XLSCellTypeNum (System::Set<TXLSCellType, TXLSCellType::xctNone, TXLSCellType::xctErrorFormula>() << TXLSCellType::xctFloat << TXLSCellType::xctFloatFormula )
static const System::Int8 Xc12FormulaOpt_ACA = System::Int8(0x1);
static const System::Int8 Xc12FormulaOpt_BX = System::Int8(0x2);
static const System::Int8 Xc12FormulaOpt_CA = System::Int8(0x4);
static const System::Int8 Xc12FormulaTableOpt_DEL1 = System::Int8(0x1);
static const System::Int8 Xc12FormulaTableOpt_DEL2 = System::Int8(0x2);
static const System::Int8 Xc12FormulaTableOpt_DT2D = System::Int8(0x4);
static const System::Int8 Xc12FormulaTableOpt_DTR = System::Int8(0x8);
extern DELPHI_PACKAGE Xc12utils5__1 Xc12CellErrorNames;
extern DELPHI_PACKAGE Xc12utils5__2 Xc12PaperSizeNames;
static const unsigned XLSCOLOR_AUTO = unsigned(0xf0000000);
static const TXc12IndexColor XLSCOLOR_INDEX_NOT_INDEX = (TXc12IndexColor)(0);
extern DELPHI_PACKAGE System::StaticArray<int, 66> TXc12DefaultIndexColorPalette;
extern DELPHI_PACKAGE System::StaticArray<int, 66> TXc12DefaultIndexColorPaletteRGB;
extern DELPHI_PACKAGE System::StaticArray<int, 66> Xc12IndexColorPalette;
extern DELPHI_PACKAGE System::StaticArray<int, 66> Xc12IndexColorPaletteRGB;
extern DELPHI_PACKAGE Xc12utils5__3 TXc12ClrSchemeColorName;
extern DELPHI_PACKAGE System::StaticArray<unsigned, 13> Xc12DefColorSchemeVals;
extern DELPHI_PACKAGE System::StaticArray<unsigned, 13> Xc12DefColorSchemeValsRGB;
extern DELPHI_PACKAGE System::StaticArray<unsigned, 13> Xc12DefColorScheme;
extern DELPHI_PACKAGE System::StaticArray<unsigned, 13> Xc12DefColorSchemeRGB;
extern DELPHI_PACKAGE System::UnicodeString G_StrTRUE;
extern DELPHI_PACKAGE System::UnicodeString G_StrFALSE;
extern DELPHI_PACKAGE unsigned __fastcall Xc12ColorToRGB(PXc12Color Color, unsigned AAutoColor = (unsigned)(0x0))/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall LightenColor(unsigned AColor, double AValue);
extern DELPHI_PACKAGE unsigned __fastcall Xc12ColorToRGB(const TXc12Color &Color, unsigned AAutoColor = (unsigned)(0x0))/* overload */;
extern DELPHI_PACKAGE TXc12Color __fastcall IndexColorToXc12(const int Color)/* overload */;
extern DELPHI_PACKAGE TXc12Color __fastcall IndexColorToXc12(const TXc12IndexColor Color)/* overload */;
extern DELPHI_PACKAGE void __fastcall RGBToHLS(const unsigned ARGB, /* out */ double &AHue, /* out */ double &ALum, /* out */ double &ASat)/* overload */;
extern DELPHI_PACKAGE THLSRec __fastcall RGBToHLS(const TRGBRec PRGB)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall HLSToRGB(const double AHue, const double ALum, const double ASat)/* overload */;
extern DELPHI_PACKAGE TRGBRec __fastcall HLSToRGB(const THLSRec PHLS)/* overload */;
extern DELPHI_PACKAGE bool __fastcall Xc12ColorEqual(const TXc12Color &C1, const TXc12Color &C2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall Xc12ColorEqual(const PXc12Color ColorXc12, const unsigned ColorRGB)/* overload */;
extern DELPHI_PACKAGE bool __fastcall Xc12ColorEqual(const TXc12Color &ColorXc12, const unsigned ColorRGB)/* overload */;
extern DELPHI_PACKAGE bool __fastcall Xc12ColorEqual(const TXc12Color &ColorXc12, const TXc12IndexColor ColorIndex)/* overload */;
extern DELPHI_PACKAGE bool __fastcall Xc12ColorIsIndexColor(const TXc12Color &AColor);
extern DELPHI_PACKAGE unsigned __fastcall Xc12ColorHash(const TXc12Color &AColor);
extern DELPHI_PACKAGE TXc12Color __fastcall MakeXc12ColorAuto(const unsigned ADefault = (unsigned)(0x0));
extern DELPHI_PACKAGE bool __fastcall AreaIsAssigned(const TXLSCellArea &Area);
extern DELPHI_PACKAGE void __fastcall AreaStrToCellArea(const System::UnicodeString S, /* out */ TXLSCellArea &Area)/* overload */;
extern DELPHI_PACKAGE TXLSCellArea __fastcall AreaStrToCellArea(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE void __fastcall ClearCellArea(/* out */ TXLSCellArea &Area);
extern DELPHI_PACKAGE void __fastcall SetCellArea(/* out */ TXLSCellArea &Area, int C, int R)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetCellArea(/* out */ TXLSCellArea &Area, int C1, int R1, int C2, int R2)/* overload */;
extern DELPHI_PACKAGE TXLSCellArea __fastcall SetCellArea(int C, int R)/* overload */;
extern DELPHI_PACKAGE TXLSCellArea __fastcall SetCellArea(int C1, int R1, int C2, int R2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall CellAreaAssigned(const TXLSCellArea &Area);
extern DELPHI_PACKAGE System::UnicodeString __fastcall CellAreaToAreaStr(const TXLSCellArea &Area);
extern DELPHI_PACKAGE bool __fastcall RefStrToColRow(const System::UnicodeString S, /* out */ int &Col, /* out */ int &Row, bool &AbsCol, bool &AbsRow)/* overload */;
extern DELPHI_PACKAGE bool __fastcall RefStrToColRow(const System::UnicodeString S, /* out */ int &Col, /* out */ int &Row)/* overload */;
extern DELPHI_PACKAGE bool __fastcall AreaStrToColRow(System::UnicodeString S, /* out */ int &Col1, /* out */ int &Row1, /* out */ int &Col2, /* out */ int &Row2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsAreaStr(System::UnicodeString S);
extern DELPHI_PACKAGE bool __fastcall AreaStrToColRow(const System::UnicodeString S, /* out */ int &Col1, /* out */ int &Row1, /* out */ int &Col2, /* out */ int &Row2, bool &AbsCol1, bool &AbsRow1, bool &AbsCol2, bool &AbsRow2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall ColStrToCol97(const System::UnicodeString S, /* out */ int &Col);
extern DELPHI_PACKAGE bool __fastcall RowStrToRow97(const System::UnicodeString S, /* out */ int &Row);
extern DELPHI_PACKAGE bool __fastcall RefStrToColRow97(const System::UnicodeString S, /* out */ int &Col, /* out */ int &Row);
extern DELPHI_PACKAGE bool __fastcall AreaStrToColRow97(const System::UnicodeString S, /* out */ int &Col1, /* out */ int &Row1, /* out */ int &Col2, /* out */ int &Row2);
extern DELPHI_PACKAGE bool __fastcall ColStrToCol(const System::UnicodeString S, /* out */ int &Col);
extern DELPHI_PACKAGE bool __fastcall RowStrToRow(const System::UnicodeString S, /* out */ int &Row);
extern DELPHI_PACKAGE bool __fastcall R1C1Index(const System::UnicodeString S, /* out */ int &AIndex, /* out */ bool &ARel);
extern DELPHI_PACKAGE bool __fastcall R1C1ToColRow(const System::UnicodeString S, /* out */ int &Col, /* out */ int &Row, /* out */ bool &RelC, /* out */ bool &RelR);
extern DELPHI_PACKAGE bool __fastcall R1C1ToArea(const System::UnicodeString S, /* out */ int &Col1, /* out */ int &Row1, /* out */ int &Col2, /* out */ int &Row2, /* out */ bool &RelC1, /* out */ bool &RelR1, /* out */ bool &RelC2, /* out */ bool &RelR2);
extern DELPHI_PACKAGE TXc12CellError __fastcall ErrorTextToCellError(const System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall CellErrorToErrorText(TXc12CellError AError);
extern DELPHI_PACKAGE void __fastcall ClipAreaToExtent(int &C1, int &R1, int &C2, int &R2);
extern DELPHI_PACKAGE bool __fastcall InsideExtent(const int C, const int R)/* overload */;
extern DELPHI_PACKAGE bool __fastcall InsideExtent(const int C1, const int R1, const int C2, const int R2)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ColRowToRefStr(int ACol, int ARow)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ColRowToRefStr(int ACol, int ARow, bool AbsCol, bool AbsRow)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ColToRefStr(int ACol, const bool AAbsolute)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall RowToRefStr(int ARow, const bool AAbsolute);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ColsToRefStr(int ACol1, int ACol2, const bool AAbsolute);
extern DELPHI_PACKAGE System::UnicodeString __fastcall RowsToRefStr(int ARow1, int ARow2, const bool AAbsolute);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ShortAreaToRefStr(int Col1, int Row1, int Col2, int Row2, bool AAbsolute = false);
extern DELPHI_PACKAGE System::UnicodeString __fastcall AreaToRefStr(int Col1, int Row1, int Col2, int Row2)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall AreaToRefStr(int Col1, int Row1, int Col2, int Row2, bool AbsCol1, bool AbsRow1, bool AbsCol2, bool AbsRow2)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall AreaToRefStrAbs(int Col1, int Row1, int Col2, int Row2);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ColRowToRefStrEnc(int ACol, int ARow);
extern DELPHI_PACKAGE System::UnicodeString __fastcall AreaToRefStrEnc(int Col1, int Row1, int Col2, int Row2);
extern DELPHI_PACKAGE bool __fastcall IntersectCellArea(const TXLSCellArea &A1, const TXLSCellArea &A2, /* out */ TXLSCellArea &Dest);
extern DELPHI_PACKAGE void __fastcall ExtendCellArea(const TXLSCellArea &A1, const TXLSCellArea &A2, /* out */ TXLSCellArea &Dest)/* overload */;
extern DELPHI_PACKAGE void __fastcall ExtendCellArea(TXLSCellArea &AArea, int C1, int R1, int C2, int R2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall AreaIsRef(const TXLSCellArea &AArea);
extern DELPHI_PACKAGE TXc12Color __fastcall RGBColorToXc12(const unsigned ARGB)/* overload */;
extern DELPHI_PACKAGE TXc12Color __fastcall RGBColorToXc12(const unsigned ARGB, PXc12Color Color)/* overload */;
extern DELPHI_PACKAGE TXc12Color __fastcall ThemeColorToXc12(const TXc12ClrSchemeColor AScheme, const double ATint)/* overload */;
extern DELPHI_PACKAGE void __fastcall ThemeColorToXc12(const PXc12Color AColor, const TXc12ClrSchemeColor AScheme, const double ATint)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall ThemeColorToRGB(const TXc12ClrSchemeColor AScheme, const double ATint);
extern DELPHI_PACKAGE void __fastcall NormalizeArea(int &C1, int &R1, int &C2, int &R2);
extern DELPHI_PACKAGE bool __fastcall AreaInsideSheet(const int C1, const int R1, const int C2, const int R2);
extern DELPHI_PACKAGE bool __fastcall ClipAreaToSheet(int &C1, int &R1, int &C2, int &R2);
extern DELPHI_PACKAGE TXc12IndexColor __fastcall TColorToClosestIndexColor(System::Uitypes::TColor Color);
extern DELPHI_PACKAGE System::Byte __fastcall GetBasePtgs(System::Byte APtg);
}	/* namespace Xc12utils5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XC12UTILS5)
using namespace Xc12utils5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xc12utils5HPP
