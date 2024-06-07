// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookColumns2.pas' rev: 35.00 (Windows)

#ifndef Xbookcolumns2HPP
#define Xbookcolumns2HPP

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
#include <XLSColumn5.hpp>
#include <XBookUtils2.hpp>
#include <XBookSysVar2.hpp>
#include <XBookPaintGDI2.hpp>
#include <XBookPaint2.hpp>
#include <XBookWindows2.hpp>
#include <XBookSkin2.hpp>
#include <XBookOptions2.hpp>
#include <XBookHeaders2.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookcolumns2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXColsGutter;
class DELPHICLASS TXLSBookColumns;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXColsGutter : public Xbookheaders2::TXHeadersGutter
{
	typedef Xbookheaders2::TXHeadersGutter inherited;
	
protected:
	virtual void __fastcall PaintOutline(int P1, int P2, int Level, Xbookheaders2::TOutlineLineType LineType);
	virtual void __fastcall CentrePos(int P1, int P2, int Delta, int &cx, int &cy);
public:
	/* TXHeadersGutter.Create */ inline __fastcall TXColsGutter(Xbookwindows2::TXSSWindow* AParent) : Xbookheaders2::TXHeadersGutter(AParent) { }
	/* TXHeadersGutter.Destroy */ inline __fastcall virtual ~TXColsGutter() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSBookColumns : public Xbookheaders2::TXLSBookHeaders
{
	typedef Xbookheaders2::TXLSBookHeaders inherited;
	
private:
	Xlscolumn5::TXLSColumns* FXLSColumns;
	int FStdFontWidth;
	int FDefaultWidth;
	int FDefaultWidthPix;
	int FDefaultHeight;
	int FCurrX;
	int FFrozenFirstHdr;
	int FFrozenHdr;
	int __fastcall GetWidth(int Index);
	int __fastcall GetLeftCol();
	int __fastcall GetRightCol();
	void __fastcall SetLeftCol(const int Value);
	HIDESBASE int __fastcall GetHeight();
	int __fastcall GetAbsWidth(int Index);
	double __fastcall GetWidthFloat(int Index);
	int __fastcall GetVisualCol(int Index);
	int __fastcall GetFrozenHdr();
	void __fastcall SetRightCol(const int Value);
	
protected:
	int __fastcall PixelsToColWidth(int Pixels);
	System::UnicodeString __fastcall ColToRefStr(int ACol);
	virtual void __fastcall PaintSizing();
	virtual int __fastcall FirstPos();
	virtual int __fastcall LastPos();
	virtual int __fastcall XorY(int X, int Y);
	virtual Xbookpaintgdi2::TXLSCursorType __fastcall GetCursor(Xbookheaders2::TSizeHitType HitType);
	int __fastcall GetDefaultWidth(int FontSize);
	virtual void __fastcall PaintHeader(int Hdr);
	
public:
	__fastcall TXLSBookColumns(Xbookwindows2::TXSSClientWindow* Parent, Xlscolumn5::TXLSColumns* Columns);
	__fastcall virtual ~TXLSBookColumns();
	virtual void __fastcall GetHeaderData(int Hdr, int &Size, int &Outline, Xbookheaders2::THeaderOptions &Options);
	virtual void __fastcall GetHeaderDataFloat(int Hdr, double &Size, int &Outline, Xbookheaders2::THeaderOptions &Options);
	virtual void __fastcall Paint();
	void __fastcall ColumnsChanged(Xlscolumn5::TXLSColumns* AColumns, const int AOutlineLevel, const int AStdFontWidth);
	virtual void __fastcall MouseDown(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseLeave();
	virtual void __fastcall SetSize(const int pX1, const int pY1, const int pX2, const int pY2);
	void __fastcall ButtonClick(System::TObject* Sender, int Hdr, int Level);
	void __fastcall ColPos(int Col, int &X1, int &X2)/* overload */;
	void __fastcall ColPos(int Col1, int Col2, int &X1, int &X2)/* overload */;
	int __fastcall WidthToPixels(int W);
	void __fastcall ScrollLeft();
	void __fastcall ScrollPageLeft();
	void __fastcall ScrollRight();
	void __fastcall ScrollPageRight();
	int __fastcall PageWidth();
	__property int DefaultWidth = {read=FDefaultWidth, write=FDefaultWidth, nodefault};
	__property int DefaultWidthPix = {read=FDefaultWidthPix, write=FDefaultWidthPix, nodefault};
	__property int ColWidth[int Index] = {read=GetWidth};
	__property double ColWidthFloat[int Index] = {read=GetWidthFloat};
	__property int AbsWidth[int Index] = {read=GetAbsWidth};
	__property int LeftCol = {read=GetLeftCol, write=SetLeftCol, nodefault};
	__property int RightCol = {read=GetRightCol, write=SetRightCol, nodefault};
	__property int FrozenCol = {read=GetFrozenHdr, write=FFrozenHdr, nodefault};
	__property int FrozenLeftCol = {read=FFrozenFirstHdr, write=FFrozenFirstHdr, nodefault};
	__property int ColHeight = {read=GetHeight, nodefault};
	__property int DefaultHeight = {read=FDefaultHeight, write=FDefaultHeight, nodefault};
	__property Xlscolumn5::TXLSColumns* XLSColumns = {read=FXLSColumns};
	__property int VisualCol[int Index] = {read=GetVisualCol};
	__property int ClickedCol = {read=FCurrHeader, nodefault};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xbookcolumns2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKCOLUMNS2)
using namespace Xbookcolumns2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookcolumns2HPP
