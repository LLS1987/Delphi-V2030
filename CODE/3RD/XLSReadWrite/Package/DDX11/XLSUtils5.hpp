// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSUtils5.pas' rev: 35.00 (Windows)

#ifndef Xlsutils5HPP
#define Xlsutils5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Contnrs.hpp>
#include <System.UITypes.hpp>
#include <Winapi.Windows.hpp>
#include <System.Math.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsutils5
{
//-- forward type declarations -----------------------------------------------
struct TXLSPointF;
struct TXLSRectXY;
class DELPHICLASS TXLSErrorManager;
class DELPHICLASS TIntegerList;
class DELPHICLASS TIntegerStack;
class DELPHICLASS TIndexObject;
class DELPHICLASS TIndexObjectList;
class DELPHICLASS TPointerMemoryStream;
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<System::AnsiString, 256> Xlsutils5__1;

enum DECLSPEC_DENUM TXLSKnownFiletype : unsigned char { xkftUnknown, xkftCompound, xkftZIP, xkftXLSX, xkftDOCX, xkftODT, xkftRTF, xkftXLS5, xkftXLS97, xkftEncryptedXLSX, xkftEncryptedDOCX };

typedef System::Sysutils::Exception XLSRWException;

typedef System::DynamicArray<double> TDynDoubleArray;

typedef System::StaticArray<double, 65536> TDoubleArray;

typedef TDoubleArray *PDoubleArray;

typedef System::DynamicArray<float> TDynSingleArray;

typedef System::StaticArray<float, 65536> TSingleArray;

typedef TSingleArray *PSingleArray;

typedef System::DynamicArray<int> TDynIntegerArray;

typedef System::RawByteString XLS8String;

typedef char XLS8Char;

typedef char * XLS8PChar;

typedef System::WideChar AxUCChar;

typedef System::UnicodeString AxUCString;

typedef System::WideChar * AxPUCChar;

typedef System::DynamicArray<System::UnicodeString> TDynStringArray;

typedef System::Classes::TStringList TXLSWideStringList;

struct DECLSPEC_DRECORD TXLSPointF
{
public:
	double X;
	double Y;
};


struct DECLSPEC_DRECORD TXLSRectXY
{
public:
	int X1;
	int Y1;
	int X2;
	int Y2;
};


typedef void __fastcall (__closure *TStringEvent)(System::TObject* ASender, const System::UnicodeString AText);

typedef void __fastcall (__closure *TIntegerEvent)(System::TObject* ASender, const int AValue);

typedef void __fastcall (__closure *TTwoIntegerEvent)(System::TObject* ASender, const int AValue1, const int AValue2);

typedef System::TObject* __fastcall (__closure *TAxGDIObjectNameProc)(const System::UnicodeString AName);

enum DECLSPEC_DENUM TXLSProgressType : unsigned char { xptReadFile, xptWriteFile, xptCompileFormulas, xptCalculateFormulas, xptExport, xptSortCells };

enum DECLSPEC_DENUM TXLSProgressState : unsigned char { xpsBegin, xpsWork, xpsEnd };

typedef void __fastcall (__closure *TXLSProgressEvent)(TXLSProgressType AProgressType, TXLSProgressState AProgressState, double AValue);

typedef void __fastcall (__closure *TXLSPasswordEvent)(System::TObject* Sender, System::UnicodeString &Password);

enum DECLSPEC_DENUM TXLSErrorLevel : unsigned char { xelMessage, xelHint, xelWarning, xelError, xelFatal, xelDebug };

typedef System::Set<TXLSErrorLevel, TXLSErrorLevel::xelMessage, TXLSErrorLevel::xelDebug> TXLSErrorLevels;

typedef void __fastcall (__closure *TXLSErrorEvent)(System::TObject* ASender, TXLSErrorLevel ALevel, System::UnicodeString AText);

class PASCALIMPLEMENTATION TXLSErrorManager : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int __fastcall GetErrorCount();
	int __fastcall GetFatalCount();
	int __fastcall GetHintCount();
	int __fastcall GetWarningCount();
	void __fastcall SetErrorList(System::Classes::TStrings* const Value);
	
protected:
	TXLSErrorEvent FErrorEvent;
	TXLSErrorLevels FFilter;
	bool FSaveToList;
	System::Classes::TStrings* FErrorList;
	bool FOwnsErrorList;
	int FLastError;
	int FHintCount;
	int FWarningCount;
	int FErrorCount;
	int FFatalCount;
	bool FIgnoreErrors;
	bool FIgnoreXMLWarnings;
	System::UnicodeString __fastcall GetErrorText(const System::UnicodeString AText, int AErrorNo);
	
public:
	__fastcall TXLSErrorManager();
	__fastcall virtual ~TXLSErrorManager();
	void __fastcall Clear();
	void __fastcall Message(const System::UnicodeString AText);
	void __fastcall Hint(const System::UnicodeString AText, int AErrorNo);
	void __fastcall Warning(const System::UnicodeString AText, int AErrorNo);
	void __fastcall Error(const System::UnicodeString AText, int AErrorNo);
	void __fastcall Fatal(const System::UnicodeString AText, int AErrorNo);
	void __fastcall Debug(const System::UnicodeString AText);
	__property System::Classes::TStrings* ErrorList = {read=FErrorList, write=SetErrorList};
	__property bool IgnoreErrors = {read=FIgnoreErrors, write=FIgnoreErrors, nodefault};
	__property bool IgnoreXMLWarnings = {read=FIgnoreXMLWarnings, write=FIgnoreXMLWarnings, nodefault};
	
__published:
	__property int LastError = {read=FLastError, write=FLastError, nodefault};
	__property bool SaveToList = {read=FSaveToList, write=FSaveToList, nodefault};
	__property TXLSErrorLevels Filter = {read=FFilter, write=FFilter, nodefault};
	__property int HintCount = {read=GetHintCount, nodefault};
	__property int WarningCount = {read=GetWarningCount, nodefault};
	__property int ErrorCount = {read=GetErrorCount, nodefault};
	__property int FatalCount = {read=GetFatalCount, nodefault};
	__property TXLSErrorEvent OnError = {read=FErrorEvent, write=FErrorEvent};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIntegerList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	int operator[](int Index) { return this->Items[Index]; }
	
private:
	int __fastcall GetItems(int Index);
	
public:
	HIDESBASE void __fastcall Add(int AValue);
	__property int Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TIntegerList() { }
	
public:
	/* TObject.Create */ inline __fastcall TIntegerList() : System::Classes::TList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIntegerStack : public TIntegerList
{
	typedef TIntegerList inherited;
	
public:
	void __fastcall Push(const int AValue);
	int __fastcall Pop();
	int __fastcall Peek();
public:
	/* TList.Destroy */ inline __fastcall virtual ~TIntegerStack() { }
	
public:
	/* TObject.Create */ inline __fastcall TIntegerStack() : TIntegerList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIndexObject : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FIndex;
	
public:
	virtual System::TObject* __fastcall RequestObject(System::UnicodeString AClass);
	__property int Index = {read=FIndex, nodefault};
public:
	/* TObject.Create */ inline __fastcall TIndexObject() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIndexObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIndexObjectList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
protected:
	bool FIsClearing;
	virtual void __fastcall Notify(void * Ptr, System::Classes::TListNotification Action);
	
public:
	void __fastcall ReIndex();
public:
	/* TObjectList.Create */ inline __fastcall TIndexObjectList()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TIndexObjectList(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TIndexObjectList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPointerMemoryStream : public System::Classes::TMemoryStream
{
	typedef System::Classes::TMemoryStream inherited;
	
public:
	void __fastcall SetStreamData(void * Ptr, const NativeInt ASize);
public:
	/* TMemoryStream.Destroy */ inline __fastcall virtual ~TPointerMemoryStream() { }
	
public:
	/* TObject.Create */ inline __fastcall TPointerMemoryStream() : System::Classes::TMemoryStream() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 128> HexCharTable;
extern DELPHI_PACKAGE Xlsutils5__1 HexStrs255;
#define ComponentName L"XLSReadWriteII"
#define CurrentVersionNumber L"6.01.17"
#define CurrentBuildNumber L"6117"
static const int XLS_MININT = int(-2147483646);
static const System::Word EMU_PER_PT = System::Word(0x319c);
#define StrDigits L"0123456789"
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 6> XLS_MAGIC_COMPOUND;
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 4> XLS_MAGIC_ZIP;
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 5> XLS_MAGIC_RTF;
static const System::Word XLSERR_FILEREAD_UNKNOWENCRYPT = System::Word(0x3ea);
static const System::Word XLSERR_FILEREAD_PASSWORDMISSING = System::Word(0x3eb);
static const System::Word XLSERR_FILEREAD_WRONGPASSWORD = System::Word(0x3ec);
static const System::Word XLSWARN_FILEREAD_XMLPARSE = System::Word(0x7d1);
static const System::Word XLSERR_DIRECTWR_CELL_NOT_INC = System::Word(0x3ed);
static const System::Word XLSHINT_BAD_FORMULA_RESULT = System::Word(0x1b59);
static const System::Word XLSWARN_CIRCULAR_FORMULA = System::Word(0xbba);
static const System::Word XLSWARN_USEDSHEETNAME = System::Word(0xbbb);
static const System::Word XLSWARN_INVALIDCELLREF = System::Word(0xbbc);
static const System::Word XLSWARN_INVALIDCELLVALUE = System::Word(0xbbd);
static const System::Word XLSWARN_UNKNOWNIMAGE = System::Word(0xbbe);
static const System::Word XLSWARN_UNSUPPORTEDIMAGE = System::Word(0xbbf);
static const System::Word XLSWARN_IMAGEERROR = System::Word(0xbc0);
static const System::Word XLSWARN_CAN_NOT_CHANGE_MERGED = System::Word(0xbc1);
static const System::Word XLSWARN_SHAPE_EDIT_TEXTBOX = System::Word(0xc1d);
static const System::Word XLSWARN_SHAPE_CAN_NOT_EDIT = System::Word(0xc1e);
static const System::Word XLSERR_FMLA_BADERRORCONST = System::Word(0xfa1);
static const System::Word XLSERR_FMLA_BADEXPONENT = System::Word(0xfa2);
static const System::Word XLSERR_FMLA_BADFRACTIONAL = System::Word(0xfa3);
static const System::Word XLSERR_FMLA_MISSINGQUOTE = System::Word(0xfa4);
static const System::Word XLSERR_FMLA_BADARRAYCONST = System::Word(0xfa5);
static const System::Word XLSERR_FMLA_FORMULA = System::Word(0xfa6);
static const System::Word XLSERR_FMLA_MISSINGRPAR = System::Word(0xfa7);
static const System::Word XLSERR_FMLA_INVALIDUSEOF = System::Word(0xfa8);
static const System::Word XLSERR_FMLA_MISSINGEXPR = System::Word(0xfa9);
static const System::Word XLSERR_FMLA_BADCELLREF = System::Word(0xfaa);
static const System::Word XLSERR_FMLA_BADSHEETNAME = System::Word(0xfab);
static const System::Word XLSERR_FMLA_BADWORKBOOKNAME = System::Word(0xfac);
static const System::Word XLSERR_FMLA_MISSING = System::Word(0xfad);
static const System::Word XLSERR_FMLA_BADR1C1REF = System::Word(0xfae);
static const System::Word XLSERR_FMLA_MISSINGOPERAND = System::Word(0xfaf);
static const System::Word XLSERR_FMLA_UNKNOWNSHEET = System::Word(0xfb0);
static const System::Word XLSERR_FMLA_UNKNOWNXBOOK = System::Word(0xfb1);
static const System::Word XLSERR_FMLA_BADUSEOFOP = System::Word(0xfb2);
static const System::Word XLSERR_FMLA_UNKNOWNNAME = System::Word(0xfb3);
static const System::Word XLSERR_FMLA_MISSINGARG = System::Word(0xfb4);
static const System::Word XLSERR_FMLA_TOMANYGARGS = System::Word(0xfb5);
static const System::Word XLSERR_FMLA_BADARRAYCOLS = System::Word(0xfb6);
static const System::Word XLSERR_FMLA_BADTABLE = System::Word(0xfb7);
static const System::Word XLSERR_FMLA_UNKNOWNTABLE = System::Word(0xfb8);
static const System::Word XLSERR_FMLA_UNKNOWNTABLECOL = System::Word(0xfb9);
static const System::Word XLSERR_FMLA_UNKNOWNTBLSPEC = System::Word(0xfba);
static const System::Word XLSERR_FMLA_TABLESQBRACKET = System::Word(0xfbb);
static const System::Word XLSERR_FMLA_BADUSEOFTABLEOP = System::Word(0xfbc);
static const System::Word XLSERR_FMLA_BADUSEOFTBLSPEC = System::Word(0xfbd);
static const System::Word XLSERR_FMLA_TBLSPECNOTFIRST = System::Word(0xfbe);
static const System::Word XLSERR_NAME_EMPTY = System::Word(0xfbf);
static const System::Word XLSERR_NAME_DUPLICATE = System::Word(0xfc0);
static const System::Word XLSERR_HLINK_INVALID_CELLREF = System::Word(0xfc1);
static const System::Word XLSERR_BIFF_BADBUILTIN_NAME = System::Word(0x1389);
static const System::Word XLSERR_BIFF_CANT_FIND_BUILTIN_NAME = System::Word(0x138a);
static const System::Word XLSERR_FILENAME_IS_MISSING = System::Word(0x1771);
static const System::Word XLSERR_NO_XLS_DEFINED = System::Word(0x1772);
static const System::Word XLSWARN_WORKBOOK_NOT_EMPTY = System::Word(0x1773);
static const System::Word XLSWARN_MULTIPLE_SEL_AREAS = System::Word(0x1774);
static const System::Word XLSERR_INVALID_SIMPLE_TAG = System::Word(0x1775);
extern DELPHI_PACKAGE int G_Counter;
extern DELPHI_PACKAGE System::WideChar G_DirSepChar;
extern DELPHI_PACKAGE int __fastcall CPos(const System::WideChar C, const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE int __fastcall CPos(const char C, const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE bool __fastcall XPos(const System::UnicodeString ASubStr, const System::UnicodeString AStr, /* out */ int &AP);
extern DELPHI_PACKAGE int __fastcall RCPos(const System::WideChar C, const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE int __fastcall RCPos(const char C, const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall SplitAtChar(const System::WideChar C, System::UnicodeString &S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall SplitAtCRLF(System::UnicodeString &S, /* out */ bool &AFoundCR);
extern DELPHI_PACKAGE unsigned __fastcall XLSCalcCRC32(const System::Sysutils::PByteArray P, int Len);
extern DELPHI_PACKAGE bool __fastcall EmptyGUID(const System::PGUID AGUID);
extern DELPHI_PACKAGE double __fastcall EmuToCm(const int EMU);
extern DELPHI_PACKAGE int __fastcall CmToEmu(const double Cm);
extern DELPHI_PACKAGE System::Extended __fastcall RoundToDecimal(System::Extended x, const int d);
extern DELPHI_PACKAGE bool __fastcall TryCurrencyStrToFloat(const System::UnicodeString AValue, /* out */ double &AResult);
extern DELPHI_PACKAGE void __fastcall SortDoubleArray(TDynDoubleArray AArray);
extern DELPHI_PACKAGE System::UnicodeString __fastcall BytesToHexStr(const System::Sysutils::PByteArray ABytes, const int ACount);
extern DELPHI_PACKAGE bool __fastcall UnicodeIs8Bit(const System::UnicodeString AString);
extern DELPHI_PACKAGE System::UnicodeString __fastcall _XLSReplaceStr(System::UnicodeString aSourceString, System::UnicodeString aFindString, System::UnicodeString aReplaceString);
extern DELPHI_PACKAGE void __fastcall StripQuotes(System::UnicodeString &S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall StripCRLF(const System::UnicodeString S);
extern DELPHI_PACKAGE bool __fastcall SafeTryStrToFloat(System::UnicodeString S, /* out */ double &Value);
extern DELPHI_PACKAGE System::Word __fastcall MakePasswordHash(const System::AnsiString APassword);
extern DELPHI_PACKAGE System::UnicodeString __fastcall PasswordFromHash(const System::Word AHash);
extern DELPHI_PACKAGE double __fastcall Fork(const double AVal, const double AMin, const double AMax)/* overload */;
extern DELPHI_PACKAGE int __fastcall Fork(const int AVal, const int AMin, const int AMax)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall TColorToRGB(const System::Uitypes::TColor AValue);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall RGBToTColor(const unsigned ARGB);
extern DELPHI_PACKAGE System::Word __fastcall BoolAsWord(const bool ABool);
extern DELPHI_PACKAGE System::UnicodeString __fastcall MakeIndent(const int AIndent);
extern DELPHI_PACKAGE System::UnicodeString __fastcall TrimWS(const System::UnicodeString S);
extern DELPHI_PACKAGE TXLSKnownFiletype __fastcall FileTypeFromMagic(System::Classes::TStream* AStream);
extern DELPHI_PACKAGE void __fastcall StreamToByteStrings(System::Classes::TStream* AStream, const int RowLength);
extern DELPHI_PACKAGE void __fastcall GetAvailableFonts(System::Classes::TStrings* AList);
extern DELPHI_PACKAGE unsigned __fastcall RevRGB(unsigned RGB);
extern DELPHI_PACKAGE unsigned __fastcall HSLToRGB(const unsigned H, const unsigned S, const unsigned L)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall HSLToRGB(const unsigned AHSL)/* overload */;
extern DELPHI_PACKAGE void __fastcall RGBToHSL(const System::Byte R, const System::Byte G, const System::Byte B, int &H, int &S, int &L)/* overload */;
extern DELPHI_PACKAGE void __fastcall RGBToHSL(const unsigned RGB, int &H, int &S, int &L)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall MakeGradientColor(const unsigned RGB1, const unsigned RGB2, double APercent);
extern DELPHI_PACKAGE System::UnicodeString __fastcall XLSUTF8Encode(System::UnicodeString S);
extern DELPHI_PACKAGE bool __fastcall AdjustDeleteRowsCols(int &ARC1, int &ARC2, int AMove1, int AMove2);
}	/* namespace Xlsutils5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSUTILS5)
using namespace Xlsutils5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsutils5HPP
