// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookRows2.pas' rev: 35.00 (Windows)

#ifndef Xbookrows2HPP
#define Xbookrows2HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Controls.hpp>
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>
#include <XLSRow5.hpp>
#include <XLSAutofilter5.hpp>
#include <XBookUtils2.hpp>
#include <XBookSysVar2.hpp>
#include <XBookPaintGDI2.hpp>
#include <XBookPaint2.hpp>
#include <XBookSkin2.hpp>
#include <XBookOptions2.hpp>
#include <XBookHeaders2.hpp>
#include <XBookWindows2.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookrows2
{
//-- forward type declarations -----------------------------------------------
struct TRowData;
class DELPHICLASS TXRowsGutter;
class DELPHICLASS TXLSBookRows;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TRowData
{
public:
	Xbookskin2::THeaderSelState SelState;
	System::Word Height;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXRowsGutter : public Xbookheaders2::TXHeadersGutter
{
	typedef Xbookheaders2::TXHeadersGutter inherited;
	
protected:
	virtual void __fastcall PaintOutline(int P1, int P2, int Level, Xbookheaders2::TOutlineLineType LineType);
	virtual void __fastcall CentrePos(int P1, int P2, int Delta, int &cx, int &cy);
public:
	/* TXHeadersGutter.Create */ inline __fastcall TXRowsGutter(Xbookwindows2::TXSSWindow* AParent) : Xbookheaders2::TXHeadersGutter(AParent) { }
	/* TXHeadersGutter.Destroy */ inline __fastcall virtual ~TXRowsGutter() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSBookRows : public Xbookheaders2::TXLSBookHeaders
{
	typedef Xbookheaders2::TXLSBookHeaders inherited;
	
private:
	Xlsrow5::TXLSRows* FXLSRows;
	int FDefaultHeight;
	int FWidth;
	int FCurrY;
	Xlsautofilter5::TXLSAutofilter* FAutofilter;
	int FFrozenFirstHdr;
	int FFrozenHdr;
	double FPrintVertAdj;
	int __fastcall GetWidth();
	HIDESBASE int __fastcall GetHeight(int Index);
	int __fastcall GetBottomRow();
	int __fastcall GetTopRow();
	void __fastcall SetTopRow(const int Value);
	int __fastcall GetAbsHeight(int Index);
	double __fastcall GetHeightFloat(int Index);
	int __fastcall GetFrozenHdr();
	void __fastcall SetBottomRow(const int Value);
	
protected:
	virtual void __fastcall GetHeaderData(int Hdr, int &Size, int &Outline, Xbookheaders2::THeaderOptions &Options);
	virtual void __fastcall GetHeaderDataFloat(int Hdr, double &Size, int &Outline, Xbookheaders2::THeaderOptions &Options);
	virtual void __fastcall PaintSizing();
	virtual int __fastcall FirstPos();
	virtual int __fastcall LastPos();
	virtual int __fastcall XorY(int X, int Y);
	virtual Xbookpaintgdi2::TXLSCursorType __fastcall GetCursor(Xbookheaders2::TSizeHitType HitType);
	int __fastcall ClipY(int Y);
	virtual void __fastcall PaintHeader(int Hdr);
	
public:
	__fastcall TXLSBookRows(Xbookwindows2::TXSSClientWindow* Parent, Xlsrow5::TXLSRows* Rows, Xlsautofilter5::TXLSAutofilter* Autofilter);
	__fastcall virtual ~TXLSBookRows();
	virtual void __fastcall Paint();
	void __fastcall RowsChanged(Xlsrow5::TXLSRows* Rows, int OutlineLevel);
	virtual void __fastcall CalcHeaders(int MaxHdrToCalc = 0x7fffffff);
	virtual void __fastcall MouseDown(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseLeave();
	virtual void __fastcall SetSize(const int pX1, const int pY1, const int pX2, const int pY2);
	void __fastcall ButtonClick(System::TObject* Sender, int Hdr, int Level);
	void __fastcall RowPos(int Row, int &Y1, int &Y2)/* overload */;
	void __fastcall RowPos(int Row1, int Row2, int &Y1, int &Y2)/* overload */;
	int __fastcall HeightToPixels(int H);
	int __fastcall PageHeight();
	void __fastcall SetTopRowPrint(int Row, int MaxRowToCalc);
	__property int RowWidth = {read=GetWidth, nodefault};
	__property int RowHeight[int Index] = {read=GetHeight};
	__property double RowHeightFloat[int Index] = {read=GetHeightFloat};
	__property int AbsHeight[int Index] = {read=GetAbsHeight};
	__property int DefaultHeight = {read=FDefaultHeight, write=FDefaultHeight, nodefault};
	__property int TopRow = {read=GetTopRow, write=SetTopRow, nodefault};
	__property int BottomRow = {read=GetBottomRow, write=SetBottomRow, nodefault};
	__property int FrozenRow = {read=GetFrozenHdr, write=FFrozenHdr, nodefault};
	__property int FrozenTopRow = {read=FFrozenFirstHdr, write=FFrozenFirstHdr, nodefault};
	__property Xlsrow5::TXLSRows* XLSRows = {read=FXLSRows};
	__property double PrintVertAdj = {read=FPrintVertAdj, write=FPrintVertAdj};
	__property int ClickedRow = {read=FCurrHeader, nodefault};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xbookrows2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKROWS2)
using namespace Xbookrows2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookrows2HPP
