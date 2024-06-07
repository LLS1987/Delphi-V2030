// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_DrawingObjChart5.pas' rev: 35.00 (Windows)

#ifndef Biff_drawingobjchart5HPP
#define Biff_drawingobjchart5HPP

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
#include <BIFF_RecsII5.hpp>
#include <BIFF_Utils5.hpp>
#include <BIFF_DrawingObjAnchor5.hpp>
#include <BIFF_Escher5.hpp>
#include <BIFF_RecordStorageChart5.hpp>
#include <BIFF_FormulaHandler5.hpp>
#include <BIFF_EscherTypes5.hpp>
#include <BIFF_Stream5.hpp>
#include <BIFF_DecodeFormula5.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_drawingobjchart5
{
//-- forward type declarations -----------------------------------------------
struct TBmpFileHeader;
class DELPHICLASS TRecordObject;
class DELPHICLASS TChartText;
class DELPHICLASS TLineFormat;
class DELPHICLASS TAreaFormat;
class DELPHICLASS TMarkerFormat;
class DELPHICLASS TGelFrame;
class DELPHICLASS TPaintFrame;
class DELPHICLASS TTextFrame;
class DELPHICLASS TChartLabel;
class DELPHICLASS TChartLabels;
class DELPHICLASS TDataPoint;
class DELPHICLASS TDataPoints;
class DELPHICLASS TXLSChartSerie;
class DELPHICLASS TXLSChartSeries;
class DELPHICLASS TTickFormat;
class DELPHICLASS TCatSerAxisScaling;
class DELPHICLASS TValueAxisScaling;
class DELPHICLASS TChartAxis;
class DELPHICLASS TCategoryAxis;
class DELPHICLASS TSerieAxis;
class DELPHICLASS TValueAxis;
class DELPHICLASS TChart3D;
class DELPHICLASS TChartLegend;
class DELPHICLASS TChartStyle;
class DELPHICLASS TChartStyleArea;
class DELPHICLASS TChartStyleBarColumn;
class DELPHICLASS TChartStyleSurface;
class DELPHICLASS TChartStyleScatter;
class DELPHICLASS TChartStylePie;
class DELPHICLASS TChartStyleBopPop;
class DELPHICLASS TChartStyleLine;
class DELPHICLASS TChartStyleRadar;
class DELPHICLASS TChartStyleRadarArea;
class DELPHICLASS TChartPlotArea;
class DELPHICLASS TDrwChart;
class DELPHICLASS TDrwCharts;
class DELPHICLASS TSheetChart;
class DELPHICLASS TSheetCharts;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TChartLineStyle : unsigned char { clsSolid, clsDash, clsDot, clsDashDot, clsDashDotDot, clsNone, clsDarkGray, clsMediumGray, clsLightGray };

enum DECLSPEC_DENUM TChartLineWeight : unsigned short { clwNarrow, clwMedium, clwWide, clwHairline = 65535 };

enum DECLSPEC_DENUM TChartMarkerStyle : unsigned char { cmsNone, cmsSquare, cmsDiamond, cmsTriangle, cmsX, cmsStar, cmsDowJones, cmsStandardDeviation, cmsCircle, cmsPlus };

enum DECLSPEC_DENUM TChartDataLabel : unsigned char { cdlValue, cdlValuePercent, cdlSmoothedLine, cdlCategory, cdlBubbleSize };

typedef System::Set<TChartDataLabel, TChartDataLabel::cdlValue, TChartDataLabel::cdlBubbleSize> TChartDataLabels;

enum DECLSPEC_DENUM TChartLabelType : unsigned char { cltTitle = 1, cltYAxis, cltXAxis, cltDataPoint, cltZAxis = 7 };

enum DECLSPEC_DENUM TChartSheetOption : unsigned char { csoOnlyVisibleCells, csoDoNotSize };

typedef System::Set<TChartSheetOption, TChartSheetOption::csoOnlyVisibleCells, TChartSheetOption::csoDoNotSize> TChartSheetOptions;

enum DECLSPEC_DENUM TChartEmptyCells : unsigned char { cecNotPlotted, cecZero, cecInterpolated };

enum DECLSPEC_DENUM TTickType : unsigned char { ttInvisible, ttInside, ttOutside, ttCrossAxis };

enum DECLSPEC_DENUM TTickLablePos : unsigned char { tlpInvisible, tlpLowEnd, tlpHighEnd, tlpNextToAxis };

enum DECLSPEC_DENUM TCatSerAxisScalingOption : unsigned char { csasoCrossesMidCategory, csasoValueCrossesRight, csasoReverseCategories };

typedef System::Set<TCatSerAxisScalingOption, TCatSerAxisScalingOption::csasoCrossesMidCategory, TCatSerAxisScalingOption::csasoReverseCategories> TCatSerAxisScalingOptions;

enum DECLSPEC_DENUM TValueAxisScalingOption : unsigned char { vasoAutoMin, vasoAutoMax, vasoAutoMajor, vasoAutoMinor, vasoAutoCross, vasoLogScale, vasoReverse, vasoCategoryAxisCrossing };

typedef System::Set<TValueAxisScalingOption, TValueAxisScalingOption::vasoAutoMin, TValueAxisScalingOption::vasoCategoryAxisCrossing> TValueAxisScalingOptions;

enum DECLSPEC_DENUM TChart3DOption : unsigned char { c3doPerspectiveTrans, c3doClusterdCols, c3doAutoScaling, c3do2dWalls };

typedef System::Set<TChart3DOption, TChart3DOption::c3doPerspectiveTrans, TChart3DOption::c3do2dWalls> TChart3DOptions;

enum DECLSPEC_DENUM TChartLegendType : unsigned char { cltBottom, cltCorner, cltTop, cltRight, cltLeft, cltNotDocked };

enum DECLSPEC_DENUM TChartLegendSpacing : unsigned char { clsClose, clsMedium, clsOpen };

enum DECLSPEC_DENUM TSerieItemGeomtery : unsigned char { sigDefault, sigCylinder, sigPyramid, sigChoppedPyramid, sigCone, sigChoppedCone, sigLast };

enum DECLSPEC_DENUM TGradientFillStyle : unsigned char { gfsHorizontal, gfsVertical, gfsDiagonalUp, gfsDiagonalDown, gfsFromCorner, gfsFromCenter };

#pragma pack(push,1)
struct DECLSPEC_DRECORD TBmpFileHeader
{
public:
	System::StaticArray<System::WideChar, 3> ID;
	unsigned Size;
	System::StaticArray<System::Byte, 3> Unknown1;
	System::Word Unknown2;
	System::Word Unknown3;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TXLSChartType : unsigned char { xctNone, xctArea, xctBubble, xctColumn, xctLine, xctPie, xctRadar, xctScatter, xctSurface };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRecordObject : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Biff_recordstoragechart5::TChartRecord* FRecord;
	bool __fastcall GetValid();
	
protected:
	void __fastcall Check()/* overload */;
	void __fastcall Check(int Index)/* overload */;
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	
public:
	__property bool Valid = {read=GetValid, nodefault};
	__property Biff_recordstoragechart5::TChartRecord* Rec = {read=FRecord};
public:
	/* TObject.Create */ inline __fastcall TRecordObject() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TRecordObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TChartText : public TRecordObject
{
	typedef TRecordObject inherited;
	
private:
	Xc12datastylesheet5::TXc12Font* FFont;
	Xc12utils5::TXc12IndexColor __fastcall GetColor();
	void __fastcall SetColor(const Xc12utils5::TXc12IndexColor Value);
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	
public:
	__property Xc12utils5::TXc12IndexColor Color = {read=GetColor, write=SetColor, nodefault};
	__property Xc12datastylesheet5::TXc12Font* Font = {read=FFont};
public:
	/* TObject.Create */ inline __fastcall TChartText() : TRecordObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TChartText() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TLineFormat : public TRecordObject
{
	typedef TRecordObject inherited;
	
private:
	bool __fastcall GetAutomatic();
	Xc12utils5::TXc12IndexColor __fastcall GetLineColor();
	TChartLineStyle __fastcall GetLineStyle();
	TChartLineWeight __fastcall GetLineWeight();
	void __fastcall SetAutomatic(const bool Value);
	void __fastcall SetLineColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetLineStyle(const TChartLineStyle Value);
	void __fastcall SetLineWeight(const TChartLineWeight Value);
	
protected:
	void __fastcall SetDefault();
	
public:
	__property Xc12utils5::TXc12IndexColor LineColor = {read=GetLineColor, write=SetLineColor, nodefault};
	__property TChartLineStyle LineStyle = {read=GetLineStyle, write=SetLineStyle, nodefault};
	__property TChartLineWeight LineWeight = {read=GetLineWeight, write=SetLineWeight, nodefault};
	__property bool Automatic = {read=GetAutomatic, write=SetAutomatic, nodefault};
public:
	/* TObject.Create */ inline __fastcall TLineFormat() : TRecordObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TLineFormat() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAreaFormat : public TRecordObject
{
	typedef TRecordObject inherited;
	
private:
	Xc12utils5::TXc12IndexColor __fastcall GetBackgroundColor();
	Xc12utils5::TXc12IndexColor __fastcall GetForegroundColor();
	Xc12datastylesheet5::TXc12FillPattern __fastcall GetPattern();
	bool __fastcall GetSwapColorWhenNeg();
	void __fastcall SetBackgroundColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetForegroundColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetPattern(const Xc12datastylesheet5::TXc12FillPattern Value);
	void __fastcall SetSwapColorWhenNeg(const bool Value);
	bool __fastcall GetAutomatic();
	void __fastcall SetAutomatic(const bool Value);
	
protected:
	void __fastcall SetDefault();
	
public:
	__property Xc12datastylesheet5::TXc12FillPattern Pattern = {read=GetPattern, write=SetPattern, nodefault};
	__property Xc12utils5::TXc12IndexColor ForegroundColor = {read=GetForegroundColor, write=SetForegroundColor, nodefault};
	__property Xc12utils5::TXc12IndexColor BackgroundColor = {read=GetBackgroundColor, write=SetBackgroundColor, nodefault};
	__property bool SwapColorWhenNeg = {read=GetSwapColorWhenNeg, write=SetSwapColorWhenNeg, nodefault};
	__property bool Automatic = {read=GetAutomatic, write=SetAutomatic, nodefault};
public:
	/* TObject.Create */ inline __fastcall TAreaFormat() : TRecordObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAreaFormat() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMarkerFormat : public TRecordObject
{
	typedef TRecordObject inherited;
	
private:
	bool __fastcall GetAutomatic();
	Xc12utils5::TXc12IndexColor __fastcall GetBackgroundColor();
	Xc12utils5::TXc12IndexColor __fastcall GetForegroundColor();
	TChartMarkerStyle __fastcall GetMarkerStyle();
	int __fastcall GetSize();
	void __fastcall SetAutomatic(const bool Value);
	void __fastcall SetBackgroundColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetForegroundColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetMarkerStyle(const TChartMarkerStyle Value);
	void __fastcall SetSize(const int Value);
	
public:
	__property TChartMarkerStyle MarkerStyle = {read=GetMarkerStyle, write=SetMarkerStyle, nodefault};
	__property Xc12utils5::TXc12IndexColor ForegroundColor = {read=GetForegroundColor, write=SetForegroundColor, nodefault};
	__property Xc12utils5::TXc12IndexColor BackgroundColor = {read=GetBackgroundColor, write=SetBackgroundColor, nodefault};
	__property bool Automatic = {read=GetAutomatic, write=SetAutomatic, nodefault};
	__property int Size = {read=GetSize, write=SetSize, nodefault};
public:
	/* TObject.Create */ inline __fastcall TMarkerFormat() : TRecordObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TMarkerFormat() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGelFrame : public TRecordObject
{
	typedef TRecordObject inherited;
	
private:
	Biff_escher5::TOPT* FOPT;
	void __fastcall InsertPICRec();
	void __fastcall RemovePICRec();
	Biff_eschertypes5::TMSOBlipType __fastcall GetPictureType();
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	void __fastcall SetDefault();
	void __fastcall UpdateRecord(System::TObject* Sender);
	void __fastcall LoadPictFromStream(System::Classes::TStream* Stream, Biff_eschertypes5::TMSOBlipType PictType);
	void __fastcall LoadPictFromFile(System::UnicodeString Filename);
	
public:
	__fastcall TGelFrame();
	__fastcall virtual ~TGelFrame();
	void __fastcall SavePictToStream(System::Classes::TStream* Stream);
	void __fastcall SavePictToFile(System::UnicodeString Filename, bool AutoExt);
	void __fastcall FillEffectPicture(System::Classes::TStream* Stream, Biff_eschertypes5::TMSOBlipType PictType)/* overload */;
	void __fastcall FillEffectPicture(System::UnicodeString Filename)/* overload */;
	void __fastcall FillEffectTexture(System::Classes::TStream* Stream, Biff_eschertypes5::TMSOBlipType PictType)/* overload */;
	void __fastcall FillEffectTexture(System::UnicodeString Filename)/* overload */;
	void __fastcall FillEffectGradient(Xc12utils5::TXc12IndexColor Color1, Xc12utils5::TXc12IndexColor Color2, TGradientFillStyle GradientStyle);
	__property Biff_eschertypes5::TMSOBlipType PictureType = {read=GetPictureType, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPaintFrame : public TRecordObject
{
	typedef TRecordObject inherited;
	
private:
	TLineFormat* FLineFormat;
	TAreaFormat* FAreaFormat;
	TGelFrame* FGelFrame;
	bool __fastcall GetHasFillEffects();
	void __fastcall SetHasFillEffects(const bool Value);
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	void __fastcall SetDefault(Biff_recordstoragechart5::TChartRecord* Parent);
	
public:
	__fastcall TPaintFrame();
	__fastcall virtual ~TPaintFrame();
	__property TLineFormat* LineFormat = {read=FLineFormat, write=FLineFormat};
	__property TAreaFormat* AreaFormat = {read=FAreaFormat, write=FAreaFormat};
	__property TGelFrame* FillEffects = {read=FGelFrame, write=FGelFrame};
	__property bool HasFillEffects = {read=GetHasFillEffects, write=SetHasFillEffects, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TTextFrame : public TRecordObject
{
	typedef TRecordObject inherited;
	
private:
	TLineFormat* FLineFormat;
	TAreaFormat* FAreaFormat;
	bool __fastcall GetAutoPosition();
	bool __fastcall GetShadow();
	void __fastcall SetAutoPosition(const bool Value);
	void __fastcall SetShadow(const bool Value);
	bool __fastcall GetAutoSize();
	void __fastcall SetAutoSize(const bool Value);
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	
public:
	__fastcall TTextFrame();
	__fastcall virtual ~TTextFrame();
	__property TLineFormat* LineFormat = {read=FLineFormat, write=FLineFormat};
	__property TAreaFormat* AreaFormat = {read=FAreaFormat, write=FAreaFormat};
	__property bool Shadow = {read=GetShadow, write=SetShadow, nodefault};
	__property bool AutoSize = {read=GetAutoSize, write=SetAutoSize, nodefault};
	__property bool AutoPosition = {read=GetAutoPosition, write=SetAutoPosition, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TChartLabel : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Biff_recordstoragechart5::TChartRecord* FRecord;
	Biff_recordstoragechart5::TChartRecord* FRecPOS;
	Biff_recordstoragechart5::TChartRecord* FRecAI;
	Biff_recordstoragechart5::TChartRecord* FRecOBJECTLINK;
	Biff_recordstoragechart5::TChartRecord* FRecSERIESTEXT;
	int __fastcall GetDataPointIndex();
	TChartLabelType __fastcall GetLabelType();
	int __fastcall GetSerieIndex();
	System::UnicodeString __fastcall GetText();
	int __fastcall GetXOffset();
	int __fastcall GetYOffset();
	void __fastcall SetDataPointIndex(const int Value);
	void __fastcall SetLabelType(const TChartLabelType Value);
	void __fastcall SetSerieIndex(const int Value);
	void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetXOffset(const int Value);
	void __fastcall SetYOffset(const int Value);
	int __fastcall GetRotation();
	void __fastcall SetRotation(const int Value);
	
protected:
	void __fastcall AssignRecords(Biff_recordstoragechart5::TChartRecord* Rec);
	void __fastcall SetDefault();
	
public:
	__fastcall virtual TChartLabel(System::Classes::TCollection* Collection);
	__fastcall virtual ~TChartLabel();
	__property TChartLabelType LabelType = {read=GetLabelType, nodefault};
	__property int XOffset = {read=GetXOffset, write=SetXOffset, nodefault};
	__property int YOffset = {read=GetYOffset, write=SetYOffset, nodefault};
	__property int SerieIndex = {read=GetSerieIndex, write=SetSerieIndex, nodefault};
	__property int DataPointIndex = {read=GetDataPointIndex, write=SetDataPointIndex, nodefault};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property int Rotation = {read=GetRotation, write=SetRotation, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TChartLabels : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TChartLabel* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TPersistent* FOwner;
	TChartLabel* __fastcall GetItems(int Index);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TChartLabels(System::Classes::TPersistent* AOwner);
	HIDESBASE TChartLabel* __fastcall Add(TChartLabelType LabelType);
	TChartLabel* __fastcall AddFromFile();
	HIDESBASE void __fastcall Delete(int Index);
	__property TChartLabel* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TChartLabels() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDataPoint : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Biff_recordstoragechart5::TChartRecord* FRecord;
	TLineFormat* FLineFormat;
	TAreaFormat* FAreaFormat;
	TMarkerFormat* FMarkerFormat;
	Biff_recordstoragechart5::TChartRecord* FRecPIEFORMAT;
	Biff_recordstoragechart5::TChartRecord* FRecATTACHEDLABEL;
	int __fastcall GetPointIndex();
	TChartDataLabels __fastcall GetDataLablel();
	int __fastcall GetPieSliceDist();
	void __fastcall SetPointIndex(const int Value);
	void __fastcall SetDataLablel(const TChartDataLabels Value);
	void __fastcall SetPieSliceDist(const int Value);
	
protected:
	void __fastcall AssignRecords(Biff_recordstoragechart5::TChartRecord* Rec);
	
public:
	__fastcall TDataPoint();
	__fastcall virtual ~TDataPoint();
	__property int PointIndex = {read=GetPointIndex, write=SetPointIndex, nodefault};
	__property int PieSliceDist = {read=GetPieSliceDist, write=SetPieSliceDist, nodefault};
	__property TChartDataLabels DataLablel = {read=GetDataLablel, write=SetDataLablel, nodefault};
	__property TLineFormat* LineFormat = {read=FLineFormat, write=FLineFormat};
	__property TAreaFormat* AreaFormat = {read=FAreaFormat, write=FAreaFormat};
	__property TMarkerFormat* MarkerFormat = {read=FMarkerFormat, write=FMarkerFormat};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDataPoints : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TDataPoint* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::TObject* FOwner;
	TDataPoint* __fastcall GetItems(int Index);
	
public:
	__fastcall TDataPoints(System::TObject* AOwner);
	HIDESBASE TDataPoint* __fastcall Add();
	TDataPoint* __fastcall AddFromFile();
	HIDESBASE void __fastcall Delete(int Index);
	__property TDataPoint* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TDataPoints() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSChartSerie : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Biff_recordstoragechart5::TChartRecord* FRecord;
	Biff_formulahandler5::TFormulaHandler* FFormulaHandler;
	int FiRecAI_Values;
	int FiRecAI_Values2;
	int FiRecAI_Category;
	int FiRecAI_SerieName;
	Biff_recordstoragechart5::TChartRecord* PRecGeomtery;
	TDataPoint* FDefDatapoint;
	TDataPoints* FDataPoints;
	System::UnicodeString __fastcall GetAIFormula(Biff_recsii5::PCRecAI AI);
	void __fastcall SetAIFormula(Biff_recordstoragechart5::TChartRecord* AI, System::UnicodeString Value);
	System::UnicodeString __fastcall GetCategory();
	System::UnicodeString __fastcall GetValues();
	void __fastcall SetCategory(const System::UnicodeString Value);
	void __fastcall SetValues(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetValues2();
	void __fastcall SetValues2(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSerieName();
	void __fastcall SetSerieName(const System::UnicodeString Value);
	TSerieItemGeomtery __fastcall GetGeomtery();
	void __fastcall SetGeomtery(const TSerieItemGeomtery Value);
	bool __fastcall GetHasDefDataPoint();
	void __fastcall SetHasDefDataPoint(const bool Value);
	
protected:
	void __fastcall AssignRecords(Biff_recordstoragechart5::TChartRecord* Rec);
	void __fastcall CalcValueCount();
	
public:
	__fastcall virtual TXLSChartSerie(System::Classes::TCollection* Collection);
	__fastcall virtual ~TXLSChartSerie();
	Biff_utils5::TDynByteArray __fastcall GetValuesFmla();
	
__published:
	__property System::UnicodeString Values = {read=GetValues, write=SetValues};
	__property System::UnicodeString Values2 = {read=GetValues2, write=SetValues2};
	__property System::UnicodeString Category = {read=GetCategory, write=SetCategory};
	__property System::UnicodeString SerieName = {read=GetSerieName, write=SetSerieName};
	__property TDataPoints* DataPoints = {read=FDataPoints, write=FDataPoints};
	__property TDataPoint* DefDataPoint = {read=FDefDatapoint, write=FDefDatapoint};
	__property bool HasDefDataPoint = {read=GetHasDefDataPoint, write=SetHasDefDataPoint, nodefault};
	__property TSerieItemGeomtery Geomtery = {read=GetGeomtery, write=SetGeomtery, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSChartSeries : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TXLSChartSerie* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSChartSerie* __fastcall GetChartSerie(int Index);
	
protected:
	System::Classes::TPersistent* FOwner;
	Biff_formulahandler5::TFormulaHandler* FFormulaHandler;
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TXLSChartSeries(System::Classes::TPersistent* AOwner, Biff_formulahandler5::TFormulaHandler* FormulaHandler);
	HIDESBASE TXLSChartSerie* __fastcall Add();
	TXLSChartSerie* __fastcall AddFromFile();
	HIDESBASE void __fastcall Delete(int Index);
	__property TXLSChartSerie* Items[int Index] = {read=GetChartSerie/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TXLSChartSeries() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TTickFormat : public TRecordObject
{
	typedef TRecordObject inherited;
	
private:
	Xc12utils5::TXc12IndexColor __fastcall GetLabelColor();
	TTickLablePos __fastcall GetLabelPosition();
	TTickType __fastcall GetMajorTick();
	TTickType __fastcall GetMinorTick();
	int __fastcall GetTextRotation();
	void __fastcall SetLabelColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetLabelPosition(const TTickLablePos Value);
	void __fastcall SetMajorTick(const TTickType Value);
	void __fastcall SetMinorTick(const TTickType Value);
	void __fastcall SetTextRotation(const int Value);
	
public:
	__property TTickType MajorTick = {read=GetMajorTick, write=SetMajorTick, nodefault};
	__property TTickType MinorTick = {read=GetMinorTick, write=SetMinorTick, nodefault};
	__property TTickLablePos LabelPosition = {read=GetLabelPosition, write=SetLabelPosition, nodefault};
	__property Xc12utils5::TXc12IndexColor LabelColor = {read=GetLabelColor, write=SetLabelColor, nodefault};
	__property int TextRotation = {read=GetTextRotation, write=SetTextRotation, nodefault};
public:
	/* TObject.Create */ inline __fastcall TTickFormat() : TRecordObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TTickFormat() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCatSerAxisScaling : public TRecordObject
{
	typedef TRecordObject inherited;
	
private:
	int __fastcall GetCrossingPoint();
	int __fastcall GetLabelsFrequency();
	TCatSerAxisScalingOptions __fastcall GetOptions();
	int __fastcall GetTickMarksFrequency();
	void __fastcall SetCrossingPoint(const int Value);
	void __fastcall SetLabelsFrequency(const int Value);
	void __fastcall SetOptions(const TCatSerAxisScalingOptions Value);
	void __fastcall SetTickMarksFrequency(const int Value);
	
public:
	__property int CrossingPoint = {read=GetCrossingPoint, write=SetCrossingPoint, nodefault};
	__property int LabelsFrequency = {read=GetLabelsFrequency, write=SetLabelsFrequency, nodefault};
	__property int TickMarksFrequency = {read=GetTickMarksFrequency, write=SetTickMarksFrequency, nodefault};
	__property TCatSerAxisScalingOptions Options = {read=GetOptions, write=SetOptions, nodefault};
public:
	/* TObject.Create */ inline __fastcall TCatSerAxisScaling() : TRecordObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCatSerAxisScaling() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TValueAxisScaling : public TRecordObject
{
	typedef TRecordObject inherited;
	
private:
	void __fastcall CheckFlag(System::Word Flag, double Value);
	double __fastcall GetCategoryAxisCrossing();
	double __fastcall GetMajorInc();
	double __fastcall GetMaxValue();
	double __fastcall GetMinorInc();
	double __fastcall GetMinValue();
	TValueAxisScalingOptions __fastcall GetOptions();
	void __fastcall SetCategoryAxisCrossing(const double Value);
	void __fastcall SetMajorInc(const double Value);
	void __fastcall SetMaxValue(const double Value);
	void __fastcall SetMinorInc(const double Value);
	void __fastcall SetMinValue(const double Value);
	void __fastcall SetOptions(const TValueAxisScalingOptions Value);
	
public:
	__property double MinValue = {read=GetMinValue, write=SetMinValue};
	__property double MaxValue = {read=GetMaxValue, write=SetMaxValue};
	__property double MajorInc = {read=GetMajorInc, write=SetMajorInc};
	__property double MinorInc = {read=GetMinorInc, write=SetMinorInc};
	__property double CategoryAxisCrossing = {read=GetCategoryAxisCrossing, write=SetCategoryAxisCrossing};
	__property TValueAxisScalingOptions Options = {read=GetOptions, write=SetOptions, nodefault};
public:
	/* TObject.Create */ inline __fastcall TValueAxisScaling() : TRecordObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TValueAxisScaling() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TChartAxis : public TRecordObject
{
	typedef TRecordObject inherited;
	
private:
	TTickFormat* FTick;
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	
public:
	__fastcall TChartAxis();
	__fastcall virtual ~TChartAxis();
	__property TTickFormat* Tick = {read=FTick};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCategoryAxis : public TChartAxis
{
	typedef TChartAxis inherited;
	
private:
	TCatSerAxisScaling* FCatSerAxisScaling;
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	
public:
	__fastcall TCategoryAxis();
	__fastcall virtual ~TCategoryAxis();
	__property TCatSerAxisScaling* CatSerAxisScaling = {read=FCatSerAxisScaling, write=FCatSerAxisScaling};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSerieAxis : public TChartAxis
{
	typedef TChartAxis inherited;
	
private:
	TCatSerAxisScaling* FCatSerAxisScaling;
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	
public:
	__fastcall TSerieAxis();
	__fastcall virtual ~TSerieAxis();
	__property TCatSerAxisScaling* CatSerAxisScaling = {read=FCatSerAxisScaling, write=FCatSerAxisScaling};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TValueAxis : public TChartAxis
{
	typedef TChartAxis inherited;
	
private:
	TValueAxisScaling* FValueAxisScaling;
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	
public:
	__fastcall TValueAxis();
	__fastcall virtual ~TValueAxis();
	__property TValueAxisScaling* ValueAxisScaling = {read=FValueAxisScaling, write=FValueAxisScaling};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TChart3D : public TRecordObject
{
	typedef TRecordObject inherited;
	
private:
	int __fastcall GetDistance();
	int __fastcall GetElevation();
	TChart3DOptions __fastcall GetOptions();
	int __fastcall GetRelDepth();
	int __fastcall GetRelHeight();
	int __fastcall GetRotation();
	int __fastcall GetSeriesSpace();
	void __fastcall SetDistance(const int Value);
	void __fastcall SetElevation(const int Value);
	void __fastcall SetOptions(const TChart3DOptions Value);
	void __fastcall SetRelDepth(const int Value);
	void __fastcall SetRelHeight(const int Value);
	void __fastcall SetRotation(const int Value);
	void __fastcall SetSeriesSpace(const int Value);
	
public:
	__property int Rotation = {read=GetRotation, write=SetRotation, nodefault};
	__property int Elevation = {read=GetElevation, write=SetElevation, nodefault};
	__property int Distance = {read=GetDistance, write=SetDistance, nodefault};
	__property int RelHeight = {read=GetRelHeight, write=SetRelHeight, nodefault};
	__property int RelDepth = {read=GetRelDepth, write=SetRelDepth, nodefault};
	__property int SeriesSpace = {read=GetSeriesSpace, write=SetSeriesSpace, nodefault};
	__property TChart3DOptions Options = {read=GetOptions, write=SetOptions, nodefault};
public:
	/* TObject.Create */ inline __fastcall TChart3D() : TRecordObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TChart3D() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TChartLegend : public TRecordObject
{
	typedef TRecordObject inherited;
	
private:
	TPaintFrame* FFrame;
	TChartLegendSpacing __fastcall GetLegendSpacing();
	TChartLegendType __fastcall GetLegendType();
	bool __fastcall GetVertical();
	void __fastcall SetLegendSpacing(const TChartLegendSpacing Value);
	void __fastcall SetLegendType(const TChartLegendType Value);
	void __fastcall SetVertical(const bool Value);
	bool __fastcall GetHasFrame();
	void __fastcall SetHasFrame(const bool Value);
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	
public:
	__fastcall TChartLegend();
	__fastcall virtual ~TChartLegend();
	__property TChartLegendType LegendType = {read=GetLegendType, write=SetLegendType, nodefault};
	__property TChartLegendSpacing LegendSpacing = {read=GetLegendSpacing, write=SetLegendSpacing, nodefault};
	__property bool Vertical = {read=GetVertical, write=SetVertical, nodefault};
	__property TPaintFrame* Frame = {read=FFrame, write=FFrame};
	__property bool HasFrame = {read=GetHasFrame, write=SetHasFrame, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TChartStyle : public TRecordObject
{
	typedef TRecordObject inherited;
	
private:
	TChart3D* FChart3D;
	TChartLegend* FLegend;
	TDataPoint* FDefDatapoint;
	bool __fastcall GetVaryColors();
	void __fastcall SetVaryColors(const bool Value);
	bool __fastcall GetHasDefDataPoint();
	void __fastcall SetHasDefDataPoint(const bool Value);
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	virtual TXLSChartType __fastcall ChartType();
	
public:
	__fastcall TChartStyle();
	__fastcall virtual ~TChartStyle();
	__property TChart3D* Chart3D = {read=FChart3D};
	__property TChartLegend* Legend = {read=FLegend, write=FLegend};
	__property bool VaryColors = {read=GetVaryColors, write=SetVaryColors, nodefault};
	__property TDataPoint* DefDatapoint = {read=FDefDatapoint};
	__property bool HasDefDataPoint = {read=GetHasDefDataPoint, write=SetHasDefDataPoint, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TChartStyleArea : public TChartStyle
{
	typedef TChartStyle inherited;
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	virtual TXLSChartType __fastcall ChartType();
	
public:
	__fastcall TChartStyleArea();
	__fastcall virtual ~TChartStyleArea();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TChartStyleBarColumn : public TChartStyle
{
	typedef TChartStyle inherited;
	
private:
	bool __fastcall GetIsBar();
	void __fastcall SetIsBar(const bool Value);
	bool __fastcall GetStacked();
	void __fastcall SetStacked(const bool Value);
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	virtual TXLSChartType __fastcall ChartType();
	
public:
	__fastcall TChartStyleBarColumn();
	__fastcall virtual ~TChartStyleBarColumn();
	__property bool IsBar = {read=GetIsBar, write=SetIsBar, nodefault};
	__property bool Stacked = {read=GetStacked, write=SetStacked, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TChartStyleSurface : public TChartStyle
{
	typedef TChartStyle inherited;
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	
public:
	__fastcall TChartStyleSurface();
	__fastcall virtual ~TChartStyleSurface();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TChartStyleScatter : public TChartStyle
{
	typedef TChartStyle inherited;
	
private:
	bool __fastcall GetBubbleIsArea();
	int __fastcall GetBubblePercent();
	bool __fastcall GetIsBubble();
	bool __fastcall GetNegativeBubble();
	bool __fastcall GetShadow();
	void __fastcall SetBubbleIsArea(const bool Value);
	void __fastcall SetBubblePercent(const int Value);
	void __fastcall SetIsBubble(const bool Value);
	void __fastcall SetNegativeBubble(const bool Value);
	void __fastcall SetShadow(const bool Value);
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	
public:
	__fastcall TChartStyleScatter();
	__fastcall virtual ~TChartStyleScatter();
	__property int BubblePercent = {read=GetBubblePercent, write=SetBubblePercent, nodefault};
	__property bool BubbleIsArea = {read=GetBubbleIsArea, write=SetBubbleIsArea, nodefault};
	__property bool IsBubble = {read=GetIsBubble, write=SetIsBubble, nodefault};
	__property bool NegativeBubble = {read=GetNegativeBubble, write=SetNegativeBubble, nodefault};
	__property bool Shadow = {read=GetShadow, write=SetShadow, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TChartStylePie : public TChartStyle
{
	typedef TChartStyle inherited;
	
private:
	int __fastcall GetAngle();
	int __fastcall GetDonutHole();
	bool __fastcall GetLeaderLines();
	bool __fastcall GetShadow();
	void __fastcall SetAngle(const int Value);
	void __fastcall SetDonutHole(const int Value);
	void __fastcall SetLeaderLines(const bool Value);
	void __fastcall SetShadow(const bool Value);
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	
public:
	__fastcall TChartStylePie();
	__fastcall virtual ~TChartStylePie();
	__property int Angle = {read=GetAngle, write=SetAngle, nodefault};
	__property int DonutHole = {read=GetDonutHole, write=SetDonutHole, nodefault};
	__property bool Shadow = {read=GetShadow, write=SetShadow, nodefault};
	__property bool LeaderLines = {read=GetLeaderLines, write=SetLeaderLines, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TChartStyleBopPop : public TChartStyle
{
	typedef TChartStyle inherited;
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	
public:
	__fastcall TChartStyleBopPop();
	__fastcall virtual ~TChartStyleBopPop();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TChartStyleLine : public TChartStyle
{
	typedef TChartStyle inherited;
	
private:
	bool __fastcall GetCategoryAsPercent();
	bool __fastcall GetShadow();
	bool __fastcall GetStacked();
	void __fastcall SetCategoryAsPercent(const bool Value);
	void __fastcall SetShadow(const bool Value);
	void __fastcall SetStacked(const bool Value);
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	
public:
	__fastcall TChartStyleLine();
	__fastcall virtual ~TChartStyleLine();
	__property bool Stacked = {read=GetStacked, write=SetStacked, nodefault};
	__property bool CategoryAsPercent = {read=GetCategoryAsPercent, write=SetCategoryAsPercent, nodefault};
	__property bool Shadow = {read=GetShadow, write=SetShadow, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TChartStyleRadar : public TChartStyle
{
	typedef TChartStyle inherited;
	
private:
	bool __fastcall GetAxisLabels();
	bool __fastcall GetShadow();
	void __fastcall SetAxisLabels(const bool Value);
	void __fastcall SetShadow(const bool Value);
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	
public:
	__fastcall TChartStyleRadar();
	__fastcall virtual ~TChartStyleRadar();
	__property bool AxisLabels = {read=GetAxisLabels, write=SetAxisLabels, nodefault};
	__property bool Shadow = {read=GetShadow, write=SetShadow, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TChartStyleRadarArea : public TChartStyle
{
	typedef TChartStyle inherited;
	
private:
	bool __fastcall GetAxisLabels();
	bool __fastcall GetShadow();
	void __fastcall SetAxisLabels(const bool Value);
	void __fastcall SetShadow(const bool Value);
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	
public:
	__fastcall TChartStyleRadarArea();
	__fastcall virtual ~TChartStyleRadarArea();
	__property bool AxisLabels = {read=GetAxisLabels, write=SetAxisLabels, nodefault};
	__property bool Shadow = {read=GetShadow, write=SetShadow, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TChartPlotArea : public TRecordObject
{
	typedef TRecordObject inherited;
	
private:
	TCategoryAxis* FCategoryAxis;
	TSerieAxis* FSerieAxis;
	TValueAxis* FValueAxis;
	TChartStyle* FChartStyle;
	TPaintFrame* FFrame;
	TXLSChartType __fastcall GetChartType();
	void __fastcall SetChartType(const TXLSChartType Value);
	bool __fastcall GetIs3D();
	void __fastcall SetIs3D(const bool Value);
	bool __fastcall GetHasLegend();
	void __fastcall SetHasLegend(const bool Value);
	
protected:
	virtual void __fastcall Assign(Biff_recordstoragechart5::TChartRecord* Rec);
	
public:
	__fastcall TChartPlotArea();
	__fastcall virtual ~TChartPlotArea();
	__property TXLSChartType ChartType = {read=GetChartType, write=SetChartType, nodefault};
	__property TChartStyle* ChartStyle = {read=FChartStyle, write=FChartStyle};
	__property TPaintFrame* Frame = {read=FFrame, write=FFrame};
	__property bool Is3D = {read=GetIs3D, write=SetIs3D, nodefault};
	__property bool HasLegend = {read=GetHasLegend, write=SetHasLegend, nodefault};
	__property TCategoryAxis* CategoryAxis = {read=FCategoryAxis, write=FCategoryAxis};
	__property TSerieAxis* SerieAxis = {read=FSerieAxis, write=FSerieAxis};
	__property TValueAxis* ValueAxis = {read=FValueAxis, write=FValueAxis};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDrwChart : public Biff_drawingobjanchor5::TDrwAnchor
{
	typedef Biff_drawingobjanchor5::TDrwAnchor inherited;
	
private:
	Biff_recordstoragechart5::TChartRecord* FRecord;
	Biff_recordstoragechart5::TChartRecord* FRecCHART;
	Biff_recordstoragechart5::TChartRecord* FRecSHTPROPS;
	TChartText* FDefaultTextA;
	TChartText* FDefaultTextB;
	TChartLabels* FLabels;
	TXLSChartSeries* FSeries;
	TChartPlotArea* FPlotArea;
	TPaintFrame* FFrame;
	TChartEmptyCells __fastcall GetEmptyCells();
	TChartSheetOptions __fastcall GetSheetOptions();
	void __fastcall SetEmptyCells(const TChartEmptyCells Value);
	void __fastcall SetSheetOptions(const TChartSheetOptions Value);
	bool __fastcall GetPlotVisibleCellsOnly();
	void __fastcall SetPlotVisibleCellsOnly(const bool Value);
	
protected:
	Biff_formulahandler5::TFormulaHandler* FFormulaHandler;
	void __fastcall AssignRecords(Biff_recordstoragechart5::TChartRecord* Records);
	
public:
	__fastcall virtual TDrwChart(System::Classes::TCollection* Collection);
	__fastcall virtual ~TDrwChart();
	void __fastcall SourceSheet(int SheetIndex);
	__property TChartEmptyCells EmptyCells = {read=GetEmptyCells, write=SetEmptyCells, nodefault};
	__property bool PlotVisibleCellsOnly = {read=GetPlotVisibleCellsOnly, write=SetPlotVisibleCellsOnly, nodefault};
	
__published:
	__property TChartText* DefaultTextA = {read=FDefaultTextA, write=FDefaultTextA};
	__property TChartText* DefaultTextB = {read=FDefaultTextB, write=FDefaultTextB};
	__property TXLSChartSeries* Series = {read=FSeries, write=FSeries};
	__property TChartPlotArea* PlotArea = {read=FPlotArea, write=FPlotArea};
	__property TChartLabels* Labels = {read=FLabels, write=FLabels};
	__property TChartSheetOptions SheetOptions = {read=GetSheetOptions, write=SetSheetOptions, nodefault};
	__property Biff_recordstoragechart5::TChartRecord* Rec = {read=FRecord};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDrwCharts : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TDrwChart* operator[](int Index) { return this->Items[Index]; }
	
private:
	TDrwChart* __fastcall GetDrwChart(int Index);
	
protected:
	System::Classes::TPersistent* FOwner;
	Biff_escher5::TEscherDrawing* FDrawing;
	bool FFileAdd;
	Biff_formulahandler5::TFormulaHandler* FFormulaHandler;
	Xc12datastylesheet5::TXc12Fonts* FFonts;
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TDrwCharts(System::Classes::TPersistent* AOwner, Biff_escher5::TEscherDrawing* Drawing, Biff_formulahandler5::TFormulaHandler* FormulaHandler, Xc12datastylesheet5::TXc12Fonts* Fonts);
	HIDESBASE TDrwChart* __fastcall Add(int SheetIndex);
	void __fastcall SourceSheet(int Index);
	TDrwChart* __fastcall AddClean(int SheetIndex);
	void __fastcall AddFromFile(Biff_escher5::TShapeClientAnchor* Shape);
	HIDESBASE void __fastcall Clear();
	__property TDrwChart* Items[int Index] = {read=GetDrwChart/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDrwCharts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSheetChart : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	int FSheetIndex;
	System::UnicodeString FName;
	Biff_recordstoragechart5::TChartRecord* FRecord;
	Biff_escher5::TEscherDrawing* FDrawing;
	
__published:
	__fastcall virtual TSheetChart(System::Classes::TCollection* Collection);
	__fastcall virtual ~TSheetChart();
	void __fastcall AddDrawing(Biff_escher5::TEscherDrawing* Drawing);
	__property int SheetIndex = {read=FSheetIndex, write=FSheetIndex, nodefault};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property Biff_escher5::TEscherDrawing* Drawing = {read=FDrawing};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSheetCharts : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TSheetChart* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TPersistent* FOwner;
	Biff_escher5::TEscherGroup* FDrawingGroup;
	int FCurrIndex;
	TSheetChart* __fastcall GetSheetChart(int Index);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	HIDESBASE TSheetChart* __fastcall Add();
	
public:
	__fastcall TSheetCharts(System::Classes::TPersistent* AOwner, Biff_escher5::TEscherGroup* DrawingGroup);
	int __fastcall Find(const System::UnicodeString AName);
	void __fastcall LoadFromStream(Biff_stream5::TXLSStream* Stream, System::UnicodeString Name, System::Sysutils::PByteArray PBuf, Xc12datastylesheet5::TXc12Fonts* Fonts, int SheetIndex);
	void __fastcall SaveToStream(int Index, Biff_stream5::TXLSStream* Stream);
	__property TSheetChart* Items[int Index] = {read=GetSheetChart/*, default*/};
	__property Biff_escher5::TEscherGroup* DrawingGroup = {read=FDrawingGroup};
	__property int CurrIndex = {read=FCurrIndex, nodefault};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TSheetCharts() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Biff_drawingobjchart5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_DRAWINGOBJCHART5)
using namespace Biff_drawingobjchart5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_drawingobjchart5HPP
