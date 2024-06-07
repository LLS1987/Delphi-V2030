// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookSkin2.pas' rev: 35.00 (Windows)

#ifndef Xbookskin2HPP
#define Xbookskin2HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <System.Types.hpp>
#include <Vcl.Controls.hpp>
#include <System.Contnrs.hpp>
#include <Vcl.Graphics.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XLSUtils5.hpp>
#include <XBookUtils2.hpp>
#include <XBookPaint2.hpp>
#include <XBookOptions2.hpp>
#include <XBookHintWindow2.hpp>
#include <XBookPaintGDI2.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookskin2
{
//-- forward type declarations -----------------------------------------------
struct TXSSSkinButtonStateColors;
struct TXSSSkinColors;
struct TStraightLine;
class DELPHICLASS TXLSBookSkin;
//-- type declarations -------------------------------------------------------
typedef TXSSSkinButtonStateColors *PXSSSkinButtonStateColors;

struct DECLSPEC_DRECORD TXSSSkinButtonStateColors
{
public:
	unsigned Cl1;
	unsigned Cl2;
	unsigned Sel1;
	unsigned Sel2;
	unsigned Focus1;
	unsigned Focus2;
	unsigned Font;
	bool Bold;
};


typedef TXSSSkinColors *PXSSSkinColors;

struct DECLSPEC_DRECORD TXSSSkinColors
{
public:
	unsigned WindowBkg;
	unsigned SheetBkg;
	unsigned SheetSel;
	TXSSSkinButtonStateColors Header;
	TXSSSkinButtonStateColors Row;
	TXSSSkinButtonStateColors Tab;
	bool HasHoover;
	TXSSSkinButtonStateColors HeaderHoover;
	TXSSSkinButtonStateColors RowHoover;
	TXSSSkinButtonStateColors TabHoover;
	unsigned HeaderLine;
	unsigned HeaderSelLine;
	unsigned HeaderFocusLine;
	unsigned HeaderFrozenLine;
	unsigned HeaderAutofiltFnt;
	unsigned HeaderAutofiltFntSel;
	int HeaderLineWidth;
	unsigned SheetGridline;
	unsigned TabColor;
	unsigned TabColorSel;
	unsigned TabFontColor;
	unsigned TabFontColorSel;
	unsigned GutterColor;
	unsigned GutterLineColor;
};


enum DECLSPEC_DENUM TXBookSkinStyle : unsigned char { xssExcelXP, xssExcel2007, xssExcel2013, xssExcelNone };

enum DECLSPEC_DENUM TXBookSkinHeaderStyle : unsigned char { xshsNormal, xshsRow, xshsGutter };

enum DECLSPEC_DENUM THeaderSelState : unsigned char { hssNormal, hssFocused, hssSelected };

enum DECLSPEC_DENUM TTabState : unsigned char { tsNormal, tsFocused, tsSelected };

enum DECLSPEC_DENUM TCursorSizePos : unsigned char { cspCell, cspCellReadOnly, cspColumn, cspRow, cspNone };

struct DECLSPEC_DRECORD TStraightLine
{
public:
	int A1;
	int A2;
	int B;
	bool Horiz;
};


typedef System::DynamicArray<TStraightLine> TStraightLineArray;

class PASCALIMPLEMENTATION TXLSBookSkin : public Xbookpaint2::TXLSBookPaint
{
	typedef Xbookpaint2::TXLSBookPaint inherited;
	
private:
	TXBookSkinStyle FStyle;
	TXSSSkinColors *FColors;
	TXSSSkinColors FColorsXP;
	TXSSSkinColors FColors2007;
	TXSSSkinColors FColors2013;
	unsigned FHandleHWND;
	int FCX1;
	int FCY1;
	int FCX2;
	int FCY2;
	int __fastcall GetHeaderMargin();
	void __fastcall SetupColors();
	void __fastcall SetStyle(const TXBookSkinStyle Value);
	
public:
	__fastcall TXLSBookSkin(unsigned HandleHWND, Xbookpaintgdi2::TAXWGDI* AGDI);
	__fastcall virtual ~TXLSBookSkin();
	__classmethod void __fastcall LoadResources();
	__classmethod void __fastcall FreeResources();
	void __fastcall PaintHeader(int x1, int y1, int x2, int y2, THeaderSelState State, TXBookSkinHeaderStyle HeaderStyle = (TXBookSkinHeaderStyle)(0x0), bool Hoover = false, System::UnicodeString Text = System::UnicodeString(), bool Filtered = false);
	void __fastcall Paint3dFrame(int x1, int y1, int x2, int y2, int Width, bool Raised = false);
	void __fastcall PaintSheetBkg(int x1, int y1, int x2, int y2);
	void __fastcall PaintSplitterHandle(int x1, int y1, int x2, int y2, bool Vertical, bool FSmall);
	void __fastcall PaintTab(int x1, int x2, int y, System::UnicodeString Text, TTabState State, unsigned Color, int AHeight);
	void __fastcall PaintCursor(int x1, int y1, int x2, int y2, TCursorSizePos SizePos);
	void __fastcall PaintFocusCell(int x1, int y1, int x2, int y2);
	void __fastcall PaintMoveRect(TStraightLineArray Lines);
	void __fastcall PaintDeleteRect(int x1, int y1, int x2, int y2);
	void __fastcall GetBmpBtnSize(Xbookpaintgdi2::TBmpButtonType ButtonType, int &H, int &W);
	void __fastcall PaintBmpButton(Xbookpaintgdi2::TBmpButtonType ButtonType, Xbookpaintgdi2::TBmpButtonState ButtonState, int Index, int X, int Y);
	void __fastcall PaintStockBMP(Xbookpaintgdi2::TStockXBookBitmap StockBMP, int X, int Y);
	void __fastcall PaintTabMoveBmp(int X, int Y);
	void __fastcall SetClientSize(int x1, int y1, int x2, int y2);
	void __fastcall SetFont(Xc12datastylesheet5::TXc12Font* AFont);
	HIDESBASE void __fastcall Test();
	__property int HeaderMargin = {read=GetHeaderMargin, nodefault};
	__property unsigned HandleHWND = {read=FHandleHWND, nodefault};
	__property int CX1 = {read=FCX1, nodefault};
	__property int CY1 = {read=FCY1, nodefault};
	__property int CX2 = {read=FCX2, nodefault};
	__property int CY2 = {read=FCY2, nodefault};
	__property TXBookSkinStyle Style = {read=FStyle, write=SetStyle, nodefault};
	__property PXSSSkinColors Colors = {read=FColors};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 BOOK_BORDERWIDTH = System::Int8(0x1);
static const System::Int8 GRIDLINE_SIZE = System::Int8(0x1);
static const System::Int8 SPLITTER_SIZE = System::Int8(0x8);
static const System::Int8 TABSLANT = System::Int8(0x7);
static const System::Int8 GUTTER_SIZE = System::Int8(0xf);
static const System::Int8 SEL_CELL_MARGIN = System::Int8(0x1);
static const System::Int8 MARG_CELLCURSORHIT = System::Int8(0x3);
static const System::Int8 MARG_CELLCURSORSIZEHIT = System::Int8(0x6);
static const System::Int8 NOTE_SHADOWSIZE = System::Int8(0x2);
static const int COLOR_SHAPESHADOW = int(0x7f7f7f);
}	/* namespace Xbookskin2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKSKIN2)
using namespace Xbookskin2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookskin2HPP
