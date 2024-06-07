// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'xpgParseChart.pas' rev: 35.00 (Windows)

#ifndef XpgparsechartHPP
#define XpgparsechartHPP

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
#include <System.IniFiles.hpp>
#include <System.Math.hpp>
#include <xpgPUtils.hpp>
#include <xpgPLists.hpp>
#include <xpgPXMLUtils.hpp>
#include <xpgPXML.hpp>
#include <xpgParseDrawingCommon.hpp>
#include <xpgPSimpleDOM.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Graphics.hpp>
#include <System.Variants.hpp>
#include <XLSReadWriteOPC5.hpp>
#include <XLSUtils5.hpp>
#include <XLSRelCells5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xpgparsechart
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCT_Shape_Chart;
class DELPHICLASS TCT_Extension;
class DELPHICLASS TCT_ExtensionXpgList;
class DELPHICLASS TCT_UnsignedInt;
class DELPHICLASS TCT_UnsignedIntXpgList;
class DELPHICLASS TCT_StrVal;
class DELPHICLASS TCT_StrValXpgList;
class DELPHICLASS TCT_ExtensionList;
class DELPHICLASS TCT_ExtensionListXpgList;
class DELPHICLASS TCT_LayoutTarget;
class DELPHICLASS TCT_LayoutMode;
class DELPHICLASS TCT_Double;
class DELPHICLASS TCT_StrData;
class DELPHICLASS TCT_ManualLayout;
class DELPHICLASS TCT_StrRef;
class DELPHICLASS TCT_NumFmt;
class DELPHICLASS TCT_DLblPos;
class DELPHICLASS TCT_Boolean;
class DELPHICLASS TCT_NumVal;
class DELPHICLASS TCT_NumValXpgList;
class DELPHICLASS TCT_Layout;
class DELPHICLASS TCT_Tx;
class DELPHICLASS TEG_DLblShared;
class DELPHICLASS TCT_NumData;
class DELPHICLASS TCT_Lvl;
class DELPHICLASS TCT_LvlXpgList;
class DELPHICLASS TCT_MarkerStyle;
class DELPHICLASS TCT_MarkerSize;
class DELPHICLASS TCT_PictureFormat;
class DELPHICLASS TCT_PictureStackUnit;
class DELPHICLASS TGroup_DLbl;
class DELPHICLASS TCT_ChartLines;
class DELPHICLASS TCT_ChartLinesXpgList;
class DELPHICLASS TCT_NumRef;
class DELPHICLASS TCT_MultiLvlStrData;
class DELPHICLASS TCT_SerTx;
class DELPHICLASS TCT_PictureOptions;
class DELPHICLASS TCT_DLbl;
class DELPHICLASS TCT_DLblXpgList;
class DELPHICLASS TGroup_DLbls;
class DELPHICLASS TCT_TrendlineType;
class DELPHICLASS TCT_Order;
class DELPHICLASS TCT_Period;
class DELPHICLASS TCT_TrendlineLbl;
class DELPHICLASS TCT_ErrDir;
class DELPHICLASS TCT_ErrBarType;
class DELPHICLASS TCT_ErrValType;
class DELPHICLASS TCT_NumDataSource;
class DELPHICLASS TCT_MultiLvlStrRef;
class DELPHICLASS TCT_SerieShared;
class DELPHICLASS TCT_Marker;
class DELPHICLASS TCT_DPt;
class DELPHICLASS TCT_DPtXpgList;
class DELPHICLASS TCT_DLbls;
class DELPHICLASS TCT_Trendline;
class DELPHICLASS TCT_TrendlineXpgList;
class DELPHICLASS TCT_ErrBars;
class DELPHICLASS TCT_ErrBarsXpgList;
class DELPHICLASS TCT_AxDataSource;
class DELPHICLASS TCT_BandFmt;
class DELPHICLASS TCT_BandFmtXpgList;
class DELPHICLASS TCT_LogBase;
class DELPHICLASS TCT_Orientation;
class DELPHICLASS TCT_Grouping;
class DELPHICLASS TCT_AreaSer;
class DELPHICLASS TCT_AreaSeries;
class DELPHICLASS TCT_LineSer;
class DELPHICLASS TCT_LineSeries;
class DELPHICLASS TCT_GapAmount;
class DELPHICLASS TCT_UpDownBar;
class DELPHICLASS TCT_PieSer;
class DELPHICLASS TCT_PieSerXpgList;
class DELPHICLASS TCT_BarDir;
class DELPHICLASS TCT_BarGrouping;
class DELPHICLASS TCT_BarSer;
class DELPHICLASS TCT_BarSerXpgList;
class DELPHICLASS TCT_SurfaceSer;
class DELPHICLASS TCT_SurfaceSerXpgList;
class DELPHICLASS TCT_BandFmts;
class DELPHICLASS TCT_Scaling;
class DELPHICLASS TCT_AxPos;
class DELPHICLASS TCT_Title;
class DELPHICLASS TCT_TickMark;
class DELPHICLASS TCT_TickLblPos;
class DELPHICLASS TCT_Crosses;
class DELPHICLASS TCT_BuiltInUnit;
class DELPHICLASS TCT_DispUnitsLbl;
class DELPHICLASS TEG_AreaChartShared;
class DELPHICLASS TEG_LineChartShared;
class DELPHICLASS TCT_UpDownBars;
class DELPHICLASS TCT_RadarStyle;
class DELPHICLASS TCT_RadarSer;
class DELPHICLASS TCT_RadarSeries;
class DELPHICLASS TCT_ScatterStyle;
class DELPHICLASS TCT_ScatterSer;
class DELPHICLASS TCT_ScatterSeries;
class DELPHICLASS TEG_PieChartShared;
class DELPHICLASS TCT_FirstSliceAng;
class DELPHICLASS TCT_HoleSize;
class DELPHICLASS TCT_BarSeries;
class DELPHICLASS TEG_BarChartShared;
class DELPHICLASS TCT_Overlap;
class DELPHICLASS TCT_OfPieType;
class DELPHICLASS TCT_SplitType;
class DELPHICLASS TCT_CustSplit;
class DELPHICLASS TCT_SecondPieSize;
class DELPHICLASS TEG_SurfaceChartShared;
class DELPHICLASS TCT_BubbleSer;
class DELPHICLASS TCT_BubbleSeries;
class DELPHICLASS TCT_BubbleScale;
class DELPHICLASS TCT_SizeRepresents;
class DELPHICLASS TEG_AxShared;
class DELPHICLASS TCT_CrossBetween;
class DELPHICLASS TCT_AxisUnit;
class DELPHICLASS TCT_DispUnits;
class DELPHICLASS TCT_LblAlgn;
class DELPHICLASS TCT_LblOffset;
class DELPHICLASS TCT_Skip;
class DELPHICLASS TCT_TimeUnit;
class DELPHICLASS TEG_LegendEntryData;
class DELPHICLASS TCT_ColorMapping;
class DELPHICLASS TCT_PivotFmt;
class DELPHICLASS TCT_PivotFmtXpgList;
class DELPHICLASS TCT_RotX;
class DELPHICLASS TCT_HPercent;
class DELPHICLASS TCT_RotY;
class DELPHICLASS TCT_DepthPercent;
class DELPHICLASS TCT_Perspective;
class DELPHICLASS TCT_AreaChart;
class DELPHICLASS TCT_AreaCharts;
class DELPHICLASS TCT_Area3DChart;
class DELPHICLASS TCT_Area3DCharts;
class DELPHICLASS TCT_LineChart;
class DELPHICLASS TCT_LineCharts;
class DELPHICLASS TCT_Line3DChart;
class DELPHICLASS TCT_Line3DCharts;
class DELPHICLASS TCT_StockChart;
class DELPHICLASS TCT_StockCharts;
class DELPHICLASS TCT_RadarChart;
class DELPHICLASS TCT_RadarCharts;
class DELPHICLASS TCT_ScatterChart;
class DELPHICLASS TCT_ScatterCharts;
class DELPHICLASS TCT_PieChart;
class DELPHICLASS TCT_PieCharts;
class DELPHICLASS TCT_Pie3DChart;
class DELPHICLASS TCT_Pie3DCharts;
class DELPHICLASS TCT_DoughnutChart;
class DELPHICLASS TCT_DoughnutCharts;
class DELPHICLASS TCT_BarChart;
class DELPHICLASS TCT_BarCharts;
class DELPHICLASS TCT_Bar3DChart;
class DELPHICLASS TCT_Bar3DCharts;
class DELPHICLASS TCT_OfPieChart;
class DELPHICLASS TCT_OfPieCharts;
class DELPHICLASS TCT_SurfaceChart;
class DELPHICLASS TCT_SurfaceCharts;
class DELPHICLASS TCT_Surface3DChart;
class DELPHICLASS TCT_Surface3DCharts;
class DELPHICLASS TCT_BubbleChart;
class DELPHICLASS TCT_BubbleCharts;
class DELPHICLASS TCT_ValAx;
class DELPHICLASS TCT_ValAxXpgList;
class DELPHICLASS TCT_CatAx;
class DELPHICLASS TCT_CatAxXpgList;
class DELPHICLASS TCT_DateAx;
class DELPHICLASS TCT_DateAxXpgList;
class DELPHICLASS TCT_SerAx;
class DELPHICLASS TCT_SerAxXpgList;
class DELPHICLASS TCT_DTable;
class DELPHICLASS TCT_LegendPos;
class DELPHICLASS TCT_LegendEntry;
class DELPHICLASS TCT_LegendEntryXpgList;
class DELPHICLASS TCT_DefaultShapeDefinition;
class DELPHICLASS TCT_ColorSchemeAndMapping;
class DELPHICLASS TCT_ColorSchemeAndMappingXpgList;
class DELPHICLASS TCT_PivotFmts;
class DELPHICLASS TCT_View3D;
class DELPHICLASS TCT_Surface;
class DELPHICLASS TCT_PlotArea;
class DELPHICLASS TCT_Legend;
class DELPHICLASS TCT_DispBlanksAs;
class DELPHICLASS TCT_HeaderFooter;
class DELPHICLASS TCT_PageMargins;
class DELPHICLASS TCT_PageSetup;
class DELPHICLASS TCT_RelId;
class DELPHICLASS TCT_ObjectStyleDefaults;
class DELPHICLASS TCT_ColorSchemeList;
class DELPHICLASS TCT_TextLanguageID;
class DELPHICLASS TCT_Style;
class DELPHICLASS TCT_PivotSource;
class DELPHICLASS TCT_Protection;
class DELPHICLASS TCT_Chart;
class DELPHICLASS TCT_ExternalData;
class DELPHICLASS TCT_PrintSettings;
class DELPHICLASS TCT_EmptyElement;
class DELPHICLASS TCT_BaseStylesOverride;
class DELPHICLASS TCT_OfficeStyleSheet;
class DELPHICLASS TCT_ChartSpace;
class DELPHICLASS TCT_ColorMappingOverride;
class DELPHICLASS TCT_ClipboardStyleSheet;
class DELPHICLASS T__ROOT__;
class DELPHICLASS TXPGDocXLSXChart;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TST_RadarStyle : unsigned short { strsStandard, strsMarker, strsFilled };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparsechart__1;

enum DECLSPEC_DENUM TST_BarDir : unsigned short { stbdBar, stbdCol };

typedef System::StaticArray<System::UnicodeString, 2> Xpgparsechart__2;

enum DECLSPEC_DENUM TST_SplitType : unsigned short { ststAuto, ststCust, ststPercent, ststPos, ststVal };

typedef System::StaticArray<System::UnicodeString, 5> Xpgparsechart__3;

enum DECLSPEC_DENUM TST_TickMark : unsigned short { sttmCross, sttmIn, sttmNone, sttmOut };

typedef System::StaticArray<System::UnicodeString, 4> Xpgparsechart__4;

enum DECLSPEC_DENUM TST_TimeUnit : unsigned short { sttuDays, sttuMonths, sttuYears };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparsechart__5;

enum DECLSPEC_DENUM TST_Grouping : unsigned short { stgPercentStacked, stgStandard, stgStacked };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparsechart__6;

enum DECLSPEC_DENUM TST_Orientation_2 : unsigned short { stoMaxMin, stoMinMax };

typedef System::StaticArray<System::UnicodeString, 2> Xpgparsechart__7;

enum DECLSPEC_DENUM TST_LblAlgn : unsigned short { stlaCtr, stlaL, stlaR };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparsechart__8;

enum DECLSPEC_DENUM TST_MarkerStyle : unsigned short { stmsCircle, stmsDash, stmsDiamond, stmsDot, stmsNone, stmsPicture, stmsPlus, stmsSquare, stmsStar, stmsTriangle, stmsX };

typedef System::StaticArray<System::UnicodeString, 11> Xpgparsechart__9;

enum DECLSPEC_DENUM TST_Crosses : unsigned short { stcAutoZero, stcMax, stcMin };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparsechart__01;

enum DECLSPEC_DENUM TST_PictureFormat : unsigned short { stpfStretch, stpfStack, stpfStackScale };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparsechart__11;

enum DECLSPEC_DENUM TST_ErrBarType : unsigned short { stebtBoth, stebtMinus, stebtPlus };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparsechart__21;

enum DECLSPEC_DENUM TST_TickLblPos : unsigned short { sttlpHigh, sttlpLow, sttlpNextTo, sttlpNone };

typedef System::StaticArray<System::UnicodeString, 4> Xpgparsechart__31;

enum DECLSPEC_DENUM TST_AxPos : unsigned short { stapB, stapL, stapR, stapT };

typedef System::StaticArray<System::UnicodeString, 4> Xpgparsechart__41;

enum DECLSPEC_DENUM TST_Shape : unsigned short { stsCone, stsConeToMax, stsBox, stsCylinder, stsPyramid, stsPyramidToMax };

typedef System::StaticArray<System::UnicodeString, 6> Xpgparsechart__51;

enum DECLSPEC_DENUM TST_CrossBetween : unsigned short { stcbBetween, stcbMidCat };

typedef System::StaticArray<System::UnicodeString, 2> Xpgparsechart__61;

enum DECLSPEC_DENUM TST_DispBlanksAs : unsigned short { stdbaSpan, stdbaGap, stdbaZero };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparsechart__71;

enum DECLSPEC_DENUM TST_ErrValType : unsigned short { stevtCust, stevtFixedVal, stevtPercentage, stevtStdDev, stevtStdErr };

typedef System::StaticArray<System::UnicodeString, 5> Xpgparsechart__81;

enum DECLSPEC_DENUM TST_LegendPos : unsigned short { stlpB, stlpTr, stlpL, stlpR, stlpT };

typedef System::StaticArray<System::UnicodeString, 5> Xpgparsechart__91;

enum DECLSPEC_DENUM TST_ErrDir : unsigned short { stedX, stedY };

typedef System::StaticArray<System::UnicodeString, 2> Xpgparsechart__02;

enum DECLSPEC_DENUM TST_LayoutMode : unsigned short { stlmEdge, stlmFactor };

typedef System::StaticArray<System::UnicodeString, 2> Xpgparsechart__12;

enum DECLSPEC_DENUM TST_BarGrouping : unsigned short { stbgPercentStacked, stbgClustered, stbgStandard, stbgStacked };

typedef System::StaticArray<System::UnicodeString, 4> Xpgparsechart__22;

enum DECLSPEC_DENUM TST_DLblPos : unsigned short { stdlpBestFit, stdlpB, stdlpCtr, stdlpInBase, stdlpInEnd, stdlpL, stdlpOutEnd, stdlpR, stdlpT };

typedef System::StaticArray<System::UnicodeString, 9> Xpgparsechart__32;

enum DECLSPEC_DENUM TST_SizeRepresents : unsigned short { stsrArea, stsrW };

typedef System::StaticArray<System::UnicodeString, 2> Xpgparsechart__42;

enum DECLSPEC_DENUM TST_PageSetupOrientation : unsigned short { stpsoDefault, stpsoPortrait, stpsoLandscape };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparsechart__52;

enum DECLSPEC_DENUM TST_OfPieType : unsigned short { stoptPie, stoptBar };

typedef System::StaticArray<System::UnicodeString, 2> Xpgparsechart__62;

enum DECLSPEC_DENUM TST_ScatterStyle : unsigned short { stssNone, stssLine, stssLineMarker, stssMarker, stssSmooth, stssSmoothMarker };

typedef System::StaticArray<System::UnicodeString, 6> Xpgparsechart__72;

enum DECLSPEC_DENUM TST_LayoutTarget : unsigned short { stltInner, stltOuter };

typedef System::StaticArray<System::UnicodeString, 2> Xpgparsechart__82;

enum DECLSPEC_DENUM TST_BuiltInUnit : unsigned short { stbiuHundreds, stbiuThousands, stbiuTenThousands, stbiuHundredThousands, stbiuMillions, stbiuTenMillions, stbiuHundredMillions, stbiuBillions, stbiuTrillions };

typedef System::StaticArray<System::UnicodeString, 9> Xpgparsechart__92;

enum DECLSPEC_DENUM TST_TrendlineType : unsigned short { stttExp, stttLinear, stttLog, stttMovingAvg, stttPoly, stttPower };

typedef System::StaticArray<System::UnicodeString, 6> Xpgparsechart__03;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Shape_Chart : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_Shape FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Shape_Chart(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Shape_Chart();
	void __fastcall Clear();
	__property TST_Shape Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Extension : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	System::UnicodeString FUri;
	System::UnicodeString FXmlns;
	System::UnicodeString FXmlnsVal;
	Xpgparsedrawingcommon::TXPGAnyElements* FAnyElements;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Extension(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Extension();
	void __fastcall Clear();
	__property System::UnicodeString Uri = {read=FUri, write=FUri};
	__property Xpgparsedrawingcommon::TXPGAnyElements* AnyElements = {read=FAnyElements};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExtensionXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_Extension* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Extension* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Extension* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Extension* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ExtensionXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ExtensionXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_UnsignedInt : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_UnsignedInt(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_UnsignedInt();
	void __fastcall Clear();
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_UnsignedIntXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_UnsignedInt* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_UnsignedInt* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_UnsignedInt* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE TCT_UnsignedInt* __fastcall Last();
	__property TCT_UnsignedInt* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_UnsignedIntXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_UnsignedIntXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_StrVal : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FIdx;
	System::UnicodeString FV;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_StrVal(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_StrVal();
	void __fastcall Clear();
	__property int Idx = {read=FIdx, write=FIdx, nodefault};
	__property System::UnicodeString V = {read=FV, write=FV};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_StrValXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_StrVal* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_StrVal* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_StrVal* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_StrVal* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_StrValXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_StrValXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExtensionList : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_ExtensionXpgList* FExtXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_ExtensionList(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ExtensionList();
	void __fastcall Clear();
	TCT_ExtensionXpgList* __fastcall Create_ExtXpgList();
	__property TCT_ExtensionXpgList* ExtXpgList = {read=FExtXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExtensionListXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_ExtensionList* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ExtensionList* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ExtensionList* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_ExtensionList* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ExtensionListXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ExtensionListXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LayoutTarget : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_LayoutTarget FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_LayoutTarget(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LayoutTarget();
	void __fastcall Clear();
	__property TST_LayoutTarget Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LayoutMode : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_LayoutMode FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_LayoutMode(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LayoutMode();
	void __fastcall Clear();
	__property TST_LayoutMode Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_Double : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	double FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Double(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Double();
	void __fastcall Clear();
	__property double Val = {read=FVal, write=FVal};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_StrData : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_UnsignedInt* FPtCount;
	TCT_StrValXpgList* FPtXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_StrData(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_StrData();
	void __fastcall Clear();
	TCT_UnsignedInt* __fastcall Create_PtCount();
	TCT_StrValXpgList* __fastcall Create_PtXpgList();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_UnsignedInt* PtCount = {read=FPtCount};
	__property TCT_StrValXpgList* PtXpgList = {read=FPtXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ManualLayout : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_LayoutTarget* FLayoutTarget;
	TCT_LayoutMode* FXMode;
	TCT_LayoutMode* FYMode;
	TCT_LayoutMode* FWMode;
	TCT_LayoutMode* FHMode;
	TCT_Double* FX;
	TCT_Double* FY;
	TCT_Double* FW;
	TCT_Double* FH;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_ManualLayout(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ManualLayout();
	void __fastcall Clear();
	TCT_LayoutTarget* __fastcall Create_LayoutTarget();
	TCT_LayoutMode* __fastcall Create_XMode();
	TCT_LayoutMode* __fastcall Create_YMode();
	TCT_LayoutMode* __fastcall Create_WMode();
	TCT_LayoutMode* __fastcall Create_HMode();
	TCT_Double* __fastcall Create_X();
	TCT_Double* __fastcall Create_Y();
	TCT_Double* __fastcall Create_W();
	TCT_Double* __fastcall Create_H();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_LayoutTarget* LayoutTarget = {read=FLayoutTarget};
	__property TCT_LayoutMode* XMode = {read=FXMode};
	__property TCT_LayoutMode* YMode = {read=FYMode};
	__property TCT_LayoutMode* WMode = {read=FWMode};
	__property TCT_LayoutMode* HMode = {read=FHMode};
	__property TCT_Double* X = {read=FX};
	__property TCT_Double* Y = {read=FY};
	__property TCT_Double* W = {read=FW};
	__property TCT_Double* H = {read=FH};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_StrRef : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
private:
	void __fastcall SetF(const System::UnicodeString Value);
	
protected:
	System::UnicodeString FF;
	Xlsrelcells5::TXLSRelCells* FRCells;
	TCT_StrData* FStrCache;
	TCT_ExtensionList* FExtLst;
	System::UnicodeString __fastcall GetF();
	System::UnicodeString __fastcall GetText();
	
public:
	__fastcall TCT_StrRef(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_StrRef();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_StrData* __fastcall Create_StrCache();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property System::UnicodeString F = {read=GetF, write=SetF};
	__property System::UnicodeString Text = {read=GetText};
	__property TCT_StrData* StrCache = {read=FStrCache};
	__property Xlsrelcells5::TXLSRelCells* RCells = {read=FRCells, write=FRCells};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_NumFmt : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	System::UnicodeString FFormatCode;
	bool FSourceLinked;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_NumFmt(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_NumFmt();
	void __fastcall Clear();
	__property System::UnicodeString FormatCode = {read=FFormatCode, write=FFormatCode};
	__property bool SourceLinked = {read=FSourceLinked, write=FSourceLinked, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DLblPos : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_DLblPos FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_DLblPos(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DLblPos();
	void __fastcall Clear();
	__property TST_DLblPos Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Boolean : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	bool FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Boolean(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Boolean();
	void __fastcall Clear();
	__property bool Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_NumVal : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FIdx;
	System::UnicodeString FFormatCode;
	System::UnicodeString FV;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_NumVal(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_NumVal();
	void __fastcall Clear();
	__property int Idx = {read=FIdx, write=FIdx, nodefault};
	__property System::UnicodeString FormatCode = {read=FFormatCode, write=FFormatCode};
	__property System::UnicodeString V = {read=FV, write=FV};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_NumValXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_NumVal* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_NumVal* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_NumVal* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_NumVal* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_NumValXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_NumValXpgList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_Layout : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	double FX;
	double FY;
	double FW;
	double FH;
	TCT_ManualLayout* FManualLayout;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Layout(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Layout();
	void __fastcall Clear();
	void __fastcall Prepare(const double AX, const double AY, const double AW, const double AH);
	TCT_ManualLayout* __fastcall Create_ManualLayout();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_ManualLayout* ManualLayout = {read=FManualLayout};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
	__property double X = {read=FX, write=FX};
	__property double Y = {read=FY, write=FY};
	__property double W = {read=FW, write=FW};
	__property double H = {read=FH, write=FH};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Tx : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_StrRef* FStrRef;
	Xpgparsedrawingcommon::TCT_TextBody* FRich;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Tx(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Tx();
	void __fastcall Clear();
	TCT_StrRef* __fastcall Create_StrRef();
	Xpgparsedrawingcommon::TCT_TextBody* __fastcall Create_Rich();
	void __fastcall Delete_StrRef();
	__property TCT_StrRef* StrRef = {read=FStrRef};
	__property Xpgparsedrawingcommon::TCT_TextBody* Rich = {read=FRich};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_DLblShared : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_NumFmt* FNumFmt;
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	Xpgparsedrawingcommon::TCT_TextBody* FTxPr;
	TCT_DLblPos* FDLblPos;
	TCT_Boolean* FShowLegendKey;
	TCT_Boolean* FShowVal;
	TCT_Boolean* FShowCatName;
	TCT_Boolean* FShowSerName;
	TCT_Boolean* FShowPercent;
	TCT_Boolean* FShowBubbleSize;
	System::UnicodeString FSeparator;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_DLblShared(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_DLblShared();
	void __fastcall Clear();
	TCT_NumFmt* __fastcall Create_NumFmt();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	Xpgparsedrawingcommon::TCT_TextBody* __fastcall Create_TxPr();
	TCT_DLblPos* __fastcall Create_DLblPos();
	TCT_Boolean* __fastcall Create_ShowLegendKey();
	TCT_Boolean* __fastcall Create_ShowVal();
	TCT_Boolean* __fastcall Create_ShowCatName();
	TCT_Boolean* __fastcall Create_ShowSerName();
	TCT_Boolean* __fastcall Create_ShowPercent();
	TCT_Boolean* __fastcall Create_ShowBubbleSize();
	__property TCT_NumFmt* NumFmt = {read=FNumFmt};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
	__property Xpgparsedrawingcommon::TCT_TextBody* TxPr = {read=FTxPr};
	__property TCT_DLblPos* DLblPos = {read=FDLblPos};
	__property TCT_Boolean* ShowLegendKey = {read=FShowLegendKey};
	__property TCT_Boolean* ShowVal = {read=FShowVal};
	__property TCT_Boolean* ShowCatName = {read=FShowCatName};
	__property TCT_Boolean* ShowSerName = {read=FShowSerName};
	__property TCT_Boolean* ShowPercent = {read=FShowPercent};
	__property TCT_Boolean* ShowBubbleSize = {read=FShowBubbleSize};
	__property System::UnicodeString Separator = {read=FSeparator, write=FSeparator};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_NumData : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	System::UnicodeString FFormatCode;
	TCT_UnsignedInt* FPtCount;
	TCT_NumValXpgList* FPtXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_NumData(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_NumData();
	void __fastcall Clear();
	TCT_UnsignedInt* __fastcall Create_PtCount();
	TCT_NumValXpgList* __fastcall Create_PtXpgList();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property System::UnicodeString FormatCode = {read=FFormatCode, write=FFormatCode};
	__property TCT_UnsignedInt* PtCount = {read=FPtCount};
	__property TCT_NumValXpgList* PtXpgList = {read=FPtXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Lvl : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_StrValXpgList* FPtXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Lvl(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Lvl();
	void __fastcall Clear();
	TCT_StrValXpgList* __fastcall Create_PtXpgList();
	__property TCT_StrValXpgList* PtXpgList = {read=FPtXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LvlXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_Lvl* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Lvl* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Lvl* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Lvl* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_LvlXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_LvlXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_MarkerStyle : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_MarkerStyle FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_MarkerStyle(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_MarkerStyle();
	void __fastcall Clear();
	__property TST_MarkerStyle Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_MarkerSize : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_MarkerSize(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_MarkerSize();
	void __fastcall Clear();
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PictureFormat : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_PictureFormat FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PictureFormat(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PictureFormat();
	void __fastcall Clear();
	__property TST_PictureFormat Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_PictureStackUnit : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	double FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PictureStackUnit(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PictureStackUnit();
	void __fastcall Clear();
	__property double Val = {read=FVal, write=FVal};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TGroup_DLbl : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_Layout* FLayout;
	TCT_Tx* FTx;
	TEG_DLblShared* FEG_DLblShared;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TGroup_DLbl(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TGroup_DLbl();
	void __fastcall Clear();
	TCT_Layout* __fastcall Create_Layout();
	TCT_Tx* __fastcall Create_Tx();
	__property TCT_Layout* Layout = {read=FLayout};
	__property TCT_Tx* Tx = {read=FTx};
	__property TEG_DLblShared* EG_DLblShared = {read=FEG_DLblShared};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ChartLines : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_ChartLines(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ChartLines();
	void __fastcall Clear();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ChartLinesXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_ChartLines* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ChartLines* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ChartLines* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_ChartLines* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ChartLinesXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ChartLinesXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_NumRef : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	System::UnicodeString FF;
	Xlsrelcells5::TXLSRelCells* FRCells;
	TCT_NumData* FNumCache;
	TCT_ExtensionList* FExtLst;
	System::UnicodeString __fastcall GetF();
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_NumRef(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_NumRef();
	void __fastcall Clear();
	TCT_NumData* __fastcall Create_NumCache();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property System::UnicodeString F = {read=GetF, write=FF};
	__property Xlsrelcells5::TXLSRelCells* RCells = {read=FRCells, write=FRCells};
	__property TCT_NumData* NumCache = {read=FNumCache};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_MultiLvlStrData : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_UnsignedInt* FPtCount;
	TCT_LvlXpgList* FLvlXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_MultiLvlStrData(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_MultiLvlStrData();
	void __fastcall Clear();
	TCT_UnsignedInt* __fastcall Create_PtCount();
	TCT_LvlXpgList* __fastcall Create_LvlXpgList();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_UnsignedInt* PtCount = {read=FPtCount};
	__property TCT_LvlXpgList* LvlXpgList = {read=FLvlXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SerTx : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_StrRef* FStrRef;
	System::UnicodeString FV;
	System::UnicodeString __fastcall GetText();
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_SerTx(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SerTx();
	void __fastcall Clear();
	TCT_StrRef* __fastcall Create_StrRef();
	__property TCT_StrRef* StrRef = {read=FStrRef};
	__property System::UnicodeString V = {read=FV, write=FV};
	__property System::UnicodeString Text = {read=GetText};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PictureOptions : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_Boolean* FApplyToFront;
	TCT_Boolean* FApplyToSides;
	TCT_Boolean* FApplyToEnd;
	TCT_PictureFormat* FPictureFormat;
	TCT_PictureStackUnit* FPictureStackUnit;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_PictureOptions(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PictureOptions();
	void __fastcall Clear();
	TCT_Boolean* __fastcall Create_ApplyToFront();
	TCT_Boolean* __fastcall Create_ApplyToSides();
	TCT_Boolean* __fastcall Create_ApplyToEnd();
	TCT_PictureFormat* __fastcall Create_PictureFormat();
	TCT_PictureStackUnit* __fastcall Create_PictureStackUnit();
	__property TCT_Boolean* ApplyToFront = {read=FApplyToFront};
	__property TCT_Boolean* ApplyToSides = {read=FApplyToSides};
	__property TCT_Boolean* ApplyToEnd = {read=FApplyToEnd};
	__property TCT_PictureFormat* PictureFormat = {read=FPictureFormat};
	__property TCT_PictureStackUnit* PictureStackUnit = {read=FPictureStackUnit};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DLbl : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_UnsignedInt* FIdx;
	TCT_Boolean* FDelete;
	TGroup_DLbl* FGroup_DLbl;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_DLbl(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DLbl();
	void __fastcall Clear();
	TCT_UnsignedInt* __fastcall Create_Idx();
	TCT_Boolean* __fastcall Create_Delete();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_UnsignedInt* Idx = {read=FIdx};
	__property TCT_Boolean* Delete = {read=FDelete};
	__property TGroup_DLbl* Group_DLbl = {read=FGroup_DLbl};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DLblXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_DLbl* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_DLbl* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_DLbl* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_DLbl* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_DLblXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_DLblXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGroup_DLbls : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TEG_DLblShared* FEG_DLblShared;
	TCT_Boolean* FShowLeaderLines;
	TCT_ChartLines* FLeaderLines;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TGroup_DLbls(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TGroup_DLbls();
	void __fastcall Clear();
	TCT_Boolean* __fastcall Create_ShowLeaderLines();
	TCT_ChartLines* __fastcall Create_LeaderLines();
	__property TEG_DLblShared* EG_DLblSShared = {read=FEG_DLblShared};
	__property TCT_Boolean* ShowLeaderLines = {read=FShowLeaderLines};
	__property TCT_ChartLines* LeaderLines = {read=FLeaderLines};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TrendlineType : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_TrendlineType FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TrendlineType(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TrendlineType();
	void __fastcall Clear();
	__property TST_TrendlineType Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Order : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Order(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Order();
	void __fastcall Clear();
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Period : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Period(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Period();
	void __fastcall Clear();
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TrendlineLbl : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_Layout* FLayout;
	TCT_Tx* FTx;
	TCT_NumFmt* FNumFmt;
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	Xpgparsedrawingcommon::TCT_TextBody* FTxPr;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_TrendlineLbl(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TrendlineLbl();
	void __fastcall Clear();
	TCT_Layout* __fastcall Create_Layout();
	TCT_Tx* __fastcall Create_Tx();
	TCT_NumFmt* __fastcall Create_NumFmt();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	Xpgparsedrawingcommon::TCT_TextBody* __fastcall Create_TxPr();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_Layout* Layout = {read=FLayout};
	__property TCT_Tx* Tx = {read=FTx};
	__property TCT_NumFmt* NumFmt = {read=FNumFmt};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
	__property Xpgparsedrawingcommon::TCT_TextBody* TxPr = {read=FTxPr};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ErrDir : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_ErrDir FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ErrDir(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ErrDir();
	void __fastcall Clear();
	__property TST_ErrDir Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ErrBarType : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_ErrBarType FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ErrBarType(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ErrBarType();
	void __fastcall Clear();
	__property TST_ErrBarType Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ErrValType : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_ErrValType FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ErrValType(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ErrValType();
	void __fastcall Clear();
	__property TST_ErrValType Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_NumDataSource : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_NumRef* FNumRef;
	TCT_NumData* FNumLit;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_NumDataSource(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_NumDataSource();
	void __fastcall Clear();
	TCT_NumRef* __fastcall Create_NumRef();
	TCT_NumData* __fastcall Create_NumLit();
	__property TCT_NumRef* NumRef = {read=FNumRef};
	__property TCT_NumData* NumLit = {read=FNumLit};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_MultiLvlStrRef : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	System::UnicodeString FF;
	TCT_MultiLvlStrData* FMultiLvlStrCache;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_MultiLvlStrRef(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_MultiLvlStrRef();
	void __fastcall Clear();
	TCT_MultiLvlStrData* __fastcall Create_MultiLvlStrCache();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property System::UnicodeString F = {read=FF, write=FF};
	__property TCT_MultiLvlStrData* MultiLvlStrCache = {read=FMultiLvlStrCache};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SerieShared : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
private:
	unsigned __fastcall GetFillColor();
	void __fastcall SetFillColor(const unsigned Value);
	unsigned __fastcall GetFillTColor();
	void __fastcall SetFillTColor(const unsigned Value);
	System::UnicodeString __fastcall GetName();
	void __fastcall SetName(const System::UnicodeString Value);
	unsigned __fastcall GetLineColor();
	unsigned __fastcall GetLineTColor();
	void __fastcall SetLineColor(const unsigned Value);
	void __fastcall SetLineTColor(const unsigned Value);
	double __fastcall GetTransparency();
	void __fastcall SetTransparency(const double Value);
	bool __fastcall GetNoLineFill();
	void __fastcall SetNoLineFill(const bool Value);
	
protected:
	TCT_UnsignedInt* FIdx;
	TCT_UnsignedInt* FOrder;
	TCT_SerTx* FTx;
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	
public:
	__fastcall TCT_SerieShared(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SerieShared();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_UnsignedInt* __fastcall Create_Idx();
	TCT_UnsignedInt* __fastcall Create_Order();
	TCT_SerTx* __fastcall Create_Tx();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	__property TCT_UnsignedInt* Idx = {read=FIdx};
	__property TCT_UnsignedInt* Order = {read=FOrder};
	__property TCT_SerTx* Tx = {read=FTx};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
	__property unsigned FillColor = {read=GetFillColor, write=SetFillColor, nodefault};
	__property unsigned FillTColor = {read=GetFillTColor, write=SetFillTColor, nodefault};
	__property unsigned LineColor = {read=GetLineColor, write=SetLineColor, nodefault};
	__property unsigned LineTColor = {read=GetLineTColor, write=SetLineTColor, nodefault};
	__property bool NoLineFill = {read=GetNoLineFill, write=SetNoLineFill, nodefault};
	__property double Transparency = {read=GetTransparency, write=SetTransparency};
	__property System::UnicodeString Name = {read=GetName, write=SetName};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Marker : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_MarkerStyle* FSymbol;
	TCT_MarkerSize* FSize;
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Marker(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Marker();
	void __fastcall Clear();
	TCT_MarkerStyle* __fastcall Create_Symbol();
	TCT_MarkerSize* __fastcall Create_Size();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_MarkerStyle* Symbol = {read=FSymbol};
	__property TCT_MarkerSize* Size = {read=FSize};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DPt : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_UnsignedInt* FIdx;
	TCT_Boolean* FInvertIfNegative;
	TCT_Marker* FMarker;
	TCT_Boolean* FBubble3D;
	TCT_UnsignedInt* FExplosion;
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	TCT_PictureOptions* FPictureOptions;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_DPt(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DPt();
	void __fastcall Clear();
	TCT_UnsignedInt* __fastcall Create_Idx();
	TCT_Boolean* __fastcall Create_InvertIfNegative();
	TCT_Marker* __fastcall Create_Marker();
	TCT_Boolean* __fastcall Create_Bubble3D();
	TCT_UnsignedInt* __fastcall Create_Explosion();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	TCT_PictureOptions* __fastcall Create_PictureOptions();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_UnsignedInt* Idx = {read=FIdx};
	__property TCT_Boolean* InvertIfNegative = {read=FInvertIfNegative};
	__property TCT_Marker* Marker = {read=FMarker};
	__property TCT_Boolean* Bubble3D = {read=FBubble3D};
	__property TCT_UnsignedInt* Explosion = {read=FExplosion};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
	__property TCT_PictureOptions* PictureOptions = {read=FPictureOptions};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DPtXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_DPt* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_DPt* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_DPt* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_DPt* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_DPtXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_DPtXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DLbls : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_DLblXpgList* FDLblXpgList;
	TCT_Boolean* FDelete;
	TGroup_DLbls* FGroup_DLbls;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_DLbls(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DLbls();
	void __fastcall Clear();
	TCT_DLblXpgList* __fastcall Create_DLblXpgList();
	TCT_Boolean* __fastcall Create_Delete();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_DLblXpgList* DLblXpgList = {read=FDLblXpgList};
	__property TCT_Boolean* Delete = {read=FDelete};
	__property TGroup_DLbls* Group_DLbls = {read=FGroup_DLbls};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Trendline : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	TCT_TrendlineType* FTrendlineType;
	TCT_Order* FOrder;
	TCT_Period* FPeriod;
	TCT_Double* FForward;
	TCT_Double* FBackward;
	TCT_Double* FIntercept;
	TCT_Boolean* FDispRSqr;
	TCT_Boolean* FDispEq;
	TCT_TrendlineLbl* FTrendlineLbl;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Trendline(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Trendline();
	void __fastcall Clear();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	TCT_TrendlineType* __fastcall Create_TrendlineType();
	TCT_Order* __fastcall Create_Order();
	TCT_Period* __fastcall Create_Period();
	TCT_Double* __fastcall Create_Forward();
	TCT_Double* __fastcall Create_Backward();
	TCT_Double* __fastcall Create_Intercept();
	TCT_Boolean* __fastcall Create_DispRSqr();
	TCT_Boolean* __fastcall Create_DispEq();
	TCT_TrendlineLbl* __fastcall Create_TrendlineLbl();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
	__property TCT_TrendlineType* TrendlineType = {read=FTrendlineType};
	__property TCT_Order* Order = {read=FOrder};
	__property TCT_Period* Period = {read=FPeriod};
	__property TCT_Double* Forward = {read=FForward};
	__property TCT_Double* Backward = {read=FBackward};
	__property TCT_Double* Intercept = {read=FIntercept};
	__property TCT_Boolean* DispRSqr = {read=FDispRSqr};
	__property TCT_Boolean* DispEq = {read=FDispEq};
	__property TCT_TrendlineLbl* TrendlineLbl = {read=FTrendlineLbl};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TrendlineXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_Trendline* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Trendline* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Trendline* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Trendline* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_TrendlineXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_TrendlineXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ErrBars : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_ErrDir* FErrDir;
	TCT_ErrBarType* FErrBarType;
	TCT_ErrValType* FErrValType;
	TCT_Boolean* FNoEndCap;
	TCT_NumDataSource* FPlus;
	TCT_NumDataSource* FMinus;
	TCT_Double* FVal;
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_ErrBars(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ErrBars();
	void __fastcall Clear();
	TCT_ErrDir* __fastcall Create_ErrDir();
	TCT_ErrBarType* __fastcall Create_ErrBarType();
	TCT_ErrValType* __fastcall Create_ErrValType();
	TCT_Boolean* __fastcall Create_NoEndCap();
	TCT_NumDataSource* __fastcall Create_Plus();
	TCT_NumDataSource* __fastcall Create_Minus();
	TCT_Double* __fastcall Create_Val();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_ErrDir* ErrDir = {read=FErrDir};
	__property TCT_ErrBarType* ErrBarType = {read=FErrBarType};
	__property TCT_ErrValType* ErrValType = {read=FErrValType};
	__property TCT_Boolean* NoEndCap = {read=FNoEndCap};
	__property TCT_NumDataSource* Plus = {read=FPlus};
	__property TCT_NumDataSource* Minus = {read=FMinus};
	__property TCT_Double* Val = {read=FVal};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ErrBarsXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_ErrBars* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ErrBars* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ErrBars* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_ErrBars* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ErrBarsXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ErrBarsXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AxDataSource : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_MultiLvlStrRef* FMultiLvlStrRef;
	TCT_NumRef* FNumRef;
	TCT_NumData* FNumLit;
	TCT_StrRef* FStrRef;
	TCT_StrData* FStrLit;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_AxDataSource(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_AxDataSource();
	void __fastcall Clear();
	TCT_MultiLvlStrRef* __fastcall Create_MultiLvlStrRef();
	TCT_NumRef* __fastcall Create_NumRef();
	TCT_NumData* __fastcall Create_NumLit();
	TCT_StrRef* __fastcall Create_StrRef();
	TCT_StrData* __fastcall Create_StrLit();
	__property TCT_MultiLvlStrRef* MultiLvlStrRef = {read=FMultiLvlStrRef};
	__property TCT_NumRef* NumRef = {read=FNumRef};
	__property TCT_NumData* NumLit = {read=FNumLit};
	__property TCT_StrRef* StrRef = {read=FStrRef};
	__property TCT_StrData* StrLit = {read=FStrLit};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BandFmt : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_UnsignedInt* FIdx;
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_BandFmt(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BandFmt();
	void __fastcall Clear();
	TCT_UnsignedInt* __fastcall Create_Idx();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	__property TCT_UnsignedInt* Idx = {read=FIdx};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BandFmtXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_BandFmt* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_BandFmt* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_BandFmt* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_BandFmt* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_BandFmtXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_BandFmtXpgList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_LogBase : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	double FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_LogBase(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LogBase();
	void __fastcall Clear();
	__property double Val = {read=FVal, write=FVal};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Orientation : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_Orientation_2 FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Orientation(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Orientation();
	void __fastcall Clear();
	__property TST_Orientation_2 Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Grouping : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_Grouping FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Grouping(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Grouping();
	void __fastcall Clear();
	__property TST_Grouping Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AreaSer : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
private:
	void __fastcall SetColorRGB(const unsigned Value);
	unsigned __fastcall GetColorRGB();
	
protected:
	TCT_SerieShared* FEG_SerShared;
	TCT_PictureOptions* FPictureOptions;
	TCT_DPtXpgList* FDPtXpgList;
	TCT_DLbls* FDLbls;
	TCT_TrendlineXpgList* FTrendlineXpgList;
	TCT_ErrBarsXpgList* FErrBarsXpgList;
	TCT_AxDataSource* FCat;
	TCT_NumDataSource* FVal;
	TCT_ExtensionList* FExtLst;
	
public:
	__fastcall TCT_AreaSer(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_AreaSer();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_PictureOptions* __fastcall Create_PictureOptions();
	TCT_DPtXpgList* __fastcall Create_DPtXpgList();
	TCT_DLbls* __fastcall Create_DLbls();
	TCT_TrendlineXpgList* __fastcall Create_TrendlineXpgList();
	TCT_ErrBarsXpgList* __fastcall Create_ErrBarsXpgList();
	TCT_AxDataSource* __fastcall Create_Cat();
	TCT_NumDataSource* __fastcall Create_Val();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_SerieShared* Shared = {read=FEG_SerShared};
	__property TCT_PictureOptions* PictureOptions = {read=FPictureOptions};
	__property TCT_DPtXpgList* DPtXpgList = {read=FDPtXpgList};
	__property TCT_DLbls* DLbls = {read=FDLbls};
	__property TCT_TrendlineXpgList* TrendlineXpgList = {read=FTrendlineXpgList};
	__property TCT_ErrBarsXpgList* ErrBarsXpgList = {read=FErrBarsXpgList};
	__property TCT_AxDataSource* Cat = {read=FCat};
	__property TCT_NumDataSource* Val = {read=FVal};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
	__property unsigned ColorRGB = {read=GetColorRGB, write=SetColorRGB, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AreaSeries : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_AreaSer* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_AreaSer* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_AreaSer* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_AreaSer* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_AreaSeries(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_AreaSeries() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LineSer : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
private:
	void __fastcall SetColorRGB(const unsigned Value);
	unsigned __fastcall GetColorRGB();
	
protected:
	TCT_SerieShared* FEG_SerShared;
	TCT_Marker* FMarker;
	TCT_DPtXpgList* FDPtXpgList;
	TCT_DLbls* FDLbls;
	TCT_TrendlineXpgList* FTrendlineXpgList;
	TCT_ErrBars* FErrBars;
	TCT_AxDataSource* FCat;
	TCT_NumDataSource* FVal;
	TCT_Boolean* FSmooth;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_LineSer(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LineSer();
	void __fastcall Clear();
	TCT_Marker* __fastcall Create_Marker();
	TCT_DPtXpgList* __fastcall Create_DPtXpgList();
	TCT_DLbls* __fastcall Create_DLbls();
	TCT_TrendlineXpgList* __fastcall Create_TrendlineXpgList();
	TCT_ErrBars* __fastcall Create_ErrBars();
	TCT_AxDataSource* __fastcall Create_Cat();
	TCT_NumDataSource* __fastcall Create_Val();
	TCT_Boolean* __fastcall Create_Smooth();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_SerieShared* Shared = {read=FEG_SerShared};
	__property TCT_Marker* Marker = {read=FMarker};
	__property TCT_DPtXpgList* DPtXpgList = {read=FDPtXpgList};
	__property TCT_DLbls* DLbls = {read=FDLbls};
	__property TCT_TrendlineXpgList* TrendlineXpgList = {read=FTrendlineXpgList};
	__property TCT_ErrBars* ErrBars = {read=FErrBars};
	__property TCT_AxDataSource* Cat = {read=FCat};
	__property TCT_NumDataSource* Val = {read=FVal};
	__property TCT_Boolean* Smooth = {read=FSmooth};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
	__property unsigned ColorRGB = {read=GetColorRGB, write=SetColorRGB, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LineSeries : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_LineSer* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_LineSer* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_LineSer* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_LineSer* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_LineSeries(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_LineSeries() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GapAmount : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_GapAmount(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GapAmount();
	void __fastcall Clear();
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_UpDownBar : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_UpDownBar(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_UpDownBar();
	void __fastcall Clear();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PieSer : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_SerieShared* FEG_SerShared;
	TCT_UnsignedInt* FExplosion;
	TCT_DPtXpgList* FDPtXpgList;
	TCT_DLbls* FDLbls;
	TCT_AxDataSource* FCat;
	TCT_NumDataSource* FVal;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_PieSer(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PieSer();
	void __fastcall Clear();
	TCT_UnsignedInt* __fastcall Create_Explosion();
	TCT_DPtXpgList* __fastcall Create_DPtXpgList();
	TCT_DLbls* __fastcall Create_DLbls();
	TCT_AxDataSource* __fastcall Create_Cat();
	TCT_NumDataSource* __fastcall Create_Val();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_SerieShared* Shared = {read=FEG_SerShared};
	__property TCT_UnsignedInt* Explosion = {read=FExplosion};
	__property TCT_DPtXpgList* DPtXpgList = {read=FDPtXpgList};
	__property TCT_DLbls* DLbls = {read=FDLbls};
	__property TCT_AxDataSource* Cat = {read=FCat};
	__property TCT_NumDataSource* Val = {read=FVal};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PieSerXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_PieSer* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_PieSer* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_PieSer* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_PieSer* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PieSerXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PieSerXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BarDir : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_BarDir FVal;
	
public:
	__fastcall TCT_BarDir(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BarDir();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__property TST_BarDir Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BarGrouping : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_BarGrouping FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_BarGrouping(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BarGrouping();
	void __fastcall Clear();
	__property TST_BarGrouping Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BarSer : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
private:
	void __fastcall SetColorRGB(const unsigned Value);
	unsigned __fastcall GetColorRGB();
	
protected:
	TCT_SerieShared* FEG_SerShared;
	TCT_Boolean* FInvertIfNegative;
	TCT_PictureOptions* FPictureOptions;
	TCT_DPtXpgList* FDPtXpgList;
	TCT_DLbls* FDLbls;
	TCT_TrendlineXpgList* FTrendlineXpgList;
	TCT_ErrBars* FErrBars;
	TCT_AxDataSource* FCat;
	TCT_NumDataSource* FVal;
	Xpgparsedrawingcommon::TCT_Shape* FShape;
	TCT_ExtensionList* FExtLst;
	
public:
	__fastcall TCT_BarSer(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BarSer();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_Boolean* __fastcall Create_InvertIfNegative();
	TCT_PictureOptions* __fastcall Create_PictureOptions();
	TCT_DPtXpgList* __fastcall Create_DPtXpgList();
	TCT_DLbls* __fastcall Create_DLbls();
	TCT_TrendlineXpgList* __fastcall Create_TrendlineXpgList();
	TCT_ErrBars* __fastcall Create_ErrBars();
	TCT_AxDataSource* __fastcall Create_Cat();
	TCT_NumDataSource* __fastcall Create_Val();
	Xpgparsedrawingcommon::TCT_Shape* __fastcall Create_Shape();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_SerieShared* Shared = {read=FEG_SerShared};
	__property TCT_Boolean* InvertIfNegative = {read=FInvertIfNegative};
	__property TCT_PictureOptions* PictureOptions = {read=FPictureOptions};
	__property TCT_DPtXpgList* DPtXpgList = {read=FDPtXpgList};
	__property TCT_DLbls* DLbls = {read=FDLbls};
	__property TCT_TrendlineXpgList* TrendlineXpgList = {read=FTrendlineXpgList};
	__property TCT_ErrBars* ErrBars = {read=FErrBars};
	__property TCT_AxDataSource* Cat = {read=FCat};
	__property TCT_NumDataSource* Val = {read=FVal};
	__property Xpgparsedrawingcommon::TCT_Shape* Shape = {read=FShape};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
	__property unsigned ColorRGB = {read=GetColorRGB, write=SetColorRGB, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BarSerXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_BarSer* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_BarSer* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_BarSer* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_BarSer* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_BarSerXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_BarSerXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SurfaceSer : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_SerieShared* FEG_SerShared;
	TCT_AxDataSource* FCat;
	TCT_NumDataSource* FVal;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_SurfaceSer(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SurfaceSer();
	void __fastcall Clear();
	TCT_AxDataSource* __fastcall Create_Cat();
	TCT_NumDataSource* __fastcall Create_Val();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_SerieShared* Shared = {read=FEG_SerShared};
	__property TCT_AxDataSource* Cat = {read=FCat};
	__property TCT_NumDataSource* Val = {read=FVal};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SurfaceSerXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_SurfaceSer* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_SurfaceSer* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_SurfaceSer* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_SurfaceSer* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_SurfaceSerXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_SurfaceSerXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BandFmts : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_BandFmtXpgList* FBandFmtXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_BandFmts(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BandFmts();
	void __fastcall Clear();
	TCT_BandFmtXpgList* __fastcall Create_BandFmtXpgList();
	__property TCT_BandFmtXpgList* BandFmtXpgList = {read=FBandFmtXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Scaling : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_LogBase* FLogBase;
	TCT_Orientation* FOrientation;
	TCT_Double* FMax;
	TCT_Double* FMin;
	TCT_ExtensionList* FExtLst;
	
public:
	__fastcall TCT_Scaling(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Scaling();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_LogBase* __fastcall Create_LogBase();
	TCT_Orientation* __fastcall Create_Orientation();
	TCT_Double* __fastcall Create_Max();
	TCT_Double* __fastcall Create_Min();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_LogBase* LogBase = {read=FLogBase};
	__property TCT_Orientation* Orientation = {read=FOrientation};
	__property TCT_Double* Max = {read=FMax};
	__property TCT_Double* Min = {read=FMin};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AxPos : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_AxPos FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_AxPos(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_AxPos();
	void __fastcall Clear();
	__property TST_AxPos Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Title : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_Tx* FTx;
	TCT_Layout* FLayout;
	TCT_Boolean* FOverlay;
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	Xpgparsedrawingcommon::TCT_TextBody* FTxPr;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Title(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Title();
	void __fastcall Clear();
	TCT_Tx* __fastcall Create_Tx();
	TCT_Layout* __fastcall Create_Layout();
	TCT_Boolean* __fastcall Create_Overlay();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	Xpgparsedrawingcommon::TCT_TextBody* __fastcall Create_TxPr();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	void __fastcall Destroy_SpPr();
	__property TCT_Tx* Tx = {read=FTx};
	__property TCT_Layout* Layout = {read=FLayout};
	__property TCT_Boolean* Overlay = {read=FOverlay};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
	__property Xpgparsedrawingcommon::TCT_TextBody* TxPr = {read=FTxPr};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TickMark : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_TickMark FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TickMark(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TickMark();
	void __fastcall Clear();
	__property TST_TickMark Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TickLblPos : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_TickLblPos FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TickLblPos(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TickLblPos();
	void __fastcall Clear();
	__property TST_TickLblPos Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Crosses : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_Crosses FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Crosses(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Crosses();
	void __fastcall Clear();
	__property TST_Crosses Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BuiltInUnit : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_BuiltInUnit FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_BuiltInUnit(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BuiltInUnit();
	void __fastcall Clear();
	__property TST_BuiltInUnit Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DispUnitsLbl : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_Layout* FLayout;
	TCT_Tx* FTx;
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	Xpgparsedrawingcommon::TCT_TextBody* FTxPr;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_DispUnitsLbl(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DispUnitsLbl();
	void __fastcall Clear();
	TCT_Layout* __fastcall Create_Layout();
	TCT_Tx* __fastcall Create_Tx();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	Xpgparsedrawingcommon::TCT_TextBody* __fastcall Create_TxPr();
	__property TCT_Layout* Layout = {read=FLayout};
	__property TCT_Tx* Tx = {read=FTx};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
	__property Xpgparsedrawingcommon::TCT_TextBody* TxPr = {read=FTxPr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_AreaChartShared : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_Grouping* FGrouping;
	TCT_Boolean* FVaryColors;
	TCT_AreaSeries* FSeries;
	TCT_DLbls* FDLbls;
	TCT_ChartLines* FDropLines;
	
public:
	__fastcall TEG_AreaChartShared(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_AreaChartShared();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_Grouping* __fastcall Create_Grouping();
	TCT_Boolean* __fastcall Create_VaryColors();
	TCT_AreaSeries* __fastcall Create_Series();
	TCT_DLbls* __fastcall Create_DLbls();
	TCT_ChartLines* __fastcall Create_DropLines();
	TCT_AreaSer* __fastcall AddSerie(Xlsrelcells5::TXLSRelCells* ARef);
	__property TCT_Grouping* Grouping = {read=FGrouping};
	__property TCT_Boolean* VaryColors = {read=FVaryColors};
	__property TCT_AreaSeries* Series = {read=FSeries};
	__property TCT_DLbls* DLbls = {read=FDLbls};
	__property TCT_ChartLines* DropLines = {read=FDropLines};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_LineChartShared : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_Grouping* FGrouping;
	TCT_Boolean* FVaryColors;
	TCT_LineSeries* FSeries;
	TCT_DLbls* FDLbls;
	TCT_ChartLines* FDropLines;
	
public:
	__fastcall TEG_LineChartShared(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_LineChartShared();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_Grouping* __fastcall Create_Grouping();
	TCT_Boolean* __fastcall Create_VaryColors();
	TCT_LineSeries* __fastcall Create_Ser();
	TCT_DLbls* __fastcall Create_DLbls();
	TCT_ChartLines* __fastcall Create_DropLines();
	TCT_LineSer* __fastcall AddSerie(Xlsrelcells5::TXLSRelCells* ARef, TST_MarkerStyle AMarker);
	__property TCT_Grouping* Grouping = {read=FGrouping};
	__property TCT_Boolean* VaryColors = {read=FVaryColors};
	__property TCT_LineSeries* Series = {read=FSeries};
	__property TCT_DLbls* DLbls = {read=FDLbls};
	__property TCT_ChartLines* DropLines = {read=FDropLines};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_UpDownBars : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_GapAmount* FGapWidth;
	TCT_UpDownBar* FUpBars;
	TCT_UpDownBar* FDownBars;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_UpDownBars(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_UpDownBars();
	void __fastcall Clear();
	TCT_GapAmount* __fastcall Create_GapWidth();
	TCT_UpDownBar* __fastcall Create_UpBars();
	TCT_UpDownBar* __fastcall Create_DownBars();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_GapAmount* GapWidth = {read=FGapWidth};
	__property TCT_UpDownBar* UpBars = {read=FUpBars};
	__property TCT_UpDownBar* DownBars = {read=FDownBars};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RadarStyle : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_RadarStyle FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_RadarStyle(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_RadarStyle();
	void __fastcall Clear();
	__property TST_RadarStyle Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RadarSer : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_SerieShared* FEG_SerShared;
	TCT_Marker* FMarker;
	TCT_DPtXpgList* FDPtXpgList;
	TCT_DLbls* FDLbls;
	TCT_AxDataSource* FCat;
	TCT_NumDataSource* FVal;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_RadarSer(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_RadarSer();
	void __fastcall Clear();
	TCT_Marker* __fastcall Create_Marker();
	TCT_DPtXpgList* __fastcall Create_DPtXpgList();
	TCT_DLbls* __fastcall Create_DLbls();
	TCT_AxDataSource* __fastcall Create_Cat();
	TCT_NumDataSource* __fastcall Create_Val();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_SerieShared* Shared = {read=FEG_SerShared};
	__property TCT_Marker* Marker = {read=FMarker};
	__property TCT_DPtXpgList* DPtXpgList = {read=FDPtXpgList};
	__property TCT_DLbls* DLbls = {read=FDLbls};
	__property TCT_AxDataSource* Cat = {read=FCat};
	__property TCT_NumDataSource* Val = {read=FVal};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RadarSeries : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_RadarSer* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_RadarSer* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_RadarSer* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_RadarSer* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_RadarSeries(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_RadarSeries() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ScatterStyle : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_ScatterStyle FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ScatterStyle(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ScatterStyle();
	void __fastcall Clear();
	__property TST_ScatterStyle Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ScatterSer : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_SerieShared* FEG_SerShared;
	TCT_Marker* FMarker;
	TCT_DPtXpgList* FDPtXpgList;
	TCT_DLbls* FDLbls;
	TCT_TrendlineXpgList* FTrendlineXpgList;
	TCT_ErrBarsXpgList* FErrBarsXpgList;
	TCT_AxDataSource* FXVal;
	TCT_NumDataSource* FYVal;
	TCT_Boolean* FSmooth;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_ScatterSer(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ScatterSer();
	void __fastcall Clear();
	TCT_Marker* __fastcall Create_Marker();
	TCT_DPtXpgList* __fastcall Create_DPtXpgList();
	TCT_DLbls* __fastcall Create_DLbls();
	TCT_TrendlineXpgList* __fastcall Create_TrendlineXpgList();
	TCT_ErrBarsXpgList* __fastcall Create_ErrBarsXpgList();
	TCT_AxDataSource* __fastcall Create_XVal();
	TCT_NumDataSource* __fastcall Create_YVal();
	TCT_Boolean* __fastcall Create_Smooth();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_SerieShared* Shared = {read=FEG_SerShared};
	__property TCT_Marker* Marker = {read=FMarker};
	__property TCT_DPtXpgList* DPtXpgList = {read=FDPtXpgList};
	__property TCT_DLbls* DLbls = {read=FDLbls};
	__property TCT_TrendlineXpgList* TrendlineXpgList = {read=FTrendlineXpgList};
	__property TCT_ErrBarsXpgList* ErrBarsXpgList = {read=FErrBarsXpgList};
	__property TCT_AxDataSource* XVal = {read=FXVal};
	__property TCT_NumDataSource* YVal = {read=FYVal};
	__property TCT_Boolean* Smooth = {read=FSmooth};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ScatterSeries : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_ScatterSer* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ScatterSer* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ScatterSer* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_ScatterSer* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ScatterSeries(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ScatterSeries() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_PieChartShared : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_Boolean* FVaryColors;
	TCT_PieSer* FSer;
	TCT_DLbls* FDLbls;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_PieSer* __fastcall AddSerie(Xlsrelcells5::TXLSRelCells* ARef);
	__fastcall TEG_PieChartShared(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_PieChartShared();
	void __fastcall Clear();
	TCT_Boolean* __fastcall Create_VaryColors();
	TCT_PieSer* __fastcall Create_Ser();
	TCT_DLbls* __fastcall Create_DLbls();
	__property TCT_Boolean* VaryColors = {read=FVaryColors};
	__property TCT_PieSer* Ser = {read=FSer};
	__property TCT_DLbls* DLbls = {read=FDLbls};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FirstSliceAng : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_FirstSliceAng(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FirstSliceAng();
	void __fastcall Clear();
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_HoleSize : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_HoleSize(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_HoleSize();
	void __fastcall Clear();
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BarSeries : public Xpgparsedrawingcommon::TXPGBaseList
{
	typedef Xpgparsedrawingcommon::TXPGBaseList inherited;
	
public:
	TCT_BarSer* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TCT_BarSer* __fastcall GetItems(int Index);
	
protected:
	Xpgparsedrawingcommon::TXPGDocBase* FOwner;
	
public:
	__fastcall TCT_BarSeries(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	HIDESBASE TCT_BarSer* __fastcall Add();
	__property TCT_BarSer* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_BarSeries() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_BarChartShared : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_BarDir* FBarDir;
	TCT_BarGrouping* FGrouping;
	TCT_Boolean* FVaryColors;
	TCT_BarSeries* FSeries;
	TCT_DLbls* FDLbls;
	
public:
	__fastcall TEG_BarChartShared(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_BarChartShared();
	void __fastcall Clear();
	TCT_BarSer* __fastcall AddSerie(Xlsrelcells5::TXLSRelCells* ARef, bool AFirstIsName);
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_BarDir* __fastcall Create_BarDir();
	TCT_BarGrouping* __fastcall Create_Grouping();
	TCT_Boolean* __fastcall Create_VaryColors();
	TCT_DLbls* __fastcall Create_DLbls();
	__property TCT_BarDir* BarDir = {read=FBarDir};
	__property TCT_BarGrouping* Grouping = {read=FGrouping};
	__property TCT_Boolean* VaryColors = {read=FVaryColors};
	__property TCT_BarSeries* Series = {read=FSeries};
	__property TCT_DLbls* DLbls = {read=FDLbls};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Overlap : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Overlap(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Overlap();
	void __fastcall Clear();
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OfPieType : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_OfPieType FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_OfPieType(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_OfPieType();
	void __fastcall Clear();
	__property TST_OfPieType Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SplitType : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_SplitType FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_SplitType(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SplitType();
	void __fastcall Clear();
	__property TST_SplitType Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustSplit : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_UnsignedIntXpgList* FSecondPiePtXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_CustSplit(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CustSplit();
	void __fastcall Clear();
	TCT_UnsignedIntXpgList* __fastcall Create_SecondPiePtXpgList();
	__property TCT_UnsignedIntXpgList* SecondPiePtXpgList = {read=FSecondPiePtXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SecondPieSize : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_SecondPieSize(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SecondPieSize();
	void __fastcall Clear();
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_SurfaceChartShared : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_Boolean* FWireframe;
	TCT_SurfaceSerXpgList* FSeries;
	TCT_BandFmts* FBandFmts;
	
public:
	__fastcall TEG_SurfaceChartShared(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_SurfaceChartShared();
	void __fastcall Clear();
	TCT_SurfaceSer* __fastcall AddSerie(Xlsrelcells5::TXLSRelCells* ARef);
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_Boolean* __fastcall Create_Wireframe();
	TCT_SurfaceSerXpgList* __fastcall Create_Series();
	TCT_BandFmts* __fastcall Create_BandFmts();
	__property TCT_Boolean* Wireframe = {read=FWireframe};
	__property TCT_SurfaceSerXpgList* Series = {read=FSeries};
	__property TCT_BandFmts* BandFmts = {read=FBandFmts};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BubbleSer : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_SerieShared* FEG_SerShared;
	TCT_Boolean* FInvertIfNegative;
	TCT_DPtXpgList* FDPtXpgList;
	TCT_DLbls* FDLbls;
	TCT_TrendlineXpgList* FTrendlineXpgList;
	TCT_ErrBarsXpgList* FErrBarsXpgList;
	TCT_AxDataSource* FXVal;
	TCT_NumDataSource* FYVal;
	TCT_NumDataSource* FBubbleSize;
	TCT_Boolean* FBubble3D;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_BubbleSer(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BubbleSer();
	void __fastcall Clear();
	TCT_Boolean* __fastcall Create_InvertIfNegative();
	TCT_DPtXpgList* __fastcall Create_DPtXpgList();
	TCT_DLbls* __fastcall Create_DLbls();
	TCT_TrendlineXpgList* __fastcall Create_TrendlineXpgList();
	TCT_ErrBarsXpgList* __fastcall Create_ErrBarsXpgList();
	TCT_AxDataSource* __fastcall Create_XVal();
	TCT_NumDataSource* __fastcall Create_YVal();
	TCT_NumDataSource* __fastcall Create_BubbleSize();
	TCT_Boolean* __fastcall Create_Bubble3D();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_SerieShared* Shared = {read=FEG_SerShared};
	__property TCT_Boolean* InvertIfNegative = {read=FInvertIfNegative};
	__property TCT_DPtXpgList* DPtXpgList = {read=FDPtXpgList};
	__property TCT_DLbls* DLbls = {read=FDLbls};
	__property TCT_TrendlineXpgList* TrendlineXpgList = {read=FTrendlineXpgList};
	__property TCT_ErrBarsXpgList* ErrBarsXpgList = {read=FErrBarsXpgList};
	__property TCT_AxDataSource* XVal = {read=FXVal};
	__property TCT_NumDataSource* YVal = {read=FYVal};
	__property TCT_NumDataSource* BubbleSize = {read=FBubbleSize};
	__property TCT_Boolean* Bubble3D = {read=FBubble3D};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BubbleSeries : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_BubbleSer* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_BubbleSer* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_BubbleSer* __fastcall Add()/* overload */;
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_BubbleSer* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_BubbleSeries(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_BubbleSeries() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BubbleScale : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_BubbleScale(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BubbleScale();
	void __fastcall Clear();
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SizeRepresents : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_SizeRepresents FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_SizeRepresents(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SizeRepresents();
	void __fastcall Clear();
	__property TST_SizeRepresents Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_AxShared : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_UnsignedInt* FAxId;
	TCT_Scaling* FScaling;
	TCT_Boolean* FDelete;
	TCT_AxPos* FAxPos;
	TCT_ChartLines* FMajorGridlines;
	TCT_ChartLines* FMinorGridlines;
	TCT_Title* FTitle;
	TCT_NumFmt* FNumFmt;
	TCT_TickMark* FMajorTickMark;
	TCT_TickMark* FMinorTickMark;
	TCT_TickLblPos* FTickLblPos;
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	Xpgparsedrawingcommon::TCT_TextBody* FTxPr;
	TCT_UnsignedInt* FCrossAx;
	TCT_Crosses* FCrosses;
	TCT_Double* FCrossesAt;
	
public:
	__fastcall TEG_AxShared(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_AxShared();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_Boolean* __fastcall Create_Delete();
	TCT_ChartLines* __fastcall Create_MajorGridlines();
	TCT_ChartLines* __fastcall Create_MinorGridlines();
	TCT_Title* __fastcall Create_Title();
	TCT_NumFmt* __fastcall Create_NumFmt();
	TCT_TickMark* __fastcall Create_MajorTickMark();
	TCT_TickMark* __fastcall Create_MinorTickMark();
	TCT_TickLblPos* __fastcall Create_TickLblPos();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	Xpgparsedrawingcommon::TCT_TextBody* __fastcall Create_TxPr();
	TCT_Crosses* __fastcall Create_Crosses();
	TCT_Double* __fastcall Create_CrossesAt();
	TCT_Scaling* __fastcall Create_Scaling();
	void __fastcall Remove_MajorGridlines();
	__property TCT_UnsignedInt* AxId = {read=FAxId};
	__property TCT_Scaling* Scaling = {read=FScaling};
	__property TCT_Boolean* Delete = {read=FDelete};
	__property TCT_AxPos* AxPos = {read=FAxPos};
	__property TCT_ChartLines* MajorGridlines = {read=FMajorGridlines};
	__property TCT_ChartLines* MinorGridlines = {read=FMinorGridlines};
	__property TCT_Title* Title = {read=FTitle};
	__property TCT_NumFmt* NumFmt = {read=FNumFmt};
	__property TCT_TickMark* MajorTickMark = {read=FMajorTickMark};
	__property TCT_TickMark* MinorTickMark = {read=FMinorTickMark};
	__property TCT_TickLblPos* TickLblPos = {read=FTickLblPos};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
	__property Xpgparsedrawingcommon::TCT_TextBody* TxPr = {read=FTxPr};
	__property TCT_UnsignedInt* CrossAx = {read=FCrossAx};
	__property TCT_Crosses* Crosses = {read=FCrosses};
	__property TCT_Double* CrossesAt = {read=FCrossesAt};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CrossBetween : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_CrossBetween FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_CrossBetween(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CrossBetween();
	void __fastcall Clear();
	__property TST_CrossBetween Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_AxisUnit : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	double FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_AxisUnit(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_AxisUnit();
	void __fastcall Clear();
	__property double Val = {read=FVal, write=FVal};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DispUnits : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_Double* FCustUnit;
	TCT_BuiltInUnit* FBuiltInUnit;
	TCT_DispUnitsLbl* FDispUnitsLbl;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_DispUnits(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DispUnits();
	void __fastcall Clear();
	TCT_Double* __fastcall Create_CustUnit();
	TCT_BuiltInUnit* __fastcall Create_BuiltInUnit();
	TCT_DispUnitsLbl* __fastcall Create_DispUnitsLbl();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_Double* CustUnit = {read=FCustUnit};
	__property TCT_BuiltInUnit* BuiltInUnit = {read=FBuiltInUnit};
	__property TCT_DispUnitsLbl* DispUnitsLbl = {read=FDispUnitsLbl};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LblAlgn : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_LblAlgn FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_LblAlgn(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LblAlgn();
	void __fastcall Clear();
	__property TST_LblAlgn Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LblOffset : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_LblOffset(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LblOffset();
	void __fastcall Clear();
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Skip : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Skip(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Skip();
	void __fastcall Clear();
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TimeUnit : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_TimeUnit FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TimeUnit(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TimeUnit();
	void __fastcall Clear();
	__property TST_TimeUnit Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_LegendEntryData : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	Xpgparsedrawingcommon::TCT_TextBody* FTxPr;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_LegendEntryData(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_LegendEntryData();
	void __fastcall Clear();
	Xpgparsedrawingcommon::TCT_TextBody* __fastcall Create_TxPr();
	__property Xpgparsedrawingcommon::TCT_TextBody* TxPr = {read=FTxPr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ColorMapping : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	Xpgparsedrawingcommon::TST_ColorSchemeIndex FBg1;
	Xpgparsedrawingcommon::TST_ColorSchemeIndex FTx1;
	Xpgparsedrawingcommon::TST_ColorSchemeIndex FBg2;
	Xpgparsedrawingcommon::TST_ColorSchemeIndex FTx2;
	Xpgparsedrawingcommon::TST_ColorSchemeIndex FAccent1;
	Xpgparsedrawingcommon::TST_ColorSchemeIndex FAccent2;
	Xpgparsedrawingcommon::TST_ColorSchemeIndex FAccent3;
	Xpgparsedrawingcommon::TST_ColorSchemeIndex FAccent4;
	Xpgparsedrawingcommon::TST_ColorSchemeIndex FAccent5;
	Xpgparsedrawingcommon::TST_ColorSchemeIndex FAccent6;
	Xpgparsedrawingcommon::TST_ColorSchemeIndex FHlink;
	Xpgparsedrawingcommon::TST_ColorSchemeIndex FFolHlink;
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ColorMapping(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ColorMapping();
	void __fastcall Clear();
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property Xpgparsedrawingcommon::TST_ColorSchemeIndex Bg1 = {read=FBg1, write=FBg1, nodefault};
	__property Xpgparsedrawingcommon::TST_ColorSchemeIndex Tx1 = {read=FTx1, write=FTx1, nodefault};
	__property Xpgparsedrawingcommon::TST_ColorSchemeIndex Bg2 = {read=FBg2, write=FBg2, nodefault};
	__property Xpgparsedrawingcommon::TST_ColorSchemeIndex Tx2 = {read=FTx2, write=FTx2, nodefault};
	__property Xpgparsedrawingcommon::TST_ColorSchemeIndex Accent1 = {read=FAccent1, write=FAccent1, nodefault};
	__property Xpgparsedrawingcommon::TST_ColorSchemeIndex Accent2 = {read=FAccent2, write=FAccent2, nodefault};
	__property Xpgparsedrawingcommon::TST_ColorSchemeIndex Accent3 = {read=FAccent3, write=FAccent3, nodefault};
	__property Xpgparsedrawingcommon::TST_ColorSchemeIndex Accent4 = {read=FAccent4, write=FAccent4, nodefault};
	__property Xpgparsedrawingcommon::TST_ColorSchemeIndex Accent5 = {read=FAccent5, write=FAccent5, nodefault};
	__property Xpgparsedrawingcommon::TST_ColorSchemeIndex Accent6 = {read=FAccent6, write=FAccent6, nodefault};
	__property Xpgparsedrawingcommon::TST_ColorSchemeIndex Hlink = {read=FHlink, write=FHlink, nodefault};
	__property Xpgparsedrawingcommon::TST_ColorSchemeIndex FolHlink = {read=FFolHlink, write=FFolHlink, nodefault};
	__property Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotFmt : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_UnsignedInt* FIdx;
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	Xpgparsedrawingcommon::TCT_TextBody* FTxPr;
	TCT_Marker* FMarker;
	TCT_DLbl* FDLbl;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_PivotFmt(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotFmt();
	void __fastcall Clear();
	TCT_UnsignedInt* __fastcall Create_Idx();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	Xpgparsedrawingcommon::TCT_TextBody* __fastcall Create_TxPr();
	TCT_Marker* __fastcall Create_Marker();
	TCT_DLbl* __fastcall Create_DLbl();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_UnsignedInt* Idx = {read=FIdx};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
	__property Xpgparsedrawingcommon::TCT_TextBody* TxPr = {read=FTxPr};
	__property TCT_Marker* Marker = {read=FMarker};
	__property TCT_DLbl* DLbl = {read=FDLbl};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotFmtXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_PivotFmt* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_PivotFmt* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_PivotFmt* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_PivotFmt* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PivotFmtXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PivotFmtXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RotX : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_RotX(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_RotX();
	void __fastcall Clear();
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_HPercent : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_HPercent(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_HPercent();
	void __fastcall Clear();
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RotY : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_RotY(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_RotY();
	void __fastcall Clear();
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DepthPercent : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_DepthPercent(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DepthPercent();
	void __fastcall Clear();
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Perspective : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Perspective(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Perspective();
	void __fastcall Clear();
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AreaChart : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TEG_AreaChartShared* FEG_AreaChartShared;
	TCT_UnsignedIntXpgList* FAxIdXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	__fastcall TCT_AreaChart(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_AreaChart();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_UnsignedIntXpgList* __fastcall Create_AxId();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TEG_AreaChartShared* Shared = {read=FEG_AreaChartShared};
	__property TCT_UnsignedIntXpgList* AxId = {read=FAxIdXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AreaCharts : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_AreaChart* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_AreaChart* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_AreaChart* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_AreaChart* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_AreaCharts(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_AreaCharts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Area3DChart : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TEG_AreaChartShared* FEG_AreaChartShared;
	TCT_GapAmount* FGapDepth;
	TCT_UnsignedIntXpgList* FAxIdXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Area3DChart(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Area3DChart();
	void __fastcall Clear();
	TCT_GapAmount* __fastcall Create_GapDepth();
	TCT_UnsignedIntXpgList* __fastcall Create_AxId();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TEG_AreaChartShared* Shared = {read=FEG_AreaChartShared};
	__property TCT_GapAmount* GapDepth = {read=FGapDepth};
	__property TCT_UnsignedIntXpgList* AxId = {read=FAxIdXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Area3DCharts : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_Area3DChart* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Area3DChart* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Area3DChart* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Area3DChart* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_Area3DCharts(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_Area3DCharts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LineChart : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TEG_LineChartShared* FEG_LineChartShared;
	TCT_ChartLines* FHiLowLines;
	TCT_UpDownBars* FUpDownBars;
	TCT_Boolean* FMarker;
	TCT_Boolean* FSmooth;
	TCT_UnsignedIntXpgList* FAxIdXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	__fastcall TCT_LineChart(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LineChart();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_ChartLines* __fastcall Create_HiLowLines();
	TCT_UpDownBars* __fastcall Create_UpDownBars();
	TCT_Boolean* __fastcall Create_Marker();
	TCT_Boolean* __fastcall Create_Smooth();
	TCT_UnsignedIntXpgList* __fastcall Create_AxId();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TEG_LineChartShared* Shared = {read=FEG_LineChartShared};
	__property TCT_ChartLines* HiLowLines = {read=FHiLowLines};
	__property TCT_UpDownBars* UpDownBars = {read=FUpDownBars};
	__property TCT_Boolean* Marker = {read=FMarker};
	__property TCT_Boolean* Smooth = {read=FSmooth};
	__property TCT_UnsignedIntXpgList* AxId = {read=FAxIdXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LineCharts : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_LineChart* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_LineChart* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_LineChart* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_LineChart* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_LineCharts(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_LineCharts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Line3DChart : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TEG_LineChartShared* FEG_LineChartShared;
	TCT_GapAmount* FGapDepth;
	TCT_UnsignedIntXpgList* FAxIdXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	__fastcall TCT_Line3DChart(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Line3DChart();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_GapAmount* __fastcall Create_GapDepth();
	TCT_UnsignedIntXpgList* __fastcall Create_AxId();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TEG_LineChartShared* Shared = {read=FEG_LineChartShared};
	__property TCT_GapAmount* GapDepth = {read=FGapDepth};
	__property TCT_UnsignedIntXpgList* AxId = {read=FAxIdXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Line3DCharts : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_Line3DChart* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Line3DChart* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Line3DChart* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Line3DChart* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_Line3DCharts(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_Line3DCharts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_StockChart : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_LineSeries* FSerXpgList;
	TCT_DLbls* FDLbls;
	TCT_ChartLines* FDropLines;
	TCT_ChartLines* FHiLowLines;
	TCT_UpDownBars* FUpDownBars;
	TCT_UnsignedIntXpgList* FAxIdXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_StockChart(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_StockChart();
	void __fastcall Clear();
	TCT_LineSeries* __fastcall Create_SerXpgList();
	TCT_DLbls* __fastcall Create_DLbls();
	TCT_ChartLines* __fastcall Create_DropLines();
	TCT_ChartLines* __fastcall Create_HiLowLines();
	TCT_UpDownBars* __fastcall Create_UpDownBars();
	TCT_UnsignedIntXpgList* __fastcall Create_AxIdXpgList();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_LineSeries* SerXpgList = {read=FSerXpgList};
	__property TCT_DLbls* DLbls = {read=FDLbls};
	__property TCT_ChartLines* DropLines = {read=FDropLines};
	__property TCT_ChartLines* HiLowLines = {read=FHiLowLines};
	__property TCT_UpDownBars* UpDownBars = {read=FUpDownBars};
	__property TCT_UnsignedIntXpgList* AxIdXpgList = {read=FAxIdXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_StockCharts : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_StockChart* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_StockChart* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_StockChart* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_StockChart* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_StockCharts(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_StockCharts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RadarChart : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_RadarStyle* FRadarStyle;
	TCT_Boolean* FVaryColors;
	TCT_RadarSeries* FSeries;
	TCT_DLbls* FDLbls;
	TCT_UnsignedIntXpgList* FAxIdXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	__fastcall TCT_RadarChart(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_RadarChart();
	void __fastcall Clear();
	TCT_RadarSer* __fastcall AddSerie(Xlsrelcells5::TXLSRelCells* ARef);
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_RadarStyle* __fastcall Create_RadarStyle();
	TCT_Boolean* __fastcall Create_VaryColors();
	TCT_RadarSeries* __fastcall Create_SerXpgList();
	TCT_DLbls* __fastcall Create_DLbls();
	TCT_UnsignedIntXpgList* __fastcall Create_AxId();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_RadarStyle* RadarStyle = {read=FRadarStyle};
	__property TCT_Boolean* VaryColors = {read=FVaryColors};
	__property TCT_RadarSeries* Series = {read=FSeries};
	__property TCT_DLbls* DLbls = {read=FDLbls};
	__property TCT_UnsignedIntXpgList* AxId = {read=FAxIdXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RadarCharts : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_RadarChart* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_RadarChart* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_RadarChart* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_RadarChart* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_RadarCharts(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_RadarCharts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ScatterChart : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_ScatterStyle* FScatterStyle;
	TCT_Boolean* FVaryColors;
	TCT_ScatterSeries* FSeries;
	TCT_DLbls* FDLbls;
	TCT_UnsignedIntXpgList* FAxIdXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	__fastcall TCT_ScatterChart(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ScatterChart();
	void __fastcall Clear();
	TCT_ScatterSer* __fastcall AddSerie(Xlsrelcells5::TXLSRelCells* AXRef, Xlsrelcells5::TXLSRelCells* AYRef);
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_ScatterStyle* __fastcall Create_ScatterStyle();
	TCT_Boolean* __fastcall Create_VaryColors();
	TCT_ScatterSeries* __fastcall Create_Series();
	TCT_DLbls* __fastcall Create_DLbls();
	TCT_UnsignedIntXpgList* __fastcall Create_AxId();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_ScatterStyle* ScatterStyle = {read=FScatterStyle};
	__property TCT_Boolean* VaryColors = {read=FVaryColors};
	__property TCT_ScatterSeries* Series = {read=FSeries};
	__property TCT_DLbls* DLbls = {read=FDLbls};
	__property TCT_UnsignedIntXpgList* AxId = {read=FAxIdXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ScatterCharts : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_ScatterChart* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ScatterChart* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ScatterChart* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_ScatterChart* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ScatterCharts(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ScatterCharts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PieChart : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TEG_PieChartShared* FEG_PieChartShared;
	TCT_FirstSliceAng* FFirstSliceAng;
	TCT_ExtensionList* FExtLst;
	
public:
	__fastcall TCT_PieChart(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PieChart();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_FirstSliceAng* __fastcall Create_FirstSliceAng();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TEG_PieChartShared* Shared = {read=FEG_PieChartShared};
	__property TCT_FirstSliceAng* FirstSliceAng = {read=FFirstSliceAng};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PieCharts : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_PieChart* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_PieChart* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_PieChart* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_PieChart* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PieCharts(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PieCharts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Pie3DChart : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TEG_PieChartShared* FEG_PieChartShared;
	TCT_FirstSliceAng* FFirstSliceAng;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Pie3DChart(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Pie3DChart();
	void __fastcall Clear();
	TCT_FirstSliceAng* __fastcall Create_FirstSliceAng();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TEG_PieChartShared* Shared = {read=FEG_PieChartShared};
	__property TCT_FirstSliceAng* FirstSliceAng = {read=FFirstSliceAng};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Pie3DCharts : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_Pie3DChart* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Pie3DChart* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Pie3DChart* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Pie3DChart* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_Pie3DCharts(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_Pie3DCharts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DoughnutChart : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TEG_PieChartShared* FEG_PieChartShared;
	TCT_FirstSliceAng* FFirstSliceAng;
	TCT_HoleSize* FHoleSize;
	TCT_ExtensionList* FExtLst;
	
public:
	__fastcall TCT_DoughnutChart(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DoughnutChart();
	void __fastcall Clear();
	TCT_PieSer* __fastcall AddSerie(Xlsrelcells5::TXLSRelCells* ARef);
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_FirstSliceAng* __fastcall Create_FirstSliceAng();
	TCT_HoleSize* __fastcall Create_HoleSize();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TEG_PieChartShared* Shared = {read=FEG_PieChartShared};
	__property TCT_FirstSliceAng* FirstSliceAng = {read=FFirstSliceAng};
	__property TCT_HoleSize* HoleSize = {read=FHoleSize};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DoughnutCharts : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_DoughnutChart* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_DoughnutChart* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_DoughnutChart* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_DoughnutChart* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_DoughnutCharts(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_DoughnutCharts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BarChart : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TEG_BarChartShared* FEG_BarChartShared;
	TCT_GapAmount* FGapWidth;
	TCT_Overlap* FOverlap;
	TCT_ChartLinesXpgList* FSerLinesXpgList;
	TCT_UnsignedIntXpgList* FAxIdXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	__fastcall TCT_BarChart(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BarChart();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_GapAmount* __fastcall Create_GapWidth();
	TCT_Overlap* __fastcall Create_Overlap();
	TCT_ChartLinesXpgList* __fastcall Create_SerLinesXpgList();
	TCT_UnsignedIntXpgList* __fastcall Create_AxId();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TEG_BarChartShared* Shared = {read=FEG_BarChartShared};
	__property TCT_GapAmount* GapWidth = {read=FGapWidth};
	__property TCT_Overlap* Overlap = {read=FOverlap};
	__property TCT_ChartLinesXpgList* SerLinesXpgList = {read=FSerLinesXpgList};
	__property TCT_UnsignedIntXpgList* AxId = {read=FAxIdXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BarCharts : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_BarChart* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_BarChart* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_BarChart* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_BarChart* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_BarCharts(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_BarCharts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Bar3DChart : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TEG_BarChartShared* FEG_BarChartShared;
	TCT_GapAmount* FGapWidth;
	TCT_GapAmount* FGapDepth;
	TCT_Shape_Chart* FShape;
	TCT_UnsignedIntXpgList* FAxIdXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	__fastcall TCT_Bar3DChart(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Bar3DChart();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_GapAmount* __fastcall Create_GapWidth();
	TCT_GapAmount* __fastcall Create_GapDepth();
	TCT_Shape_Chart* __fastcall Create_Shape();
	TCT_UnsignedIntXpgList* __fastcall Create_AxId();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TEG_BarChartShared* Shared = {read=FEG_BarChartShared};
	__property TCT_GapAmount* GapWidth = {read=FGapWidth};
	__property TCT_GapAmount* GapDepth = {read=FGapDepth};
	__property TCT_Shape_Chart* Shape = {read=FShape};
	__property TCT_UnsignedIntXpgList* AxId = {read=FAxIdXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Bar3DCharts : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_Bar3DChart* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Bar3DChart* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Bar3DChart* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Bar3DChart* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_Bar3DCharts(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_Bar3DCharts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OfPieChart : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_OfPieType* FOfPieType;
	TEG_PieChartShared* FEG_PieChartShared;
	TCT_GapAmount* FGapWidth;
	TCT_SplitType* FSplitType;
	TCT_Double* FSplitPos;
	TCT_CustSplit* FCustSplit;
	TCT_SecondPieSize* FSecondPieSize;
	TCT_ChartLinesXpgList* FSerLinesXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	__fastcall TCT_OfPieChart(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_OfPieChart();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_OfPieType* __fastcall Create_OfPieType();
	TCT_GapAmount* __fastcall Create_GapWidth();
	TCT_SplitType* __fastcall Create_SplitType();
	TCT_Double* __fastcall Create_SplitPos();
	TCT_CustSplit* __fastcall Create_CustSplit();
	TCT_SecondPieSize* __fastcall Create_SecondPieSize();
	TCT_ChartLinesXpgList* __fastcall Create_SerLines();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_OfPieType* OfPieType = {read=FOfPieType};
	__property TEG_PieChartShared* Shared = {read=FEG_PieChartShared};
	__property TCT_GapAmount* GapWidth = {read=FGapWidth};
	__property TCT_SplitType* SplitType = {read=FSplitType};
	__property TCT_Double* SplitPos = {read=FSplitPos};
	__property TCT_CustSplit* CustSplit = {read=FCustSplit};
	__property TCT_SecondPieSize* SecondPieSize = {read=FSecondPieSize};
	__property TCT_ChartLinesXpgList* SerLines = {read=FSerLinesXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OfPieCharts : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_OfPieChart* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_OfPieChart* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_OfPieChart* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_OfPieChart* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_OfPieCharts(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_OfPieCharts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SurfaceChart : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TEG_SurfaceChartShared* FEG_SurfaceChartShared;
	TCT_UnsignedIntXpgList* FAxIdXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_SurfaceChart(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SurfaceChart();
	void __fastcall Clear();
	TCT_UnsignedIntXpgList* __fastcall Create_AxIdXpgList();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TEG_SurfaceChartShared* EG_SurfaceChartShared = {read=FEG_SurfaceChartShared};
	__property TCT_UnsignedIntXpgList* AxIdXpgList = {read=FAxIdXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SurfaceCharts : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_SurfaceChart* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_SurfaceChart* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_SurfaceChart* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_SurfaceChart* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_SurfaceCharts(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_SurfaceCharts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Surface3DChart : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TEG_SurfaceChartShared* FEG_SurfaceChartShared;
	TCT_UnsignedIntXpgList* FAxIdXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	__fastcall TCT_Surface3DChart(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Surface3DChart();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_UnsignedIntXpgList* __fastcall Create_AxId();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TEG_SurfaceChartShared* Shared = {read=FEG_SurfaceChartShared};
	__property TCT_UnsignedIntXpgList* AxId = {read=FAxIdXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Surface3DCharts : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_Surface3DChart* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Surface3DChart* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Surface3DChart* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Surface3DChart* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_Surface3DCharts(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_Surface3DCharts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BubbleChart : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_Boolean* FVaryColors;
	TCT_BubbleSeries* FSeries;
	TCT_DLbls* FDLbls;
	TCT_Boolean* FBubble3D;
	TCT_BubbleScale* FBubbleScale;
	TCT_Boolean* FShowNegBubbles;
	TCT_SizeRepresents* FSizeRepresents;
	TCT_UnsignedIntXpgList* FAxIdXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	__fastcall TCT_BubbleChart(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BubbleChart();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_Boolean* __fastcall Create_VaryColors();
	TCT_BubbleSeries* __fastcall Create_Series();
	TCT_DLbls* __fastcall Create_DLbls();
	TCT_Boolean* __fastcall Create_Bubble3D();
	TCT_BubbleScale* __fastcall Create_BubbleScale();
	TCT_Boolean* __fastcall Create_ShowNegBubbles();
	TCT_SizeRepresents* __fastcall Create_SizeRepresents();
	TCT_UnsignedIntXpgList* __fastcall Create_AxId();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	TCT_BubbleSer* __fastcall AddSerie(Xlsrelcells5::TXLSRelCells* AXRef, Xlsrelcells5::TXLSRelCells* AYRef, Xlsrelcells5::TXLSRelCells* ASzRef, bool A3D = false);
	__property TCT_Boolean* VaryColors = {read=FVaryColors};
	__property TCT_BubbleSeries* Series = {read=FSeries};
	__property TCT_DLbls* DLbls = {read=FDLbls};
	__property TCT_Boolean* Bubble3D = {read=FBubble3D};
	__property TCT_BubbleScale* BubbleScale = {read=FBubbleScale};
	__property TCT_Boolean* ShowNegBubbles = {read=FShowNegBubbles};
	__property TCT_SizeRepresents* SizeRepresents = {read=FSizeRepresents};
	__property TCT_UnsignedIntXpgList* AxId = {read=FAxIdXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BubbleCharts : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_BubbleChart* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_BubbleChart* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_BubbleChart* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_BubbleChart* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_BubbleCharts(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_BubbleCharts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ValAx : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TEG_AxShared* FEG_AxShared;
	TCT_CrossBetween* FCrossBetween;
	TCT_AxisUnit* FMajorUnit;
	TCT_AxisUnit* FMinorUnit;
	TCT_DispUnits* FDispUnits;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_ValAx(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ValAx();
	void __fastcall Clear();
	TCT_CrossBetween* __fastcall Create_CrossBetween();
	TCT_AxisUnit* __fastcall Create_MajorUnit();
	TCT_AxisUnit* __fastcall Create_MinorUnit();
	TCT_DispUnits* __fastcall Create_DispUnits();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	void __fastcall SetMinMax(double AMin, double AMax)/* overload */;
	void __fastcall SetMinMax(const System::Variant &AMin, const System::Variant &AMax)/* overload */;
	void __fastcall SetMinAuto();
	void __fastcall SetMaxAuto();
	__property TEG_AxShared* Shared = {read=FEG_AxShared};
	__property TCT_CrossBetween* CrossBetween = {read=FCrossBetween};
	__property TCT_AxisUnit* MajorUnit = {read=FMajorUnit};
	__property TCT_AxisUnit* MinorUnit = {read=FMinorUnit};
	__property TCT_DispUnits* DispUnits = {read=FDispUnits};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ValAxXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_ValAx* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ValAx* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ValAx* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_ValAx* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ValAxXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ValAxXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CatAx : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TEG_AxShared* FEG_AxShared;
	TCT_Boolean* FAuto;
	TCT_LblAlgn* FLblAlgn;
	TCT_LblOffset* FLblOffset;
	TCT_Skip* FTickLblSkip;
	TCT_Skip* FTickMarkSkip;
	TCT_Boolean* FNoMultiLvlLbl;
	TCT_ExtensionList* FExtLst;
	
public:
	__fastcall TCT_CatAx(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CatAx();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_Boolean* __fastcall Create_Auto();
	TCT_LblAlgn* __fastcall Create_LblAlgn();
	TCT_LblOffset* __fastcall Create_LblOffset();
	TCT_Skip* __fastcall Create_TickLblSkip();
	TCT_Skip* __fastcall Create_TickMarkSkip();
	TCT_Boolean* __fastcall Create_NoMultiLvlLbl();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TEG_AxShared* Shared = {read=FEG_AxShared};
	__property TCT_Boolean* Auto = {read=FAuto};
	__property TCT_LblAlgn* LblAlgn = {read=FLblAlgn};
	__property TCT_LblOffset* LblOffset = {read=FLblOffset};
	__property TCT_Skip* TickLblSkip = {read=FTickLblSkip};
	__property TCT_Skip* TickMarkSkip = {read=FTickMarkSkip};
	__property TCT_Boolean* NoMultiLvlLbl = {read=FNoMultiLvlLbl};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CatAxXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_CatAx* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_CatAx* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_CatAx* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_CatAx* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CatAxXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CatAxXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DateAx : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TEG_AxShared* FEG_AxShared;
	TCT_Boolean* FAuto;
	TCT_LblOffset* FLblOffset;
	TCT_TimeUnit* FBaseTimeUnit;
	TCT_AxisUnit* FMajorUnit;
	TCT_TimeUnit* FMajorTimeUnit;
	TCT_AxisUnit* FMinorUnit;
	TCT_TimeUnit* FMinorTimeUnit;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_DateAx(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DateAx();
	void __fastcall Clear();
	TCT_Boolean* __fastcall Create_Auto();
	TCT_LblOffset* __fastcall Create_LblOffset();
	TCT_TimeUnit* __fastcall Create_BaseTimeUnit();
	TCT_AxisUnit* __fastcall Create_MajorUnit();
	TCT_TimeUnit* __fastcall Create_MajorTimeUnit();
	TCT_AxisUnit* __fastcall Create_MinorUnit();
	TCT_TimeUnit* __fastcall Create_MinorTimeUnit();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TEG_AxShared* EG_AxShared = {read=FEG_AxShared};
	__property TCT_Boolean* Auto = {read=FAuto};
	__property TCT_LblOffset* LblOffset = {read=FLblOffset};
	__property TCT_TimeUnit* BaseTimeUnit = {read=FBaseTimeUnit};
	__property TCT_AxisUnit* MajorUnit = {read=FMajorUnit};
	__property TCT_TimeUnit* MajorTimeUnit = {read=FMajorTimeUnit};
	__property TCT_AxisUnit* MinorUnit = {read=FMinorUnit};
	__property TCT_TimeUnit* MinorTimeUnit = {read=FMinorTimeUnit};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DateAxXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_DateAx* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_DateAx* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_DateAx* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_DateAx* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_DateAxXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_DateAxXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SerAx : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TEG_AxShared* FEG_AxShared;
	TCT_Skip* FTickLblSkip;
	TCT_Skip* FTickMarkSkip;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_SerAx(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SerAx();
	void __fastcall Clear();
	TCT_Skip* __fastcall Create_TickLblSkip();
	TCT_Skip* __fastcall Create_TickMarkSkip();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TEG_AxShared* Shared = {read=FEG_AxShared};
	__property TCT_Skip* TickLblSkip = {read=FTickLblSkip};
	__property TCT_Skip* TickMarkSkip = {read=FTickMarkSkip};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SerAxXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_SerAx* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_SerAx* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_SerAx* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_SerAx* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_SerAxXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_SerAxXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DTable : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_Boolean* FShowHorzBorder;
	TCT_Boolean* FShowVertBorder;
	TCT_Boolean* FShowOutline;
	TCT_Boolean* FShowKeys;
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	Xpgparsedrawingcommon::TCT_TextBody* FTxPr;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_DTable(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DTable();
	void __fastcall Clear();
	TCT_Boolean* __fastcall Create_ShowHorzBorder();
	TCT_Boolean* __fastcall Create_ShowVertBorder();
	TCT_Boolean* __fastcall Create_ShowOutline();
	TCT_Boolean* __fastcall Create_ShowKeys();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	Xpgparsedrawingcommon::TCT_TextBody* __fastcall Create_TxPr();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_Boolean* ShowHorzBorder = {read=FShowHorzBorder};
	__property TCT_Boolean* ShowVertBorder = {read=FShowVertBorder};
	__property TCT_Boolean* ShowOutline = {read=FShowOutline};
	__property TCT_Boolean* ShowKeys = {read=FShowKeys};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
	__property Xpgparsedrawingcommon::TCT_TextBody* TxPr = {read=FTxPr};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LegendPos : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_LegendPos FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_LegendPos(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LegendPos();
	void __fastcall Clear();
	__property TST_LegendPos Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LegendEntry : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_UnsignedInt* FIdx;
	TCT_Boolean* FDelete;
	TEG_LegendEntryData* FEG_LegendEntryData;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_LegendEntry(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LegendEntry();
	void __fastcall Clear();
	TCT_UnsignedInt* __fastcall Create_Idx();
	TCT_Boolean* __fastcall Create_Delete();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_UnsignedInt* Idx = {read=FIdx};
	__property TCT_Boolean* Delete = {read=FDelete};
	__property TEG_LegendEntryData* EG_LegendEntryData = {read=FEG_LegendEntryData};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LegendEntryXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_LegendEntry* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_LegendEntry* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_LegendEntry* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	TCT_LegendEntry* __fastcall FindIdx(int AIndex);
	__property TCT_LegendEntry* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_LegendEntryXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_LegendEntryXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DefaultShapeDefinition : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	Xpgparsedrawingcommon::TCT_ShapeProperties* FA_SpPr;
	Xpgparsedrawingcommon::TCT_TextBodyProperties* FA_BodyPr;
	Xpgparsedrawingcommon::TCT_TextListStyle* FA_LstStyle;
	Xpgparsedrawingcommon::TCT_ShapeStyle* FA_Style;
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_DefaultShapeDefinition(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DefaultShapeDefinition();
	void __fastcall Clear();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_A_SpPr();
	Xpgparsedrawingcommon::TCT_TextBodyProperties* __fastcall Create_A_BodyPr();
	Xpgparsedrawingcommon::TCT_TextListStyle* __fastcall Create_A_LstStyle();
	Xpgparsedrawingcommon::TCT_ShapeStyle* __fastcall Create_A_Style();
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* A_SpPr = {read=FA_SpPr};
	__property Xpgparsedrawingcommon::TCT_TextBodyProperties* A_BodyPr = {read=FA_BodyPr};
	__property Xpgparsedrawingcommon::TCT_TextListStyle* A_LstStyle = {read=FA_LstStyle};
	__property Xpgparsedrawingcommon::TCT_ShapeStyle* A_Style = {read=FA_Style};
	__property Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ColorSchemeAndMapping : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	Xpgparsedrawingcommon::TCT_ColorScheme* FA_ClrScheme;
	TCT_ColorMapping* FA_ClrMap;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_ColorSchemeAndMapping(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ColorSchemeAndMapping();
	void __fastcall Clear();
	Xpgparsedrawingcommon::TCT_ColorScheme* __fastcall Create_A_ClrScheme();
	TCT_ColorMapping* __fastcall Create_A_ClrMap();
	__property Xpgparsedrawingcommon::TCT_ColorScheme* A_ClrScheme = {read=FA_ClrScheme};
	__property TCT_ColorMapping* A_ClrMap = {read=FA_ClrMap};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ColorSchemeAndMappingXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_ColorSchemeAndMapping* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ColorSchemeAndMapping* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ColorSchemeAndMapping* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_ColorSchemeAndMapping* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ColorSchemeAndMappingXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ColorSchemeAndMappingXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotFmts : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_PivotFmtXpgList* FPivotFmtXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_PivotFmts(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotFmts();
	void __fastcall Clear();
	TCT_PivotFmtXpgList* __fastcall Create_PivotFmtXpgList();
	__property TCT_PivotFmtXpgList* PivotFmtXpgList = {read=FPivotFmtXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_View3D : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_RotX* FRotX;
	TCT_HPercent* FHPercent;
	TCT_RotY* FRotY;
	TCT_DepthPercent* FDepthPercent;
	TCT_Boolean* FRAngAx;
	TCT_Perspective* FPerspective;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_View3D(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_View3D();
	void __fastcall Clear();
	TCT_RotX* __fastcall Create_RotX();
	TCT_HPercent* __fastcall Create_HPercent();
	TCT_RotY* __fastcall Create_RotY();
	TCT_DepthPercent* __fastcall Create_DepthPercent();
	TCT_Boolean* __fastcall Create_RAngAx();
	TCT_Perspective* __fastcall Create_Perspective();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_RotX* RotX = {read=FRotX};
	__property TCT_HPercent* HPercent = {read=FHPercent};
	__property TCT_RotY* RotY = {read=FRotY};
	__property TCT_DepthPercent* DepthPercent = {read=FDepthPercent};
	__property TCT_Boolean* RAngAx = {read=FRAngAx};
	__property TCT_Perspective* Perspective = {read=FPerspective};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Surface : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_UnsignedInt* FThickness;
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	TCT_PictureOptions* FPictureOptions;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Surface(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Surface();
	void __fastcall Clear();
	TCT_UnsignedInt* __fastcall Create_Thickness();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	TCT_PictureOptions* __fastcall Create_PictureOptions();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_UnsignedInt* Thickness = {read=FThickness};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
	__property TCT_PictureOptions* PictureOptions = {read=FPictureOptions};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PlotArea : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
private:
	TCT_ScatterChart* __fastcall GetScatterChart();
	TCT_Area3DChart* __fastcall GetArea3DChart();
	TCT_AreaChart* __fastcall GetAreaChart();
	TCT_Bar3DChart* __fastcall GetBar3DChart();
	TCT_BarChart* __fastcall GetBarChart();
	TCT_BubbleChart* __fastcall GetBubbleChart();
	TCT_DoughnutChart* __fastcall GetDoughnutChart();
	TCT_Line3DChart* __fastcall GetLine3DChart();
	TCT_LineChart* __fastcall GetLineChart();
	TCT_OfPieChart* __fastcall GetOfPieChart();
	TCT_Pie3DChart* __fastcall GetPie3DChart();
	TCT_PieChart* __fastcall GetPieChart();
	TCT_RadarChart* __fastcall GetRadarChart();
	TCT_StockChart* __fastcall GetStockChart();
	TCT_Surface3DChart* __fastcall GetSurface3DChart();
	TCT_SurfaceChart* __fastcall GetSurfaceChart();
	
protected:
	TCT_Layout* FLayout;
	TCT_AreaCharts* FAreaCharts;
	TCT_Area3DCharts* FArea3DCharts;
	TCT_LineCharts* FLineCharts;
	TCT_Line3DCharts* FLine3DCharts;
	TCT_StockCharts* FStockCharts;
	TCT_RadarCharts* FRadarCharts;
	TCT_ScatterCharts* FScatterCharts;
	TCT_PieCharts* FPieCharts;
	TCT_Pie3DCharts* FPie3DCharts;
	TCT_DoughnutCharts* FDoughnutCharts;
	TCT_BarCharts* FBarCharts;
	TCT_Bar3DCharts* FBar3DCharts;
	TCT_OfPieCharts* FOfPieCharts;
	TCT_SurfaceCharts* FSurfaceCharts;
	TCT_Surface3DCharts* FSurface3DCharts;
	TCT_BubbleCharts* FBubbleCharts;
	TCT_ValAxXpgList* FValAxis;
	TCT_CatAxXpgList* FCatAxis;
	TCT_DateAx* FDateAx;
	TCT_SerAxXpgList* FSerAx;
	TCT_DTable* FDTable;
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	TCT_ExtensionList* FExtLst;
	
public:
	__fastcall TCT_PlotArea(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PlotArea();
	void __fastcall Clear();
	TCT_AreaChart* __fastcall CreateDefaultAreaChart();
	TCT_Area3DChart* __fastcall CreateDefaultArea3DChart();
	TCT_LineChart* __fastcall CreateDefaultLineChart();
	TCT_Line3DChart* __fastcall CreateDefaultLine3DChart();
	TCT_RadarChart* __fastcall CreateDefaultRadarChart();
	TCT_ScatterChart* __fastcall CreateDefaultScatterChart();
	TCT_PieChart* __fastcall CreateDefaultPieChart();
	TCT_Pie3DChart* __fastcall CreateDefaultPie3DChart();
	TCT_DoughnutChart* __fastcall CreateDefaultDoughnutChart();
	TCT_BarChart* __fastcall CreateDefaultBarChart();
	TCT_Bar3DChart* __fastcall CreateDefaultBar3DChart();
	TCT_OfPieChart* __fastcall CreateDefaultOfPieChart();
	TCT_SurfaceChart* __fastcall CreateDefaultSurfaceChart();
	TCT_Surface3DChart* __fastcall CreateDefaultSurface3DChart();
	TCT_BubbleChart* __fastcall CreateDefaultBubbleChart();
	TCT_CatAx* __fastcall CreateDefaultCatAx();
	TCT_ValAx* __fastcall CreateDefaultValAx();
	void __fastcall CreateDefaultCrossValAx();
	TCT_SerAx* __fastcall CreateDefaultSerAx();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_Layout* __fastcall Create_Layout();
	TCT_AreaChart* __fastcall Create_AreaChart();
	TCT_Area3DChart* __fastcall Create_Area3DChart();
	TCT_LineChart* __fastcall Create_LineChart();
	TCT_Line3DChart* __fastcall Create_Line3DChart();
	TCT_StockChart* __fastcall Create_StockChart();
	TCT_RadarChart* __fastcall Create_RadarChart();
	TCT_ScatterChart* __fastcall Create_ScatterChart();
	TCT_PieChart* __fastcall Create_PieChart();
	TCT_Pie3DChart* __fastcall Create_Pie3DChart();
	TCT_DoughnutChart* __fastcall Create_DoughnutChart();
	TCT_BarChart* __fastcall Create_BarChart();
	TCT_Bar3DChart* __fastcall Create_Bar3DChart();
	TCT_OfPieChart* __fastcall Create_OfPieChart();
	TCT_SurfaceChart* __fastcall Create_SurfaceChart();
	TCT_Surface3DChart* __fastcall Create_Surface3DChart();
	TCT_BubbleChart* __fastcall Create_BubbleChart();
	TCT_ValAxXpgList* __fastcall Create_ValAxis();
	TCT_CatAxXpgList* __fastcall Create_CatAxis();
	TCT_DateAx* __fastcall Create_DateAx();
	TCT_SerAxXpgList* __fastcall Create_SerAx();
	TCT_DTable* __fastcall Create_DTable();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	void __fastcall Destroy_SpPr();
	void __fastcall Destroy_ValAxis();
	__property TCT_Layout* Layout = {read=FLayout};
	__property TCT_AreaChart* AreaChart = {read=GetAreaChart};
	__property TCT_Area3DChart* Area3DChart = {read=GetArea3DChart};
	__property TCT_LineChart* LineChart = {read=GetLineChart};
	__property TCT_Line3DChart* Line3DChart = {read=GetLine3DChart};
	__property TCT_StockChart* StockChart = {read=GetStockChart};
	__property TCT_RadarChart* RadarChart = {read=GetRadarChart};
	__property TCT_ScatterChart* ScatterChart = {read=GetScatterChart};
	__property TCT_PieChart* PieChart = {read=GetPieChart};
	__property TCT_Pie3DChart* Pie3DChart = {read=GetPie3DChart};
	__property TCT_DoughnutChart* DoughnutChart = {read=GetDoughnutChart};
	__property TCT_BarChart* BarChart = {read=GetBarChart};
	__property TCT_Bar3DChart* Bar3DChart = {read=GetBar3DChart};
	__property TCT_OfPieChart* OfPieChart = {read=GetOfPieChart};
	__property TCT_SurfaceChart* SurfaceChart = {read=GetSurfaceChart};
	__property TCT_Surface3DChart* Surface3DChart = {read=GetSurface3DChart};
	__property TCT_BubbleChart* BubbleChart = {read=GetBubbleChart};
	__property TCT_ValAxXpgList* ValAxis = {read=FValAxis};
	__property TCT_CatAxXpgList* CatAxis = {read=FCatAxis};
	__property TCT_DateAx* DateAx = {read=FDateAx};
	__property TCT_SerAxXpgList* SerAx = {read=FSerAx};
	__property TCT_DTable* DTable = {read=FDTable};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Legend : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_LegendPos* FLegendPos;
	TCT_LegendEntryXpgList* FLegendEntryXpgList;
	TCT_Layout* FLayout;
	TCT_Boolean* FOverlay;
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	Xpgparsedrawingcommon::TCT_TextBody* FTxPr;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Legend(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Legend();
	void __fastcall Clear();
	TCT_LegendPos* __fastcall Create_LegendPos();
	TCT_LegendEntryXpgList* __fastcall Create_LegendEntryXpgList();
	TCT_Layout* __fastcall Create_Layout();
	TCT_Boolean* __fastcall Create_Overlay();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	Xpgparsedrawingcommon::TCT_TextBody* __fastcall Create_TxPr();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	void __fastcall Destroy_SpPr();
	__property TCT_LegendPos* LegendPos = {read=FLegendPos};
	__property TCT_LegendEntryXpgList* LegendEntryXpgList = {read=FLegendEntryXpgList};
	__property TCT_Layout* Layout = {read=FLayout};
	__property TCT_Boolean* Overlay = {read=FOverlay};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
	__property Xpgparsedrawingcommon::TCT_TextBody* TxPr = {read=FTxPr};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DispBlanksAs : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_DispBlanksAs FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_DispBlanksAs(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DispBlanksAs();
	void __fastcall Clear();
	__property TST_DispBlanksAs Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_HeaderFooter : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	bool FAlignWithMargins;
	bool FDifferentOddEven;
	bool FDifferentFirst;
	System::UnicodeString FOddHeader;
	System::UnicodeString FOddFooter;
	System::UnicodeString FEvenHeader;
	System::UnicodeString FEvenFooter;
	System::UnicodeString FFirstHeader;
	System::UnicodeString FFirstFooter;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_HeaderFooter(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_HeaderFooter();
	void __fastcall Clear();
	__property bool AlignWithMargins = {read=FAlignWithMargins, write=FAlignWithMargins, nodefault};
	__property bool DifferentOddEven = {read=FDifferentOddEven, write=FDifferentOddEven, nodefault};
	__property bool DifferentFirst = {read=FDifferentFirst, write=FDifferentFirst, nodefault};
	__property System::UnicodeString OddHeader = {read=FOddHeader, write=FOddHeader};
	__property System::UnicodeString OddFooter = {read=FOddFooter, write=FOddFooter};
	__property System::UnicodeString EvenHeader = {read=FEvenHeader, write=FEvenHeader};
	__property System::UnicodeString EvenFooter = {read=FEvenFooter, write=FEvenFooter};
	__property System::UnicodeString FirstHeader = {read=FFirstHeader, write=FFirstHeader};
	__property System::UnicodeString FirstFooter = {read=FFirstFooter, write=FFirstFooter};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_PageMargins : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	double FL;
	double FR;
	double FT;
	double FB;
	double FHeader;
	double FFooter;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PageMargins(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PageMargins();
	void __fastcall Clear();
	__property double L = {read=FL, write=FL};
	__property double R = {read=FR, write=FR};
	__property double T = {read=FT, write=FT};
	__property double B = {read=FB, write=FB};
	__property double Header = {read=FHeader, write=FHeader};
	__property double Footer = {read=FFooter, write=FFooter};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PageSetup : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FPaperSize;
	int FFirstPageNumber;
	TST_PageSetupOrientation FOrientation;
	bool FBlackAndWhite;
	bool FDraft;
	bool FUseFirstPageNumber;
	int FHorizontalDpi;
	int FVerticalDpi;
	int FCopies;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PageSetup(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PageSetup();
	void __fastcall Clear();
	__property int PaperSize = {read=FPaperSize, write=FPaperSize, nodefault};
	__property int FirstPageNumber = {read=FFirstPageNumber, write=FFirstPageNumber, nodefault};
	__property TST_PageSetupOrientation Orientation = {read=FOrientation, write=FOrientation, nodefault};
	__property bool BlackAndWhite = {read=FBlackAndWhite, write=FBlackAndWhite, nodefault};
	__property bool Draft = {read=FDraft, write=FDraft, nodefault};
	__property bool UseFirstPageNumber = {read=FUseFirstPageNumber, write=FUseFirstPageNumber, nodefault};
	__property int HorizontalDpi = {read=FHorizontalDpi, write=FHorizontalDpi, nodefault};
	__property int VerticalDpi = {read=FVerticalDpi, write=FVerticalDpi, nodefault};
	__property int Copies = {read=FCopies, write=FCopies, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RelId : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	System::UnicodeString FR_Id;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_RelId(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_RelId();
	void __fastcall Clear();
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ObjectStyleDefaults : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_DefaultShapeDefinition* FA_SpDef;
	TCT_DefaultShapeDefinition* FA_LnDef;
	TCT_DefaultShapeDefinition* FA_TxDef;
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_ObjectStyleDefaults(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ObjectStyleDefaults();
	void __fastcall Clear();
	TCT_DefaultShapeDefinition* __fastcall Create_A_SpDef();
	TCT_DefaultShapeDefinition* __fastcall Create_A_LnDef();
	TCT_DefaultShapeDefinition* __fastcall Create_A_TxDef();
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property TCT_DefaultShapeDefinition* A_SpDef = {read=FA_SpDef};
	__property TCT_DefaultShapeDefinition* A_LnDef = {read=FA_LnDef};
	__property TCT_DefaultShapeDefinition* A_TxDef = {read=FA_TxDef};
	__property Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ColorSchemeList : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_ColorSchemeAndMappingXpgList* FA_ExtraClrSchemeXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_ColorSchemeList(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ColorSchemeList();
	void __fastcall Clear();
	TCT_ColorSchemeAndMappingXpgList* __fastcall Create_A_ExtraClrSchemeXpgList();
	__property TCT_ColorSchemeAndMappingXpgList* A_ExtraClrSchemeXpgList = {read=FA_ExtraClrSchemeXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextLanguageID : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	System::UnicodeString FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TextLanguageID(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextLanguageID();
	void __fastcall Clear();
	__property System::UnicodeString Val = {read=FVal, write=FVal};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Style : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Style(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Style();
	void __fastcall Clear();
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotSource : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	TCT_UnsignedInt* FFmtId;
	TCT_ExtensionListXpgList* FExtLstXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_PivotSource(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotSource();
	void __fastcall Clear();
	TCT_UnsignedInt* __fastcall Create_FmtId();
	TCT_ExtensionListXpgList* __fastcall Create_ExtLstXpgList();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property TCT_UnsignedInt* FmtId = {read=FFmtId};
	__property TCT_ExtensionListXpgList* ExtLstXpgList = {read=FExtLstXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Protection : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_Boolean* FChartObject;
	TCT_Boolean* FData;
	TCT_Boolean* FFormatting;
	TCT_Boolean* FSelection;
	TCT_Boolean* FUserInterface;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Protection(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Protection();
	void __fastcall Clear();
	TCT_Boolean* __fastcall Create_ChartObject();
	TCT_Boolean* __fastcall Create_Data();
	TCT_Boolean* __fastcall Create_Formatting();
	TCT_Boolean* __fastcall Create_Selection();
	TCT_Boolean* __fastcall Create_UserInterface();
	__property TCT_Boolean* ChartObject = {read=FChartObject};
	__property TCT_Boolean* Data = {read=FData};
	__property TCT_Boolean* Formatting = {read=FFormatting};
	__property TCT_Boolean* Selection = {read=FSelection};
	__property TCT_Boolean* UserInterface = {read=FUserInterface};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Chart : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_Title* FTitle;
	TCT_Boolean* FAutoTitleDeleted;
	TCT_PivotFmts* FPivotFmts;
	TCT_View3D* FView3D;
	TCT_Surface* FFloor;
	TCT_Surface* FSideWall;
	TCT_Surface* FBackWall;
	TCT_PlotArea* FPlotArea;
	TCT_Legend* FLegend;
	TCT_Boolean* FPlotVisOnly;
	TCT_DispBlanksAs* FDispBlanksAs;
	TCT_Boolean* FShowDLblsOverMax;
	TCT_ExtensionList* FExtLst;
	
public:
	__fastcall TCT_Chart(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Chart();
	void __fastcall Clear();
	void __fastcall CreateDefault();
	void __fastcall CreateDefaultLegend();
	void __fastcall CreateDefaultTitle(System::UnicodeString AText);
	void __fastcall AddTitle(System::UnicodeString ATitle);
	void __fastcall AddTitleRef(System::UnicodeString ARef);
	void __fastcall RemoveTitle();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_Title* __fastcall Create_Title();
	TCT_Boolean* __fastcall Create_AutoTitleDeleted();
	TCT_PivotFmts* __fastcall Create_PivotFmts();
	TCT_View3D* __fastcall Create_View3D();
	TCT_Surface* __fastcall Create_Floor();
	TCT_Surface* __fastcall Create_SideWall();
	TCT_Surface* __fastcall Create_BackWall();
	TCT_PlotArea* __fastcall Create_PlotArea();
	TCT_Legend* __fastcall Create_Legend();
	TCT_Boolean* __fastcall Create_PlotVisOnly();
	TCT_DispBlanksAs* __fastcall Create_DispBlanksAs();
	TCT_Boolean* __fastcall Create_ShowDLblsOverMax();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	void __fastcall RemoveLegend();
	__property TCT_Title* Title = {read=FTitle};
	__property TCT_Boolean* AutoTitleDeleted = {read=FAutoTitleDeleted};
	__property TCT_PivotFmts* PivotFmts = {read=FPivotFmts};
	__property TCT_View3D* View3D = {read=FView3D};
	__property TCT_Surface* Floor = {read=FFloor};
	__property TCT_Surface* SideWall = {read=FSideWall};
	__property TCT_Surface* BackWall = {read=FBackWall};
	__property TCT_PlotArea* PlotArea = {read=FPlotArea};
	__property TCT_Legend* Legend = {read=FLegend};
	__property TCT_Boolean* PlotVisOnly = {read=FPlotVisOnly};
	__property TCT_DispBlanksAs* DispBlanksAs = {read=FDispBlanksAs};
	__property TCT_Boolean* ShowDLblsOverMax = {read=FShowDLblsOverMax};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExternalData : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	System::UnicodeString FR_Id;
	TCT_Boolean* FAutoUpdate;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ExternalData(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ExternalData();
	void __fastcall Clear();
	TCT_Boolean* __fastcall Create_AutoUpdate();
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
	__property TCT_Boolean* AutoUpdate = {read=FAutoUpdate};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PrintSettings : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_HeaderFooter* FHeaderFooter;
	TCT_PageMargins* FPageMargins;
	TCT_PageSetup* FPageSetup;
	TCT_RelId* FLegacyDrawingHF;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_PrintSettings(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PrintSettings();
	void __fastcall Clear();
	TCT_HeaderFooter* __fastcall Create_HeaderFooter();
	TCT_PageMargins* __fastcall Create_PageMargins();
	TCT_PageSetup* __fastcall Create_PageSetup();
	TCT_RelId* __fastcall Create_LegacyDrawingHF();
	__property TCT_HeaderFooter* HeaderFooter = {read=FHeaderFooter};
	__property TCT_PageMargins* PageMargins = {read=FPageMargins};
	__property TCT_PageSetup* PageSetup = {read=FPageSetup};
	__property TCT_RelId* LegacyDrawingHF = {read=FLegacyDrawingHF};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_EmptyElement : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_EmptyElement(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_EmptyElement();
	void __fastcall Clear();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BaseStylesOverride : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	Xpgparsedrawingcommon::TCT_ColorScheme* FA_ClrScheme;
	Xpgparsedrawingcommon::TCT_FontScheme* FA_FontScheme;
	Xpgparsedrawingcommon::TCT_StyleMatrix* FA_FmtScheme;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_BaseStylesOverride(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BaseStylesOverride();
	void __fastcall Clear();
	Xpgparsedrawingcommon::TCT_ColorScheme* __fastcall Create_A_ClrScheme();
	Xpgparsedrawingcommon::TCT_FontScheme* __fastcall Create_A_FontScheme();
	Xpgparsedrawingcommon::TCT_StyleMatrix* __fastcall Create_A_FmtScheme();
	__property Xpgparsedrawingcommon::TCT_ColorScheme* A_ClrScheme = {read=FA_ClrScheme};
	__property Xpgparsedrawingcommon::TCT_FontScheme* A_FontScheme = {read=FA_FontScheme};
	__property Xpgparsedrawingcommon::TCT_StyleMatrix* A_FmtScheme = {read=FA_FmtScheme};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OfficeStyleSheet : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	Xpgparsedrawingcommon::TCT_BaseStyles* FA_ThemeElements;
	TCT_ObjectStyleDefaults* FA_ObjectDefaults;
	TCT_ColorSchemeList* FA_ExtraClrSchemeLst;
	Xpgparsedrawingcommon::TCT_CustomColorList* FA_CustClrLst;
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_OfficeStyleSheet(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_OfficeStyleSheet();
	void __fastcall Clear();
	Xpgparsedrawingcommon::TCT_BaseStyles* __fastcall Create_A_ThemeElements();
	TCT_ObjectStyleDefaults* __fastcall Create_A_ObjectDefaults();
	TCT_ColorSchemeList* __fastcall Create_A_ExtraClrSchemeLst();
	Xpgparsedrawingcommon::TCT_CustomColorList* __fastcall Create_A_CustClrLst();
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property Xpgparsedrawingcommon::TCT_BaseStyles* A_ThemeElements = {read=FA_ThemeElements};
	__property TCT_ObjectStyleDefaults* A_ObjectDefaults = {read=FA_ObjectDefaults};
	__property TCT_ColorSchemeList* A_ExtraClrSchemeLst = {read=FA_ExtraClrSchemeLst};
	__property Xpgparsedrawingcommon::TCT_CustomColorList* A_CustClrLst = {read=FA_CustClrLst};
	__property Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ChartSpace : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_Boolean* FDate1904;
	TCT_TextLanguageID* FLang;
	TCT_Boolean* FRoundedCorners;
	TCT_Style* FStyle;
	TCT_ColorMapping* FClrMapOvr;
	TCT_PivotSource* FPivotSource;
	TCT_Protection* FProtection;
	TCT_Chart* FChart;
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	Xpgparsedrawingcommon::TCT_TextBody* FTxPr;
	TCT_ExternalData* FExternalData;
	TCT_PrintSettings* FPrintSettings;
	TCT_RelId* FUserShapes;
	TCT_ExtensionList* FExtLst;
	System::TObject* FDrawing;
	
public:
	__fastcall TCT_ChartSpace(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ChartSpace();
	void __fastcall Clear();
	void __fastcall CreateDefault();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_Boolean* __fastcall Create_Date1904();
	TCT_TextLanguageID* __fastcall Create_Lang();
	TCT_Boolean* __fastcall Create_RoundedCorners();
	TCT_Style* __fastcall Create_Style();
	TCT_ColorMapping* __fastcall Create_ClrMapOvr();
	TCT_PivotSource* __fastcall Create_PivotSource();
	TCT_Protection* __fastcall Create_Protection();
	TCT_Chart* __fastcall Create_Chart();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	Xpgparsedrawingcommon::TCT_TextBody* __fastcall Create_TxPr();
	TCT_ExternalData* __fastcall Create_ExternalData();
	TCT_PrintSettings* __fastcall Create_PrintSettings();
	TCT_RelId* __fastcall Create_UserShapes();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	void __fastcall AddDrawing(System::TObject* ADrawing);
	__property TCT_Boolean* Date1904 = {read=FDate1904};
	__property TCT_TextLanguageID* Lang = {read=FLang};
	__property TCT_Boolean* RoundedCorners = {read=FRoundedCorners};
	__property TCT_Style* Style = {read=FStyle};
	__property TCT_ColorMapping* ClrMapOvr = {read=FClrMapOvr};
	__property TCT_PivotSource* PivotSource = {read=FPivotSource};
	__property TCT_Protection* Protection = {read=FProtection};
	__property TCT_Chart* Chart = {read=FChart};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
	__property Xpgparsedrawingcommon::TCT_TextBody* TxPr = {read=FTxPr};
	__property TCT_ExternalData* ExternalData = {read=FExternalData};
	__property TCT_PrintSettings* PrintSettings = {read=FPrintSettings};
	__property TCT_RelId* UserShapes = {read=FUserShapes};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
	__property System::TObject* Drawing = {read=FDrawing};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ColorMappingOverride : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_EmptyElement* FA_MasterClrMapping;
	TCT_ColorMapping* FA_OverrideClrMapping;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_ColorMappingOverride(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ColorMappingOverride();
	void __fastcall Clear();
	TCT_EmptyElement* __fastcall Create_A_MasterClrMapping();
	TCT_ColorMapping* __fastcall Create_A_OverrideClrMapping();
	__property TCT_EmptyElement* A_MasterClrMapping = {read=FA_MasterClrMapping};
	__property TCT_ColorMapping* A_OverrideClrMapping = {read=FA_OverrideClrMapping};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ClipboardStyleSheet : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	Xpgparsedrawingcommon::TCT_BaseStyles* FA_ThemeElements;
	TCT_ColorMapping* FA_ClrMap;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_ClipboardStyleSheet(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ClipboardStyleSheet();
	void __fastcall Clear();
	Xpgparsedrawingcommon::TCT_BaseStyles* __fastcall Create_A_ThemeElements();
	TCT_ColorMapping* __fastcall Create_A_ClrMap();
	__property Xpgparsedrawingcommon::TCT_BaseStyles* A_ThemeElements = {read=FA_ThemeElements};
	__property TCT_ColorMapping* A_ClrMap = {read=FA_ClrMap};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION T__ROOT__ : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	Xpgplists::TStringXpgList* FRootAttributes;
	System::TClass FCurrWriteClass;
	TCT_RelId* FChart;
	TCT_ChartSpace* FChartSpace;
	
public:
	__fastcall T__ROOT__(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~T__ROOT__();
	void __fastcall Clear();
	void __fastcall CreateDefault();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	TCT_RelId* __fastcall Create_Chart();
	TCT_ChartSpace* __fastcall Create_ChartSpace();
	__property Xpgplists::TStringXpgList* RootAttributes = {read=FRootAttributes};
	__property TCT_RelId* Chart = {read=FChart};
	__property TCT_ChartSpace* ChartSpace = {read=FChartSpace};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGDocXLSXChart : public Xpgparsedrawingcommon::TXPGDocBase
{
	typedef Xpgparsedrawingcommon::TXPGDocBase inherited;
	
protected:
	T__ROOT__* FRoot;
	Xpgpsimpledom::TXpgSimpleDOM* FStyle;
	Xpgpsimpledom::TXpgSimpleDOM* FColors;
	TCT_RelId* __fastcall GetChart();
	TCT_ChartSpace* __fastcall GetChartSpace();
	
public:
	__fastcall TXPGDocXLSXChart(Xc12graphics::TXc12GraphicManager* AGrManager);
	__fastcall virtual ~TXPGDocXLSXChart();
	void __fastcall AddStyle();
	void __fastcall AddColors();
	void __fastcall LoadFromFile(System::UnicodeString AFilename);
	void __fastcall LoadFromStream(System::Classes::TStream* AStream);
	void __fastcall SaveToFile(System::UnicodeString AFilename, System::TClass AClassToWrite);
	void __fastcall SaveToStream(System::Classes::TStream* AStream);
	__property T__ROOT__* Root = {read=FRoot};
	__property TCT_RelId* Chart = {read=GetChart};
	__property TCT_ChartSpace* ChartSpace = {read=GetChartSpace};
	__property Xpgpsimpledom::TXpgSimpleDOM* Style = {read=FStyle};
	__property Xpgpsimpledom::TXpgSimpleDOM* Colors = {read=FColors};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Xpgparsechart__1 StrTST_RadarStyle;
extern DELPHI_PACKAGE Xpgparsechart__2 StrTST_BarDir;
extern DELPHI_PACKAGE Xpgparsechart__3 StrTST_SplitType;
extern DELPHI_PACKAGE Xpgparsechart__4 StrTST_TickMark;
extern DELPHI_PACKAGE Xpgparsechart__5 StrTST_TimeUnit;
extern DELPHI_PACKAGE Xpgparsechart__6 StrTST_Grouping;
extern DELPHI_PACKAGE Xpgparsechart__7 StrTST_Orientation_2;
extern DELPHI_PACKAGE Xpgparsechart__8 StrTST_LblAlgn;
extern DELPHI_PACKAGE Xpgparsechart__9 StrTST_MarkerStyle;
extern DELPHI_PACKAGE Xpgparsechart__01 StrTST_Crosses;
extern DELPHI_PACKAGE Xpgparsechart__11 StrTST_PictureFormat;
extern DELPHI_PACKAGE Xpgparsechart__21 StrTST_ErrBarType;
extern DELPHI_PACKAGE Xpgparsechart__31 StrTST_TickLblPos;
extern DELPHI_PACKAGE Xpgparsechart__41 StrTST_AxPos;
extern DELPHI_PACKAGE Xpgparsechart__51 StrTST_Shape;
extern DELPHI_PACKAGE Xpgparsechart__61 StrTST_CrossBetween;
extern DELPHI_PACKAGE Xpgparsechart__71 StrTST_DispBlanksAs;
extern DELPHI_PACKAGE Xpgparsechart__81 StrTST_ErrValType;
extern DELPHI_PACKAGE Xpgparsechart__91 StrTST_LegendPos;
extern DELPHI_PACKAGE Xpgparsechart__02 StrTST_ErrDir;
extern DELPHI_PACKAGE Xpgparsechart__12 StrTST_LayoutMode;
extern DELPHI_PACKAGE Xpgparsechart__22 StrTST_BarGrouping;
extern DELPHI_PACKAGE Xpgparsechart__32 StrTST_DLblPos;
extern DELPHI_PACKAGE Xpgparsechart__42 StrTST_SizeRepresents;
extern DELPHI_PACKAGE Xpgparsechart__52 StrTST_PageSetupOrientation;
extern DELPHI_PACKAGE Xpgparsechart__62 StrTST_OfPieType;
extern DELPHI_PACKAGE Xpgparsechart__72 StrTST_ScatterStyle;
extern DELPHI_PACKAGE Xpgparsechart__82 StrTST_LayoutTarget;
extern DELPHI_PACKAGE Xpgparsechart__92 StrTST_BuiltInUnit;
extern DELPHI_PACKAGE Xpgparsechart__03 StrTST_TrendlineType;
}	/* namespace Xpgparsechart */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XPGPARSECHART)
using namespace Xpgparsechart;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XpgparsechartHPP
