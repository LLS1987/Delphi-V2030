// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookGeometryChart2.pas' rev: 35.00 (Windows)

#ifndef Xbookgeometrychart2HPP
#define Xbookgeometrychart2HPP

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
#include <xpgParseDrawingCommon.hpp>
#include <xpgParseChart.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XLSUtils5.hpp>
#include <XLSDrawing5.hpp>
#include <XLSRelCells5.hpp>
#include <XBookPaintGDI2.hpp>
#include <XBookGeometry2.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookgeometrychart2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXSSChartCharRun;
class DELPHICLASS TXSSChartCharRuns;
class DELPHICLASS TXSSChartParagraph;
class DELPHICLASS TXSSChartItemDataPoint;
class DELPHICLASS TXSSChartItemDataPoints;
class DELPHICLASS TXSSChartData;
class DELPHICLASS TXSSChartItem;
class DELPHICLASS TXSSChartItemTitle;
class DELPHICLASS TXSSChartItemChart;
class DELPHICLASS TXSSChartItemLegendItem;
class DELPHICLASS TXSSChartItemLegend;
class DELPHICLASS TXSSChartItemAxis;
class DELPHICLASS TXSSChartItemValAxis;
class DELPHICLASS TXSSChartItemValAxises;
class DELPHICLASS TXSSChartItemCatAxis;
class DELPHICLASS TXSSChartItemChartSerie;
class DELPHICLASS TXSSChartItemChartSeries;
class DELPHICLASS TXSSChartItemSeriesChart;
class DELPHICLASS TXSSChartItemBarChart;
class DELPHICLASS TXSSChartItemLineChart;
class DELPHICLASS TXSSChartItemAreaChart;
class DELPHICLASS TXSSChartItemXYChart;
class DELPHICLASS TXSSChartItemScatterChart;
class DELPHICLASS TXSSChartItemBubbleChart;
class DELPHICLASS TXSSChartItemPieChart;
class DELPHICLASS TXSSChartItemRadarChart;
class DELPHICLASS TXSSChartItemPlotArea;
class DELPHICLASS TXSSChartItemChartSpace;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TXSSChartCharRun : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FText;
	Xc12datastylesheet5::TXc12Font* FFont;
	double FWidth;
	double FHeight;
	
public:
	__fastcall virtual ~TXSSChartCharRun();
	__property System::UnicodeString Text = {read=FText, write=FText};
	__property Xc12datastylesheet5::TXc12Font* Font = {read=FFont, write=FFont};
	__property double Width = {read=FWidth, write=FWidth};
	__property double Height = {read=FHeight, write=FHeight};
public:
	/* TObject.Create */ inline __fastcall TXSSChartCharRun() : System::TObject() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSChartCharRuns : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXSSChartCharRun* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXSSChartCharRun* __fastcall GetItems(int Index);
	
public:
	__fastcall TXSSChartCharRuns();
	HIDESBASE TXSSChartCharRun* __fastcall Add();
	__property TXSSChartCharRun* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXSSChartCharRuns() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSChartParagraph : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString __fastcall GetPlainText();
	void __fastcall SetPlainText(const System::UnicodeString Value);
	
protected:
	TXSSChartCharRuns* FRuns;
	TXSSChartData* FData;
	Xc12datastylesheet5::TXc12Font* FDefFont;
	void __fastcall DoCharRun(Xpgparsedrawingcommon::TCT_RegularTextRun* ACharRun);
	void __fastcall DoPara(Xpgparsedrawingcommon::TCT_TextParagraph* APara);
	void __fastcall DoParas(Xpgparsedrawingcommon::TCT_TextParagraphXpgList* AParas);
	
public:
	__fastcall TXSSChartParagraph(TXSSChartData* AData, System::UnicodeString AText, Xc12datastylesheet5::TXc12Font* AFont)/* overload */;
	__fastcall TXSSChartParagraph(TXSSChartData* AData, Xpgparsedrawingcommon::TCT_TextParagraphXpgList* AParas, Xc12datastylesheet5::TXc12Font* ADefFont)/* overload */;
	__fastcall virtual ~TXSSChartParagraph();
	void __fastcall UpdateFont(Xc12datastylesheet5::TXc12Font* AFont);
	__property TXSSChartCharRuns* Runs = {read=FRuns};
	__property System::UnicodeString PlainText = {read=GetPlainText, write=SetPlainText};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSChartItemDataPoint : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FIndex;
	Xlsdrawing5::TXLSDrwShapeProperies* FSpPr;
	TXSSChartParagraph* FParas;
	TXSSChartData* FData;
	
public:
	__fastcall TXSSChartItemDataPoint(TXSSChartData* AData)/* overload */;
	__fastcall TXSSChartItemDataPoint(TXSSChartData* AData, Xpgparsechart::TCT_DPt* ADp)/* overload */;
	__fastcall virtual ~TXSSChartItemDataPoint();
	void __fastcall AddParas(System::UnicodeString AText, Xc12datastylesheet5::TXc12Font* AFont)/* overload */;
	void __fastcall AddParas(Xpgparsedrawingcommon::TCT_TextParagraphXpgList* AParas)/* overload */;
	unsigned __fastcall FillRGB(unsigned ADefault);
	__property int Index = {read=FIndex, write=FIndex, nodefault};
	__property Xlsdrawing5::TXLSDrwShapeProperies* SpPr = {read=FSpPr};
	__property TXSSChartParagraph* Paras = {read=FParas};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSChartItemDataPoints : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
protected:
	TXSSChartData* FData;
	TXSSChartItemDataPoint* __fastcall GetItems(int Index);
	TXSSChartItemDataPoint* __fastcall AddDp(int AIndex);
	
public:
	__fastcall TXSSChartItemDataPoints(TXSSChartData* AData);
	HIDESBASE TXSSChartItemDataPoint* __fastcall Add()/* overload */;
	HIDESBASE TXSSChartItemDataPoint* __fastcall Add(Xpgparsechart::TCT_DPt* ADp)/* overload */;
	HIDESBASE void __fastcall Add(Xpgparsechart::TCT_DPtXpgList* ADps)/* overload */;
	HIDESBASE void __fastcall Add(Xpgparsechart::TCT_DLbls* AdLbls, Xlsutils5::TDynSingleArray AVals)/* overload */;
	TXSSChartItemDataPoint* __fastcall Find(int AIndex);
	__property TXSSChartItemDataPoint* Items[int Index] = {read=GetItems};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXSSChartItemDataPoints() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXSSChartData : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall SetFont(Xc12datastylesheet5::TXc12Font* const Value);
	
protected:
	double FPtWidth;
	double FPtHeight;
	double FDefMarg;
	double FDefPadding;
	Xc12datastylesheet5::TXc12Font* FFont;
	Xc12datastylesheet5::TXc12Font* FTitleFont;
	System::StaticArray<unsigned, 24> FColors;
	int FCurrColor;
	TXSSChartItemDataPoints* FDataPoints;
	bool FShowValAxis;
	System::Contnrs::TObjectList* FGarbage;
	
public:
	__fastcall TXSSChartData();
	__fastcall virtual ~TXSSChartData();
	double __fastcall MapL(double APtSz);
	double __fastcall MapT(double APtSz);
	double __fastcall MapR(double APtSz);
	double __fastcall MapB(double APtSz);
	Xc12datastylesheet5::TXc12Font* __fastcall GetChartFont(Xpgparsedrawingcommon::TCT_TextBody* ATxt)/* overload */;
	Xc12datastylesheet5::TXc12Font* __fastcall GetChartFont(Xpgparsedrawingcommon::TCT_TextCharacterProperties* ARPr, Xc12datastylesheet5::TXc12Font* ADefFont)/* overload */;
	void __fastcall ResetColor();
	unsigned __fastcall GetSerieColor();
	void __fastcall AddParas(Xbookgeometry2::TXSSGeometry* AGeometry, double AX, double AY, TXSSChartParagraph* AParas, Xc12datastylesheet5::TXc12VertAlignment AVertAlign = (Xc12datastylesheet5::TXc12VertAlignment)(0x2));
	TXSSChartItemDataPoint* __fastcall ApplyDataPoint(int AIndex, Xbookgeometry2::TXSSGeometry* AGeometry, double AX, double AY, bool AAboveOrigo);
	__property double PtWidth = {read=FPtWidth, write=FPtWidth};
	__property double PtHeight = {read=FPtHeight, write=FPtHeight};
	__property double DefMarg = {read=FDefMarg, write=FDefMarg};
	__property double DefPadding = {read=FDefPadding, write=FDefPadding};
	__property Xc12datastylesheet5::TXc12Font* Font = {read=FFont, write=SetFont};
	__property Xc12datastylesheet5::TXc12Font* TitleFont = {read=FTitleFont};
	__property TXSSChartItemDataPoints* DataPoints = {read=FDataPoints};
	__property bool ShowValAxis = {read=FShowValAxis, write=FShowValAxis, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSChartItem : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xbookpaintgdi2::TAXWGDI* FGDI;
	TXSSChartData* FData;
	
public:
	__fastcall TXSSChartItem(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData);
	__property TXSSChartData* Data = {read=FData};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXSSChartItem() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXSSChartItemTitle : public TXSSChartItem
{
	typedef TXSSChartItem inherited;
	
private:
	double __fastcall GetHeight();
	double __fastcall GetWidth();
	
protected:
	TXSSChartParagraph* FPara;
	double FWidth;
	double FHeight;
	Xc12datastylesheet5::TXc12Font* FDefFont;
	double __fastcall GetMargs();
	
public:
	__fastcall TXSSChartItemTitle(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData);
	__fastcall virtual ~TXSSChartItemTitle();
	void __fastcall PreBuild(Xpgparsechart::TCT_Title* ATitle);
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xpgparsechart::TCT_Title* ATitle);
	__property double Width = {read=GetWidth};
	__property double Height = {read=GetHeight};
	__property double Margs = {read=GetMargs};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSChartItemChart : public TXSSChartItem
{
	typedef TXSSChartItem inherited;
	
public:
	__fastcall TXSSChartItemChart(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData);
	__fastcall virtual ~TXSSChartItemChart();
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXSSChartItemLegendItem : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	unsigned FColor;
	System::UnicodeString FText;
	double FWidth;
	double FHeight;
	Xc12datastylesheet5::TXc12Font* FFont;
	
public:
	__fastcall virtual ~TXSSChartItemLegendItem();
	__property unsigned Color = {read=FColor, write=FColor, nodefault};
	__property System::UnicodeString Text = {read=FText, write=FText};
	__property double Width = {read=FWidth, write=FWidth};
	__property double Height = {read=FHeight, write=FHeight};
	__property Xc12datastylesheet5::TXc12Font* Font = {read=FFont, write=FFont};
public:
	/* TObject.Create */ inline __fastcall TXSSChartItemLegendItem() : System::TObject() { }
	
};


class PASCALIMPLEMENTATION TXSSChartItemLegend : public TXSSChartItem
{
	typedef TXSSChartItem inherited;
	
public:
	TXSSChartItemLegendItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXSSChartItemLegendItem* __fastcall GetItems(int Index);
	double __fastcall GetPtWidth();
	double __fastcall GetPtHeight();
	
protected:
	Xpgparsechart::TCT_Legend* FCTLegend;
	System::Contnrs::TObjectList* FItems;
	double FTxtWidth;
	double FTxtHeight;
	double FMargs;
	double FPadding;
	Xlsdrawing5::TXLSDrwShapeProperies* FSpPr;
	Xc12datastylesheet5::TXc12Font* FFont;
	double __fastcall SerieMarkerSz();
	
public:
	__fastcall TXSSChartItemLegend(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData, Xpgparsechart::TCT_Legend* ALegendData);
	__fastcall virtual ~TXSSChartItemLegend();
	void __fastcall Clear();
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xpgparsechart::TCT_Legend* ALegend);
	void __fastcall Add(int AIndex, unsigned AColor, System::UnicodeString AText);
	int __fastcall Count();
	__property double PtWidth = {read=GetPtWidth};
	__property double PtHeight = {read=GetPtHeight};
	__property double Margs = {read=FMargs, write=FMargs};
	__property double Padding = {read=FPadding};
	__property TXSSChartItemLegendItem* Items[int Index] = {read=GetItems/*, default*/};
};


class PASCALIMPLEMENTATION TXSSChartItemAxis : public TXSSChartItem
{
	typedef TXSSChartItem inherited;
	
protected:
	double FTextWidth;
	double FTextHeight;
	bool FVisible;
	System::UnicodeString FNumFormat;
	Xc12datastylesheet5::TXc12Font* FFont;
	
public:
	__fastcall TXSSChartItemAxis(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData);
	__property bool Visible = {read=FVisible, nodefault};
	__property double TextWidth = {read=FTextWidth};
	__property double TextHeight = {read=FTextHeight};
	__property System::UnicodeString NumFormat = {read=FNumFormat};
	__property Xc12datastylesheet5::TXc12Font* Font = {read=FFont};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXSSChartItemAxis() { }
	
};


class PASCALIMPLEMENTATION TXSSChartItemValAxis : public TXSSChartItemAxis
{
	typedef TXSSChartItemAxis inherited;
	
protected:
	double FScaleMin;
	double FScaleMax;
	double FStepSize;
	int FAxisTicks;
	double FScaleOrigo;
	
public:
	__fastcall TXSSChartItemValAxis(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData);
	void __fastcall CalcScale(double AMinVal, double AMaxVal, int ATicks);
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xpgparsechart::TCT_ValAx* AValAxis);
	double __fastcall ScaleRange();
	__property double ScaleMin = {read=FScaleMin};
	__property double ScaleMax = {read=FScaleMax};
	__property double StepSize = {read=FStepSize};
	__property int AxisTicks = {read=FAxisTicks, nodefault};
	__property double ScaleOrigo = {read=FScaleOrigo};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXSSChartItemValAxis() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSChartItemValAxises : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXSSChartItemValAxis* operator[](int Index) { return this->Items[Index]; }
	
protected:
	TXSSChartItemValAxis* __fastcall GetItems(int Index);
	
public:
	__fastcall TXSSChartItemValAxises();
	HIDESBASE TXSSChartItemValAxis* __fastcall Add(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData);
	HIDESBASE TXSSChartItemValAxis* __fastcall First();
	__property TXSSChartItemValAxis* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXSSChartItemValAxises() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXSSChartItemCatAxis : public TXSSChartItemAxis
{
	typedef TXSSChartItemAxis inherited;
	
public:
	__fastcall TXSSChartItemCatAxis(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData);
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, int ACount, Xlsutils5::TDynStringArray ACats, Xpgparsedrawingcommon::TCT_TextBody* ATxPr, bool ATextBetweenTicks);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXSSChartItemCatAxis() { }
	
};


class PASCALIMPLEMENTATION TXSSChartItemChartSerie : public TXSSChartItem
{
	typedef TXSSChartItem inherited;
	
private:
	double __fastcall GetVal(int Index);
	
protected:
	TXSSChartItemChartSeries* FOwner;
	Xlsutils5::TDynSingleArray FVals;
	double FMinVal;
	double FMaxVal;
	unsigned FDefColor;
	unsigned FColor;
	System::UnicodeString FName;
	void __fastcall GetLineStyle(Xpgparsedrawingcommon::TCT_ShapeProperties* ASpPr, unsigned &ALineColor, double &ALineWidth);
	void __fastcall SetupDataPoints(Xpgparsechart::TCT_DPtXpgList* ADPt, Xpgparsechart::TCT_DLbls* ADLbls);
	
public:
	__fastcall TXSSChartItemChartSerie(TXSSChartItemChartSeries* AOwner, Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData);
	__fastcall virtual ~TXSSChartItemChartSerie();
	double __fastcall ValsSum();
	void __fastcall PreBuild(int AIndex, Xlsrelcells5::TXLSRelCells* AVal, Xpgparsechart::TCT_AxDataSource* ACat, Xpgparsechart::TCT_SerieShared* AShared, bool AUseFill);
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xpgparsechart::TCT_BarSer* ABarSer, int AIndex)/* overload */;
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xpgparsechart::TCT_LineSer* ALineSer, bool AHasMarkers)/* overload */;
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xpgparsechart::TCT_AreaSer* AAreaSer)/* overload */;
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, TXSSChartItemChartSerie* AXSerie, double AXScaleRange, Xpgparsechart::TCT_ScatterSer* AScatterSer)/* overload */;
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, TXSSChartItemChartSerie* AXSerie, double AXScaleRange, Xpgparsechart::TCT_BubbleSer* ABubbleSer)/* overload */;
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xpgparsechart::TCT_PieSer* APieSer, double AStartAngle, TXSSChartItemLegend* ALegend)/* overload */;
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xpgparsechart::TCT_RadarSer* ARadarSer, Xpgparsechart::TCT_RadarStyle* ARadarStyle)/* overload */;
	int __fastcall Count();
	Xlsutils5::TDynSingleArray __fastcall Vals();
	__property double MinVal = {read=FMinVal, write=FMinVal};
	__property double MaxVal = {read=FMaxVal, write=FMaxVal};
	__property unsigned Color = {read=FColor, write=FColor, nodefault};
	__property System::UnicodeString Name = {read=FName};
	__property double Val[int Index] = {read=GetVal};
};


class PASCALIMPLEMENTATION TXSSChartItemChartSeries : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXSSChartItemChartSerie* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXSSChartItemChartSerie* __fastcall GetItems(int Index);
	
protected:
	Xbookpaintgdi2::TAXWGDI* FGDI;
	TXSSChartData* FData;
	double FMinVal;
	double FMaxVal;
	int FValCount;
	TXSSChartItemValAxis* FValAxis;
	TXSSChartItemCatAxis* FCatAxis;
	Xlsutils5::TDynStringArray FCats;
	double FGapWidth;
	void __fastcall CalcMinMax(Xpgparsechart::TST_BarGrouping AGrouping);
	void __fastcall AddGridlines(Xbookgeometry2::TXSSGeometryRect* ARect);
	
public:
	__fastcall TXSSChartItemChartSeries(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData, TXSSChartItemValAxis* AValAxis, TXSSChartItemCatAxis* ACatAxis);
	__fastcall virtual ~TXSSChartItemChartSeries();
	HIDESBASE TXSSChartItemChartSerie* __fastcall Add();
	void __fastcall PreBuild(Xpgparsechart::TST_BarGrouping AGrouping, Xpgparsechart::TCT_BarSeries* ABarSeries)/* overload */;
	void __fastcall PreBuild(Xpgparsechart::TCT_LineSeries* ALineSeries)/* overload */;
	void __fastcall PreBuild(Xpgparsechart::TCT_AreaSeries* AAreaSeries)/* overload */;
	void __fastcall PreBuild(Xpgparsechart::TCT_ScatterSeries* AScatterSeries)/* overload */;
	void __fastcall PreBuild(Xpgparsechart::TCT_BubbleSeries* ABubbleSeries)/* overload */;
	void __fastcall PreBuild(Xpgparsechart::TCT_RadarSeries* ARadarSeries)/* overload */;
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xpgparsechart::TCT_BarSeries* ABarSeries)/* overload */;
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xpgparsechart::TCT_LineSeries* ALineSeries, bool AHasMarkers)/* overload */;
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xpgparsechart::TCT_AreaSeries* AAreaSeries)/* overload */;
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, TXSSChartItemChartSerie* AXSerie, double AXScaleRange, Xpgparsechart::TCT_ScatterSeries* AScatterSeries)/* overload */;
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, TXSSChartItemChartSerie* AXSerie, double AXScaleRange, Xpgparsechart::TCT_BubbleSeries* ABubbleSeries)/* overload */;
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xpgparsechart::TCT_RadarSeries* ARadarSeries, Xpgparsechart::TCT_RadarStyle* ARadarStyle, Xpgparsedrawingcommon::TCT_TextBody* AValAxFont, Xpgparsedrawingcommon::TCT_TextBody* ACatAxFont)/* overload */;
	void __fastcall BuildStacked(Xbookgeometry2::TXSSGeometryRect* ARect, Xpgparsechart::TCT_BarSeries* ABarSeries, bool APercent);
	double __fastcall MapY(double AHeight, double AVal);
	__property double MinVal = {read=FMinVal};
	__property double MaxVal = {read=FMaxVal};
	__property int ValCount = {read=FValCount, nodefault};
	__property double GapWidth = {read=FGapWidth, write=FGapWidth};
	__property TXSSChartItemValAxis* ValAxis = {read=FValAxis};
	__property TXSSChartItemCatAxis* CatAxis = {read=FCatAxis};
	__property TXSSChartItemChartSerie* Items[int Index] = {read=GetItems/*, default*/};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSChartItemSeriesChart : public TXSSChartItemChart
{
	typedef TXSSChartItemChart inherited;
	
protected:
	TXSSChartItemChartSeries* FSeries;
	TXSSChartItemValAxis* FValAxis;
	
public:
	__fastcall TXSSChartItemSeriesChart(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData, TXSSChartItemValAxis* AValAxis, TXSSChartItemCatAxis* ACatAxis);
	__fastcall virtual ~TXSSChartItemSeriesChart();
	void __fastcall Clear();
	__property TXSSChartItemChartSeries* Series = {read=FSeries};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSChartItemBarChart : public TXSSChartItemSeriesChart
{
	typedef TXSSChartItemSeriesChart inherited;
	
public:
	__fastcall TXSSChartItemBarChart(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData, TXSSChartItemValAxis* AValAxis, TXSSChartItemCatAxis* ACatAxis);
	void __fastcall PreBuild(TXSSChartItemLegend* ALegend, Xpgparsechart::TCT_BarChart* ABarChart);
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xbookgeometry2::TXSSGeometry* AGeometry, TXSSChartItemLegend* ALegend, Xpgparsechart::TCT_BarChart* ABarChart);
public:
	/* TXSSChartItemSeriesChart.Destroy */ inline __fastcall virtual ~TXSSChartItemBarChart() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSChartItemLineChart : public TXSSChartItemSeriesChart
{
	typedef TXSSChartItemSeriesChart inherited;
	
public:
	__fastcall TXSSChartItemLineChart(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData, TXSSChartItemValAxis* AValAxis, TXSSChartItemCatAxis* ACatAxis);
	void __fastcall PreBuild(TXSSChartItemLegend* ALegend, Xpgparsechart::TCT_LineChart* ALineChart);
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xbookgeometry2::TXSSGeometry* AGeometry, TXSSChartItemLegend* ALegend, Xpgparsechart::TCT_LineChart* ALineChart);
public:
	/* TXSSChartItemSeriesChart.Destroy */ inline __fastcall virtual ~TXSSChartItemLineChart() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSChartItemAreaChart : public TXSSChartItemSeriesChart
{
	typedef TXSSChartItemSeriesChart inherited;
	
public:
	__fastcall TXSSChartItemAreaChart(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData, TXSSChartItemValAxis* AValAxis, TXSSChartItemCatAxis* ACatAxis);
	void __fastcall PreBuild(TXSSChartItemLegend* ALegend, Xpgparsechart::TCT_AreaChart* AAreaChart);
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xbookgeometry2::TXSSGeometry* AGeometry, TXSSChartItemLegend* ALegend, Xpgparsechart::TCT_AreaChart* AAreaChart);
public:
	/* TXSSChartItemSeriesChart.Destroy */ inline __fastcall virtual ~TXSSChartItemAreaChart() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSChartItemXYChart : public TXSSChartItemSeriesChart
{
	typedef TXSSChartItemSeriesChart inherited;
	
protected:
	TXSSChartItemValAxis* FXAxis;
	TXSSChartItemChartSeries* FXSeries;
	void __fastcall DoCatAxis(Xbookgeometry2::TXSSGeometryRect* ARect);
	void __fastcall DoLegend(TXSSChartItemLegend* ALegend);
	
public:
	__fastcall TXSSChartItemXYChart(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData, TXSSChartItemValAxises* AValAxises, TXSSChartItemCatAxis* ACatAxis);
	__fastcall virtual ~TXSSChartItemXYChart();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSChartItemScatterChart : public TXSSChartItemXYChart
{
	typedef TXSSChartItemXYChart inherited;
	
public:
	void __fastcall PreBuild(TXSSChartItemLegend* ALegend, Xpgparsechart::TCT_ScatterChart* AScatterChart);
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xbookgeometry2::TXSSGeometry* AGeometry, TXSSChartItemLegend* ALegend, Xpgparsechart::TCT_ScatterChart* AScatterChart);
public:
	/* TXSSChartItemXYChart.Create */ inline __fastcall TXSSChartItemScatterChart(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData, TXSSChartItemValAxises* AValAxises, TXSSChartItemCatAxis* ACatAxis) : TXSSChartItemXYChart(AGDI, AData, AValAxises, ACatAxis) { }
	/* TXSSChartItemXYChart.Destroy */ inline __fastcall virtual ~TXSSChartItemScatterChart() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSChartItemBubbleChart : public TXSSChartItemXYChart
{
	typedef TXSSChartItemXYChart inherited;
	
public:
	void __fastcall PreBuild(TXSSChartItemLegend* ALegend, Xpgparsechart::TCT_BubbleChart* ABubbleChart);
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xbookgeometry2::TXSSGeometry* AGeometry, TXSSChartItemLegend* ALegend, Xpgparsechart::TCT_BubbleChart* ABubbleChart);
public:
	/* TXSSChartItemXYChart.Create */ inline __fastcall TXSSChartItemBubbleChart(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData, TXSSChartItemValAxises* AValAxises, TXSSChartItemCatAxis* ACatAxis) : TXSSChartItemXYChart(AGDI, AData, AValAxises, ACatAxis) { }
	/* TXSSChartItemXYChart.Destroy */ inline __fastcall virtual ~TXSSChartItemBubbleChart() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSChartItemPieChart : public TXSSChartItem
{
	typedef TXSSChartItem inherited;
	
protected:
	TXSSChartItemChartSerie* FSerie;
	
public:
	__fastcall TXSSChartItemPieChart(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData);
	__fastcall virtual ~TXSSChartItemPieChart();
	void __fastcall PreBuild(TXSSChartItemLegend* ALegend, Xpgparsechart::TCT_PieChart* APieChart);
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xbookgeometry2::TXSSGeometry* AGeometry, TXSSChartItemLegend* ALegend, Xpgparsechart::TCT_PieChart* APieChart);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSChartItemRadarChart : public TXSSChartItemSeriesChart
{
	typedef TXSSChartItemSeriesChart inherited;
	
public:
	__fastcall TXSSChartItemRadarChart(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData, TXSSChartItemValAxis* AValAxis, TXSSChartItemCatAxis* ACatAxis);
	void __fastcall PreBuild(TXSSChartItemLegend* ALegend, Xpgparsechart::TCT_RadarChart* ARadarChart);
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xbookgeometry2::TXSSGeometry* AGeometry, TXSSChartItemLegend* ALegend, Xpgparsechart::TCT_RadarChart* ARadarChart, Xpgparsedrawingcommon::TCT_TextBody* AValAxisFont, Xpgparsedrawingcommon::TCT_TextBody* ACatAxFont);
public:
	/* TXSSChartItemSeriesChart.Destroy */ inline __fastcall virtual ~TXSSChartItemRadarChart() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXSSChartItemPlotArea : public TXSSChartItem
{
	typedef TXSSChartItem inherited;
	
protected:
	System::Contnrs::TObjectList* FCharts;
	TXSSChartItemValAxises* FValAxises;
	TXSSChartItemCatAxis* FCatAxis;
	double FMargs;
	
public:
	__fastcall TXSSChartItemPlotArea(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData);
	__fastcall virtual ~TXSSChartItemPlotArea();
	void __fastcall Clear();
	void __fastcall PreBuild(TXSSChartItemLegend* ALegend, Xpgparsechart::TCT_PlotArea* AChartSpace);
	void __fastcall Build(Xbookgeometry2::TXSSGeometryRect* ARect, Xbookgeometry2::TXSSGeometry* AGeometry, TXSSChartItemLegend* ALegend, Xpgparsechart::TCT_PlotArea* AChartSpace);
	__property double Margs = {read=FMargs, write=FMargs};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSChartItemChartSpace : public TXSSChartItem
{
	typedef TXSSChartItem inherited;
	
protected:
	TXSSChartItemPlotArea* FPlotArea;
	TXSSChartItemLegend* FLegend;
	
public:
	__fastcall TXSSChartItemChartSpace(Xbookpaintgdi2::TAXWGDI* AGDI, TXSSChartData* AData);
	__fastcall virtual ~TXSSChartItemChartSpace();
	void __fastcall Clear();
	void __fastcall Build(Xbookgeometry2::TXSSGeometry* AGeometry, Xpgparsechart::TCT_ChartSpace* AChartSpace);
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const int XSS_CHART_MAXDATAPOINTS = int(0x100000);
static const int XSS_CHART_DEF_COLOR = int(0xffffff);
static const System::Int8 XSS_CHART_DEF_LINECOLOR = System::Int8(0x0);
#define XSS_CHART_DEF_LINEWIDTH  (7.500000E-01)
#define XSS_CHART_DEF_LINECHARTWIDTH  (2.250000E+00)
#define XSS_CHART_DEF_MARKER_SIZE  (2.000000E+00)
extern DELPHI_PACKAGE System::StaticArray<unsigned, 6> XSS_CHART_DEF_FILLCOLORS;
}	/* namespace Xbookgeometrychart2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKGEOMETRYCHART2)
using namespace Xbookgeometrychart2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookgeometrychart2HPP
