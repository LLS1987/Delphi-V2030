// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSAXWEditor.pas' rev: 35.00 (Windows)

#ifndef XlsaxweditorHPP
#define XlsaxweditorHPP

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
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsaxweditor
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAXWIntegerList;
class DELPHICLASS TAXWHyperlink;
class DELPHICLASS TAXWHyperlinks;
class DELPHICLASS TAXWDocPropBorder;
class DELPHICLASS TAXWDocPropBorders;
class DELPHICLASS TAXWDocPropBordersList;
class DELPHICLASS TAXWProp;
class DELPHICLASS TAXWPropBoolean;
class DELPHICLASS TAXWPropInteger;
class DELPHICLASS TAXWPropFloat;
class DELPHICLASS TAXWPropString;
class DELPHICLASS TAXWPropObject;
class DELPHICLASS TAXWPropOwnedObject;
class DELPHICLASS TAXWProps;
class DELPHICLASS TAXWPAP;
class DELPHICLASS TAXWCHP;
class DELPHICLASS TAXWTAP;
class DELPHICLASS TAXWSEP;
class DELPHICLASS TAXWRootData;
class DELPHICLASS TAXWStyle;
class DELPHICLASS TAXWCharStyle;
class DELPHICLASS TAXWParaStyle;
class DELPHICLASS TAXWStyles;
class DELPHICLASS TAXWFontData;
class DELPHICLASS TAXWFontDataDoc;
class DELPHICLASS TAXWParaData;
class DELPHICLASS TAXWCharRun;
class DELPHICLASS TAXWCharRunHyperlink;
class DELPHICLASS TAXWCharRunTab;
class DELPHICLASS TAXWCharRunBreak;
class DELPHICLASS TAXWCharRuns;
class DELPHICLASS TAXWTabStop;
class DELPHICLASS TAXWTabStops;
class DELPHICLASS TAXWLogParaItem;
class DELPHICLASS TAXWLogPara;
class DELPHICLASS TAXWTableBorderProps;
class DELPHICLASS TAXWTableCellProps;
class DELPHICLASS TAXWTableCell;
class DELPHICLASS TAXWTableRow;
class DELPHICLASS TAXWTableRows;
class DELPHICLASS TAXWTable;
class DELPHICLASS TAXWLogParas;
class DELPHICLASS TAXWLogDocEditor;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TST_Border : unsigned char { stbNil, stbNone, stbSingle, stbThick, stbDouble, stbDotted, stbDashed, stbDotDash, stbDotDotDash, stbTriple, stbThinThickSmallGap, stbThickThinSmallGap, stbThinThickThinSmallGap, stbThinThickMediumGap, stbThickThinMediumGap, stbThinThickThinMediumGap, stbThinThickLargeGap, stbThickThinLargeGap, stbThinThickThinLargeGap, stbWave, stbDoubleWave, stbDashSmallGap, stbDashDotStroked, stbThreeDEmboss, stbThreeDEngrave, stbOutset, stbInset, stbApples, stbArchedScallops, stbBabyPacifier, stbBabyRattle, stbBalloons3Colors, stbBalloonsHotAir, stbBasicBlackDashes, stbBasicBlackDots, stbBasicBlackSquares, stbBasicThinLines, stbBasicWhiteDashes, stbBasicWhiteDots, stbBasicWhiteSquares, stbBasicWideInline, 
	stbBasicWideMidline, stbBasicWideOutline, stbBats, stbBirds, stbBirdsFlight, stbCabins, stbCakeSlice, stbCandyCorn, stbCelticKnotwork, stbCertificateBanner, stbChainLink, stbChampagneBottle, stbCheckedBarBlack, stbCheckedBarColor, stbCheckered, stbChristmasTree, stbCirclesLines, stbCirclesRectangles, stbClassicalWave, stbClocks, stbCompass, stbConfetti, stbConfettiGrays, stbConfettiOutline, stbConfettiStreamers, stbConfettiWhite, stbCornerTriangles, stbCouponCutoutDashes, stbCouponCutoutDots, stbCrazyMaze, stbCreaturesButterfly, stbCreaturesFish, stbCreaturesInsects, stbCreaturesLadyBug, stbCrossStitch, stbCup, stbDecoArch, stbDecoArchColor, stbDecoBlocks, stbDiamondsGray, stbDoubleD, stbDoubleDiamonds, stbEarth1, stbEarth2, stbEclipsingSquares1, 
	stbEclipsingSquares2, stbEggsBlack, stbFans, stbFilm, stbFirecrackers, stbFlowersBlockPrint, stbFlowersDaisies, stbFlowersModern1, stbFlowersModern2, stbFlowersPansy, stbFlowersRedRose, stbFlowersRoses, stbFlowersTeacup, stbFlowersTiny, stbGems, stbGingerbreadMan, stbGradient, stbHandmade1, stbHandmade2, stbHeartBalloon, stbHeartGray, stbHearts, stbHeebieJeebies, stbHolly, stbHouseFunky, stbHypnotic, stbIceCreamCones, stbLightBulb, stbLightning1, stbLightning2, stbMapPins, stbMapleLeaf, stbMapleMuffins, stbMarquee, stbMarqueeToothed, stbMoons, stbMosaic, stbMusicNotes, stbNorthwest, stbOvals, stbPackages, stbPalmsBlack, stbPalmsColor, stbPaperClips, stbPapyrus, stbPartyFavor, stbPartyGlass, stbPencils, stbPeople, stbPeopleWaving, stbPeopleHats, 
	stbPoinsettias, stbPostageStamp, stbPumpkin1, stbPushPinNote2, stbPushPinNote1, stbPyramids, stbPyramidsAbove, stbQuadrants, stbRings, stbSafari, stbSawtooth, stbSawtoothGray, stbScaredCat, stbSeattle, stbShadowedSquares, stbSharksTeeth, stbShorebirdTracks, stbSkyrocket, stbSnowflakeFancy, stbSnowflakes, stbSombrero, stbSouthwest, stbStars, stbStarsTop, stbStars3d, stbStarsBlack, stbStarsShadowed, stbSun, stbSwirligig, stbTornPaper, stbTornPaperBlack, stbTrees, stbTriangleParty, stbTriangles, stbTribal1, stbTribal2, stbTribal3, stbTribal4, stbTribal5, stbTribal6, stbTwistedLines1, stbTwistedLines2, stbVine, stbWaveline, stbWeavingAngles, stbWeavingBraid, stbWeavingRibbon, stbWeavingStrips, stbWhiteFlowers, stbWoodwork, stbXIllusions, stbZanyTriangles, 
	stbZigZag, stbZigZagStitch };

enum DECLSPEC_DENUM TAXWChpId : unsigned char { axciBold, axciItalic, axciStrikeTrough, axciHidden, axciShadow, axciOutline, axciEmboss, axciEngrave, axciSmallCaps, axciAllCaps, axciMisspelled, axciRTL, axciColor, axciFillColor, axciUnderline, axciUnderlineColor, axciSubSuperscript, axciColorHLinkHoover, axciColorHLinkVisited, axciSize, axciStyle, axciBorder, axciFontName };

enum DECLSPEC_DENUM TAXWPapId : unsigned char { axpiContextualSpacing, axpiNoWrap, axpiAlignment, axpiColor, axpiOutlineLevel, axpiLineSpacingType, axpiIndentLeft, axpiIndentRight, axpiIndentFirstLine, axpiIndentHanging, axpiLineSpacing, axpiSpaceBefore, axpiSpaceAfter, axpiStyle, axpiBorderLeft, axpiBorderTop, axpiBorderRight, axpiBorderBottom };

enum DECLSPEC_DENUM TAXWTapId : unsigned char { axtiAlignment, axtiWidthType, axtiIndent, axtiWidth, axtiCellMargLeft, axtiCellMargTop, axtiCellMargRight, axtiCellMargBottom, axtiStyle, axtiBorderLeft, axtiBorderTop, axtiBorderRight, axtiBorderBottom, axtiBorderInsideVert, axtiBorderInsideHoriz };

enum DECLSPEC_DENUM TAXWPictureType : unsigned char { aptBMP, aptJPG, aptPNG, aptGIF, aptEMF, aptWMF, aptPIC, aptRAW, aptUnknown };

typedef System::StaticArray<System::UnicodeString, 9> Xlsaxweditor__1;

enum DECLSPEC_DENUM TAXWTabStopAlignment : unsigned char { atsaClear, atsaLeft, atsaCenter, atsaRight, atsaDecimal, atsaNum };

enum DECLSPEC_DENUM TAXWTabStopLeader : unsigned char { atslNone, atslDot, atslHyphen, atslUnderscore, atslHeavy, atslMiddleDot };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWIntegerList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	int operator[](int Index) { return this->Items[Index]; }
	
private:
	int __fastcall GetItems(int Index);
	void __fastcall SetItems(int Index, const int Value);
	System::UnicodeString __fastcall GetAsString();
	void __fastcall SetAsString(System::UnicodeString Value);
	
public:
	HIDESBASE void __fastcall Assign(TAXWIntegerList* AList);
	HIDESBASE void __fastcall Add(int AValue);
	void __fastcall SetMinSize(int ASize, int AValue);
	__property System::UnicodeString AsString = {read=GetAsString, write=SetAsString};
	__property int Items[int Index] = {read=GetItems, write=SetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWIntegerList() { }
	
public:
	/* TObject.Create */ inline __fastcall TAXWIntegerList() : System::Classes::TList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWHyperlink : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FURL;
	
public:
	__property System::UnicodeString URL = {read=FURL, write=FURL};
	__property System::UnicodeString Address = {read=FURL, write=FURL};
public:
	/* TObject.Create */ inline __fastcall TAXWHyperlink() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWHyperlink() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWHyperlinks : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TAXWHyperlink* operator[](int Index) { return this->Items[Index]; }
	
private:
	TAXWHyperlink* __fastcall GetItems(int Index);
	
public:
	__fastcall TAXWHyperlinks();
	HIDESBASE TAXWHyperlink* __fastcall Add(System::UnicodeString AURL);
	__property TAXWHyperlink* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWHyperlinks() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAXWDocPropBorder : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	double FWidth;
	unsigned FColor;
	TST_Border FStyle;
	double FSpace;
	
public:
	void __fastcall Clear();
	void __fastcall Assign(TAXWDocPropBorder* ABorder);
	bool __fastcall Assigned();
	bool __fastcall Equal(TAXWDocPropBorder* ABorder);
	void __fastcall SetVals(double AWidth, unsigned AColor, TST_Border AStyle, double ASpace);
	double __fastcall Margin();
	void __fastcall ColorRGB(System::Byte AR, System::Byte AG, System::Byte AB);
	__property double Width = {read=FWidth, write=FWidth};
	__property unsigned Color = {read=FColor, write=FColor, nodefault};
	__property TST_Border Style = {read=FStyle, write=FStyle, nodefault};
	__property double Space = {read=FSpace, write=FSpace};
public:
	/* TObject.Create */ inline __fastcall TAXWDocPropBorder() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWDocPropBorder() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWDocPropBorders : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FOwnsBr;
	bool FDestroyBr;
	TAXWDocPropBorder* FLeft;
	TAXWDocPropBorder* FTop;
	TAXWDocPropBorder* FRight;
	TAXWDocPropBorder* FBottom;
	
public:
	__fastcall TAXWDocPropBorders(bool AOwnsBorders, bool ADestroyBorders);
	__fastcall virtual ~TAXWDocPropBorders();
	void __fastcall Clear();
	void __fastcall Assign(TAXWDocPropBorders* ABorders);
	bool __fastcall Assigned();
	bool __fastcall AllAssigned();
	void __fastcall DeleteNil();
	bool __fastcall AllEqual();
	TAXWDocPropBorder* __fastcall AddLeft();
	TAXWDocPropBorder* __fastcall AddTop();
	TAXWDocPropBorder* __fastcall AddRight();
	TAXWDocPropBorder* __fastcall AddBottom();
	void __fastcall AddAll();
	__property TAXWDocPropBorder* Left = {read=FLeft, write=FLeft};
	__property TAXWDocPropBorder* Top = {read=FTop, write=FTop};
	__property TAXWDocPropBorder* Right = {read=FRight, write=FRight};
	__property TAXWDocPropBorder* Bottom = {read=FBottom, write=FBottom};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWDocPropBordersList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TAXWDocPropBorders* operator[](int Index) { return this->Items[Index]; }
	
private:
	TAXWDocPropBorders* __fastcall GetItems(int Index);
	TAXWDocPropBorder* __fastcall GetLastAdded();
	
protected:
	TAXWDocPropBorder* FLastAdded;
	
public:
	__fastcall TAXWDocPropBordersList();
	HIDESBASE void __fastcall Assign(TAXWDocPropBordersList* ABorders);
	HIDESBASE TAXWDocPropBorders* __fastcall Add();
	TAXWDocPropBorder* __fastcall AddLeft();
	TAXWDocPropBorder* __fastcall AddTop();
	TAXWDocPropBorder* __fastcall AddRight();
	TAXWDocPropBorder* __fastcall AddBottom();
	HIDESBASE TAXWDocPropBorders* __fastcall Last();
	bool __fastcall LastAllAssigned();
	__property TAXWDocPropBorder* LastAdded = {read=GetLastAdded};
	__property TAXWDocPropBorders* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWDocPropBordersList() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TAXWPapTextAlign : unsigned char { axptaLeft, axptaCenter, axptaRight, axptaJustify };

enum DECLSPEC_DENUM TAXWTableCellAlignVert : unsigned char { atcavTop, atcavCenter, atcavBottom, atcavBoth };

enum DECLSPEC_DENUM TAXWPropType : unsigned char { aptBoolean, aptInteger, aptFloat, aptString, aptObject, aptOwnedObject };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWProp : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FId;
	virtual bool __fastcall GetAsBoolean();
	virtual void __fastcall SetAsBoolean(const bool Value);
	virtual int __fastcall GetAsInteger();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual void __fastcall SetAsInteger(const int Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual System::TObject* __fastcall GetAsObject();
	virtual void __fastcall SetAsObject(System::TObject* const Value);
	virtual System::TObject* __fastcall GetAsOwnedObject();
	virtual void __fastcall SetAsOwnedObject(System::TObject* const Value);
	virtual double __fastcall GetAsFloat();
	virtual void __fastcall SetAsFloat(const double Value);
	
public:
	virtual TAXWPropType __fastcall Type_() = 0 ;
	__property int Id = {read=FId, nodefault};
	__property bool AsBoolean = {read=GetAsBoolean, write=SetAsBoolean, nodefault};
	__property int AsInteger = {read=GetAsInteger, write=SetAsInteger, nodefault};
	__property double AsFloat = {read=GetAsFloat, write=SetAsFloat};
	__property System::UnicodeString AsString = {read=GetAsString, write=SetAsString};
	__property System::TObject* AsObject = {read=GetAsObject, write=SetAsObject};
	__property System::TObject* AsOwnedObject = {read=GetAsOwnedObject, write=SetAsOwnedObject};
public:
	/* TObject.Create */ inline __fastcall TAXWProp() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWProp() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWPropBoolean : public TAXWProp
{
	typedef TAXWProp inherited;
	
protected:
	bool FValue;
	virtual bool __fastcall GetAsBoolean();
	virtual void __fastcall SetAsBoolean(const bool Value);
	
public:
	virtual TAXWPropType __fastcall Type_();
public:
	/* TObject.Create */ inline __fastcall TAXWPropBoolean() : TAXWProp() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWPropBoolean() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWPropInteger : public TAXWProp
{
	typedef TAXWProp inherited;
	
protected:
	int FValue;
	virtual int __fastcall GetAsInteger();
	virtual void __fastcall SetAsInteger(const int Value);
	
public:
	virtual TAXWPropType __fastcall Type_();
public:
	/* TObject.Create */ inline __fastcall TAXWPropInteger() : TAXWProp() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWPropInteger() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAXWPropFloat : public TAXWProp
{
	typedef TAXWProp inherited;
	
protected:
	double FValue;
	virtual double __fastcall GetAsFloat();
	virtual void __fastcall SetAsFloat(const double Value);
	
public:
	virtual TAXWPropType __fastcall Type_();
public:
	/* TObject.Create */ inline __fastcall TAXWPropFloat() : TAXWProp() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWPropFloat() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWPropString : public TAXWProp
{
	typedef TAXWProp inherited;
	
protected:
	System::UnicodeString FValue;
	virtual System::UnicodeString __fastcall GetAsString();
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	
public:
	virtual TAXWPropType __fastcall Type_();
public:
	/* TObject.Create */ inline __fastcall TAXWPropString() : TAXWProp() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWPropString() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWPropObject : public TAXWProp
{
	typedef TAXWProp inherited;
	
protected:
	System::TObject* FValue;
	virtual System::TObject* __fastcall GetAsObject();
	virtual void __fastcall SetAsObject(System::TObject* const Value);
	
public:
	__fastcall virtual ~TAXWPropObject();
	virtual TAXWPropType __fastcall Type_();
public:
	/* TObject.Create */ inline __fastcall TAXWPropObject() : TAXWProp() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWPropOwnedObject : public TAXWProp
{
	typedef TAXWProp inherited;
	
protected:
	System::TObject* FValue;
	virtual System::TObject* __fastcall GetAsOwnedObject();
	virtual void __fastcall SetAsOwnedObject(System::TObject* const Value);
	
public:
	__fastcall virtual ~TAXWPropOwnedObject();
	virtual TAXWPropType __fastcall Type_();
public:
	/* TObject.Create */ inline __fastcall TAXWPropOwnedObject() : TAXWProp() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWProps : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TAXWProp* operator[](int Index) { return this->Items[Index]; }
	
private:
	TAXWProp* __fastcall GetItems(int Index);
	
protected:
	TAXWProps* FMaster;
	
public:
	__fastcall TAXWProps(TAXWProps* AMaster);
	HIDESBASE void __fastcall Assign(TAXWProps* AProps);
	TAXWPropBoolean* __fastcall AddBoolean(int AId, bool AValue);
	TAXWPropInteger* __fastcall AddInteger(int AId, int AValue);
	TAXWPropFloat* __fastcall AddFloat(int AId, double AValue);
	TAXWPropString* __fastcall AddString(int AId, System::UnicodeString AValue);
	TAXWPropObject* __fastcall AddObject(int AId, System::TObject* AValue);
	TAXWPropOwnedObject* __fastcall AddOwnedObject(int AId, System::TObject* AValue);
	int __fastcall Find(int AId);
	bool __fastcall FindBoolean(int AId, /* out */ bool &AValue);
	bool __fastcall FindInteger(int AId, /* out */ int &AValue);
	bool __fastcall FindFloat(int AId, /* out */ double &AValue);
	bool __fastcall FindString(int AId, /* out */ System::UnicodeString &AValue);
	bool __fastcall FindObject(int AId, /* out */ System::TObject* &AObject);
	bool __fastcall FindBooleanDef(int AId, bool ADefault);
	int __fastcall FindIntegerDef(int AId, int ADefault);
	double __fastcall FindFloatDef(int AId, double ADefault);
	System::UnicodeString __fastcall FindStringDef(int AId, System::UnicodeString ADefault);
	System::TObject* __fastcall FindObjectDef(int AId, System::TObject* ADefault);
	HIDESBASE void __fastcall Remove(int AId);
	__property TAXWProp* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWProps() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWPAP : public TAXWProps
{
	typedef TAXWProps inherited;
	
private:
	TAXWPapTextAlign __fastcall GetAlignment();
	void __fastcall SetAlignment(const TAXWPapTextAlign Value);
	double __fastcall GetIndentFirstLine();
	double __fastcall GetIndentHanging();
	double __fastcall GetIndentLeft();
	double __fastcall GetIndentRight();
	void __fastcall SetIndentFirstLine(const double Value);
	void __fastcall SetIndentHanging(const double Value);
	void __fastcall SetIndentLeft(const double Value);
	void __fastcall SetIndentRight(const double Value);
	unsigned __fastcall GetColor();
	double __fastcall GetSpaceAfter();
	double __fastcall GetSpaceBefore();
	void __fastcall SetColor(const unsigned Value);
	void __fastcall SetSpaceAfter(const double Value);
	void __fastcall SetSpaceBefore(const double Value);
	double __fastcall GetLineSpacing();
	void __fastcall SetLineSpacing(const double Value);
	TAXWPAP* __fastcall GetMaster();
	TAXWDocPropBorder* __fastcall GetBorderBottom();
	TAXWDocPropBorder* __fastcall GetBorderLeft();
	TAXWDocPropBorder* __fastcall GetBorderRight();
	TAXWDocPropBorder* __fastcall GetBorderTop();
	TAXWCharStyle* __fastcall GetStyle();
	void __fastcall SetStyle(TAXWCharStyle* const Value);
	
public:
	TAXWDocPropBorder* __fastcall AddBorderLeft();
	TAXWDocPropBorder* __fastcall AddBorderRight();
	TAXWDocPropBorder* __fastcall AddBorderTop();
	TAXWDocPropBorder* __fastcall AddBorderBottom();
	__property TAXWPAP* Master = {read=GetMaster};
	__property TAXWCharStyle* Style = {read=GetStyle, write=SetStyle};
	__property TAXWPapTextAlign Alignment = {read=GetAlignment, write=SetAlignment, nodefault};
	__property double IndentLeft = {read=GetIndentLeft, write=SetIndentLeft};
	__property double IndentRight = {read=GetIndentRight, write=SetIndentRight};
	__property double IndentFirstLine = {read=GetIndentFirstLine, write=SetIndentFirstLine};
	__property double IndentHanging = {read=GetIndentHanging, write=SetIndentHanging};
	__property unsigned Color = {read=GetColor, write=SetColor, nodefault};
	__property double SpaceBefore = {read=GetSpaceBefore, write=SetSpaceBefore};
	__property double SpaceAfter = {read=GetSpaceAfter, write=SetSpaceAfter};
	__property double LineSpacing = {read=GetLineSpacing, write=SetLineSpacing};
	__property TAXWDocPropBorder* BorderLeft = {read=GetBorderLeft};
	__property TAXWDocPropBorder* BorderRight = {read=GetBorderRight};
	__property TAXWDocPropBorder* BorderTop = {read=GetBorderTop};
	__property TAXWDocPropBorder* BorderBottom = {read=GetBorderBottom};
public:
	/* TAXWProps.Create */ inline __fastcall TAXWPAP(TAXWProps* AMaster) : TAXWProps(AMaster) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWPAP() { }
	
};

#pragma pack(pop)

typedef TAXWPAP TAXWPAPX;

enum DECLSPEC_DENUM TAXWChpUnderline : unsigned char { axcuNone, axcuSingle, axcuWords, axcuDouble, axcuThick, axcuDotted, axcuDottedHeavy, axcuDash, axcuDashedHeavy, axcuDashLong, axcuDashLongHeavy, axcuDotDash, axcuDashDotHeavy, axcuDotDotDash, axcuDashDotDotHeavy, axcuWave, axcuWavyHeavy, axcuWavyDouble };

enum DECLSPEC_DENUM TAXWChpSubSuperscript : unsigned char { axcssNone, axcssSubscript, axcssSuperscript };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWCHP : public TAXWProps
{
	typedef TAXWProps inherited;
	
private:
	TAXWCharStyle* __fastcall GetStyle();
	void __fastcall SetStyle(TAXWCharStyle* const Value);
	bool __fastcall GetBold();
	unsigned __fastcall GetColor();
	System::UnicodeString __fastcall GetFontName();
	bool __fastcall GetItalic();
	double __fastcall GetSize();
	bool __fastcall GetStrikeTrough();
	TAXWChpUnderline __fastcall GetUnderline();
	unsigned __fastcall GetUnderlineColor();
	void __fastcall SetBold(const bool Value);
	void __fastcall SetColor(const unsigned Value);
	void __fastcall SetFontName(const System::UnicodeString Value);
	void __fastcall SetItalic(const bool Value);
	void __fastcall SetSize(const double Value);
	void __fastcall SetStrikeTrough(const bool Value);
	void __fastcall SetUnderline(const TAXWChpUnderline Value);
	void __fastcall SetUnderlineColor(const unsigned Value);
	TAXWCHP* __fastcall GetMaster();
	unsigned __fastcall GetFillColor();
	TAXWChpSubSuperscript __fastcall GetSubSuperscript();
	void __fastcall SetFillColor(const unsigned Value);
	void __fastcall SetSubSuperscript(const TAXWChpSubSuperscript Value);
	
public:
	TAXWDocPropBorder* __fastcall AddBorder();
	__property TAXWCHP* Master = {read=GetMaster};
	__property TAXWCharStyle* Style = {read=GetStyle, write=SetStyle};
	__property System::UnicodeString FontName = {read=GetFontName, write=SetFontName};
	__property double Size = {read=GetSize, write=SetSize};
	__property bool Bold = {read=GetBold, write=SetBold, nodefault};
	__property bool Italic = {read=GetItalic, write=SetItalic, nodefault};
	__property bool StrikeTrough = {read=GetStrikeTrough, write=SetStrikeTrough, nodefault};
	__property unsigned Color = {read=GetColor, write=SetColor, nodefault};
	__property unsigned FillColor = {read=GetFillColor, write=SetFillColor, nodefault};
	__property TAXWChpUnderline Underline = {read=GetUnderline, write=SetUnderline, nodefault};
	__property unsigned UnderlineColor = {read=GetUnderlineColor, write=SetUnderlineColor, nodefault};
	__property TAXWChpSubSuperscript SubSuperscript = {read=GetSubSuperscript, write=SetSubSuperscript, nodefault};
public:
	/* TAXWProps.Create */ inline __fastcall TAXWCHP(TAXWProps* AMaster) : TAXWProps(AMaster) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWCHP() { }
	
};

#pragma pack(pop)

typedef TAXWCHP TAXWCHPX;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWTAP : public TAXWProps
{
	typedef TAXWProps inherited;
	
private:
	double __fastcall GetCellMargBottom();
	double __fastcall GetCellMargLeft();
	double __fastcall GetCellMargRight();
	double __fastcall GetCellMargTop();
	void __fastcall SetCellMargBottom(const double Value);
	void __fastcall SetCellMargLeft(const double Value);
	void __fastcall SetCellMargRight(const double Value);
	void __fastcall SetCellMargTop(const double Value);
	TAXWDocPropBorder* __fastcall GetBorderBottom();
	TAXWDocPropBorder* __fastcall GetBorderLeft();
	TAXWDocPropBorder* __fastcall GetBorderRight();
	TAXWDocPropBorder* __fastcall GetBorderTop();
	TAXWDocPropBorder* __fastcall GetBorderInsideHoriz();
	TAXWDocPropBorder* __fastcall GetBorderInsideVert();
	
protected:
	TAXWDocPropBorder* __fastcall DoAddBorder(TAXWTapId AId);
	
public:
	TAXWDocPropBorder* __fastcall AddBorderLeft();
	TAXWDocPropBorder* __fastcall AddBorderRight();
	TAXWDocPropBorder* __fastcall AddBorderTop();
	TAXWDocPropBorder* __fastcall AddBorderBottom();
	void __fastcall SetDefaultBorders();
	__property double CellMargLeft = {read=GetCellMargLeft, write=SetCellMargLeft};
	__property double CellMargTop = {read=GetCellMargTop, write=SetCellMargTop};
	__property double CellMargRight = {read=GetCellMargRight, write=SetCellMargRight};
	__property double CellMargBottom = {read=GetCellMargBottom, write=SetCellMargBottom};
	__property TAXWDocPropBorder* BorderLeft = {read=GetBorderLeft};
	__property TAXWDocPropBorder* BorderRight = {read=GetBorderRight};
	__property TAXWDocPropBorder* BorderTop = {read=GetBorderTop};
	__property TAXWDocPropBorder* BorderBottom = {read=GetBorderBottom};
	__property TAXWDocPropBorder* BorderInsideVert = {read=GetBorderInsideVert};
	__property TAXWDocPropBorder* BorderInsideHoriz = {read=GetBorderInsideHoriz};
public:
	/* TAXWProps.Create */ inline __fastcall TAXWTAP(TAXWProps* AMaster) : TAXWProps(AMaster) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWTAP() { }
	
};

#pragma pack(pop)

typedef TAXWTAP TAXWTAPX;

class PASCALIMPLEMENTATION TAXWSEP : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool __fastcall GetLandscape();
	void __fastcall SetLandscape(const bool Value);
	
protected:
	int FPageCode;
	double FPageWidth;
	double FPageHeight;
	double FMargLeft;
	double FMargTop;
	double FMargRight;
	double FMargBottom;
	double FMargHeader;
	double FMargFooter;
	double FMargWeb;
	double FGutter;
	bool FTitlePg;
	
public:
	__property int PageCode = {read=FPageCode, write=FPageCode, nodefault};
	__property double PageWidth = {read=FPageWidth};
	__property double PageHeight = {read=FPageHeight};
	__property bool Landscape = {read=GetLandscape, write=SetLandscape, nodefault};
	__property double MargLeft = {read=FMargLeft, write=FMargLeft};
	__property double MargTop = {read=FMargTop, write=FMargTop};
	__property double MargRight = {read=FMargRight, write=FMargRight};
	__property double MargBottom = {read=FMargBottom, write=FMargBottom};
	__property double MargHeader = {read=FMargHeader, write=FMargHeader};
	__property double MargWeb = {read=FMargWeb, write=FMargWeb};
	__property double Gutter = {read=FGutter, write=FGutter};
	__property bool TitlePg = {read=FTitlePg, write=FTitlePg, nodefault};
public:
	/* TObject.Create */ inline __fastcall TAXWSEP() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWSEP() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWRootData : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TAXWCHP* FMasterCHP;
	TAXWPAP* FMasterPAP;
	TAXWTAP* FMasterTAP;
	
public:
	__fastcall TAXWRootData();
	__fastcall virtual ~TAXWRootData();
	__property TAXWCHP* MasterCHP = {read=FMasterCHP};
	__property TAXWPAP* MasterPAP = {read=FMasterPAP};
	__property TAXWTAP* MasterTAP = {read=FMasterTAP};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TAXWStyleType : unsigned char { astPara, astCharRun, astTable, astNumbering };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWStyle : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TAXWStyles* FStyles;
	System::UnicodeString FId;
	System::UnicodeString FName;
	TAXWStyle* FBasedOn;
	
public:
	__fastcall virtual TAXWStyle(TAXWStyles* AStyles);
	virtual TAXWStyleType __fastcall Type_() = 0 ;
	__property System::UnicodeString Id = {read=FId, write=FId};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property TAXWStyle* BasedOn = {read=FBasedOn, write=FBasedOn};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWStyle() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWCharStyle : public TAXWStyle
{
	typedef TAXWStyle inherited;
	
protected:
	TAXWCHP* FCHPX;
	
public:
	__fastcall virtual TAXWCharStyle(TAXWStyles* AStyles);
	__fastcall virtual ~TAXWCharStyle();
	virtual TAXWStyleType __fastcall Type_();
	__property TAXWCHP* CHPX = {read=FCHPX};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWParaStyle : public TAXWStyle
{
	typedef TAXWStyle inherited;
	
protected:
	TAXWPAP* FPAPX;
	
public:
	__fastcall virtual TAXWParaStyle(TAXWStyles* AStyles);
	__fastcall virtual ~TAXWParaStyle();
	virtual TAXWStyleType __fastcall Type_();
	__property TAXWPAP* PAPX = {read=FPAPX};
};

#pragma pack(pop)

typedef System::TMetaClass* TAXWStyleClass;

typedef System::TMetaClass* TAXWCharStyleClass;

typedef System::TMetaClass* TAXWParaStyleClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWStyles : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TAXWStyle* __fastcall GetItems(int Index);
	
protected:
	TAXWRootData* FRootData;
	System::Inifiles::THashedStringList* FItems;
	TAXWStyle* __fastcall Add(const System::UnicodeString AName, TAXWStyleClass AClass);
	
public:
	__fastcall TAXWStyles(TAXWRootData* ARootData);
	__fastcall virtual ~TAXWStyles();
	void __fastcall Clear();
	TAXWCharStyle* __fastcall AddChar(const System::UnicodeString AName);
	TAXWParaStyle* __fastcall AddPara(const System::UnicodeString AName);
	void __fastcall GetAllStyles(System::Classes::TStrings* AList);
	TAXWStyle* __fastcall FindByName(System::UnicodeString AName, TAXWStyleType AType);
	__property TAXWStyle* Items[int Index] = {read=GetItems};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAXWFontData : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FName;
	double FSize;
	int FRotation;
	bool FBold;
	bool FItalic;
	TAXWChpUnderline FUnderline;
	unsigned FULColor;
	double FULPos;
	double FULSize;
	System::Byte FCharSet;
	bool FStrikeOut;
	double FSubSuperOffs;
	bool FSuperscript;
	TAXWChpSubSuperscript FSubSuperscript;
	unsigned FColor;
	unsigned FFillColor;
	TAXWDocPropBorder* FBorder;
	
public:
	__fastcall TAXWFontData();
	void __fastcall Clear();
	void __fastcall Assign(TAXWFontData* AFontData);
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property double Size = {read=FSize, write=FSize};
	__property int Rotation = {read=FRotation, write=FRotation, nodefault};
	__property bool Bold = {read=FBold, write=FBold, nodefault};
	__property bool Italic = {read=FItalic, write=FItalic, nodefault};
	__property TAXWChpUnderline Underline = {read=FUnderline, write=FUnderline, nodefault};
	__property unsigned ULColor = {read=FULColor, write=FULColor, nodefault};
	__property double UnderlinePos = {read=FULPos, write=FULPos};
	__property double UnderlineSize = {read=FULSize, write=FULSize};
	__property bool StrikeOut = {read=FStrikeOut, write=FStrikeOut, nodefault};
	__property TAXWChpSubSuperscript SubSuperscript = {read=FSubSuperscript, write=FSubSuperscript, nodefault};
	__property double SubsSuperOffs = {read=FSubSuperOffs, write=FSubSuperOffs};
	__property System::Byte CharSet = {read=FCharSet, write=FCharSet, nodefault};
	__property unsigned Color = {read=FColor, write=FColor, nodefault};
	__property unsigned FillColor = {read=FFillColor, write=FFillColor, nodefault};
	__property TAXWDocPropBorder* Border = {read=FBorder, write=FBorder};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWFontData() { }
	
};


class PASCALIMPLEMENTATION TAXWFontDataDoc : public TAXWFontData
{
	typedef TAXWFontData inherited;
	
public:
	void __fastcall Apply(TAXWStyle* AStyle)/* overload */;
	void __fastcall Apply(TAXWCHP* ACHP)/* overload */;
public:
	/* TAXWFontData.Create */ inline __fastcall TAXWFontDataDoc() : TAXWFontData() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWFontDataDoc() { }
	
};


class PASCALIMPLEMENTATION TAXWParaData : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TAXWPapTextAlign FAlignment;
	double FIndentLeft;
	double FIndentRight;
	double FIndentFirstLine;
	double FIndentHanging;
	double FLineSpacing;
	double FSpaceBefore;
	double FSpaceAfter;
	TAXWDocPropBorders* FBorders;
	unsigned FColor;
	
public:
	__fastcall TAXWParaData();
	__fastcall virtual ~TAXWParaData();
	void __fastcall Reset(TAXWPAP* APAP);
	void __fastcall Apply(TAXWStyle* AStyle)/* overload */;
	void __fastcall Apply(TAXWPAP* APAPX)/* overload */;
	double __fastcall MargLeft();
	double __fastcall MargRight();
	double __fastcall MargHoriz();
	bool __fastcall HasBorders();
	__property TAXWPapTextAlign Alignment = {read=FAlignment, write=FAlignment, nodefault};
	__property double IndentLeft = {read=FIndentLeft, write=FIndentLeft};
	__property double IndentRight = {read=FIndentRight, write=FIndentRight};
	__property double IndentFirstLine = {read=FIndentFirstLine, write=FIndentFirstLine};
	__property double IndentHanging = {read=FIndentHanging, write=FIndentHanging};
	__property double LineSpacing = {read=FLineSpacing, write=FLineSpacing};
	__property double SpaceBefore = {read=FSpaceBefore, write=FSpaceBefore};
	__property double SpaceAfter = {read=FSpaceAfter, write=FSpaceAfter};
	__property TAXWDocPropBorders* Borders = {read=FBorders};
	__property unsigned Color = {read=FColor, write=FColor, nodefault};
};


enum DECLSPEC_DENUM TAXWCharRunType : unsigned char { acrtText, acrtTab, acrtBreak, acrtGraphic, acrtPicture, acrtHyperlink, acrtSimpleField, acrtLinked, acrtFootnote, acrtFootnoteRef };

enum DECLSPEC_DENUM TXWCharRunBreakType : unsigned char { acrbtLineBreak, acrbtPageBreak, acrbtColumn, acrbtSeparator, acrbtContinuationSeparator };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWCharRun : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TAXWCharRuns* FParent;
	System::UnicodeString FText;
	TAXWCHP* FCHPX;
	
public:
	__fastcall TAXWCharRun(TAXWCharRuns* AParent);
	__fastcall virtual ~TAXWCharRun();
	virtual TAXWCharRunType __fastcall Type_();
	void __fastcall AddCHPX();
	__property System::UnicodeString Text = {read=FText, write=FText};
	__property System::UnicodeString RawText = {read=FText, write=FText};
	__property TAXWCHP* CHPX = {read=FCHPX};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWCharRunHyperlink : public TAXWCharRun
{
	typedef TAXWCharRun inherited;
	
protected:
	TAXWHyperlink* FHyperlink;
	
public:
	virtual TAXWCharRunType __fastcall Type_();
	__property TAXWHyperlink* Hyperlink = {read=FHyperlink};
public:
	/* TAXWCharRun.Create */ inline __fastcall TAXWCharRunHyperlink(TAXWCharRuns* AParent) : TAXWCharRun(AParent) { }
	/* TAXWCharRun.Destroy */ inline __fastcall virtual ~TAXWCharRunHyperlink() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWCharRunTab : public TAXWCharRun
{
	typedef TAXWCharRun inherited;
	
public:
	virtual TAXWCharRunType __fastcall Type_();
public:
	/* TAXWCharRun.Create */ inline __fastcall TAXWCharRunTab(TAXWCharRuns* AParent) : TAXWCharRun(AParent) { }
	/* TAXWCharRun.Destroy */ inline __fastcall virtual ~TAXWCharRunTab() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWCharRunBreak : public TAXWCharRun
{
	typedef TAXWCharRun inherited;
	
protected:
	TXWCharRunBreakType FBreakType;
	
public:
	__fastcall TAXWCharRunBreak(TAXWCharRuns* AParent, TXWCharRunBreakType ABreakType);
	virtual TAXWCharRunType __fastcall Type_();
	__property TXWCharRunBreakType BreakType = {read=FBreakType, nodefault};
public:
	/* TAXWCharRun.Destroy */ inline __fastcall virtual ~TAXWCharRunBreak() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWCharRuns : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TAXWCharRun* operator[](int Index) { return this->Items[Index]; }
	
private:
	TAXWCharRun* __fastcall GetItems(int Index);
	
protected:
	TAXWRootData* FRootData;
	
public:
	__fastcall TAXWCharRuns(TAXWRootData* ARootData);
	HIDESBASE TAXWCharRun* __fastcall First();
	HIDESBASE TAXWCharRun* __fastcall Add();
	TAXWCharRunTab* __fastcall AddTab();
	TAXWCharRunBreak* __fastcall AddBreak(TXWCharRunBreakType ABreakType);
	TAXWCharRunHyperlink* __fastcall AddHyperlink(TAXWCHP* ACHPX, TAXWHyperlink* AHyperlink);
	__property TAXWRootData* RootData = {read=FRootData};
	__property TAXWCharRun* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWCharRuns() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAXWTabStop : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	double FPosition;
	TAXWTabStopAlignment FAlignment;
	TAXWTabStopLeader FLeader;
	
public:
	__fastcall TAXWTabStop();
	__property double Position = {read=FPosition, write=FPosition};
	__property TAXWTabStopAlignment Alignment = {read=FAlignment, write=FAlignment, nodefault};
	__property TAXWTabStopLeader Leader = {read=FLeader, write=FLeader, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWTabStop() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWTabStops : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TAXWTabStop* operator[](int Index) { return this->Items[Index]; }
	
private:
	TAXWTabStop* __fastcall GetItems(int Index);
	
public:
	__fastcall TAXWTabStops();
	HIDESBASE TAXWTabStop* __fastcall Last();
	HIDESBASE TAXWTabStop* __fastcall Add(const double APosition, TAXWTabStopAlignment AAlignment = (TAXWTabStopAlignment)(0x1))/* overload */;
	__property TAXWTabStop* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWTabStops() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TAXWLogParaType : unsigned char { alptPara, alptTable };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWLogParaItem : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TAXWLogParas* FParent;
	
public:
	__fastcall TAXWLogParaItem(TAXWLogParas* AParent);
	virtual TAXWLogParaType __fastcall Type_() = 0 ;
	__property TAXWLogParas* Parent = {read=FParent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWLogParaItem() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TAXWNumberingStyleType : unsigned char { anstNone, anstBullet, anstDecimal, anstLowerRoman, anstUpperRoman, anstLowerLetter, anstUpperLetter };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWLogPara : public TAXWLogParaItem
{
	typedef TAXWLogParaItem inherited;
	
private:
	System::UnicodeString __fastcall GetPlainText();
	
protected:
	TAXWPAP* FPAPX;
	TAXWCharRuns* FRuns;
	TAXWTabStops* FTabs;
	
public:
	__fastcall TAXWLogPara(TAXWLogParas* AParent);
	__fastcall virtual ~TAXWLogPara();
	void __fastcall AddPAPX();
	void __fastcall AddTabStops();
	virtual TAXWLogParaType __fastcall Type_();
	void __fastcall SetupParaData(TAXWParaData* AParaData);
	__property TAXWPAP* PAPX = {read=FPAPX};
	__property TAXWCharRuns* Runs = {read=FRuns};
	__property TAXWTabStops* TabStops = {read=FTabs};
	__property System::UnicodeString PlainText = {read=GetPlainText};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWTableBorderProps : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TAXWDocPropBorders* FBorders;
	TAXWDocPropBorder* FBorderInsideH;
	TAXWDocPropBorder* FBorderInsideV;
	
public:
	__fastcall TAXWTableBorderProps();
	__fastcall virtual ~TAXWTableBorderProps();
	void __fastcall Assign(TAXWTableBorderProps* AProps);
	void __fastcall AddBorders(double AWidth, unsigned AColor, TST_Border AStyle, double ASpace);
	TAXWDocPropBorder* __fastcall AddBorderTop()/* overload */;
	TAXWDocPropBorder* __fastcall AddBorderTop(double AWidth, unsigned AColor, TST_Border AStyle, double ASpace)/* overload */;
	TAXWDocPropBorder* __fastcall AddBorderLeft()/* overload */;
	TAXWDocPropBorder* __fastcall AddBorderLeft(double AWidth, unsigned AColor, TST_Border AStyle, double ASpace)/* overload */;
	TAXWDocPropBorder* __fastcall AddBorderBottom()/* overload */;
	TAXWDocPropBorder* __fastcall AddBorderBottom(double AWidth, unsigned AColor, TST_Border AStyle, double ASpace)/* overload */;
	TAXWDocPropBorder* __fastcall AddBorderRight()/* overload */;
	TAXWDocPropBorder* __fastcall AddBorderRight(double AWidth, unsigned AColor, TST_Border AStyle, double ASpace)/* overload */;
	TAXWDocPropBorder* __fastcall AddBorderInsideH();
	TAXWDocPropBorder* __fastcall AddBorderInsideV();
	__property TAXWDocPropBorders* Borders = {read=FBorders};
	__property TAXWDocPropBorder* BorderInsideHoriz = {read=FBorderInsideH};
	__property TAXWDocPropBorder* BorderInsideVert = {read=FBorderInsideV};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAXWTableCellProps : public TAXWTableBorderProps
{
	typedef TAXWTableBorderProps inherited;
	
protected:
	TAXWDocPropBorders* FBorders;
	TAXWDocPropBorder* FBorderTl2br;
	TAXWDocPropBorder* FBorderTr2bl;
	unsigned FFillColor;
	double FMargLeft;
	double FMargTop;
	double FMargRight;
	double FMargBottom;
	
public:
	__fastcall TAXWTableCellProps();
	__fastcall virtual ~TAXWTableCellProps();
	HIDESBASE void __fastcall Assign(TAXWTableCellProps* AProps);
	TAXWDocPropBorder* __fastcall AddBorderTl2br();
	TAXWDocPropBorder* __fastcall AddBorderTr2bl();
	bool __fastcall HasBorders();
	bool __fastcall HasMargs();
	__property TAXWDocPropBorder* BorderTl2br = {read=FBorderTl2br};
	__property TAXWDocPropBorder* BorderTr2bl = {read=FBorderTr2bl};
	__property unsigned FillColor = {read=FFillColor, write=FFillColor, nodefault};
	__property double MargLeft = {read=FMargLeft, write=FMargLeft};
	__property double MargTop = {read=FMargTop, write=FMargTop};
	__property double MargRight = {read=FMargRight, write=FMargRight};
	__property double MargBottom = {read=FMargBottom, write=FMargBottom};
};


enum DECLSPEC_DENUM TAXWTableCellFlag : unsigned char { atcfSelected, atcfMerged, atcfMergedRoot, atcfMergedLast };

typedef System::Set<TAXWTableCellFlag, TAXWTableCellFlag::atcfSelected, TAXWTableCellFlag::atcfMergedLast> TAXWTableCellFlags;

class PASCALIMPLEMENTATION TAXWTableCell : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TAXWTableCellFlags FFlags;
	TAXWTableRow* FRow;
	TAXWLogParas* FParas;
	TAXWTableCellProps* FProps;
	TAXWTableCellAlignVert FAlignVert;
	double FWidth;
	
public:
	__fastcall TAXWTableCell(TAXWTableRow* ARow);
	__fastcall virtual ~TAXWTableCell();
	TAXWTableCellProps* __fastcall AddProps();
	__property TAXWTableCellFlags Flags = {read=FFlags, write=FFlags, nodefault};
	__property TAXWTableRow* Row = {read=FRow};
	__property TAXWLogParas* Paras = {read=FParas};
	__property double Width = {read=FWidth, write=FWidth};
	__property TAXWTableCellProps* Props = {read=FProps};
	__property TAXWTableCellAlignVert AlignVert = {read=FAlignVert, write=FAlignVert, nodefault};
};


class PASCALIMPLEMENTATION TAXWTableRow : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TAXWTableCell* operator[](int Index) { return this->Cells[Index]; }
	
private:
	TAXWTableCell* __fastcall GetCells(int Index);
	System::UnicodeString __fastcall GetPlainText();
	
protected:
	TAXWTableRows* FParent;
	double FAHeight;
	
public:
	__fastcall TAXWTableRow(TAXWTableRows* AParent);
	HIDESBASE TAXWTableCell* __fastcall Add();
	TAXWLogPara* __fastcall LastPara();
	HIDESBASE TAXWTableCell* __fastcall Last();
	TAXWTable* __fastcall Table();
	__property TAXWTableRows* Parent = {read=FParent};
	__property double AHeight = {read=FAHeight, write=FAHeight};
	__property System::UnicodeString PlainText = {read=GetPlainText};
	__property TAXWTableCell* Cells[int Index] = {read=GetCells/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWTableRow() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWTableRows : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TAXWTableRow* operator[](int Index) { return this->Items[Index]; }
	
private:
	TAXWTableRow* __fastcall GetItems(int Index);
	
protected:
	TAXWTable* FParent;
	
public:
	__fastcall TAXWTableRows(TAXWTable* AParent);
	HIDESBASE TAXWTableRow* __fastcall Add();
	HIDESBASE TAXWTableRow* __fastcall Last();
	__property TAXWTable* Parent = {read=FParent};
	__property TAXWTableRow* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWTableRows() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWTable : public TAXWLogParaItem
{
	typedef TAXWLogParaItem inherited;
	
public:
	TAXWTableRow* operator[](int Index) { return this->Items[Index]; }
	
private:
	TAXWTableRow* __fastcall GetItems(int Index);
	System::UnicodeString __fastcall GetPlainText();
	
protected:
	TAXWTableRows* FRows;
	TAXWTAP* FTAPX;
	
public:
	__fastcall TAXWTable(TAXWLogParas* AParent);
	__fastcall virtual ~TAXWTable();
	virtual TAXWLogParaType __fastcall Type_();
	int __fastcall Count();
	TAXWTableRow* __fastcall Add();
	TAXWLogPara* __fastcall LastPara();
	TAXWTableCell* __fastcall LastCell();
	__property TAXWTAP* TAPX = {read=FTAPX};
	__property System::UnicodeString PlainText = {read=GetPlainText};
	__property TAXWTableRow* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWLogParas : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TAXWLogPara* operator[](int Index) { return this->Para[Index]; }
	
private:
	TAXWLogParaItem* __fastcall GetItems(int Index);
	System::UnicodeString __fastcall GetPlainText();
	TAXWLogPara* __fastcall GetPara(int Index);
	TAXWTable* __fastcall GetTable(int Index);
	
protected:
	TAXWRootData* FRootData;
	TAXWNumberingStyleType FAutoNumbering;
	
public:
	__fastcall TAXWLogParas(TAXWRootData* ARootData);
	TAXWLogPara* __fastcall CreatePara();
	TAXWLogPara* __fastcall AppendPara();
	TAXWLogPara* __fastcall _Add();
	TAXWTable* __fastcall AddTable();
	TAXWLogPara* __fastcall _Last();
	HIDESBASE TAXWLogPara* __fastcall Last();
	__property TAXWRootData* RootData = {read=FRootData};
	__property TAXWNumberingStyleType AutoNumbering = {read=FAutoNumbering, write=FAutoNumbering, nodefault};
	__property System::UnicodeString PlainText = {read=GetPlainText};
	__property TAXWLogParaItem* Items[int Index] = {read=GetItems};
	__property TAXWLogPara* Para[int Index] = {read=GetPara/*, default*/};
	__property TAXWTable* Tables[int Index] = {read=GetTable};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWLogParas() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWLogDocEditor : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TAXWCHP* __fastcall GetMasterCHP();
	TAXWPAP* __fastcall GetMasterPAP();
	System::UnicodeString __fastcall GetPLainText();
	
protected:
	TAXWRootData* FRootData;
	TAXWSEP* FSEP;
	TAXWStyles* FStyles;
	TAXWHyperlinks* FHyperlinks;
	TAXWLogParas* FParas;
	
public:
	__fastcall TAXWLogDocEditor();
	__fastcall virtual ~TAXWLogDocEditor();
	void __fastcall Clear();
	__property TAXWCHP* MasterCHP = {read=GetMasterCHP};
	__property TAXWPAP* MasterPAP = {read=GetMasterPAP};
	__property TAXWSEP* SEP = {read=FSEP};
	__property TAXWStyles* Styles = {read=FStyles};
	__property TAXWHyperlinks* Hyperlinks = {read=FHyperlinks};
	__property TAXWLogParas* Paras = {read=FParas};
	__property System::UnicodeString PlainText = {read=GetPLainText};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const unsigned AXW_COLOR_AUTOMATIC = unsigned(0xff000000);
static const System::Int8 AXW_COLOR_BLACK = System::Int8(0x0);
static const int AXW_COLOR_WHITE = int(0xffffff);
static const int AXW_COLOR_PAPER = int(0xffffff);
#define AXW_CHP_DEFAULT_FONT L"Arial"
#define AXW_CHP_SUPERSCRIPT_SCALE  (6.500000E-01)
#define AXW_CHP_SUBSCRIPT_SCALE  (6.500000E-01)
#define AXW_HTML_DEF_FONTNAME L"Times New Roman"
static const System::Int8 AXW_HTML_DEF_FONTSIZE = System::Int8(0xc);
#define CHPXBoolProps (System::Set<TAXWChpId, TAXWChpId::axciBold, TAXWChpId::axciFontName>() << TAXWChpId::axciBold << TAXWChpId::axciItalic << TAXWChpId::axciStrikeTrough << TAXWChpId::axciHidden << TAXWChpId::axciShadow << TAXWChpId::axciOutline << TAXWChpId::axciEmboss << TAXWChpId::axciEngrave << TAXWChpId::axciSmallCaps << TAXWChpId::axciAllCaps << TAXWChpId::axciMisspelled << TAXWChpId::axciRTL )
#define CHPXIntProps (System::Set<TAXWChpId, TAXWChpId::axciBold, TAXWChpId::axciFontName>() << TAXWChpId::axciColor << TAXWChpId::axciFillColor << TAXWChpId::axciUnderline << TAXWChpId::axciUnderlineColor << TAXWChpId::axciSubSuperscript << TAXWChpId::axciColorHLinkHoover << TAXWChpId::axciColorHLinkVisited )
#define CHPXFloatProps (System::Set<TAXWChpId, TAXWChpId::axciBold, TAXWChpId::axciFontName>() << TAXWChpId::axciSize )
#define CHPXObjProps (System::Set<TAXWChpId, TAXWChpId::axciBold, TAXWChpId::axciFontName>() << TAXWChpId::axciStyle )
#define CHPXOwnedObjProps (System::Set<TAXWChpId, TAXWChpId::axciBold, TAXWChpId::axciFontName>() << TAXWChpId::axciBorder )
#define CHPXStringProps (System::Set<TAXWChpId, TAXWChpId::axciBold, TAXWChpId::axciFontName>() << TAXWChpId::axciFontName )
extern DELPHI_PACKAGE Xlsaxweditor__1 AXWPictureTypeName;
#define AXWCharRunTypeText (System::Set<TAXWCharRunType, TAXWCharRunType::acrtText, TAXWCharRunType::acrtFootnoteRef>() << TAXWCharRunType::acrtText << TAXWCharRunType::acrtHyperlink << TAXWCharRunType::acrtSimpleField )
extern DELPHI_PACKAGE void __fastcall Swap(int &A, int &B)/* overload */;
extern DELPHI_PACKAGE void __fastcall Swap(double &A, double &B)/* overload */;
}	/* namespace Xlsaxweditor */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSAXWEDITOR)
using namespace Xlsaxweditor;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XlsaxweditorHPP
