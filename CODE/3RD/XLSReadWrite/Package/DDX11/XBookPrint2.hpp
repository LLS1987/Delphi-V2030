// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookPrint2.pas' rev: 35.00 (Windows)

#ifndef Xbookprint2HPP
#define Xbookprint2HPP

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
#include <Vcl.Controls.hpp>
#include <System.Math.hpp>
#include <Vcl.Printers.hpp>
#include <Vcl.Graphics.hpp>
#include <XBookTypes2.hpp>
#include <XBook_System_2.hpp>
#include <XLSBook2.hpp>
#include <XBookPaintGDI2.hpp>
#include <XBookSkin2.hpp>
#include <XBookSheet2.hpp>
#include <XBookWindows2.hpp>
#include <XBookPaintLayers2.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XLSUtils5.hpp>
#include <XLSMMU5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSNames5.hpp>
#include <XLSCellAreas5.hpp>
#include <XLSSheetData5.hpp>
#include <XLSReadWriteII5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookprint2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSBookPrinter;
class DELPHICLASS TXLSPDFData;
class DELPHICLASS TXLSBookPrint;
class DELPHICLASS TXLSBookPrintPreview;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TXLSBookPrinter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall SetXSS(Xlsbook2::TXLSSpreadSheet* const Value);
	Xbookpaintgdi2::TAXWGDI* __fastcall GetGDI();
	Vcl::Graphics::TMetafile* __fastcall GetMetafile();
	
protected:
	Xlsbook2::TXLSSpreadSheet* FXSS;
	HDC FPrinterDC;
	Xbookpaintlayers2::TXPaintLayers* FLayers;
	Xbookskin2::TXLSBookSkin* FSkin;
	double FVertAdj;
	int FStdFontWidth;
	int FDevicePPIX;
	int FDevicePPIY;
	int FPPIY;
	double FPaperWidth;
	double FPaperHeight;
	double FPrintWidth;
	double FPrintHeight;
	double FPrintXMarg;
	double FPrintYMarg;
	Xlscellareas5::TCellAreas* FPages;
	int FMinCol;
	int FMaxCol;
	int FMinRow;
	int FMaxRow;
	void __fastcall CalcStdFontWidth();
	bool __fastcall AreaIsEmpty(const int C1, const int R1, const int C2, const int R2);
	void __fastcall GetPrinter();
	int __fastcall MapX(const int APixelWidth, const double ACmX);
	int __fastcall MapY(const int APixelHeight, const double ACmY);
	
public:
	__fastcall TXLSBookPrinter();
	__fastcall virtual ~TXLSBookPrinter();
	bool __fastcall Prepare();
	int __fastcall CalcPageCount();
	double __fastcall ColWidthCm(const int ACol);
	double __fastcall RowHeightCm(const int ARow);
	double __fastcall HdrColHeightCm();
	double __fastcall HdrRowWidthCm();
	bool __fastcall GetNextColBreak(double &AWidth, int &ACol);
	bool __fastcall GetNextRowBreak(double &AHeight, int &ARow);
	void __fastcall Paginate(const int APage);
	void __fastcall PaintPreviewPage(Vcl::Graphics::TCanvas* ACanvas, const int AXOffs, const int AYOffs, const int AX, const int AY, const int AWidth, const int AHeight);
	void __fastcall PrintPixelsPerInch(/* out */ int &APPIX, /* out */ int &APPIY);
	__property Xlsbook2::TXLSSpreadSheet* XSS = {read=FXSS, write=SetXSS};
	__property Xbookskin2::TXLSBookSkin* Skin = {read=FSkin};
	__property Xbookpaintgdi2::TAXWGDI* GDI = {read=GetGDI};
	__property Vcl::Graphics::TMetafile* Metafile = {read=GetMetafile};
	__property double VertAdjustment = {read=FVertAdj, write=FVertAdj};
	__property double PaperWidth = {read=FPaperWidth};
	__property double PaperHeight = {read=FPaperHeight};
	__property double PrintWidth = {read=FPrintWidth};
	__property double PrintHeight = {read=FPrintHeight};
	__property double PrintXMarg = {read=FPrintXMarg};
	__property double PrintYMarg = {read=FPrintYMarg};
	__property int MinCol = {read=FMinCol, nodefault};
	__property int MaxCol = {read=FMaxCol, nodefault};
	__property int MinRow = {read=FMinRow, nodefault};
	__property int MaxRow = {read=FMaxRow, nodefault};
	__property Xlscellareas5::TCellAreas* Pages = {read=FPages};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSPDFData : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TXLSBookPrinter* Printer;
	System::Classes::TStream* Stream;
	int Page1;
	int Page2;
	int XMarg;
	int YMarg;
public:
	/* TObject.Create */ inline __fastcall TXLSPDFData() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSPDFData() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSBookPrint : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	void __fastcall SetXSS(Xlsbook2::TXLSSpreadSheet* const Value);
	
protected:
	TXLSBookPrinter* FPrinter;
	Xlsbook2::TXLSSpreadSheet* FXSS;
	int FFirstPage;
	int FLastPage;
	System::Classes::TNotifyEvent FPrintPDFEvent;
	
public:
	__fastcall virtual TXLSBookPrint(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TXLSBookPrint();
	void __fastcall Print();
	void __fastcall ExportToPDF(const System::UnicodeString AFilename)/* overload */;
	bool __fastcall ExportToPDF(System::Classes::TStream* AStream)/* overload */;
	void __fastcall ExportToMetafile(const System::UnicodeString AFilename);
	__property int FirstPage = {read=FFirstPage, write=FFirstPage, nodefault};
	__property int LastPage = {read=FLastPage, write=FLastPage, nodefault};
	__property Xlsbook2::TXLSSpreadSheet* XSS = {read=FXSS, write=SetXSS};
	__property System::Classes::TNotifyEvent OnPrintPDF = {read=FPrintPDFEvent, write=FPrintPDFEvent};
};


class PASCALIMPLEMENTATION TXLSBookPrintPreview : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	void __fastcall SetXSS(Xlsbook2::TXLSSpreadSheet* const Value);
	int __fastcall GetPageCount();
	void __fastcall SetVertAdjustment(const double Value);
	double __fastcall GetVertAdjustment();
	int __fastcall GetCurrPage();
	void __fastcall SetCurrPage(const int Value);
	void __fastcall SetShowMargins(const bool Value);
	
protected:
	TXLSBookPrinter* FPrinter;
	Xlsbook2::TXLSSpreadSheet* FXSS;
	unsigned FColorBackground;
	unsigned FColorPaper;
	int FPaperPixMarg;
	int FPaperPixLeft;
	int FPaperPixTop;
	int FPaperPixWidth;
	int FPaperPixHeight;
	Xbooktypes2::TXYRect FPreviewArea;
	int FCurrPage;
	bool FShowMargins;
	void __fastcall CalcPaperPixSz();
	int __fastcall MapX(const double ACmX);
	int __fastcall MapY(const double ACmY);
	void __fastcall PaintMargins();
	
public:
	__fastcall virtual TXLSBookPrintPreview(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TXLSBookPrintPreview();
	virtual void __fastcall Paint();
	bool __fastcall Execute();
	__property double VerticalAdjustment = {read=GetVertAdjustment, write=SetVertAdjustment};
	__property int PageCount = {read=GetPageCount, nodefault};
	__property int CurrPage = {read=GetCurrPage, write=SetCurrPage, nodefault};
	__property bool ShowMargins = {read=FShowMargins, write=SetShowMargins, nodefault};
	
__published:
	__property Xlsbook2::TXLSSpreadSheet* XSS = {read=FXSS, write=SetXSS};
	__property Align = {default=0};
	__property DoubleBuffered;
public:
	/* TWinControl.CreateParented */ inline __fastcall TXLSBookPrintPreview(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xbookprint2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKPRINT2)
using namespace Xbookprint2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookprint2HPP
