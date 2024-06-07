// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookRichPainter2.pas' rev: 35.00 (Windows)

#ifndef Xbookrichpainter2HPP
#define Xbookrichpainter2HPP

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
#include <System.Types.hpp>
#include <System.Math.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XLSUtils5.hpp>
#include <XLSTools5.hpp>
#include <XBookTypes2.hpp>
#include <XBookPaintGDI2.hpp>
#include <XBookSkin2.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookrichpainter2
{
//-- forward type declarations -----------------------------------------------
struct TXBookRichRow;
class DELPHICLASS TXBookRichPainter;
//-- type declarations -------------------------------------------------------
typedef TXBookRichRow *PXBookRichRow;

struct DECLSPEC_DRECORD TXBookRichRow
{
public:
	int CR1;
	int CR2;
	int CP1;
	int CP2;
	int Width;
	int Height;
	int LineGap;
	int Ascent;
	int Descent;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXBookRichPainter : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TXBookRichRow> _TXBookRichPainter__1;
	
	
protected:
	Xbookskin2::TXLSBookSkin* FSkin;
	Xc12datastylesheet5::TXc12XF* FXF;
	Xc12datastylesheet5::TXc12HorizAlignment FHorizAlign;
	Xc12datastylesheet5::TXc12VertAlignment FVertAlign;
	int FTotHeight;
	int FPaintWidth;
	Xlstools5::TXLSFormattedText* FCharRuns;
	_TXBookRichPainter__1 FRows;
	int FRowCount;
	void __fastcall BeginRow(const int ACR, const int ACP);
	void __fastcall UpdateRow(const int ACR, const int ACP, const int AWidth, const int AHeight, const int ALineGap, const int AAscent, const int ADescent);
	void __fastcall EndRow();
	void __fastcall Paginate();
	int __fastcall CalcX(const int AX1, const int AX2, PXBookRichRow ARow);
	int __fastcall CalcY(const int AY1, const int AY2);
	System::UnicodeString __fastcall DrawCharRun(Xlstools5::TXLSFormattedTextItem* ACR, const int ACP, const int ACharCount, const int AX, const int AY);
	
public:
	__fastcall TXBookRichPainter(Xbookskin2::TXLSBookSkin* ASkin);
	__fastcall virtual ~TXBookRichPainter();
	void __fastcall DrawText(const int AX1, const int AY1, const int AX2, const int AY2);
	int __fastcall TextWidth();
	void __fastcall AssignText(System::UnicodeString S, Xc12datastylesheet5::TXc12XF* XF, Xc12datastylesheet5::PXc12FontRunArray FR, int FontRunCount);
	__property Xc12datastylesheet5::TXc12HorizAlignment HorizAlign = {read=FHorizAlign, write=FHorizAlign, nodefault};
	__property Xc12datastylesheet5::TXc12VertAlignment VertAlign = {read=FVertAlign, write=FVertAlign, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall RichTextRect(Xbookskin2::TXLSBookSkin* ASkin, const int AX1, const int AY1, const int AX2, const int AY2, Xc12datastylesheet5::PXc12FontRunArray AFontRuns, const int AFRCount, const System::UnicodeString AText)/* overload */;
extern DELPHI_PACKAGE void __fastcall RichTextRect(Xbookskin2::TXLSBookSkin* ASkin, const double AX1, const double AY1, const double AX2, const double AY2, Xlstools5::TXLSFormattedText* AText, Xc12datastylesheet5::TXc12HorizAlignment AHorizAlign = (Xc12datastylesheet5::TXc12HorizAlignment)(0x1), Xc12datastylesheet5::TXc12VertAlignment AVertAlign = (Xc12datastylesheet5::TXc12VertAlignment)(0x0))/* overload */;
extern DELPHI_PACKAGE void __fastcall RichTextRect(Xbookskin2::TXLSBookSkin* ASkin, const Xbooktypes2::TXYRect &AXYRect, Xc12datastylesheet5::TXc12XF* AXF, Xc12datastylesheet5::PXc12FontRunArray AFontRuns, const int AFRCount, const System::UnicodeString AText)/* overload */;
extern DELPHI_PACKAGE int __fastcall RichTextWidth(Xbookskin2::TXLSBookSkin* ASkin, Xc12datastylesheet5::TXc12XF* AXF, Xc12datastylesheet5::PXc12FontRunArray AFontRuns, const int AFRCount, const System::UnicodeString AText);
}	/* namespace Xbookrichpainter2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKRICHPAINTER2)
using namespace Xbookrichpainter2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookrichpainter2HPP
