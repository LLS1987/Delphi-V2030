// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookPaintGDI2.pas' rev: 35.00 (Windows)

#ifndef Xbookpaintgdi2HPP
#define Xbookpaintgdi2HPP

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
#include <System.Math.hpp>
#include <System.Contnrs.hpp>
#include <Vcl.Graphics.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12DataAutofilter5.hpp>
#include <XLSUtils5.hpp>
#include <XBookTypes2.hpp>
#include <XBookUtils2.hpp>
#include <XBookSysVar2.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookpaintgdi2
{
//-- forward type declarations -----------------------------------------------
struct TAXWTextmetrics;
struct TXLSCurvePoints;
class DELPHICLASS TXLSCurve;
class DELPHICLASS TXLSFigure;
class DELPHICLASS TTransformation;
class DELPHICLASS TAXWGDI;
class DELPHICLASS TAXWGDIMetafile;
class DELPHICLASS TAXWGDIBMP;
class DELPHICLASS TAXWGDIBMPTrans;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXGDICanvas : unsigned char { xgdiBackground, xgdiBitmap };

enum DECLSPEC_DENUM TPaintLineStyle : unsigned char { plsNone, plsThin, plsMedium, plsDashed, plsDotted, plsThick, plsDouble, plsHair, plsMediumDashed, plsDashDot, plsMediumDashDot, plsDashDotDot, plsMediumDashDotDot, plsSlantedDashDot, pls_Clear_, pls_MediumDotted_ };

enum DECLSPEC_DENUM TXGDIHorizTextAlign : unsigned char { xhtaDefault, xhtaLeft, xhtaCenter, xhtaRight, xhtaLeftNoUpdateCP };

enum DECLSPEC_DENUM TXGDIVertTextAlign : unsigned char { xvtaDefault, xvtaNone, xvtaTop, xvtaBaseline, xvtaBottom };

enum DECLSPEC_DENUM TXLSCursorType : unsigned char { xctCurrent, xctArrow, xctHandPoint, xctCell, xctColSelect, xctFill, xctHorizSplit, xctHoriz2Split, xctRowSelect, xctVertSplit, xctVert2Split, xctCenter, xctMoveCells, xctSizeCells, xctNeSwArrow, xctNwSeArrow };

enum DECLSPEC_DENUM TBmpButtonState : unsigned char { bbsNormal, bbsFocused, bbsClicked };

enum DECLSPEC_DENUM TBmpButtonType : unsigned char { bbtTabset, bbtOutline, bbtNumbers };

enum DECLSPEC_DENUM TStockPatternBrush : unsigned char { spbNone, spbGray, spbLightGray, spbWarning };

enum DECLSPEC_DENUM TStockXBookBitmap : unsigned char { sxbCommentMark, sxbCheckBox, sxbHSplit, sxbVSplit };

enum DECLSPEC_DENUM TGDICtrlType : unsigned char { gctButton, gctCheckBox, gctCheckBoxChecked, gctCheckBoxMixed, gctScrollButtonUp, gctScrollButtonUpClicked, gctScrollButtonUpDisabled, gctScrollButtonDown, gctScrollButtonDownClicked, gctScrollButtonDownDisabled, gctScrollButtonLeft, gctScrollButtonLeftClicked, gctScrollButtonLeftDisabled, gctScrollButtonRight, gctScrollButtonRightClicked, gctScrollButtonRightDisabled, gctCombo, gctComboClicked, gctComboHighlight, gctComboHighlightClicked, gctRadioButton, gctRadioButtonChecked };

enum DECLSPEC_DENUM TLineEndcapStyle : unsigned char { lesCircle, lesSquare, lesPoint };

enum DECLSPEC_DENUM TLineColorStyle : unsigned char { lcsSolid, lcsGradient, lcsRainbow };

enum DECLSPEC_DENUM TDrawTextOption : unsigned char { dtoHCenter, dtoLeft, dtoRight, dtoTop, dtoVCenter, dtoBaseline, dtoBottom, dtoVDistributed, dtoWordBreak };

typedef System::Set<TDrawTextOption, TDrawTextOption::dtoHCenter, TDrawTextOption::dtoWordBreak> TDrawTextOptions;

typedef System::StaticArray<System::StaticArray<double, 3>, 3> TFloatMatrix;

struct DECLSPEC_DRECORD TAXWTextmetrics
{
public:
	int UnderscoreSize;
	int UnderscorePosition;
	int LineGap;
	int Height;
	int Ascent;
	int InternalLeading;
	int Descent;
	int AveCharWidth;
	System::WideChar BreakChar;
};


enum DECLSPEC_DENUM TXLSCurveType : unsigned char { xctLineTo, xctPolyline, xctBezier };

struct DECLSPEC_DRECORD TXLSCurvePoints
{
public:
	Xbooktypes2::TPointArray *Points;
	int Count;
	TXLSCurveType CurveType;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCurve : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TXLSCurvePoints> _TXLSCurve__1;
	
	
public:
	TXLSCurvePoints operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Types::TPoint FStart;
	int FCount;
	_TXLSCurve__1 FCurves;
	TXLSCurvePoints __fastcall GetItems(int Index);
	
public:
	__fastcall TXLSCurve();
	__fastcall virtual ~TXLSCurve();
	void __fastcall Add(Winapi::Windows::PTTPolyCurve TTCurve, int Height, int GlyphDescent);
	void __fastcall CloseCurve();
	void __fastcall Adjust(int X, int Y);
	__property System::Types::TPoint Start = {read=FStart, write=FStart};
	__property int Count = {read=FCount, nodefault};
	__property TXLSCurvePoints Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSFigure : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSCurve* operator[](int Index) { return this->Items[Index]; }
	
private:
	int FWidth;
	int FHeight;
	TXLSCurve* __fastcall GetItems(int Index);
	
public:
	HIDESBASE void __fastcall Add(Winapi::Windows::PTTPolygonHeader TTCurves, int Size, int W, int H, int GlyphDescent);
	void __fastcall Adjust(int X, int Y);
	__property TXLSCurve* Items[int Index] = {read=GetItems/*, default*/};
	__property int Width = {read=FWidth, nodefault};
	__property int Height = {read=FHeight, nodefault};
public:
	/* TObjectList.Create */ inline __fastcall TXLSFigure()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TXLSFigure(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXLSFigure() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TTransformation : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TFloatMatrix FMatrix;
	TFloatMatrix __fastcall Mult(const TFloatMatrix &M1, const TFloatMatrix &M2);
	
public:
	__fastcall TTransformation();
	void __fastcall Clear();
	void __fastcall Transform(int &X, int &Y)/* overload */;
	void __fastcall Transform(System::Types::TPoint *Arr, const int Arr_High)/* overload */;
	void __fastcall Rotate(double X, double Y, double Alpha);
	void __fastcall Skew(double X, double Y);
	void __fastcall Scale(double X, double Y);
	void __fastcall Translate(double X, double Y);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TTransformation() { }
	
};


class PASCALIMPLEMENTATION TAXWGDI : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool __fastcall GetXorMode();
	void __fastcall SetXorMode(const bool Value);
	unsigned __fastcall GetPenColor();
	void __fastcall SetPenColor(const unsigned Value);
	unsigned __fastcall GetBrushColor();
	void __fastcall SetBrushColor(const unsigned Value);
	bool __fastcall GetBrushSolid();
	void __fastcall SetBrushSolid(const bool Value);
	bool __fastcall GetPenSolid();
	void __fastcall SetPenSolid(const bool Value);
	void __fastcall SetPaintColor(const unsigned Value);
	unsigned __fastcall GetFontColor();
	void __fastcall SetFontColor(const unsigned Value);
	unsigned __fastcall GetTheDC();
	unsigned __fastcall GetPenWidth();
	void __fastcall SetPenWidth(const unsigned Value);
	bool __fastcall GetTransparentMode();
	void __fastcall SetTransparentMode(const bool Value);
	double __fastcall GetPenWidthF();
	void __fastcall SetPenWidthF(const double Value);
	
protected:
	HWND FHWND;
	HDC FDC;
	int FCurrentCursor;
	tagLOGBRUSH FBrush;
	HBRUSH FHBrush;
	tagLOGPEN FPen;
	tagLOGPEN FSavedPen;
	HPEN FHPen;
	HFONT FFontHandle;
	int FMinX;
	int FMinY;
	int FMaxX;
	int FMaxY;
	int FFontRotation;
	TAXWTextmetrics FTM_SYS;
	TAXWTextmetrics FTM;
	Vcl::Graphics::TBitmap* FFillBmp;
	bool FDirty;
	TLineEndcapStyle FLineEndcapStyle;
	TLineColorStyle FLineColorStyle;
	TTransformation* FTransform;
	double FZoom;
	void __fastcall SetDirtyArea(int x, int y)/* overload */;
	void __fastcall SetDirtyArea(System::Types::TPoint *Points, const int Points_High)/* overload */;
	void __fastcall SetDefaultData();
	void __fastcall ResetLimits();
	virtual void __fastcall CheckHandle();
	virtual void __fastcall SetPixel(int x, int y, unsigned Cl);
	virtual void __fastcall SetPixelAA(int x, int y, unsigned Cl, System::Byte A);
	void __fastcall LineWide(int x1, int y1, int x2, int y2);
	void __fastcall LineWide2(int x1, int y1, int x2, int y2);
	void __fastcall StrToFont32Array(System::UnicodeString Source, System::WideChar * Dest);
	
public:
	__fastcall TAXWGDI(unsigned WinHandle);
	__fastcall virtual ~TAXWGDI();
	__classmethod void __fastcall LoadResources();
	__classmethod void __fastcall FreeResources();
	virtual void __fastcall ReleaseHandle();
	virtual void __fastcall Render(TAXWGDI* Dest);
	virtual void __fastcall RenderDirty(TAXWGDI* Dest);
	virtual void __fastcall Clear();
	void __fastcall SetDirtyArea(int x1, int y1, int x2, int y2)/* overload */;
	void __fastcall Line(int x1, int y1, int x2, int y2);
	void __fastcall LineF(double x1, double y1, double x2, double y2);
	void __fastcall LineStyled(int x1, int y1, int x2, int y2, unsigned PenColor, unsigned BackColor, TPaintLineStyle Style, bool Horiz, bool Diag = false);
	void __fastcall MoveTo(int x, int y);
	void __fastcall MoveToF(double x, double y);
	void __fastcall LineTo(int x, int y);
	void __fastcall LineToF(double x, double y);
	void __fastcall Rectangle(int x1, int y1, int x2, int y2)/* overload */;
	void __fastcall Rectangle(const Xbooktypes2::TXYRect &Rect)/* overload */;
	void __fastcall RectangleF(double x1, double y1, double x2, double y2)/* overload */;
	void __fastcall FillRect(const Xbooktypes2::TXYRect &Rect);
	void __fastcall Ellipse(int x1, int y1, int x2, int y2);
	void __fastcall Circle(int x, int y, int r);
	void __fastcall CircleF(double x, double y, double r);
	void __fastcall PizzaSlice(const int x, const int y, const int r, const double AStartAng, const double AEndAng);
	void __fastcall PizzaSliceF(const double x, const double y, const double r, const double AStartAng, const double AEndAng);
	void __fastcall Arc(int x1, int y1, int x2, int y2, int StartX, int StartY, int EndX, int EndY);
	void __fastcall ArcTo(int x1, int y1, int x2, int y2, int StartX, int StartY, int EndX, int EndY);
	void __fastcall RoundRect(int x1, int y1, int x2, int y2, double Adjust);
	void __fastcall Polygon(System::Types::TPoint *Points, const int Points_High);
	void __fastcall Polyline(System::Types::TPoint *Points, const int Points_High);
	void __fastcall PolylineTo(System::Types::TPoint *Points, const int Points_High);
	void __fastcall PolyBezier(System::Types::TPoint *Points, const int Points_High);
	void __fastcall PolyBezierTo(System::Types::TPoint *Points, const int Points_High);
	void __fastcall Pixel(int x, int y);
	void __fastcall BmpBlt(unsigned Handle, int X, int Y, int Width, int Height, int XSrc, int YSrc, unsigned ROP = (unsigned)(0xcc0020));
	void __fastcall GradientFillRect(int x1, int y1, int x2, int y2, unsigned StartColor, unsigned EndColor, bool HorizontalFill);
	void __fastcall Draw(const int AX, const int AY, System::TObject* AGraphic);
	void __fastcall DrawF(const double AX, const double AY, System::TObject* AGraphic)/* overload */;
	void __fastcall DrawF(const double AX, const double AY, const double AWidth, const double AHeight, System::TObject* AGraphic)/* overload */;
	void __fastcall SetArcDirection(bool CCW);
	void __fastcall SavePen();
	void __fastcall RecallPen();
	void __fastcall AdjustBrush(double Percent);
	void __fastcall DrawControl(TGDICtrlType ControlType, int x1, int y1, int x2, int y2);
	void __fastcall DrawEdge(int x1, int y1, int x2, int y2, unsigned EdgeType, unsigned EdgeFlags);
	void __fastcall WidthRectangle(int x1, int y1, int x2, int y2, int W);
	void __fastcall CreatePen(unsigned Color, unsigned Style, unsigned Width);
	virtual void __fastcall Invalidate();
	virtual void __fastcall InvalidateRect(int x1, int y1, int x2, int y2);
	void __fastcall PaintSelectBMP(int x1, int y1, int x2, int y2);
	void __fastcall PaintTabMoveBmp(int X, int Y);
	void __fastcall SizeLine(int x1, int y1, int x2, int y2);
	void __fastcall CenterText(int x1, int x2, int y, System::UnicodeString Text);
	void __fastcall CenterTextRect(int x1, int y1, int x2, int y2, System::UnicodeString Text)/* overload */;
	void __fastcall CenterTextRect(int x1, int y1, int x2, int y2, int y, System::UnicodeString Text)/* overload */;
	void __fastcall CenterTextVert(int x1, int y1, int x2, int y2, System::UnicodeString Text);
	void __fastcall _GetTextMetricSys();
	void __fastcall GetTextMetric();
	void __fastcall Scroll(int X1, int Y1, int X2, int Y2, int dX, int dY);
	void __fastcall TextOut(int X, int Y, const System::Types::TRect &Rect, System::UnicodeString Text)/* overload */;
	void __fastcall TextOut(int X, int Y, System::UnicodeString Text)/* overload */;
	void __fastcall TextOutF(double X, double Y, System::UnicodeString Text)/* overload */;
	void __fastcall TextOutF(double X, double Y, System::UnicodeString Text, TDrawTextOptions AOptions)/* overload */;
	void __fastcall DrawText(double X1, double Y1, double X2, double Y2, System::UnicodeString Text, TDrawTextOptions Options)/* overload */;
	void __fastcall DrawText(const System::Types::TRect &Rect, System::UnicodeString Text, TDrawTextOptions Options)/* overload */;
	void __fastcall PaintBMPImage(Vcl::Graphics::TBitmap* Bitmap, int X1, int Y1, int X2, int Y2)/* overload */;
	void __fastcall PaintEMFImage(void * Buf, int BufSize, int X1, int Y1, int X2, int Y2);
	void __fastcall PaintWMFImage(void * Buf, int BufSize, int X1, int Y1, int X2, int Y2);
	void __fastcall SelectPatternBrush(TStockPatternBrush PatternBrush);
	void __fastcall PaintStockBMP(TStockXBookBitmap StockBMP, int X, int Y);
	void __fastcall PaintCondFmtIcon(const Xc12dataautofilter5::TXc12IconSetType AStyle, const int AIndex, const int AX, const int AY);
	void __fastcall CheckMinFontSize();
	unsigned __fastcall CreateClipRect(int x1, int y1, int x2, int y2);
	unsigned __fastcall AppendClipRect(int x1, int y1, int x2, int y2);
	void __fastcall SelectClipRect(unsigned ClipHandle);
	void __fastcall DeleteClipRect(unsigned ClipHandle);
	void __fastcall SetFont(Xc12datastylesheet5::TXc12Font* AFont);
	unsigned __fastcall CreateFont(System::UnicodeString FaceName, double Size, bool Bold, bool Italic, bool Underline, int CharSet);
	int __fastcall CreateFontByStr(System::UnicodeString FaceName, System::UnicodeString FontStyle, int Size);
	void __fastcall SelectFont(unsigned FontHandle);
	void __fastcall DeleteFont(unsigned FontHandle);
	unsigned __fastcall GetFont();
	void __fastcall CopyFontToDC(unsigned DestDC);
	virtual int __fastcall PixelsPerInchX();
	virtual int __fastcall PixelsPerInchY();
	int __fastcall PtToPixX(const double APoints);
	int __fastcall PtToPixY(const double APoints);
	double __fastcall PixToPtX(const int APixels);
	double __fastcall PixToPtY(const int APixels);
	int __fastcall PixelsPerCm();
	int __fastcall TextHeight(const System::UnicodeString Text);
	double __fastcall TextHeightF(const System::UnicodeString Text);
	int __fastcall TextWidth(const System::UnicodeString Text);
	double __fastcall TextWidthF(const System::UnicodeString Text);
	double __fastcall TextWidthFloat(const System::UnicodeString Text);
	int __fastcall CharWidth(System::WideChar C);
	int __fastcall StdCharWidth();
	double __fastcall GetFontRotation(unsigned Handle);
	unsigned __fastcall SetFontRotation(unsigned Handle, const int Value);
	unsigned __fastcall SetFontStyle(bool Bold, bool Italic, bool Underline);
	unsigned __fastcall SetFontStrikeOut(bool StrikeOut);
	void __fastcall GetFontSuperscriptData(System::Types::TPoint &FontOffset, System::Types::TPoint &FontSize);
	void __fastcall GetFontSubscriptData(System::Types::TPoint &FontOffset, System::Types::TPoint &FontSize);
	unsigned __fastcall SetFontSize(int Size);
	unsigned __fastcall SetFontSizePix(int Size);
	unsigned __fastcall SetFontName(System::UnicodeString FaceName)/* overload */;
	unsigned __fastcall SetFontName(System::UnicodeString FaceName, System::Byte ACharset)/* overload */;
	System::UnicodeString __fastcall GetFontName();
	int __fastcall SetTextJustification(const int ABreakExtra, const int ABreakCount);
	int __fastcall SetTextJustificationF(const double ABreakExtra, const double ABreakCount);
	bool __fastcall CharIsRTL(System::WideChar C);
	int __fastcall GetFontSize();
	int __fastcall FntPixHeightToPt(int PixHeight);
	void __fastcall GetGlyphCurves(System::WideChar C, TXLSFigure* Curves, int GlyphHeight, int GlyphDescent, double XScale, double YScale);
	void __fastcall DrawGlyphCurves(void * Buf, int Sz);
	void __fastcall DrawXLSCurves(TXLSFigure* Curves);
	void __fastcall StretchBlt(unsigned DestDC, int DestX, int DestY, int DestWidth, int DestHeight, int ScrX, int SrcY, int SrcWidth, int SrcHeight);
	void __fastcall SetCursor(TXLSCursorType Cursor);
	void __fastcall SetTextAlign(TXGDIHorizTextAlign HPos, TXGDIVertTextAlign VPos);
	int __fastcall EMUToPixels(const int EMU);
	int __fastcall PixelsToEMU(const int Pixels);
	void __fastcall DebugDumpBMP(int N);
	__property unsigned BrushColor = {read=GetBrushColor, write=SetBrushColor, nodefault};
	__property bool BrushSolid = {read=GetBrushSolid, write=SetBrushSolid, nodefault};
	__property unsigned PenColor = {read=GetPenColor, write=SetPenColor, nodefault};
	__property unsigned PenWidth = {read=GetPenWidth, write=SetPenWidth, nodefault};
	__property double PenWidthF = {read=GetPenWidthF, write=SetPenWidthF};
	__property bool PenSolid = {read=GetPenSolid, write=SetPenSolid, nodefault};
	__property unsigned PaintColor = {write=SetPaintColor, nodefault};
	__property unsigned FontColor = {read=GetFontColor, write=SetFontColor, nodefault};
	__property bool XorMode = {read=GetXorMode, write=SetXorMode, nodefault};
	__property bool TransparentMode = {read=GetTransparentMode, write=SetTransparentMode, nodefault};
	__property int FontRotation = {read=FFontRotation, nodefault};
	__property TAXWTextmetrics TM_SYS = {read=FTM_SYS};
	__property TAXWTextmetrics TM = {read=FTM};
	__property unsigned DC = {read=GetTheDC, nodefault};
	__property bool Dirty = {read=FDirty, nodefault};
	__property TTransformation* Trans = {read=FTransform};
	__property double _Zoom = {read=FZoom, write=FZoom};
};


class PASCALIMPLEMENTATION TAXWGDIMetafile : public TAXWGDI
{
	typedef TAXWGDI inherited;
	
private:
	Vcl::Graphics::TMetafile* FMetafile;
	Vcl::Graphics::TMetafileCanvas* FMCanvas;
	double FXScale;
	double FYScale;
	
public:
	__fastcall TAXWGDIMetafile();
	__fastcall virtual ~TAXWGDIMetafile();
	virtual int __fastcall PixelsPerInchX();
	virtual int __fastcall PixelsPerInchY();
	int __fastcall DevicePixelsPerInchX();
	int __fastcall DevicePixelsPerInchY();
	void __fastcall BeginMetafile(const unsigned AReferenceDC, const double AWidthCm, const double AHeightCm);
	void __fastcall EndMetafile();
	void __fastcall PlayMetafile(Vcl::Graphics::TCanvas* ACanvas, const int AX1, const int AY1, const int AX2, const int AY2);
	virtual void __fastcall CheckHandle();
	virtual void __fastcall ReleaseHandle();
	__property double XScale = {read=FXScale};
	__property double YScale = {read=FYScale};
	__property Vcl::Graphics::TMetafile* Metafile = {read=FMetafile};
};


class PASCALIMPLEMENTATION TAXWGDIBMP : public TAXWGDI
{
	typedef TAXWGDI inherited;
	
private:
	HBITMAP FHBMP;
	void *FBmpBits;
	int FBMPWidth;
	int FBMPHeight;
	int FTransparentColor;
	
protected:
	virtual void __fastcall CheckHandle();
	virtual void __fastcall SetPixel(int x, int y, unsigned Cl);
	
public:
	__fastcall TAXWGDIBMP();
	__fastcall virtual ~TAXWGDIBMP();
	virtual void __fastcall ReleaseHandle();
	virtual void __fastcall Invalidate();
	virtual void __fastcall InvalidateRect(int x1, int y1, int x2, int y2);
};


class PASCALIMPLEMENTATION TAXWGDIBMPTrans : public TAXWGDIBMP
{
	typedef TAXWGDIBMP inherited;
	
public:
	__fastcall TAXWGDIBMPTrans();
	virtual void __fastcall Clear();
	virtual void __fastcall Render(TAXWGDI* Dest);
	virtual void __fastcall RenderDirty(TAXWGDI* Dest);
public:
	/* TAXWGDIBMP.Destroy */ inline __fastcall virtual ~TAXWGDIBMPTrans() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 GDIMETRIC_CHECKBOXSIZE = System::Int8(0xd);
extern DELPHI_PACKAGE TFloatMatrix DefaultMatrix;
extern DELPHI_PACKAGE void __fastcall DrawExcelLine(const HDC ADC, Xc12datastylesheet5::TXc12CellBorderStyle AStyle, unsigned AColor, int AX1, int AY1, int AX2, int AY2);
extern DELPHI_PACKAGE System::Byte __fastcall BrightColorChannel(const System::Byte Channel, const float Pct);
}	/* namespace Xbookpaintgdi2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKPAINTGDI2)
using namespace Xbookpaintgdi2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookpaintgdi2HPP
