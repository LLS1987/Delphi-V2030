// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSChart5.pas' rev: 35.00 (Windows)

#ifndef Xlschart5HPP
#define Xlschart5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Math.hpp>
#include <System.Contnrs.hpp>
#include <xpgParseDrawing.hpp>
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlschart5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSChartLayout;
class DELPHICLASS TXLSChartSerieValue;
class DELPHICLASS TXLSChartCatAxisItem;
class DELPHICLASS TXLSChartCatAxis;
class DELPHICLASS TXLSChartLegendItem;
class DELPHICLASS TXLSChartLegend;
class DELPHICLASS TXLSChartTitle;
class DELPHICLASS TXLSChartSerie;
class DELPHICLASS TXLSChartCamera3D;
class DELPHICLASS TXLSChart;
class DELPHICLASS TXLSCharts;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXLSChartType : unsigned char { xctArea, xctArea3d, xctPie, xctPie3d, xctDoughnut, xctOfPie, xctSurface, xctSurface3d, xctLine, xctLine3d, xctStock, xctRadar, xctScatter, xctBar, xctBar3d, xctBubble };

class PASCALIMPLEMENTATION TXLSChartLayout : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	double __fastcall GetX2();
	double __fastcall GetY2();
	void __fastcall SetX2(const double Value);
	void __fastcall SetY2(const double Value);
	
protected:
	double FX;
	double FY;
	double FW;
	double FH;
	unsigned FColor;
	bool FAssigned;
	
public:
	__property double X = {read=FX, write=FX};
	__property double Y = {read=FY, write=FY};
	__property double W = {read=FW, write=FW};
	__property double H = {read=FH, write=FH};
	__property double X1 = {read=FX, write=FX};
	__property double Y1 = {read=FY, write=FY};
	__property double X2 = {read=GetX2, write=SetX2};
	__property double Y2 = {read=GetY2, write=SetY2};
	__property unsigned Color = {read=FColor, write=FColor, nodefault};
	__property bool Assigned = {read=FAssigned, write=FAssigned, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXLSChartLayout() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSChartLayout() { }
	
};


class PASCALIMPLEMENTATION TXLSChartSerieValue : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	double FValue;
	unsigned FColor;
	
public:
	__property double Value = {read=FValue, write=FValue};
	__property unsigned Color = {read=FColor, write=FColor, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXLSChartSerieValue() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSChartSerieValue() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSChartCatAxisItem : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::Classes::TStringList* FValues;
	
public:
	__fastcall TXLSChartCatAxisItem();
	__fastcall virtual ~TXLSChartCatAxisItem();
	__property System::Classes::TStringList* Values = {read=FValues};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSChartCatAxis : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSChartCatAxisItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSChartCatAxisItem* __fastcall GetItems(int Index);
	Xc12utils5::PXLS3dCellArea __fastcall GetPSourceArea();
	
protected:
	bool FValid;
	Xc12utils5::TXLS3dCellArea FSourceArea;
	
public:
	__fastcall TXLSChartCatAxis();
	HIDESBASE TXLSChartCatAxisItem* __fastcall Add();
	__property bool Valid = {read=FValid, write=FValid, nodefault};
	__property Xc12utils5::TXLS3dCellArea SourceArea = {read=FSourceArea, write=FSourceArea};
	__property Xc12utils5::PXLS3dCellArea PSourceArea = {read=GetPSourceArea};
	__property TXLSChartCatAxisItem* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXLSChartCatAxis() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSChartLegendItem : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FText;
	unsigned FColor;
	
public:
	__property System::UnicodeString Text = {read=FText, write=FText};
	__property unsigned Color = {read=FColor, write=FColor, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXLSChartLegendItem() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSChartLegendItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSChartLegend : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSChartLegendItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSChartLegendItem* __fastcall GetItems(int Index);
	
protected:
	TXLSChartLayout* FLayout;
	
public:
	__fastcall TXLSChartLegend();
	__fastcall virtual ~TXLSChartLegend();
	HIDESBASE TXLSChartLegendItem* __fastcall Add(const System::UnicodeString AText);
	__property TXLSChartLayout* Layout = {read=FLayout};
	__property TXLSChartLegendItem* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSChartTitle : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TXLSChartLayout* FLayout;
	System::UnicodeString FText;
	double FFontSize;
	
public:
	__fastcall TXLSChartTitle();
	__fastcall virtual ~TXLSChartTitle();
	__property TXLSChartLayout* Layout = {read=FLayout};
	__property System::UnicodeString Text = {read=FText, write=FText};
	__property double FontSize = {read=FFontSize, write=FFontSize};
};


class PASCALIMPLEMENTATION TXLSChartSerie : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSChartSerieValue* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSChartSerieValue* __fastcall GetItems(int Index);
	
protected:
	TXLSChart* FParent;
	unsigned FColor;
	System::UnicodeString FLable;
	double FMinVal;
	double FMaxVal;
	
public:
	__fastcall TXLSChartSerie(TXLSChart* AParent);
	__fastcall virtual ~TXLSChartSerie();
	HIDESBASE TXLSChartSerieValue* __fastcall Add(const double AValue);
	__property unsigned Color = {read=FColor, write=FColor, nodefault};
	__property System::UnicodeString Lable = {read=FLable, write=FLable};
	__property double MinVal = {read=FMinVal, write=FMinVal};
	__property double MaxVal = {read=FMaxVal, write=FMaxVal};
	__property TXLSChartSerieValue* Items[int Index] = {read=GetItems/*, default*/};
};


class PASCALIMPLEMENTATION TXLSChartCamera3D : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	double FRotateX;
	double FRotateY;
	double FLens;
	
public:
	__fastcall TXLSChartCamera3D();
	__property double RotateX = {read=FRotateX, write=FRotateX};
	__property double RotateY = {read=FRotateY, write=FRotateY};
	__property double Lens = {read=FLens, write=FLens};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSChartCamera3D() { }
	
};


class PASCALIMPLEMENTATION TXLSChart : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSChartSerie* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSChartSerie* __fastcall GetItems(int Index);
	
protected:
	Xpgparsedrawing::TCT_TwoCellAnchor* FAnchor;
	TXLSChartLayout* FLayout;
	unsigned FColor;
	TXLSChartCamera3D* FCamera;
	TXLSChartTitle* FTitle;
	TXLSChartLegend* FLegend;
	double FMinVal;
	double FMaxVal;
	TXLSChartType FChartType;
	bool FHasValAxis;
	bool FHasCatAxis;
	TXLSChartCatAxis* FCatAxis;
	double FGapWidth;
	
public:
	__fastcall TXLSChart();
	__fastcall virtual ~TXLSChart();
	HIDESBASE TXLSChartSerie* __fastcall Add();
	int __fastcall SerieMaxCount();
	__property Xpgparsedrawing::TCT_TwoCellAnchor* Anchor = {read=FAnchor, write=FAnchor};
	__property double MinVal = {read=FMinVal, write=FMinVal};
	__property double MaxVal = {read=FMaxVal, write=FMaxVal};
	__property TXLSChartType ChartType = {read=FChartType, write=FChartType, nodefault};
	__property bool HasValAxis = {read=FHasValAxis, write=FHasValAxis, nodefault};
	__property bool HasCatAxis = {read=FHasCatAxis, write=FHasCatAxis, nodefault};
	__property TXLSChartCamera3D* Camera = {read=FCamera};
	__property TXLSChartTitle* Title = {read=FTitle};
	__property TXLSChartLegend* Legend = {read=FLegend};
	__property TXLSChartCatAxis* CatAxis = {read=FCatAxis};
	__property TXLSChartLayout* Layout = {read=FLayout};
	__property double GapWidth = {read=FGapWidth, write=FGapWidth};
	__property unsigned Color = {read=FColor, write=FColor, nodefault};
	__property TXLSChartSerie* Items[int Index] = {read=GetItems/*, default*/};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCharts : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSChart* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSChart* __fastcall GetItems(int Index);
	
public:
	__fastcall TXLSCharts();
	__fastcall virtual ~TXLSCharts();
	HIDESBASE TXLSChart* __fastcall Add();
	__property TXLSChart* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const int XLSCHART_DEF_COLOR_FILL = int(0xffffff);
static const System::Int8 XLSCHART_DEF_COLOR_LINE = System::Int8(0x0);
}	/* namespace Xlschart5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSCHART5)
using namespace Xlschart5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlschart5HPP
