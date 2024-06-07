// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSReadRTF.pas' rev: 35.00 (Windows)

#ifndef XlsreadrtfHPP
#define XlsreadrtfHPP

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
#include <System.StrUtils.hpp>
#include <System.IniFiles.hpp>
#include <System.Math.hpp>
#include <XLSUtils5.hpp>
#include <XLSAXWEditor.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsreadrtf
{
//-- forward type declarations -----------------------------------------------
struct TRtfSEP;
struct TRtfDOP;
class DELPHICLASS TRtfPAP;
class DELPHICLASS TRtfCHP;
class DELPHICLASS TRtfDestination;
class DELPHICLASS TRtfDestStream;
class DELPHICLASS TRtfDestColorTable;
class DELPHICLASS TRtfFont;
class DELPHICLASS TRtfDestFontTable;
class DELPHICLASS TRftDestListText;
class DELPHICLASS TRtfStyle;
class DELPHICLASS TRtfCharStyle;
class DELPHICLASS TRtfParaStyle;
class DELPHICLASS TRtfDestStylesheet;
class DELPHICLASS TRtfTableStyle;
class DELPHICLASS TRtfSectStyle;
class DELPHICLASS TRtfDestField;
class DELPHICLASS TRtfDestComment;
class DELPHICLASS TRtfDestStringParam;
class DELPHICLASS TRtfDestPict;
class DELPHICLASS TRTFStackItem;
class DELPHICLASS TRTFStack;
class DELPHICLASS TRtfTableStackItem;
class DELPHICLASS TRtfTableStack;
class DELPHICLASS TAXWReadRTF;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TRtfJust : unsigned char { justL, justR, justC, justF };

enum DECLSPEC_DENUM TRtfSBK : unsigned char { sbkNon, sbkCol, sbkEvn, sbkOdd, sbkPg };

enum DECLSPEC_DENUM TRtfPGN : unsigned char { pgDec, pgURom, pgLRom, pgULtr, pgLLtr };

enum DECLSPEC_DENUM TRtfULType : unsigned char { rultNone, rultW, rultDB, rultTH, rultD, rultThD, rultDash, rultThDash, rultLDash, rultThLDash, rultDashD, rultThDashD, rultDashDD, rultThDashDD, rultWave, rultHWave, rultUlDbWave };

enum DECLSPEC_DENUM TRtfIPROP : unsigned char { ipropNil, ipropBold, ipropItalic, ipropUnderline, ipropUnderlineNone, ipropUnderlineColor, ipropULType, ipropFontSize, ipropChBrdr, ipropChCbPat, ipropSub, ipropSuper, ipropStrikeTrough, ipropNoSuperSub, ipropFontColor, ipropLeftInd, ipropRightInd, ipropFirstInd, ipropJust, ipropTabPos, ipropTabC, ipropTabR, ipropTabDec, ipropTabLDot, ipropTabLHyph, ipropTabLULine, ipropTabLThick, ipropListLevel, ipropBorderStyle, ipropSpaceBefore, ipropSpaceAfter, ipropLineSpacing, ipropRTL, ipropParaColor, ipropBrdrt, ipropBrdrb, ipropBrdrl, ipropBrdrr, ipropBrdrbtw, ipropBrdrbar, ipropBox, ipropBrdrs, ipropBrdrw, ipropBrdrcf, ipropBrsp, ipropBrdrnil, ipropBrdrtbl, ipropCols, ipropPgnX, ipropPgnY, ipropSbk, ipropPgnFormat, 
	ipropXaPage, ipropYaPage, ipropXaLeft, ipropXaRight, ipropYaTop, ipropYaBottom, ipropPgnStart, ipropFacingp, ipropLandscape, ipropPar, ipropPard, ipropPlain, ipropSectd, ipropIntbl, ipropITap, ipropTrowD, ipropCell, ipropNestCell, ipropRow, ipropNestRow, ipropLastRow, ipropCellX, ipropTblBorderL, ipropTblBorderT, ipropTblBorderR, ipropTblBorderB, ipropTblBorderIV, ipropTblBorderIH, ipropCellBorderL, ipropCellBorderT, ipropCellBorderR, ipropCellBorderB, ipropRowHeight, ipropCellColor, ipropCellNoShading, ipropTblCellMargL, ipropTblCellMargT, ipropTblCellMargR, ipropTblCellMargB, ipropCellVAlign, ipropRed, ipropGreen, ipropBlue, ipropUnicode, ipropUnicodeGroup, ipropTab, ipropPageBreak, ipropLineBreak, ipropPicture, ipropPictWidth, ipropPictHeigth, 
	ipropPictGoalWidth, ipropPictGoalHeight, ipropPictScaleX, ipropPictScaleY, ipropPictCropT, ipropPictCropB, ipropPictCropL, ipropPictCropR, ipropBlipTag, ipropFont, ipropCharSet, ipropBkmkColFirst, ipropBkmkColLast, ipropLS, ipropParaStyle, ipropCharRunStyle, ipropTableStyle, ipropSectStyle, ipropDataField, ipropMax };

struct DECLSPEC_DRECORD TRtfSEP
{
public:
	int cCols;
	TRtfSBK SBK;
	int xaPgn;
	int yaPgn;
	TRtfPGN pgnFormat;
};


struct DECLSPEC_DRECORD TRtfDOP
{
public:
	int xaPage;
	int yaPage;
	int xaLeft;
	int yaTop;
	int xaRight;
	int yaBottom;
	int pgnStart;
	System::Byte fFacingp;
	System::Byte fLandscape;
};


enum DECLSPEC_DENUM TRtfRDS : unsigned char { rdsNorm, rdsSkip };

enum DECLSPEC_DENUM TRtfRIS : unsigned char { risNorm, risBin, risHex };

enum DECLSPEC_DENUM TRtfIPFN : unsigned char { ipfnBin, ipfnHex, ipfnSkipDest };

enum DECLSPEC_DENUM TRtfIDEST : unsigned char { idestNil, idestSkip, idestFontTbl, idestColorTbl, idestPict, idestShpPict, idestNonShpPict, idestBlipUid, idestNestTableProps, idestNoNestTables, idestField, idestFieldInstr, idestFieldResult, idestStylesheet, idestAnnotation, idestAnnStart, idestAnnEnd, idestAnnRef, idestAnnTime, idestAnnDate, idestAnnAuthor, idestAnnInitials, idestAnnParent, idestAnnIcon, idestGenerator, idestBullet };

enum DECLSPEC_DENUM TRtfKWD : unsigned char { kwdChar, kwdDest, kwdProp, kwdSpec };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRtfPAP : public Xlsaxweditor::TAXWPAP
{
	typedef Xlsaxweditor::TAXWPAP inherited;
	
protected:
	bool FInTable;
	int FTblNesting;
	Xlsaxweditor::TAXWDocPropBorder* FCurrBorder;
	TRtfDestColorTable* FColorTable;
	
public:
	__fastcall TRtfPAP(Xlsaxweditor::TAXWPAP* APAP, TRtfDestColorTable* AColorTable);
	virtual void __fastcall Clear();
	HIDESBASE void __fastcall Assign(TRtfPAP* APAP)/* overload */;
	bool __fastcall ApplyKeyword(TRtfIPROP iprop, int val);
	Xlsaxweditor::TAXWDocPropBorder* __fastcall DoBorders(TRtfIPROP ABorderDest);
	__property bool InTable = {read=FInTable, write=FInTable, nodefault};
	__property int TblNesting = {read=FTblNesting, write=FTblNesting, nodefault};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TRtfPAP() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRtfCHP : public Xlsaxweditor::TAXWCHP
{
	typedef Xlsaxweditor::TAXWCHP inherited;
	
protected:
	Xlsaxweditor::TAXWDocPropBorder* FCurrBorder;
	TRtfDestColorTable* FColorTable;
	TRtfDestFontTable* FFontTable;
	
public:
	__fastcall TRtfCHP(Xlsaxweditor::TAXWCHP* ACHP, TRtfDestColorTable* AColorTable, TRtfDestFontTable* AFontTable);
	__fastcall virtual ~TRtfCHP();
	virtual void __fastcall Clear();
	HIDESBASE void __fastcall Assign(TRtfCHP* ACHP)/* overload */;
	Xlsaxweditor::TAXWDocPropBorder* __fastcall AddCurrBorder();
	bool __fastcall ApplyKeyword(TRtfIPROP iprop, int val);
	__property Xlsaxweditor::TAXWDocPropBorder* CurrBorder = {read=FCurrBorder};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRtfDestination : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TRtfIDEST FType;
	TAXWReadRTF* FReader;
	TRtfDestination* FParentDest;
	int FGroupLevel;
	System::UnicodeString FText;
	
public:
	__fastcall TRtfDestination(TAXWReadRTF* AReader, TRtfIDEST AType)/* overload */;
	__fastcall TRtfDestination(TAXWReadRTF* AReader, TRtfIDEST AType, TRtfDestination* AParentDest)/* overload */;
	__fastcall virtual ~TRtfDestination();
	virtual bool __fastcall Persistent();
	virtual bool __fastcall HasDocText();
	virtual void __fastcall ChangeType(TRtfIDEST ANewType);
	virtual void __fastcall BeginDest();
	virtual void __fastcall EndDest();
	virtual void __fastcall ChildEndDest(TRtfDestination* AChild);
	virtual void __fastcall ParseChar(TRtfRIS &ARIS, char AChar);
	virtual void __fastcall BeginGroup();
	virtual void __fastcall EndGroup();
	virtual void __fastcall ApplyKeyword(TRtfIPROP iprop, int val);
	virtual void __fastcall EndComposedValue();
	__property TRtfIDEST Type_ = {read=FType, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRtfDestStream : public TRtfDestination
{
	typedef TRtfDestination inherited;
	
protected:
	System::Byte FCurrByte;
	bool FCurrByteUpper;
	System::Classes::TMemoryStream* FStream;
	
public:
	__fastcall TRtfDestStream(TAXWReadRTF* AReader, TRtfIDEST AType, TRtfDestination* AParentDest)/* overload */;
	__fastcall TRtfDestStream(TAXWReadRTF* AReader, TRtfIDEST AType)/* overload */;
	__fastcall virtual ~TRtfDestStream();
	virtual void __fastcall ParseChar(TRtfRIS &ARIS, char AChar);
	virtual void __fastcall EndDest();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRtfDestColorTable : public TRtfDestination
{
	typedef TRtfDestination inherited;
	
	
private:
	typedef System::DynamicArray<unsigned> _TRtfDestColorTable__1;
	
	
protected:
	_TRtfDestColorTable__1 FColorTable;
	System::Byte FR;
	System::Byte FG;
	System::Byte FB;
	
public:
	virtual bool __fastcall Persistent();
	virtual void __fastcall ApplyKeyword(TRtfIPROP iprop, int val);
	virtual void __fastcall EndComposedValue();
	unsigned __fastcall Color(int AClIndex, unsigned ADefault);
public:
	/* TRtfDestination.Create */ inline __fastcall TRtfDestColorTable(TAXWReadRTF* AReader, TRtfIDEST AType)/* overload */ : TRtfDestination(AReader, AType) { }
	/* TRtfDestination.Create */ inline __fastcall TRtfDestColorTable(TAXWReadRTF* AReader, TRtfIDEST AType, TRtfDestination* AParentDest)/* overload */ : TRtfDestination(AReader, AType, AParentDest) { }
	/* TRtfDestination.Destroy */ inline __fastcall virtual ~TRtfDestColorTable() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRtfFont : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FName;
	int FId;
	
public:
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property int Id = {read=FId, write=FId, nodefault};
public:
	/* TObject.Create */ inline __fastcall TRtfFont() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TRtfFont() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRtfDestFontTable : public TRtfDestination
{
	typedef TRtfDestination inherited;
	
public:
	TRtfFont* operator[](int AId) { return this->Font[AId]; }
	
private:
	TRtfFont* __fastcall GetFont(int AId);
	
protected:
	System::Inifiles::THashedStringList* FFonts;
	TRtfFont* FDefaultFont;
	TRtfFont* FCurrFont;
	
public:
	__fastcall TRtfDestFontTable(TAXWReadRTF* AReader, TRtfIDEST AType);
	__fastcall virtual ~TRtfDestFontTable();
	virtual bool __fastcall Persistent();
	virtual void __fastcall ParseChar(TRtfRIS &ARIS, char AChar);
	virtual void __fastcall ApplyKeyword(TRtfIPROP iprop, int val);
	virtual void __fastcall EndComposedValue();
	virtual void __fastcall EndGroup();
	__property TRtfFont* Font[int AId] = {read=GetFont/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRftDestListText : public TRtfDestination
{
	typedef TRtfDestination inherited;
	
public:
	__fastcall TRftDestListText(TAXWReadRTF* AReader, TRtfIDEST AType);
	virtual void __fastcall ApplyKeyword(TRtfIPROP iprop, int val);
	virtual void __fastcall EndGroup();
	virtual void __fastcall ParseChar(TRtfRIS &ARIS, char AChar);
public:
	/* TRtfDestination.Destroy */ inline __fastcall virtual ~TRftDestListText() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRtfStyle : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TAXWReadRTF* FReader;
	int FId;
	void __fastcall AddStyle(Xlsaxweditor::TAXWStyle* AStyle);
	
public:
	__fastcall TRtfStyle(TAXWReadRTF* AReader, int AId);
	virtual void __fastcall ApplyKeyword(TRtfIPROP iprop, int val) = 0 ;
	virtual void __fastcall Save(System::UnicodeString AName) = 0 ;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRtfStyle() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRtfCharStyle : public TRtfStyle
{
	typedef TRtfStyle inherited;
	
protected:
	TRtfCHP* FCHPX;
	
public:
	__fastcall TRtfCharStyle(TAXWReadRTF* AReader, int AId);
	__fastcall virtual ~TRtfCharStyle();
	virtual void __fastcall ApplyKeyword(TRtfIPROP iprop, int val);
	virtual void __fastcall Save(System::UnicodeString AName);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRtfParaStyle : public TRtfStyle
{
	typedef TRtfStyle inherited;
	
protected:
	TRtfCHP* FCHPX;
	TRtfPAP* FPAPX;
	
public:
	__fastcall TRtfParaStyle(TAXWReadRTF* AReader, int AId);
	__fastcall virtual ~TRtfParaStyle();
	virtual void __fastcall ApplyKeyword(TRtfIPROP iprop, int val);
	virtual void __fastcall Save(System::UnicodeString AName);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRtfDestStylesheet : public TRtfDestination
{
	typedef TRtfDestination inherited;
	
protected:
	TRtfStyle* FCurrStyle;
	
public:
	virtual void __fastcall ApplyKeyword(TRtfIPROP iprop, int val);
	virtual void __fastcall BeginGroup();
	virtual void __fastcall EndGroup();
public:
	/* TRtfDestination.Create */ inline __fastcall TRtfDestStylesheet(TAXWReadRTF* AReader, TRtfIDEST AType)/* overload */ : TRtfDestination(AReader, AType) { }
	/* TRtfDestination.Create */ inline __fastcall TRtfDestStylesheet(TAXWReadRTF* AReader, TRtfIDEST AType, TRtfDestination* AParentDest)/* overload */ : TRtfDestination(AReader, AType, AParentDest) { }
	/* TRtfDestination.Destroy */ inline __fastcall virtual ~TRtfDestStylesheet() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRtfTableStyle : public TRtfStyle
{
	typedef TRtfStyle inherited;
	
public:
	virtual void __fastcall ApplyKeyword(TRtfIPROP iprop, int val);
	virtual void __fastcall Save(System::UnicodeString AName);
public:
	/* TRtfStyle.Create */ inline __fastcall TRtfTableStyle(TAXWReadRTF* AReader, int AId) : TRtfStyle(AReader, AId) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRtfTableStyle() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRtfSectStyle : public TRtfStyle
{
	typedef TRtfStyle inherited;
	
public:
	virtual void __fastcall ApplyKeyword(TRtfIPROP iprop, int val);
	virtual void __fastcall Save(System::UnicodeString AName);
public:
	/* TRtfStyle.Create */ inline __fastcall TRtfSectStyle(TAXWReadRTF* AReader, int AId) : TRtfStyle(AReader, AId) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRtfSectStyle() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRtfDestField : public TRtfDestination
{
	typedef TRtfDestination inherited;
	
protected:
	bool FInstrDone;
	
public:
	virtual bool __fastcall HasDocText();
	virtual void __fastcall ChangeType(TRtfIDEST ANewType);
	virtual void __fastcall EndDest();
	virtual void __fastcall ParseChar(TRtfRIS &ARIS, char AChar);
	virtual void __fastcall ApplyKeyword(TRtfIPROP iprop, int val);
public:
	/* TRtfDestination.Create */ inline __fastcall TRtfDestField(TAXWReadRTF* AReader, TRtfIDEST AType)/* overload */ : TRtfDestination(AReader, AType) { }
	/* TRtfDestination.Create */ inline __fastcall TRtfDestField(TAXWReadRTF* AReader, TRtfIDEST AType, TRtfDestination* AParentDest)/* overload */ : TRtfDestination(AReader, AType, AParentDest) { }
	/* TRtfDestination.Destroy */ inline __fastcall virtual ~TRtfDestField() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRtfDestComment : public TRtfDestination
{
	typedef TRtfDestination inherited;
	
protected:
	System::Classes::TStrings* FComments;
	System::UnicodeString FRef;
	
public:
	__fastcall TRtfDestComment(TAXWReadRTF* AReader, TRtfIDEST AType, System::Classes::TStrings* AComments);
	virtual void __fastcall ApplyKeyword(TRtfIPROP iprop, int val);
	virtual void __fastcall EndDest();
	virtual void __fastcall ChildEndDest(TRtfDestination* AChild);
public:
	/* TRtfDestination.Destroy */ inline __fastcall virtual ~TRtfDestComment() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRtfDestStringParam : public TRtfDestination
{
	typedef TRtfDestination inherited;
	
public:
	virtual void __fastcall EndDest();
public:
	/* TRtfDestination.Create */ inline __fastcall TRtfDestStringParam(TAXWReadRTF* AReader, TRtfIDEST AType)/* overload */ : TRtfDestination(AReader, AType) { }
	/* TRtfDestination.Create */ inline __fastcall TRtfDestStringParam(TAXWReadRTF* AReader, TRtfIDEST AType, TRtfDestination* AParentDest)/* overload */ : TRtfDestination(AReader, AType, AParentDest) { }
	/* TRtfDestination.Destroy */ inline __fastcall virtual ~TRtfDestStringParam() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TRtfDestPict : public TRtfDestStream
{
	typedef TRtfDestStream inherited;
	
protected:
	Xlsaxweditor::TAXWPictureType FPictType;
	int FExData;
	int FWidth;
	int FHeight;
	double FGoalWidth;
	double FGoalHeight;
	double FScaleX;
	double FScaleY;
	int FCropLeft;
	int FCropTop;
	int FCropRight;
	int FCropBottom;
	int FTag;
	
public:
	__fastcall TRtfDestPict(TAXWReadRTF* AReader, TRtfIDEST AType);
	__fastcall virtual ~TRtfDestPict();
	virtual void __fastcall EndGroup();
	virtual void __fastcall ApplyKeyword(TRtfIPROP iprop, int val);
	virtual void __fastcall EndDest();
	void __fastcall Clear();
	__property Xlsaxweditor::TAXWPictureType PictType = {read=FPictType, write=FPictType, nodefault};
	__property int ExData = {read=FExData, write=FExData, nodefault};
	__property int Width = {read=FWidth, write=FWidth, nodefault};
	__property int Height = {read=FHeight, write=FHeight, nodefault};
	__property double GoalWidth = {read=FGoalWidth, write=FGoalWidth};
	__property double GoalHeight = {read=FGoalHeight, write=FGoalHeight};
	__property double ScaleX = {read=FScaleX, write=FScaleX};
	__property double ScaleY = {read=FScaleY, write=FScaleY};
	__property int CropLeft = {read=FCropLeft, write=FCropLeft, nodefault};
	__property int CropTop = {read=FCropTop, write=FCropTop, nodefault};
	__property int CropRight = {read=FCropRight, write=FCropRight, nodefault};
	__property int CropBottom = {read=FCropBottom, write=FCropBottom, nodefault};
	__property int Tag = {read=FTag, write=FTag, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TRTFStackItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TRTFStack* FOwner;
	TRtfRDS FRDS;
	TRtfRIS FRIS;
	TRtfCHP* FCHP;
	TRtfPAP* FPAP;
	TRtfSEP FSEP;
	TRtfDOP FDOP;
	TRtfDestination* FDest;
	
public:
	__fastcall TRTFStackItem(TRTFStack* AOwner, TRtfRDS RDS, TRtfRIS RIS, TRtfCHP* CHP, TRtfPAP* PAP, const TRtfSEP &SEP, const TRtfDOP &DOP);
	__fastcall virtual ~TRTFStackItem();
	__property TRtfRDS RDS = {read=FRDS, write=FRDS, nodefault};
	__property TRtfRIS RIS = {read=FRIS, write=FRIS, nodefault};
	__property TRtfCHP* CHP = {read=FCHP, write=FCHP};
	__property TRtfPAP* PAP = {read=FPAP, write=FPAP};
	__property TRtfSEP SEP = {read=FSEP, write=FSEP};
	__property TRtfDOP DOP = {read=FDOP, write=FDOP};
	__property TRtfDestination* Dest = {read=FDest, write=FDest};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRTFStack : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TRTFStackItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TAXWReadRTF* FOwner;
	TRtfDestination* FCurrDest;
	TRTFStackItem* __fastcall GetItems(int Index);
	TRtfDestination* __fastcall FindDest();
	
public:
	__fastcall TRTFStack(TAXWReadRTF* AOwner);
	void __fastcall Push(TRtfRDS RDS, TRtfRIS RIS, TRtfCHP* CHP, TRtfPAP* PAP, const TRtfSEP &SEP, const TRtfDOP &DOP);
	void __fastcall Pop(TRtfRDS &RDS, TRtfRIS &RIS, Xlsaxweditor::TAXWCHP* CHP, TRtfPAP* PAP, TRtfSEP &SEP, TRtfDOP &DOP, TRtfDestination* &ADest);
	void __fastcall SetTOSDest(TRtfDestination* ADest);
	TRTFStackItem* __fastcall Peek();
	TRTFStackItem* __fastcall PeekL2();
	TRtfIDEST __fastcall PeekDestTypeL2();
	TRtfDestination* __fastcall CurrDest();
	__property TRTFStackItem* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TRTFStack() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TRtfTableStackItem : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xlsaxweditor::TAXWTableCell* FCell;
	Xlsaxweditor::TAXWIntegerList* FCellX;
	Xlsaxweditor::TAXWIntegerList* FCellColor;
	Xlsaxweditor::TAXWDocPropBordersList* FBorders;
	double FRowHeight;
	
public:
	__fastcall TRtfTableStackItem();
	__fastcall virtual ~TRtfTableStackItem();
	void __fastcall Clear();
	void __fastcall Assign(TRtfTableStackItem* AItem);
	__property Xlsaxweditor::TAXWTableCell* Cell = {read=FCell, write=FCell};
	__property Xlsaxweditor::TAXWIntegerList* CellX = {read=FCellX};
	__property Xlsaxweditor::TAXWDocPropBordersList* Borders = {read=FBorders};
	__property Xlsaxweditor::TAXWIntegerList* CellColor = {read=FCellColor};
	__property double RowHeight = {read=FRowHeight, write=FRowHeight};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TRtfTableStack : public System::Contnrs::TObjectStack
{
	typedef System::Contnrs::TObjectStack inherited;
	
protected:
	TRtfDestColorTable* FColorTable;
	TRtfTableStackItem* FCurrItem;
	
public:
	__fastcall TRtfTableStack(TRtfDestColorTable* AColorTable);
	__fastcall virtual ~TRtfTableStack();
	void __fastcall Clear();
	void __fastcall ClearRow();
	void __fastcall ApplyOnRow(Xlsaxweditor::TAXWTableRow* ARow);
	HIDESBASE void __fastcall Push(Xlsaxweditor::TAXWTableCell* ACell);
	HIDESBASE void __fastcall Pop(Xlsaxweditor::TAXWTable* &ATable, Xlsaxweditor::TAXWTableRow* &ARow, Xlsaxweditor::TAXWTableCell* &ACell);
	HIDESBASE TRtfTableStackItem* __fastcall Peek();
	__property TRtfTableStackItem* CurrItem = {read=FCurrItem};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWReadRTF : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TRTFStack* FStack;
	TRtfTableStack* FTableStack;
	int cGroup;
	bool fSkipDestIfUnk;
	int cbBin;
	int lParam;
	TRtfRDS FRDS;
	TRtfRIS FRIS;
	TRtfCHP* FCHP;
	TRtfPAP* FPAP;
	TRtfSEP FSEP;
	TRtfDOP FDOP;
	System::UnicodeString FText;
	System::UnicodeString FExText;
	Xlsaxweditor::TAXWCharRunType FCharRunType;
	TRtfDestFontTable* FFontTable;
	TRtfDestColorTable* FColorTable;
	System::Inifiles::THashedStringList* FSymbols;
	Xlsaxweditor::TAXWLogDocEditor* FDoc;
	Xlsaxweditor::TAXWTabStopLeader FTabLeader;
	Xlsaxweditor::TAXWTabStopAlignment FTabAlignment;
	System::Inifiles::THashedStringList* FBookmarks;
	System::Inifiles::THashedStringList* FComments;
	System::Inifiles::THashedStringList* FStyles;
	Xlsaxweditor::TAXWLogPara* FCurrPara;
	System::Classes::TMemoryStream* FCurrStream;
	Xlsaxweditor::TAXWDocPropBorder* FCurrBorder;
	Xlsaxweditor::TAXWTableCell* FCurrCell;
	Xlsaxweditor::TAXWTableRow* FCurrRow;
	Xlsaxweditor::TAXWTable* FCurrTable;
	Xlsaxweditor::TAXWHyperlink* FCurrHyperlink;
	bool FInheritPara;
	System::WideChar FLastUnicodeChar;
	System::UnicodeString FGenerator;
	int __fastcall ecRtfParse(System::Classes::TStream* fp);
	void __fastcall ecPushRtfState();
	int __fastcall ecPopRtfState();
	int __fastcall ecParseRtfKeyword(System::Classes::TStream* fp);
	int __fastcall ecParseChar(char ch);
	int __fastcall ecTranslateKeyword(System::AnsiString szKeyword, int param, bool fParam, System::Classes::TStream* fp);
	void __fastcall ecPrintChar(System::WideChar ch);
	int __fastcall ecEndGroupAction();
	int __fastcall ecApplyPropChange(TRtfIPROP IPROP, int val);
	int __fastcall ecChangeDest(TRtfIDEST IDEST, int Param);
	int __fastcall ecParseSpecialKeyword(TRtfIPFN IPFN);
	Xlsaxweditor::TAXWLogPara* __fastcall GetPara();
	void __fastcall AddText();
	void __fastcall AddTable(Xlsaxweditor::TAXWLogParas* AParas);
	void __fastcall CheckCell();
	void __fastcall CheckTable();
	
public:
	__fastcall TAXWReadRTF(Xlsaxweditor::TAXWLogDocEditor* AEditor);
	__fastcall virtual ~TAXWReadRTF();
	void __fastcall LoadFromFile(const System::UnicodeString Filename)/* overload */;
	void __fastcall LoadFromStream(System::Classes::TStream* Stream)/* overload */;
	__property System::UnicodeString Generator = {read=FGenerator};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 ecOK = System::Int8(0x0);
static const System::Int8 ecStackUnderflow = System::Int8(0x1);
static const System::Int8 ecStackOverflow = System::Int8(0x2);
static const System::Int8 ecUnmatchedBrace = System::Int8(0x3);
static const System::Int8 ecInvalidHex = System::Int8(0x4);
static const System::Int8 ecBadTable = System::Int8(0x5);
static const System::Int8 ecAssertion = System::Int8(0x6);
static const System::Int8 ecEndOfFile = System::Int8(0x7);
}	/* namespace Xlsreadrtf */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSREADRTF)
using namespace Xlsreadrtf;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XlsreadrtfHPP
