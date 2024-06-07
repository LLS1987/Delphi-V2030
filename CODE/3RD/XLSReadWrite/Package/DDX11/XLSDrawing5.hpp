// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSDrawing5.pas' rev: 35.00 (Windows)

#ifndef Xlsdrawing5HPP
#define Xlsdrawing5HPP

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
#include <Vcl.Graphics.hpp>
#include <xpgParseDrawingCommon.hpp>
#include <xpgParseDrawing.hpp>
#include <xpgParseChart.hpp>
#include <xpgPSimpleDOM.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Graphics.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12Manager5.hpp>
#include <BIFF_DrawingObj5.hpp>
#include <BIFF_ControlObj5.hpp>
#include <XLSUtils5.hpp>
#include <XLSColumn5.hpp>
#include <XLSRow5.hpp>
#include <XLSRelCells5.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsdrawing5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSDrwShapeProp;
class DELPHICLASS TXLSDrwColor;
class DELPHICLASS TXLSDrwFill;
class DELPHICLASS TXLSDrwFillNone;
class DELPHICLASS TXLSDrwFillSolid;
class DELPHICLASS TXLSDrwFillGradientStop;
class DELPHICLASS TXLSDrwFillGradientStops;
class DELPHICLASS TXLSDrwFillGradient;
class DELPHICLASS TXLSDrwFillPictStretchOpts;
class DELPHICLASS TXLSDrwFillPictTileOpts;
class DELPHICLASS TXLSDrwFillPicture;
class DELPHICLASS TXLSDrwFillAutomatic;
class DELPHICLASS TXLSDrwFillChoice;
class DELPHICLASS TXLSDrwLineFillChoice;
class DELPHICLASS TXLSDrwLineEndStyle;
class DELPHICLASS TXLSDrwLineStyle;
class DELPHICLASS TXLSDrwShapeProperies;
class DELPHICLASS TXLSDrwTextFont;
class DELPHICLASS TXLSDrwTextRun;
class DELPHICLASS TXLSDrwTextRuns;
class DELPHICLASS TXLSDrwTextPara;
class DELPHICLASS TXLSDrwTextParas;
class DELPHICLASS TXLSDrwTextBody;
class DELPHICLASS TXLSDrwText;
class DELPHICLASS TXLSDrawingObject;
class DELPHICLASS TXLSDrwTwoPosShape;
class DELPHICLASS TXLSDrawingImage;
class DELPHICLASS TXLSDrawingShape;
class DELPHICLASS TXLSDrawingWordArt;
class DELPHICLASS TXLSDrawingTextBox;
class DELPHICLASS TXLSDrawingObjects;
class DELPHICLASS TXLSDrawingImages;
class DELPHICLASS TXLSDrawingShapes;
class DELPHICLASS TXLSDrawingWordArts;
class DELPHICLASS TXLSDrawingTextBoxes;
class DELPHICLASS TXLSDrawingChart;
class DELPHICLASS TXLSDrawingCharts;
class DELPHICLASS TXLSDrawingEditor;
class DELPHICLASS TXLSDrawingEditorShape;
class DELPHICLASS TXLSDrawingEditorTextBox;
class DELPHICLASS TXLSDrawingEditorImage;
class DELPHICLASS TXLSDrawingEditorChart;
class DELPHICLASS TXLSDrawing;
//-- type declarations -------------------------------------------------------
typedef bool __fastcall (__closure *TAddImageEvent97)(Xpgparsedrawing::TCT_TwoCellAnchor* AAnchor);

enum DECLSPEC_DENUM TDrwOptImagePositioning : unsigned char { doipMoveButDoNotSize, doipMoveAndSize, doipDoNotMoveOrSize };

enum DECLSPEC_DENUM TXLSDrwFillType : unsigned char { xdftNone, xdftSolid, xdftGradient, xdftPicture, xdftAutomatic };

enum DECLSPEC_DENUM TXLSDrwColorType : unsigned char { xdctRGB, xdctHSL, xdctSystem, xdctScheme, xdctPreset };

enum DECLSPEC_DENUM TXLSDrwXMLColorType : unsigned char { xdxctRGB, xdxctCRGB, xdxctHSL, xdxctSystem, xdxctScheme, xdxctPreset };

enum DECLSPEC_DENUM TXLSDrwGradientFillType : unsigned char { xdgftLinear, xdgftRadial, xdgftRectangular, xdgftPath };

enum DECLSPEC_DENUM TXLSDrwGradientFillDirection : unsigned char { xdgfdNone, xdgfdCentre, xdgfdTopLeft, xdgfdTopRight, xdgfdBottomLeft, xdgfdBottomRight };

enum DECLSPEC_DENUM TXLSDrwMirrorType : unsigned char { xdmtNone, xdmtHorizontal, xdmtVertical, xdmtBoth };

enum DECLSPEC_DENUM TXLSDrwLineJoinType : unsigned char { xdljtNone, xdljtRound, xdljtBevel, xdljtMiter };

enum DECLSPEC_DENUM TXLSDrwTextAlign : unsigned char { xdtaLeft, xdtaCentre, xdtaRight, xdtaJustify, xdtaJustifyLow, xdtaDistributed };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwShapeProp : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	/* TObject.Create */ inline __fastcall TXLSDrwShapeProp() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSDrwShapeProp() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwColor : public TXLSDrwShapeProp
{
	typedef TXLSDrwShapeProp inherited;
	
private:
	unsigned __fastcall GetAsARGB();
	unsigned __fastcall GetAsHSL();
	Xpgparsedrawingcommon::TST_PresetColorVal __fastcall GetAsPreset();
	unsigned __fastcall GetAsRGB();
	Xpgparsedrawingcommon::TST_SchemeColorVal __fastcall GetAsScheme();
	Xpgparsedrawingcommon::TST_SystemColorVal __fastcall GetAsSystem();
	double __fastcall GetTransparency();
	void __fastcall SetAsARGB(const unsigned Value);
	void __fastcall SetAsHSL(const unsigned Value);
	void __fastcall SetAsPreset(const Xpgparsedrawingcommon::TST_PresetColorVal Value);
	void __fastcall SetAsRGB(const unsigned Value);
	void __fastcall SetAsScheme(const Xpgparsedrawingcommon::TST_SchemeColorVal Value);
	void __fastcall SetAsSystem(const Xpgparsedrawingcommon::TST_SystemColorVal Value);
	void __fastcall SetTransparency(const double Value);
	TXLSDrwColorType __fastcall GetColorType();
	System::Uitypes::TColor __fastcall GetAsTColor();
	void __fastcall SetAsTColor(const System::Uitypes::TColor Value);
	
protected:
	Xpgparsedrawingcommon::TEG_ColorChoice* FColorChoice;
	Xpgparsedrawingcommon::TEG_ColorTransform* FColorTransform;
	void __fastcall AssignColorTransform();
	TXLSDrwXMLColorType __fastcall XlsColorType();
	
public:
	__fastcall TXLSDrwColor(Xpgparsedrawingcommon::TEG_ColorChoice* AColorChoice);
	__property TXLSDrwColorType ColorType = {read=GetColorType, nodefault};
	__property double Transparency = {read=GetTransparency, write=SetTransparency};
	__property System::Uitypes::TColor AsTColor = {read=GetAsTColor, write=SetAsTColor, nodefault};
	__property unsigned AsRGB = {read=GetAsRGB, write=SetAsRGB, nodefault};
	__property unsigned AsARGB = {read=GetAsARGB, write=SetAsARGB, nodefault};
	__property unsigned AsHSL = {read=GetAsHSL, write=SetAsHSL, nodefault};
	__property Xpgparsedrawingcommon::TST_SystemColorVal AsSystem = {read=GetAsSystem, write=SetAsSystem, nodefault};
	__property Xpgparsedrawingcommon::TST_SchemeColorVal AsScheme = {read=GetAsScheme, write=SetAsScheme, nodefault};
	__property Xpgparsedrawingcommon::TST_PresetColorVal AsPreset = {read=GetAsPreset, write=SetAsPreset, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSDrwColor() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwFill : public TXLSDrwShapeProp
{
	typedef TXLSDrwShapeProp inherited;
	
protected:
	TXLSDrwFillType FFillType;
	virtual TXLSDrwFillType __fastcall GetFillType() = 0 ;
	
public:
	__property TXLSDrwFillType FillType = {read=GetFillType, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXLSDrwFill() : TXLSDrwShapeProp() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSDrwFill() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwFillNone : public TXLSDrwFill
{
	typedef TXLSDrwFill inherited;
	
protected:
	Xpgparsedrawingcommon::TCT_NoFillProperties* FFill;
	virtual TXLSDrwFillType __fastcall GetFillType();
	
public:
	__fastcall TXLSDrwFillNone(Xpgparsedrawingcommon::TCT_NoFillProperties* AFill);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSDrwFillNone() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwFillSolid : public TXLSDrwFill
{
	typedef TXLSDrwFill inherited;
	
protected:
	TXLSDrwColor* FColor;
	Xpgparsedrawingcommon::TCT_SolidColorFillProperties* FFill;
	virtual TXLSDrwFillType __fastcall GetFillType();
	
public:
	__fastcall TXLSDrwFillSolid(Xpgparsedrawingcommon::TCT_SolidColorFillProperties* AFill);
	__fastcall virtual ~TXLSDrwFillSolid();
	__property TXLSDrwColor* Color = {read=FColor};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwFillGradientStop : public TXLSDrwShapeProp
{
	typedef TXLSDrwShapeProp inherited;
	
private:
	double __fastcall GetStopPosition();
	double __fastcall GetTransparency();
	void __fastcall SetStopPosition(const double Value);
	void __fastcall SetTransparency(const double Value);
	
protected:
	Xpgparsedrawingcommon::TCT_GradientStop* FStop;
	TXLSDrwColor* FColor;
	
public:
	__fastcall TXLSDrwFillGradientStop(Xpgparsedrawingcommon::TCT_GradientStop* AStop);
	__fastcall virtual ~TXLSDrwFillGradientStop();
	__property double StopPosition = {read=GetStopPosition, write=SetStopPosition};
	__property TXLSDrwColor* Color = {read=FColor};
	__property double Transparency = {read=GetTransparency, write=SetTransparency};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwFillGradientStops : public TXLSDrwShapeProp
{
	typedef TXLSDrwShapeProp inherited;
	
public:
	TXLSDrwFillGradientStop* operator[](const int Index) { return this->Items[Index]; }
	
private:
	TXLSDrwFillGradientStop* __fastcall GetItems(const int Index);
	
protected:
	System::Contnrs::TObjectList* FItems;
	Xpgparsedrawingcommon::TCT_GradientStopList* FGSList;
	void __fastcall SetDefault();
	
public:
	__fastcall TXLSDrwFillGradientStops(Xpgparsedrawingcommon::TCT_GradientStopList* AGSList);
	__fastcall virtual ~TXLSDrwFillGradientStops();
	void __fastcall Clear();
	TXLSDrwFillGradientStop* __fastcall Add();
	void __fastcall Remove(const int AIndex);
	int __fastcall Count();
	__property TXLSDrwFillGradientStop* Items[const int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwFillGradient : public TXLSDrwFill
{
	typedef TXLSDrwFill inherited;
	
private:
	TXLSDrwGradientFillDirection __fastcall GetDirection();
	TXLSDrwGradientFillType __fastcall GetGradientType();
	bool __fastcall GetRotateWithShape();
	void __fastcall SetDirection(const TXLSDrwGradientFillDirection Value);
	void __fastcall SetGradientType(const TXLSDrwGradientFillType Value);
	void __fastcall SetRotateWithShape(const bool Value);
	double __fastcall GetAngle();
	void __fastcall SetAngle(const double Value);
	
protected:
	Xpgparsedrawingcommon::TCT_GradientFillProperties* FFill;
	TXLSDrwFillGradientStops* FStops;
	virtual TXLSDrwFillType __fastcall GetFillType();
	
public:
	__fastcall TXLSDrwFillGradient(Xpgparsedrawingcommon::TCT_GradientFillProperties* AFill);
	__fastcall virtual ~TXLSDrwFillGradient();
	__property TXLSDrwFillGradientStops* Stops = {read=FStops};
	__property TXLSDrwGradientFillType GradientType = {read=GetGradientType, write=SetGradientType, nodefault};
	__property TXLSDrwGradientFillDirection Direction = {read=GetDirection, write=SetDirection, nodefault};
	__property bool RotateWithShape = {read=GetRotateWithShape, write=SetRotateWithShape, nodefault};
	__property double Angle = {read=GetAngle, write=SetAngle};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwFillPictStretchOpts : public TXLSDrwShapeProp
{
	typedef TXLSDrwShapeProp inherited;
	
private:
	double __fastcall GetOffsetBottom();
	double __fastcall GetOffsetLeft();
	double __fastcall GetOffsetRight();
	double __fastcall GetOffsetTop();
	void __fastcall SetOffsetBottom(const double Value);
	void __fastcall SetOffsetLeft(const double Value);
	void __fastcall SetOffsetRight(const double Value);
	void __fastcall SetOffsetTop(const double Value);
	
protected:
	Xpgparsedrawingcommon::TCT_StretchInfoProperties* FStretch;
	
public:
	__fastcall TXLSDrwFillPictStretchOpts(Xpgparsedrawingcommon::TCT_StretchInfoProperties* AStretch);
	__property double OffsetLeft = {read=GetOffsetLeft, write=SetOffsetLeft};
	__property double OffsetRight = {read=GetOffsetRight, write=SetOffsetRight};
	__property double OffsetTop = {read=GetOffsetTop, write=SetOffsetTop};
	__property double OffsetBottom = {read=GetOffsetBottom, write=SetOffsetBottom};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSDrwFillPictStretchOpts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwFillPictTileOpts : public TXLSDrwShapeProp
{
	typedef TXLSDrwShapeProp inherited;
	
private:
	Xpgparsedrawingcommon::TST_RectAlignment __fastcall GetAlignment();
	TXLSDrwMirrorType __fastcall GetMirrorType();
	double __fastcall GetOffsetX();
	double __fastcall GetOffsetY();
	double __fastcall GetScaleX();
	double __fastcall GetScaleY();
	void __fastcall SetAlignment(const Xpgparsedrawingcommon::TST_RectAlignment Value);
	void __fastcall SetMirrorType(const TXLSDrwMirrorType Value);
	void __fastcall SetOffsetX(const double Value);
	void __fastcall SetOffsetY(const double Value);
	void __fastcall SetScale(const double Value);
	void __fastcall SetScaleX(const double Value);
	void __fastcall SetScaleY(const double Value);
	
protected:
	Xpgparsedrawingcommon::TCT_TileInfoProperties* FTile;
	
public:
	__fastcall TXLSDrwFillPictTileOpts(Xpgparsedrawingcommon::TCT_TileInfoProperties* ATile);
	__property double OffsetX = {read=GetOffsetX, write=SetOffsetX};
	__property double OffsetY = {read=GetOffsetY, write=SetOffsetY};
	__property double Scale = {write=SetScale};
	__property double ScaleX = {read=GetScaleX, write=SetScaleX};
	__property double ScaleY = {read=GetScaleY, write=SetScaleY};
	__property Xpgparsedrawingcommon::TST_RectAlignment Alignment = {read=GetAlignment, write=SetAlignment, nodefault};
	__property TXLSDrwMirrorType MirrorType = {read=GetMirrorType, write=SetMirrorType, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSDrwFillPictTileOpts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwFillPicture : public TXLSDrwFill
{
	typedef TXLSDrwFill inherited;
	
private:
	bool __fastcall GetRorateWithShape();
	double __fastcall GetTransparency();
	void __fastcall SetRorateWithShape(const bool Value);
	void __fastcall SetTransparency(const double Value);
	double __fastcall GetBrightness();
	double __fastcall GetContrast();
	void __fastcall SetBrightness(const double Value);
	void __fastcall SetContrast(const double Value);
	bool __fastcall GetTilePicture();
	void __fastcall SetTilePicture(const bool Value);
	
protected:
	System::UnicodeString FFilename;
	Xpgparsedrawingcommon::TCT_BlipFillProperties* FBlip;
	TXLSDrwFillPictTileOpts* FTile;
	TXLSDrwFillPictStretchOpts* FStretch;
	virtual TXLSDrwFillType __fastcall GetFillType();
	
public:
	__fastcall TXLSDrwFillPicture(Xpgparsedrawingcommon::TCT_BlipFillProperties* ABlip);
	__fastcall virtual ~TXLSDrwFillPicture();
	bool __fastcall LoadPicture()/* overload */;
	bool __fastcall LoadPicture(const System::UnicodeString APictureName)/* overload */;
	__property System::UnicodeString Filename = {read=FFilename, write=FFilename};
	__property bool TilePicture = {read=GetTilePicture, write=SetTilePicture, nodefault};
	__property bool RorateWithShape = {read=GetRorateWithShape, write=SetRorateWithShape, nodefault};
	__property double Transparency = {read=GetTransparency, write=SetTransparency};
	__property double Brightness = {read=GetBrightness, write=SetBrightness};
	__property double Contrast = {read=GetContrast, write=SetContrast};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwFillAutomatic : public TXLSDrwFill
{
	typedef TXLSDrwFill inherited;
	
protected:
	virtual TXLSDrwFillType __fastcall GetFillType();
public:
	/* TObject.Create */ inline __fastcall TXLSDrwFillAutomatic() : TXLSDrwFill() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSDrwFillAutomatic() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwFillChoice : public TXLSDrwShapeProp
{
	typedef TXLSDrwShapeProp inherited;
	
private:
	TXLSDrwFillGradient* __fastcall GetAsGradient();
	TXLSDrwFillNone* __fastcall GetAsNone();
	TXLSDrwFillPicture* __fastcall GetAsPicture();
	TXLSDrwFillSolid* __fastcall GetAsSolid();
	TXLSDrwFillType __fastcall GetFillType();
	void __fastcall SetFillType(const TXLSDrwFillType Value);
	
protected:
	Xpgparsedrawingcommon::TEG_FillProperties* FFillChoice;
	TXLSDrwFill* FFill;
	
public:
	__fastcall TXLSDrwFillChoice(Xpgparsedrawingcommon::TEG_FillProperties* AFillChoice);
	__fastcall virtual ~TXLSDrwFillChoice();
	unsigned __fastcall RGB_(unsigned ADefault);
	__property TXLSDrwFillType FillType = {read=GetFillType, write=SetFillType, nodefault};
	__property TXLSDrwFillNone* AsNone = {read=GetAsNone};
	__property TXLSDrwFillSolid* AsSolid = {read=GetAsSolid};
	__property TXLSDrwFillGradient* AsGradient = {read=GetAsGradient};
	__property TXLSDrwFillPicture* AsPicture = {read=GetAsPicture};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwLineFillChoice : public TXLSDrwShapeProp
{
	typedef TXLSDrwShapeProp inherited;
	
private:
	TXLSDrwFillGradient* __fastcall GetAsGradient();
	TXLSDrwFillNone* __fastcall GetAsNone();
	TXLSDrwFillSolid* __fastcall GetAsSolid();
	TXLSDrwFillType __fastcall GetFillType();
	void __fastcall SetFillType(const TXLSDrwFillType Value);
	
protected:
	Xpgparsedrawingcommon::TEG_FillProperties* FFillChoice;
	TXLSDrwFill* FFill;
	
public:
	__fastcall TXLSDrwLineFillChoice(Xpgparsedrawingcommon::TEG_FillProperties* AFillChoice);
	__property TXLSDrwFillType FillType = {read=GetFillType, write=SetFillType, nodefault};
	__property TXLSDrwFillNone* AsNone = {read=GetAsNone};
	__property TXLSDrwFillSolid* AsSolid = {read=GetAsSolid};
	__property TXLSDrwFillGradient* AsGradient = {read=GetAsGradient};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSDrwLineFillChoice() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwLineEndStyle : public TXLSDrwShapeProp
{
	typedef TXLSDrwShapeProp inherited;
	
private:
	Xpgparsedrawingcommon::TST_LineEndType __fastcall GetEndType();
	Xpgparsedrawingcommon::TST_LineEndLength __fastcall GetLen();
	Xpgparsedrawingcommon::TST_LineEndWidth __fastcall GetSize();
	void __fastcall SetEndType(const Xpgparsedrawingcommon::TST_LineEndType Value);
	void __fastcall SetLen(const Xpgparsedrawingcommon::TST_LineEndLength Value);
	void __fastcall SetSize(const Xpgparsedrawingcommon::TST_LineEndWidth Value);
	
protected:
	Xpgparsedrawingcommon::TCT_LineEndProperties* FStyle;
	
public:
	__fastcall TXLSDrwLineEndStyle(Xpgparsedrawingcommon::TCT_LineEndProperties* AStyle);
	__property Xpgparsedrawingcommon::TST_LineEndType EndType = {read=GetEndType, write=SetEndType, nodefault};
	__property Xpgparsedrawingcommon::TST_LineEndWidth Size = {read=GetSize, write=SetSize, nodefault};
	__property Xpgparsedrawingcommon::TST_LineEndLength Len = {read=GetLen, write=SetLen, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSDrwLineEndStyle() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwLineStyle : public TXLSDrwShapeProp
{
	typedef TXLSDrwShapeProp inherited;
	
private:
	Xpgparsedrawingcommon::TST_LineCap __fastcall GetCapType();
	Xpgparsedrawingcommon::TST_CompoundLine __fastcall GetCompoundType();
	Xpgparsedrawingcommon::TST_PresetLineDashVal __fastcall GetDashType();
	TXLSDrwLineJoinType __fastcall GetJoinType();
	double __fastcall GetWidth();
	void __fastcall SetCapType(const Xpgparsedrawingcommon::TST_LineCap Value);
	void __fastcall SetCompoundType(const Xpgparsedrawingcommon::TST_CompoundLine Value);
	void __fastcall SetDashType(const Xpgparsedrawingcommon::TST_PresetLineDashVal Value);
	void __fastcall SetJoinType(const TXLSDrwLineJoinType Value);
	void __fastcall SetWidth(const double Value);
	void __fastcall SetHasBeginArrow(const bool Value);
	void __fastcall SetHasEndArrow(const bool Value);
	bool __fastcall GetHasBeginArrow();
	bool __fastcall GetHasEndArrow();
	
protected:
	TXLSDrwFillChoice* FFill;
	Xpgparsedrawingcommon::TCT_LineProperties* FLineStyle;
	bool FIsOpenLine;
	TXLSDrwLineEndStyle* FBeginArrow;
	TXLSDrwLineEndStyle* FEndArrow;
	
public:
	__fastcall TXLSDrwLineStyle(Xpgparsedrawingcommon::TCT_LineProperties* ALineStyle, bool AIsOpenLine);
	__fastcall virtual ~TXLSDrwLineStyle();
	unsigned __fastcall RGB_(unsigned ADefault);
	bool __fastcall CanHaveArrows();
	__property TXLSDrwFillChoice* Fill = {read=FFill};
	__property double Width = {read=GetWidth, write=SetWidth};
	__property Xpgparsedrawingcommon::TST_CompoundLine CompoundType = {read=GetCompoundType, write=SetCompoundType, nodefault};
	__property Xpgparsedrawingcommon::TST_PresetLineDashVal DashType = {read=GetDashType, write=SetDashType, nodefault};
	__property Xpgparsedrawingcommon::TST_LineCap CapType = {read=GetCapType, write=SetCapType, nodefault};
	__property TXLSDrwLineJoinType JoinType = {read=GetJoinType, write=SetJoinType, nodefault};
	__property bool HasBeginArrow = {read=GetHasBeginArrow, write=SetHasBeginArrow, nodefault};
	__property bool HasEndArrow = {read=GetHasEndArrow, write=SetHasEndArrow, nodefault};
	__property TXLSDrwLineEndStyle* BeginArrow = {read=FBeginArrow};
	__property TXLSDrwLineEndStyle* EndArrow = {read=FEndArrow};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwShapeProperies : public TXLSDrwShapeProp
{
	typedef TXLSDrwShapeProp inherited;
	
private:
	bool __fastcall GetHasLine();
	void __fastcall SetHasLine(const bool Value);
	
protected:
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	bool FOwnsSpPr;
	TXLSDrwLineStyle* FLine;
	TXLSDrwFillChoice* FFill;
	
public:
	__fastcall TXLSDrwShapeProperies(Xpgparsedrawingcommon::TCT_ShapeProperties* ASpPr);
	__fastcall virtual ~TXLSDrwShapeProperies();
	unsigned __fastcall FillRGB(unsigned ADefault);
	bool __fastcall Assigned();
	__property bool HasLine = {read=GetHasLine, write=SetHasLine, nodefault};
	__property TXLSDrwLineStyle* Line = {read=FLine};
	__property TXLSDrwFillChoice* Fill = {read=FFill};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwTextFont : public TXLSDrwShapeProp
{
	typedef TXLSDrwShapeProp inherited;
	
private:
	bool __fastcall GetBold();
	bool __fastcall GetItalic();
	System::UnicodeString __fastcall GetName();
	double __fastcall GetSize();
	Xpgparsedrawingcommon::TST_TextUnderlineType __fastcall GetUnderline();
	void __fastcall SetBold(const bool Value);
	void __fastcall SetItalic(const bool Value);
	void __fastcall SetName(const System::UnicodeString Value);
	void __fastcall SetSize(const double Value);
	void __fastcall SetUnderline(const Xpgparsedrawingcommon::TST_TextUnderlineType Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	
protected:
	Xpgparsedrawingcommon::TCT_TextCharacterProperties* FProps;
	System::Uitypes::TColor FColor;
	bool FOwnsProps;
	
public:
	__fastcall TXLSDrwTextFont(Xpgparsedrawingcommon::TCT_TextCharacterProperties* AProps);
	__fastcall virtual ~TXLSDrwTextFont();
	bool __fastcall Assigned();
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property double Size = {read=GetSize, write=SetSize};
	__property bool Bold = {read=GetBold, write=SetBold, nodefault};
	__property bool Italic = {read=GetItalic, write=SetItalic, nodefault};
	__property Xpgparsedrawingcommon::TST_TextUnderlineType Underline = {read=GetUnderline, write=SetUnderline, nodefault};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwTextRun : public TXLSDrwShapeProp
{
	typedef TXLSDrwShapeProp inherited;
	
private:
	System::UnicodeString __fastcall GetText();
	void __fastcall SetText(const System::UnicodeString Value);
	
protected:
	Xpgparsedrawingcommon::TEG_TextRun* FRun;
	TXLSDrwTextFont* FFont;
	
public:
	__fastcall TXLSDrwTextRun(Xpgparsedrawingcommon::TEG_TextRun* ARun);
	__fastcall virtual ~TXLSDrwTextRun();
	void __fastcall AddFont();
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property TXLSDrwTextFont* Font = {read=FFont};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwTextRuns : public TXLSDrwShapeProp
{
	typedef TXLSDrwShapeProp inherited;
	
public:
	TXLSDrwTextRun* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSDrwTextRun* __fastcall GetItems(int Index);
	
protected:
	TXLSDrwTextPara* FParent;
	System::Contnrs::TObjectList* FItems;
	Xpgparsedrawingcommon::TEG_TextRunXpgList* FRuns;
	TXLSDrwTextRun* __fastcall Add(Xpgparsedrawingcommon::TEG_TextRun* ARun)/* overload */;
	TXLSDrwTextRun* __fastcall Add()/* overload */;
	
public:
	__fastcall TXLSDrwTextRuns(TXLSDrwTextPara* AParent, Xpgparsedrawingcommon::TEG_TextRunXpgList* ARuns);
	__fastcall virtual ~TXLSDrwTextRuns();
	void __fastcall Clear();
	int __fastcall Count();
	TXLSDrwTextRun* __fastcall AddText(System::UnicodeString AText);
	void __fastcall AddLineBreak(TXLSDrwTextRun* ARun);
	void __fastcall Delete(const int AIndex);
	__property TXLSDrwTextRun* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwTextPara : public TXLSDrwShapeProp
{
	typedef TXLSDrwShapeProp inherited;
	
private:
	System::UnicodeString __fastcall GetPlainText();
	void __fastcall SetPlainText(const System::UnicodeString Value);
	TXLSDrwTextAlign __fastcall GetAlign();
	void __fastcall SetAlign(const TXLSDrwTextAlign Value);
	
protected:
	TXLSDrwTextParas* FParent;
	Xpgparsedrawingcommon::TCT_TextParagraph* FPara;
	TXLSDrwTextRuns* FRuns;
	
public:
	__fastcall TXLSDrwTextPara(TXLSDrwTextParas* AParent, Xpgparsedrawingcommon::TCT_TextParagraph* APara);
	__fastcall virtual ~TXLSDrwTextPara();
	void __fastcall Clear();
	TXLSDrwTextRun* __fastcall AddText(const System::UnicodeString AText);
	void __fastcall AddLineBreak();
	__property System::UnicodeString PlainText = {read=GetPlainText, write=SetPlainText};
	__property TXLSDrwTextRuns* Runs = {read=FRuns};
	__property TXLSDrwTextAlign Align = {read=GetAlign, write=SetAlign, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwTextParas : public TXLSDrwShapeProp
{
	typedef TXLSDrwShapeProp inherited;
	
public:
	TXLSDrwTextPara* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSDrwTextPara* __fastcall GetItems(int Index);
	
protected:
	TXLSDrwTextBody* FParent;
	System::Contnrs::TObjectList* FItems;
	Xpgparsedrawingcommon::TCT_TextParagraphXpgList* FParas;
	TXLSDrwTextPara* __fastcall Add(Xpgparsedrawingcommon::TCT_TextParagraph* APara)/* overload */;
	
public:
	__fastcall TXLSDrwTextParas(TXLSDrwTextBody* AParent, Xpgparsedrawingcommon::TCT_TextParagraphXpgList* AParas);
	__fastcall virtual ~TXLSDrwTextParas();
	TXLSDrwTextPara* __fastcall Add()/* overload */;
	TXLSDrwTextFont* __fastcall LastFont();
	int __fastcall Count();
	void __fastcall Clear();
	__property TXLSDrwTextPara* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwTextBody : public TXLSDrwShapeProp
{
	typedef TXLSDrwShapeProp inherited;
	
protected:
	Xpgparsedrawingcommon::TCT_TextBody* FBody;
	TXLSDrwTextParas* FParas;
	TXLSDrwTextFont* FDefaultFont;
	System::UnicodeString __fastcall GetPlainText();
	void __fastcall SetPlainText(const System::UnicodeString Value);
	
public:
	__fastcall TXLSDrwTextBody(Xpgparsedrawingcommon::TCT_TextBody* ABody);
	__fastcall virtual ~TXLSDrwTextBody();
	__property TXLSDrwTextParas* Paras = {read=FParas};
	__property TXLSDrwTextFont* DefaultFont = {read=FDefaultFont};
	__property System::UnicodeString PlainText = {read=GetPlainText, write=SetPlainText};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwText : public TXLSDrwShapeProp
{
	typedef TXLSDrwShapeProp inherited;
	
private:
	System::UnicodeString __fastcall GetPlainText();
	Xlsrelcells5::TXLSRelCells* __fastcall GetReF();
	void __fastcall SetPlainText(const System::UnicodeString Value);
	void __fastcall SetRef(Xlsrelcells5::TXLSRelCells* const Value);
	
protected:
	Xpgparsechart::TCT_Tx* FTx;
	TXLSDrwTextBody* FBody;
	Xpgparsechart::TCT_StrRef* FRef;
	void __fastcall SetType(bool ARef);
	
public:
	__fastcall TXLSDrwText(Xpgparsechart::TCT_Tx* ATx);
	__fastcall virtual ~TXLSDrwText();
	__property Xlsrelcells5::TXLSRelCells* Ref = {read=GetReF, write=SetRef};
	__property System::UnicodeString PlainText = {read=GetPlainText, write=SetPlainText};
	__property TXLSDrwTextBody* Body = {read=FBody};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrawingObject : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TXLSDrawing* FOwner;
	
public:
	__fastcall TXLSDrawingObject(TXLSDrawing* AOwner);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSDrawingObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrwTwoPosShape : public TXLSDrawingObject
{
	typedef TXLSDrawingObject inherited;
	
private:
	int __fastcall GetCol1();
	double __fastcall GetCol1Offs();
	int __fastcall GetCol2();
	double __fastcall GetCol2Offs();
	int __fastcall GetRow1();
	double __fastcall GetRow1Offs();
	int __fastcall GetRow2();
	double __fastcall GetRow2Offs();
	void __fastcall SetCol1(const int Value);
	void __fastcall SetCol1Offs(const double Value);
	void __fastcall SetCol2(const int Value);
	void __fastcall SetCol2Offs(const double Value);
	void __fastcall SetRow1(const int Value);
	void __fastcall SetRow1Offs(const double Value);
	void __fastcall SetRow2(const int Value);
	void __fastcall SetRow2Offs(const double Value);
	
protected:
	Xpgparsedrawing::TCT_TwoCellAnchor* FAnchor;
	virtual void __fastcall SetAnchor(Xpgparsedrawing::TCT_TwoCellAnchor* AAnchor);
	
public:
	void __fastcall SetArea(System::UnicodeString AArea);
	bool __fastcall Hit(const int ACol, const int ARow);
	__property Xpgparsedrawing::TCT_TwoCellAnchor* Anchor = {read=FAnchor};
	__property int Col1 = {read=GetCol1, write=SetCol1, nodefault};
	__property double Col1Offs = {read=GetCol1Offs, write=SetCol1Offs};
	__property int Col2 = {read=GetCol2, write=SetCol2, nodefault};
	__property double Col2Offs = {read=GetCol2Offs, write=SetCol2Offs};
	__property int Row1 = {read=GetRow1, write=SetRow1, nodefault};
	__property double Row1Offs = {read=GetRow1Offs, write=SetRow1Offs};
	__property int Row2 = {read=GetRow2, write=SetRow2, nodefault};
	__property double Row2Offs = {read=GetRow2Offs, write=SetRow2Offs};
public:
	/* TXLSDrawingObject.Create */ inline __fastcall TXLSDrwTwoPosShape(TXLSDrawing* AOwner) : TXLSDrawingObject(AOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSDrwTwoPosShape() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrawingImage : public TXLSDrwTwoPosShape
{
	typedef TXLSDrwTwoPosShape inherited;
	
private:
	TDrwOptImagePositioning __fastcall GetPositioning();
	void __fastcall SetPositioning(const TDrwOptImagePositioning Value);
	Xc12graphics::TXc12ImageType __fastcall GetImageType();
	System::UnicodeString __fastcall GetImageTypeStr();
	System::UnicodeString __fastcall GetUniqueName();
	
protected:
	Vcl::Graphics::TBitmap* FBitmap;
	virtual void __fastcall SetAnchor(Xpgparsedrawing::TCT_TwoCellAnchor* AAnchor);
	
public:
	__fastcall virtual ~TXLSDrawingImage();
	Vcl::Graphics::TBitmap* __fastcall CreateBitmap();
	void __fastcall CacheBitmap();
	void __fastcall SaveToStream(System::Classes::TStream* AStream);
	void __fastcall SaveToFile(System::UnicodeString AFilename);
	void __fastcall TagForWriting();
	bool __fastcall IsTaggedForWriting();
	__property TDrwOptImagePositioning Positioning = {read=GetPositioning, write=SetPositioning, nodefault};
	__property Xc12graphics::TXc12ImageType ImageType = {read=GetImageType, nodefault};
	__property System::UnicodeString ImageTypeStr = {read=GetImageTypeStr};
	__property System::UnicodeString UniqueName = {read=GetUniqueName};
	__property Vcl::Graphics::TBitmap* Bitmap = {read=FBitmap};
public:
	/* TXLSDrawingObject.Create */ inline __fastcall TXLSDrawingImage(TXLSDrawing* AOwner) : TXLSDrwTwoPosShape(AOwner) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrawingShape : public TXLSDrwTwoPosShape
{
	typedef TXLSDrwTwoPosShape inherited;
	
protected:
	Xpgparsedrawingcommon::TST_ShapeType FShapeType;
	virtual void __fastcall SetAnchor(Xpgparsedrawing::TCT_TwoCellAnchor* AAnchor);
	
public:
	__property Xpgparsedrawingcommon::TST_ShapeType ShapeType = {read=FShapeType, write=FShapeType, nodefault};
public:
	/* TXLSDrawingObject.Create */ inline __fastcall TXLSDrawingShape(TXLSDrawing* AOwner) : TXLSDrwTwoPosShape(AOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSDrawingShape() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrawingWordArt : public TXLSDrwTwoPosShape
{
	typedef TXLSDrwTwoPosShape inherited;
	
protected:
	Xpgparsedrawing::TCT_OneCellAnchor* FAnchor;
	HIDESBASE void __fastcall SetAnchor(Xpgparsedrawing::TCT_OneCellAnchor* AAnchor);
	
public:
	__fastcall TXLSDrawingWordArt();
	__fastcall virtual ~TXLSDrawingWordArt();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrawingTextBox : public TXLSDrwTwoPosShape
{
	typedef TXLSDrwTwoPosShape inherited;
	
private:
	System::UnicodeString __fastcall GetPlainText();
	void __fastcall SetPlainText(const System::UnicodeString Value);
	
protected:
	int FCurrIndex;
	virtual void __fastcall SetAnchor(Xpgparsedrawing::TCT_TwoCellAnchor* AAnchor);
	
public:
	__fastcall TXLSDrawingTextBox(TXLSDrawing* AOwner);
	__property System::UnicodeString PlainText = {read=GetPlainText, write=SetPlainText};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSDrawingTextBox() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrawingObjects : public TXLSDrawingObject
{
	typedef TXLSDrawingObject inherited;
	
protected:
	System::Contnrs::TObjectList* FItems;
	
public:
	__fastcall TXLSDrawingObjects(TXLSDrawing* AOwner);
	__fastcall virtual ~TXLSDrawingObjects();
	void __fastcall Clear();
	int __fastcall Count();
	void __fastcall Delete(int AIndex);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrawingImages : public TXLSDrawingObjects
{
	typedef TXLSDrawingObjects inherited;
	
public:
	TXLSDrawingImage* operator[](int Index) { return this->Items[Index]; }
	
protected:
	TXLSDrawingImage* __fastcall GetItems(int Index);
	TXLSDrawingImage* __fastcall Add(TXLSDrawing* AOwner);
	
public:
	TXLSDrawingImage* __fastcall Find(const int ACol, const int ARow);
	TXLSDrawingImage* __fastcall FindTopLeft(const int ACol, const int ARow);
	void __fastcall MaxDimension(/* out */ int &ACol, /* out */ int &ARow);
	__property TXLSDrawingImage* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXLSDrawingObjects.Create */ inline __fastcall TXLSDrawingImages(TXLSDrawing* AOwner) : TXLSDrawingObjects(AOwner) { }
	/* TXLSDrawingObjects.Destroy */ inline __fastcall virtual ~TXLSDrawingImages() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrawingShapes : public TXLSDrawingObjects
{
	typedef TXLSDrawingObjects inherited;
	
public:
	TXLSDrawingShape* operator[](int Index) { return this->Items[Index]; }
	
protected:
	TXLSDrawingShape* __fastcall GetItems(int Index);
	TXLSDrawingShape* __fastcall Add();
	
public:
	__property TXLSDrawingShape* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXLSDrawingObjects.Create */ inline __fastcall TXLSDrawingShapes(TXLSDrawing* AOwner) : TXLSDrawingObjects(AOwner) { }
	/* TXLSDrawingObjects.Destroy */ inline __fastcall virtual ~TXLSDrawingShapes() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrawingWordArts : public TXLSDrawingObjects
{
	typedef TXLSDrawingObjects inherited;
	
public:
	TXLSDrawingWordArt* operator[](int Index) { return this->Items[Index]; }
	
protected:
	TXLSDrawingWordArt* __fastcall GetItems(int Index);
	TXLSDrawingWordArt* __fastcall Add();
	
public:
	__property TXLSDrawingWordArt* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXLSDrawingObjects.Create */ inline __fastcall TXLSDrawingWordArts(TXLSDrawing* AOwner) : TXLSDrawingObjects(AOwner) { }
	/* TXLSDrawingObjects.Destroy */ inline __fastcall virtual ~TXLSDrawingWordArts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrawingTextBoxes : public TXLSDrawingObjects
{
	typedef TXLSDrawingObjects inherited;
	
public:
	TXLSDrawingTextBox* operator[](int Index) { return this->Items[Index]; }
	
protected:
	TXLSDrawingTextBox* FBIFFTextBox;
	TXLSDrawingTextBox* __fastcall GetItems(int Index);
	TXLSDrawingTextBox* __fastcall Add(Xpgparsedrawing::TCT_TwoCellAnchor* AAnchor)/* overload */;
	
public:
	__fastcall virtual ~TXLSDrawingTextBoxes();
	TXLSDrawingTextBox* __fastcall Add()/* overload */;
	__property TXLSDrawingTextBox* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXLSDrawingObjects.Create */ inline __fastcall TXLSDrawingTextBoxes(TXLSDrawing* AOwner) : TXLSDrawingObjects(AOwner) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrawingChart : public TXLSDrwTwoPosShape
{
	typedef TXLSDrwTwoPosShape inherited;
	
private:
	Xpgparsechart::TCT_ChartSpace* __fastcall GetChartSpace();
	
protected:
	Xpgparsechart::TCT_ChartSpace* FChartSpace;
	
public:
	__fastcall TXLSDrawingChart(TXLSDrawing* AOwner, Xpgparsechart::TXPGDocXLSXChart* AChart);
	__fastcall virtual ~TXLSDrawingChart();
	__property Xpgparsechart::TCT_ChartSpace* ChartSpace = {read=GetChartSpace};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrawingCharts : public TXLSDrawingObject
{
	typedef TXLSDrawingObject inherited;
	
public:
	TXLSDrawingChart* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSDrawingChart* __fastcall GetItems(int Index);
	
protected:
	Xlsutils5::TXLSErrorManager* FErrors;
	TXLSDrawing* FOwner;
	System::Contnrs::TObjectList* FItems;
	Xpgparsechart::TXPGDocXLSXChart* __fastcall MakeChartPrologue(int ACol, int ARow);
	void __fastcall MakeChartEpilogue(Xpgparsechart::TXPGDocXLSXChart* AChart, Xpgparsechart::TCT_UnsignedIntXpgList* AAxId);
	void __fastcall Make3D(Xpgparsechart::TCT_Chart* AChart);
	
public:
	__fastcall TXLSDrawingCharts(Xlsutils5::TXLSErrorManager* AErrors, TXLSDrawing* AOwner);
	__fastcall virtual ~TXLSDrawingCharts();
	void __fastcall Clear();
	int __fastcall Count();
	TXLSDrawingChart* __fastcall Find(const int ACol, const int ARow)/* overload */;
	TXLSDrawingChart* __fastcall _FileAdd(Xpgparsechart::TXPGDocXLSXChart* AChart);
	void __fastcall GetChartFont(Xpgparsedrawingcommon::TCT_TextBody* ATxt, Xc12datastylesheet5::TXc12Font* AFont)/* overload */;
	void __fastcall GetChartFont(Xpgparsedrawingcommon::TCT_TextCharacterProperties* ARPr, Xc12datastylesheet5::TXc12Font* AFont)/* overload */;
	void __fastcall SetChartFont(Xpgparsedrawingcommon::TCT_TextBody* ATxt, Xc12datastylesheet5::TXc12Font* AFont)/* overload */;
	void __fastcall SetChartFont(Xpgparsedrawingcommon::TCT_TextCharacterProperties* ARPr, Xc12datastylesheet5::TXc12Font* AFont)/* overload */;
	Xpgparsechart::TCT_ChartSpace* __fastcall MakeBarChart(Xlsrelcells5::TXLSRelCells* ASrcArea, int ACol, int ARow, bool AHasSeriesNames, bool A3D = false);
	Xpgparsechart::TCT_ChartSpace* __fastcall MakeAreaChart(Xlsrelcells5::TXLSRelCells* ASrcArea, int ACol, int ARow, bool A3D = false);
	Xpgparsechart::TCT_ChartSpace* __fastcall MakeLineChart(Xlsrelcells5::TXLSRelCells* ASrcArea, int ACol, int ARow, bool A3D = false, Xpgparsechart::TST_MarkerStyle AMarker = (Xpgparsechart::TST_MarkerStyle)(0x4));
	Xpgparsechart::TCT_ChartSpace* __fastcall MakeRadarChart(Xlsrelcells5::TXLSRelCells* ASrcArea, int ACol, int ARow);
	Xpgparsechart::TCT_ChartSpace* __fastcall MakeScatterChart(Xlsrelcells5::TXLSRelCells* ASrcArea, int ACol, int ARow);
	Xpgparsechart::TCT_ChartSpace* __fastcall MakeDoughnutChart(Xlsrelcells5::TXLSRelCells* ASrcArea, int ACol, int ARow);
	Xpgparsechart::TCT_ChartSpace* __fastcall MakePieChart(Xlsrelcells5::TXLSRelCells* ASrcArea, int ACol, int ARow, bool A3D = false);
	Xpgparsechart::TCT_ChartSpace* __fastcall MakeOfPieChart(Xlsrelcells5::TXLSRelCells* ASrcArea, int ACol, int ARow);
	Xpgparsechart::TCT_ChartSpace* __fastcall MakeSurfaceChart(Xlsrelcells5::TXLSRelCells* ASrcArea, int ACol, int ARow);
	Xpgparsechart::TCT_ChartSpace* __fastcall MakeBubbleChart(Xlsrelcells5::TXLSRelCells* ASrcArea, int ACol, int ARow, bool A3D = false);
	__property TXLSDrawingChart* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrawingEditor : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	/* TObject.Create */ inline __fastcall TXLSDrawingEditor() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSDrawingEditor() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrawingEditorShape : public TXLSDrawingEditor
{
	typedef TXLSDrawingEditor inherited;
	
protected:
	Xpgparsedrawing::TCT_TwoCellAnchor* FAnchor;
	TXLSDrwShapeProperies* FShapeProperies;
	
public:
	__fastcall TXLSDrawingEditorShape(Xpgparsedrawing::TCT_TwoCellAnchor* AAnchor);
	__fastcall virtual ~TXLSDrawingEditorShape();
	__property TXLSDrwShapeProperies* ShapeProperies = {read=FShapeProperies};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrawingEditorTextBox : public TXLSDrawingEditor
{
	typedef TXLSDrawingEditor inherited;
	
protected:
	Xpgparsedrawingcommon::TCT_TextBody* FEx12Body;
	TXLSDrwTextBody* FBody;
	
public:
	__fastcall TXLSDrawingEditorTextBox(Xpgparsedrawingcommon::TCT_TextBody* AEx12Body);
	__fastcall virtual ~TXLSDrawingEditorTextBox();
	__property TXLSDrwTextBody* Body = {read=FBody};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSDrawingEditorImage : public TXLSDrawingEditor
{
	typedef TXLSDrawingEditor inherited;
	
private:
	double __fastcall GetCmHeight();
	double __fastcall GetCmWidth();
	double __fastcall GetInchHeight();
	double __fastcall GetInchWidth();
	int __fastcall GetOriginalHeight();
	int __fastcall GetOriginalWidth();
	void __fastcall SetCmHeight(const double Value);
	void __fastcall SetCmWidth(const double Value);
	void __fastcall SetInchHeight(const double Value);
	void __fastcall SetInchWidth(const double Value);
	
protected:
	TXLSDrawing* FOwner;
	TXLSDrawingImage* FImage;
	Xpgparsedrawingcommon::TCT_Blip* FBlip;
	int FPixelWidth;
	int FPixelHeight;
	double FCmWidth;
	double FCmHeight;
	bool FKeepAspect;
	void __fastcall CalcSize();
	void __fastcall ScaleWidth(const double APercent);
	void __fastcall ScaleHeight(const double APercent);
	
public:
	__fastcall TXLSDrawingEditorImage(TXLSDrawing* AOwner, TXLSDrawingImage* AImage);
	void __fastcall Scale(const double APercent);
	__property int OriginalWidth = {read=GetOriginalWidth, nodefault};
	__property int OriginalHeight = {read=GetOriginalHeight, nodefault};
	__property double CmWidth = {read=GetCmWidth, write=SetCmWidth};
	__property double CmHeight = {read=GetCmHeight, write=SetCmHeight};
	__property double InchWidth = {read=GetInchWidth, write=SetInchWidth};
	__property double InchHeight = {read=GetInchHeight, write=SetInchHeight};
	__property bool KeepAspect = {read=FKeepAspect, write=FKeepAspect, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSDrawingEditorImage() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDrawingEditorChart : public TXLSDrawingEditor
{
	typedef TXLSDrawingEditor inherited;
	
private:
	System::UnicodeString __fastcall GetValues();
	void __fastcall SetValues(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetCategories();
	void __fastcall SetCategories(const System::UnicodeString Value);
	
protected:
	Xpgparsechart::TCT_Chart* FChart;
	
public:
	__fastcall TXLSDrawingEditorChart(TXLSDrawingChart* AChart);
	__property System::UnicodeString Values = {read=GetValues, write=SetValues};
	__property System::UnicodeString Categories = {read=GetCategories, write=SetCategories};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSDrawingEditorChart() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSDrawing : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FMaxShapeId;
	Xc12manager5::TXc12Manager* FManager;
	Xpgparsedrawing::TCT_Drawing* FDrw;
	Xc12graphics::TXc12GraphicManager* FGrManager;
	Xlsutils5::TXLSErrorManager* FErrors;
	Xlscolumn5::TXLSColumns* FColumns;
	Xlsrow5::TXLSRows* FRows;
	TXLSDrawingImages* FImages;
	TXLSDrawingShapes* FShapes;
	TXLSDrawingWordArts* FWordArts;
	TXLSDrawingTextBoxes* FTextBoxes;
	TXLSDrawingCharts* FCharts;
	TAddImageEvent97 FAddImage97;
	Biff_drawingobj5::TDrawingObjects* FBIFFDrawing;
	Xpgparsedrawingcommon::TXPGDocBase* FDocBase;
	void __fastcall CheckShapeId(Xpgparsedrawing::TEG_ObjectChoices* AObjChoice);
	int __fastcall GetShapeId();
	TXLSDrawingImage* __fastcall DoAddImage(Xpgparsedrawing::TCT_TwoCellAnchor* AAnchor);
	TXLSDrawingShape* __fastcall DoAddShape(Xpgparsedrawing::TCT_TwoCellAnchor* AAnchor);
	TXLSDrawingTextBox* __fastcall DoAddTextBox(Xpgparsedrawing::TCT_TwoCellAnchor* AAnchor);
	TXLSDrawingWordArt* __fastcall DoAddWordArt(Xpgparsedrawing::TCT_OneCellAnchor* AAnchor);
	TXLSDrawingChart* __fastcall DoAddChart(Xpgparsedrawing::TCT_TwoCellAnchor* AAnchor);
	TXLSDrawingImage* __fastcall DoInsertImage(Xc12graphics::TXc12GraphicImage* AImage, int AWidth, int AHeight, int ACol, int ARow, const double AColOffset, const double ARowOffset);
	
public:
	__fastcall TXLSDrawing(Xc12manager5::TXc12Manager* AManager, Xpgparsedrawing::TCT_Drawing* ADrw, Xlsutils5::TXLSErrorManager* AErrors);
	__fastcall virtual ~TXLSDrawing();
	void __fastcall Clear();
	void __fastcall SetProps(Xlscolumn5::TXLSColumns* ACols, Xlsrow5::TXLSRows* ARows);
	void __fastcall AfterRead();
	TXLSDrwShapeProperies* __fastcall CreateShapeProps();
	TXLSDrawingImage* __fastcall InsertImage(const System::UnicodeString AFilename, const int ACol, const int ARow, const double AColOffset, const double ARowOffset, const double AScale = 1.000000E+00)/* overload */;
	TXLSDrawingImage* __fastcall InsertImage(const System::UnicodeString AImageName, System::Classes::TStream* AImageStream, const int ACol, const int ARow, const double AColOffset, const double ARowOffset, const double AScale = 1.000000E+00)/* overload */;
	TXLSDrawingImage* __fastcall InsertImage97(const System::UnicodeString AImageName, System::Classes::TStream* AImageStream, Biff_drawingobj5::TDrwPicture* APicture97);
	TXLSDrawingTextBox* __fastcall InsertTextBox(const System::UnicodeString AText, const int ACol1, const int ARow1, const int ACol2, const int ARow2)/* overload */;
	TXLSDrawingTextBox* __fastcall InsertTextBox(const System::UnicodeString AText, const System::UnicodeString AArea)/* overload */;
	TXLSDrawingShape* __fastcall InsertShape(const Xpgparsedrawingcommon::TST_ShapeType AShapeType, const int ACol1, const int ARow1, const double ACol1Offset, const double ARow1Offset, const int ACol2, const int ARow2, const double ACol2Offset, const double ARow2Offset);
	TXLSDrawingEditorTextBox* __fastcall EditTextBox(TXLSDrawingTextBox* ATextBox);
	TXLSDrawingEditorShape* __fastcall EditShape(TXLSDrwTwoPosShape* AShape);
	TXLSDrawingEditorImage* __fastcall EditImage(TXLSDrawingImage* AImage);
	TXLSDrawingEditorChart* __fastcall EditChart(TXLSDrawingChart* AChart);
	void __fastcall Copy(int Col1, int Row1, int Col2, int Row2, int DestCol, int DestRow);
	void __fastcall Move(const int Col1, const int Row1, const int Col2, const int Row2, const int DestCol, const int DestRow);
	void __fastcall Delete(int ACol1, int ARow1, int ACol2, int ARow2);
	__property Xpgparsedrawing::TCT_Drawing* Xc12Drw = {read=FDrw};
	__property TXLSDrawingImages* Images = {read=FImages};
	__property TXLSDrawingShapes* Shapes = {read=FShapes};
	__property TXLSDrawingWordArts* WordArts = {read=FWordArts};
	__property TXLSDrawingTextBoxes* TextBoxes = {read=FTextBoxes};
	__property TXLSDrawingCharts* Charts = {read=FCharts};
	__property TAddImageEvent97 OnAddImage97 = {read=FAddImage97, write=FAddImage97};
	__property Biff_drawingobj5::TDrawingObjects* BIFFDrawing = {read=FBIFFDrawing, write=FBIFFDrawing};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall SetChartFont(Xc12datastylesheet5::TXc12Font* AFont, Xpgparsechart::TCT_ValAx* AValAx)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetChartFont(Xc12datastylesheet5::TXc12Font* AFont, Xpgparsechart::TCT_CatAx* ACatAx)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetChartFont(Xc12datastylesheet5::TXc12Font* AFont, Xpgparsechart::TCT_Legend* ALegend)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetChartFont(Xc12datastylesheet5::TXc12Font* AFont, Xpgparsechart::TCT_Title* ATitle)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetChartFont(Xc12datastylesheet5::TXc12Font* AFont, Xpgparsechart::TCT_ChartSpace* AChart)/* overload */;
}	/* namespace Xlsdrawing5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSDRAWING5)
using namespace Xlsdrawing5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsdrawing5HPP
