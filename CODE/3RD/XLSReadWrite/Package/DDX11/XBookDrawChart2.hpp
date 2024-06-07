// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookDrawChart2.pas' rev: 35.00 (Windows)

#ifndef Xbookdrawchart2HPP
#define Xbookdrawchart2HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Xc12Utils5.hpp>
#include <XBook_System_2.hpp>
#include <XBookWindows2.hpp>
#include <XBookSkin2.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookdrawchart2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXSSDrwChartData;
class DELPHICLASS TXSSDrawObject;
class DELPHICLASS TXSSDrwChartLayout;
class DELPHICLASS TXSSDrwChartPlotArea;
class DELPHICLASS TXSSDrwChart;
class DELPHICLASS TXSSDrwChartWin;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSDrwChartData : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xbookskin2::TXLSBookSkin* FSkin;
	
public:
	__fastcall TXSSDrwChartData(Xbookskin2::TXLSBookSkin* ASkin);
	virtual int __fastcall CvtX(const double AX) = 0 ;
	virtual int __fastcall CvtY(const double AY) = 0 ;
	virtual int __fastcall CvtW(const double AW) = 0 ;
	virtual int __fastcall CvtH(const double AH) = 0 ;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXSSDrwChartData() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSDrawObject : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TXSSDrwChartData* FData;
	
public:
	__fastcall TXSSDrawObject(TXSSDrwChartData* AData);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXSSDrawObject() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXSSDrwChartLayout : public TXSSDrawObject
{
	typedef TXSSDrawObject inherited;
	
private:
	Xc12utils5::PXc12Color __fastcall GetColor();
	
protected:
	double FX;
	double FY;
	double FW;
	double FH;
	Xc12utils5::TXc12Color FColor;
	
public:
	__fastcall TXSSDrwChartLayout(TXSSDrwChartData* AData);
	void __fastcall Paint();
	__property double X = {read=FX, write=FX};
	__property double Y = {read=FY, write=FY};
	__property double W = {read=FW, write=FW};
	__property double H = {read=FH, write=FH};
	__property Xc12utils5::PXc12Color Color = {read=GetColor};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXSSDrwChartLayout() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSDrwChartPlotArea : public TXSSDrawObject
{
	typedef TXSSDrawObject inherited;
	
protected:
	TXSSDrwChartLayout* FLayout;
	
public:
	__fastcall TXSSDrwChartPlotArea(TXSSDrwChartData* AData);
	__fastcall virtual ~TXSSDrwChartPlotArea();
	void __fastcall Paint();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSDrwChart : public TXSSDrwChartData
{
	typedef TXSSDrwChartData inherited;
	
protected:
	int FX1;
	int FY1;
	int FX2;
	int FY2;
	TXSSDrwChartPlotArea* FPlotArea;
	
public:
	__fastcall TXSSDrwChart(const int AX1, const int AY1, const int AX2, const int AY2);
	__fastcall virtual ~TXSSDrwChart();
	void __fastcall Paint();
	virtual int __fastcall CvtX(const double AX);
	virtual int __fastcall CvtY(const double AY);
	virtual int __fastcall CvtW(const double AW);
	virtual int __fastcall CvtH(const double AH);
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXSSDrwChartWin : public Xbookwindows2::TXSSClientWindow
{
	typedef Xbookwindows2::TXSSClientWindow inherited;
	
private:
	Xc12utils5::PXc12Color __fastcall GetColor();
	Xc12utils5::PXc12Color __fastcall GetLineColor();
	
protected:
	Xc12utils5::TXc12Color FColor;
	Xc12utils5::TXc12Color FLineColor;
	TXSSDrwChart* FChart;
	
public:
	__fastcall TXSSDrwChartWin(Xbookwindows2::TXSSWindow* AParent);
	__fastcall virtual ~TXSSDrwChartWin();
	virtual void __fastcall Paint();
	__property Xc12utils5::PXc12Color Color = {read=GetColor};
	__property Xc12utils5::PXc12Color LineColor = {read=GetLineColor};
};


//-- var, const, procedure ---------------------------------------------------
static const int XSSChartColorBackg = int(0xffffff);
static const System::Int8 XSSChartColorLine = System::Int8(0x0);
}	/* namespace Xbookdrawchart2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKDRAWCHART2)
using namespace Xbookdrawchart2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookdrawchart2HPP
