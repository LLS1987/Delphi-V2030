// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSRTFReadWrite5.pas' rev: 35.00 (Windows)

#ifndef Xlsrtfreadwrite5HPP
#define Xlsrtfreadwrite5HPP

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
#include <System.StrUtils.hpp>
#include <System.UITypes.hpp>
#include <XLSUtils5.hpp>
#include <XLSTools5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsrtfreadwrite5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIndexFont;
class DELPHICLASS TIndexFontList;
struct TCHP;
struct TPAP;
struct TSEP;
struct TDOP;
struct TSAVE;
struct TPROP;
class DELPHICLASS TRtfFont;
class DELPHICLASS TRtfFonts;
class DELPHICLASS TRTFStackItem;
class DELPHICLASS TRTFStack;
class DELPHICLASS TRTFReader;
class DELPHICLASS TXLSRTFWriter;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TIndexFont : public Vcl::Graphics::TFont
{
	typedef Vcl::Graphics::TFont inherited;
	
private:
	int FIndex;
	
public:
	bool __fastcall Equal(TIndexFont* F);
	System::UnicodeString __fastcall AsRTF();
	__property int Index = {read=FIndex, write=FIndex, nodefault};
public:
	/* TFont.Create */ inline __fastcall TIndexFont() : Vcl::Graphics::TFont() { }
	/* TFont.Destroy */ inline __fastcall virtual ~TIndexFont() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIndexFontList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TIndexFont* operator[](int Index) { return this->Items[Index]; }
	
private:
	TIndexFont* __fastcall GetItems(int Index);
	
public:
	TIndexFont* __fastcall AddFont();
	__property TIndexFont* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TObjectList.Create */ inline __fastcall TIndexFontList()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TIndexFontList(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TIndexFontList() { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TCHP
{
public:
	System::Byte fBold;
	System::Byte fUnderline;
	System::Byte fItalic;
	int FontSize;
	System::Uitypes::TColor FontColor;
	System::UnicodeString FontName;
};


enum DECLSPEC_DENUM TJust : unsigned char { justL, justR, justC, justF };

struct DECLSPEC_DRECORD TPAP
{
public:
	int xaLeft;
	int xaRight;
	int xaFirst;
	TJust JUST;
};


enum DECLSPEC_DENUM TSBK : unsigned char { sbkNon, sbkCol, sbkEvn, sbkOdd, sbkPg };

enum DECLSPEC_DENUM TPGN : unsigned char { pgDec, pgURom, pgLRom, pgULtr, pgLLtr };

struct DECLSPEC_DRECORD TSEP
{
public:
	int cCols;
	TSBK SBK;
	int xaPgn;
	int yaPgn;
	TPGN pgnFormat;
};


struct DECLSPEC_DRECORD TDOP
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


enum DECLSPEC_DENUM TRDS : unsigned char { rdsNorm, rdsSkip, rdsFontTbl, rdsFont };

enum DECLSPEC_DENUM TRIS : unsigned char { risNorm, risBin, risHex, risColorTbl };

typedef TSAVE *PSAVE;

struct DECLSPEC_DRECORD TSAVE
{
public:
	TSAVE *pNext;
	TCHP CHP;
	TPAP PAP;
	TSEP SEP;
	TDOP DOP;
	TRDS RDS;
	TRIS RIS;
};


enum DECLSPEC_DENUM TIPROP : unsigned char { ipropBold, ipropItalic, ipropUnderline, ipropFontSize, ipropLeftInd, ipropRightInd, ipropFirstInd, ipropCols, ipropPgnX, ipropPgnY, ipropXaPage, ipropYaPage, ipropXaLeft, ipropXaRight, ipropYaTop, ipropYaBottom, ipropPgnStart, ipropSbk, ipropPgnFormat, ipropFacingp, ipropLandscape, ipropJust, ipropPard, ipropPlain, ipropSectd, ipropMax };

enum DECLSPEC_DENUM TACTN : unsigned char { actnSpec, actnByte, actnWord };

enum DECLSPEC_DENUM TPROPTYPE : unsigned char { propChp, propPap, propSep, propDop };

struct DECLSPEC_DRECORD TPROP
{
public:
	TACTN ACTN;
	TPROPTYPE prop;
	System::Sysutils::TByteArray *PData;
};


enum DECLSPEC_DENUM TIPFN : unsigned char { ipfnBin, ipfnHex, ipfnSkipDest };

enum DECLSPEC_DENUM TIDEST : unsigned char { idestPict, idestSkip, idestFont, idestFontTbl, idestColorTbl, idestFontColor, idestCharSet };

enum DECLSPEC_DENUM TKWD : unsigned char { kwdChar, kwdUnicode, kwdUnicodeGroup, kwdDest, kwdProp, kwdSpec };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRtfFont : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FId;
	int FCharSet;
	System::UnicodeString FName;
	
public:
	__fastcall TRtfFont(int Id);
	__property int Id = {read=FId, write=FId, nodefault};
	__property int CharSet = {read=FCharSet, write=FCharSet, nodefault};
	__property System::UnicodeString Name = {read=FName, write=FName};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRtfFont() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRtfFonts : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TRtfFont* operator[](int Id) { return this->Items[Id]; }
	
private:
	bool FSortDirty;
	void __fastcall DoSort();
	TRtfFont* __fastcall GetItems(int Id);
	TRtfFont* __fastcall GetItemByIndex(int Index);
	
public:
	HIDESBASE void __fastcall Add(int Id);
	HIDESBASE TRtfFont* __fastcall Last();
	__property TRtfFont* Items[int Id] = {read=GetItems/*, default*/};
	__property TRtfFont* ItemByIndex[int Index] = {read=GetItemByIndex};
public:
	/* TObjectList.Create */ inline __fastcall TRtfFonts()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TRtfFonts(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TRtfFonts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRTFStackItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TRDS FRDS;
	TRIS FRIS;
	TCHP FCHP;
	TPAP FPAP;
	TSEP FSEP;
	TDOP FDOP;
	
public:
	__fastcall TRTFStackItem(TRDS RDS, TRIS RIS, const TCHP &CHP, const TPAP &PAP, const TSEP &SEP, const TDOP &DOP);
	__property TRDS RDS = {read=FRDS, write=FRDS, nodefault};
	__property TRIS RIS = {read=FRIS, write=FRIS, nodefault};
	__property TCHP CHP = {read=FCHP, write=FCHP};
	__property TPAP PAP = {read=FPAP, write=FPAP};
	__property TSEP SEP = {read=FSEP, write=FSEP};
	__property TDOP DOP = {read=FDOP, write=FDOP};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRTFStackItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRTFStack : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TRTFStackItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TRTFStackItem* __fastcall GetItems(int Index);
	
public:
	void __fastcall Push(TRDS RDS, TRIS RIS, const TCHP &CHP, const TPAP &PAP, const TSEP &SEP, const TDOP &DOP);
	void __fastcall Pop(TRDS &RDS, TRIS &RIS, TCHP &CHP, TPAP &PAP, TSEP &SEP, TDOP &DOP);
	__property TRTFStackItem* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TObjectList.Create */ inline __fastcall TRTFStack()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TRTFStack(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TRTFStack() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRTFReader : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TPROP> _TRTFReader__1;
	
	typedef System::DynamicArray<System::Uitypes::TColor> _TRTFReader__2;
	
	
private:
	_TRTFReader__1 FrgProp;
	TRTFStack* FStack;
	int cGroup;
	bool fSkipDestIfUnk;
	int cbBin;
	int lParam;
	TRDS FRDS;
	TRIS FRIS;
	TCHP FCHP;
	TPAP FPAP;
	TSEP FSEP;
	TDOP FDOP;
	bool FInUnicodeGroup;
	bool FOutputText;
	bool FIncludeAllText;
	System::UnicodeString FText;
	int FCurrTextPos;
	int FLastTextPos;
	System::UnicodeString FStringParam;
	TRtfFonts* FFonts;
	TIndexFont* FCurrFont;
	TIndexFontList* FFontRuns;
	_TRTFReader__2 FColorTable;
	int __fastcall ecRtfParse(System::Classes::TStream* fp);
	void __fastcall ecPushRtfState();
	int __fastcall ecPopRtfState();
	int __fastcall ecParseRtfKeyword(System::Classes::TStream* fp);
	int __fastcall ecParseChar(System::WideChar ch);
	int __fastcall ecTranslateKeyword(System::AnsiString szKeyword, int param, bool fParam);
	void __fastcall ecPrintChar(System::WideChar ch);
	int __fastcall ecEndGroupAction(TRDS RDS);
	int __fastcall ecApplyPropChange(TIPROP IPROP, int val);
	int __fastcall ecChangeDest(TIDEST IDEST);
	int __fastcall ecParseSpecialKeyword(TIPFN IPFN);
	int __fastcall ecParseSpecialProperty(TIPROP IPROP, int val);
	int __fastcall ecReadColorTbl(System::Classes::TStream* fp);
	void __fastcall FontChanged();
	
public:
	__fastcall TRTFReader();
	__fastcall virtual ~TRTFReader();
	void __fastcall LoadFromFile(System::UnicodeString Filename);
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	__property System::UnicodeString Text = {read=FText};
	__property TIndexFontList* FontRuns = {read=FFontRuns};
	__property bool IncludeAllText = {read=FIncludeAllText, write=FIncludeAllText, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSRTFWriter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FRTF;
	Xlstools5::TXLSFormattedText* FText;
	void __fastcall BeginHeader();
	void __fastcall WriteFontTable();
	void __fastcall WriteColorTable();
	void __fastcall EndHeader();
	void __fastcall BeginInfo();
	void __fastcall WriteDocText();
	void __fastcall EndInfo();
	System::UnicodeString __fastcall EncodeText(System::UnicodeString S);
	System::UnicodeString __fastcall GetRTF();
	void __fastcall MakeRTF();
	
public:
	__fastcall TXLSRTFWriter(Xlstools5::TXLSFormattedText* AText);
	__fastcall virtual ~TXLSRTFWriter();
	void __fastcall SaveToFile(System::UnicodeString Filename);
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	__property System::UnicodeString RTF = {read=GetRTF};
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
}	/* namespace Xlsrtfreadwrite5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSRTFREADWRITE5)
using namespace Xlsrtfreadwrite5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsrtfreadwrite5HPP
