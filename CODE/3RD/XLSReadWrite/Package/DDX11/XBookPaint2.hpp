// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookPaint2.pas' rev: 35.00 (Windows)

#ifndef Xbookpaint2HPP
#define Xbookpaint2HPP

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
#include <Vcl.Graphics.hpp>
#include <System.Contnrs.hpp>
#include <System.Math.hpp>
#include <Winapi.Windows.hpp>
#include <XLSUtils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XBookTypes2.hpp>
#include <XBookPaintGDI2.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookpaint2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSBookPicture;
class DELPHICLASS TXLSBookPictureBMP;
class DELPHICLASS TXLSBookPictureMetafile;
class DELPHICLASS TXLSBookPictures;
struct THeaderFooterData;
class DELPHICLASS TXLSBookPaint;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TPaintTextAlign : unsigned char { ptaLeft, ptaCenter, ptaRight };

enum DECLSPEC_DENUM TPaintCellHorizAlign : unsigned char { pchaGeneral, pchaLeft, pchaCenter, pchaRight, pchaFill, pchaJustify, pchaCenterAcross };

enum DECLSPEC_DENUM TPaintCellVertAlign : unsigned char { pcvaTop, pcvaCenter, pcvaBottom, pcvaJustify, pcvaDistributed };

enum DECLSPEC_DENUM TCellTextType : unsigned char { cttText, cttTextWordBreak, cttNumeric, cttBoolean, cttError };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSBookPicture : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FId;
	
public:
	virtual void __fastcall Draw(Xbookpaintgdi2::TAXWGDI* GDI, int X1, int Y1, int X2, int Y2) = 0 ;
	__property int Id = {read=FId, write=FId, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXLSBookPicture() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSBookPicture() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSBookPictureBMP : public TXLSBookPicture
{
	typedef TXLSBookPicture inherited;
	
protected:
	Vcl::Graphics::TBitmap* FBitmap;
	
public:
	__fastcall TXLSBookPictureBMP();
	__fastcall virtual ~TXLSBookPictureBMP();
	virtual void __fastcall Draw(Xbookpaintgdi2::TAXWGDI* GDI, int X1, int Y1, int X2, int Y2);
	__property Vcl::Graphics::TBitmap* Bitmap = {read=FBitmap};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSBookPictureMetafile : public TXLSBookPicture
{
	typedef TXLSBookPicture inherited;
	
protected:
	bool FIsEMF;
	void *FBuffer;
	int FBufferSize;
	
public:
	virtual void __fastcall Draw(Xbookpaintgdi2::TAXWGDI* GDI, int X1, int Y1, int X2, int Y2);
	void __fastcall SetBuffer(void * Buf, int BufSize, bool EMF);
public:
	/* TObject.Create */ inline __fastcall TXLSBookPictureMetafile() : TXLSBookPicture() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSBookPictureMetafile() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSBookPictures : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSBookPicture* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSBookPicture* __fastcall GetItems(int Index);
	
public:
	__fastcall virtual ~TXLSBookPictures();
	HIDESBASE void __fastcall Add(TXLSBookPicture* Picture);
	__property TXLSBookPicture* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TObjectList.Create */ inline __fastcall TXLSBookPictures()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TXLSBookPictures(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TXStockFontHandle : unsigned char { xsfhCurrCell, xsfhSmallCell, xsfhSys, xsfhSysBold, xsfhTab, xsfhTabBold };

struct DECLSPEC_DRECORD THeaderFooterData
{
public:
	int PageNumber;
	int PageCount;
	System::UnicodeString SheetName;
	System::UnicodeString Filename;
};


class PASCALIMPLEMENTATION TXLSBookPaint : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int __fastcall GetFontRotation();
	void __fastcall SetFontRotation(int Value);
	
protected:
	Xbookpaintgdi2::TAXWGDI* FGDI;
	int FCanvasWidth;
	int FCanvasHeight;
	int FBMPWidth;
	int FBMPHeight;
	void *FBmpBits;
	System::StaticArray<unsigned, 6> FFontHandles;
	unsigned FFontRotateHandle;
	TXStockFontHandle FCurrFont;
	unsigned FPrintFontHandle;
	int FSysFontSize;
	unsigned FFontColor;
	double FFontRotationRad;
	bool FStackedText;
	Xc12datastylesheet5::TXc12Underline FFontUnderline;
	TXLSBookPictures* FPictures;
	TPaintCellHorizAlign FHorizTextAlign;
	TPaintCellVertAlign FVertTextAlign;
	int FCellLeftMarg;
	int FCellRightMarg;
	int FCellTopMarg;
	int FCellBottomMarg;
	void __fastcall IntPrintHeaderFooter(const THeaderFooterData &HFData, System::UnicodeString S, const System::Types::TRect &Margins, bool IsHeader, int PassCount, System::Types::TPoint *RowSizes, const int RowSizes_High);
	
public:
	__fastcall TXLSBookPaint(Xbookpaintgdi2::TAXWGDI* AGDI);
	__fastcall virtual ~TXLSBookPaint();
	void __fastcall Border(int x1, int y1, int x2, int y2, int Width);
	void __fastcall SetDefaultFont();
	void __fastcall SetSystemFont(bool Bold);
	void __fastcall SetTabFont(bool Bold);
	void __fastcall AssignSystemFont(System::UnicodeString Name, int Size, int CharSet);
	void __fastcall SetCellFont(Xc12datastylesheet5::TXc12Font* AFont);
	void __fastcall TextAlign(TPaintTextAlign Align);
	void __fastcall CellTextAlign(TPaintCellHorizAlign HorizAlign, TPaintCellVertAlign VertAlign, int Rotation);
	void __fastcall PaintHMoveLine(int x1, int y, int x2);
	void __fastcall PaintVMoveLine(int x, int y1, int y2);
	void __fastcall CellTextRect(const Xbooktypes2::TXYRect &XYRect, int Indent, TCellTextType TextType, System::UnicodeString Text);
	void __fastcall CellTextRectWrap(const Xbooktypes2::TXYRect &XYRect, int Indent, System::UnicodeString Text);
	void __fastcall PrintHeaderFooter(const THeaderFooterData &HFData, System::UnicodeString Text, const System::Types::TRect &Margins, bool IsHeader);
	void __fastcall PaintImage(int Id, int X1, int Y1, int X2, int Y2);
	bool __fastcall ImageValid(int Id);
	void __fastcall GetCellFontData();
	void __fastcall SetSize(int Width, int Height);
	void __fastcall Clear();
	void __fastcall PaintArrow(int X, int Y, int Scale, double Angle)/* overload */;
	void __fastcall PaintArrow(const Xbooktypes2::TXYPoint &P1, const Xbooktypes2::TXYPoint &P2, int Scale)/* overload */;
	void __fastcall Test();
	__property Xbookpaintgdi2::TAXWGDI* GDI = {read=FGDI, write=FGDI};
	__property TXLSBookPictures* Pictures = {read=FPictures};
	__property int CellLeftMarg = {read=FCellLeftMarg, nodefault};
	__property int CellRightMarg = {read=FCellRightMarg, nodefault};
	__property int CellTopMarg = {read=FCellTopMarg, nodefault};
	__property int CellBottomMarg = {read=FCellBottomMarg, nodefault};
	__property int FontRotation = {read=GetFontRotation, write=SetFontRotation, nodefault};
	__property Xc12datastylesheet5::TXc12Underline FontUnderline = {read=FFontUnderline, write=FFontUnderline, nodefault};
	__property int SysFontSize = {read=FSysFontSize, nodefault};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 SIZE_LINEWIDTH_2 = System::Int8(0x2);
#define FONT_SMALL L"small fonts"
}	/* namespace Xbookpaint2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKPAINT2)
using namespace Xbookpaint2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookpaint2HPP
