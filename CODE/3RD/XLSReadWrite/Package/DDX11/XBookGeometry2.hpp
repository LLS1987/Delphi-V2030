// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookGeometry2.pas' rev: 35.00 (Windows)

#ifndef Xbookgeometry2HPP
#define Xbookgeometry2HPP

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
#include <Xc12Utils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XLSUtils5.hpp>
#include <XLSTools5.hpp>
#include <XBookPaintGDI2.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookgeometry2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXSSGeometryPoint;
class DELPHICLASS TXSSGeometryStyle;
class DELPHICLASS TXSSGeometry;
class DELPHICLASS TXSSGeometryMarker;
class DELPHICLASS TXSSGeometryLine;
class DELPHICLASS TXSSGeometryPolyline;
class DELPHICLASS TXSSGeometryPolygon;
class DELPHICLASS TXSSGeometryRect;
class DELPHICLASS TXSSGeometryCircle;
class DELPHICLASS TXSSGeometryPizzaSlice;
class DELPHICLASS TXSSGeometryText;
class DELPHICLASS TXSSGeometryRichText;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXSSGeometryType : unsigned char { xgtMarker, xgtRect, xgtCircle, xgtPizzaSlice, xgtLine, xgtPolyline, xgtPolygon, xgtText, xgtRichText };

class PASCALIMPLEMENTATION TXSSGeometryPoint : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	double FX;
	double FY;
	double FZ;
	
public:
	void __fastcall Assign(TXSSGeometryPoint* APoint);
	void __fastcall Move(double ADX, double ADY);
	__property double X = {read=FX, write=FX};
	__property double Y = {read=FY, write=FY};
	__property double Z = {read=FZ, write=FZ};
public:
	/* TObject.Create */ inline __fastcall TXSSGeometryPoint() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXSSGeometryPoint() { }
	
};


class PASCALIMPLEMENTATION TXSSGeometryStyle : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	unsigned FColor;
	unsigned FLineColor;
	double FLineWidth;
	
public:
	__fastcall TXSSGeometryStyle();
	__property unsigned Color = {read=FColor, write=FColor, nodefault};
	__property unsigned LineColor = {read=FLineColor, write=FLineColor, nodefault};
	__property double LineWidth = {read=FLineWidth, write=FLineWidth};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXSSGeometryStyle() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSGeometry : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TXSSGeometry* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXSSGeometry* __fastcall GetItems(int Index);
	
protected:
	Xbookpaintgdi2::TAXWGDI* FGDI;
	System::Contnrs::TObjectList* FChilds;
	TXSSGeometryStyle* FStyle;
	
public:
	__fastcall TXSSGeometry(Xbookpaintgdi2::TAXWGDI* AGDI);
	__fastcall virtual ~TXSSGeometry();
	void __fastcall Clear();
	virtual TXSSGeometryType __fastcall Type_() = 0 ;
	int __fastcall Count();
	bool __fastcall HasChilds();
	TXSSGeometry* __fastcall Add(TXSSGeometryType AType);
	TXSSGeometryMarker* __fastcall AddMarker();
	TXSSGeometryRect* __fastcall AddRect();
	TXSSGeometryLine* __fastcall AddLine();
	TXSSGeometryPolyline* __fastcall AddPolyline();
	TXSSGeometryPolygon* __fastcall AddPolygon();
	TXSSGeometryCircle* __fastcall AddCircle();
	TXSSGeometryPizzaSlice* __fastcall AddPizzaSlice();
	TXSSGeometryText* __fastcall AddText()/* overload */;
	TXSSGeometryText* __fastcall AddText(Xc12datastylesheet5::TXc12Font* AFont, Xc12datastylesheet5::TXc12VertAlignment AVertAlign, Xc12datastylesheet5::TXc12HorizAlignment AHorizAlign, double AX, double AY, System::UnicodeString AText)/* overload */;
	TXSSGeometryRichText* __fastcall AddRichText();
	TXSSGeometryRect* __fastcall AsRect();
	virtual void __fastcall Move(double ADX, double ADY);
	__property TXSSGeometryStyle* Style = {read=FStyle};
	__property TXSSGeometry* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TXSSGeometryMarkerStyle : unsigned char { xgmsNone, xgmsCircle, xgmsDash, xgmsDiamond, xgmsDot, xgmsPlus, xgmsSquare, xgmsStar, xgmsTriangle, xgmsX };

class PASCALIMPLEMENTATION TXSSGeometryMarker : public TXSSGeometry
{
	typedef TXSSGeometry inherited;
	
protected:
	TXSSGeometryPoint* FPt;
	TXSSGeometryMarkerStyle FMStyle;
	double FSize;
	
public:
	__fastcall TXSSGeometryMarker(Xbookpaintgdi2::TAXWGDI* AGDI);
	__fastcall virtual ~TXSSGeometryMarker();
	virtual TXSSGeometryType __fastcall Type_();
	virtual void __fastcall Move(double ADX, double ADY);
	__property TXSSGeometryPoint* Pt = {read=FPt};
	__property TXSSGeometryMarkerStyle MStyle = {read=FMStyle, write=FMStyle, nodefault};
	__property double Size = {read=FSize, write=FSize};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSGeometryLine : public TXSSGeometry
{
	typedef TXSSGeometry inherited;
	
protected:
	TXSSGeometryPoint* FPt1;
	TXSSGeometryPoint* FPt2;
	
public:
	__fastcall TXSSGeometryLine(Xbookpaintgdi2::TAXWGDI* AGDI);
	__fastcall virtual ~TXSSGeometryLine();
	virtual TXSSGeometryType __fastcall Type_();
	void __fastcall Assign(TXSSGeometryLine* ALine);
	void __fastcall SetSize(double AX1, double AY1, double AX2, double AY2);
	virtual void __fastcall Move(double ADX, double ADY);
	__property TXSSGeometryPoint* Pt1 = {read=FPt1};
	__property TXSSGeometryPoint* Pt2 = {read=FPt2};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSGeometryPolyline : public TXSSGeometry
{
	typedef TXSSGeometry inherited;
	
public:
	TXSSGeometryPoint* operator[](int Index) { return this->Pts[Index]; }
	
private:
	TXSSGeometryPoint* __fastcall GetPts(int Index);
	
protected:
	System::Contnrs::TObjectList* FPts;
	
public:
	__fastcall TXSSGeometryPolyline(Xbookpaintgdi2::TAXWGDI* AGDI);
	__fastcall virtual ~TXSSGeometryPolyline();
	virtual TXSSGeometryType __fastcall Type_();
	HIDESBASE void __fastcall Add(double AX, double AY);
	void __fastcall Close();
	void __fastcall Assign(TXSSGeometryPolyline* APolyline);
	virtual void __fastcall Move(double ADX, double ADY);
	HIDESBASE int __fastcall Count();
	__property TXSSGeometryPoint* Pts[int Index] = {read=GetPts/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSGeometryPolygon : public TXSSGeometryPolyline
{
	typedef TXSSGeometryPolyline inherited;
	
public:
	virtual TXSSGeometryType __fastcall Type_();
public:
	/* TXSSGeometryPolyline.Create */ inline __fastcall TXSSGeometryPolygon(Xbookpaintgdi2::TAXWGDI* AGDI) : TXSSGeometryPolyline(AGDI) { }
	/* TXSSGeometryPolyline.Destroy */ inline __fastcall virtual ~TXSSGeometryPolygon() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSGeometryRect : public TXSSGeometryLine
{
	typedef TXSSGeometryLine inherited;
	
public:
	__fastcall TXSSGeometryRect(Xbookpaintgdi2::TAXWGDI* AGDI);
	__fastcall virtual ~TXSSGeometryRect();
	virtual TXSSGeometryType __fastcall Type_();
	HIDESBASE void __fastcall Assign(TXSSGeometryRect* ARect);
	double __fastcall Width();
	double __fastcall Height();
	double __fastcall MidX();
	double __fastcall MidY();
	void __fastcall CenterHoriz(double AWidth);
	void __fastcall CenterVert(double AHeight);
	void __fastcall Shrink(double ALeftRight, double ATopBottom);
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXSSGeometryCircle : public TXSSGeometry
{
	typedef TXSSGeometry inherited;
	
protected:
	TXSSGeometryPoint* FPt;
	TXSSGeometryRect* FRefRect;
	double FMMScale;
	
public:
	__fastcall TXSSGeometryCircle(Xbookpaintgdi2::TAXWGDI* AGDI);
	__fastcall virtual ~TXSSGeometryCircle();
	virtual TXSSGeometryType __fastcall Type_();
	__property TXSSGeometryPoint* Pt = {read=FPt};
	__property TXSSGeometryRect* RefRect = {read=FRefRect, write=FRefRect};
	__property double MMScale = {read=FMMScale, write=FMMScale};
};


class PASCALIMPLEMENTATION TXSSGeometryPizzaSlice : public TXSSGeometryRect
{
	typedef TXSSGeometryRect inherited;
	
protected:
	double FStartAngle;
	double FEndAngle;
	double __fastcall GetRadius();
	
public:
	virtual TXSSGeometryType __fastcall Type_();
	__property double StartAngle = {read=FStartAngle, write=FStartAngle};
	__property double EndAngle = {read=FEndAngle, write=FEndAngle};
	__property double MMRadius = {read=GetRadius};
public:
	/* TXSSGeometryRect.Create */ inline __fastcall TXSSGeometryPizzaSlice(Xbookpaintgdi2::TAXWGDI* AGDI) : TXSSGeometryRect(AGDI) { }
	/* TXSSGeometryRect.Destroy */ inline __fastcall virtual ~TXSSGeometryPizzaSlice() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSGeometryText : public TXSSGeometry
{
	typedef TXSSGeometry inherited;
	
protected:
	TXSSGeometryPoint* FPt;
	System::UnicodeString FText;
	Xc12datastylesheet5::TXc12Font* FFont;
	Xc12datastylesheet5::TXc12HorizAlignment FHorizAlign;
	Xc12datastylesheet5::TXc12VertAlignment FVertAlign;
	
public:
	__fastcall TXSSGeometryText(Xbookpaintgdi2::TAXWGDI* AGDI);
	__fastcall virtual ~TXSSGeometryText();
	virtual TXSSGeometryType __fastcall Type_();
	void __fastcall Assign(TXSSGeometryText* AText);
	virtual void __fastcall Move(double ADX, double ADY);
	__property TXSSGeometryPoint* Pt = {read=FPt};
	__property System::UnicodeString Text = {read=FText, write=FText};
	__property Xc12datastylesheet5::TXc12Font* Font = {read=FFont, write=FFont};
	__property Xc12datastylesheet5::TXc12HorizAlignment HorizAlign = {read=FHorizAlign, write=FHorizAlign, nodefault};
	__property Xc12datastylesheet5::TXc12VertAlignment VertAlign = {read=FVertAlign, write=FVertAlign, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSGeometryRichText : public TXSSGeometry
{
	typedef TXSSGeometry inherited;
	
protected:
	Xlstools5::TXLSFormattedText* FText;
	TXSSGeometryPoint* FPt;
	Xc12datastylesheet5::TXc12HorizAlignment FHorizAlign;
	Xc12datastylesheet5::TXc12VertAlignment FVertAlign;
	
public:
	__fastcall TXSSGeometryRichText(Xbookpaintgdi2::TAXWGDI* AGDI);
	__fastcall virtual ~TXSSGeometryRichText();
	virtual TXSSGeometryType __fastcall Type_();
	HIDESBASE void __fastcall Add(System::UnicodeString AText, Xc12datastylesheet5::TXc12Font* AFont);
	virtual void __fastcall Move(double ADX, double ADY);
	__property TXSSGeometryPoint* Pt = {read=FPt};
	__property Xlstools5::TXLSFormattedText* Text = {read=FText};
	__property Xc12datastylesheet5::TXc12HorizAlignment HorizAlign = {read=FHorizAlign, write=FHorizAlign, nodefault};
	__property Xc12datastylesheet5::TXc12VertAlignment VertAlign = {read=FVertAlign, write=FVertAlign, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xbookgeometry2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKGEOMETRY2)
using namespace Xbookgeometry2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookgeometry2HPP
