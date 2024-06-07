// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSSynPdf.pas' rev: 35.00 (Windows)

#ifndef XlssynpdfHPP
#define XlssynpdfHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.WinSpool.hpp>
#include <System.SysConst.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Types.hpp>
#include <System.AnsiStrings.hpp>
#include <Vcl.Graphics.hpp>
#include <XLSSynCommons.hpp>
#include <XLSSynLZ.hpp>
#include <System.ZLib.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlssynpdf
{
//-- forward type declarations -----------------------------------------------
struct TCmapHeader;
struct TCmapHHEA;
struct TCmapHEAD;
struct TCmapFmt4;
class DELPHICLASS EPdfInvalidValue;
class DELPHICLASS EPdfInvalidOperation;
struct TPdfRect;
struct TPdfBox;
class DELPHICLASS TPdfWrite;
class DELPHICLASS TPdfObjectMgr;
class DELPHICLASS TPdfObject;
class DELPHICLASS TPdfVirtualObject;
class DELPHICLASS TPdfBoolean;
class DELPHICLASS TPdfNull;
class DELPHICLASS TPdfNumber;
class DELPHICLASS TPdfReal;
class DELPHICLASS TPdfText;
class DELPHICLASS TPdfTextUTF8;
class DELPHICLASS TPdfTextString;
class DELPHICLASS TPdfRawText;
class DELPHICLASS TPdfClearText;
class DELPHICLASS TPdfName;
class DELPHICLASS TPdfArray;
class DELPHICLASS TPdfDictionaryElement;
class DELPHICLASS TPdfDictionary;
class DELPHICLASS TPdfStream;
class DELPHICLASS TPdfBinary;
class DELPHICLASS TPdfTrailer;
class DELPHICLASS TPdfXrefEntry;
class DELPHICLASS TPdfXref;
class DELPHICLASS TPdfXObject;
class DELPHICLASS TPdfOutlines;
class DELPHICLASS TPdfOptionalContentGroup;
class DELPHICLASS TPdfDocument;
class DELPHICLASS TPdfPage;
class DELPHICLASS TPdfCanvas;
class DELPHICLASS TPdfDictionaryWrapper;
class DELPHICLASS TPdfInfo;
class DELPHICLASS TPdfCatalog;
class DELPHICLASS TPdfFont;
class DELPHICLASS TPdfFontWinAnsi;
class DELPHICLASS TPdfFontType1;
class DELPHICLASS TPdfFontCIDFontType2;
class DELPHICLASS TPdfTTF;
class DELPHICLASS TPdfFontTrueType;
class DELPHICLASS TPdfDestination;
class DELPHICLASS TPdfOutlineEntry;
class DELPHICLASS TPdfOutlineRoot;
class DELPHICLASS TPdfPageGDI;
class DELPHICLASS TPdfDocumentGDI;
class DELPHICLASS TPdfImage;
class DELPHICLASS TPdfForm;
class DELPHICLASS TPdfFormWithCanvas;
class DELPHICLASS TPdfObjectStream;
struct TScriptState;
struct TScriptAnalysis;
struct TScriptItem;
struct TScriptProperties;
struct TScriptVisAttr;
struct TScriptControl;
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<short, 256> TSmallIntArray;

typedef TSmallIntArray *PSmallIntArray;

typedef System::StaticArray<System::Types::TPoint, 65536> TPointArray;

typedef TPointArray *PPointArray;

typedef System::StaticArray<System::Types::TSmallPoint, 65536> TSmallPointArray;

typedef TSmallPointArray *PSmallPointArray;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCmapHeader
{
public:
	System::Word version;
	System::Word numberSubtables;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD Xlssynpdf__1
{
public:
	System::Word platformID;
	System::Word platformSpecificID;
	unsigned offset;
};
#pragma pack(pop)


typedef System::StaticArray<Xlssynpdf__1, 256> TCmapSubTableArray;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCmapHHEA
{
public:
	int version;
	System::Word ascent;
	System::Word descent;
	System::Word lineGap;
	System::Word advanceWidthMax;
	System::Word minLeftSideBearing;
	System::Word minRightSideBearing;
	System::Word xMaxExtent;
	short caretSlopeRise;
	short caretSlopeRun;
	short caretOffset;
	__int64 reserved;
	short metricDataFormat;
	System::Word numOfLongHorMetrics;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TCmapHEAD
{
public:
	int version;
	int fontRevision;
	unsigned checkSumAdjustment;
	unsigned magicNumber;
	System::Word flags;
	System::Word unitsPerEm;
	__int64 createdDate;
	__int64 modifiedDate;
	short xMin;
	short yMin;
	short xMax;
	short yMax;
	System::Word macStyle;
	System::Word lowestRec;
	short fontDirection;
	short indexToLocFormat;
	short glyphDataFormat;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TCmapFmt4
{
public:
	System::Word format;
	System::Word length;
	System::Word language;
	System::Word segCountX2;
	System::Word searchRange;
	System::Word entrySelector;
	System::Word rangeShift;
};
#pragma pack(pop)


typedef System::AnsiString PDFString;

typedef System::AnsiString TPdfDate;

enum DECLSPEC_DENUM TPdfFileFormat : unsigned char { pdf13, pdf14, pdf15, pdf16 };

#pragma pack(push,4)
class PASCALIMPLEMENTATION EPdfInvalidValue : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPdfInvalidValue(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPdfInvalidValue(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPdfInvalidValue(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPdfInvalidValue(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPdfInvalidValue(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPdfInvalidValue(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPdfInvalidValue(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPdfInvalidValue(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPdfInvalidValue(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPdfInvalidValue(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPdfInvalidValue(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPdfInvalidValue(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPdfInvalidValue() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EPdfInvalidOperation : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPdfInvalidOperation(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPdfInvalidOperation(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPdfInvalidOperation(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPdfInvalidOperation(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPdfInvalidOperation(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPdfInvalidOperation(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPdfInvalidOperation(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPdfInvalidOperation(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPdfInvalidOperation(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPdfInvalidOperation(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPdfInvalidOperation(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPdfInvalidOperation(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPdfInvalidOperation() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TPdfPageMode : unsigned char { pmUseNone, pmUseOutlines, pmUseThumbs, pmFullScreen };

enum DECLSPEC_DENUM TLineCapStyle : unsigned char { lcButt_End, lcRound_End, lcProjectingSquareEnd };

enum DECLSPEC_DENUM TLineJoinStyle : unsigned char { ljMiterJoin, ljRoundJoin, ljBevelJoin };

enum DECLSPEC_DENUM TTextRenderingMode : unsigned char { trFill, trStroke, trFillThenStroke, trInvisible, trFillClipping, trStrokeClipping, trFillStrokeClipping, trClipping };

enum DECLSPEC_DENUM TPdfAnnotationSubType : unsigned char { asTextNotes, asLink };

enum DECLSPEC_DENUM TPdfDestinationType : unsigned char { dtXYZ, dtFit, dtFitH, dtFitV, dtFitR, dtFitB, dtFitBH, dtFitBV };

enum DECLSPEC_DENUM TPdfPageLayout : unsigned char { plSinglePage, plOneColumn, plTwoColumnLeft, plTwoColumnRight };

enum DECLSPEC_DENUM TPdfViewerPreference : unsigned char { vpHideToolbar, vpHideMenubar, vpHideWindowUI, vpFitWindow, vpCenterWindow, vpEnforcePrintScaling };

typedef System::Set<TPdfViewerPreference, TPdfViewerPreference::vpHideToolbar, TPdfViewerPreference::vpEnforcePrintScaling> TPdfViewerPreferences;

enum DECLSPEC_DENUM TPDFPaperSize : unsigned char { psA4, psA5, psA3, psLetter, psLegal, psUserDefined };

enum DECLSPEC_DENUM TPdfCompressionMethod : unsigned char { cmNone, cmFlateDecode };

typedef int TPdfColor;

typedef int TXObjectID;

enum DECLSPEC_DENUM TPdfAlignment : unsigned char { paLeftJustify, paRightJustify, paCenter };

enum DECLSPEC_DENUM TGradientDirection : unsigned char { gdHorizontal, gdVertical };

struct DECLSPEC_DRECORD TPdfRect
{
public:
	float Left;
	float Top;
	float Right;
	float Bottom;
};


typedef TPdfRect *PPdfRect;

struct DECLSPEC_DRECORD TPdfBox
{
public:
	float Left;
	float Top;
	float Width;
	float Height;
};


typedef TPdfBox *PPdfBox;

enum DECLSPEC_DENUM TPdfObjectType : unsigned char { otDirectObject, otIndirectObject, otVirtualObject };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfWrite : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	enum DECLSPEC_DENUM _TPdfWrite__1 : unsigned char { fNone, fMain, fFallBack };
	
	
protected:
	char *B;
	char *BEnd;
	char *BEnd4;
	System::Classes::TStream* fDestStream;
	int fDestStreamPosition;
	int fCodePage;
	_TPdfWrite__1 fAddGlyphFont;
	TPdfDocument* fDoc;
	System::StaticArray<char, 512> Tmp;
	System::WideChar * __fastcall ToWideChar(const System::AnsiString Ansi, /* out */ int &DLen);
	bool __fastcall AddUnicodeHexTextUniScribe(System::WideChar * PW, TPdfFontTrueType* WinAnsiTTF, bool NextLine, TPdfCanvas* Canvas);
	void __fastcall AddUnicodeHexTextNoUniScribe(System::WideChar * PW, TPdfFontTrueType* TTF, bool NextLine, TPdfCanvas* Canvas);
	void __fastcall AddGlyphFromChar(System::WideChar Char, TPdfCanvas* Canvas, TPdfFontTrueType* TTF, System::PBoolean NextLine);
	void __fastcall AddGlyphFlush(TPdfCanvas* Canvas, TPdfFontTrueType* TTF, System::PBoolean NextLine);
	
public:
	__fastcall TPdfWrite(TPdfDocument* Destination, System::Classes::TStream* DestStream);
	TPdfWrite* __fastcall Add(char c)/* overload */;
	TPdfWrite* __fastcall Add(int Value)/* overload */;
	TPdfWrite* __fastcall AddWithSpace(int Value)/* overload */;
	TPdfWrite* __fastcall Add(int Value, int DigitCount)/* overload */;
	TPdfWrite* __fastcall Add(System::Extended Value)/* overload */;
	TPdfWrite* __fastcall AddWithSpace(System::Extended Value)/* overload */;
	TPdfWrite* __fastcall AddWithSpace(System::Extended Value, unsigned Decimals)/* overload */;
	TPdfWrite* __fastcall Add(char * Text, int Len)/* overload */;
	TPdfWrite* __fastcall Add(const System::RawByteString Text)/* overload */;
	TPdfWrite* __fastcall AddHex(const System::AnsiString Bin);
	TPdfWrite* __fastcall AddHex4(unsigned aWordValue);
	TPdfWrite* __fastcall AddToUnicodeHex(const System::AnsiString Text);
	TPdfWrite* __fastcall AddUnicodeHex(System::WideChar * PW, int WideCharCount);
	TPdfWrite* __fastcall AddToUnicodeHexText(const System::AnsiString Text, bool NextLine, TPdfCanvas* Canvas);
	TPdfWrite* __fastcall AddUnicodeHexText(System::WideChar * PW, bool NextLine, TPdfCanvas* Canvas);
	TPdfWrite* __fastcall AddGlyphs(PWORD Glyphs, int GlyphsCount, TPdfCanvas* Canvas, void * AVisAttrsPtr = (void *)(0x0));
	TPdfWrite* __fastcall AddEscapeContent(const System::RawByteString Text);
	TPdfWrite* __fastcall AddEscape(char * Text, int TextLen);
	TPdfWrite* __fastcall AddEscapeText(char * Text, TPdfFont* Font);
	TPdfWrite* __fastcall AddEscapeName(char * Text);
	TPdfWrite* __fastcall AddColorStr(unsigned Color);
	void __fastcall AddRGB(char * P, int PInc, int Count);
	TPdfWrite* __fastcall AddIso8601(System::TDateTime DateTime);
	TPdfWrite* __fastcall AddIntegerBin(int value, unsigned bytesize);
	void __fastcall Save();
	int __fastcall Position();
	System::AnsiString __fastcall ToPDFString();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfWrite() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfObjectMgr : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual void __fastcall AddObject(TPdfObject* AObject) = 0 ;
	virtual TPdfObject* __fastcall GetObject(int ObjectID) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TPdfObjectMgr() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfObjectMgr() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfObject : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TPdfObjectType FObjectType;
	int FObjectNumber;
	int FGenerationNumber;
	bool FSaveAtTheEnd;
	
protected:
	virtual void __fastcall InternalWriteTo(TPdfWrite* W);
	void __fastcall SetObjectNumber(int Value);
	virtual bool __fastcall SpaceNotNeeded();
	
public:
	__fastcall virtual TPdfObject();
	void __fastcall WriteTo(TPdfWrite* &W);
	void __fastcall WriteValueTo(TPdfWrite* &W);
	void __fastcall ForceSaveNow();
	__property int ObjectNumber = {read=FObjectNumber, write=SetObjectNumber, nodefault};
	__property int GenerationNumber = {read=FGenerationNumber, nodefault};
	__property TPdfObjectType ObjectType = {read=FObjectType, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfVirtualObject : public TPdfObject
{
	typedef TPdfObject inherited;
	
public:
	__fastcall TPdfVirtualObject(int AObjectId);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfVirtualObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfBoolean : public TPdfObject
{
	typedef TPdfObject inherited;
	
private:
	bool FValue;
	
protected:
	virtual void __fastcall InternalWriteTo(TPdfWrite* W);
	
public:
	__fastcall TPdfBoolean(bool AValue);
	__property bool Value = {read=FValue, write=FValue, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfBoolean() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfNull : public TPdfObject
{
	typedef TPdfObject inherited;
	
protected:
	virtual void __fastcall InternalWriteTo(TPdfWrite* W);
public:
	/* TPdfObject.Create */ inline __fastcall virtual TPdfNull() : TPdfObject() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfNull() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfNumber : public TPdfObject
{
	typedef TPdfObject inherited;
	
private:
	int FValue;
	
protected:
	virtual void __fastcall InternalWriteTo(TPdfWrite* W);
	
public:
	__fastcall TPdfNumber(int AValue);
	__property int Value = {read=FValue, write=FValue, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfNumber() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TPdfReal : public TPdfObject
{
	typedef TPdfObject inherited;
	
private:
	double FValue;
	
protected:
	virtual void __fastcall InternalWriteTo(TPdfWrite* W);
	
public:
	__fastcall TPdfReal(double AValue);
	__property double Value = {read=FValue, write=FValue};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfReal() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfText : public TPdfObject
{
	typedef TPdfObject inherited;
	
private:
	System::RawByteString FValue;
	
protected:
	virtual void __fastcall InternalWriteTo(TPdfWrite* W);
	virtual bool __fastcall SpaceNotNeeded();
	
public:
	__fastcall TPdfText(const System::RawByteString AValue);
	__property System::RawByteString Value = {read=FValue, write=FValue};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfText() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfTextUTF8 : public TPdfObject
{
	typedef TPdfObject inherited;
	
private:
	Xlssyncommons::RawUTF8 FValue;
	
protected:
	virtual void __fastcall InternalWriteTo(TPdfWrite* W);
	virtual bool __fastcall SpaceNotNeeded();
	
public:
	__fastcall TPdfTextUTF8(const Xlssyncommons::RawUTF8 AValue);
	__property Xlssyncommons::RawUTF8 Value = {read=FValue, write=FValue};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfTextUTF8() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfTextString : public TPdfTextUTF8
{
	typedef TPdfTextUTF8 inherited;
	
private:
	System::UnicodeString __fastcall GetValue();
	void __fastcall SetValue(const System::UnicodeString Value);
	
public:
	__fastcall TPdfTextString(const System::UnicodeString AValue);
	__property System::UnicodeString Value = {read=GetValue, write=SetValue};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfTextString() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfRawText : public TPdfText
{
	typedef TPdfText inherited;
	
protected:
	virtual bool __fastcall SpaceNotNeeded();
	virtual void __fastcall InternalWriteTo(TPdfWrite* W);
	
public:
	__fastcall TPdfRawText(char * Fmt, const int *Args, const int Args_High);
public:
	/* TPdfText.Create */ inline __fastcall TPdfRawText(const System::RawByteString AValue) : TPdfText(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfRawText() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfClearText : public TPdfText
{
	typedef TPdfText inherited;
	
protected:
	virtual void __fastcall InternalWriteTo(TPdfWrite* W);
	
public:
	__fastcall TPdfClearText(void * Buffer, int Len);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfClearText() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfName : public TPdfText
{
	typedef TPdfText inherited;
	
protected:
	virtual void __fastcall InternalWriteTo(TPdfWrite* W);
public:
	/* TPdfText.Create */ inline __fastcall TPdfName(const System::RawByteString AValue) : TPdfText(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfName() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfArray : public TPdfObject
{
	typedef TPdfObject inherited;
	
public:
	TPdfObject* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TList* FArray;
	TPdfObjectMgr* FObjectMgr;
	TPdfObject* __fastcall GetItems(int Index);
	int __fastcall GetItemCount();
	
protected:
	virtual void __fastcall InternalWriteTo(TPdfWrite* W);
	virtual bool __fastcall SpaceNotNeeded();
	
public:
	__fastcall TPdfArray(TPdfObjectMgr* AObjectMgr)/* overload */;
	__fastcall TPdfArray(TPdfObjectMgr* AObjectMgr, const int *AArray, const int AArray_High)/* overload */;
	__fastcall TPdfArray(TPdfObjectMgr* AObjectMgr, Xlssyncommons::PWordArray AArray, int AArrayCount)/* overload */;
	__fastcall TPdfArray(TPdfObjectMgr* AObjectMgr, const System::AnsiString *AArray, const int AArray_High)/* overload */;
	__fastcall TPdfArray(TPdfObjectMgr* AObjectMgr, const double *AArray, const int AArray_High)/* overload */;
	__fastcall virtual ~TPdfArray();
	int __fastcall AddItem(TPdfObject* AItem);
	void __fastcall InsertItem(int Index, TPdfObject* AItem);
	TPdfName* __fastcall FindName(const System::AnsiString AName);
	bool __fastcall RemoveName(const System::AnsiString AName);
	__property TPdfObject* Items[int Index] = {read=GetItems/*, default*/};
	__property int ItemCount = {read=GetItemCount, nodefault};
	__property TPdfObjectMgr* ObjectMgr = {read=FObjectMgr};
	__property System::Classes::TList* List = {read=FArray};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfDictionaryElement : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TPdfName* FKey;
	TPdfObject* FValue;
	bool FIsInternal;
	System::AnsiString __fastcall GetKey();
	
public:
	__fastcall TPdfDictionaryElement(const System::AnsiString AKey, TPdfObject* AValue, bool AInternal);
	__fastcall virtual ~TPdfDictionaryElement();
	__property System::AnsiString Key = {read=GetKey};
	__property TPdfObject* Value = {read=FValue};
	__property bool IsInternal = {read=FIsInternal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfDictionary : public TPdfObject
{
	typedef TPdfObject inherited;
	
public:
	TPdfDictionaryElement* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TList* FArray;
	TPdfObjectMgr* FObjectMgr;
	TPdfDictionaryElement* __fastcall GetItems(int Index);
	int __fastcall GetItemCount();
	
protected:
	System::AnsiString __fastcall getTypeOf();
	virtual bool __fastcall SpaceNotNeeded();
	void __fastcall DirectWriteto(TPdfWrite* W, TPdfDictionary* Secondary);
	virtual void __fastcall InternalWriteTo(TPdfWrite* W);
	
public:
	__fastcall TPdfDictionary(TPdfObjectMgr* AObjectMgr);
	__fastcall virtual ~TPdfDictionary();
	TPdfObject* __fastcall ValueByName(const System::AnsiString AKey);
	TPdfBoolean* __fastcall PdfBooleanByName(const System::AnsiString AKey);
	TPdfNumber* __fastcall PdfNumberByName(const System::AnsiString AKey);
	TPdfText* __fastcall PdfTextByName(const System::AnsiString AKey);
	System::AnsiString __fastcall PdfTextValueByName(const System::AnsiString AKey);
	Xlssyncommons::RawUTF8 __fastcall PdfTextUTF8ValueByName(const System::AnsiString AKey);
	System::UnicodeString __fastcall PdfTextStringValueByName(const System::AnsiString AKey);
	TPdfReal* __fastcall PdfRealByName(const System::AnsiString AKey);
	TPdfName* __fastcall PdfNameByName(const System::AnsiString AKey);
	TPdfDictionary* __fastcall PdfDictionaryByName(const System::AnsiString AKey);
	TPdfArray* __fastcall PdfArrayByName(const System::AnsiString AKey);
	void __fastcall AddItem(const System::AnsiString AKey, TPdfObject* AValue, bool AInternal = false)/* overload */;
	void __fastcall AddItem(const System::AnsiString AKey, const System::AnsiString AValue)/* overload */;
	void __fastcall AddItem(const System::AnsiString AKey, int AValue)/* overload */;
	void __fastcall AddItemText(const System::AnsiString AKey, const System::AnsiString AValue)/* overload */;
	void __fastcall AddItemTextUTF8(const System::AnsiString AKey, const Xlssyncommons::RawUTF8 AValue)/* overload */;
	void __fastcall AddItemTextString(const System::AnsiString AKey, const System::UnicodeString AValue)/* overload */;
	void __fastcall RemoveItem(const System::AnsiString AKey);
	__property TPdfDictionaryElement* Items[int Index] = {read=GetItems/*, default*/};
	__property int ItemCount = {read=GetItemCount, nodefault};
	__property TPdfObjectMgr* ObjectMgr = {read=FObjectMgr};
	__property System::AnsiString TypeOf = {read=getTypeOf};
	__property System::Classes::TList* List = {read=FArray};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfStream : public TPdfObject
{
	typedef TPdfObject inherited;
	
protected:
	TPdfDictionary* FAttributes;
	TPdfDictionary* FSecondaryAttributes;
	System::AnsiString FFilter;
	TPdfWrite* FWriter;
	virtual void __fastcall InternalWriteTo(TPdfWrite* W);
	
public:
	__fastcall TPdfStream(TPdfDocument* ADoc, bool DontAddToFXref);
	__fastcall virtual ~TPdfStream();
	__property TPdfDictionary* Attributes = {read=FAttributes};
	__property TPdfWrite* Writer = {read=FWriter};
	__property System::AnsiString Filter = {read=FFilter, write=FFilter};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfBinary : public TPdfObject
{
	typedef TPdfObject inherited;
	
protected:
	System::Classes::TMemoryStream* FStream;
	virtual void __fastcall InternalWriteTo(TPdfWrite* W);
	
public:
	__fastcall virtual TPdfBinary();
	__fastcall virtual ~TPdfBinary();
	__property System::Classes::TMemoryStream* Stream = {read=FStream};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfTrailer : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TPdfDictionary* FAttributes;
	int FXrefAddress;
	TPdfStream* FCrossReference;
	TPdfObjectStream* FObjectStream;
	TPdfXref* FXRef;
	
protected:
	void __fastcall WriteTo(TPdfWrite* &W);
	
public:
	__fastcall TPdfTrailer(TPdfObjectMgr* AObjectMgr);
	__fastcall virtual ~TPdfTrailer();
	void __fastcall ToCrossReference(TPdfDocument* Doc);
	__property int XrefAddress = {read=FXrefAddress, write=FXrefAddress, nodefault};
	__property TPdfDictionary* Attributes = {read=FAttributes};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfXrefEntry : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::AnsiString FEntryType;
	int FByteOffset;
	int FGenerationNumber;
	int FObjectStreamIndex;
	TPdfObject* FValue;
	
public:
	__fastcall TPdfXrefEntry(TPdfObject* AValue);
	__fastcall virtual ~TPdfXrefEntry();
	void __fastcall SaveToPdfWrite(TPdfWrite* &W);
	__property System::AnsiString EntryType = {read=FEntryType, write=FEntryType};
	__property int ByteOffset = {read=FByteOffset, nodefault};
	__property int ObjectStreamIndex = {read=FObjectStreamIndex, nodefault};
	__property int GenerationNumber = {read=FGenerationNumber, write=FGenerationNumber, nodefault};
	__property TPdfObject* Value = {read=FValue};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfXref : public TPdfObjectMgr
{
	typedef TPdfObjectMgr inherited;
	
public:
	TPdfXrefEntry* operator[](int ObjectID) { return this->Items[ObjectID]; }
	
private:
	System::Classes::TList* FXrefEntries;
	TPdfXrefEntry* __fastcall GetItem(int ObjectID);
	int __fastcall GetItemCount();
	
protected:
	void __fastcall WriteTo(TPdfWrite* &W);
	
public:
	__fastcall TPdfXref();
	__fastcall virtual ~TPdfXref();
	virtual void __fastcall AddObject(TPdfObject* AObject);
	virtual TPdfObject* __fastcall GetObject(int ObjectID);
	__property TPdfXrefEntry* Items[int ObjectID] = {read=GetItem/*, default*/};
	__property int ItemCount = {read=GetItemCount, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfXObject : public TPdfStream
{
	typedef TPdfStream inherited;
	
public:
	/* TPdfStream.Create */ inline __fastcall TPdfXObject(TPdfDocument* ADoc, bool DontAddToFXref) : TPdfStream(ADoc, DontAddToFXref) { }
	/* TPdfStream.Destroy */ inline __fastcall virtual ~TPdfXObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfOutlines : public TPdfDictionary
{
	typedef TPdfDictionary inherited;
	
public:
	/* TPdfDictionary.Create */ inline __fastcall TPdfOutlines(TPdfObjectMgr* AObjectMgr) : TPdfDictionary(AObjectMgr) { }
	/* TPdfDictionary.Destroy */ inline __fastcall virtual ~TPdfOutlines() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfOptionalContentGroup : public TPdfDictionary
{
	typedef TPdfDictionary inherited;
	
public:
	/* TPdfDictionary.Create */ inline __fastcall TPdfOptionalContentGroup(TPdfObjectMgr* AObjectMgr) : TPdfDictionary(AObjectMgr) { }
	/* TPdfDictionary.Destroy */ inline __fastcall virtual ~TPdfOptionalContentGroup() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TPdfPageClass;

typedef System::StaticArray<unsigned, 4> TPdfImageHash;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfDocument : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TPdfCatalog* FRoot;
	TPdfDictionary* FCurrentPages;
	TPdfArray* FOutputIntents;
	TPdfStream* FMetaData;
	TPdfCanvas* FCanvas;
	TPdfTrailer* FTrailer;
	TPdfXref* FXref;
	TPdfInfo* FInfo;
	System::Classes::TList* FFontList;
	System::Classes::TList* FObjectList;
	TPdfOutlineRoot* FOutlineRoot;
	TPdfArray* FXObjectList;
	unsigned FDefaultPageWidth;
	unsigned FDefaultPageHeight;
	TPDFPaperSize FDefaultPaperSize;
	TPdfCompressionMethod FCompressionMethod;
	bool FUseOutlines;
	bool FUseOptionalContent;
	int FCharSet;
	unsigned FCodePage;
	Xlssyncommons::TRawUTF8DynArray FTrueTypeFonts;
	Xlssyncommons::RawUTF8 FTrueTypeFontLastName;
	int FTrueTypeFontLastIndex;
	HDC FDC;
	int FScreenLogPixels;
	System::Types::TPoint FPrinterPxPerInch;
	bool FStandardFontsReplace;
	bool fEmbeddedTTF;
	bool fEmbeddedWholeTTF;
	Xlssyncommons::TRawUTF8List* fEmbeddedTTFIgnore;
	System::Classes::TList* fRawPages;
	bool fUseUniscribe;
	HDC fSelectedDCFontOld;
	int fForceJPEGCompression;
	bool fForceNoBitmapReuse;
	bool fUseFontFallBack;
	int fFontFallBackIndex;
	Xlssyncommons::TRawUTF8List* fBookMarks;
	Xlssyncommons::TRawUTF8List* fMissingBookmarks;
	TPdfOutlineEntry* fLastOutline;
	TPdfFileFormat fFileFormat;
	bool fPDFA1;
	TPdfWrite* fSaveToStreamWriter;
	bool __fastcall GetGeneratePDF15File();
	void __fastcall SetGeneratePDF15File(const bool Value);
	TPdfInfo* __fastcall GetInfo();
	TPdfOutlineRoot* __fastcall GetOutlineRoot();
	void __fastcall SetStandardFontsReplace(const bool Value);
	Xlssyncommons::TRawUTF8List* __fastcall GetEmbeddedTTFIgnore();
	void __fastcall SetDefaultPaperSize(const TPDFPaperSize Value);
	void __fastcall SetDefaultPageHeight(const unsigned Value);
	void __fastcall SetDefaultPageWidth(const unsigned Value);
	void __fastcall SetUseOptionalContent(const bool Value);
	void __fastcall SetPDFA1(const bool Value);
	bool __fastcall GetDefaultPageLandscape();
	void __fastcall SetDefaultPageLandscape(const bool Value);
	void __fastcall SetFontFallBackName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetFontFallBackName();
	TPdfPageClass fTPdfPageClass;
	void __fastcall RaiseInvalidOperation();
	void __fastcall CreateInfo();
	System::AnsiString __fastcall TTFFontPostcriptName(int aFontIndex, System::Uitypes::TFontStyles AStyle, TPdfFontTrueType* AFont);
	TPdfFont* __fastcall CreateEmbeddedFont(const Xlssyncommons::RawUTF8 FontName);
	void __fastcall RegisterFont(TPdfFont* aFont);
	TPdfFont* __fastcall GetRegisteredNotTrueTypeFont(const System::AnsiString APDFFontName);
	TPdfFont* __fastcall GetRegisteredTrueTypeFont(int AFontIndex, System::Uitypes::TFontStyles AStyle, System::Byte ACharSet)/* overload */;
	TPdfFont* __fastcall GetRegisteredTrueTypeFont(const tagLOGFONTW &AFontLog)/* overload */;
	int __fastcall GetTrueTypeFontIndex(const Xlssyncommons::RawUTF8 AName);
	HDC __fastcall GetDCWithFont(TPdfFontTrueType* TTF);
	void __fastcall FreeDoc();
	
public:
	__fastcall TPdfDocument(bool AUseOutlines, int ACodePage, bool APDFA1);
	__fastcall virtual ~TPdfDocument();
	void __fastcall NewDoc();
	virtual TPdfPage* __fastcall AddPage();
	TPdfDictionary* __fastcall CreatePages(TPdfDictionary* Parent);
	int __fastcall RegisterXObject(TPdfXObject* AObject, const System::AnsiString AName);
	int __fastcall AddXObject(const System::AnsiString AName, TPdfXObject* AXObject);
	virtual void __fastcall SaveToStream(System::Classes::TStream* AStream, System::TDateTime ForceModDate = 0.000000E+00);
	void __fastcall SaveToStreamDirectBegin(System::Classes::TStream* AStream, System::TDateTime ForceModDate = 0.000000E+00);
	virtual void __fastcall SaveToStreamDirectPageFlush(bool FlushCurrentPageNow = false);
	void __fastcall SaveToStreamDirectEnd();
	bool __fastcall SaveToFile(const System::Sysutils::TFileName aFileName);
	TPdfXObject* __fastcall GetXObject(const System::AnsiString AName);
	int __fastcall GetXObjectIndex(const System::AnsiString AName);
	System::AnsiString __fastcall GetXObjectImageName(const TPdfImageHash &Hash, int Width, int Height);
	TPdfDictionary* __fastcall CreateAnnotation(TPdfAnnotationSubType AType, const TPdfRect &ARect)/* overload */;
	TPdfDictionary* __fastcall CreateLink(const TPdfRect &ARect, const Xlssyncommons::RawUTF8 aBookmarkName);
	TPdfOutlineEntry* __fastcall CreateOutline(const System::UnicodeString Title, int Level, float TopPosition);
	TPdfDestination* __fastcall CreateDestination();
	void __fastcall CreateBookMark(float TopPosition, const Xlssyncommons::RawUTF8 aBookmarkName);
	System::AnsiString __fastcall CreateOrGetImage(Vcl::Graphics::TBitmap* B, PPdfBox DrawAt = (PPdfBox)(0x0), PPdfBox ClipRc = (PPdfBox)(0x0));
	TPdfOptionalContentGroup* __fastcall CreateOptionalContentGroup(TPdfOptionalContentGroup* ParentContentGroup, const System::UnicodeString Title, bool Visible = true);
	void __fastcall CreateOptionalContentRadioGroup(TPdfOptionalContentGroup* const *ContentGroups, const int ContentGroups_High);
	__property TPdfCanvas* Canvas = {read=FCanvas};
	__property TPdfInfo* Info = {read=GetInfo};
	__property TPdfCatalog* Root = {read=FRoot};
	__property TPdfOutlineRoot* OutlineRoot = {read=GetOutlineRoot};
	__property unsigned DefaultPageWidth = {read=FDefaultPageWidth, write=SetDefaultPageWidth, nodefault};
	__property unsigned DefaultPageHeight = {read=FDefaultPageHeight, write=SetDefaultPageHeight, nodefault};
	__property bool DefaultPageLandscape = {read=GetDefaultPageLandscape, write=SetDefaultPageLandscape, nodefault};
	__property TPDFPaperSize DefaultPaperSize = {read=FDefaultPaperSize, write=SetDefaultPaperSize, nodefault};
	__property TPdfCompressionMethod CompressionMethod = {read=FCompressionMethod, write=FCompressionMethod, nodefault};
	__property bool EmbeddedTTF = {read=fEmbeddedTTF, write=fEmbeddedTTF, nodefault};
	__property Xlssyncommons::TRawUTF8List* EmbeddedTTFIgnore = {read=GetEmbeddedTTFIgnore};
	__property bool EmbeddedWholeTTF = {read=fEmbeddedWholeTTF, write=fEmbeddedWholeTTF, nodefault};
	__property bool UseOutlines = {read=FUseOutlines, write=FUseOutlines, nodefault};
	__property bool UseOptionalContent = {read=FUseOptionalContent, write=SetUseOptionalContent, nodefault};
	__property unsigned CodePage = {read=FCodePage, nodefault};
	__property int CharSet = {read=FCharSet, nodefault};
	__property bool StandardFontsReplace = {read=FStandardFontsReplace, write=SetStandardFontsReplace, nodefault};
	__property bool UseUniscribe = {read=fUseUniscribe, write=fUseUniscribe, nodefault};
	__property bool UseFontFallBack = {read=fUseFontFallBack, write=fUseFontFallBack, nodefault};
	__property System::UnicodeString FontFallBackName = {read=GetFontFallBackName, write=SetFontFallBackName};
	__property int ForceJPEGCompression = {read=fForceJPEGCompression, write=fForceJPEGCompression, nodefault};
	__property bool ForceNoBitmapReuse = {read=fForceNoBitmapReuse, write=fForceNoBitmapReuse, nodefault};
	__property System::Classes::TList* RawPages = {read=fRawPages};
	__property int ScreenLogPixels = {read=FScreenLogPixels, write=FScreenLogPixels, nodefault};
	__property bool PDFA1 = {read=fPDFA1, write=SetPDFA1, nodefault};
	__property bool GeneratePDF15File = {read=GetGeneratePDF15File, write=SetGeneratePDF15File, nodefault};
	__property HDC DC = {read=FDC, nodefault};
	__property Xlssyncommons::TRawUTF8List* MissingBookmarks = {read=fMissingBookmarks};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfPage : public TPdfDictionary
{
	typedef TPdfDictionary inherited;
	
private:
	bool __fastcall GetPageLandscape();
	void __fastcall SetPageLandscape(const bool Value);
	
protected:
	TPdfDocument* fDoc;
	TPdfArray* FMediaBox;
	float FWordSpace;
	float FCharSpace;
	float FFontSize;
	TPdfFont* FFont;
	float FLeading;
	float FHorizontalScaling;
	void __fastcall SetWordSpace(float Value);
	void __fastcall SetCharSpace(float Value);
	void __fastcall SetFontSize(float Value);
	void __fastcall SetHorizontalScaling(float Value);
	void __fastcall SetLeading(float Value);
	virtual void __fastcall SetPageWidth(int AValue);
	virtual void __fastcall SetPageHeight(int AValue);
	int __fastcall GetPageWidth();
	int __fastcall GetPageHeight();
	TPdfDictionary* __fastcall GetResources(const System::AnsiString AName);
	
public:
	__fastcall virtual TPdfPage(TPdfDocument* ADoc);
	float __fastcall TextWidth(const System::AnsiString Text);
	int __fastcall MeasureText(const System::AnsiString Text, float Width);
	__property float WordSpace = {read=FWordSpace, write=SetWordSpace};
	__property float CharSpace = {read=FCharSpace, write=SetCharSpace};
	__property float HorizontalScaling = {read=FHorizontalScaling, write=SetHorizontalScaling};
	__property float Leading = {read=FLeading, write=SetLeading};
	__property float FontSize = {read=FFontSize, write=SetFontSize};
	__property TPdfFont* Font = {read=FFont, write=FFont};
	__property int PageWidth = {read=GetPageWidth, write=SetPageWidth, nodefault};
	__property int PageHeight = {read=GetPageHeight, write=SetPageHeight, nodefault};
	__property bool PageLandscape = {read=GetPageLandscape, write=SetPageLandscape, nodefault};
public:
	/* TPdfDictionary.Destroy */ inline __fastcall virtual ~TPdfPage() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TPdfCanvasRenderMetaFileTextPositioning : unsigned char { tpKerningFromAveragePosition, tpSetTextJustification, tpExactTextCharacterPositining };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfCanvas : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TPdfStream* FContents;
	TPdfPage* FPage;
	TPdfDictionary* FPageFontList;
	TPdfDocument* FDoc;
	float FFactor;
	float FFactorX;
	float FFactorY;
	float FOffsetX;
	float FOffsetY;
	float FOffsetXDef;
	float FOffsetYDef;
	float FWorldFactorX;
	float FWorldFactorY;
	float FWorldOffsetX;
	float FWorldOffsetY;
	float FDevScale;
	System::Types::TSize FWinSize;
	System::Types::TSize FViewSize;
	System::Types::TPoint FWinOrg;
	System::Types::TPoint FViewOrg;
	int FMappingMode;
	System::Types::TRect FEmfBounds;
	System::Types::TPoint FPrinterPxPerInch;
	bool FNewPath;
	bool fRightToLeftText;
	TPdfCanvasRenderMetaFileTextPositioning fUseMetaFileTextPositioning;
	bool fDisableMetaFileTextClipping;
	float fKerningHScaleBottom;
	float fKerningHScaleTop;
	Xlssyncommons::RawUTF8 FPreviousRasterFontName;
	int FPreviousRasterFontIndex;
	float __fastcall I2X(int X)/* overload */;
	float __fastcall I2X(float X)/* overload */;
	float __fastcall I2Y(int Y)/* overload */;
	float __fastcall I2Y(float Y)/* overload */;
	void __fastcall LineToI(int x, int y)/* overload */;
	void __fastcall LineToI(float x, float y)/* overload */;
	void __fastcall MoveToI(int x, int y)/* overload */;
	void __fastcall MoveToI(float x, float y)/* overload */;
	void __fastcall CurveToCI(int x1, int y1, int x2, int y2, int x3, int y3);
	void __fastcall RoundRectI(int x1, int y1, int x2, int y2, int cx, int cy);
	TPdfBox __fastcall BoxI(const System::Types::TRect &Box, bool Normalize);
	void __fastcall PointI(float x, float y);
	TPdfRect __fastcall RectI(const System::Types::TRect &Rect, bool Normalize);
	void __fastcall DrawXObjectPrepare(const System::AnsiString AXObjectName);
	float __fastcall ViewOffsetX(float X);
	float __fastcall ViewOffsetY(float Y);
	float __fastcall GetWorldFactorX();
	float __fastcall GetWorldFactorY();
	__property float WorldFactorX = {read=GetWorldFactorX, write=FWorldFactorX};
	__property float WorldFactorY = {read=GetWorldFactorY, write=FWorldFactorY};
	TPdfDocument* __fastcall GetDoc();
	TPdfPage* __fastcall GetPage();
	
public:
	__fastcall TPdfCanvas(TPdfDocument* APdfDoc);
	void __fastcall GSave();
	void __fastcall GRestore();
	void __fastcall ConcatToCTM(float a, float b, float c, float d, float e, float f, unsigned Decimals = (unsigned)(0x6));
	void __fastcall SetFlat(System::Byte flatness);
	void __fastcall SetLineCap(TLineCapStyle linecap);
	void __fastcall SetDash(const int *aarray, const int aarray_High, int phase = 0x0);
	void __fastcall SetLineJoin(TLineJoinStyle linejoin);
	void __fastcall SetLineWidth(float linewidth);
	void __fastcall SetMiterLimit(float miterlimit);
	void __fastcall MoveTo(float x, float y);
	void __fastcall LineTo(float x, float y);
	void __fastcall CurveToC(float x1, float y1, float x2, float y2, float x3, float y3);
	void __fastcall CurveToV(float x2, float y2, float x3, float y3);
	void __fastcall CurveToY(float x1, float y1, float x3, float y3);
	void __fastcall Rectangle(float x, float y, float width, float height);
	void __fastcall Closepath();
	void __fastcall NewPath();
	void __fastcall Stroke();
	void __fastcall ClosePathStroke();
	void __fastcall Fill();
	void __fastcall EoFill();
	void __fastcall FillStroke();
	void __fastcall ClosepathFillStroke();
	void __fastcall EofillStroke();
	void __fastcall ClosepathEofillStroke();
	void __fastcall Clip();
	void __fastcall EoClip();
	void __fastcall SetCharSpace(float charSpace);
	void __fastcall SetWordSpace(float wordSpace);
	void __fastcall SetHorizontalScaling(float hScaling);
	void __fastcall SetLeading(float leading);
	void __fastcall SetFontAndSize(const System::AnsiString fontshortcut, float size);
	void __fastcall SetTextRenderingMode(TTextRenderingMode mode);
	void __fastcall SetTextRise(System::Word rise);
	void __fastcall BeginText();
	void __fastcall EndText();
	void __fastcall MoveTextPoint(float tx, float ty);
	void __fastcall SetTextMatrix(float a, float b, float c, float d, float x, float y);
	void __fastcall MoveToNextLine();
	void __fastcall ShowText(const System::UnicodeString text, bool NextLine = false)/* overload */;
	void __fastcall ShowText(const System::AnsiString text, bool NextLine = false)/* overload */;
	void __fastcall ShowText(System::WideChar * PW, bool NextLine = false)/* overload */;
	void __fastcall ShowGlyph(PWORD PW, int Count);
	void __fastcall ExecuteXObject(const System::AnsiString xObject);
	void __fastcall SetRGBFillColor(TPdfColor Value);
	void __fastcall SetRGBStrokeColor(TPdfColor Value);
	void __fastcall SetCMYKFillColor(int C, int M, int Y, int K);
	void __fastcall SetCMYKStrokeColor(int C, int M, int Y, int K);
	virtual void __fastcall SetPage(TPdfPage* APage);
	void __fastcall SetPDFFont(TPdfFont* AFont, float ASize);
	TPdfFont* __fastcall SetFont(const Xlssyncommons::RawUTF8 AName, float ASize, System::Uitypes::TFontStyles AStyle, int ACharSet = 0xffffffff, int AForceTTF = 0xffffffff, bool AIsFixedWidth = false)/* overload */;
	TPdfFont* __fastcall SetFont(HDC ADC, const tagLOGFONTW &ALogFont, float ASize)/* overload */;
	void __fastcall TextOut(float X, float Y, const System::AnsiString Text);
	void __fastcall TextOutW(float X, float Y, System::WideChar * PW);
	void __fastcall TextRect(const TPdfRect &ARect, const System::AnsiString Text, TPdfAlignment Alignment, bool Clipping);
	void __fastcall MultilineTextRect(const TPdfRect &ARect, const System::AnsiString Text, bool WordWrap);
	void __fastcall DrawXObject(float X, float Y, float AWidth, float AHeight, const System::AnsiString AXObjectName);
	void __fastcall DrawXObjectEx(float X, float Y, float AWidth, float AHeight, float ClipX, float ClipY, float ClipWidth, float ClipHeight, const System::AnsiString AXObjectName);
	void __fastcall Ellipse(float x, float y, float width, float height);
	void __fastcall RoundRect(float x1, float y1, float x2, float y2, float cx, float cy);
	float __fastcall TextWidth(const System::AnsiString Text);
	float __fastcall UnicodeTextWidth(System::WideChar * PW);
	int __fastcall MeasureText(const System::AnsiString Text, float AWidth);
	System::AnsiString __fastcall GetNextWord(const System::AnsiString S, int &Index);
	void __fastcall RenderMetaFile(Vcl::Graphics::TMetafile* MF, float Scale = 1.000000E+00f, float XOff = 0.000000E+00f, float YOff = 0.000000E+00f, TPdfCanvasRenderMetaFileTextPositioning TextPositioning = (TPdfCanvasRenderMetaFileTextPositioning)(0x1), float KerningHScaleBottom = 9.900000E+01f, float KerningHScaleTop = 1.010000E+02f, bool DisableTextClipping = false);
	void __fastcall BeginMarkedContent(TPdfOptionalContentGroup* Group);
	void __fastcall EndMarkedContent();
	__property TPdfStream* Contents = {read=FContents};
	__property TPdfPage* Page = {read=GetPage};
	__property TPdfDocument* Doc = {read=GetDoc};
	__property bool RightToLeftText = {read=fRightToLeftText, write=fRightToLeftText, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfCanvas() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfDictionaryWrapper : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TPdfDictionary* FData;
	bool __fastcall GetHasData();
	
protected:
	void __fastcall SetData(TPdfDictionary* AData);
	
public:
	__property TPdfDictionary* Data = {read=FData, write=SetData};
	__property bool HasData = {read=GetHasData, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TPdfDictionaryWrapper() { }
	
public:
	/* TObject.Create */ inline __fastcall TPdfDictionaryWrapper() : System::Classes::TPersistent() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TPdfGDIComment : unsigned char { pgcOutline, pgcBookmark, pgcLink };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfInfo : public TPdfDictionaryWrapper
{
	typedef TPdfDictionaryWrapper inherited;
	
private:
	System::UnicodeString __fastcall GetAuthor();
	void __fastcall SetAuthor(const System::UnicodeString Value);
	System::TDateTime __fastcall GetCreationDate();
	void __fastcall SetCreationDate(System::TDateTime Value);
	System::UnicodeString __fastcall GetCreator();
	void __fastcall SetCreator(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetKeywords();
	void __fastcall SetKeywords(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetSubject();
	void __fastcall SetSubject(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetTitle();
	void __fastcall SetTitle(const System::UnicodeString Value);
	System::TDateTime __fastcall GetModDate();
	void __fastcall SetModDate(System::TDateTime Value);
	
public:
	__property System::UnicodeString Author = {read=GetAuthor, write=SetAuthor};
	__property System::TDateTime CreationDate = {read=GetCreationDate, write=SetCreationDate};
	__property System::UnicodeString Creator = {read=GetCreator, write=SetCreator};
	__property System::UnicodeString Keywords = {read=GetKeywords, write=SetKeywords};
	__property System::TDateTime ModDate = {read=GetModDate, write=SetModDate};
	__property System::UnicodeString Subject = {read=GetSubject, write=SetSubject};
	__property System::UnicodeString Title = {read=GetTitle, write=SetTitle};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TPdfInfo() { }
	
public:
	/* TObject.Create */ inline __fastcall TPdfInfo() : TPdfDictionaryWrapper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfCatalog : public TPdfDictionaryWrapper
{
	typedef TPdfDictionaryWrapper inherited;
	
private:
	TPdfDestination* FOpenAction;
	TPdfDocument* FOwner;
	void __fastcall SetPageLayout(TPdfPageLayout Value);
	void __fastcall SetPageMode(TPdfPageMode Value);
	void __fastcall SetNonFullScreenPageMode(TPdfPageMode Value);
	void __fastcall SetViewerPreference(TPdfViewerPreferences Value);
	void __fastcall SetPages(TPdfDictionary* APages);
	TPdfPageLayout __fastcall GetPageLayout();
	TPdfPageMode __fastcall GetPageMode();
	TPdfPageMode __fastcall GetNonFullScreenPageMode();
	TPdfViewerPreferences __fastcall GetViewerPreference();
	TPdfDictionary* __fastcall GetPages();
	
protected:
	void __fastcall SaveOpenAction();
	
public:
	__property TPdfDestination* OpenAction = {read=FOpenAction, write=FOpenAction};
	__property TPdfPageLayout PageLayout = {read=GetPageLayout, write=SetPageLayout, nodefault};
	__property TPdfPageMode NonFullScreenPageMode = {read=GetNonFullScreenPageMode, write=SetNonFullScreenPageMode, nodefault};
	__property TPdfPageMode PageMode = {read=GetPageMode, write=SetPageMode, nodefault};
	__property TPdfViewerPreferences ViewerPreference = {read=GetViewerPreference, write=SetViewerPreference, nodefault};
	__property TPdfDictionary* Pages = {read=GetPages, write=SetPages};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TPdfCatalog() { }
	
public:
	/* TObject.Create */ inline __fastcall TPdfCatalog() : TPdfDictionaryWrapper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfFont : public TPdfDictionaryWrapper
{
	typedef TPdfDictionaryWrapper inherited;
	
protected:
	System::AnsiString fName;
	System::AnsiString fShortCut;
	int fFirstChar;
	int fLastChar;
	System::Word fDefaultWidth;
	int fAscent;
	int fDescent;
	bool fUnicode;
	int fTrueTypeFontsIndex;
	System::Set<char, _DELPHI_SET_CHAR(0), _DELPHI_SET_CHAR(255)> fWinAnsiUsed;
	
public:
	__fastcall TPdfFont(TPdfXref* AXref, const System::AnsiString AName);
	void __fastcall AddUsedWinAnsiChar(char aChar);
	virtual int __fastcall GetAnsiCharWidth(const System::AnsiString AText, int APos);
	__property System::AnsiString Name = {read=fName};
	__property System::AnsiString ShortCut = {read=fShortCut};
	__property bool Unicode = {read=fUnicode, nodefault};
	__property int Ascent = {read=fAscent, nodefault};
	__property int Descent = {read=fDescent, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TPdfFont() { }
	
};

#pragma pack(pop)

typedef System::StaticArray<System::Word, 224> TPdfWinAnsiWidth;

typedef TPdfWinAnsiWidth *PPdfWinAnsiWidth;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfFontWinAnsi : public TPdfFont
{
	typedef TPdfFont inherited;
	
protected:
	TPdfWinAnsiWidth *fWinAnsiWidth;
	
public:
	virtual int __fastcall GetAnsiCharWidth(const System::AnsiString AText, int APos);
	__fastcall virtual ~TPdfFontWinAnsi();
public:
	/* TPdfFont.Create */ inline __fastcall TPdfFontWinAnsi(TPdfXref* AXref, const System::AnsiString AName) : TPdfFont(AXref, AName) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfFontType1 : public TPdfFontWinAnsi
{
	typedef TPdfFontWinAnsi inherited;
	
public:
	__fastcall TPdfFontType1(TPdfXref* AXref, const System::AnsiString AName, PSmallIntArray WidthArray);
public:
	/* TPdfFontWinAnsi.Destroy */ inline __fastcall virtual ~TPdfFontType1() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfFontCIDFontType2 : public TPdfFont
{
	typedef TPdfFont inherited;
	
public:
	/* TPdfFont.Create */ inline __fastcall TPdfFontCIDFontType2(TPdfXref* AXref, const System::AnsiString AName) : TPdfFont(AXref, AName) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TPdfFontCIDFontType2() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfTTF : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xlssyncommons::TWordDynArray fcmap;
	Xlssyncommons::TWordDynArray fhead;
	Xlssyncommons::TWordDynArray fhhea;
	Xlssyncommons::TWordDynArray fhmtx;
	
public:
	TCmapHEAD *head;
	TCmapHHEA *hhea;
	TCmapFmt4 *fmt4;
	Xlssyncommons::TWordArray *startCode;
	Xlssyncommons::TWordArray *endCode;
	TSmallIntArray *idDelta;
	Xlssyncommons::TWordArray *idRangeOffset;
	Xlssyncommons::TWordArray *glyphIndexArray;
	__fastcall TPdfTTF(TPdfFontTrueType* aUnicodeTTF);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfTTF() { }
	
};

#pragma pack(pop)

#pragma pack(push,1)
struct DECLSPEC_DRECORD Xlssynpdf__04
{
	
public:
	union
	{
		struct 
		{
			int Int;
		};
		struct 
		{
			System::Word Width;
			System::Word Glyph;
		};
		
	};
};
#pragma pack(pop)


typedef System::DynamicArray<Xlssynpdf__04> TUsedWide;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfFontTrueType : public TPdfFontWinAnsi
{
	typedef TPdfFontWinAnsi inherited;
	
private:
	bool __fastcall GetWideCharUsed();
	
protected:
	System::Uitypes::TFontStyles fStyle;
	TPdfDocument* fDoc;
	Xlssyncommons::TSortedWordArray fUsedWideChar;
	TUsedWide fUsedWide;
	HGDIOBJ fHGDI;
	bool fFixedWidth;
	TPdfDictionary* fFontDescriptor;
	TPdfStream* fFontFile2;
	TPdfFontTrueType* fUnicodeFont;
	TPdfFontTrueType* fWinAnsiFont;
	bool fIsSymbolFont;
	tagLOGFONTW fLogFont;
	tagTEXTMETRICW fM;
	_OUTLINETEXTMETRICW fOTM;
	void __fastcall CreateAssociatedUnicodeFont();
	void __fastcall PrepareForSaving();
	System::Word __fastcall GetAndMarkGlyphAsUsed(System::Word aGlyph);
	
public:
	__fastcall TPdfFontTrueType(TPdfDocument* ADoc, int AFontIndex, System::Uitypes::TFontStyles AStyle, const tagLOGFONTW &ALogFont, TPdfFontTrueType* AWinAnsiFont);
	__fastcall virtual ~TPdfFontTrueType();
	int __fastcall FindOrAddUsedWideChar(System::WideChar aWideChar);
	int __fastcall GetWideCharWidth(System::WideChar aWideChar);
	__property bool WideCharUsed = {read=GetWideCharUsed, nodefault};
	__property System::Uitypes::TFontStyles Style = {read=fStyle, nodefault};
	__property bool FixedWidth = {read=fFixedWidth, nodefault};
	__property TPdfFontTrueType* UnicodeFont = {read=fUnicodeFont};
	__property TPdfFontTrueType* WinAnsiFont = {read=fWinAnsiFont};
	__property tagTEXTMETRICW TM = {read=fM};
	__property _OUTLINETEXTMETRICW OTM = {read=fOTM};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfDestination : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TPdfDocument* FDoc;
	TPdfPage* FPage;
	TPdfDestinationType FType;
	System::StaticArray<int, 4> FValues;
	float FZoom;
	System::TObject* FReference;
	void __fastcall SetElement(int Index, int Value);
	void __fastcall SetZoom(float Value);
	int __fastcall GetElement(int Index);
	int __fastcall GetPageWidth();
	int __fastcall GetPageHeight();
	
public:
	__fastcall TPdfDestination(TPdfDocument* APdfDoc);
	__fastcall virtual ~TPdfDestination();
	TPdfArray* __fastcall GetValue();
	__property TPdfDestinationType DestinationType = {read=FType, write=FType, nodefault};
	__property TPdfDocument* Doc = {read=FDoc};
	__property TPdfPage* Page = {read=FPage};
	__property int Left = {read=GetElement, write=SetElement, index=0, nodefault};
	__property int Top = {read=GetElement, write=SetElement, index=1, nodefault};
	__property int Right = {read=GetElement, write=SetElement, index=2, nodefault};
	__property int Bottom = {read=GetElement, write=SetElement, index=3, nodefault};
	__property int PageHeight = {read=GetPageHeight, nodefault};
	__property int PageWidth = {read=GetPageWidth, nodefault};
	__property float Zoom = {read=FZoom, write=SetZoom};
	__property System::TObject* Reference = {read=FReference, write=FReference};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfOutlineEntry : public TPdfDictionaryWrapper
{
	typedef TPdfDictionaryWrapper inherited;
	
private:
	TPdfOutlineEntry* FParent;
	TPdfOutlineEntry* FNext;
	TPdfOutlineEntry* FPrev;
	TPdfOutlineEntry* FFirst;
	TPdfOutlineEntry* FLast;
	TPdfDestination* FDest;
	TPdfDocument* FDoc;
	System::UnicodeString FTitle;
	bool FOpened;
	int FCount;
	System::TObject* FReference;
	int FLevel;
	
protected:
	virtual void __fastcall Save();
	
public:
	__fastcall TPdfOutlineEntry(TPdfOutlineEntry* AParent, int TopPosition);
	__fastcall virtual ~TPdfOutlineEntry();
	TPdfOutlineEntry* __fastcall AddChild(int TopPosition = 0xffffffff);
	__property TPdfDocument* Doc = {read=FDoc};
	__property TPdfOutlineEntry* Parent = {read=FParent};
	__property TPdfOutlineEntry* Next = {read=FNext};
	__property TPdfOutlineEntry* Prev = {read=FPrev};
	__property TPdfOutlineEntry* First = {read=FFirst};
	__property TPdfOutlineEntry* Last = {read=FLast};
	__property TPdfDestination* Dest = {read=FDest, write=FDest};
	__property System::UnicodeString Title = {read=FTitle, write=FTitle};
	__property bool Opened = {read=FOpened, write=FOpened, nodefault};
	__property System::TObject* Reference = {read=FReference, write=FReference};
	__property int Level = {read=FLevel, write=FLevel, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfOutlineRoot : public TPdfOutlineEntry
{
	typedef TPdfOutlineEntry inherited;
	
public:
	__fastcall TPdfOutlineRoot(TPdfDocument* ADoc);
	virtual void __fastcall Save();
public:
	/* TPdfOutlineEntry.Destroy */ inline __fastcall virtual ~TPdfOutlineRoot() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfPageGDI : public TPdfPage
{
	typedef TPdfPage inherited;
	
private:
	System::RawByteString fVCLMetaFileCompressed;
	System::Types::TSize fVCLCanvasSize;
	Vcl::Graphics::TCanvas* fVCLCurrentCanvas;
	Vcl::Graphics::TMetafile* fVCLCurrentMetaFile;
	void __fastcall CreateVCLCanvas();
	void __fastcall SetVCLCurrentMetaFile();
	void __fastcall FlushVCLCanvas();
	
public:
	__fastcall virtual ~TPdfPageGDI();
public:
	/* TPdfPage.Create */ inline __fastcall virtual TPdfPageGDI(TPdfDocument* ADoc) : TPdfPage(ADoc) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfDocumentGDI : public TPdfDocument
{
	typedef TPdfDocument inherited;
	
private:
	TPdfCanvasRenderMetaFileTextPositioning fUseMetaFileTextPositioning;
	float fKerningHScaleTop;
	float fKerningHScaleBottom;
	bool fDisableTextClipping;
	Vcl::Graphics::TCanvas* __fastcall GetVCLCanvas();
	System::Types::TSize __fastcall GetVCLCanvasSize();
	
public:
	__fastcall TPdfDocumentGDI(bool AUseOutlines, int ACodePage, bool APDFA1);
	virtual TPdfPage* __fastcall AddPage();
	virtual void __fastcall SaveToStream(System::Classes::TStream* AStream, System::TDateTime ForceModDate = 0.000000E+00);
	virtual void __fastcall SaveToStreamDirectPageFlush(bool FlushCurrentPageNow = false);
	__property Vcl::Graphics::TCanvas* VCLCanvas = {read=GetVCLCanvas};
	__property System::Types::TSize VCLCanvasSize = {read=GetVCLCanvasSize};
	__property TPdfCanvasRenderMetaFileTextPositioning UseMetaFileTextPositioning = {read=fUseMetaFileTextPositioning, write=fUseMetaFileTextPositioning, nodefault};
	__property bool DisableMetaFileTextClipping = {read=fDisableTextClipping, write=fDisableTextClipping, nodefault};
	__property float KerningHScaleBottom = {read=fKerningHScaleBottom, write=fKerningHScaleBottom};
	__property float KerningHScaleTop = {read=fKerningHScaleTop, write=fKerningHScaleTop};
public:
	/* TPdfDocument.Destroy */ inline __fastcall virtual ~TPdfDocumentGDI() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfImage : public TPdfXObject
{
	typedef TPdfXObject inherited;
	
private:
	int fPixelHeight;
	int fPixelWidth;
	TPdfImageHash fHash;
	
public:
	__fastcall TPdfImage(TPdfDocument* aDoc, Vcl::Graphics::TGraphic* aImage, bool DontAddToFXref);
	__fastcall TPdfImage(TPdfDocument* aDoc, const System::Sysutils::TFileName aJpegFileName, bool DontAddToFXref)/* overload */;
	__fastcall TPdfImage(TPdfDocument* aDoc, System::Classes::TMemoryStream* aJpegFile, bool DontAddToFXref)/* overload */;
	__property int PixelWidth = {read=fPixelWidth, nodefault};
	__property int PixelHeight = {read=fPixelHeight, nodefault};
public:
	/* TPdfStream.Destroy */ inline __fastcall virtual ~TPdfImage() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfForm : public TPdfXObject
{
	typedef TPdfXObject inherited;
	
private:
	TPdfDictionary* FFontList;
	
public:
	__fastcall TPdfForm(TPdfDocumentGDI* aDoc, Vcl::Graphics::TMetafile* aMetaFile);
public:
	/* TPdfStream.Destroy */ inline __fastcall virtual ~TPdfForm() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfFormWithCanvas : public TPdfXObject
{
	typedef TPdfXObject inherited;
	
private:
	TPdfDictionary* FFontList;
	TPdfPage* FPage;
	TPdfCanvas* FCanvas;
	
public:
	__fastcall TPdfFormWithCanvas(TPdfDocument* aDoc, int W, int H);
	__fastcall virtual ~TPdfFormWithCanvas();
	void __fastcall CloseCanvas();
	__property TPdfCanvas* Canvas = {read=FCanvas};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfObjectStream : public TPdfXObject
{
	typedef TPdfXObject inherited;
	
	
private:
	#pragma pack(push,8)
	struct DECLSPEC_DRECORD _TPdfObjectStream__1
	{
	public:
		int Number;
		int Position;
	};
	#pragma pack(pop)
	
	
	typedef System::DynamicArray<_TPdfObjectStream__1> _TPdfObjectStream__2;
	
	
protected:
	int fObjectCount;
	TPdfWrite* fAddingStream;
	_TPdfObjectStream__2 fObject;
	virtual void __fastcall InternalWriteTo(TPdfWrite* W);
	
public:
	__fastcall TPdfObjectStream(TPdfDocument* aDoc);
	__fastcall virtual ~TPdfObjectStream();
	int __fastcall AddObject(TPdfObject* Value);
	__property int ObjectCount = {read=fObjectCount, nodefault};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TScriptState_enum : unsigned char { r0, r1, r2, r3, r4, fOverrideDirection, fInhibitSymSwap, fCharShape, fDigitSubstitute, fInhibitLigate, fDisplayZWG, fArabicNumContext, fGcpClusters };

typedef System::Set<TScriptState_enum, TScriptState_enum::r0, TScriptState_enum::fGcpClusters> TScriptState_set;

typedef TScriptState *PScriptState;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TScriptState
{
	
public:
	union
	{
		struct 
		{
			TScriptState_set fFlags;
		};
		struct 
		{
			System::Byte uBidiLevel;
		};
		
	};
};
#pragma pack(pop)


enum DECLSPEC_DENUM TScriptAnalysis_enum : unsigned char { s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, fRTL, fLayoutRTL, fLinkBefore, fLinkAfter, fLogicalOrder, fNoGlyphIndex };

typedef System::Set<TScriptAnalysis_enum, TScriptAnalysis_enum::s0, TScriptAnalysis_enum::fNoGlyphIndex> TScriptAnalysis_set;

typedef TScriptAnalysis *PScriptAnalysis;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TScriptAnalysis
{
	
public:
	union
	{
		struct 
		{
			TScriptAnalysis_set fFlags;
			TScriptState s;
		};
		struct 
		{
			System::Word eScript;
		};
		
	};
};
#pragma pack(pop)


typedef TScriptItem *PScriptItem;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TScriptItem
{
public:
	int iCharPos;
	TScriptAnalysis a;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TScriptProperties_enum : unsigned char { fNumeric, fComplex, fNeedsWordBreaking, fNeedsCaretInfo, bCharSet0, bCharSet1, bCharSet2, bCharSet3, bCharSet4, bCharSet5, bCharSet6, bCharSet7, fControl, fPrivateUseArea, fNeedsCharacterJustify, fInvalidGlyph, fInvalidLogAttr, fCDM, fAmbiguousCharSet, fClusterSizeVaries, fRejectInvalid };

typedef System::Set<TScriptProperties_enum, TScriptProperties_enum::fNumeric, TScriptProperties_enum::fRejectInvalid> TScriptProperties_set;

typedef TScriptProperties *PScriptProperties;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TScriptProperties
{
public:
	System::Word langid;
	TScriptProperties_set fFlags;
};
#pragma pack(pop)


typedef System::StaticArray<PScriptProperties, 256> TPScriptPropertiesArray;

typedef TPScriptPropertiesArray *PScriptPropertiesArray;

enum DECLSPEC_DENUM TScriptVisAttr_enum : unsigned char { a0, a1, a2, a3, fClusterStart, fDiacritic, fZeroWidth, fReserved };

typedef System::Set<TScriptVisAttr_enum, TScriptVisAttr_enum::a0, TScriptVisAttr_enum::fReserved> TScriptVisAttr_set;

typedef TScriptVisAttr *PScriptVisAttr;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TScriptVisAttr
{
	
public:
	union
	{
		struct 
		{
			TScriptVisAttr_set fFlags;
			System::Byte fShapeReserved;
		};
		struct 
		{
			System::Byte uJustification;
		};
		
	};
};
#pragma pack(pop)


enum DECLSPEC_DENUM TScriptControlAttr_enum : unsigned char { fContextDigits, fInvertPreBoundDir, fInvertPostBoundDir, fLinkStringBefore, fLinkStringAfter, fNeutralOverride, fNumericOverride, fLegacyBidiClass, scr0, scr1, scr2, scr3, scr4, scr5, scr6, scr7 };

typedef System::Set<TScriptControlAttr_enum, TScriptControlAttr_enum::fContextDigits, TScriptControlAttr_enum::scr7> TScriptControlAttr_set;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TScriptControl
{
public:
	System::Word uDefaultLanguage;
	TScriptControlAttr_set fFlags;
};
#pragma pack(pop)


typedef TScriptControl *PScriptControl;

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MWT_IDENTITY = System::Int8(0x1);
static const System::Int8 MWT_LEFTMULTIPLY = System::Int8(0x2);
static const System::Int8 MWT_RIGHTMULTIPLY = System::Int8(0x3);
static const System::Int8 MWT_SET = System::Int8(0x4);
static const System::WideChar PDF_IN_USE_ENTRY = (System::WideChar)(0x6e);
static const System::WideChar PDF_FREE_ENTRY = (System::WideChar)(0x66);
static const System::Word PDF_MAX_GENERATION_NUM = System::Word(0xffff);
static const System::Int8 PDF_ENTRY_CLOSED = System::Int8(0x0);
static const System::Int8 PDF_ENTRY_OPENED = System::Int8(0x1);
static const System::WideChar CRLF = (System::WideChar)(0xa);
static const System::WideChar LF = (System::WideChar)(0xa);
static const System::Int8 PDF_MIN_HORIZONTALSCALING = System::Int8(0xa);
static const System::Word PDF_MAX_HORIZONTALSCALING = System::Word(0x12c);
static const System::Word PDF_MAX_WORDSPACE = System::Word(0x12c);
static const System::Int8 PDF_MIN_CHARSPACE = System::Int8(-30);
static const System::Word PDF_MAX_CHARSPACE = System::Word(0x12c);
static const System::Word PDF_MAX_FONTSIZE = System::Word(0x7d0);
static const System::Int8 PDF_MAX_ZOOMSIZE = System::Int8(0xa);
static const System::Word PDF_MAX_LEADING = System::Word(0x12c);
extern DELPHI_PACKAGE Xlssyncommons::RawUTF8 MSWINDOWS_DEFAULT_FONTS;
#define Usp10 L"usp10.dll"
static const int USP_E_SCRIPT_NOT_IN_FONT = int(-2147220992);
extern "C" HRESULT __stdcall ScriptItemize(const System::WideChar * pwcInChars, int cInChars, int cMaxItems, const void * psControl, const void * psState, PScriptItem pItems, int &pcItems);
extern "C" HRESULT __stdcall ScriptGetProperties(/* out */ PScriptPropertiesArray &ppSp, /* out */ int &piNumScripts);
extern "C" HRESULT __stdcall ScriptLayout(int cRuns, const System::PByte pbLevel, System::PInteger piVisualToLogical, System::PInteger piLogicalToVisual);
extern "C" HRESULT __stdcall ScriptShape(HDC hdc, void * &psc, const System::WideChar * pwcChars, int cChars, int cMaxGlyphs, PScriptAnalysis psa, PWORD pwOutGlyphs, PWORD pwLogClust, PScriptVisAttr psva, int &pcGlyphs);
extern "C" HRESULT __stdcall ScriptApplyDigitSubstitution(const void * psds, const void * psControl, const void * psState);
extern DELPHI_PACKAGE TPDFPaperSize __fastcall CurrentPrinterPaperSize(void);
extern DELPHI_PACKAGE System::Types::TPoint __fastcall CurrentPrinterRes(void);
extern DELPHI_PACKAGE void __fastcall GDICommentBookmark(HDC MetaHandle, const Xlssyncommons::RawUTF8 aBookmarkName);
extern DELPHI_PACKAGE void __fastcall GDICommentOutline(HDC MetaHandle, const Xlssyncommons::RawUTF8 aTitle, int aLevel);
extern DELPHI_PACKAGE void __fastcall GDICommentLink(HDC MetaHandle, const Xlssyncommons::RawUTF8 aBookmarkName, const System::Types::TRect &aRect);
extern DELPHI_PACKAGE System::AnsiString __fastcall _DateTimeToPdfDate(System::TDateTime ADate);
extern DELPHI_PACKAGE System::TDateTime __fastcall _PdfDateToDateTime(const System::AnsiString AText);
extern DELPHI_PACKAGE bool __fastcall _HasMultiByteString(char * Value);
extern DELPHI_PACKAGE System::AnsiString __fastcall RawUTF8ToPDFString(const Xlssyncommons::RawUTF8 Value);
extern DELPHI_PACKAGE System::AnsiString __fastcall UInt32ToPDFString(unsigned Value);
extern DELPHI_PACKAGE TPdfRect __fastcall PdfRect(float Left, float Top, float Right, float Bottom)/* overload */;
extern DELPHI_PACKAGE TPdfRect __fastcall PdfRect(const TPdfBox &Box)/* overload */;
extern DELPHI_PACKAGE TPdfBox __fastcall PdfBox(float Left, float Top, float Width, float Height);
extern DELPHI_PACKAGE int __fastcall _GetCharCount(char * Text);
extern DELPHI_PACKAGE void __fastcall L2R(System::WideChar * W, int L);
extern DELPHI_PACKAGE int __fastcall PdfCoord(float MM);
}	/* namespace Xlssynpdf */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSSYNPDF)
using namespace Xlssynpdf;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XlssynpdfHPP
