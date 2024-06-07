// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookDrawing2.pas' rev: 35.00 (Windows)

#ifndef Xbookdrawing2HPP
#define Xbookdrawing2HPP

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
#include <Vcl.Graphics.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <System.Math.hpp>
#include <xpgParseDrawing.hpp>
#include <xpgParseDrawingCommon.hpp>
#include <xpgParseChart.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataWorksheet5.hpp>
#include <Xc12Graphics.hpp>
#include <Xc12DataComments5.hpp>
#include <Xc12Manager5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XLSUtils5.hpp>
#include <XLSColumn5.hpp>
#include <XLSRow5.hpp>
#include <XLSComment5.hpp>
#include <XLSDrawing5.hpp>
#include <XLSTools5.hpp>
#include <XBookTypes2.hpp>
#include <XBookSysVar2.hpp>
#include <XBookUtils2.hpp>
#include <XBookPaintGDI2.hpp>
#include <XBookPaint2.hpp>
#include <XBookWindows2.hpp>
#include <XBookSkin2.hpp>
#include <XBookColumns2.hpp>
#include <XBookRows2.hpp>
#include <XBookRichPainter2.hpp>
#include <XBookGeometry2.hpp>
#include <XBookGeometryChart2.hpp>
#include <XLSEncodeFmla5.hpp>
#include <XLSFormulaTypes5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookdrawing2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXBookDrawingObject;
class DELPHICLASS TXBookDrawingObjectComment;
class DELPHICLASS TXBookDrawingObjectAnchor;
class DELPHICLASS TXBookDrawingObjectImage;
class DELPHICLASS TXBookDrawingObjectCommon;
class DELPHICLASS TXBookDrawingObjectTextBox;
class DELPHICLASS TXBookDrawingObjectChart;
class DELPHICLASS TXBookDrawing;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXBookDrawingObject : public Xbookwindows2::TXSSClientWindow
{
	typedef Xbookwindows2::TXSSClientWindow inherited;
	
public:
	__fastcall TXBookDrawingObject(Xbookwindows2::TXSSWindow* AParent);
	virtual void __fastcall GetPos(/* out */ int &AC1, /* out */ int &AC1Offs, /* out */ int &AR1, /* out */ int &AR1Offs, /* out */ int &AC2, /* out */ int &AC2Offs, /* out */ int &AR2, /* out */ int &AR2Offs) = 0 ;
public:
	/* TXSSWindow.Destroy */ inline __fastcall virtual ~TXBookDrawingObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXBookDrawingObjectComment : public TXBookDrawingObject
{
	typedef TXBookDrawingObject inherited;
	
protected:
	Xlscomment5::TXLSComment* FComment;
	Xbooktypes2::TXYPoint FArrowStart;
	Xbooktypes2::TXYPoint FArrowEnd;
	
public:
	__fastcall TXBookDrawingObjectComment(Xbookwindows2::TXSSWindow* AParent, Xlscomment5::TXLSComment* AComment);
	virtual void __fastcall Paint();
	virtual void __fastcall GetPos(/* out */ int &AC1, /* out */ int &AC1Offs, /* out */ int &AR1, /* out */ int &AR1Offs, /* out */ int &AC2, /* out */ int &AC2Offs, /* out */ int &AR2, /* out */ int &AR2Offs);
	__property Xlscomment5::TXLSComment* Comment = {read=FComment};
public:
	/* TXSSWindow.Destroy */ inline __fastcall virtual ~TXBookDrawingObjectComment() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXBookDrawingObjectAnchor : public TXBookDrawingObject
{
	typedef TXBookDrawingObject inherited;
	
protected:
	Xpgparsedrawing::TCT_TwoCellAnchor* FAnchor;
	
public:
	__fastcall TXBookDrawingObjectAnchor(Xbookwindows2::TXSSWindow* AParent, Xpgparsedrawing::TCT_TwoCellAnchor* AAnchor);
	virtual void __fastcall GetPos(/* out */ int &AC1, /* out */ int &AC1Offs, /* out */ int &AR1, /* out */ int &AR1Offs, /* out */ int &AC2, /* out */ int &AC2Offs, /* out */ int &AR2, /* out */ int &AR2Offs);
	__property Xpgparsedrawing::TCT_TwoCellAnchor* Anchor = {read=FAnchor, write=FAnchor};
public:
	/* TXSSWindow.Destroy */ inline __fastcall virtual ~TXBookDrawingObjectAnchor() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXBookDrawingObjectImage : public TXBookDrawingObjectAnchor
{
	typedef TXBookDrawingObjectAnchor inherited;
	
protected:
	Vcl::Graphics::TBitmap* FBitmap;
	Xlsdrawing5::TXLSDrawingImage* FXLSImage;
	
public:
	__fastcall TXBookDrawingObjectImage(Xbookwindows2::TXSSWindow* AParent, Xlsdrawing5::TXLSDrawingImage* AXLSImage);
	__fastcall virtual ~TXBookDrawingObjectImage();
	virtual void __fastcall Paint();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXBookDrawingObjectCommon : public TXBookDrawingObjectAnchor
{
	typedef TXBookDrawingObjectAnchor inherited;
	
protected:
	void __fastcall ApplySpPr(Xpgparsedrawingcommon::TCT_ShapeProperties* ASpPr);
	
public:
	__fastcall TXBookDrawingObjectCommon(Xbookwindows2::TXSSWindow* AParent, Xpgparsedrawing::TCT_TwoCellAnchor* AAnchor);
public:
	/* TXSSWindow.Destroy */ inline __fastcall virtual ~TXBookDrawingObjectCommon() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXBookDrawingObjectTextBox : public TXBookDrawingObjectCommon
{
	typedef TXBookDrawingObjectCommon inherited;
	
protected:
	Xlsdrawing5::TXLSDrawingTextBox* FXLSTextBox;
	Xlstools5::TXLSFormattedText* FText;
	
public:
	__fastcall TXBookDrawingObjectTextBox(Xc12manager5::TXc12Manager* AManager, Xbookwindows2::TXSSWindow* AParent, Xlsdrawing5::TXLSDrawingTextBox* AXLSTextBox);
	__fastcall virtual ~TXBookDrawingObjectTextBox();
	virtual void __fastcall Paint();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXBookDrawingObjectChart : public TXBookDrawingObjectCommon
{
	typedef TXBookDrawingObjectCommon inherited;
	
protected:
	Xlsdrawing5::TXLSDrawingChart* FDrwData;
	Xbookgeometrychart2::TXSSChartItemChartSpace* FChartSpace;
	Xbookgeometry2::TXSSGeometryRect* FGeometry;
	Xbookgeometrychart2::TXSSChartData* FChartData;
	double __fastcall MapX(double AX);
	double __fastcall MapY(double AY);
	void __fastcall PaintGeometry(Xbookgeometry2::TXSSGeometry* AGeom);
	
public:
	__fastcall TXBookDrawingObjectChart(Xc12manager5::TXc12Manager* AManager, Xbookwindows2::TXSSWindow* AParent, Xlsdrawing5::TXLSDrawingChart* AChartData);
	__fastcall virtual ~TXBookDrawingObjectChart();
	virtual void __fastcall Paint();
	void __fastcall Build();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXBookDrawing : public Xbookwindows2::TXSSClientWindow
{
	typedef Xbookwindows2::TXSSClientWindow inherited;
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	Xlsdrawing5::TXLSDrawing* FXLSDrawing;
	bool FEnabled;
	Xbookcolumns2::TXLSBookColumns* FColumns;
	Xbookrows2::TXLSBookRows* FRows;
	TXBookDrawingObject* FCurrObj;
	TXBookDrawingObjectImage* __fastcall AddImage(Xlsdrawing5::TXLSDrawingImage* AXLSImage);
	TXBookDrawingObjectTextBox* __fastcall AddTextBox(Xlsdrawing5::TXLSDrawingTextBox* AXLSTextBox);
	TXBookDrawingObjectChart* __fastcall AddChart(Xlsdrawing5::TXLSDrawingChart* AChart);
	void __fastcall CalcObject(TXBookDrawingObject* AChild);
	
public:
	__fastcall TXBookDrawing(Xbookwindows2::TXSSClientWindow* AParent, Xc12manager5::TXc12Manager* AManager, Xbookpaintgdi2::TAXWGDI* AGDI, Xbookskin2::TXBookSkinStyle ASkinStyle, Xbookcolumns2::TXLSBookColumns* AColumns, Xbookrows2::TXLSBookRows* ARows);
	__fastcall virtual ~TXBookDrawing();
	void __fastcall Clear();
	virtual void __fastcall Paint();
	void __fastcall PaintPrint();
	virtual bool __fastcall Hit(const int X, const int Y);
	virtual bool __fastcall ClientHit(const int X, const int Y);
	virtual void __fastcall SetSize(const int pX1, const int pY1, const int pX2, const int pY2);
	void __fastcall SelectObject(const int AIndex);
	void __fastcall AddComment(Xlscomment5::TXLSComment* AComment);
	void __fastcall RemoveComment(Xlscomment5::TXLSComment* AComment);
	void __fastcall CalcObjects();
	void __fastcall LoadObjects(Xc12dataworksheet5::TXc12DataWorksheet* ASheet, Xlsdrawing5::TXLSDrawing* AXLSDrawing);
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xbookdrawing2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKDRAWING2)
using namespace Xbookdrawing2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookdrawing2HPP
