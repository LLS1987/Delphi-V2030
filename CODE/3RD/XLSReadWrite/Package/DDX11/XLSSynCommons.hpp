// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSSynCommons.pas' rev: 35.00 (Windows)

#ifndef XlssyncommonsHPP
#define XlssyncommonsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <System.SyncObjs.hpp>
#include <System.Contnrs.hpp>
#include <System.Types.hpp>
#include <System.Variants.hpp>
#include <XLSSynLZ.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlssyncommons
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TSynAnsiConvert;
class DELPHICLASS TSynAnsiFixedWidth;
class DELPHICLASS TSynAnsiUTF8;
class DELPHICLASS TSynAnsiUTF16;
struct TPropNameList;
struct TSynSoundEx;
struct TMultiPart;
struct TSortedWordArray;
struct TValueResult;
struct TDynArray;
struct TSynHash;
struct TDynArrayHashed;
__interface DELPHIINTERFACE IObjectDynArray;
typedef System::DelphiInterface<IObjectDynArray> _di_IObjectDynArray;
class DELPHICLASS TObjectDynArrayWrapper;
class DELPHICLASS TObjectHash;
class DELPHICLASS TPersistentWithCustomCreate;
class DELPHICLASS TInterfacedObjectWithCustomCreate;
class DELPHICLASS TSynPersistent;
class DELPHICLASS TSynPersistentLocked;
class DELPHICLASS TInterfacedObjectLocked;
struct TSynNameValueItem;
struct TSynNameValue;
struct TSQLVar;
class DELPHICLASS TJSONCustomParserRTTI;
class DELPHICLASS TJSONCustomParserCustom;
class DELPHICLASS TJSONCustomParserCustomSimple;
class DELPHICLASS TJSONCustomParserCustomRecord;
class DELPHICLASS TJSONRecordAbstract;
class DELPHICLASS TJSONRecordRTTI;
class DELPHICLASS TJSONRecordTextDefinition;
class DELPHICLASS TTextWriter;
class DELPHICLASS TJSONWriter;
class DELPHICLASS TSynPersistentWithPassword;
class DELPHICLASS TSynUserPassword;
class DELPHICLASS TSynConnectionDefinition;
class DELPHICLASS TSynCriticalSection;
class DELPHICLASS TSynCache;
class DELPHICLASS TObjectListHashedAbstract;
class DELPHICLASS TObjectListHashed;
class DELPHICLASS TObjectListPropertyHashed;
class DELPHICLASS TObjectListLocked;
class DELPHICLASS TRawUTF8List;
class DELPHICLASS TRawUTF8ListHashed;
class DELPHICLASS TRawUTF8ListHashedLocked;
class DELPHICLASS TRawUTF8MethodList;
struct TMemoryMap;
class DELPHICLASS TMemoryMapText;
class DELPHICLASS TFakeWriterStream;
class DELPHICLASS TRawByteStringStream;
class DELPHICLASS TSynMemoryStream;
class DELPHICLASS TSynMemoryStreamMapped;
class DELPHICLASS TFileBufferWriter;
struct TFileBufferReader;
struct TNameValuePUTF8Char;
class DELPHICLASS TSynFilterOrValidate;
class DELPHICLASS TSynValidate;
class DELPHICLASS TSynValidateIPAddress;
class DELPHICLASS TSynValidateEmail;
class DELPHICLASS TSynValidatePattern;
class DELPHICLASS TSynValidatePatternI;
class DELPHICLASS TSynValidateNonVoidText;
class DELPHICLASS TSynFilter;
class DELPHICLASS TSynFilterUpperCase;
class DELPHICLASS TSynFilterUpperCaseU;
class DELPHICLASS TSynFilterLowerCase;
class DELPHICLASS TSynFilterLowerCaseU;
class DELPHICLASS TSynFilterTrim;
class DELPHICLASS TSynFilterTruncate;
struct TSynLogExceptionContext;
class DELPHICLASS ESynException;
class DELPHICLASS ETableDataException;
class DELPHICLASS EDocVariant;
class DELPHICLASS TSynBackgroundThreadAbstract;
class DELPHICLASS TSynBackgroundThreadEvent;
class DELPHICLASS TSynBackgroundThreadMethod;
class DELPHICLASS TSynBackgroundThreadProcedure;
struct TTimeLogBits;
class DELPHICLASS TFileVersion;
class DELPHICLASS THeapMemoryStream;
struct TSynTableStatementSelect;
struct TSynTableStatementWhere;
class DELPHICLASS TSynTableStatement;
struct TSortCompareTmp;
class DELPHICLASS TSynTableFieldProperties;
struct TSynTableData;
struct TUpdateFieldEvent;
class DELPHICLASS TSynValidateTable;
class DELPHICLASS TSynValidateTableUniqueField;
class DELPHICLASS TSynTable;
class DELPHICLASS TSynInvokeableVariantType;
class DELPHICLASS TSynTableVariantType;
class DELPHICLASS TDocVariant;
struct TDocVariantData;
struct TPrecisionTimer;
__interface DELPHIINTERFACE ILocalPrecisionTimer;
typedef System::DelphiInterface<ILocalPrecisionTimer> _di_ILocalPrecisionTimer;
class DELPHICLASS TLocalPrecisionTimer;
class DELPHICLASS TSynMonitorTime;
class DELPHICLASS TSynMonitorSize;
class DELPHICLASS TSynMonitorThroughput;
class DELPHICLASS TSynMonitorMemory;
class DELPHICLASS TSynFPUException;
__interface DELPHIINTERFACE IAutoFree;
typedef System::DelphiInterface<IAutoFree> _di_IAutoFree;
class DELPHICLASS TAutoFree;
__interface DELPHIINTERFACE IAutoLocker;
typedef System::DelphiInterface<IAutoLocker> _di_IAutoLocker;
class DELPHICLASS TAutoLocker;
__interface DELPHIINTERFACE ILockedDocVariant;
typedef System::DelphiInterface<ILockedDocVariant> _di_ILockedDocVariant;
class DELPHICLASS TLockedDocVariant;
class DELPHICLASS TSynAuthenticationAbstract;
class DELPHICLASS TSynAuthentication;
//-- type declarations -------------------------------------------------------
typedef NativeUInt PtrUInt;

typedef NativeUInt *PPtrUInt;

typedef NativeInt PtrInt;

typedef NativeInt *PPtrInt;

typedef unsigned __int64 QWord;

typedef System::StaticArray<NativeUInt, 536870911> TPtrUIntArray;

typedef TPtrUIntArray *PPtrUIntArray;

typedef System::DynamicArray<NativeUInt> TPtrUIntDynArray;

typedef System::StaticArray<System::Variant, 134217727> TVariantArray;

typedef TVariantArray *PVariantArray;

typedef System::DynamicArray<System::Variant> TVariantDynArray;

typedef System::AnsiStringT<1200> RawUnicode;

typedef System::AnsiStringT<65001> RawUTF8;

typedef System::AnsiStringT<1252> WinAnsiString;

typedef RawUTF8 RawJSON;

typedef System::UnicodeString SynUnicode;

typedef RawUnicode *PRawUnicode;

typedef RawJSON *PRawJSON;

typedef RawUTF8 *PRawUTF8;

typedef WinAnsiString *PWinAnsiString;

typedef char *PWinAnsiChar;

typedef System::UnicodeString *PSynUnicode;

typedef char *PUTF8Char;

typedef PUTF8Char *PPUTF8Char;

typedef System::StaticArray<PUTF8Char, 536870911> TPUtf8CharArray;

typedef TPUtf8CharArray *PPUtf8CharArray;

typedef System::StaticArray<char *, 536870911> TPAnsiCharArray;

typedef TPAnsiCharArray *PPAnsiCharArray;

typedef System::DynamicArray<PUTF8Char> TPUTF8CharDynArray;

typedef System::StaticArray<RawUTF8, 536870911> TRawUTF8Array;

typedef TRawUTF8Array *PRawUTF8Array;

typedef System::DynamicArray<RawUTF8> TRawUTF8DynArray;

typedef TRawUTF8DynArray *PRawUTF8DynArray;

typedef System::DynamicArray<TRawUTF8DynArray> TRawUTF8DynArrayDynArray;

typedef System::DynamicArray<WinAnsiString> TWinAnsiDynArray;

typedef TWinAnsiDynArray *PWinAnsiDynArray;

typedef System::DynamicArray<System::RawByteString> TRawByteStringDynArray;

typedef System::DynamicArray<System::TVarRec> TTVarRecDynArray;

typedef System::DynamicArray<System::UnicodeString> TStringDynArray;

typedef TStringDynArray *PStringDynArray;

typedef System::DynamicArray<System::TDateTime> TDateTimeDynArray;

typedef TDateTimeDynArray *PDateTimeDynArray;

typedef System::DynamicArray<System::_di_IInterface> TInterfaceDynArray;

typedef TInterfaceDynArray *PInterfaceDynArray;

typedef System::DynamicArray<System::WideString> TWideStringDynArray;

typedef TWideStringDynArray *PWideStringDynArray;

typedef System::DynamicArray<System::UnicodeString> TSynUnicodeDynArray;

typedef TSynUnicodeDynArray *PSynUnicodeDynArray;

typedef System::DynamicArray<int> TIntegerDynArray;

typedef TIntegerDynArray *PIntegerDynArray;

typedef System::DynamicArray<unsigned> TCardinalDynArray;

typedef TCardinalDynArray *PCardinalDynArray;

typedef System::DynamicArray<float> TSingleDynArray;

typedef TSingleDynArray *PSingleDynArray;

typedef System::DynamicArray<__int64> TInt64DynArray;

typedef TInt64DynArray *PInt64DynArray;

typedef System::DynamicArray<double> TDoubleDynArray;

typedef TDoubleDynArray *PDoubleDynArray;

typedef System::DynamicArray<System::Currency> TCurrencyDynArray;

typedef TCurrencyDynArray *PCurrencyDynArray;

typedef System::DynamicArray<System::Word> TWordDynArray;

typedef TWordDynArray *PWordDynArray;

typedef System::DynamicArray<System::Byte> TByteDynArray;

typedef TByteDynArray *PByteDynArray;

typedef System::DynamicArray<System::TObject*> TObjectDynArray;

typedef TObjectDynArray *PObjectDynArray;

typedef System::DynamicArray<System::Classes::TPersistent*> TPersistentDynArray;

typedef TPersistentDynArray *PPersistentDynArray;

typedef System::DynamicArray<void *> TPointerDynArray;

typedef TPointerDynArray *PPointerDynArray;

typedef System::DynamicArray<System::TMethod> TMethodDynArray;

typedef TMethodDynArray *PMethodDynArray;

typedef System::DynamicArray<System::Contnrs::TObjectList*> TObjectListDynArray;

typedef TObjectListDynArray *PObjectListDynArray;

typedef System::DynamicArray<System::Sysutils::TFileName> TFileNameDynArray;

typedef TFileNameDynArray *PFileNameDynArray;

typedef System::StaticArray<System::Byte, 2147483647> TByteArray;

typedef TByteArray *PByteArray;

typedef System::StaticArray<System::Word, 1073741823> TWordArray;

typedef TWordArray *PWordArray;

typedef System::StaticArray<int, 536870911> TIntegerArray;

typedef TIntegerArray *PIntegerArray;

typedef System::StaticArray<unsigned, 536870911> TCardinalArray;

typedef TCardinalArray *PCardinalArray;

typedef System::StaticArray<__int64, 268435455> TInt64Array;

typedef TInt64Array *PInt64Array;

typedef System::StaticArray<short, 1073741823> TSmallIntArray;

typedef TSmallIntArray *PSmallIntArray;

typedef System::StaticArray<float, 536870911> TSingleArray;

typedef TSingleArray *PSingleArray;

typedef System::StaticArray<double, 268435455> TDoubleArray;

typedef TDoubleArray *PDoubleArray;

typedef System::StaticArray<System::RawByteString, 536870911> TRawByteStringArray;

typedef TRawByteStringArray *PRawByteStringArray;

typedef System::StaticArray<void *, 536870911> PointerArray;

typedef PointerArray *PPointerArray;

typedef System::StaticArray<System::TObject*, 536870911> TObjectArray;

typedef TObjectArray *PObjectArray;

typedef System::StaticArray<NativeInt, 536870911> TPtrIntArray;

typedef TPtrIntArray *PPtrIntArray;

typedef System::DynamicArray<GUID> TGUIDDynArray;

typedef System::Sysutils::Int64Rec *PInt64Rec;

typedef System::_di_IInterface *PIInterface;

typedef System::TMetaClass* TCollectionClass;

typedef System::TMetaClass* TCollectionItemClass;

typedef System::TMetaClass* TStreamClass;

typedef System::TMetaClass* TInterfacedObjectClass;

typedef System::TObject* *PObject;

enum DECLSPEC_DENUM TTextWriterKind : unsigned char { twNone, twJSONEscape, twOnSameLine };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynAnsiConvert : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	unsigned fCodePage;
	System::Byte fAnsiCharShift;
	virtual void __fastcall InternalAppendUTF8(char * Source, unsigned SourceChars, System::TObject* DestTextWriter, TTextWriterKind Escape);
	
public:
	__fastcall virtual TSynAnsiConvert(unsigned aCodePage);
	__classmethod TSynAnsiConvert* __fastcall Engine(unsigned aCodePage);
	virtual System::WideChar * __fastcall AnsiBufferToUnicode(System::WideChar * Dest, char * Source, unsigned SourceChars)/* overload */;
	virtual PUTF8Char __fastcall AnsiBufferToUTF8(PUTF8Char Dest, char * Source, unsigned SourceChars)/* overload */;
	RawUnicode __fastcall AnsiToRawUnicode(const System::RawByteString AnsiText)/* overload */;
	virtual RawUnicode __fastcall AnsiToRawUnicode(char * Source, unsigned SourceChars)/* overload */;
	System::UnicodeString __fastcall AnsiToUnicodeString(char * Source, unsigned SourceChars)/* overload */;
	System::UnicodeString __fastcall AnsiToUnicodeString(const System::RawByteString Source)/* overload */;
	virtual RawUTF8 __fastcall AnsiToUTF8(const System::RawByteString AnsiText);
	virtual RawUTF8 __fastcall AnsiBufferToRawUTF8(char * Source, unsigned SourceChars)/* overload */;
	virtual char * __fastcall UnicodeBufferToAnsi(char * Dest, System::WideChar * Source, unsigned SourceChars)/* overload */;
	System::RawByteString __fastcall UnicodeBufferToAnsi(System::WideChar * Source, unsigned SourceChars)/* overload */;
	System::RawByteString __fastcall RawUnicodeToAnsi(const RawUnicode Source);
	virtual char * __fastcall UTF8BufferToAnsi(char * Dest, PUTF8Char Source, unsigned SourceChars)/* overload */;
	System::RawByteString __fastcall UTF8BufferToAnsi(PUTF8Char Source, unsigned SourceChars)/* overload */;
	virtual void __fastcall UTF8BufferToAnsi(PUTF8Char Source, unsigned SourceChars, System::RawByteString &result)/* overload */;
	virtual System::RawByteString __fastcall UTF8ToAnsi(const RawUTF8 UTF8);
	System::RawByteString __fastcall AnsiToAnsi(TSynAnsiConvert* From, const System::RawByteString Source)/* overload */;
	System::RawByteString __fastcall AnsiToAnsi(TSynAnsiConvert* From, char * Source, unsigned SourceChars)/* overload */;
	__property unsigned CodePage = {read=fCodePage, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynAnsiConvert() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynAnsiFixedWidth : public TSynAnsiConvert
{
	typedef TSynAnsiConvert inherited;
	
protected:
	TWordDynArray fAnsiToWide;
	TByteDynArray fWideToAnsi;
	virtual void __fastcall InternalAppendUTF8(char * Source, unsigned SourceChars, System::TObject* DestTextWriter, TTextWriterKind Escape);
	
public:
	__fastcall virtual TSynAnsiFixedWidth(unsigned aCodePage);
	virtual System::WideChar * __fastcall AnsiBufferToUnicode(System::WideChar * Dest, char * Source, unsigned SourceChars)/* overload */;
	virtual PUTF8Char __fastcall AnsiBufferToUTF8(PUTF8Char Dest, char * Source, unsigned SourceChars)/* overload */;
	virtual RawUnicode __fastcall AnsiToRawUnicode(char * Source, unsigned SourceChars)/* overload */;
	virtual char * __fastcall UnicodeBufferToAnsi(char * Dest, System::WideChar * Source, unsigned SourceChars)/* overload */;
	virtual char * __fastcall UTF8BufferToAnsi(char * Dest, PUTF8Char Source, unsigned SourceChars)/* overload */;
	int __fastcall WideCharToAnsiChar(unsigned wc);
	bool __fastcall IsValidAnsi(System::WideChar * WideText, int Length)/* overload */;
	bool __fastcall IsValidAnsi(System::WideChar * WideText)/* overload */;
	bool __fastcall IsValidAnsiU(PUTF8Char UTF8Text);
	bool __fastcall IsValidAnsiU8Bit(PUTF8Char UTF8Text);
	__property TWordDynArray AnsiToWide = {read=fAnsiToWide};
	__property TByteDynArray WideToAnsi = {read=fWideToAnsi};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynAnsiFixedWidth() { }
	
	/* Hoisted overloads: */
	
public:
	inline RawUnicode __fastcall  AnsiToRawUnicode(const System::RawByteString AnsiText){ return TSynAnsiConvert::AnsiToRawUnicode(AnsiText); }
	inline System::RawByteString __fastcall  UnicodeBufferToAnsi(System::WideChar * Source, unsigned SourceChars){ return TSynAnsiConvert::UnicodeBufferToAnsi(Source, SourceChars); }
	inline System::RawByteString __fastcall  UTF8BufferToAnsi(PUTF8Char Source, unsigned SourceChars){ return TSynAnsiConvert::UTF8BufferToAnsi(Source, SourceChars); }
	inline void __fastcall  UTF8BufferToAnsi(PUTF8Char Source, unsigned SourceChars, System::RawByteString &result){ TSynAnsiConvert::UTF8BufferToAnsi(Source, SourceChars, result); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynAnsiUTF8 : public TSynAnsiConvert
{
	typedef TSynAnsiConvert inherited;
	
protected:
	virtual void __fastcall InternalAppendUTF8(char * Source, unsigned SourceChars, System::TObject* DestTextWriter, TTextWriterKind Escape);
	
public:
	__fastcall virtual TSynAnsiUTF8(unsigned aCodePage);
	virtual System::WideChar * __fastcall AnsiBufferToUnicode(System::WideChar * Dest, char * Source, unsigned SourceChars)/* overload */;
	virtual PUTF8Char __fastcall AnsiBufferToUTF8(PUTF8Char Dest, char * Source, unsigned SourceChars)/* overload */;
	virtual RawUnicode __fastcall AnsiToRawUnicode(char * Source, unsigned SourceChars)/* overload */;
	virtual char * __fastcall UnicodeBufferToAnsi(char * Dest, System::WideChar * Source, unsigned SourceChars)/* overload */;
	virtual char * __fastcall UTF8BufferToAnsi(char * Dest, PUTF8Char Source, unsigned SourceChars)/* overload */;
	virtual void __fastcall UTF8BufferToAnsi(PUTF8Char Source, unsigned SourceChars, System::RawByteString &result)/* overload */;
	virtual System::RawByteString __fastcall UTF8ToAnsi(const RawUTF8 UTF8);
	virtual RawUTF8 __fastcall AnsiToUTF8(const System::RawByteString AnsiText);
	virtual RawUTF8 __fastcall AnsiBufferToRawUTF8(char * Source, unsigned SourceChars)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynAnsiUTF8() { }
	
	/* Hoisted overloads: */
	
public:
	inline RawUnicode __fastcall  AnsiToRawUnicode(const System::RawByteString AnsiText){ return TSynAnsiConvert::AnsiToRawUnicode(AnsiText); }
	inline System::RawByteString __fastcall  UnicodeBufferToAnsi(System::WideChar * Source, unsigned SourceChars){ return TSynAnsiConvert::UnicodeBufferToAnsi(Source, SourceChars); }
	inline System::RawByteString __fastcall  UTF8BufferToAnsi(PUTF8Char Source, unsigned SourceChars){ return TSynAnsiConvert::UTF8BufferToAnsi(Source, SourceChars); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynAnsiUTF16 : public TSynAnsiConvert
{
	typedef TSynAnsiConvert inherited;
	
public:
	__fastcall virtual TSynAnsiUTF16(unsigned aCodePage);
	virtual System::WideChar * __fastcall AnsiBufferToUnicode(System::WideChar * Dest, char * Source, unsigned SourceChars)/* overload */;
	virtual PUTF8Char __fastcall AnsiBufferToUTF8(PUTF8Char Dest, char * Source, unsigned SourceChars)/* overload */;
	virtual RawUnicode __fastcall AnsiToRawUnicode(char * Source, unsigned SourceChars)/* overload */;
	virtual char * __fastcall UnicodeBufferToAnsi(char * Dest, System::WideChar * Source, unsigned SourceChars)/* overload */;
	virtual char * __fastcall UTF8BufferToAnsi(char * Dest, PUTF8Char Source, unsigned SourceChars)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynAnsiUTF16() { }
	
	/* Hoisted overloads: */
	
public:
	inline RawUnicode __fastcall  AnsiToRawUnicode(const System::RawByteString AnsiText){ return TSynAnsiConvert::AnsiToRawUnicode(AnsiText); }
	inline System::RawByteString __fastcall  UnicodeBufferToAnsi(System::WideChar * Source, unsigned SourceChars){ return TSynAnsiConvert::UnicodeBufferToAnsi(Source, SourceChars); }
	inline System::RawByteString __fastcall  UTF8BufferToAnsi(PUTF8Char Source, unsigned SourceChars){ return TSynAnsiConvert::UTF8BufferToAnsi(Source, SourceChars); }
	inline void __fastcall  UTF8BufferToAnsi(PUTF8Char Source, unsigned SourceChars, System::RawByteString &result){ TSynAnsiConvert::UTF8BufferToAnsi(Source, SourceChars, result); }
	
};

#pragma pack(pop)

typedef NativeInt __fastcall (*TUTF8Compare)(PUTF8Char P1, PUTF8Char P2);

typedef System::Extended TSynExtended;

typedef System::StaticArray<char, 256> TNormTable;

typedef System::StaticArray<System::Byte, 256> TNormTableByte;

struct DECLSPEC_DRECORD TPropNameList
{
public:
	TRawUTF8DynArray Values;
	int Count;
	void __fastcall Init();
	int __fastcall FindPropName(const RawUTF8 Value);
	bool __fastcall AddPropName(const RawUTF8 Value);
};


enum DECLSPEC_DENUM TSynSoundExPronunciation : unsigned char { sndxEnglish, sndxFrench, sndxSpanish, sndxNone };

typedef System::StaticArray<System::Byte, 25> TSoundExValues;

typedef TSoundExValues *PSoundExValues;

typedef TSynSoundEx *PSynSoundEx;

struct DECLSPEC_DRECORD TSynSoundEx
{
private:
	unsigned Search;
	unsigned FirstChar;
	TSoundExValues *fValues;
	
public:
	bool __fastcall Prepare(char * UpperValue, TSynSoundExPronunciation Lang = (TSynSoundExPronunciation)(0x0));
	bool __fastcall UTF8(PUTF8Char U);
	bool __fastcall Ansi(char * A);
};


struct DECLSPEC_DRECORD TMultiPart
{
public:
	RawUTF8 Name;
	RawUTF8 FileName;
	RawUTF8 ContentType;
	RawUTF8 Encoding;
	System::RawByteString Content;
};


typedef System::DynamicArray<TMultiPart> TMultiPartDynArray;

struct DECLSPEC_DRECORD TSortedWordArray
{
public:
	TWordDynArray Values;
	int Count;
	NativeInt __fastcall Add(System::Word aValue);
	NativeInt __fastcall IndexOf(System::Word aValue);
};


struct DECLSPEC_DRECORD TValueResult
{
public:
	char *Ptr;
	int Len;
};


typedef int __fastcall (*TDynArraySortCompare)(const void *A, const void *B);

typedef int __fastcall (__closure *TEventDynArraySortCompare)(const void *A, const void *B);

enum DECLSPEC_DENUM TDynArrayKind : unsigned char { djNone, djByte, djWord, djInteger, djCardinal, djSingle, djInt64, djDouble, djCurrency, djTimeLog, djDateTime, djRawUTF8, djWinAnsi, djString, djRawByteString, djWideString, djSynUnicode, djVariant, djCustom };

typedef System::Set<TDynArrayKind, TDynArrayKind::djNone, TDynArrayKind::djCustom> TDynArrayKinds;

struct DECLSPEC_DRECORD TDynArray
{
private:
	void * *fValue;
	void *fTypeInfo;
	NativeUInt fElemSize;
	void *fElemType;
	TDynArraySortCompare fCompare;
	int *fCountP;
	bool fSorted;
	TDynArrayKind fKnownType;
	int fKnownSize;
	int __fastcall GetCount();
	void __fastcall SetCount(int aCount);
	int __fastcall GetCapacity();
	void __fastcall SetCapacity(int aCapacity);
	void __fastcall SetCompare(const TDynArraySortCompare aCompare);
	int __fastcall FindIndex(const void *Elem, PIntegerDynArray aIndex, TDynArraySortCompare aCompare);
	RawUTF8 __fastcall GetArrayTypeName();
	bool __fastcall IsObjArray();
	TDynArrayKind __fastcall ToKnownType(bool exactType = false);
	void __fastcall InternalSetLength(NativeUInt NewLength);
	
public:
	void __fastcall Init(void * aTypeInfo, void *aValue, System::PInteger aCountPointer = (System::PInteger)(0x0));
	void __fastcall InitSpecific(void * aTypeInfo, void *aValue, TDynArrayKind aKind, System::PInteger aCountPointer = (System::PInteger)(0x0), bool aCaseInsensitive = false);
	void __fastcall UseExternalCount(int &aCountPointer);
	void __fastcall Void();
	bool __fastcall IsVoid();
	int __fastcall Add(const void *Elem);
	int __fastcall New();
	void __fastcall AddArray(const void *DynArray, int aStartIndex = 0x0, int aCount = 0xffffffff);
	void __fastcall Insert(int Index, const void *Elem);
	void __fastcall Clear();
	void __fastcall Delete(int aIndex);
	void * __fastcall ElemPtr(int aIndex);
	int __fastcall IndexOf(const void *Elem);
	int __fastcall Find(const void *Elem)/* overload */;
	int __fastcall Find(const void *Elem, const TIntegerDynArray aIndex, TDynArraySortCompare aCompare)/* overload */;
	int __fastcall FindAndFill(void *Elem, PIntegerDynArray aIndex = (PIntegerDynArray)(0x0), TDynArraySortCompare aCompare = 0x0);
	int __fastcall FindAndDelete(void *Elem, PIntegerDynArray aIndex = (PIntegerDynArray)(0x0), TDynArraySortCompare aCompare = 0x0);
	int __fastcall FindAndUpdate(const void *Elem, PIntegerDynArray aIndex = (PIntegerDynArray)(0x0), TDynArraySortCompare aCompare = 0x0);
	int __fastcall FindAndAddIfNotExisting(const void *Elem, PIntegerDynArray aIndex = (PIntegerDynArray)(0x0), TDynArraySortCompare aCompare = 0x0);
	void __fastcall Sort();
	void __fastcall Reverse();
	void __fastcall CreateOrderedIndex(TIntegerDynArray &aIndex, TDynArraySortCompare aCompare);
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromStream(System::Classes::TCustomMemoryStream* Stream);
	char * __fastcall SaveTo(char * Dest)/* overload */;
	int __fastcall SaveToLength();
	System::RawByteString __fastcall SaveTo()/* overload */;
	char * __fastcall LoadFrom(char * Source);
	RawUTF8 __fastcall SaveToJSON();
	PUTF8Char __fastcall LoadFromJSON(PUTF8Char P, PUTF8Char aEndOfObject = (PUTF8Char)(0x0));
	void __fastcall Slice(void *Dest, unsigned aCount, unsigned aFirstIndex = (unsigned)(0x0));
	bool __fastcall Equals(const TDynArray &B);
	void __fastcall Copy(const TDynArray &Source);
	void __fastcall CopyFrom(const void *Source, int MaxElem);
	bool __fastcall ElemEquals(const void *A, const void *B);
	void __fastcall ElemClear(void *Elem);
	void __fastcall ElemCopy(const void *A, void *B);
	System::RawByteString __fastcall ElemSave(const void *Elem);
	void __fastcall ElemLoad(char * Source, void *Elem)/* overload */;
	System::RawByteString __fastcall ElemLoad(char * Source)/* overload */;
	void __fastcall ElemLoadClear(System::RawByteString &ElemLoaded);
	int __fastcall ElemLoadFind(char * Source);
	__property int Count = {read=GetCount, write=SetCount};
	__property int Capacity = {read=GetCapacity, write=SetCapacity};
	__property TDynArraySortCompare Compare = {read=fCompare, write=SetCompare};
	__property bool Sorted = {read=fSorted, write=fSorted};
	__property System::PPointer Value = {read=fValue};
	__property TDynArrayKind KnownType = {read=fKnownType};
	__property void * ArrayType = {read=fTypeInfo};
	__property RawUTF8 ArrayTypeName = {read=GetArrayTypeName};
	__property NativeUInt ElemSize = {read=fElemSize};
	__property void * ElemType = {read=fElemType};
};


typedef unsigned __fastcall (*THasher)(unsigned crc, char * buf, unsigned len);

typedef unsigned __fastcall (*TDynArrayHashOne)(const void *Elem, THasher Hasher);

typedef unsigned __fastcall (__closure *TOnDynArrayHashOne)(const void *Elem);

struct DECLSPEC_DRECORD TSynHash
{
public:
	unsigned Hash;
	unsigned Index;
};


typedef System::DynamicArray<TSynHash> TSynHashDynArray;

struct DECLSPEC_DRECORD TDynArrayHashed
{
private:
	void __fastcall SetCount(int aCount);
	void __fastcall SetCapacity(int aCapacity);
	int __fastcall GetCapacity();
	
public:
	TDynArray InternalDynArray;
	int __fastcall Count();
	System::PPointer __fastcall fValue();
	NativeUInt __fastcall ElemSize();
	void * __fastcall ElemType();
	TDynArrayKind __fastcall KnownType();
	void __fastcall Clear();
	int __fastcall Add(const void *Elem);
	void __fastcall Delete(int aIndex);
	System::RawByteString __fastcall SaveTo();
	char * __fastcall LoadFrom(char * Source);
	int __fastcall Find(const void *Elem);
	__property int Capacity = {read=GetCapacity, write=SetCapacity};
	
private:
	TDynArrayHashOne fHashElement;
	THasher fHasher;
	TSynHashDynArray fHashs;
	TEventDynArraySortCompare fEventCompare;
	unsigned __fastcall HashOneFromTypeInfo(const void *Elem);
	int __fastcall HashFind(unsigned aHashCode, const void *Elem);
	void __fastcall HashAdd(const void *Elem, unsigned aHashCode, int &result);
	unsigned __fastcall GetHashFromIndex(int aIndex);
	void __fastcall HashInit();
	
public:
	void __fastcall Init(void * aTypeInfo, void *aValue, TDynArrayHashOne aHashElement = 0x0, TDynArraySortCompare aCompare = 0x0, THasher aHasher = 0x0, System::PInteger aCountPointer = (System::PInteger)(0x0), bool aCaseInsensitive = false);
	void __fastcall InitSpecific(void * aTypeInfo, void *aValue, TDynArrayKind aKind, System::PInteger aCountPointer = (System::PInteger)(0x0), bool aCaseInsensitive = false);
	void __fastcall ReHash(TOnDynArrayHashOne aHasher = 0x0);
	int __fastcall FindHashed(const void *Elem);
	int __fastcall FindHashedAndFill(void *Elem);
	int __fastcall FindHashedForAdding(const void *Elem, /* out */ bool &wasAdded, unsigned aHashCode = (unsigned)(0x0));
	void * __fastcall AddUniqueName(const RawUTF8 aName, const RawUTF8 ExceptionMsg, const System::TVarRec *ExceptionArgs, const int ExceptionArgs_High);
	void * __fastcall AddAndMakeUniqueName(RawUTF8 aName);
	int __fastcall FindHashedAndUpdate(void *Elem, bool AddIfNotExisting);
	int __fastcall FindHashedAndDelete(void *Elem);
	__property unsigned Hash[int aIndex] = {read=GetHashFromIndex};
	__property TEventDynArraySortCompare EventCompare = {read=fEventCompare, write=fEventCompare};
	__property TDynArrayHashOne HashElement = {read=fHashElement};
};


__interface  INTERFACE_UUID("{A0D50BD0-0D20-4552-B365-1D63393511FC}") IObjectDynArray  : public System::IInterface 
{
	virtual int __fastcall Find(System::TObject* Instance) = 0 ;
	virtual int __fastcall Add(System::TObject* Instance) = 0 ;
	virtual void __fastcall Delete(int Index) = 0 ;
	virtual void __fastcall Sort(TDynArraySortCompare Compare) = 0 ;
	virtual void __fastcall Clear() = 0 ;
	virtual int __fastcall Count() = 0 ;
	virtual int __fastcall Capacity() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TObjectDynArrayWrapper : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
protected:
	void * *fValue;
	int fCount;
	
public:
	__fastcall TObjectDynArrayWrapper(void *aValue);
	__fastcall virtual ~TObjectDynArrayWrapper();
	int __fastcall Find(System::TObject* Instance);
	int __fastcall Add(System::TObject* Instance);
	void __fastcall Delete(int Index);
	void __fastcall Sort(TDynArraySortCompare Compare);
	void __fastcall Clear();
	int __fastcall Count();
	int __fastcall Capacity();
private:
	void *__IObjectDynArray;	// IObjectDynArray 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A0D50BD0-0D20-4552-B365-1D63393511FC}
	operator _di_IObjectDynArray()
	{
		_di_IObjectDynArray intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IObjectDynArray*(void) { return (IObjectDynArray*)&__IObjectDynArray; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TObjectHash : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TSynHashDynArray fHashs;
	void __fastcall HashInit(int aCountToHash);
	int __fastcall HashFind(unsigned aHashCode, System::TObject* Item);
	virtual unsigned __fastcall Hash(System::TObject* Item) = 0 ;
	virtual bool __fastcall Compare(System::TObject* Item1, System::TObject* Item2) = 0 ;
	virtual System::TObject* __fastcall Get(int Index) = 0 ;
	virtual int __fastcall Count() = 0 ;
	
public:
	int __fastcall Find(System::TObject* Item);
	void __fastcall Invalidate();
	bool __fastcall JustAdded();
public:
	/* TObject.Create */ inline __fastcall TObjectHash() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TObjectHash() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPersistentWithCustomCreate : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
public:
	__fastcall virtual TPersistentWithCustomCreate();
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TPersistentWithCustomCreate() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TInterfacedObjectWithCustomCreate : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	__fastcall virtual TInterfacedObjectWithCustomCreate();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TInterfacedObjectWithCustomCreate() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynPersistent : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall virtual TSynPersistent();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynPersistent() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TSynPersistentLocked : public TSynPersistent
{
	typedef TSynPersistent inherited;
	
protected:
	_RTL_CRITICAL_SECTION fLock;
	System::StaticArray<__int64, 12> PaddingForLock;
	
public:
	__fastcall virtual TSynPersistentLocked();
	__fastcall virtual ~TSynPersistentLocked();
	void __fastcall Lock();
	void __fastcall UnLock();
};


class PASCALIMPLEMENTATION TInterfacedObjectLocked : public TInterfacedObjectWithCustomCreate
{
	typedef TInterfacedObjectWithCustomCreate inherited;
	
protected:
	_RTL_CRITICAL_SECTION fLock;
	System::StaticArray<__int64, 12> PaddingForLock;
	
public:
	__fastcall virtual TInterfacedObjectLocked();
	__fastcall virtual ~TInterfacedObjectLocked();
	void __fastcall Lock();
	void __fastcall UnLock();
};


typedef System::TMetaClass* TInterfacedObjectWithCustomCreateClass;

typedef System::TMetaClass* TPersistentWithCustomCreateClass;

typedef System::TMetaClass* TSynPersistentClass;

struct DECLSPEC_DRECORD TSynNameValueItem
{
public:
	RawUTF8 Name;
	RawUTF8 Value;
	NativeInt Tag;
};


typedef System::DynamicArray<TSynNameValueItem> TSynNameValueItemDynArray;

typedef RawUTF8 __fastcall (__closure *TConvertRawUTF8)(const RawUTF8 text);

typedef void __fastcall (__closure *TSynNameValueNotify)(const TSynNameValueItem &Item, NativeInt Index);

struct DECLSPEC_DRECORD TSynNameValue
{
public:
	RawUTF8 operator[](const RawUTF8 aName) { return this->Str[aName]; }
	
public:
	TDynArrayHashed fDynArray;
	TSynNameValueNotify fOnAdd;
	System::RawByteString __fastcall GetBlobData();
	void __fastcall SetBlobData(const System::RawByteString aValue);
	RawUTF8 __fastcall GetStr(const RawUTF8 aName);
	__int64 __fastcall GetInt(const RawUTF8 aName);
	bool __fastcall GetBool(const RawUTF8 aName);
	TSynNameValueItemDynArray List;
	int Count;
	void __fastcall Init(bool aCaseSensitive);
	void __fastcall Add(const RawUTF8 aName, const RawUTF8 aValue, NativeInt aTag = (NativeInt)(0x0));
	void __fastcall InitFromIniSection(PUTF8Char Section, TConvertRawUTF8 OnTheFlyConvert = 0x0, TSynNameValueNotify OnAdd = 0x0);
	int __fastcall Find(const RawUTF8 aName);
	int __fastcall FindStart(const RawUTF8 aUpperName);
	bool __fastcall Delete(const RawUTF8 aName);
	RawUTF8 __fastcall Value(const RawUTF8 aName, const RawUTF8 aDefaultValue = RawUTF8());
	__int64 __fastcall ValueInt(const RawUTF8 aName, const __int64 aDefaultValue = 0LL);
	bool __fastcall ValueBool(const RawUTF8 aName);
	RawUTF8 __fastcall AsCSV(const RawUTF8 KeySeparator = "=", const RawUTF8 ValueSeparator = "\r\n");
	void __fastcall AsNameValues(/* out */ TRawUTF8DynArray &Names, /* out */ TRawUTF8DynArray &Values);
	System::Variant __fastcall ValueVariantOrNull(const RawUTF8 aName);
	void __fastcall AsDocVariant(/* out */ System::Variant &DocVariant)/* overload */;
	System::Variant __fastcall AsDocVariant()/* overload */;
	int __fastcall MergeDocVariant(System::Variant &DocVariant);
	bool __fastcall Initialized();
	void __fastcall SetBlobDataPtr(void * aValue);
	__property System::RawByteString BlobData = {read=GetBlobData, write=SetBlobData};
	__property TSynNameValueNotify OnAfterAdd = {read=fOnAdd, write=fOnAdd};
	__property RawUTF8 Str[const RawUTF8 aName] = {read=GetStr};
	__property __int64 Int[const RawUTF8 aName] = {read=GetInt};
	__property bool Bool[const RawUTF8 aName] = {read=GetBool};
};


typedef TSynNameValue *PSynNameValue;

typedef System::SmallString<38> TGUIDShortString;

enum DECLSPEC_DENUM TSQLDBFieldType : unsigned char { ftUnknown, ftNull, ftInt64, ftDouble, ftCurrency, ftDate, ftUTF8, ftBlob };

typedef System::Set<TSQLDBFieldType, TSQLDBFieldType::ftUnknown, TSQLDBFieldType::ftBlob> TSQLDBFieldTypes;

typedef System::DynamicArray<TSQLDBFieldType> TSQLDBFieldTypeDynArray;

typedef System::StaticArray<TSQLDBFieldType, 64> TSQLDBFieldTypeArray;

struct DECLSPEC_DRECORD TSQLVar
{
	
public:
	TSQLDBFieldType VType;
	union
	{
		struct 
		{
			void *VBlob;
			int VBlobLen;
		};
		struct 
		{
			char *VText;
		};
		struct 
		{
			System::CurrencyBase VCurrency;
		};
		struct 
		{
			System::TDateTimeBase VDateTime;
		};
		struct 
		{
			double VDouble;
		};
		struct 
		{
			__int64 VInt64;
		};
		
	};
};


typedef System::DynamicArray<TSQLVar> TSQLVarDynArray;

typedef System::Set<System::Int8, 0, 63> TSQLFieldBits;

typedef short TSQLFieldIndex;

typedef System::DynamicArray<short> TSQLFieldIndexDynArray;

typedef TSQLFieldBits *PSQLFieldBits;

enum DECLSPEC_DENUM TSQLParamType : unsigned char { sptUnknown, sptInteger, sptFloat, sptText, sptBlob, sptDateTime };

typedef System::DynamicArray<TSQLParamType> TSQLParamTypeDynArray;

typedef void __fastcall (__closure *TDynArrayJSONCustomWriter)(TTextWriter* const aWriter, const void *aValue);

typedef PUTF8Char __fastcall (__closure *TDynArrayJSONCustomReader)(PUTF8Char P, void *aValue, /* out */ bool &aValid);

enum DECLSPEC_DENUM TJSONCustomParserRTTIType : unsigned char { ptArray, ptBoolean, ptByte, ptCardinal, ptCurrency, ptDouble, ptInt64, ptInteger, ptRawByteString, ptRawJSON, ptRawUTF8, ptRecord, ptSingle, ptString, ptSynUnicode, ptDateTime, ptGUID, ptID, ptTimeLog, ptVariant, ptWideString, ptWord, ptCustom };

enum DECLSPEC_DENUM TJSONCustomParserSerializationOption : unsigned char { soReadIgnoreUnknownFields, soWriteHumanReadable, soCustomVariantCopiedByReference };

typedef System::Set<TJSONCustomParserSerializationOption, TJSONCustomParserSerializationOption::soReadIgnoreUnknownFields, TJSONCustomParserSerializationOption::soCustomVariantCopiedByReference> TJSONCustomParserSerializationOptions;

typedef System::DynamicArray<TJSONCustomParserRTTI*> TJSONCustomParserRTTIs;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSONCustomParserRTTI : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	RawUTF8 fPropertyName;
	RawUTF8 fFullPropertyName;
	TJSONCustomParserRTTIType fPropertyType;
	RawUTF8 fCustomTypeName;
	TJSONCustomParserRTTIs fNestedProperty;
	int fDataSize;
	int fNestedDataSize;
	virtual void __fastcall ComputeDataSizeAfterAdd();
	void __fastcall ComputeNestedDataSize();
	void __fastcall ComputeFullPropertyName();
	void __fastcall FinalizeNestedRecord(System::PByte &Data);
	void __fastcall FinalizeNestedArray(NativeUInt &Data);
	void __fastcall AllocateNestedArray(NativeUInt &Data, int NewLength);
	void __fastcall ReAllocateNestedArray(NativeUInt &Data, int NewLength);
	
public:
	__fastcall TJSONCustomParserRTTI(const RawUTF8 aPropertyName, TJSONCustomParserRTTIType aPropertyType);
	__classmethod TJSONCustomParserRTTI* __fastcall CreateFromRTTI(const RawUTF8 PropertyName, void * Info, int ItemSize);
	__classmethod TJSONCustomParserRTTI* __fastcall CreateFromTypeName(const RawUTF8 aPropertyName, const RawUTF8 aCustomRecordTypeName);
	__classmethod TJSONCustomParserRTTIType __fastcall TypeNameToSimpleRTTIType(const RawUTF8 TypeName)/* overload */;
	__classmethod TJSONCustomParserRTTIType __fastcall TypeNameToSimpleRTTIType(System::PShortString TypeName)/* overload */;
	__classmethod TJSONCustomParserRTTIType __fastcall TypeNameToSimpleRTTIType(PUTF8Char TypeName, int TypeNameLen, RawUTF8 &ItemTypeName)/* overload */;
	__classmethod TJSONCustomParserRTTIType __fastcall TypeInfoToSimpleRTTIType(void * Info, int ItemSize);
	virtual bool __fastcall ReadOneLevel(PUTF8Char &P, System::PByte &Data, TJSONCustomParserSerializationOptions Options);
	virtual void __fastcall WriteOneLevel(TTextWriter* aWriter, System::PByte &P, TJSONCustomParserSerializationOptions Options);
	__property RawUTF8 CustomTypeName = {read=fCustomTypeName};
	__property RawUTF8 PropertyName = {read=fPropertyName};
	__property RawUTF8 FullPropertyName = {read=fFullPropertyName};
	__property TJSONCustomParserRTTIType PropertyType = {read=fPropertyType, nodefault};
	__property TJSONCustomParserRTTIs NestedProperty = {read=fNestedProperty};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJSONCustomParserRTTI() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSONCustomParserCustom : public TJSONCustomParserRTTI
{
	typedef TJSONCustomParserRTTI inherited;
	
protected:
	void *fCustomTypeInfo;
	
public:
	__fastcall virtual TJSONCustomParserCustom(const RawUTF8 aPropertyName, const RawUTF8 aCustomTypeName);
	virtual void __fastcall CustomWriter(TTextWriter* const aWriter, const void *aValue) = 0 ;
	virtual PUTF8Char __fastcall CustomReader(PUTF8Char P, void *aValue, /* out */ char &EndOfObject) = 0 ;
	virtual void __fastcall FinalizeItem(void * Data);
	__property void * CustomTypeInfo = {read=fCustomTypeInfo};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJSONCustomParserCustom() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TJSONCustomParserCustomSimpleKnownType : unsigned char { ktNone, ktEnumeration, ktSet, ktGUID, ktFixedArray, ktStaticArray, ktDynamicArray };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSONCustomParserCustomSimple : public TJSONCustomParserCustom
{
	typedef TJSONCustomParserCustom inherited;
	
protected:
	TJSONCustomParserCustomSimpleKnownType fKnownType;
	void *fTypeData;
	int fFixedSize;
	TJSONCustomParserRTTI* fNestedArray;
	
public:
	__fastcall TJSONCustomParserCustomSimple(const RawUTF8 aPropertyName, const RawUTF8 aCustomTypeName, void * aCustomType);
	__fastcall TJSONCustomParserCustomSimple(const RawUTF8 aPropertyName, unsigned aFixedSize);
	__fastcall virtual ~TJSONCustomParserCustomSimple();
	virtual void __fastcall CustomWriter(TTextWriter* const aWriter, const void *aValue);
	virtual PUTF8Char __fastcall CustomReader(PUTF8Char P, void *aValue, /* out */ char &EndOfObject);
	__property TJSONCustomParserCustomSimpleKnownType KnownType = {read=fKnownType, nodefault};
	__property TJSONCustomParserRTTI* NestedArray = {read=fNestedArray};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSONCustomParserCustomRecord : public TJSONCustomParserCustom
{
	typedef TJSONCustomParserCustom inherited;
	
protected:
	int fCustomTypeIndex;
	void * __fastcall GetJSONCustomParserRegistration();
	
public:
	__fastcall TJSONCustomParserCustomRecord(const RawUTF8 aPropertyName, int aCustomTypeIndex)/* overload */;
	virtual void __fastcall CustomWriter(TTextWriter* const aWriter, const void *aValue);
	virtual PUTF8Char __fastcall CustomReader(PUTF8Char P, void *aValue, /* out */ char &EndOfObject);
	virtual void __fastcall FinalizeItem(void * Data);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJSONCustomParserCustomRecord() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TJSONCustomParserRTTIExpectedEnd : unsigned char { eeNothing, eeSquare, eeCurly, eeEndKeyWord };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSONRecordAbstract : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::Contnrs::TObjectList* fItems;
	TJSONCustomParserRTTI* fRoot;
	TJSONCustomParserSerializationOptions fOptions;
	TJSONCustomParserRTTI* __fastcall AddItem(const RawUTF8 aPropertyName, TJSONCustomParserRTTIType aPropertyType, const RawUTF8 aCustomRecordTypeName);
	
public:
	__fastcall TJSONRecordAbstract();
	void __fastcall CustomWriter(TTextWriter* const aWriter, const void *aValue);
	PUTF8Char __fastcall CustomReader(PUTF8Char P, void *aValue, /* out */ bool &aValid);
	__fastcall virtual ~TJSONRecordAbstract();
	__property TJSONCustomParserRTTI* Root = {read=fRoot};
	__property TJSONCustomParserSerializationOptions Options = {read=fOptions, write=fOptions, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSONRecordRTTI : public TJSONRecordAbstract
{
	typedef TJSONRecordAbstract inherited;
	
protected:
	void *fRecordTypeInfo;
	TJSONCustomParserRTTI* __fastcall AddItemFromRTTI(const RawUTF8 PropertyName, void * Info, int ItemSize);
	void __fastcall FromEnhancedRTTI(TJSONCustomParserRTTI* Props, void * Info);
	
public:
	__fastcall TJSONRecordRTTI(void * aRecordTypeInfo, TJSONCustomParserRTTI* aRoot);
	__property void * RecordTypeInfo = {read=fRecordTypeInfo};
public:
	/* TJSONRecordAbstract.Destroy */ inline __fastcall virtual ~TJSONRecordRTTI() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSONRecordTextDefinition : public TJSONRecordAbstract
{
	typedef TJSONRecordAbstract inherited;
	
protected:
	RawUTF8 fDefinition;
	void __fastcall Parse(TJSONCustomParserRTTI* Props, PUTF8Char &P, TJSONCustomParserRTTIExpectedEnd PEnd);
	
public:
	__fastcall TJSONRecordTextDefinition(void * aRecordTypeInfo, const RawUTF8 aDefinition);
	__classmethod TJSONRecordTextDefinition* __fastcall FromCache(void * aTypeInfo, const RawUTF8 aDefinition);
	__property RawUTF8 Definition = {read=fDefinition};
public:
	/* TJSONRecordAbstract.Destroy */ inline __fastcall virtual ~TJSONRecordTextDefinition() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TSynLogInfo : unsigned char { sllNone, sllInfo, sllDebug, sllTrace, sllWarning, sllError, sllEnter, sllLeave, sllLastError, sllException, sllExceptionOS, sllMemory, sllStackTrace, sllFail, sllSQL, sllCache, sllResult, sllDB, sllHTTP, sllClient, sllServer, sllServiceCall, sllServiceReturn, sllUserAuth, sllCustom1, sllCustom2, sllCustom3, sllCustom4, sllNewRun, sllDDDError, sllDDDInfo, sllMonitoring };

typedef System::Set<TSynLogInfo, TSynLogInfo::sllNone, TSynLogInfo::sllMonitoring> TSynLogInfos;

typedef System::DynamicArray<TSynLogInfo> TSynLogInfoDynArray;

enum DECLSPEC_DENUM TTextWriterWriteObjectOption : unsigned char { woHumanReadable, woDontStoreDefault, woFullExpand, woStoreClassName, woStorePointer, woStoreStoredFalse, woHumanReadableFullSetsAsStar, woHumanReadableEnumSetAsComment, woEnumSetsAsText, woDateTimeWithMagic, woSQLRawBlobAsBase64, woHideSynPersistentPassword };

typedef System::Set<TTextWriterWriteObjectOption, TTextWriterWriteObjectOption::woHumanReadable, TTextWriterWriteObjectOption::woHideSynPersistentPassword> TTextWriterWriteObjectOptions;

typedef bool __fastcall (__closure *TOnTextWriterEcho)(TTextWriter* Sender, TSynLogInfo Level, const RawUTF8 Text);

typedef System::TMetaClass* TTextWriterClass;

enum DECLSPEC_DENUM TTextWriterJSONFormat : unsigned char { jsonCompact, jsonHumanReadable, jsonUnquotedPropName };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TTextWriter : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TOnTextWriterEcho> _TTextWriter__1;
	
	
protected:
	char *B;
	char *BEnd;
	System::Classes::TStream* fStream;
	unsigned fInitialStreamPosition;
	bool fStreamIsOwned;
	bool fFlushToStreamNoAutoResize;
	unsigned fTotalFileSize;
	int fTempBufSize;
	char *fTempBuf;
	int fHumanReadableLevel;
	bool fEndOfLineCRLF;
	RawUTF8 fEchoBuf;
	int fEchoStart;
	_TTextWriter__1 fEchos;
	TTextWriter* fInternalJSONWriter;
	unsigned __fastcall GetLength();
	void __fastcall SetStream(System::Classes::TStream* aStream);
	int __fastcall EchoFlush();
	void __fastcall InternalAddFixedAnsi(char * Source, unsigned SourceChars, const TWordDynArray AnsiToWide, TTextWriterKind Escape);
	
public:
	__fastcall TTextWriter(System::Classes::TStream* aStream, int aBufSize);
	__fastcall TTextWriter(int aBufSize);
	__fastcall TTextWriter(const System::Sysutils::TFileName aFileName, int aBufSize);
	__fastcall virtual ~TTextWriter();
	__classmethod void __fastcall SetDefaultJSONClass(TTextWriterClass aClass);
	RawUTF8 __fastcall Text();
	void __fastcall SetText(RawUTF8 &result);
	void __fastcall ForceContent(const RawUTF8 text);
	virtual void __fastcall FlushToStream();
	void __fastcall FlushFinal();
	void __fastcall EchoAdd(const TOnTextWriterEcho aEcho);
	void __fastcall EchoRemove(const TOnTextWriterEcho aEcho);
	void __fastcall EchoReset();
	void __fastcall Add(char c)/* overload */;
	void __fastcall Add(char c1, char c2)/* overload */;
	void __fastcall Add(__int64 Value)/* overload */;
	void __fastcall Add(NativeInt Value)/* overload */;
	void __fastcall AddCurr64(const __int64 Value)/* overload */;
	void __fastcall AddCurr64(const System::Currency Value)/* overload */;
	void __fastcall AddTimeLog(System::PInt64 Value);
	void __fastcall AddDateTime(System::PDateTime Value, char FirstChar = '\x54', char QuoteChar = '\0')/* overload */;
	void __fastcall AddDateTime(const System::TDateTime Value)/* overload */;
	void __fastcall AddU(unsigned Value);
	void __fastcall Add(const GUID &guid)/* overload */;
	void __fastcall AddDouble(double Value);
	void __fastcall AddSingle(float Value);
	void __fastcall Add(System::Extended Value, int precision)/* overload */;
	void __fastcall AddFloatStr(PUTF8Char P);
	void __fastcall Add(const RawUTF8 Format, const System::TVarRec *Values, const int Values_High, TTextWriterKind Escape = (TTextWriterKind)(0x0))/* overload */;
	void __fastcall Add(const System::TVarRec *Values, const int Values_High)/* overload */;
	void __fastcall AddCR();
	void __fastcall AddEndOfLine(TSynLogInfo aLevel = (TSynLogInfo)(0x0));
	void __fastcall AddCRAndIndent();
	void __fastcall AddChars(char aChar, int aCount);
	void __fastcall Add2(int Value);
	void __fastcall AddCurrentLogTime();
	void __fastcall AddMicroSec(unsigned MS);
	void __fastcall Add4(int Value);
	void __fastcall Add3(int Value);
	void __fastcall AddLine(const System::ShortString &Text);
	void __fastcall AddString(const RawUTF8 Text);
	void __fastcall AddStrings(const RawUTF8 *Text, const int Text_High)/* overload */;
	void __fastcall AddStrings(const RawUTF8 Text, int count)/* overload */;
	void __fastcall AddShort(const System::ShortString &Text);
	void __fastcall AddStringCopy(const RawUTF8 Text, int start, int len);
	void __fastcall AddTrimLeftLowerCase(System::PShortString Text);
	void __fastcall AddPropName(const System::ShortString &PropName);
	void __fastcall AddFieldName(const RawUTF8 FieldName)/* overload */;
	void __fastcall AddFieldName(PUTF8Char FieldName, int FieldNameLen)/* overload */;
	void __fastcall AddClassName(System::TClass aClass);
	void __fastcall AddInstanceName(System::TObject* Instance, char SepChar);
	void __fastcall AddInstancePointer(System::TObject* Instance, char SepChar);
	void __fastcall AddQuotedStringAsJSON(const RawUTF8 QuotedString);
	void __fastcall AddCSVInteger(const int *Integers, const int Integers_High)/* overload */;
	void __fastcall AddCSVDouble(const double *Doubles, const int Doubles_High)/* overload */;
	void __fastcall AddCSVUTF8(const RawUTF8 *Values, const int Values_High)/* overload */;
	void __fastcall AddCSVConst(const System::TVarRec *Values, const int Values_High);
	void __fastcall WrBase64(char * P, unsigned Len, bool withMagic);
	void __fastcall WrRecord(const void *Rec, void * TypeInfo);
	void __fastcall Add(PUTF8Char P, TTextWriterKind Escape)/* overload */;
	void __fastcall Add(PUTF8Char P, NativeInt Len, TTextWriterKind Escape)/* overload */;
	void __fastcall AddW(PWORD P, NativeInt Len, TTextWriterKind Escape);
	void __fastcall AddAnsiString(const System::AnsiString s, TTextWriterKind Escape)/* overload */;
	void __fastcall AddAnyAnsiString(const System::RawByteString s, TTextWriterKind Escape, int CodePage = 0xffffffff);
	void __fastcall AddAnyAnsiBuffer(char * P, int Len, TTextWriterKind Escape, int CodePage);
	void __fastcall AddNoJSONEscape(void * P)/* overload */;
	void __fastcall AddNoJSONEscape(void * P, int Len)/* overload */;
	void __fastcall AddNoJSONEscapeUTF8(const System::RawByteString text);
	void __fastcall AddQuotedStr(PUTF8Char Text, char Quote, int TextLen = 0x0);
	void __fastcall AddHtmlEscape(PUTF8Char Text)/* overload */;
	void __fastcall AddHtmlEscape(PUTF8Char Text, int TextLen)/* overload */;
	void __fastcall AddHtmlEscapeString(const System::UnicodeString Text);
	void __fastcall AddHtmlEscapeWiki(PUTF8Char P);
	void __fastcall AddXmlEscape(PUTF8Char Text);
	void __fastcall AddReplace(PUTF8Char Text, char Orig, char Replaced);
	void __fastcall AddBinToHex(void * Bin, int BinBytes);
	void __fastcall AddBinToHexDisplay(void * Bin, int BinBytes);
	void __fastcall AddPointer(NativeUInt P);
	void __fastcall AddByteToHex(System::Byte Value);
	void __fastcall AddInt18ToChars3(unsigned Value);
	void __fastcall AddNoJSONEscapeW(PWORD WideChar, int WideCharCount);
	void __fastcall AddJSONEscape(void * P, NativeInt Len = (NativeInt)(0x0))/* overload */;
	void __fastcall AddJSONEscapeString(const System::UnicodeString s);
	void __fastcall AddJSONEscapeAnsiString(const System::AnsiString s);
	void __fastcall AddNoJSONEscapeString(const System::UnicodeString s);
	void __fastcall AddJSONEscapeW(PWORD P, NativeInt Len = (NativeInt)(0x0));
	void __fastcall AddJSONEscape(const System::TVarRec &V)/* overload */;
	void __fastcall Add(const System::TVarRec &V, TTextWriterKind Escape = (TTextWriterKind)(0x0))/* overload */;
	void __fastcall AddJSONEscape(const System::TVarRec *NameValuePairs, const int NameValuePairs_High)/* overload */;
	void __fastcall AddJSON(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High);
	void __fastcall AddDynArrayJSON(const TDynArray &aDynArray)/* overload */;
	void __fastcall AddDynArrayJSON(void * aTypeInfo, void *aValue)/* overload */;
	void __fastcall AddDynArrayJSONAsString(void * aTypeInfo, void *aValue);
	void __fastcall AddRecordJSON(const void *Rec, void * TypeInfo);
	void __fastcall AddVariant(const System::Variant &Value, TTextWriterKind Escape = (TTextWriterKind)(0x1));
	void __fastcall AddVoidRecordJSON(void * TypeInfo);
	virtual void __fastcall AddTypedJSON(void * aTypeInfo, const void *aValue);
	virtual void __fastcall WriteObject(System::TObject* Value, TTextWriterWriteObjectOptions Options = (TTextWriterWriteObjectOptions() << TTextWriterWriteObjectOption::woDontStoreDefault ));
	void __fastcall WriteObjectAsString(System::TObject* Value, TTextWriterWriteObjectOptions Options = (TTextWriterWriteObjectOptions() << TTextWriterWriteObjectOption::woDontStoreDefault ));
	PUTF8Char __fastcall AddJSONToXML(PUTF8Char JSON, PUTF8Char ArrayName = (PUTF8Char)(0x0), PUTF8Char EndOfObject = (PUTF8Char)(0x0));
	PUTF8Char __fastcall AddJSONReformat(PUTF8Char JSON, TTextWriterJSONFormat Format, PUTF8Char EndOfObject);
	__classmethod void __fastcall RegisterCustomJSONSerializer(void * aTypeInfo, TDynArrayJSONCustomReader aReader, TDynArrayJSONCustomWriter aWriter);
	__classmethod TJSONRecordAbstract* __fastcall RegisterCustomJSONSerializerFromText(void * aTypeInfo, const RawUTF8 aRTTIDefinition)/* overload */;
	__classmethod void __fastcall RegisterCustomJSONSerializerFromText(const System::TVarRec *aTypeInfoTextDefinitionPairs, const int aTypeInfoTextDefinitionPairs_High)/* overload */;
	__classmethod bool __fastcall RegisterCustomJSONSerializerSetOptions(void * aTypeInfo, TJSONCustomParserSerializationOptions aOptions, bool aAddIfNotExisting = false);
	__classmethod TJSONRecordAbstract* __fastcall RegisterCustomJSONSerializerFindParser(void * aTypeInfo, bool aAddIfNotExisting = false);
	__classmethod void __fastcall RegisterCustomJSONSerializerFromTextSimpleType(void * aTypeInfo, RawUTF8 aTypeName = RawUTF8())/* overload */;
	__classmethod void __fastcall RegisterCustomJSONSerializerFromTextSimpleType(void * const *aTypeInfos, const int aTypeInfos_High)/* overload */;
	__classmethod void __fastcall UnRegisterCustomJSONSerializer(void * aTypeInfo);
	void __fastcall AddOnSameLine(PUTF8Char P)/* overload */;
	void __fastcall AddOnSameLine(PUTF8Char P, NativeInt Len)/* overload */;
	void __fastcall AddOnSameLineW(PWORD P, NativeInt Len);
	char __fastcall LastChar();
	NativeUInt __fastcall PendingBytes();
	__property unsigned WrittenBytes = {read=fTotalFileSize, nodefault};
	void __fastcall CancelLastChar()/* overload */;
	void __fastcall CancelLastChar(char aCharToCancel)/* overload */;
	void __fastcall CancelLastComma();
	void __fastcall CancelAll();
	__property unsigned TextLength = {read=GetLength, nodefault};
	__property bool FlushToStreamNoAutoResize = {read=fFlushToStreamNoAutoResize, write=fFlushToStreamNoAutoResize, nodefault};
	__property bool EndOfLineCRLF = {read=fEndOfLineCRLF, write=fEndOfLineCRLF, nodefault};
	__property System::Classes::TStream* Stream = {read=fStream, write=SetStream};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TJSONWriter : public TTextWriter
{
	typedef TTextWriter inherited;
	
protected:
	bool fExpand;
	bool fWithID;
	TSQLFieldIndexDynArray fFields;
	int fStartDataPosition;
	
public:
	TRawUTF8DynArray ColNames;
	__fastcall TJSONWriter(System::Classes::TStream* aStream, bool Expand, bool withID, const TSQLFieldBits &Fields)/* overload */;
	__fastcall TJSONWriter(System::Classes::TStream* aStream, bool Expand, bool withID, const TSQLFieldIndexDynArray Fields)/* overload */;
	void __fastcall CancelAllVoid();
	void __fastcall AddColumns(int aKnownRowsCount = 0x0);
	void __fastcall ChangeExpandedFields(bool aWithID, const TSQLFieldIndexDynArray aFields)/* overload */;
	void __fastcall EndJSONObject(int aKnownRowsCount, int aRowsCount);
	void __fastcall TrimFirstRow();
	__property bool Expand = {read=fExpand, write=fExpand, nodefault};
	__property bool WithID = {read=fWithID, nodefault};
	__property TSQLFieldIndexDynArray Fields = {read=fFields};
	__property int StartDataPosition = {read=fStartDataPosition, nodefault};
public:
	/* TTextWriter.CreateOwnedStream */ inline __fastcall TJSONWriter(int aBufSize) : TTextWriter(aBufSize) { }
	/* TTextWriter.CreateOwnedFileStream */ inline __fastcall TJSONWriter(const System::Sysutils::TFileName aFileName, int aBufSize) : TTextWriter(aFileName, aBufSize) { }
	/* TTextWriter.Destroy */ inline __fastcall virtual ~TJSONWriter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynPersistentWithPassword : public TSynPersistent
{
	typedef TSynPersistent inherited;
	
protected:
	RawUTF8 fPassWord;
	unsigned fKey;
	unsigned __fastcall GetKey();
	RawUTF8 __fastcall GetPassWordPlain();
	void __fastcall SetPassWordPlain(const RawUTF8 Value);
	
public:
	__classmethod RawUTF8 __fastcall ComputePassword(const RawUTF8 PlainPassword, unsigned CustomKey = (unsigned)(0x0));
	void * __fastcall GetPasswordFieldAddress();
	__property unsigned Key = {read=GetKey, write=fKey, nodefault};
	__property RawUTF8 PasswordPlain = {read=GetPassWordPlain, write=SetPassWordPlain};
public:
	/* TSynPersistent.Create */ inline __fastcall virtual TSynPersistentWithPassword() : TSynPersistent() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynPersistentWithPassword() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynUserPassword : public TSynPersistentWithPassword
{
	typedef TSynPersistentWithPassword inherited;
	
protected:
	RawUTF8 fUserName;
	
__published:
	__property RawUTF8 UserName = {read=fUserName, write=fUserName};
	__property RawUTF8 Password = {read=fPassWord, write=fPassWord};
public:
	/* TSynPersistent.Create */ inline __fastcall virtual TSynUserPassword() : TSynPersistentWithPassword() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynUserPassword() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynConnectionDefinition : public TSynPersistentWithPassword
{
	typedef TSynPersistentWithPassword inherited;
	
protected:
	System::UnicodeString fKind;
	RawUTF8 fServerName;
	RawUTF8 fDatabaseName;
	RawUTF8 fUser;
	
public:
	__fastcall virtual TSynConnectionDefinition(const RawUTF8 JSON, unsigned Key);
	virtual RawUTF8 __fastcall SaveToJSON();
	
__published:
	__property System::UnicodeString Kind = {read=fKind, write=fKind};
	__property RawUTF8 ServerName = {read=fServerName, write=fServerName};
	__property RawUTF8 DatabaseName = {read=fDatabaseName, write=fDatabaseName};
	__property RawUTF8 User = {read=fUser, write=fUser};
	__property RawUTF8 Password = {read=fPassWord, write=fPassWord};
public:
	/* TSynPersistent.Create */ inline __fastcall virtual TSynConnectionDefinition() : TSynPersistentWithPassword() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynConnectionDefinition() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TSynCriticalSection : public System::Syncobjs::TCriticalSection
{
	typedef System::Syncobjs::TCriticalSection inherited;
	
protected:
	System::StaticArray<__int64, 12> PaddingForLock;
public:
	/* TCriticalSection.Create */ inline __fastcall TSynCriticalSection() : System::Syncobjs::TCriticalSection() { }
	/* TCriticalSection.Destroy */ inline __fastcall virtual ~TSynCriticalSection() { }
	
};


class PASCALIMPLEMENTATION TSynCache : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int fFindLastAddedIndex;
	TSynNameValue fNameValue;
	unsigned fValueSize;
	unsigned fMaxCacheRamUsed;
	
public:
	__fastcall TSynCache(unsigned aMaxCacheRamUsed, bool aCaseSensitive);
	RawUTF8 __fastcall Find(const RawUTF8 aKey, PPtrInt aResultTag);
	void __fastcall Add(const RawUTF8 aValue, NativeInt aTag);
	bool __fastcall Reset();
	int __fastcall Count();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynCache() { }
	
};


class PASCALIMPLEMENTATION TObjectListHashedAbstract : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TObjectDynArray fList;
	int fCount;
	TDynArrayHashed fHash;
	bool fFreeItems;
	bool fHashValid;
	bool fHashed;
	
public:
	__fastcall TObjectListHashedAbstract(bool aFreeItems);
	__fastcall virtual ~TObjectListHashedAbstract();
	virtual int __fastcall Add(System::TObject* aObject, /* out */ bool &wasAdded) = 0 ;
	virtual int __fastcall IndexOf(System::TObject* aObject) = 0 ;
	void __fastcall Delete(int aIndex)/* overload */;
	void __fastcall Delete(System::TObject* aObject)/* overload */;
	__property TObjectDynArray List = {read=fList};
	__property int Count = {read=fCount, nodefault};
	__property TDynArrayHashed Hash = {read=fHash};
};


class PASCALIMPLEMENTATION TObjectListHashed : public TObjectListHashedAbstract
{
	typedef TObjectListHashedAbstract inherited;
	
public:
	virtual int __fastcall Add(System::TObject* aObject, /* out */ bool &wasAdded);
	virtual int __fastcall IndexOf(System::TObject* aObject);
public:
	/* TObjectListHashedAbstract.Create */ inline __fastcall TObjectListHashed(bool aFreeItems) : TObjectListHashedAbstract(aFreeItems) { }
	/* TObjectListHashedAbstract.Destroy */ inline __fastcall virtual ~TObjectListHashed() { }
	
};


typedef void * __fastcall (*TObjectListPropertyHashedAccessProp)(System::TObject* aObject);

class PASCALIMPLEMENTATION TObjectListPropertyHashed : public TObjectListHashedAbstract
{
	typedef TObjectListHashedAbstract inherited;
	
protected:
	TObjectListPropertyHashedAccessProp fSubPropAccess;
	unsigned __fastcall IntHash(const void *Elem);
	int __fastcall IntComp(const void *A, const void *B);
	void __fastcall IntHashValid();
	
public:
	__fastcall TObjectListPropertyHashed(TObjectListPropertyHashedAccessProp aSubPropAccess, TDynArrayHashOne aHashElement, TDynArraySortCompare aCompare, bool aFreeItems);
	virtual int __fastcall Add(System::TObject* aObject, /* out */ bool &wasAdded);
	virtual int __fastcall IndexOf(System::TObject* aObject);
public:
	/* TObjectListHashedAbstract.Destroy */ inline __fastcall virtual ~TObjectListPropertyHashed() { }
	
};


class PASCALIMPLEMENTATION TObjectListLocked : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
protected:
	_RTL_CRITICAL_SECTION fLock;
	System::StaticArray<__int64, 10> PaddingForLock;
	
public:
	__fastcall TObjectListLocked(bool AOwnsObjects);
	__fastcall virtual ~TObjectListLocked();
	void __fastcall Lock();
	void __fastcall UnLock();
};


class PASCALIMPLEMENTATION TRawUTF8List : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	RawUTF8 operator[](NativeInt Index) { return this->Strings[Index]; }
	
protected:
	NativeInt fCount;
	TRawUTF8DynArray fList;
	TObjectDynArray fObjects;
	bool fObjectsOwned;
	char fNameValueSep;
	bool fCaseSensitive;
	System::Classes::TNotifyEvent fOnChange;
	System::Classes::TNotifyEvent fOnChangeHidden;
	bool fOnChangeTrigerred;
	NativeInt fOnChangeLevel;
	virtual void __fastcall Changed();
	void __fastcall OnChangeHidden(System::TObject* Sender);
	void __fastcall SetCapacity(const NativeInt Value);
	NativeInt __fastcall GetCapacity();
	void __fastcall Put(NativeInt Index, const RawUTF8 Value);
	NativeInt __fastcall GetCount();
	void __fastcall PutObject(NativeInt Index, System::TObject* const Value);
	RawUTF8 __fastcall GetName(NativeInt Index);
	RawUTF8 __fastcall GetValue(const RawUTF8 Name);
	void __fastcall SetValue(const RawUTF8 Name, const RawUTF8 Value);
	RawUTF8 __fastcall GetTextCRLF();
	void __fastcall SetTextCRLF(const RawUTF8 Value);
	void __fastcall SetTextPtr(PUTF8Char P, const RawUTF8 Delimiter);
	PPUtf8CharArray __fastcall GetListPtr();
	PPointerArray __fastcall GetObjectPtr();
	virtual void __fastcall SetCaseSensitive(bool Value);
	
public:
	__fastcall TRawUTF8List(bool aOwnObjects);
	__fastcall virtual ~TRawUTF8List();
	RawUTF8 __fastcall Get(NativeInt Index);
	System::TObject* __fastcall GetObject(NativeInt Index);
	System::TObject* __fastcall GetObjectByName(const RawUTF8 Name);
	NativeInt __fastcall Add(const RawUTF8 aText);
	NativeInt __fastcall AddObject(const RawUTF8 aText, System::TObject* aObject);
	virtual NativeInt __fastcall AddObjectIfNotExisting(const RawUTF8 aText, System::TObject* aObject, System::PBoolean wasAdded = (System::PBoolean)(0x0));
	void __fastcall AddRawUTF8List(TRawUTF8List* List);
	virtual void __fastcall Delete(NativeInt Index);
	NativeInt __fastcall DeleteFromName(const RawUTF8 Name);
	void __fastcall UpdateValue(const RawUTF8 Name, RawUTF8 &Value, bool ThenDelete);
	virtual void __fastcall Clear();
	virtual NativeInt __fastcall IndexOf(const RawUTF8 aText);
	NativeInt __fastcall IndexOfName(const RawUTF8 Name);
	NativeInt __fastcall IndexOfObject(System::TObject* aObject);
	RawUTF8 __fastcall GetValueAt(NativeInt Index);
	RawUTF8 __fastcall GetText(const RawUTF8 Delimiter = "\r\n");
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	void __fastcall SetText(const RawUTF8 aText, const RawUTF8 Delimiter = "\r\n");
	void __fastcall LoadFromFile(const System::Sysutils::TFileName FileName);
	void __fastcall SaveToStream(System::Classes::TStream* Dest, const RawUTF8 Delimiter = "\r\n");
	void __fastcall SaveToFile(const System::Sysutils::TFileName FileName, const RawUTF8 Delimiter = "\r\n");
	__property NativeInt Count = {read=GetCount, nodefault};
	__property NativeInt Capacity = {read=GetCapacity, write=SetCapacity, nodefault};
	__property RawUTF8 Strings[NativeInt Index] = {read=Get, write=Put/*, default*/};
	__property System::TObject* Objects[NativeInt Index] = {read=GetObject, write=PutObject};
	__property bool CaseSensitive = {read=fCaseSensitive, write=SetCaseSensitive, nodefault};
	__property RawUTF8 Names[NativeInt Index] = {read=GetName};
	__property RawUTF8 Values[const RawUTF8 Name] = {read=GetValue, write=SetValue};
	__property char NameValueSep = {read=fNameValueSep, write=fNameValueSep, nodefault};
	__property RawUTF8 Text = {read=GetTextCRLF, write=SetTextCRLF};
	__property System::Classes::TNotifyEvent OnChange = {read=fOnChange, write=fOnChange};
	__property PPUtf8CharArray ListPtr = {read=GetListPtr};
	__property PPointerArray ObjectPtr = {read=GetObjectPtr};
};


class PASCALIMPLEMENTATION TRawUTF8ListHashed : public TRawUTF8List
{
	typedef TRawUTF8List inherited;
	
protected:
	TDynArrayHashed fHash;
	bool fChanged;
	virtual void __fastcall SetCaseSensitive(bool Value);
	virtual void __fastcall Changed();
	
public:
	__fastcall TRawUTF8ListHashed(bool aOwnObjects);
	virtual NativeInt __fastcall IndexOf(const RawUTF8 aText);
	virtual NativeInt __fastcall AddObjectIfNotExisting(const RawUTF8 aText, System::TObject* aObject, System::PBoolean wasAdded = (System::PBoolean)(0x0));
public:
	/* TRawUTF8List.Destroy */ inline __fastcall virtual ~TRawUTF8ListHashed() { }
	
};


class PASCALIMPLEMENTATION TRawUTF8ListHashedLocked : public TRawUTF8ListHashed
{
	typedef TRawUTF8ListHashed inherited;
	
protected:
	_RTL_CRITICAL_SECTION fLock;
	System::StaticArray<__int64, 5> PaddingForLock;
	
public:
	__fastcall TRawUTF8ListHashedLocked(bool aOwnObjects);
	__fastcall virtual ~TRawUTF8ListHashedLocked();
	void __fastcall Lock();
	void __fastcall UnLock();
	virtual NativeInt __fastcall LockedIndexOf(const RawUTF8 aText);
};


class PASCALIMPLEMENTATION TRawUTF8MethodList : public TRawUTF8ListHashed
{
	typedef TRawUTF8ListHashed inherited;
	
protected:
	TMethodDynArray fEvents;
	
public:
	virtual void __fastcall Delete(NativeInt Index);
	virtual void __fastcall Clear();
	NativeInt __fastcall AddEvent(const RawUTF8 aName, const System::TMethod &aEvent);
	bool __fastcall GetEvent(NativeInt aIndex, /* out */ System::TMethod &aEvent);
	bool __fastcall GetEventByName(const RawUTF8 aText, /* out */ System::TMethod &aEvent);
public:
	/* TRawUTF8ListHashed.Create */ inline __fastcall TRawUTF8MethodList(bool aOwnObjects) : TRawUTF8ListHashed(aOwnObjects) { }
	
public:
	/* TRawUTF8List.Destroy */ inline __fastcall virtual ~TRawUTF8MethodList() { }
	
};


typedef System::StaticArray<RawUTF8, 8> Xlssyncommons__43;

struct DECLSPEC_DRECORD TMemoryMap
{
private:
	char *fBuf;
	unsigned fBufSize;
	NativeUInt fFile;
	NativeUInt fMap;
	__int64 fFileSize;
	bool fFileLocal;
	
public:
	bool __fastcall Map(NativeUInt aFile, unsigned aCustomSize = (unsigned)(0x0), __int64 aCustomOffset = 0LL)/* overload */;
	bool __fastcall Map(const System::Sysutils::TFileName aFileName)/* overload */;
	void __fastcall Map(void * aBuffer, unsigned aBufferSize)/* overload */;
	void __fastcall UnMap();
	__property char * Buffer = {read=fBuf};
	__property unsigned Size = {read=fBufSize};
};


class PASCALIMPLEMENTATION TMemoryMapText : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	PointerArray *fLines;
	int fLinesMax;
	int fCount;
	char *fMapEnd;
	TMemoryMap fMap;
	System::Sysutils::TFileName fFileName;
	TRawUTF8DynArray fAppendedLines;
	int fAppendedLinesCount;
	RawUTF8 __fastcall GetLine(int aIndex);
	System::UnicodeString __fastcall GetString(int aIndex);
	virtual void __fastcall LoadFromMap(int AverageLineLength = 0x20);
	virtual void __fastcall ProcessOneLine(PUTF8Char LineBeg, PUTF8Char LineEnd);
	
public:
	__fastcall virtual TMemoryMapText()/* overload */;
	__fastcall TMemoryMapText(const System::Sysutils::TFileName aFileName)/* overload */;
	__fastcall TMemoryMapText(PUTF8Char aFileContent, int aFileSize)/* overload */;
	__fastcall virtual ~TMemoryMapText();
	void __fastcall SaveToStream(System::Classes::TStream* Dest, const RawUTF8 Header);
	void __fastcall SaveToFile(System::Sysutils::TFileName FileName, const RawUTF8 Header = RawUTF8());
	virtual void __fastcall AddInMemoryLine(const RawUTF8 aNewLine);
	virtual void __fastcall AddInMemoryLinesClear();
	int __fastcall LineSize(int aIndex);
	bool __fastcall LineSizeSmallerThan(int aIndex, int aMinimalCount);
	virtual bool __fastcall LineContains(const RawUTF8 aUpperSearch, int aIndex);
	__property RawUTF8 Lines[int aIndex] = {read=GetLine};
	__property System::UnicodeString Strings[int aIndex] = {read=GetString};
	__property PPointerArray LinePointers = {read=fLines};
	__property TMemoryMap Map = {read=fMap};
	
__published:
	__property System::Sysutils::TFileName FileName = {read=fFileName, write=fFileName};
	__property int Count = {read=fCount, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TFakeWriterStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
public:
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual int __fastcall Seek(int Offset, System::Word Origin)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TFakeWriterStream() : System::Classes::TStream() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TFakeWriterStream() { }
	
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRawByteStringStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
protected:
	System::RawByteString fDataString;
	int fPosition;
	virtual void __fastcall SetSize(int NewSize)/* overload */;
	
public:
	__fastcall TRawByteStringStream(const System::RawByteString aString)/* overload */;
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Seek(int Offset, System::Word Origin)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	__property System::RawByteString DataString = {read=fDataString, write=fDataString};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRawByteStringStream() { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  SetSize(const __int64 NewSize){ System::Classes::TStream::SetSize(NewSize); }
	
public:
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynMemoryStream : public System::Classes::TCustomMemoryStream
{
	typedef System::Classes::TCustomMemoryStream inherited;
	
public:
	__fastcall TSynMemoryStream(const System::RawByteString aText)/* overload */;
	__fastcall TSynMemoryStream(void * Data, int DataLen)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynMemoryStream() { }
	
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TSynMemoryStreamMapped : public TSynMemoryStream
{
	typedef TSynMemoryStream inherited;
	
protected:
	TMemoryMap fMap;
	System::Classes::TFileStream* fFileStream;
	System::Sysutils::TFileName fFileName;
	
public:
	__fastcall TSynMemoryStreamMapped(const System::Sysutils::TFileName aFileName, unsigned aCustomSize, __int64 aCustomOffset)/* overload */;
	__fastcall TSynMemoryStreamMapped(NativeUInt aFile, unsigned aCustomSize, __int64 aCustomOffset)/* overload */;
	__fastcall virtual ~TSynMemoryStreamMapped();
	__property System::Sysutils::TFileName FileName = {read=fFileName};
public:
	/* TSynMemoryStream.Create */ inline __fastcall TSynMemoryStreamMapped(const System::RawByteString aText)/* overload */ : TSynMemoryStream(aText) { }
	/* TSynMemoryStream.Create */ inline __fastcall TSynMemoryStreamMapped(void * Data, int DataLen)/* overload */ : TSynMemoryStream(Data, DataLen) { }
	
};


enum DECLSPEC_DENUM TFileBufferWriterKind : unsigned char { wkUInt32, wkVarUInt32, wkVarInt32, wkSorted, wkOffsetU, wkOffsetI, wkFakeMarker };

class PASCALIMPLEMENTATION TFileBufferWriter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int fPos;
	int fBufLen;
	System::Classes::TStream* fStream;
	__int64 fTotalWritten;
	bool fInternalStream;
	NativeInt fTag;
	System::RawByteString fBuf;
	
public:
	__fastcall TFileBufferWriter(NativeUInt aFile, int BufLen)/* overload */;
	__fastcall TFileBufferWriter(System::Classes::TStream* aStream, int BufLen)/* overload */;
	__fastcall TFileBufferWriter(const System::Sysutils::TFileName aFileName, int BufLen)/* overload */;
	__fastcall TFileBufferWriter(TStreamClass aClass, int BufLen)/* overload */;
	__fastcall virtual ~TFileBufferWriter();
	void __fastcall Write(void * Data, int DataLen)/* overload */;
	void __fastcall Write1(System::Byte Data);
	void __fastcall Write4(int Data);
	void __fastcall Write4BigEndian(int Data);
	void __fastcall Write8(const void *Data8Bytes);
	void __fastcall WriteN(System::Byte Data, int Count);
	void __fastcall Write(const System::RawByteString Text)/* overload */;
	void __fastcall WriteShort(const System::ShortString &Text);
	void __fastcall WriteBinary(const System::RawByteString Data);
	void __fastcall Write(const System::Variant &Value)/* overload */;
	void __fastcall WriteVarUInt32(NativeUInt Value);
	void __fastcall WriteVarInt32(NativeInt Value);
	void __fastcall WriteVarInt64(__int64 Value);
	void __fastcall WriteVarUInt64(unsigned __int64 Value);
	void __fastcall WriteVarUInt32Array(const TIntegerDynArray Values, int ValuesCount, TFileBufferWriterKind DataLayout);
	void __fastcall WriteVarUInt64DynArray(const TInt64DynArray Values, int ValuesCount, bool Offset);
	void __fastcall WriteRawUTF8DynArray(const TRawUTF8DynArray Values, int ValuesCount);
	void __fastcall WriteRawUTF8List(TRawUTF8List* List, bool StoreObjectsAsVarUInt32 = false);
	void __fastcall WriteStream(System::Classes::TCustomMemoryStream* aStream, int aStreamSize = 0xffffffff);
	System::PByte __fastcall WriteDirectStart(int maxSize, const RawUTF8 TooBigMessage = RawUTF8());
	void __fastcall WriteDirectEnd(int realSize);
	__int64 __fastcall Flush();
	virtual void __fastcall CancelAll();
	__property System::Classes::TStream* Stream = {read=fStream};
	__property __int64 TotalWritten = {read=fTotalWritten};
	__property NativeInt Tag = {read=fTag, write=fTag, nodefault};
};


typedef TFileBufferReader *PFileBufferReader;

struct DECLSPEC_DRECORD TFileBufferReader
{
private:
	NativeUInt fCurrentPos;
	TMemoryMap fMap;
	void __fastcall ReadChunk(System::PByte &P, System::PByte &PEnd, System::RawByteString &BufTemp);
	
public:
	void __fastcall Open(NativeUInt aFile);
	void __fastcall OpenFrom(void * aBuffer, unsigned aBufferSize)/* overload */;
	bool __fastcall OpenFrom(System::Classes::TStream* Stream)/* overload */;
	void __fastcall Close();
	bool __fastcall Seek(__int64 Offset)/* overload */;
	bool __fastcall Seek(NativeInt Offset)/* overload */;
	int __fastcall Read(void * Data, int DataLen)/* overload */;
	int __fastcall Read(/* out */ RawUTF8 &Text)/* overload */;
	int __fastcall Read(/* out */ System::RawByteString &Text)/* overload */;
	RawUTF8 __fastcall ReadRawUTF8();
	NativeUInt __fastcall ReadByte();
	unsigned __fastcall ReadCardinal();
	NativeUInt __fastcall ReadVarUInt32();
	NativeInt __fastcall ReadVarInt32();
	unsigned __int64 __fastcall ReadVarUInt64();
	__int64 __fastcall ReadVarInt64();
	NativeInt __fastcall ReadVarUInt32Array(TIntegerDynArray &Values);
	NativeInt __fastcall ReadVarUInt64Array(TInt64DynArray &Values);
	NativeInt __fastcall ReadVarRawUTF8DynArray(TRawUTF8DynArray &Values);
	bool __fastcall ReadRawUTF8List(TRawUTF8List* List);
	void * __fastcall ReadPointer(NativeUInt DataLen, System::RawByteString &aTempData);
	System::Classes::TCustomMemoryStream* __fastcall ReadStream(NativeInt DataLen = (NativeInt)(0xffffffff));
	void * __fastcall CurrentMemory();
	int __fastcall CurrentPosition();
	void __fastcall ErrorInvalidContent();
	__property __int64 FileSize = {read=fMap.fFileSize};
	__property char * MappedBuffer = {read=fMap.fBuf};
};


struct DECLSPEC_DRECORD TNameValuePUTF8Char
{
public:
	char *Name;
	char *Value;
};


typedef System::DynamicArray<TNameValuePUTF8Char> TNameValuePUTF8CharDynArray;

typedef System::DynamicArray<TSynFilterOrValidate*> TSynFilterOrValidateObjArray;

typedef System::DynamicArray<TSynFilterOrValidateObjArray> TSynFilterOrValidateObjArrayArray;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynFilterOrValidate : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	RawUTF8 fParameters;
	virtual void __fastcall SetParameters(RawUTF8 Value);
	
public:
	TSynFilterOrValidate* __fastcall AddOnce(TSynFilterOrValidateObjArray &aObjArray, bool aFreeIfAlreadyThere = true);
	__fastcall virtual TSynFilterOrValidate(const RawUTF8 aParameters)/* overload */;
	__fastcall TSynFilterOrValidate(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High)/* overload */;
	__property RawUTF8 Parameters = {read=fParameters, write=SetParameters};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynFilterOrValidate() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynValidate : public TSynFilterOrValidate
{
	typedef TSynFilterOrValidate inherited;
	
public:
	virtual bool __fastcall Process(int FieldIndex, const RawUTF8 Value, System::UnicodeString &ErrorMsg) = 0 ;
public:
	/* TSynFilterOrValidate.Create */ inline __fastcall virtual TSynValidate(const RawUTF8 aParameters)/* overload */ : TSynFilterOrValidate(aParameters) { }
	/* TSynFilterOrValidate.CreateUTF8 */ inline __fastcall TSynValidate(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High)/* overload */ : TSynFilterOrValidate(Format, Args, Args_High, Params, Params_High) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynValidate() { }
	
};

#pragma pack(pop)

typedef TSynValidate* *PSynValidate;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynValidateIPAddress : public TSynValidate
{
	typedef TSynValidate inherited;
	
public:
	virtual bool __fastcall Process(int aFieldIndex, const RawUTF8 Value, System::UnicodeString &ErrorMsg);
public:
	/* TSynFilterOrValidate.Create */ inline __fastcall virtual TSynValidateIPAddress(const RawUTF8 aParameters)/* overload */ : TSynValidate(aParameters) { }
	/* TSynFilterOrValidate.CreateUTF8 */ inline __fastcall TSynValidateIPAddress(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High)/* overload */ : TSynValidate(Format, Args, Args_High, Params, Params_High) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynValidateIPAddress() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynValidateEmail : public TSynValidate
{
	typedef TSynValidate inherited;
	
private:
	RawUTF8 fAllowedTLD;
	RawUTF8 fForbiddenTLD;
	RawUTF8 fForbiddenDomains;
	bool fAnyTLD;
	
protected:
	virtual void __fastcall SetParameters(RawUTF8 Value);
	
public:
	virtual bool __fastcall Process(int aFieldIndex, const RawUTF8 Value, System::UnicodeString &ErrorMsg);
	__property bool AnyTLD = {read=fAnyTLD, write=fAnyTLD, nodefault};
	__property RawUTF8 AllowedTLD = {read=fAllowedTLD, write=fAllowedTLD};
	__property RawUTF8 ForbiddenTLD = {read=fForbiddenTLD, write=fForbiddenTLD};
	__property RawUTF8 ForbiddenDomains = {read=fForbiddenDomains, write=fForbiddenDomains};
public:
	/* TSynFilterOrValidate.Create */ inline __fastcall virtual TSynValidateEmail(const RawUTF8 aParameters)/* overload */ : TSynValidate(aParameters) { }
	/* TSynFilterOrValidate.CreateUTF8 */ inline __fastcall TSynValidateEmail(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High)/* overload */ : TSynValidate(Format, Args, Args_High, Params, Params_High) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynValidateEmail() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynValidatePattern : public TSynValidate
{
	typedef TSynValidate inherited;
	
public:
	virtual bool __fastcall Process(int aFieldIndex, const RawUTF8 Value, System::UnicodeString &ErrorMsg);
public:
	/* TSynFilterOrValidate.Create */ inline __fastcall virtual TSynValidatePattern(const RawUTF8 aParameters)/* overload */ : TSynValidate(aParameters) { }
	/* TSynFilterOrValidate.CreateUTF8 */ inline __fastcall TSynValidatePattern(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High)/* overload */ : TSynValidate(Format, Args, Args_High, Params, Params_High) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynValidatePattern() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynValidatePatternI : public TSynValidatePattern
{
	typedef TSynValidatePattern inherited;
	
public:
	/* TSynFilterOrValidate.Create */ inline __fastcall virtual TSynValidatePatternI(const RawUTF8 aParameters)/* overload */ : TSynValidatePattern(aParameters) { }
	/* TSynFilterOrValidate.CreateUTF8 */ inline __fastcall TSynValidatePatternI(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High)/* overload */ : TSynValidatePattern(Format, Args, Args_High, Params, Params_High) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynValidatePatternI() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynValidateNonVoidText : public TSynValidate
{
	typedef TSynValidate inherited;
	
public:
	virtual bool __fastcall Process(int aFieldIndex, const RawUTF8 Value, System::UnicodeString &ErrorMsg);
public:
	/* TSynFilterOrValidate.Create */ inline __fastcall virtual TSynValidateNonVoidText(const RawUTF8 aParameters)/* overload */ : TSynValidate(aParameters) { }
	/* TSynFilterOrValidate.CreateUTF8 */ inline __fastcall TSynValidateNonVoidText(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High)/* overload */ : TSynValidate(Format, Args, Args_High, Params, Params_High) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynValidateNonVoidText() { }
	
};

#pragma pack(pop)

typedef System::StaticArray<unsigned, 16> TSynValidateTextProps;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynFilter : public TSynFilterOrValidate
{
	typedef TSynFilterOrValidate inherited;
	
public:
	virtual void __fastcall Process(int aFieldIndex, RawUTF8 &Value) = 0 ;
public:
	/* TSynFilterOrValidate.Create */ inline __fastcall virtual TSynFilter(const RawUTF8 aParameters)/* overload */ : TSynFilterOrValidate(aParameters) { }
	/* TSynFilterOrValidate.CreateUTF8 */ inline __fastcall TSynFilter(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High)/* overload */ : TSynFilterOrValidate(Format, Args, Args_High, Params, Params_High) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynFilter() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TSynFilterClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynFilterUpperCase : public TSynFilter
{
	typedef TSynFilter inherited;
	
public:
	virtual void __fastcall Process(int aFieldIndex, RawUTF8 &Value);
public:
	/* TSynFilterOrValidate.Create */ inline __fastcall virtual TSynFilterUpperCase(const RawUTF8 aParameters)/* overload */ : TSynFilter(aParameters) { }
	/* TSynFilterOrValidate.CreateUTF8 */ inline __fastcall TSynFilterUpperCase(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High)/* overload */ : TSynFilter(Format, Args, Args_High, Params, Params_High) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynFilterUpperCase() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynFilterUpperCaseU : public TSynFilter
{
	typedef TSynFilter inherited;
	
public:
	virtual void __fastcall Process(int aFieldIndex, RawUTF8 &Value);
public:
	/* TSynFilterOrValidate.Create */ inline __fastcall virtual TSynFilterUpperCaseU(const RawUTF8 aParameters)/* overload */ : TSynFilter(aParameters) { }
	/* TSynFilterOrValidate.CreateUTF8 */ inline __fastcall TSynFilterUpperCaseU(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High)/* overload */ : TSynFilter(Format, Args, Args_High, Params, Params_High) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynFilterUpperCaseU() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynFilterLowerCase : public TSynFilter
{
	typedef TSynFilter inherited;
	
public:
	virtual void __fastcall Process(int aFieldIndex, RawUTF8 &Value);
public:
	/* TSynFilterOrValidate.Create */ inline __fastcall virtual TSynFilterLowerCase(const RawUTF8 aParameters)/* overload */ : TSynFilter(aParameters) { }
	/* TSynFilterOrValidate.CreateUTF8 */ inline __fastcall TSynFilterLowerCase(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High)/* overload */ : TSynFilter(Format, Args, Args_High, Params, Params_High) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynFilterLowerCase() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynFilterLowerCaseU : public TSynFilter
{
	typedef TSynFilter inherited;
	
public:
	virtual void __fastcall Process(int aFieldIndex, RawUTF8 &Value);
public:
	/* TSynFilterOrValidate.Create */ inline __fastcall virtual TSynFilterLowerCaseU(const RawUTF8 aParameters)/* overload */ : TSynFilter(aParameters) { }
	/* TSynFilterOrValidate.CreateUTF8 */ inline __fastcall TSynFilterLowerCaseU(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High)/* overload */ : TSynFilter(Format, Args, Args_High, Params, Params_High) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynFilterLowerCaseU() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynFilterTrim : public TSynFilter
{
	typedef TSynFilter inherited;
	
public:
	virtual void __fastcall Process(int aFieldIndex, RawUTF8 &Value);
public:
	/* TSynFilterOrValidate.Create */ inline __fastcall virtual TSynFilterTrim(const RawUTF8 aParameters)/* overload */ : TSynFilter(aParameters) { }
	/* TSynFilterOrValidate.CreateUTF8 */ inline __fastcall TSynFilterTrim(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High)/* overload */ : TSynFilter(Format, Args, Args_High, Params, Params_High) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynFilterTrim() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynFilterTruncate : public TSynFilter
{
	typedef TSynFilter inherited;
	
protected:
	unsigned fMaxLength;
	bool fUTF8Length;
	virtual void __fastcall SetParameters(RawUTF8 Value);
	
public:
	virtual void __fastcall Process(int aFieldIndex, RawUTF8 &Value);
	__property unsigned MaxLength = {read=fMaxLength, write=fMaxLength, nodefault};
	__property bool UTF8Length = {read=fUTF8Length, write=fUTF8Length, nodefault};
public:
	/* TSynFilterOrValidate.Create */ inline __fastcall virtual TSynFilterTruncate(const RawUTF8 aParameters)/* overload */ : TSynFilter(aParameters) { }
	/* TSynFilterOrValidate.CreateUTF8 */ inline __fastcall TSynFilterTruncate(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High)/* overload */ : TSynFilter(Format, Args, Args_High, Params, Params_High) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynFilterTruncate() { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TSynLogExceptionContext
{
public:
	System::Sysutils::ExceptClass EClass;
	System::Sysutils::Exception* EInstance;
	unsigned ECode;
	NativeUInt EAddr;
	NativeUInt *EStack;
	TSynLogInfo ELevel;
};


typedef bool __fastcall (*TSynLogExceptionToStr)(TTextWriter* WR, const TSynLogExceptionContext &Context);

#pragma pack(push,4)
class PASCALIMPLEMENTATION ESynException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	__fastcall ESynException(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High);
	virtual bool __fastcall CustomLog(TTextWriter* WR, const TSynLogExceptionContext &Context);
	
__published:
	__property Message = {default=0};
public:
	/* Exception.Create */ inline __fastcall ESynException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ESynException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ESynException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ESynException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ESynException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ESynException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ESynException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ESynException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESynException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESynException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESynException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESynException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ESynException() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION ETableDataException : public ESynException
{
	typedef ESynException inherited;
	
public:
	/* ESynException.CreateUTF8 */ inline __fastcall ETableDataException(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High) : ESynException(Format, Args, Args_High) { }
	
public:
	/* Exception.Create */ inline __fastcall ETableDataException(const System::UnicodeString Msg) : ESynException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ETableDataException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : ESynException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ETableDataException(NativeUInt Ident)/* overload */ : ESynException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ETableDataException(System::PResStringRec ResStringRec)/* overload */ : ESynException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ETableDataException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : ESynException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ETableDataException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : ESynException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ETableDataException(const System::UnicodeString Msg, int AHelpContext) : ESynException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ETableDataException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : ESynException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETableDataException(NativeUInt Ident, int AHelpContext)/* overload */ : ESynException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETableDataException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ESynException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETableDataException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : ESynException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETableDataException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : ESynException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ETableDataException() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EDocVariant : public ESynException
{
	typedef ESynException inherited;
	
public:
	/* ESynException.CreateUTF8 */ inline __fastcall EDocVariant(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High) : ESynException(Format, Args, Args_High) { }
	
public:
	/* Exception.Create */ inline __fastcall EDocVariant(const System::UnicodeString Msg) : ESynException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EDocVariant(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : ESynException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EDocVariant(NativeUInt Ident)/* overload */ : ESynException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EDocVariant(System::PResStringRec ResStringRec)/* overload */ : ESynException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EDocVariant(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : ESynException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EDocVariant(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : ESynException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EDocVariant(const System::UnicodeString Msg, int AHelpContext) : ESynException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EDocVariant(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : ESynException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDocVariant(NativeUInt Ident, int AHelpContext)/* overload */ : ESynException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDocVariant(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ESynException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDocVariant(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : ESynException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDocVariant(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : ESynException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EDocVariant() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM Xlssyncommons__85 : unsigned char { cfFPU, cfVME, cfDE, cfPSE, cfTSC, cfMSR, cfPAE, cfMCE, cfCX8, cfAPIC, cf_d10, cfSEP, cfMTRR, cfPGE, cfMCA, cfCMOV, cfPAT, cfPSE36, cfPSN, cfCLFSH, cf_d20, cfDS, cfACPI, cfMMX, cfFXSR, cfSSE, cfSSE2, cfSS, cfHTT, cfTM, cfIA_64, cfPBE, cfSSE3, cf_c1, cf_c2, cfMON, cfDS_CPL, cf_c5, cf_c6, cfEIST, cfTM2, cfSSSE3, cfCID, cfSSE5, cf_c12, cfCX16, cfxTPR, cf_c15, cf_c16, cf_c17, cf_c18, cfSSE41, cfSSE42, cf_c21, cf_c22, cfPOPCNT, cf_c24, cfAESNI, cf_c26, cf_c27, cfAVX, cf_c29, cf_c30, cf_c31 };

typedef void __fastcall (__closure *TOnIdleSynBackgroundThread)(TSynBackgroundThreadAbstract* Sender, int ElapsedMS);

enum DECLSPEC_DENUM TSynBackgroundThreadProcessStep : unsigned char { flagIdle, flagStarted, flagFinished, flagDestroying };

typedef System::Set<TSynBackgroundThreadProcessStep, TSynBackgroundThreadProcessStep::flagIdle, TSynBackgroundThreadProcessStep::flagDestroying> TSynBackgroundThreadProcessSteps;

typedef void __fastcall (__closure *TNotifyThreadEvent)(System::Classes::TThread* Sender);

class PASCALIMPLEMENTATION TSynBackgroundThreadAbstract : public System::Classes::TThread
{
	typedef System::Classes::TThread inherited;
	
protected:
	_RTL_CRITICAL_SECTION fPendingProcessLock;
	TSynBackgroundThreadProcessStep fPendingProcessFlag;
	System::Syncobjs::TEvent* fProcessEvent;
	System::Syncobjs::TEvent* fCallerEvent;
	void *fParam;
	unsigned fCallerThreadID;
	System::Sysutils::Exception* fBackgroundException;
	TOnIdleSynBackgroundThread fOnIdle;
	TNotifyThreadEvent fOnBeforeExecute;
	TNotifyThreadEvent fOnAfterExecute;
	TNotifyThreadEvent fOnBeforeProcess;
	TNotifyThreadEvent fOnAfterProcess;
	RawUTF8 fThreadName;
	bool __fastcall GetOnIdleBackgroundThreadActive();
	virtual void __fastcall Execute();
	virtual void __fastcall Process() = 0 ;
	TSynBackgroundThreadProcessStep __fastcall GetPendingProcess();
	void __fastcall SetPendingProcess(TSynBackgroundThreadProcessStep State);
	
public:
	__fastcall TSynBackgroundThreadAbstract(TOnIdleSynBackgroundThread aOnIdle, const RawUTF8 aThreadName);
	__fastcall virtual ~TSynBackgroundThreadAbstract();
	bool __fastcall RunAndWait(void * OpaqueParam);
	__property TOnIdleSynBackgroundThread OnIdle = {read=fOnIdle, write=fOnIdle};
	__property bool OnIdleBackgroundThreadActive = {read=GetOnIdleBackgroundThreadActive, nodefault};
	__property TNotifyThreadEvent OnBeforeExecute = {read=fOnBeforeExecute, write=fOnBeforeExecute};
	__property TNotifyThreadEvent OnAfterExecute = {read=fOnAfterExecute, write=fOnAfterExecute};
	__property TNotifyThreadEvent OnBeforeProcess = {read=fOnBeforeProcess, write=fOnBeforeProcess};
	__property TNotifyThreadEvent OnAfterProcess = {read=fOnAfterProcess, write=fOnAfterProcess};
};


typedef void __fastcall (__closure *TOnProcessSynBackgroundThread)(TSynBackgroundThreadEvent* Sender, void * ProcessOpaqueParam);

class PASCALIMPLEMENTATION TSynBackgroundThreadEvent : public TSynBackgroundThreadAbstract
{
	typedef TSynBackgroundThreadAbstract inherited;
	
protected:
	TOnProcessSynBackgroundThread fOnProcess;
	virtual void __fastcall Process();
	
public:
	__fastcall TSynBackgroundThreadEvent(TOnProcessSynBackgroundThread aOnProcess, TOnIdleSynBackgroundThread aOnIdle, const RawUTF8 aThreadName);
	__property TOnProcessSynBackgroundThread OnProcess = {read=fOnProcess, write=fOnProcess};
public:
	/* TSynBackgroundThreadAbstract.Destroy */ inline __fastcall virtual ~TSynBackgroundThreadEvent() { }
	
};


class PASCALIMPLEMENTATION TSynBackgroundThreadMethod : public TSynBackgroundThreadAbstract
{
	typedef TSynBackgroundThreadAbstract inherited;
	
protected:
	virtual void __fastcall Process();
	
public:
	HIDESBASE void __fastcall RunAndWait(System::Classes::TThreadMethod Method);
public:
	/* TSynBackgroundThreadAbstract.Create */ inline __fastcall TSynBackgroundThreadMethod(TOnIdleSynBackgroundThread aOnIdle, const RawUTF8 aThreadName) : TSynBackgroundThreadAbstract(aOnIdle, aThreadName) { }
	/* TSynBackgroundThreadAbstract.Destroy */ inline __fastcall virtual ~TSynBackgroundThreadMethod() { }
	
};


typedef void __fastcall (*TOnProcessSynBackgroundThreadProc)(void * ProcessOpaqueParam);

class PASCALIMPLEMENTATION TSynBackgroundThreadProcedure : public TSynBackgroundThreadAbstract
{
	typedef TSynBackgroundThreadAbstract inherited;
	
protected:
	TOnProcessSynBackgroundThreadProc fOnProcess;
	virtual void __fastcall Process();
	
public:
	__fastcall TSynBackgroundThreadProcedure(TOnProcessSynBackgroundThreadProc aOnProcess, TOnIdleSynBackgroundThread aOnIdle, const RawUTF8 aThreadName);
	__property TOnProcessSynBackgroundThreadProc OnProcess = {read=fOnProcess, write=fOnProcess};
public:
	/* TSynBackgroundThreadAbstract.Destroy */ inline __fastcall virtual ~TSynBackgroundThreadProcedure() { }
	
};


typedef __int64 TTimeLog;

typedef System::DynamicArray<TTimeLog> TTimeLogDynArray;

typedef TTimeLogBits *PTimeLogBits;

struct DECLSPEC_DRECORD TTimeLogBits
{
public:
	__int64 Value;
	void __fastcall Expand(/* out */ _SYSTEMTIME &Date);
	RawUTF8 __fastcall Text(bool Expanded, char FirstTimeChar = '\x54')/* overload */;
	int __fastcall Text(PUTF8Char Dest, bool Expanded, char FirstTimeChar = '\x54')/* overload */;
	System::UnicodeString __fastcall i18nText();
	System::TDateTime __fastcall ToTime();
	System::TDateTime __fastcall ToDate();
	System::TDateTime __fastcall ToDateTime();
	__int64 __fastcall ToUnixTime();
	__int64 __fastcall ToUnixMSTime();
	void __fastcall From(unsigned Y, unsigned M, unsigned D, unsigned HH, unsigned MM, unsigned SS)/* overload */;
	void __fastcall From(System::TDateTime DateTime, bool DateOnly = false)/* overload */;
	void __fastcall From(int FileDate)/* overload */;
	void __fastcall From(PUTF8Char P, int L)/* overload */;
	void __fastcall From(const RawUTF8 S)/* overload */;
	void __fastcall FromUnixTime(const __int64 UnixTime);
	void __fastcall FromUnixMSTime(const __int64 UnixMSTime);
	void __fastcall FromNow();
	void __fastcall FromUTCTime();
	int __fastcall Year();
	int __fastcall Month();
	int __fastcall Day();
	int __fastcall Hour();
	int __fastcall Minute();
	int __fastcall Second();
};


typedef void __fastcall (__closure *TOnStringTranslate)(System::UnicodeString &English);

class PASCALIMPLEMENTATION TFileVersion : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString fDetailed;
	System::TDateTime fBuildDateTime;
	
public:
	int Major;
	int Minor;
	int Release;
	int Build;
	System::Word BuildYear;
	System::UnicodeString Main;
	__fastcall TFileVersion(const System::Sysutils::TFileName aFileName, int aMajor, int aMinor, int aRelease);
	int __fastcall Version32();
	
__published:
	__property System::UnicodeString Detailed = {read=fDetailed, write=fDetailed};
	__property System::TDateTime BuildDateTime = {read=fBuildDateTime, write=fBuildDateTime};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TFileVersion() { }
	
};


enum DECLSPEC_DENUM TWindowsVersion : unsigned char { wUnknown, w2000, wXP, wXP_64, wServer2003, wServer2003_R2, wVista, wVista_64, wServer2008, wServer2008_64, wServer2008_R2, wServer2008_R2_64, wSeven, wSeven_64, wEight, wEight_64, wServer2012, wServer2012_64, wEightOne, wEightOne_64, wServer2012R2, wServer2012R2_64, wTen, wTen_64, wServer2014R2, wServer2014R2_64 };

struct DECLSPEC_DRECORD Xlssyncommons__46
{
public:
	RawUTF8 ProgramName;
	RawUTF8 ProgramFullSpec;
	System::Sysutils::TFileName ProgramFileName;
	System::Sysutils::TFileName ProgramFilePath;
	System::Sysutils::TFileName InstanceFileName;
	TFileVersion* Version;
	RawUTF8 Host;
	RawUTF8 User;
};


typedef System::StaticArray<System::Byte, 5> TPatchCode;

typedef TPatchCode *PPatchCode;

#pragma pack(push,4)
class PASCALIMPLEMENTATION THeapMemoryStream : public System::Classes::TMemoryStream
{
	typedef System::Classes::TMemoryStream inherited;
	
public:
	/* TMemoryStream.Destroy */ inline __fastcall virtual ~THeapMemoryStream() { }
	
public:
	/* TObject.Create */ inline __fastcall THeapMemoryStream() : System::Classes::TMemoryStream() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TSynTableFieldType : unsigned char { tftUnknown, tftBoolean, tftUInt8, tftUInt16, tftUInt24, tftInt32, tftInt64, tftCurrency, tftDouble, tftVarUInt32, tftVarInt32, tftVarUInt64, tftWinAnsi, tftUTF8, tftBlobInternal, tftBlobExternal, tftVarInt64 };

typedef System::Set<TSynTableFieldType, TSynTableFieldType::tftUnknown, TSynTableFieldType::tftVarInt64> TSynTableFieldTypes;

enum DECLSPEC_DENUM TSynTableFieldOption : unsigned char { tfoIndex, tfoUnique, tfoCaseInsensitive };

typedef System::Set<TSynTableFieldOption, TSynTableFieldOption::tfoIndex, TSynTableFieldOption::tfoCaseInsensitive> TSynTableFieldOptions;

typedef System::Set<System::Int8, 0, 63> TSynTableFieldBits;

typedef System::RawByteString TSBFString;

typedef int __fastcall (__closure *TSynTableFieldIndex)(const RawUTF8 PropName);

enum DECLSPEC_DENUM TSynTableStatementOperator : unsigned char { opEqualTo, opNotEqualTo, opLessThan, opLessThanOrEqualTo, opGreaterThan, opGreaterThanOrEqualTo, opIn, opIsNull, opIsNotNull, opLike, opContains, opFunction };

struct DECLSPEC_DRECORD TSynTableStatementSelect
{
	
private:
	enum DECLSPEC_DENUM _TSynTableStatementSelect__1 : unsigned char { funcNone, funcCountStar, funcDistinct, funcMax };
	
	
public:
	int Field;
	int ToBeAdded;
	RawUTF8 Alias;
	RawUTF8 FunctionName;
	_TSynTableStatementSelect__1 FunctionKnown;
};


typedef System::DynamicArray<TSynTableStatementSelect> TSynTableStatementSelectDynArray;

struct DECLSPEC_DRECORD TSynTableStatementWhere
{
public:
	bool JoinedOR;
	bool NotClause;
	int Field;
	TSynTableStatementOperator Operator;
	RawUTF8 FunctionName;
	RawUTF8 Value;
	char *ValueSQL;
	int ValueSQLLen;
	int ValueInteger;
	TSBFString ValueSBF;
	System::Variant ValueVariant;
};


typedef System::DynamicArray<TSynTableStatementWhere> TSynTableStatementWhereDynArray;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynTableStatement : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	RawUTF8 fSQLStatement;
	TSynTableStatementSelectDynArray fSelect;
	int fSelectFunctionCount;
	RawUTF8 fTableName;
	TSynTableStatementWhereDynArray fWhere;
	TSQLFieldIndexDynArray fOrderByField;
	TSQLFieldIndexDynArray fGroupByField;
	bool fOrderByDesc;
	int fLimit;
	int fOffset;
	TJSONWriter* fWriter;
	
public:
	__fastcall TSynTableStatement(const RawUTF8 SQL, TSynTableFieldIndex GetFieldIndex, const TSQLFieldBits &SimpleFieldsBits, TSynTableFieldProperties* FieldProp);
	void __fastcall SelectFieldBits(TSQLFieldBits &Fields, bool &withID);
	__property RawUTF8 SQLStatement = {read=fSQLStatement};
	__property TSynTableStatementSelectDynArray Select = {read=fSelect};
	__property int SelectFunctionCount = {read=fSelectFunctionCount, nodefault};
	__property RawUTF8 TableName = {read=fTableName};
	__property TSynTableStatementWhereDynArray Where = {read=fWhere};
	__property TSQLFieldIndexDynArray GroupByField = {read=fGroupByField};
	__property TSQLFieldIndexDynArray OrderByField = {read=fOrderByField};
	__property bool OrderByDesc = {read=fOrderByDesc, nodefault};
	__property int Limit = {read=fLimit, nodefault};
	__property int Offset = {read=fOffset, nodefault};
	__property TJSONWriter* Writer = {read=fWriter, write=fWriter};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynTableStatement() { }
	
};

#pragma pack(pop)

typedef void * __fastcall (__closure *TSynTableGetRecordData)(int Index, System::RawByteString &aTempData);

struct DECLSPEC_DRECORD TSortCompareTmp
{
public:
	System::Byte *PB1;
	System::Byte *PB2;
	int L1;
	int L2;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynTableFieldProperties : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	void *SortPivot;
	TSortCompareTmp SortCompareTmp;
	System::RawByteString DataTemp1;
	System::RawByteString DataTemp2;
	TSynTable* Owner;
	int fDefaultFieldLength;
	TSBFString fDefaultFieldData;
	int fOrderedIndexFindAdd;
	void __fastcall OrderedIndexSort(NativeInt L, NativeInt R);
	NativeInt __fastcall OrderedIndexFind(void * Value);
	NativeInt __fastcall OrderedIndexFindAdd(void * Value);
	void __fastcall OrderedIndexReverseSet(int aOrderedIndex);
	
public:
	RawUTF8 Name;
	TSynTableFieldType FieldType;
	int FieldSize;
	TSynTableFieldOptions Options;
	int Offset;
	int FieldNumber;
	TIntegerDynArray OrderedIndex;
	TIntegerDynArray OrderedIndexReverse;
	int OrderedIndexCount;
	bool OrderedIndexNotSorted;
	System::Contnrs::TObjectList* Filters;
	System::Contnrs::TObjectList* Validates;
	NativeInt __fastcall SortCompare(PUTF8Char P1, PUTF8Char P2);
	__fastcall TSynTableFieldProperties(TFileBufferReader &RD);
	__fastcall virtual ~TSynTableFieldProperties();
	void __fastcall SaveTo(TFileBufferWriter* WR);
	void * __fastcall GetJSON(void * FieldBuffer, TTextWriter* W);
	RawUTF8 __fastcall GetValue(void * FieldBuffer);
	bool __fastcall GetBoolean(void * RecordBuffer);
	int __fastcall GetInteger(void * RecordBuffer);
	__int64 __fastcall GetInt64(void * RecordBuffer);
	double __fastcall GetDouble(void * RecordBuffer);
	System::Currency __fastcall GetCurrency(void * RecordBuffer);
	RawUTF8 __fastcall GetRawUTF8(void * RecordBuffer);
	System::Variant __fastcall GetVariant(void * FieldBuffer)/* overload */;
	void __fastcall GetVariant(void * FieldBuffer, System::Variant &result)/* overload */;
	int __fastcall GetLength(void * FieldBuffer);
	TSBFString __fastcall SBF(const bool Value)/* overload */;
	TSBFString __fastcall SBF(const __int64 Value)/* overload */;
	TSBFString __fastcall SBF(const int Value)/* overload */;
	TSBFString __fastcall SBFCurr(const System::Currency Value);
	TSBFString __fastcall SBFFloat(const double Value);
	TSBFString __fastcall SBF(const RawUTF8 Value)/* overload */;
	TSBFString __fastcall SBF(void * Value, int ValueLen)/* overload */;
	TSBFString __fastcall SBFFromRawUTF8(const RawUTF8 aValue);
	TSBFString __fastcall SBF(const System::Variant &Value)/* overload */;
	bool __fastcall OrderedIndexUpdate(int aOldIndex, int aNewIndex, void * aOldRecordData, void * aNewRecordData);
	bool __fastcall OrderedIndexMatch(void * WhereSBFValue, TIntegerDynArray &MatchIndex, int &MatchIndexCount, int Limit = 0x0);
	void __fastcall OrderedIndexRefresh();
	TSynFilterOrValidate* __fastcall AddFilterOrValidate(TSynFilterOrValidate* aFilter);
	System::UnicodeString __fastcall Validate(void * RecordBuffer, int RecordIndex);
	__property TSBFString SBFDefault = {read=fDefaultFieldData};
public:
	/* TObject.Create */ inline __fastcall TSynTableFieldProperties() : System::TObject() { }
	
};

#pragma pack(pop)

typedef TSynTableData *PSynTableData;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TSynTableData
{
private:
	System::Word VType;
	System::StaticArray<System::Byte, 2> Filler;
	int VID;
	TSynTable* VTable;
	TSBFString VValue;
	System::Variant __fastcall GetFieldValue(const RawUTF8 FieldName)/* overload */;
	void __fastcall GetFieldVariant(const RawUTF8 FieldName, System::Variant &result);
	void __fastcall SetFieldValue(const RawUTF8 FieldName, const System::Variant &Value)/* overload */;
	void __fastcall CheckVTableInitialized();
	
public:
	void __fastcall Init(TSynTable* aTable, int aID = 0x0)/* overload */;
	void __fastcall Init(TSynTable* aTable, int aID, void * RecordBuffer, int RecordBufferLen)/* overload */;
	__property int ID = {read=VID, write=VID};
	__property TSynTable* Table = {read=VTable, write=VTable};
	__property TSBFString SBF = {read=VValue};
	__property System::Variant Field[const RawUTF8 FieldName] = {read=GetFieldValue, write=SetFieldValue};
	System::Variant __fastcall GetFieldValue(TSynTableFieldProperties* aField)/* overload */;
	void __fastcall SetFieldValue(TSynTableFieldProperties* aField, const System::Variant &Value)/* overload */;
	void __fastcall SetFieldSBFValue(TSynTableFieldProperties* aField, const TSBFString Value);
	TSBFString __fastcall GetFieldSBFValue(TSynTableFieldProperties* aField);
	void __fastcall FilterSBFValue();
	System::UnicodeString __fastcall ValidateSBFValue(int RecordIndex);
};
#pragma pack(pop)


typedef TUpdateFieldEvent *PUpdateFieldEvent;

struct DECLSPEC_DRECORD TUpdateFieldEvent
{
public:
	int Count;
	TIntegerDynArray IDs;
	TInt64DynArray Offsets64;
	TIntegerDynArray NewIndexs;
	TSQLFieldBits AvailableFields;
	TFileBufferWriter* WR;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynValidateTable : public TSynValidate
{
	typedef TSynValidate inherited;
	
protected:
	TSynTableFieldProperties* fProcessField;
	int fProcessRecordIndex;
	
public:
	__property TSynTableFieldProperties* ProcessField = {read=fProcessField, write=fProcessField};
	__property int ProcessRecordIndex = {read=fProcessRecordIndex, write=fProcessRecordIndex, nodefault};
public:
	/* TSynFilterOrValidate.Create */ inline __fastcall virtual TSynValidateTable(const RawUTF8 aParameters)/* overload */ : TSynValidate(aParameters) { }
	/* TSynFilterOrValidate.CreateUTF8 */ inline __fastcall TSynValidateTable(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High)/* overload */ : TSynValidate(Format, Args, Args_High, Params, Params_High) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynValidateTable() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynValidateTableUniqueField : public TSynValidateTable
{
	typedef TSynValidateTable inherited;
	
public:
	virtual bool __fastcall Process(int aFieldIndex, const RawUTF8 Value, System::UnicodeString &ErrorMsg);
public:
	/* TSynFilterOrValidate.Create */ inline __fastcall virtual TSynValidateTableUniqueField(const RawUTF8 aParameters)/* overload */ : TSynValidateTable(aParameters) { }
	/* TSynFilterOrValidate.CreateUTF8 */ inline __fastcall TSynValidateTableUniqueField(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High)/* overload */ : TSynValidateTable(Format, Args, Args_High, Params, Params_High) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynValidateTableUniqueField() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TSynTable : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TSynTableFieldProperties* operator[](const RawUTF8 aName) { return this->FieldFromName[aName]; }
	
protected:
	RawUTF8 fTableName;
	System::Contnrs::TObjectList* fField;
	NativeUInt fFieldVariableOffset;
	int fFieldVariableIndex;
	TSynTableFieldBits fFieldIsVarString;
	TSynTableFieldBits fFieldIsExternal;
	TSynTableGetRecordData fGetRecordData;
	int fDefaultRecordLength;
	TSBFString fDefaultRecordData;
	System::Classes::TList* fAddedField;
	bool fFieldHasUniqueIndexes;
	TSynTableFieldProperties* __fastcall GetFieldType(int Index);
	int __fastcall GetFieldCount();
	TSynTableFieldProperties* __fastcall GetFieldFromName(const RawUTF8 aName);
	int __fastcall GetFieldIndexFromName(const RawUTF8 aName);
	int __fastcall GetFieldIndexFromShortName(const System::ShortString &aName);
	void __fastcall AfterFieldModif();
	
public:
	__fastcall TSynTable(const RawUTF8 aTableName);
	void __fastcall LoadFrom(TFileBufferReader &RD);
	__fastcall virtual ~TSynTable();
	void __fastcall SaveTo(TFileBufferWriter* WR);
	void * __fastcall GetData(PUTF8Char RecordBuffer, TSynTableFieldProperties* Field);
	TSynTableFieldProperties* __fastcall AddField(const RawUTF8 aName, TSynTableFieldType aType, TSynTableFieldOptions aOptions = TSynTableFieldOptions() );
	void __fastcall UpdateFieldData(PUTF8Char RecordBuffer, int RecordBufferLen, int FieldIndex, TSBFString &result, const TSBFString NewFieldData = TSBFString());
	TSBFString __fastcall UpdateFieldRecord(PUTF8Char RecordBuffer, TSQLFieldBits &AvailableFields);
	bool __fastcall UpdateFieldEvent(System::TObject* Sender, void * Opaque, int ID, int Index, void * Data, int DataLen);
	void __fastcall FieldIndexModify(int aOldIndex, int aNewIndex, void * aOldRecordData, void * aNewRecordData);
	int __fastcall DataLength(void * RecordBuffer);
	System::Variant __fastcall Data(int aID = 0x0, void * RecordBuffer = (void *)(0x0), int RecordBufferLen = 0x0)/* overload */;
	__property TSBFString DefaultRecordData = {read=fDefaultRecordData};
	__property System::Classes::TList* AddedField = {read=fAddedField, write=fAddedField};
	__property NativeUInt FieldVariableOffset = {read=fFieldVariableOffset, nodefault};
	TJSONWriter* __fastcall CreateJSONWriter(System::Classes::TStream* JSON, bool Expand, bool withID, const TSQLFieldIndexDynArray Fields)/* overload */;
	TJSONWriter* __fastcall CreateJSONWriter(System::Classes::TStream* JSON, bool Expand, bool withID, const TSQLFieldBits &Fields)/* overload */;
	void __fastcall GetJSONValues(int aID, PUTF8Char RecordBuffer, TJSONWriter* W);
	bool __fastcall IterateJSONValues(System::TObject* Sender, void * Opaque, int ID, void * Data, int DataLen);
	System::UnicodeString __fastcall Validate(void * RecordBuffer, int RecordIndex);
	void __fastcall Filter(TSBFString &RecordBuffer);
	__property TSynTableGetRecordData GetRecordData = {read=fGetRecordData, write=fGetRecordData};
	__property RawUTF8 TableName = {read=fTableName, write=fTableName};
	__property int FieldCount = {read=GetFieldCount, nodefault};
	__property TSynTableFieldProperties* Field[int Index] = {read=GetFieldType};
	__property TSynTableFieldProperties* FieldFromName[const RawUTF8 aName] = {read=GetFieldFromName/*, default*/};
	__property int FieldIndexFromName[const RawUTF8 aName] = {read=GetFieldIndexFromName};
	__property System::Contnrs::TObjectList* FieldList = {read=fField};
	__property bool HasUniqueIndexes = {read=fFieldHasUniqueIndexes, nodefault};
};


enum DECLSPEC_DENUM TCompareOperator : unsigned char { soEqualTo, soNotEqualTo, soLessThan, soLessThanOrEqualTo, soGreaterThan, soGreaterThanOrEqualTo, soBeginWith, soContains, soSoundsLikeEnglish, soSoundsLikeFrench, soSoundsLikeSpanish };

typedef System::StaticArray<RawUTF8, 2> Xlssyncommons__17;

typedef System::StaticArray<RawUTF8, 2> Xlssyncommons__27;

typedef System::Set<System::Byte, 0, 255> TVarDataTypes;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynInvokeableVariantType : public System::Variants::TInvokeableVariantType
{
	typedef System::Variants::TInvokeableVariantType inherited;
	
protected:
	virtual System::UnicodeString __fastcall FixupIdent(const System::UnicodeString AText);
	virtual void __fastcall IntGet(TVarData &Dest, const TVarData &V, char * Name) = 0 ;
	virtual void __fastcall IntSet(const TVarData &V, const TVarData &Value, char * Name) = 0 ;
	virtual bool __fastcall TryJSONToVariant(PUTF8Char &JSON, System::Variant &Value, PUTF8Char EndOfObject);
	virtual void __fastcall ToJSON(TTextWriter* W, const System::Variant &Value, TTextWriterKind Escape)/* overload */;
	
public:
	virtual bool __fastcall GetProperty(TVarData &Dest, const TVarData &V, const System::UnicodeString Name);
	virtual bool __fastcall SetProperty(const TVarData &V, const System::UnicodeString Name, const TVarData &Value);
	virtual void __fastcall Clear(TVarData &V);
	virtual void __fastcall Copy(TVarData &Dest, const TVarData &Source, const bool Indirect);
	virtual void __fastcall CopyByValue(TVarData &Dest, const TVarData &Source);
	virtual void __fastcall Lookup(TVarData &Dest, const TVarData &V, PUTF8Char FullName);
	virtual int __fastcall IterateCount(const TVarData &V);
	virtual void __fastcall Iterate(TVarData &Dest, const TVarData &V, int Index);
	bool __fastcall IsOfType(const System::Variant &V);
public:
	/* TCustomVariantType.Create */ inline __fastcall TSynInvokeableVariantType()/* overload */ : System::Variants::TInvokeableVariantType() { }
	/* TCustomVariantType.Create */ inline __fastcall TSynInvokeableVariantType(System::Word RequestedVarType)/* overload */ : System::Variants::TInvokeableVariantType(RequestedVarType) { }
	/* TCustomVariantType.Destroy */ inline __fastcall virtual ~TSynInvokeableVariantType() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynTableVariantType : public TSynInvokeableVariantType
{
	typedef TSynInvokeableVariantType inherited;
	
protected:
	virtual void __fastcall IntGet(TVarData &Dest, const TVarData &V, char * Name);
	virtual void __fastcall IntSet(const TVarData &V, const TVarData &Value, char * Name);
	
public:
	__classmethod TSBFString __fastcall ToSBF(const System::Variant &V);
	__classmethod int __fastcall ToID(const System::Variant &V);
	__classmethod TSynTable* __fastcall ToTable(const System::Variant &V);
	virtual void __fastcall Clear(TVarData &V);
	virtual void __fastcall Copy(TVarData &Dest, const TVarData &Source, const bool Indirect);
public:
	/* TCustomVariantType.Create */ inline __fastcall TSynTableVariantType()/* overload */ : TSynInvokeableVariantType() { }
	/* TCustomVariantType.Create */ inline __fastcall TSynTableVariantType(System::Word RequestedVarType)/* overload */ : TSynInvokeableVariantType(RequestedVarType) { }
	/* TCustomVariantType.Destroy */ inline __fastcall virtual ~TSynTableVariantType() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TSynInvokeableVariantTypeClass;

enum DECLSPEC_DENUM TDocVariantOption : unsigned char { dvoNameCaseSensitive, dvoCheckForDuplicatedNames, dvoReturnNullForUnknownProperty, dvoReturnNullForOutOfRangeIndex, dvoValueCopiedByReference, dvoJSONParseDoNotTryCustomVariants, dvoJSONObjectParseWithinString };

typedef System::Set<TDocVariantOption, TDocVariantOption::dvoNameCaseSensitive, TDocVariantOption::dvoJSONObjectParseWithinString> TDocVariantOptions;

typedef TDocVariantOptions *PDocVariantOptions;

typedef TDocVariantData *PDocVariantData;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDocVariant : public TSynInvokeableVariantType
{
	typedef TSynInvokeableVariantType inherited;
	
protected:
	virtual void __fastcall IntGet(TVarData &Dest, const TVarData &V, char * Name);
	virtual void __fastcall IntSet(const TVarData &V, const TVarData &Value, char * Name);
	virtual void __fastcall ToJSON(TTextWriter* W, const System::Variant &Value, TTextWriterKind Escape)/* overload */;
	
public:
	__classmethod void __fastcall New(/* out */ System::Variant &aValue, TDocVariantOptions aOptions = TDocVariantOptions() )/* overload */;
	__classmethod void __fastcall NewFast(/* out */ System::Variant &aValue)/* overload */;
	__classmethod void __fastcall NewFast(PDocVariantData const *aValues, const int aValues_High)/* overload */;
	__classmethod System::Variant __fastcall New(TDocVariantOptions Options = TDocVariantOptions() )/* overload */;
	__classmethod System::Variant __fastcall NewObject(const System::TVarRec *NameValuePairs, const int NameValuePairs_High, TDocVariantOptions Options = TDocVariantOptions() );
	__classmethod System::Variant __fastcall NewArray(const System::TVarRec *Items, const int Items_High, TDocVariantOptions Options = TDocVariantOptions() )/* overload */;
	__classmethod System::Variant __fastcall NewArray(const TVariantDynArray Items, TDocVariantOptions Options = TDocVariantOptions() )/* overload */;
	__classmethod System::Variant __fastcall NewJSON(const RawUTF8 JSON, TDocVariantOptions Options = (TDocVariantOptions() << TDocVariantOption::dvoReturnNullForUnknownProperty ));
	__classmethod System::Variant __fastcall NewUnique(const System::Variant &SourceDocVariant, TDocVariantOptions Options = (TDocVariantOptions() << TDocVariantOption::dvoReturnNullForUnknownProperty ));
	__classmethod void __fastcall GetSingleOrDefault(const System::Variant &docVariantArray, const System::Variant &Default, System::Variant &result);
	virtual int __fastcall IterateCount(const TVarData &V);
	virtual void __fastcall Iterate(TVarData &Dest, const TVarData &V, int Index);
	virtual bool __fastcall DoFunction(TVarData &Dest, const TVarData &V, const System::UnicodeString Name, const System::Variants::TVarDataArray Arguments);
	virtual void __fastcall Clear(TVarData &V);
	virtual void __fastcall Copy(TVarData &Dest, const TVarData &Source, const bool Indirect);
	virtual void __fastcall CopyByValue(TVarData &Dest, const TVarData &Source);
	virtual void __fastcall Cast(TVarData &Dest, const TVarData &Source);
	virtual void __fastcall CastTo(TVarData &Dest, const TVarData &Source, const System::Word AVarType);
	virtual void __fastcall Compare(const TVarData &Left, const TVarData &Right, System::Variants::TVarCompareResult &Relationship);
public:
	/* TCustomVariantType.Create */ inline __fastcall TDocVariant()/* overload */ : TSynInvokeableVariantType() { }
	/* TCustomVariantType.Create */ inline __fastcall TDocVariant(System::Word RequestedVarType)/* overload */ : TSynInvokeableVariantType(RequestedVarType) { }
	/* TCustomVariantType.Destroy */ inline __fastcall virtual ~TDocVariant() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TDocVariantKind : unsigned char { dvUndefined, dvObject, dvArray };

#pragma pack(push,1)
struct DECLSPEC_DRECORD TDocVariantData
{
public:
	System::Variant operator[](const System::Variant aNameOrIndex) { return this->Value[aNameOrIndex]; }
	
private:
	System::Word VType;
	TDocVariantOptions VOptions;
	TDocVariantKind VKind;
	TRawUTF8DynArray VName;
	TVariantDynArray VValue;
	int VCount;
	System::Variant __fastcall GetValueOrItem(const System::Variant &aNameOrIndex);
	void __fastcall SetValueOrItem(const System::Variant &aNameOrIndex, const System::Variant &aValue);
	void __fastcall InternalAddValue(const RawUTF8 aName, const System::Variant &aValue);
	void __fastcall SetCapacity(int aValue);
	int __fastcall GetCapacity();
	void __fastcall AddNameValuesToObject(const System::TVarRec *NameValuePairs, const int NameValuePairs_High);
	
public:
	void __fastcall Init(TDocVariantOptions aOptions = TDocVariantOptions() , TDocVariantKind aKind = (TDocVariantKind)(0x0));
	void __fastcall InitObject(const System::TVarRec *NameValuePairs, const int NameValuePairs_High, TDocVariantOptions aOptions = TDocVariantOptions() );
	void __fastcall InitArray(const System::TVarRec *Items, const int Items_High, TDocVariantOptions aOptions = TDocVariantOptions() );
	void __fastcall InitArrayFromVariants(const TVariantDynArray Items, TDocVariantOptions aOptions = TDocVariantOptions() );
	void __fastcall InitObjectFromVariants(const TRawUTF8DynArray aNames, const TVariantDynArray aValues, TDocVariantOptions aOptions = TDocVariantOptions() );
	PUTF8Char __fastcall InitJSONInPlace(PUTF8Char JSON, TDocVariantOptions aOptions = TDocVariantOptions() , PUTF8Char aEndOfObject = (PUTF8Char)(0x0));
	bool __fastcall InitJSON(const RawUTF8 JSON, TDocVariantOptions aOptions = TDocVariantOptions() );
	void __fastcall InitCopy(const System::Variant &SourceDocVariant, TDocVariantOptions aOptions);
	void __fastcall Clear();
	void __fastcall Reset();
	void __fastcall SetCount(int aCount);
	RawUTF8 __fastcall ToJSON();
	void __fastcall ToRawUTF8DynArray(/* out */ TRawUTF8DynArray &Result)/* overload */;
	TRawUTF8DynArray __fastcall ToRawUTF8DynArray()/* overload */;
	void __fastcall ToTextPairs(/* out */ RawUTF8 &result, const RawUTF8 NameValueSep = "=", const RawUTF8 ItemSep = "\r\n")/* overload */;
	RawUTF8 __fastcall ToTextPairs(const RawUTF8 NameValueSep = "=", const RawUTF8 ItemSep = "\r\n")/* overload */;
	void __fastcall ToArrayOfConst(/* out */ TTVarRecDynArray &Result)/* overload */;
	TTVarRecDynArray __fastcall ToArrayOfConst()/* overload */;
	int __fastcall GetValueIndex(const RawUTF8 aName)/* overload */;
	int __fastcall GetValueIndex(PUTF8Char aName, int aNameLen, bool aCaseSensitive)/* overload */;
	System::Variant __fastcall GetValueOrRaiseException(const RawUTF8 aName);
	System::Variant __fastcall GetValueOrDefault(const RawUTF8 aName, const System::Variant &aDefault);
	System::Variant __fastcall GetValueOrNull(const RawUTF8 aName);
	bool __fastcall GetVarData(const RawUTF8 aName, TVarData &aValue)/* overload */;
	PVarData __fastcall GetVarData(const RawUTF8 aName)/* overload */;
	bool __fastcall GetAsInteger(const RawUTF8 aName, /* out */ int &aValue);
	bool __fastcall GetAsInt64(const RawUTF8 aName, /* out */ __int64 &aValue);
	bool __fastcall GetAsDouble(const RawUTF8 aName, /* out */ double &aValue);
	bool __fastcall GetAsRawUTF8(const RawUTF8 aName, /* out */ RawUTF8 &aValue);
	System::Variant __fastcall GetValueByPath(const RawUTF8 aPath)/* overload */;
	System::Variant __fastcall GetValueByPath(const RawUTF8 *aDocVariantPath, const int aDocVariantPath_High)/* overload */;
	void __fastcall RetrieveValueOrRaiseException(PUTF8Char aName, int aNameLen, bool aCaseSensitive, System::Variant &Dest, bool DestByRef)/* overload */;
	void __fastcall RetrieveValueOrRaiseException(int Index, System::Variant &Dest, bool DestByRef)/* overload */;
	void __fastcall RetrieveNameOrRaiseException(int Index, RawUTF8 &Dest);
	void __fastcall SetValueOrRaiseException(int Index, const System::Variant &NewValue);
	int __fastcall AddValue(const RawUTF8 aName, const System::Variant &aValue)/* overload */;
	int __fastcall AddValue(PUTF8Char aName, int aNameLen, const System::Variant &aValue)/* overload */;
	int __fastcall AddOrUpdateValue(const RawUTF8 aName, const System::Variant &aValue, System::PBoolean wasAdded = (System::PBoolean)(0x0));
	int __fastcall AddItem(const System::Variant &aValue);
	bool __fastcall Delete(int Index)/* overload */;
	bool __fastcall Delete(const RawUTF8 aName)/* overload */;
	int __fastcall SearchItemByProp(const RawUTF8 aPropName, const RawUTF8 aPropValue, bool aCaseSensitive);
	int __fastcall SearchItemByValue(const System::Variant &aValue);
	void __fastcall SortByName(TUTF8Compare Compare = 0x0);
	__property TDocVariantOptions Options = {read=VOptions};
	__property TDocVariantKind Kind = {read=VKind};
	__property System::Word VarType = {read=VType};
	__property int Count = {read=VCount};
	__property int Capacity = {read=GetCapacity, write=SetCapacity};
	__property TVariantDynArray Values = {read=VValue};
	__property TRawUTF8DynArray Names = {read=VName};
	__property System::Variant Value[const System::Variant aNameOrIndex] = {read=GetValueOrItem, write=SetValueOrItem};
};
#pragma pack(pop)


enum DECLSPEC_DENUM TConsoleColor : unsigned char { ccBlack, ccBlue, ccGreen, ccCyan, ccRed, ccMagenta, ccBrown, ccLightGray, ccDarkGray, ccLightBlue, ccLightGreen, ccLightCyan, ccLightRed, ccLightMagenta, ccYellow, ccWhite };

typedef TPrecisionTimer *PPrecisionTimer;

typedef PPrecisionTimer *PPPrecisionTimer;

struct DECLSPEC_DRECORD TPrecisionTimer
{
private:
	__int64 iStart;
	__int64 iStop;
	__int64 iResume;
	__int64 iLast;
	__int64 iFreq;
	unsigned __int64 iTime;
	unsigned __int64 iLastTime;
	unsigned fPauseCount;
	
public:
	void __fastcall Init();
	void __fastcall Start();
	void __fastcall ComputeTime();
	RawUTF8 __fastcall Stop();
	void __fastcall Pause();
	void __fastcall Resume();
	System::_di_IInterface __fastcall ProfileCurrentMethod();
	void __fastcall FromExternalQueryPerformanceCounters(const __int64 CounterDiff);
	unsigned __int64 __fastcall PerSec(const unsigned __int64 Count);
	RawUTF8 __fastcall ByCount(unsigned __int64 Count);
	RawUTF8 __fastcall Time();
	__property unsigned __int64 TimeInMicroSec = {read=iTime, write=iTime};
	RawUTF8 __fastcall LastTime();
	__property unsigned __int64 LastTimeInMicroSec = {read=iLastTime, write=iLastTime};
	__property unsigned PauseCount = {read=fPauseCount};
};


__interface ILocalPrecisionTimer  : public System::IInterface 
{
	virtual void __fastcall Start() = 0 ;
	virtual RawUTF8 __fastcall Stop() = 0 ;
	virtual void __fastcall Pause() = 0 ;
	virtual void __fastcall Resume() = 0 ;
	virtual unsigned __fastcall PerSec(unsigned Count) = 0 ;
	virtual RawUTF8 __fastcall ByCount(unsigned Count) = 0 ;
};

class PASCALIMPLEMENTATION TLocalPrecisionTimer : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
protected:
	TPrecisionTimer fTimer;
	
public:
	__fastcall TLocalPrecisionTimer();
	void __fastcall Start();
	RawUTF8 __fastcall Stop();
	void __fastcall Pause();
	void __fastcall Resume();
	unsigned __fastcall PerSec(unsigned Count);
	RawUTF8 __fastcall ByCount(unsigned Count);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TLocalPrecisionTimer() { }
	
private:
	void *__ILocalPrecisionTimer;	// ILocalPrecisionTimer 
	
public:
	operator ILocalPrecisionTimer*(void) { return (ILocalPrecisionTimer*)&__ILocalPrecisionTimer; }
	
};


class PASCALIMPLEMENTATION TSynMonitorTime : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	unsigned __int64 fMicroSeconds;
	RawUTF8 __fastcall GetAsText();
	
public:
	unsigned __int64 __fastcall PerSecond(const unsigned __int64 aValue);
	
__published:
	__property unsigned __int64 MicroSec = {read=fMicroSeconds, write=fMicroSeconds};
	__property RawUTF8 Text = {read=GetAsText};
public:
	/* TObject.Create */ inline __fastcall TSynMonitorTime() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TSynMonitorTime() { }
	
};


class PASCALIMPLEMENTATION TSynMonitorSize : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	unsigned __int64 fBytes;
	RawUTF8 __fastcall GetAsText();
	
__published:
	__property unsigned __int64 Bytes = {read=fBytes, write=fBytes};
	__property RawUTF8 Text = {read=GetAsText};
public:
	/* TObject.Create */ inline __fastcall TSynMonitorSize() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TSynMonitorSize() { }
	
};


class PASCALIMPLEMENTATION TSynMonitorThroughput : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	unsigned __int64 fBytesPerSec;
	RawUTF8 __fastcall GetAsText();
	
__published:
	__property unsigned __int64 BytesPerSec = {read=fBytesPerSec, write=fBytesPerSec};
	__property RawUTF8 Text = {read=GetAsText};
public:
	/* TObject.Create */ inline __fastcall TSynMonitorThroughput() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TSynMonitorThroughput() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynMonitorMemory : public TSynPersistent
{
	typedef TSynPersistent inherited;
	
protected:
	int FMemoryLoadPercent;
	TSynMonitorSize* FPhysicalMemoryFree;
	TSynMonitorSize* FVirtualMemoryFree;
	TSynMonitorSize* FPagingFileTotal;
	TSynMonitorSize* FPhysicalMemoryTotal;
	TSynMonitorSize* FVirtualMemoryTotal;
	TSynMonitorSize* FPagingFileFree;
	unsigned fLastMemoryInfoRetrievedTix;
	virtual void __fastcall RetrieveMemoryInfo();
	int __fastcall GetMemoryLoadPercent();
	TSynMonitorSize* __fastcall GetPagingFileFree();
	TSynMonitorSize* __fastcall GetPagingFileTotal();
	TSynMonitorSize* __fastcall GetPhysicalMemoryFree();
	TSynMonitorSize* __fastcall GetPhysicalMemoryTotal();
	TSynMonitorSize* __fastcall GetVirtualMemoryFree();
	TSynMonitorSize* __fastcall GetVirtualMemoryTotal();
	
public:
	__fastcall virtual TSynMonitorMemory();
	__fastcall virtual ~TSynMonitorMemory();
	
__published:
	__property int MemoryLoadPercent = {read=GetMemoryLoadPercent, nodefault};
	__property TSynMonitorSize* PhysicalMemoryTotal = {read=GetPhysicalMemoryTotal};
	__property TSynMonitorSize* PhysicalMemoryFree = {read=GetPhysicalMemoryFree};
	__property TSynMonitorSize* PagingFileTotal = {read=GetPagingFileTotal};
	__property TSynMonitorSize* PagingFileFree = {read=GetPagingFileFree};
	__property TSynMonitorSize* VirtualMemoryTotal = {read=GetVirtualMemoryTotal};
	__property TSynMonitorSize* VirtualMemoryFree = {read=GetVirtualMemoryFree};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynFPUException : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::Word fExpected8087;
	System::Word fSaved8087;
	int fRefCount;
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	int __stdcall _AddRef();
	int __stdcall _Release();
	
public:
	__fastcall TSynFPUException(System::Word Expected8087Flag);
	__classmethod System::_di_IInterface __fastcall ForLibraryCode();
	__classmethod System::_di_IInterface __fastcall ForDelphiCode();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSynFPUException() { }
	
private:
	void *__IInterface;	// System::IInterface 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IInterface; }
	#endif
	
};

#pragma pack(pop)

__interface IAutoFree  : public System::IInterface 
{
	virtual void __fastcall Another(void *objVar, System::TObject* obj) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAutoFree : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
	
private:
	typedef System::DynamicArray<System::TObject*> _TAutoFree__1;
	
	
protected:
	System::TObject* fObject;
	_TAutoFree__1 fObjectList;
	
public:
	__fastcall TAutoFree(void *localVariable, System::TObject* obj)/* overload */;
	__fastcall TAutoFree(void * const *varObjPairs, const int varObjPairs_High)/* overload */;
	__classmethod _di_IAutoFree __fastcall One(void *localVariable, System::TObject* obj);
	__classmethod _di_IAutoFree __fastcall Several(void * const *varObjPairs, const int varObjPairs_High);
	void __fastcall Another(void *localVariable, System::TObject* obj);
	__fastcall virtual ~TAutoFree();
private:
	void *__IAutoFree;	// IAutoFree 
	
public:
	operator IAutoFree*(void) { return (IAutoFree*)&__IAutoFree; }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{97559643-6474-4AD3-AF72-B9BB84B4955D}") IAutoLocker  : public System::IInterface 
{
	virtual System::_di_IInterface __fastcall ProtectMethod() = 0 ;
	virtual void __fastcall Enter() = 0 ;
	virtual void __fastcall Leave() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAutoLocker : public TInterfacedObjectWithCustomCreate
{
	typedef TInterfacedObjectWithCustomCreate inherited;
	
protected:
	_RTL_CRITICAL_SECTION fLock;
	bool fLocked;
	
public:
	__fastcall virtual TAutoLocker();
	System::_di_IInterface __fastcall ProtectMethod();
	void __fastcall Enter();
	void __fastcall Leave();
	__fastcall virtual ~TAutoLocker();
private:
	void *__IAutoLocker;	// IAutoLocker 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {97559643-6474-4AD3-AF72-B9BB84B4955D}
	operator _di_IAutoLocker()
	{
		_di_IAutoLocker intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IAutoLocker*(void) { return (IAutoLocker*)&__IAutoLocker; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{CADC2C20-3F5D-4539-9D23-275E833A86F3}") ILockedDocVariant  : public System::IInterface 
{
	
public:
	System::Variant operator[](const RawUTF8 Name) { return this->Value[Name]; }
	virtual System::Variant __fastcall GetValue(const RawUTF8 Name) = 0 ;
	virtual void __fastcall SetValue(const RawUTF8 Name, const System::Variant &Value) = 0 ;
	virtual bool __fastcall Exists(const RawUTF8 Name, /* out */ System::Variant &Value) = 0 ;
	virtual void __fastcall Replace(const RawUTF8 Name, const System::Variant &Value, /* out */ System::Variant &LocalValue) = 0 ;
	virtual bool __fastcall AddExistingProp(const RawUTF8 Name, System::Variant &Obj) = 0 ;
	virtual void __fastcall AddNewProp(const RawUTF8 Name, const System::Variant &Value, System::Variant &Obj) = 0 ;
	virtual void __fastcall Clear() = 0 ;
	__property System::Variant Value[const RawUTF8 Name] = {read=GetValue, write=SetValue/*, default*/};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TLockedDocVariant : public TInterfacedObjectWithCustomCreate
{
	typedef TInterfacedObjectWithCustomCreate inherited;
	
public:
	System::Variant operator[](const RawUTF8 Name) { return this->Value[Name]; }
	
protected:
	TDocVariantData fValue;
	TAutoLocker* fLock;
	System::Variant __fastcall GetValue(const RawUTF8 Name);
	void __fastcall SetValue(const RawUTF8 Name, const System::Variant &Value);
	
public:
	__fastcall virtual TLockedDocVariant()/* overload */;
	__fastcall TLockedDocVariant(bool FastStorage)/* overload */;
	__fastcall TLockedDocVariant(TDocVariantOptions options)/* overload */;
	__fastcall virtual ~TLockedDocVariant();
	bool __fastcall Exists(const RawUTF8 Name, /* out */ System::Variant &Value);
	void __fastcall Replace(const RawUTF8 Name, const System::Variant &Value, /* out */ System::Variant &LocalValue);
	bool __fastcall AddExistingProp(const RawUTF8 Name, System::Variant &Obj);
	void __fastcall AddNewProp(const RawUTF8 Name, const System::Variant &Value, System::Variant &Obj);
	void __fastcall Clear();
	__property System::Variant Value[const RawUTF8 Name] = {read=GetValue, write=SetValue/*, default*/};
private:
	void *__ILockedDocVariant;	// ILockedDocVariant 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {CADC2C20-3F5D-4539-9D23-275E833A86F3}
	operator _di_ILockedDocVariant()
	{
		_di_ILockedDocVariant intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ILockedDocVariant*(void) { return (ILockedDocVariant*)&__ILockedDocVariant; }
	#endif
	
};

#pragma pack(pop)

typedef System::TMetaClass* TSynAuthenticationClass;

class PASCALIMPLEMENTATION TSynAuthenticationAbstract : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TAutoLocker* fLock;
	TIntegerDynArray fSessions;
	int fSessionsCount;
	int fSessionGenerator;
	__int64 fTokenSeed;
	virtual unsigned __fastcall ComputeCredential(bool previous, const RawUTF8 UserName, const RawUTF8 PassWord);
	virtual bool __fastcall GetPassword(const RawUTF8 UserName, /* out */ RawUTF8 &Password) = 0 ;
	virtual int __fastcall GetUsersCount() = 0 ;
	
public:
	__fastcall TSynAuthenticationAbstract();
	__fastcall virtual ~TSynAuthenticationAbstract();
	virtual void __fastcall AuthenticateUser(const RawUTF8 aName, const RawUTF8 aPassword);
	virtual void __fastcall DisauthenticateUser(const RawUTF8 aName);
	virtual int __fastcall CreateSession(const RawUTF8 User, unsigned Hash);
	bool __fastcall SessionExists(int aID);
	void __fastcall RemoveSession(int aID);
	__int64 __fastcall CurrentToken();
	__property int SessionsCount = {read=fSessionsCount, nodefault};
	__property int UsersCount = {read=GetUsersCount, nodefault};
	__classmethod virtual unsigned __fastcall ComputeHash(__int64 Token, const RawUTF8 UserName, const RawUTF8 PassWord);
};


class PASCALIMPLEMENTATION TSynAuthentication : public TSynAuthenticationAbstract
{
	typedef TSynAuthenticationAbstract inherited;
	
protected:
	TSynNameValue fCredentials;
	virtual bool __fastcall GetPassword(const RawUTF8 UserName, /* out */ RawUTF8 &Password);
	virtual int __fastcall GetUsersCount();
	
public:
	__fastcall TSynAuthentication(const RawUTF8 aUserName, const RawUTF8 aPassword);
	virtual void __fastcall AuthenticateUser(const RawUTF8 aName, const RawUTF8 aPassword);
	virtual void __fastcall DisauthenticateUser(const RawUTF8 aName);
public:
	/* TSynAuthenticationAbstract.Destroy */ inline __fastcall virtual ~TSynAuthentication() { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define SYNOPSE_FRAMEWORK_VERSION L"1.18.1417"
#define SYNOPSE_FRAMEWORK_FULLVERSION L"1.18.1417 FTS3"
static const System::Word CP_UTF16 = System::Word(0x4b0);
static const System::Word CP_SQLRAWBLOB = System::Word(0xfffe);
static const System::Word CP_RAWBYTESTRING = System::Word(0xffff);
static const System::Word CODEPAGE_US = System::Word(0x4e4);
extern DELPHI_PACKAGE TSynAnsiFixedWidth* WinAnsiConvert;
extern DELPHI_PACKAGE TSynAnsiConvert* CurrentAnsiConvert;
extern DELPHI_PACKAGE TSynAnsiUTF8* UTF8AnsiConvert;
#define HEADER_CONTENT_TYPE L"Content-Type: "
#define HEADER_CONTENT_TYPE_UPPER L"CONTENT-TYPE: "
#define JSON_CONTENT_TYPE L"application/json; charset=UTF-8"
#define JSON_CONTENT_TYPE_HEADER L"Content-Type: application/json; charset=UTF-8"
#define TEXT_CONTENT_TYPE L"text/plain; charset=UTF-8"
#define TEXT_CONTENT_TYPE_HEADER L"Content-Type: text/plain; charset=UTF-8"
#define HTML_CONTENT_TYPE L"text/html; charset=UTF-8"
#define HTML_CONTENT_TYPE_HEADER L"Content-Type: text/html; charset=UTF-8"
#define XML_CONTENT_TYPE L"text/xml; charset=UTF-8"
#define XML_CONTENT_TYPE_HEADER L"Content-Type: text/xml; charset=UTF-8"
#define BINARY_CONTENT_TYPE L"application/octet-stream"
#define BINARY_CONTENT_TYPE_HEADER L"Content-Type: application/octet-stream"
extern DELPHI_PACKAGE RawUTF8 JSON_CONTENT_TYPE_VAR;
extern DELPHI_PACKAGE RawUTF8 JSON_CONTENT_TYPE_HEADER_VAR;
static const System::Int8 SINGLE_PRECISION = System::Int8(0x8);
static const System::Int8 DOUBLE_PRECISION = System::Int8(0xf);
extern DELPHI_PACKAGE NativeInt __fastcall (*StrLen)(void * S);
extern DELPHI_PACKAGE TNormTable NormToUpper;
extern DELPHI_PACKAGE TNormTableByte NormToUpperByte;
extern DELPHI_PACKAGE TNormTable NormToLower;
extern DELPHI_PACKAGE TNormTableByte NormToLowerByte;
extern DELPHI_PACKAGE TNormTable NormToUpperAnsi7;
extern DELPHI_PACKAGE TNormTableByte NormToUpperAnsi7Byte;
extern DELPHI_PACKAGE System::Set<char, _DELPHI_SET_CHAR(0), _DELPHI_SET_CHAR(255)> ANSICHARNOT01310;
static const System::Int8 SOUNDEX_BITS = System::Int8(0x4);
static const TDynArrayKind djPointer = (TDynArrayKind)(4);
static const TDynArrayKind djObject = (TDynArrayKind)(4);
extern DELPHI_PACKAGE System::StaticArray<System::StaticArray<TDynArraySortCompare, 19>, 2> DYNARRAY_SORTFIRSTFIELD;
extern DELPHI_PACKAGE System::StaticArray<System::StaticArray<TDynArrayHashOne, 19>, 2> DYNARRAY_HASHFIRSTFIELD;
extern DELPHI_PACKAGE bool __fastcall (*DynArrayIsObjArray)(void * aDynArrayTypeInfo);
static const System::Int8 MAX_SQLFIELDS = System::Int8(0x40);
static const System::Int8 MAX_SQLFIELDS_INCLUDINGID = System::Int8(0x41);
static const int JSON_BASE64_MAGIC = int(0xb0bfef);
static const unsigned JSON_BASE64_MAGIC_QUOTE = unsigned(0xb0bfef22);
extern DELPHI_PACKAGE unsigned JSON_BASE64_MAGIC_QUOTE_VAR;
static const int JSON_SQLDATE_MAGIC = int(0xb1bfef);
static const unsigned JSON_SQLDATE_MAGIC_QUOTE = unsigned(0xb1bfef22);
extern DELPHI_PACKAGE unsigned JSON_SQLDATE_MAGIC_QUOTE_VAR;
extern DELPHI_PACKAGE Xlssyncommons__43 SQLDBFIELDTYPE_TO_DELPHITYPE;
#define XMLUTF8_HEADER L"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n"
#define XMLUTF8_NAMESPACE L"<contents xmlns=\"http://www.w3.org/2001/XMLSchema-instanc"\
	L"e\">"
static const TJSONCustomParserRTTIType ptPtrInt = (TJSONCustomParserRTTIType)(7);
static const TJSONCustomParserRTTIType ptPtrUInt = (TJSONCustomParserRTTIType)(3);
#define PT_COMPLEXTYPES (System::Set<TJSONCustomParserRTTIType, TJSONCustomParserRTTIType::ptArray, TJSONCustomParserRTTIType::ptCustom>() << TJSONCustomParserRTTIType::ptArray << TJSONCustomParserRTTIType::ptRecord << TJSONCustomParserRTTIType::ptTimeLog << TJSONCustomParserRTTIType::ptCustom )
extern DELPHI_PACKAGE TSynLogExceptionToStr TSynLogExceptionToStrCustom;
extern DELPHI_PACKAGE TSynLogExceptionToStr DefaultSynLogExceptionToStr;
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 256> ConvertHexToBin;
extern DELPHI_PACKAGE System::StaticArray<System::StaticArray<unsigned, 256>, 8> crc32ctab;
extern DELPHI_PACKAGE System::Set<Xlssyncommons__85, Xlssyncommons__85::cfFPU, Xlssyncommons__85::cf_c31> CpuFeatures;
extern DELPHI_PACKAGE THasher crc32c;
extern DELPHI_PACKAGE THasher DefaultHasher;
extern DELPHI_PACKAGE System::StaticArray<unsigned, 32> ALLBITS_CARDINAL;
extern DELPHI_PACKAGE System::UnicodeString __fastcall (*i18nDateText)(TTimeLog Iso);
extern DELPHI_PACKAGE void __fastcall (*LoadResStringTranslate)(System::UnicodeString &Text);
extern DELPHI_PACKAGE int CacheResCount;
static const int MAXLOGSIZE = int(0x100000);
extern DELPHI_PACKAGE System::StaticArray<System::StaticArray<char, 2>, 100> TwoDigitLookup;
extern DELPHI_PACKAGE System::StaticArray<System::Word, 100> TwoDigitLookupW;
extern DELPHI_PACKAGE System::Set<System::Byte, 0, 255> IsWord;
extern DELPHI_PACKAGE System::Set<System::Byte, 0, 255> IsIdentifier;
extern DELPHI_PACKAGE System::Set<System::Byte, 0, 255> IsURIUnreserved;
extern DELPHI_PACKAGE bool IsWow64;
extern DELPHI_PACKAGE _SYSTEM_INFO SystemInfo;
extern DELPHI_PACKAGE _OSVERSIONINFOEXW OSVersionInfo;
extern DELPHI_PACKAGE TWindowsVersion OSVersion;
extern DELPHI_PACKAGE __int64 __stdcall (*GetTickCount64)(void);
extern DELPHI_PACKAGE Xlssyncommons__46 ExeVersion;
extern DELPHI_PACKAGE System::Contnrs::TObjectList* GarbageCollector;
extern DELPHI_PACKAGE bool GarbageCollectorFreeing;
extern DELPHI_PACKAGE Xlssyncommons__17 JSON_BOOLEAN;
extern DELPHI_PACKAGE Xlssyncommons__27 PLURAL_FORM;
static const System::Int8 SYNTABLESTATEMENTWHEREID = System::Int8(0x0);
static const System::Int8 varWord64 = System::Int8(0x15);
static const System::Word varSynUnicode = System::Word(0x102);
static const System::Word varNativeString = System::Word(0x102);
extern DELPHI_PACKAGE System::Set<System::Int8, 0, 21> VTYPE_STATIC;
extern DELPHI_PACKAGE TSynInvokeableVariantType* DocVariantType;
extern DELPHI_PACKAGE System::StaticArray<TDocVariantOptions, 2> JSON_OPTIONS;
extern DELPHI_PACKAGE TDocVariantOptions JSON_OPTIONS_FAST_STRICTJSON;
extern DELPHI_PACKAGE TDocVariantOptions JSON_OPTIONS_NAMEVALUE;
extern DELPHI_PACKAGE NativeUInt StdOut;
extern DELPHI_PACKAGE System::ResourceString _sInvalidIPAddress;
#define Xlssyncommons_sInvalidIPAddress System::LoadResourceString(&Xlssyncommons::_sInvalidIPAddress)
extern DELPHI_PACKAGE System::ResourceString _sInvalidEmailAddress;
#define Xlssyncommons_sInvalidEmailAddress System::LoadResourceString(&Xlssyncommons::_sInvalidEmailAddress)
extern DELPHI_PACKAGE System::ResourceString _sInvalidPattern;
#define Xlssyncommons_sInvalidPattern System::LoadResourceString(&Xlssyncommons::_sInvalidPattern)
extern DELPHI_PACKAGE System::ResourceString _sCharacter01n;
#define Xlssyncommons_sCharacter01n System::LoadResourceString(&Xlssyncommons::_sCharacter01n)
extern DELPHI_PACKAGE System::ResourceString _sInvalidTextLengthMin;
#define Xlssyncommons_sInvalidTextLengthMin System::LoadResourceString(&Xlssyncommons::_sInvalidTextLengthMin)
extern DELPHI_PACKAGE System::ResourceString _sInvalidTextLengthMax;
#define Xlssyncommons_sInvalidTextLengthMax System::LoadResourceString(&Xlssyncommons::_sInvalidTextLengthMax)
extern DELPHI_PACKAGE System::ResourceString _sInvalidTextChar;
#define Xlssyncommons_sInvalidTextChar System::LoadResourceString(&Xlssyncommons::_sInvalidTextChar)
extern DELPHI_PACKAGE System::ResourceString _sValidationFailed;
#define Xlssyncommons_sValidationFailed System::LoadResourceString(&Xlssyncommons::_sValidationFailed)
extern DELPHI_PACKAGE System::ResourceString _sValidationFieldVoid;
#define Xlssyncommons_sValidationFieldVoid System::LoadResourceString(&Xlssyncommons::_sValidationFieldVoid)
extern DELPHI_PACKAGE System::ResourceString _sValidationFieldDuplicate;
#define Xlssyncommons_sValidationFieldDuplicate System::LoadResourceString(&Xlssyncommons::_sValidationFieldDuplicate)
extern DELPHI_PACKAGE void __fastcall FastNewRawUTF8(RawUTF8 &s, int len);
extern DELPHI_PACKAGE int __fastcall WideCharToUtf8(PUTF8Char Dest, NativeUInt aWideChar);
extern DELPHI_PACKAGE int __fastcall UTF16CharToUtf8(PUTF8Char Dest, PWORD &Source);
extern DELPHI_PACKAGE int __fastcall UCS4ToUTF8(unsigned ucs4, PUTF8Char Dest);
extern DELPHI_PACKAGE void __fastcall AnyAnsiToUTF8(const System::RawByteString s, RawUTF8 &result)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall AnyAnsiToUTF8(const System::RawByteString s)/* overload */;
extern DELPHI_PACKAGE PUTF8Char __fastcall WinAnsiBufferToUtf8(PUTF8Char Dest, char * Source, unsigned SourceChars);
extern DELPHI_PACKAGE RawUTF8 __fastcall ShortStringToUTF8(const System::ShortString &source);
extern DELPHI_PACKAGE void __fastcall WinAnsiToUnicodeBuffer(const WinAnsiString S, PWordArray Dest, int DestLen);
extern DELPHI_PACKAGE RawUnicode __fastcall WinAnsiToRawUnicode(const WinAnsiString S);
extern DELPHI_PACKAGE RawUTF8 __fastcall WinAnsiToUtf8(const WinAnsiString S)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall WinAnsiToUtf8(char * WinAnsi, int WinAnsiLen)/* overload */;
extern DELPHI_PACKAGE char __fastcall WideCharToWinAnsiChar(unsigned wc);
extern DELPHI_PACKAGE int __fastcall WideCharToWinAnsi(unsigned wc);
extern DELPHI_PACKAGE bool __fastcall IsWinAnsi(System::WideChar * WideText, int Length)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsAnsiCompatible(char * PC)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsAnsiCompatible(char * PC, int Len)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsAnsiCompatible(const System::RawByteString Text)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsAnsiCompatible(System::WideChar * PW)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsAnsiCompatible(System::WideChar * PW, int Len)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsWinAnsi(System::WideChar * WideText)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsWinAnsiU(PUTF8Char UTF8Text);
extern DELPHI_PACKAGE bool __fastcall IsWinAnsiU8Bit(PUTF8Char UTF8Text);
extern DELPHI_PACKAGE int __fastcall UTF8ToWinPChar(char * dest, PUTF8Char source, int count);
extern DELPHI_PACKAGE System::RawByteString __fastcall ShortStringToAnsi7String(const System::ShortString &source);
extern DELPHI_PACKAGE void __fastcall UTF8ToShortString(System::SmallString<255> &dest, const int dest_High, PUTF8Char source);
extern DELPHI_PACKAGE WinAnsiString __fastcall Utf8ToWinAnsi(const RawUTF8 S)/* overload */;
extern DELPHI_PACKAGE WinAnsiString __fastcall Utf8ToWinAnsi(PUTF8Char P)/* overload */;
extern DELPHI_PACKAGE void __fastcall Utf8ToRawUTF8(PUTF8Char P, RawUTF8 &result);
extern DELPHI_PACKAGE NativeInt __fastcall UTF8ToWideChar(System::WideChar * dest, PUTF8Char source, NativeInt MaxDestChars, NativeInt sourceBytes)/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall UTF8ToWideChar(System::WideChar * dest, PUTF8Char source, NativeInt sourceBytes = (NativeInt)(0x0))/* overload */;
extern DELPHI_PACKAGE NativeUInt __fastcall Utf8ToUnicodeLength(PUTF8Char source);
extern DELPHI_PACKAGE bool __fastcall Utf8TruncateToUnicodeLength(RawUTF8 &text, int maxUtf16);
extern DELPHI_PACKAGE bool __fastcall Utf8TruncateToLength(RawUTF8 &text, unsigned maxUTF8);
extern DELPHI_PACKAGE NativeInt __fastcall Utf8FirstLineToUnicodeLength(PUTF8Char source);
extern DELPHI_PACKAGE RawUnicode __fastcall Utf8DecodeToRawUnicode(PUTF8Char P, int L)/* overload */;
extern DELPHI_PACKAGE RawUnicode __fastcall Utf8DecodeToRawUnicode(const RawUTF8 S)/* overload */;
extern DELPHI_PACKAGE RawUnicode __fastcall Utf8DecodeToRawUnicodeUI(const RawUTF8 S, System::PInteger DestLen = (System::PInteger)(0x0))/* overload */;
extern DELPHI_PACKAGE int __fastcall Utf8DecodeToRawUnicodeUI(const RawUTF8 S, RawUnicode &Dest)/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall RawUnicodeToUtf8(PUTF8Char Dest, NativeInt DestLen, System::WideChar * Source, NativeInt SourceLen)/* overload */;
extern DELPHI_PACKAGE void __fastcall RawUnicodeToUtf8(System::WideChar * WideChar, int WideCharCount, RawUTF8 &result)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall RawUnicodeToUtf8(System::WideChar * WideChar, int WideCharCount)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall RawUnicodeToUtf8(System::WideChar * WideChar, int WideCharCount, /* out */ int &UTF8Length)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall RawUnicodeToUtf8(const RawUnicode Unicode)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall SynUnicodeToUtf8(const System::UnicodeString Unicode);
extern DELPHI_PACKAGE System::UnicodeString __fastcall RawUnicodeToSynUnicode(const RawUnicode Unicode)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall RawUnicodeToSynUnicode(System::WideChar * WideChar, int WideCharCount)/* overload */;
extern DELPHI_PACKAGE void __fastcall RawUnicodeToWinPChar(char * dest, System::WideChar * source, int WideCharCount);
extern DELPHI_PACKAGE WinAnsiString __fastcall RawUnicodeToWinAnsi(System::WideChar * WideChar, int WideCharCount)/* overload */;
extern DELPHI_PACKAGE WinAnsiString __fastcall RawUnicodeToWinAnsi(const RawUnicode Unicode)/* overload */;
extern DELPHI_PACKAGE WinAnsiString __fastcall WideStringToWinAnsi(const System::WideString Wide);
extern DELPHI_PACKAGE void __fastcall UnicodeBufferToWinAnsi(System::WideChar * source, /* out */ WinAnsiString &Dest);
extern DELPHI_PACKAGE System::UnicodeString __fastcall UnicodeBufferToString(System::WideChar * source);
extern DELPHI_PACKAGE void __fastcall AnsiCharToUTF8(char * P, int L, RawUTF8 &result, int ACP);
extern DELPHI_PACKAGE RawUTF8 __fastcall UnicodeStringToUtf8(const System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall UTF8DecodeToUnicodeString(const RawUTF8 S)/* overload */;
extern DELPHI_PACKAGE void __fastcall UTF8DecodeToUnicodeString(PUTF8Char P, int L, System::UnicodeString &result)/* overload */;
extern DELPHI_PACKAGE WinAnsiString __fastcall UnicodeStringToWinAnsi(const System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall UTF8DecodeToUnicodeString(PUTF8Char P, int L)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall WinAnsiToUnicodeString(char * WinAnsi, int WinAnsiLen)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall WinAnsiToUnicodeString(const WinAnsiString WinAnsi)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall Ansi7ToString(const System::RawByteString Text)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall Ansi7ToString(PWinAnsiChar Text, int Len)/* overload */;
extern DELPHI_PACKAGE void __fastcall Ansi7ToString(PWinAnsiChar Text, int Len, System::UnicodeString &result)/* overload */;
extern DELPHI_PACKAGE System::RawByteString __fastcall StringToAnsi7(const System::UnicodeString Text);
extern DELPHI_PACKAGE WinAnsiString __fastcall StringToWinAnsi(const System::UnicodeString Text);
extern DELPHI_PACKAGE PUTF8Char __fastcall StringBufferToUtf8(PUTF8Char Dest, System::WideChar * Source, NativeInt SourceChars);
extern DELPHI_PACKAGE RawUTF8 __fastcall StringToUTF8(const System::UnicodeString Text)/* overload */;
extern DELPHI_PACKAGE void __fastcall StringToUTF8(const System::UnicodeString Text, RawUTF8 &result)/* overload */;
extern DELPHI_PACKAGE void __fastcall Int32ToUtf8(int Value, RawUTF8 &result)/* overload */;
extern DELPHI_PACKAGE void __fastcall Int64ToUtf8(__int64 Value, RawUTF8 &result)/* overload */;
extern DELPHI_PACKAGE int __fastcall VarRecAsChar(const System::TVarRec &V);
extern DELPHI_PACKAGE bool __fastcall VarRecToInt64(const System::TVarRec &V, /* out */ __int64 &value);
extern DELPHI_PACKAGE void __fastcall VarRecToUTF8(const System::TVarRec &V, RawUTF8 &result, System::PBoolean wasString = (System::PBoolean)(0x0));
extern DELPHI_PACKAGE bool __fastcall VarRecToUTF8IsString(const System::TVarRec &V, /* out */ RawUTF8 &value);
extern DELPHI_PACKAGE void __fastcall VarRecToInlineValue(const System::TVarRec &V, RawUTF8 &result);
extern DELPHI_PACKAGE RawUnicode __fastcall StringToRawUnicode(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StringToSynUnicode(const System::UnicodeString S);
extern DELPHI_PACKAGE RawUnicode __fastcall StringToRawUnicode(System::WideChar * P, int L)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall RawUnicodeToString(System::WideChar * P, int L)/* overload */;
extern DELPHI_PACKAGE void __fastcall RawUnicodeToString(System::WideChar * P, int L, System::UnicodeString &result)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall RawUnicodeToString(const RawUnicode U)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall SynUnicodeToString(const System::UnicodeString U);
extern DELPHI_PACKAGE System::UnicodeString __fastcall UTF8DecodeToString(PUTF8Char P, int L)/* overload */;
extern DELPHI_PACKAGE void __fastcall UTF8DecodeToString(PUTF8Char P, int L, System::UnicodeString &result)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall UTF8ToString(const RawUTF8 Text);
extern DELPHI_PACKAGE System::WideString __fastcall UTF8ToWideString(const RawUTF8 Text)/* overload */;
extern DELPHI_PACKAGE void __fastcall UTF8ToWideString(const RawUTF8 Text, System::WideString &result)/* overload */;
extern DELPHI_PACKAGE void __fastcall UTF8ToWideString(PUTF8Char Text, int Len, System::WideString &result)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall WideStringToUTF8(const System::WideString aText);
extern DELPHI_PACKAGE System::UnicodeString __fastcall UTF8ToSynUnicode(const RawUTF8 Text)/* overload */;
extern DELPHI_PACKAGE void __fastcall UTF8ToSynUnicode(const RawUTF8 Text, System::UnicodeString &result)/* overload */;
extern DELPHI_PACKAGE void __fastcall UTF8ToSynUnicode(PUTF8Char Text, int Len, System::UnicodeString &result)/* overload */;
extern DELPHI_PACKAGE char * __fastcall StrInt32(char * P, NativeInt val);
extern DELPHI_PACKAGE char * __fastcall StrUInt32(char * P, NativeUInt val);
extern DELPHI_PACKAGE char * __fastcall StrUInt64(char * P, const unsigned __int64 val);
extern DELPHI_PACKAGE char * __fastcall StrInt64(char * P, const __int64 val);
extern DELPHI_PACKAGE void __fastcall SetRawUTF8(RawUTF8 &Dest, void * text, int len);
extern DELPHI_PACKAGE void * __fastcall UniqueRawUTF8(RawUTF8 &UTF8);
extern DELPHI_PACKAGE void * __fastcall TypeInfoToRecordInfo(void * aDynArrayTypeInfo, System::PInteger aDataSize = (System::PInteger)(0x0));
extern DELPHI_PACKAGE void __fastcall TypeInfoToName(void * aTypeInfo, RawUTF8 &result, const RawUTF8 Default = RawUTF8())/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall TypeInfoToName(void * aTypeInfo)/* overload */;
extern DELPHI_PACKAGE int __fastcall RecordTypeInfoSize(void * aRecordTypeInfo);
extern DELPHI_PACKAGE bool __fastcall VariantToInteger(const System::Variant &V, int &Value);
extern DELPHI_PACKAGE bool __fastcall VariantToDouble(const System::Variant &V, double &Value);
extern DELPHI_PACKAGE bool __fastcall VariantToInt64(const System::Variant &V, __int64 &Value);
extern DELPHI_PACKAGE __int64 __fastcall VariantToInt64Def(const System::Variant &V, __int64 DefaultValue);
extern DELPHI_PACKAGE int __fastcall VariantToIntegerDef(const System::Variant &V, int DefaultValue)/* overload */;
extern DELPHI_PACKAGE void __fastcall VariantToInlineValue(const System::Variant &V, RawUTF8 &result);
extern DELPHI_PACKAGE void __fastcall VariantToUTF8(const System::Variant &V, RawUTF8 &result, bool &wasString)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall VariantToUTF8(const System::Variant &V)/* overload */;
extern DELPHI_PACKAGE void __fastcall VariantDynArrayClear(TVariantDynArray &Value);
extern DELPHI_PACKAGE int __fastcall Pos(const RawUTF8 substr, const RawUTF8 str)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall IntToString(int Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall IntToString(unsigned Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall IntToString(__int64 Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall DoubleToString(double Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall Curr64ToString(__int64 Value);
extern DELPHI_PACKAGE unsigned __fastcall bswap32(unsigned a);
extern DELPHI_PACKAGE System::RawByteString __fastcall Int32ToUtf8(int Value)/* overload */;
extern DELPHI_PACKAGE System::RawByteString __fastcall Int64ToUtf8(__int64 Value)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall Trim(const RawUTF8 S);
extern DELPHI_PACKAGE bool __fastcall CompareMem(void * P1, void * P2, int Length);
extern DELPHI_PACKAGE int __fastcall PosEx(const RawUTF8 SubStr, const RawUTF8 S, NativeInt Offset = (NativeInt)(0x1));
extern DELPHI_PACKAGE void __fastcall Split(const RawUTF8 Str, const RawUTF8 SepStr, RawUTF8 &LeftStr, RawUTF8 &RightStr, bool ToUpperCase = false)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall Split(const RawUTF8 Str, const RawUTF8 SepStr, RawUTF8 &LeftStr, bool ToUpperCase = false)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall StringReplaceAll(const RawUTF8 S, const RawUTF8 OldPattern, const RawUTF8 NewPattern);
extern DELPHI_PACKAGE PUTF8Char __fastcall PosChar(PUTF8Char Str, char Chr);
extern DELPHI_PACKAGE RawUTF8 __fastcall StringReplaceChars(const RawUTF8 Source, char OldChar, char NewChar);
extern DELPHI_PACKAGE int __fastcall PosI(PUTF8Char uppersubstr, const RawUTF8 str);
extern DELPHI_PACKAGE PUTF8Char __fastcall StrPosI(PUTF8Char uppersubstr, PUTF8Char str);
extern DELPHI_PACKAGE int __fastcall PosIU(PUTF8Char substr, const RawUTF8 str);
extern DELPHI_PACKAGE void __fastcall AppendBufferToRawUTF8(RawUTF8 &Text, void * Buffer, NativeInt BufferLen);
extern DELPHI_PACKAGE void __fastcall AppendBuffersToRawUTF8(RawUTF8 &Text, PUTF8Char const *Buffers, const int Buffers_High);
extern DELPHI_PACKAGE PUTF8Char __fastcall AppendRawUTF8ToBuffer(PUTF8Char Buffer, const RawUTF8 Text);
extern DELPHI_PACKAGE RawUTF8 __fastcall QuotedStr(const RawUTF8 S, char Quote = '\x27')/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall QuotedStr(PUTF8Char Text, char Quote)/* overload */;
extern DELPHI_PACKAGE void __fastcall QuotedStr(PUTF8Char Text, char Quote, RawUTF8 &result)/* overload */;
extern DELPHI_PACKAGE PUTF8Char __fastcall GotoEndOfQuotedString(PUTF8Char P);
extern DELPHI_PACKAGE void __fastcall QuotedStrJSON(const RawUTF8 aText, RawUTF8 &result);
extern DELPHI_PACKAGE PUTF8Char __fastcall GotoEndOfJSONString(PUTF8Char P);
extern DELPHI_PACKAGE PUTF8Char __fastcall GotoNextNotSpace(PUTF8Char P);
extern DELPHI_PACKAGE bool __fastcall NextNotSpaceCharIs(PUTF8Char &P, char ch);
extern DELPHI_PACKAGE PUTF8Char __fastcall UnQuoteSQLStringVar(PUTF8Char P, /* out */ RawUTF8 &Value);
extern DELPHI_PACKAGE RawUTF8 __fastcall UnQuoteSQLString(const RawUTF8 Value);
extern DELPHI_PACKAGE RawUTF8 __fastcall UnQuotedSQLSymbolName(const RawUTF8 ExternalDBSymbol);
extern DELPHI_PACKAGE bool __fastcall isSelect(PUTF8Char P);
extern DELPHI_PACKAGE PUTF8Char __fastcall SQLBegin(PUTF8Char P);
extern DELPHI_PACKAGE void __fastcall SQLAddWhereAnd(RawUTF8 &where, const RawUTF8 condition);
extern DELPHI_PACKAGE void __fastcall Base64MagicDecode(RawUTF8 &ParamValue);
extern DELPHI_PACKAGE bool __fastcall Base64MagicCheckAndDecode(PUTF8Char Value, System::RawByteString &Blob)/* overload */;
extern DELPHI_PACKAGE bool __fastcall Base64MagicCheckAndDecode(PUTF8Char Value, int ValueLen, System::RawByteString &Blob)/* overload */;
extern DELPHI_PACKAGE PUTF8Char __fastcall SQLParamContent(PUTF8Char P, /* out */ TSQLParamType &ParamType, /* out */ RawUTF8 &ParamValue, /* out */ bool &wasNull);
extern DELPHI_PACKAGE RawUTF8 __fastcall ExtractInlineParameters(const RawUTF8 SQL, TSQLParamTypeDynArray &Types, TRawUTF8DynArray &Values, int &maxParam, TSQLFieldBits &Nulls);
extern DELPHI_PACKAGE System::RawByteString __fastcall UInt32ToUtf8(unsigned Value)/* overload */;
extern DELPHI_PACKAGE void __fastcall UInt32ToUtf8(unsigned Value, RawUTF8 &result)/* overload */;
extern DELPHI_PACKAGE int __fastcall ExtendedToString(System::SmallString<255> &S, const int S_High, System::Extended Value, int Precision);
extern DELPHI_PACKAGE RawUTF8 __fastcall ExtendedToStr(System::Extended Value, int Precision)/* overload */;
extern DELPHI_PACKAGE void __fastcall ExtendedToStr(System::Extended Value, int Precision, RawUTF8 &result)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall DoubleToStr(double Value);
extern DELPHI_PACKAGE RawUTF8 __fastcall FormatUTF8(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall FormatUTF8(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High, bool JSONFormat = false)/* overload */;
extern DELPHI_PACKAGE System::RawByteString __fastcall RawByteStringArrayConcat(const System::RawByteString *Values, const int Values_High);
extern DELPHI_PACKAGE void __fastcall RawByteStringToBytes(const System::RawByteString buf, /* out */ System::DynamicArray<System::Byte> &bytes);
extern DELPHI_PACKAGE void __fastcall BytesToRawByteString(const System::DynamicArray<System::Byte> bytes, /* out */ System::RawByteString &buf);
extern DELPHI_PACKAGE NativeInt __fastcall StrIComp(void * Str1, void * Str2);
extern DELPHI_PACKAGE NativeInt __fastcall StrLenW(System::WideChar * S);
extern DELPHI_PACKAGE NativeInt __fastcall StrLenPas(void * S);
extern DELPHI_PACKAGE NativeInt __fastcall StrCompW(System::WideChar * Str1, System::WideChar * Str2);
extern DELPHI_PACKAGE NativeInt __fastcall StrComp(void * Str1, void * Str2);
extern DELPHI_PACKAGE bool __fastcall IdemPropNameU(const RawUTF8 P1, const RawUTF8 P2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IdemPropName(const System::ShortString &P1, const System::ShortString &P2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IdemPropName(const System::ShortString &P1, PUTF8Char P2, int P2Len)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IdemPropName(PUTF8Char P1, PUTF8Char P2, int P1Len, int P2Len)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IdemPropNameU(const RawUTF8 P1, PUTF8Char P2, int P2Len)/* overload */;
extern DELPHI_PACKAGE void __fastcall SleepHiRes(unsigned ms);
extern DELPHI_PACKAGE bool __fastcall Elapsed(__int64 &PreviousTix, int Interval);
extern DELPHI_PACKAGE int __fastcall InterlockedIncrement(int &I);
extern DELPHI_PACKAGE int __fastcall InterlockedDecrement(int &I);
extern DELPHI_PACKAGE unsigned __fastcall GetHighUTF8UCS4(PUTF8Char &U);
extern DELPHI_PACKAGE unsigned __fastcall GetNextUTF8Upper(PUTF8Char &U);
extern DELPHI_PACKAGE PUTF8Char __fastcall FindNextUTF8WordBegin(PUTF8Char U);
extern DELPHI_PACKAGE unsigned __fastcall SoundExAnsi(char * A, System::PPAnsiChar next = (System::PPAnsiChar)(0x0), TSynSoundExPronunciation Lang = (TSynSoundExPronunciation)(0x0));
extern DELPHI_PACKAGE unsigned __fastcall SoundExUTF8(PUTF8Char U, PPUTF8Char next = (PPUTF8Char)(0x0), TSynSoundExPronunciation Lang = (TSynSoundExPronunciation)(0x0));
extern DELPHI_PACKAGE NativeInt __fastcall AnsiICompW(System::WideChar * u1, System::WideChar * u2);
extern DELPHI_PACKAGE NativeInt __fastcall AnsiIComp(PWinAnsiChar Str1, PWinAnsiChar Str2);
extern DELPHI_PACKAGE NativeInt __fastcall ConvertCaseUTF8(PUTF8Char P, const TNormTableByte &Table);
extern DELPHI_PACKAGE RawUTF8 __fastcall UpperCaseU(const RawUTF8 S);
extern DELPHI_PACKAGE RawUTF8 __fastcall LowerCaseU(const RawUTF8 S);
extern DELPHI_PACKAGE NativeInt __fastcall UTF8IComp(PUTF8Char u1, PUTF8Char u2);
extern DELPHI_PACKAGE NativeInt __fastcall UTF8ILComp(PUTF8Char u1, PUTF8Char u2, unsigned L1, unsigned L2);
extern DELPHI_PACKAGE bool __fastcall SameTextU(const RawUTF8 S1, const RawUTF8 S2);
extern DELPHI_PACKAGE bool __fastcall FindAnsi(char * A, char * UpperValue);
extern DELPHI_PACKAGE bool __fastcall FindUnicode(System::WideChar * PW, System::WideChar * Upper, int UpperLen);
extern DELPHI_PACKAGE bool __fastcall FindUTF8(PUTF8Char U, char * UpperValue);
extern DELPHI_PACKAGE bool __fastcall HexDisplayToBin(char * Hex, System::PByte Bin, int BinBytes);
extern DELPHI_PACKAGE bool __fastcall HexDisplayToCardinal(char * Hex, /* out */ unsigned &aValue);
extern DELPHI_PACKAGE bool __fastcall HexToBin(char * Hex, System::PByte Bin, int BinBytes)/* overload */;
extern DELPHI_PACKAGE bool __fastcall HexToCharValid(char * Hex);
extern DELPHI_PACKAGE bool __fastcall HexToChar(char * Hex, PUTF8Char Bin);
extern DELPHI_PACKAGE unsigned __fastcall HexToWideChar(char * Hex);
extern DELPHI_PACKAGE NativeUInt __fastcall BinToBase64Length(NativeUInt len);
extern DELPHI_PACKAGE System::RawByteString __fastcall BinToBase64(const System::RawByteString s)/* overload */;
extern DELPHI_PACKAGE System::RawByteString __fastcall BinToBase64(char * Bin, int BinBytes)/* overload */;
extern DELPHI_PACKAGE void __fastcall Base64ToURI(System::RawByteString &base64);
extern DELPHI_PACKAGE void __fastcall Base64FromURI(System::RawByteString &base64);
extern DELPHI_PACKAGE System::RawByteString __fastcall BinToBase64URI(char * Bin, int BinBytes);
extern DELPHI_PACKAGE System::RawByteString __fastcall BinToBase64WithMagic(const System::RawByteString s)/* overload */;
extern DELPHI_PACKAGE System::RawByteString __fastcall BinToBase64WithMagic(void * Data, int DataLen)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsBase64(char * sp, NativeInt len)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsBase64(const System::RawByteString s)/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall Base64ToBinLength(char * sp, NativeInt len);
extern DELPHI_PACKAGE void __fastcall Base64Decode(char * sp, char * rp, NativeInt len);
extern DELPHI_PACKAGE System::RawByteString __fastcall Base64ToBin(const System::RawByteString s)/* overload */;
extern DELPHI_PACKAGE System::RawByteString __fastcall Base64ToBin(char * sp, NativeInt len)/* overload */;
extern DELPHI_PACKAGE void __fastcall Base64ToBin(char * sp, NativeInt len, System::RawByteString &result)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall DateToSQL(System::TDateTime Date)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall DateToSQL(unsigned Year, unsigned Month, unsigned Day)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall DateTimeToSQL(System::TDateTime DT);
extern DELPHI_PACKAGE RawUTF8 __fastcall TimeLogToSQL(const TTimeLog TimeStamp);
extern DELPHI_PACKAGE System::TDateTime __fastcall SQLToDateTime(const RawUTF8 ParamValueWithMagic);
extern DELPHI_PACKAGE RawUTF8 __fastcall UpperCaseUnicode(const RawUTF8 S);
extern DELPHI_PACKAGE RawUTF8 __fastcall LowerCaseUnicode(const RawUTF8 S);
extern DELPHI_PACKAGE RawUTF8 __fastcall UpperCase(const RawUTF8 S);
extern DELPHI_PACKAGE void __fastcall UpperCaseCopy(PUTF8Char Text, int Len, RawUTF8 &result)/* overload */;
extern DELPHI_PACKAGE void __fastcall UpperCaseCopy(const RawUTF8 Source, RawUTF8 &Dest)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall LowerCase(const RawUTF8 S);
extern DELPHI_PACKAGE RawUTF8 __fastcall TrimLeft(const RawUTF8 S);
extern DELPHI_PACKAGE RawUTF8 __fastcall TrimRight(const RawUTF8 S);
extern DELPHI_PACKAGE void __fastcall BinToHex(char * Bin, char * Hex, int BinBytes)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall BinToHex(const System::RawByteString Bin)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall BinToHex(char * Bin, int BinBytes)/* overload */;
extern DELPHI_PACKAGE System::RawByteString __fastcall HexToBin(const RawUTF8 Hex)/* overload */;
extern DELPHI_PACKAGE void __fastcall BinToHexDisplay(char * Bin, char * Hex, int BinBytes);
extern DELPHI_PACKAGE void __fastcall PointerToHex(void * aPointer, RawUTF8 &result)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall PointerToHex(void * aPointer)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall CardinalToHex(unsigned aCardinal);
extern DELPHI_PACKAGE RawUTF8 __fastcall Int64ToHex(__int64 aInt64);
extern DELPHI_PACKAGE void __fastcall YearToPChar(System::Word Y, PUTF8Char P);
extern DELPHI_PACKAGE bool __fastcall SameValue(const double A, const double B, double DoublePrec = 1.000000E-12);
extern DELPHI_PACKAGE bool __fastcall SameValueFloat(const System::Extended A, const System::Extended B, System::Extended DoublePrec = 1.000000E-12);
extern DELPHI_PACKAGE int __fastcall FindRawUTF8(const TRawUTF8DynArray Values, const RawUTF8 Value, bool CaseSensitive = true)/* overload */;
extern DELPHI_PACKAGE int __fastcall FindRawUTF8(const RawUTF8 *Values, const int Values_High, const RawUTF8 Value, bool CaseSensitive = true)/* overload */;
extern DELPHI_PACKAGE int __fastcall FindRawUTF8(const TRawUTF8DynArray Values, int ValuesCount, const RawUTF8 Value, bool SearchPropName)/* overload */;
extern DELPHI_PACKAGE bool __fastcall AddRawUTF8(TRawUTF8DynArray &Values, const RawUTF8 Value, bool NoDuplicates = false, bool CaseSensitive = true)/* overload */;
extern DELPHI_PACKAGE void __fastcall AddRawUTF8(TRawUTF8DynArray &Values, int &ValuesCount, const RawUTF8 Value)/* overload */;
extern DELPHI_PACKAGE bool __fastcall RawUTF8DynArrayEquals(const TRawUTF8DynArray A, const TRawUTF8DynArray B);
extern DELPHI_PACKAGE void __fastcall StringDynArrayToRawUTF8DynArray(const TStringDynArray Source, TRawUTF8DynArray &Result);
extern DELPHI_PACKAGE void __fastcall StringListToRawUTF8DynArray(System::Classes::TStringList* Source, TRawUTF8DynArray &Result);
extern DELPHI_PACKAGE bool __fastcall FindSectionFirstLine(PUTF8Char &source, char * search);
extern DELPHI_PACKAGE bool __fastcall IdemPCharW(System::WideChar * p, PUTF8Char up);
extern DELPHI_PACKAGE bool __fastcall FindSectionFirstLineW(System::WideChar * &source, PUTF8Char search);
extern DELPHI_PACKAGE RawUTF8 __fastcall FindIniNameValue(PUTF8Char P, char * UpperName);
extern DELPHI_PACKAGE bool __fastcall ExistsIniName(PUTF8Char P, char * UpperName);
extern DELPHI_PACKAGE bool __fastcall ExistsIniNameValue(PUTF8Char P, const RawUTF8 UpperName, const RawUTF8 *UpperValues, const int UpperValues_High);
extern DELPHI_PACKAGE RawUTF8 __fastcall GetSectionContent(PUTF8Char SectionFirstLine)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall GetSectionContent(const RawUTF8 Content, const RawUTF8 SectionName)/* overload */;
extern DELPHI_PACKAGE bool __fastcall DeleteSection(RawUTF8 &Content, const RawUTF8 SectionName, bool EraseSectionHeader = true)/* overload */;
extern DELPHI_PACKAGE bool __fastcall DeleteSection(PUTF8Char SectionFirstLine, RawUTF8 &Content, bool EraseSectionHeader = true)/* overload */;
extern DELPHI_PACKAGE void __fastcall ReplaceSection(PUTF8Char SectionFirstLine, RawUTF8 &Content, const RawUTF8 NewSectionContent)/* overload */;
extern DELPHI_PACKAGE void __fastcall ReplaceSection(RawUTF8 &Content, const RawUTF8 SectionName, const RawUTF8 NewSectionContent)/* overload */;
extern DELPHI_PACKAGE int __fastcall FindIniNameValueInteger(PUTF8Char P, char * UpperName);
extern DELPHI_PACKAGE RawUTF8 __fastcall FindIniEntry(const RawUTF8 Content, const RawUTF8 Section, const RawUTF8 Name);
extern DELPHI_PACKAGE RawUTF8 __fastcall FindWinAnsiIniEntry(const RawUTF8 Content, const RawUTF8 Section, const RawUTF8 Name);
extern DELPHI_PACKAGE int __fastcall FindIniEntryInteger(const RawUTF8 Content, const RawUTF8 Section, const RawUTF8 Name);
extern DELPHI_PACKAGE RawUTF8 __fastcall FindIniEntryFile(const System::Sysutils::TFileName FileName, const RawUTF8 Section, const RawUTF8 Name);
extern DELPHI_PACKAGE void __fastcall UpdateIniEntry(RawUTF8 &Content, const RawUTF8 Section, const RawUTF8 Name, const RawUTF8 Value);
extern DELPHI_PACKAGE void __fastcall UpdateIniEntryFile(const System::Sysutils::TFileName FileName, const RawUTF8 Section, const RawUTF8 Name, const RawUTF8 Value);
extern DELPHI_PACKAGE System::RawByteString __fastcall StringFromFile(const System::Sysutils::TFileName FileName);
extern DELPHI_PACKAGE bool __fastcall FileFromString(const System::RawByteString Content, const System::Sysutils::TFileName FileName, bool FlushOnDisk = false);
extern DELPHI_PACKAGE System::UnicodeString __fastcall AnyTextFileToSynUnicode(const System::Sysutils::TFileName FileName, bool ForceUTF8 = false);
extern DELPHI_PACKAGE RawUTF8 __fastcall AnyTextFileToRawUTF8(const System::Sysutils::TFileName FileName, bool AssumeUTF8IfNoBOM = false);
extern DELPHI_PACKAGE System::UnicodeString __fastcall AnyTextFileToString(const System::Sysutils::TFileName FileName, bool ForceUTF8 = false);
extern DELPHI_PACKAGE System::RawByteString __fastcall StreamToRawByteString(System::Classes::TStream* aStream);
extern DELPHI_PACKAGE System::Classes::TStream* __fastcall RawByteStringToStream(const System::RawByteString aString);
extern DELPHI_PACKAGE RawUTF8 __fastcall ReadStringFromStream(System::Classes::TStream* S, int MaxAllowedSize = 0xff);
extern DELPHI_PACKAGE void __fastcall WriteStringToStream(System::Classes::TStream* S, const RawUTF8 Text);
extern DELPHI_PACKAGE System::Sysutils::TFileName __fastcall GetFileNameWithoutExt(const System::Sysutils::TFileName FileName);
extern DELPHI_PACKAGE int __fastcall GetFileNameExtIndex(const System::Sysutils::TFileName FileName, const System::Sysutils::TFileName CSVExt);
extern DELPHI_PACKAGE __int64 __fastcall FileSize(const System::Sysutils::TFileName FileName);
extern DELPHI_PACKAGE System::TDateTime __fastcall FileAgeToDateTime(const System::Sysutils::TFileName FileName);
extern DELPHI_PACKAGE bool __fastcall CopyFile(const System::Sysutils::TFileName Source, const System::Sysutils::TFileName Target, bool FailIfExists);
extern DELPHI_PACKAGE bool __fastcall DirectoryDelete(const System::Sysutils::TFileName Directory, const System::Sysutils::TFileName Mask = L"*.*", bool DeleteOnlyFilesNotDirectory = false);
extern DELPHI_PACKAGE System::Sysutils::TFileName __fastcall EnsureDirectoryExists(const System::Sysutils::TFileName Directory, bool RaiseExceptionOnCreationFailure = false);
extern DELPHI_PACKAGE bool __fastcall FileSetDateFrom(const System::Sysutils::TFileName Dest, int SourceHandle);
extern DELPHI_PACKAGE RawUTF8 __fastcall FindObjectEntry(const RawUTF8 Content, const RawUTF8 Name);
extern DELPHI_PACKAGE RawUTF8 __fastcall FindObjectEntryWithoutExt(const RawUTF8 Content, const RawUTF8 Name);
extern DELPHI_PACKAGE bool __fastcall IntegerScanExists(PCardinalArray P, NativeInt Count, unsigned Value);
extern DELPHI_PACKAGE bool __fastcall Int64ScanExists(PInt64Array P, NativeInt Count, const __int64 Value);
extern DELPHI_PACKAGE System::PCardinal __fastcall IntegerScan(PCardinalArray P, NativeInt Count, unsigned Value);
extern DELPHI_PACKAGE System::PInt64 __fastcall Int64Scan(PInt64Array P, NativeInt Count, const __int64 Value);
extern DELPHI_PACKAGE bool __fastcall AddInteger(TIntegerDynArray &Values, int Value, bool NoDuplicates = false)/* overload */;
extern DELPHI_PACKAGE bool __fastcall AddInteger(TIntegerDynArray &Values, int &ValuesCount, int Value, bool NoDuplicates = false)/* overload */;
extern DELPHI_PACKAGE void __fastcall AddInt64(TInt64DynArray &Values, int &ValuesCount, __int64 Value);
extern DELPHI_PACKAGE void __fastcall DeleteInteger(TIntegerDynArray &Values, NativeInt Index)/* overload */;
extern DELPHI_PACKAGE void __fastcall DeleteInteger(TIntegerDynArray &Values, int &ValuesCount, NativeInt Index)/* overload */;
extern DELPHI_PACKAGE int __fastcall MaxInteger(const TIntegerDynArray Values, int ValuesCount, int MaxStart = 0xffffffff);
extern DELPHI_PACKAGE void __fastcall Reverse(const TIntegerDynArray Values, int ValuesCount, PIntegerArray Reversed);
extern DELPHI_PACKAGE void __fastcall FillIncreasing(PIntegerArray Values, int StartValue, int Count);
extern DELPHI_PACKAGE void __fastcall Int64ToUInt32(PInt64Array Values64, PCardinalArray Values32, int Count);
extern DELPHI_PACKAGE void __fastcall CSVToIntegerDynArray(PUTF8Char CSV, TIntegerDynArray &Result);
extern DELPHI_PACKAGE void __fastcall CSVToInt64DynArray(PUTF8Char CSV, TInt64DynArray &Result);
extern DELPHI_PACKAGE RawUTF8 __fastcall IntegerDynArrayToCSV(const int *Values, const int Values_High, int ValuesCount, const RawUTF8 Prefix = RawUTF8(), const RawUTF8 Suffix = RawUTF8());
extern DELPHI_PACKAGE RawUTF8 __fastcall Int64DynArrayToCSV(const __int64 *Values, const int Values_High, int ValuesCount, const RawUTF8 Prefix = RawUTF8(), const RawUTF8 Suffix = RawUTF8());
extern DELPHI_PACKAGE NativeInt __fastcall IntegerScanIndex(PCardinalArray P, NativeInt Count, unsigned Value);
extern DELPHI_PACKAGE NativeInt __fastcall PtrUIntScanIndex(PPtrUIntArray P, NativeInt Count, NativeUInt Value);
extern DELPHI_PACKAGE int __fastcall WordScanIndex(PWordArray P, NativeInt Count, System::Word Value);
extern DELPHI_PACKAGE void __fastcall QuickSortInteger(PIntegerArray ID, NativeInt L, NativeInt R)/* overload */;
extern DELPHI_PACKAGE void __fastcall QuickSortInteger(TIntegerDynArray &ID)/* overload */;
extern DELPHI_PACKAGE void __fastcall QuickSortInteger(PIntegerArray ID, PIntegerArray CoValues, NativeInt L, NativeInt R)/* overload */;
extern DELPHI_PACKAGE void __fastcall QuickSortInt64(PInt64Array ID, NativeInt L, NativeInt R)/* overload */;
extern DELPHI_PACKAGE void __fastcall QuickSortInt64(PInt64Array ID, PInt64Array CoValues, NativeInt L, NativeInt R)/* overload */;
extern DELPHI_PACKAGE void __fastcall QuickSortPtrInt(PPtrIntArray P, NativeInt L, NativeInt R);
extern DELPHI_PACKAGE NativeInt __fastcall FastFindPtrIntSorted(PPtrIntArray P, NativeInt R, NativeInt Value)/* overload */;
extern DELPHI_PACKAGE void __fastcall QuickSortPointer(PPointerArray P, NativeInt L, NativeInt R);
extern DELPHI_PACKAGE NativeInt __fastcall FastFindPointerSorted(PPointerArray P, NativeInt R, void * Value)/* overload */;
extern DELPHI_PACKAGE void __fastcall CopyAndSortInteger(PIntegerArray Values, int ValuesCount, TIntegerDynArray &Dest);
extern DELPHI_PACKAGE NativeInt __fastcall FastFindIntegerSorted(PIntegerArray P, NativeInt R, int Value)/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall FastFindInt64Sorted(PInt64Array P, NativeInt R, const __int64 Value)/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall FastFindIntegerSorted(const TIntegerDynArray Values, int Value)/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall FastLocateIntegerSorted(PIntegerArray P, NativeInt R, int Value);
extern DELPHI_PACKAGE NativeInt __fastcall AddSortedInteger(TIntegerDynArray &Values, int &ValuesCount, int Value, PIntegerDynArray CoValues = (PIntegerDynArray)(0x0))/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall AddSortedInteger(TIntegerDynArray &Values, int Value, PIntegerDynArray CoValues = (PIntegerDynArray)(0x0))/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall InsertInteger(TIntegerDynArray &Values, int &ValuesCount, int Value, NativeInt Index, PIntegerDynArray CoValues = (PIntegerDynArray)(0x0));
extern DELPHI_PACKAGE NativeInt __fastcall GetInteger(PUTF8Char P)/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall GetInteger(PUTF8Char P, int &err)/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall GetIntegerDef(PUTF8Char P, NativeInt Default);
extern DELPHI_PACKAGE NativeInt __fastcall UTF8ToInteger(const RawUTF8 value, NativeInt Default = (NativeInt)(0x0))/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall UTF8ToInteger(const RawUTF8 value, NativeInt Min, NativeInt Max, NativeInt Default = (NativeInt)(0x0))/* overload */;
extern DELPHI_PACKAGE NativeUInt __fastcall GetCardinalDef(PUTF8Char P, NativeUInt Default);
extern DELPHI_PACKAGE NativeUInt __fastcall GetCardinal(PUTF8Char P);
extern DELPHI_PACKAGE NativeUInt __fastcall GetCardinalW(System::WideChar * P);
extern DELPHI_PACKAGE void __fastcall SetInt64(PUTF8Char P, __int64 &result);
extern DELPHI_PACKAGE __int64 __fastcall GetInt64(PUTF8Char P)/* overload */;
extern DELPHI_PACKAGE __int64 __fastcall GetInt64(PUTF8Char P, int &err)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall GetExtended(PUTF8Char P)/* overload */;
extern DELPHI_PACKAGE System::Extended __fastcall GetExtended(PUTF8Char P, /* out */ int &err)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall GetUTF8Char(PUTF8Char P);
extern DELPHI_PACKAGE unsigned __fastcall NextUTF8UCS4(PUTF8Char &P);
extern DELPHI_PACKAGE bool __fastcall ContainsUTF8(PUTF8Char p, PUTF8Char up);
extern DELPHI_PACKAGE bool __fastcall IdemFileExt(PUTF8Char p, char * extup);
extern DELPHI_PACKAGE bool __fastcall IdemPCharWithoutWhiteSpace(PUTF8Char p, char * up);
extern DELPHI_PACKAGE bool __fastcall IdemPChar(PUTF8Char p, char * up);
extern DELPHI_PACKAGE int __fastcall IdemPCharArray(PUTF8Char p, char * const *upArray, const int upArray_High);
extern DELPHI_PACKAGE bool __fastcall IdemPCharU(PUTF8Char p, PUTF8Char up);
extern DELPHI_PACKAGE char * __fastcall UpperCopy255(char * dest, const RawUTF8 source);
extern DELPHI_PACKAGE PWinAnsiChar __fastcall UpperCopyWin255(PWinAnsiChar dest, const RawUTF8 source);
extern DELPHI_PACKAGE PUTF8Char __fastcall UTF8UpperCopy(PUTF8Char Dest, PUTF8Char Source, unsigned SourceChars);
extern DELPHI_PACKAGE PUTF8Char __fastcall UTF8UpperCopy255(char * dest, const RawUTF8 source);
extern DELPHI_PACKAGE char * __fastcall UpperCopy255W(char * dest, const System::UnicodeString source)/* overload */;
extern DELPHI_PACKAGE char * __fastcall UpperCopy255W(char * dest, System::WideChar * source, int L)/* overload */;
extern DELPHI_PACKAGE char * __fastcall UpperCopy(char * dest, const RawUTF8 source);
extern DELPHI_PACKAGE char * __fastcall UpperCopyShort(char * dest, const System::ShortString &source);
extern DELPHI_PACKAGE RawUTF8 __fastcall GetNextLine(PUTF8Char source, /* out */ PUTF8Char &next);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetNextLineW(System::WideChar * source, /* out */ System::WideChar * &next);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FindIniNameValueW(System::WideChar * P, PUTF8Char UpperName);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FindIniEntryW(const System::UnicodeString Content, const RawUTF8 Section, const RawUTF8 Name);
extern DELPHI_PACKAGE bool __fastcall IdemPCharAndGetNextLine(PUTF8Char &source, char * searchUp);
extern DELPHI_PACKAGE bool __fastcall IdemPCharAndGetNextItem(PUTF8Char &source, const RawUTF8 searchUp, RawUTF8 &Item, char Sep = '\x0d');
extern DELPHI_PACKAGE PUTF8Char __fastcall GetNextLineBegin(PUTF8Char source, /* out */ PUTF8Char &next);
extern DELPHI_PACKAGE NativeUInt __fastcall GetLineSize(PUTF8Char P, PUTF8Char PEnd);
extern DELPHI_PACKAGE RawUTF8 __fastcall GetNextItem(PUTF8Char &P, char Sep = '\x2c');
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetNextItemString(System::WideChar * &P, System::WideChar Sep = (System::WideChar)(0x2c));
extern DELPHI_PACKAGE RawUnicode __fastcall GetNextStringLineToRawUnicode(System::WideChar * &P);
extern DELPHI_PACKAGE void __fastcall AppendCSVValues(const System::UnicodeString CSV, const System::UnicodeString *Values, const int Values_High, System::UnicodeString &Result, const System::UnicodeString AppendBefore = L"\r\n");
extern DELPHI_PACKAGE void __fastcall GetNextItemShortString(PUTF8Char &P, /* out */ System::ShortString &Dest, char Sep = '\x2c');
extern DELPHI_PACKAGE NativeUInt __fastcall GetNextItemCardinal(PUTF8Char &P, char Sep = '\x2c');
extern DELPHI_PACKAGE NativeUInt __fastcall GetNextItemCardinalStrict(PUTF8Char &P);
extern DELPHI_PACKAGE RawUTF8 __fastcall CSVOfValue(const RawUTF8 Value, unsigned Count, const RawUTF8 Sep = ",");
extern DELPHI_PACKAGE void __fastcall SetBitCSV(void *Bits, int BitsCount, PUTF8Char &P);
extern DELPHI_PACKAGE RawUTF8 __fastcall GetBitCSV(const void *Bits, int BitsCount);
extern DELPHI_PACKAGE NativeUInt __fastcall GetNextItemCardinalW(System::WideChar * &P, System::WideChar Sep = (System::WideChar)(0x2c));
extern DELPHI_PACKAGE NativeInt __fastcall GetNextItemInteger(PUTF8Char &P, char Sep = '\x2c');
extern DELPHI_PACKAGE __int64 __fastcall GetNextItemInt64(PUTF8Char &P, char Sep = '\x2c');
extern DELPHI_PACKAGE double __fastcall GetNextItemDouble(PUTF8Char &P, char Sep = '\x2c');
extern DELPHI_PACKAGE RawUTF8 __fastcall GetCSVItem(PUTF8Char P, NativeUInt Index, char Sep = '\x2c');
extern DELPHI_PACKAGE RawUTF8 __fastcall GetLastCSVItem(const RawUTF8 CSV, char Sep = '\x2c');
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetCSVItemString(System::WideChar * P, NativeUInt Index, System::WideChar Sep = (System::WideChar)(0x2c));
extern DELPHI_PACKAGE int __fastcall FindCSVIndex(PUTF8Char CSV, const RawUTF8 Value, char Sep = '\x2c', bool CaseSensitive = true, bool TrimValue = false);
extern DELPHI_PACKAGE void __fastcall CSVToRawUTF8DynArray(PUTF8Char CSV, TRawUTF8DynArray &Result, char Sep = '\x2c')/* overload */;
extern DELPHI_PACKAGE void __fastcall CSVToRawUTF8DynArray(const RawUTF8 CSV, const RawUTF8 Sep, const RawUTF8 SepEnd, TRawUTF8DynArray &Result)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall AddPrefixToCSV(PUTF8Char CSV, const RawUTF8 Prefix, char Sep = '\x2c');
extern DELPHI_PACKAGE RawUTF8 __fastcall RawUTF8ArrayToCSV(const RawUTF8 *Values, const int Values_High, const RawUTF8 Sep = ",");
extern DELPHI_PACKAGE RawUTF8 __fastcall RawUTF8ArrayToQuotedCSV(const RawUTF8 *Values, const int Values_High, const RawUTF8 Sep = ",", char Quote = '\x27');
extern DELPHI_PACKAGE TRawUTF8DynArray __fastcall TRawUTF8DynArrayFrom(const RawUTF8 *Values, const int Values_High);
extern DELPHI_PACKAGE RawUTF8 __fastcall ObjectToJSON(System::TObject* Value, TTextWriterWriteObjectOptions Options = (TTextWriterWriteObjectOptions() << TTextWriterWriteObjectOption::woDontStoreDefault ));
extern DELPHI_PACKAGE RawUTF8 __fastcall UrlEncode(const RawUTF8 svar)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall UrlEncode(PUTF8Char Text)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall UrlEncode(const System::TVarRec *NameValuePairs, const int NameValuePairs_High)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall UrlEncodeJsonObject(const RawUTF8 URIName, PUTF8Char ParametersJSON, const RawUTF8 *PropNamesToIgnore, const int PropNamesToIgnore_High);
extern DELPHI_PACKAGE RawUTF8 __fastcall UrlDecode(const RawUTF8 s, NativeInt i = (NativeInt)(0x1), NativeInt len = (NativeInt)(0xffffffff))/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall UrlDecode(PUTF8Char U)/* overload */;
extern DELPHI_PACKAGE PUTF8Char __fastcall UrlDecodeNextValue(PUTF8Char U, /* out */ RawUTF8 &Value);
extern DELPHI_PACKAGE PUTF8Char __fastcall UrlDecodeNextName(PUTF8Char U, /* out */ RawUTF8 &Name);
extern DELPHI_PACKAGE PUTF8Char __fastcall UrlDecodeNextNameValue(PUTF8Char U, RawUTF8 &Name, RawUTF8 &Value);
extern DELPHI_PACKAGE bool __fastcall UrlDecodeValue(PUTF8Char U, char * Upper, RawUTF8 &Value, PPUTF8Char Next = (PPUTF8Char)(0x0));
extern DELPHI_PACKAGE bool __fastcall UrlDecodeInteger(PUTF8Char U, char * Upper, int &Value, PPUTF8Char Next = (PPUTF8Char)(0x0));
extern DELPHI_PACKAGE bool __fastcall UrlDecodeCardinal(PUTF8Char U, char * Upper, unsigned &Value, PPUTF8Char Next = (PPUTF8Char)(0x0));
extern DELPHI_PACKAGE bool __fastcall UrlDecodeInt64(PUTF8Char U, char * Upper, __int64 &Value, PPUTF8Char Next = (PPUTF8Char)(0x0));
extern DELPHI_PACKAGE bool __fastcall UrlDecodeExtended(PUTF8Char U, char * Upper, System::Extended &Value, PPUTF8Char Next = (PPUTF8Char)(0x0));
extern DELPHI_PACKAGE bool __fastcall UrlDecodeDouble(PUTF8Char U, char * Upper, double &Value, PPUTF8Char Next = (PPUTF8Char)(0x0));
extern DELPHI_PACKAGE bool __fastcall UrlDecodeNeedParameters(PUTF8Char U, PUTF8Char CSVNames);
extern DELPHI_PACKAGE RawUTF8 __fastcall CSVEncode(const System::TVarRec *NameValuePairs, const int NameValuePairs_High, const RawUTF8 KeySeparator = "=", const RawUTF8 ValueSeparator = "\r\n");
extern DELPHI_PACKAGE bool __fastcall IsZero(void * P, int Length)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsZero(const TSQLFieldBits &Fields)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsEqual(const TSQLFieldBits &A, const TSQLFieldBits &B);
extern DELPHI_PACKAGE void __fastcall FillZero(TSQLFieldBits &Fields)/* overload */;
extern DELPHI_PACKAGE void __fastcall FieldBitsToIndex(const TSQLFieldBits &Fields, TSQLFieldIndexDynArray &Index, int MaxLength = 0x40, int IndexStart = 0x0)/* overload */;
extern DELPHI_PACKAGE TSQLFieldIndexDynArray __fastcall FieldBitsToIndex(const TSQLFieldBits &Fields, int MaxLength = 0x40)/* overload */;
extern DELPHI_PACKAGE int __fastcall AddFieldIndex(TSQLFieldIndexDynArray &Indexes, int Field);
extern DELPHI_PACKAGE int __fastcall SearchFieldIndex(TSQLFieldIndexDynArray &Indexes, int Field);
extern DELPHI_PACKAGE void __fastcall FieldIndexToBits(const TSQLFieldIndexDynArray Index, TSQLFieldBits &Fields)/* overload */;
extern DELPHI_PACKAGE TSQLFieldBits __fastcall FieldIndexToBits(const TSQLFieldIndexDynArray Index)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall Hash32(const System::RawByteString Text)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall Hash32(void * Data, int Len)/* overload */;
extern DELPHI_PACKAGE bool __fastcall GetBit(const void *Bits, NativeInt aIndex);
extern DELPHI_PACKAGE bool __fastcall GetAllBits(unsigned Bits, int BitCount);
extern DELPHI_PACKAGE void __fastcall SetBit(void *Bits, NativeInt aIndex);
extern DELPHI_PACKAGE void __fastcall UnSetBit(void *Bits, NativeInt aIndex);
extern DELPHI_PACKAGE bool __fastcall GetBit64(const void *Bits, NativeInt aIndex);
extern DELPHI_PACKAGE void __fastcall SetBit64(__int64 &Bits, NativeInt aIndex);
extern DELPHI_PACKAGE void __fastcall UnSetBit64(__int64 &Bits, NativeInt aIndex);
extern DELPHI_PACKAGE int __fastcall GetBitsCount(const void *Bits, NativeInt Count);
extern DELPHI_PACKAGE unsigned __fastcall fnv32(unsigned crc, char * buf, unsigned len);
extern DELPHI_PACKAGE unsigned __fastcall kr32(unsigned crc, char * buf, unsigned len);
extern DELPHI_PACKAGE void __fastcall SymmetricEncrypt(unsigned key, System::RawByteString &data);
extern DELPHI_PACKAGE unsigned __fastcall crc32cfast(unsigned crc, char * buf, unsigned len);
extern DELPHI_PACKAGE unsigned __fastcall crc32csse42(unsigned crc, char * buf, unsigned len);
extern DELPHI_PACKAGE RawUTF8 __fastcall crc32cUTF8ToHex(const RawUTF8 str);
extern DELPHI_PACKAGE System::TDateTime __fastcall UnixTimeToDateTime(const __int64 UnixTime);
extern DELPHI_PACKAGE __int64 __fastcall DateTimeToUnixTime(const System::TDateTime AValue);
extern DELPHI_PACKAGE System::TDateTime __fastcall UnixMSTimeToDateTime(const __int64 UnixTime);
extern DELPHI_PACKAGE __int64 __fastcall DateTimeToUnixMSTime(const System::TDateTime AValue);
extern DELPHI_PACKAGE System::TDateTime __fastcall NowUTC(void);
extern DELPHI_PACKAGE System::TDateTime __fastcall Iso8601ToDateTimePUTF8Char(PUTF8Char P, int L = 0x0);
extern DELPHI_PACKAGE bool __fastcall Iso8601CheckAndDecode(PUTF8Char P, int L, System::TDateTime &Value);
extern DELPHI_PACKAGE bool __fastcall Char2ToByte(PUTF8Char P, /* out */ unsigned &Value);
extern DELPHI_PACKAGE bool __fastcall Char3ToWord(PUTF8Char P, /* out */ unsigned &Value);
extern DELPHI_PACKAGE bool __fastcall Char4ToWord(PUTF8Char P, /* out */ unsigned &Value);
extern DELPHI_PACKAGE void __fastcall Iso8601ToDateTimePUTF8CharVar(PUTF8Char P, int L, System::TDateTime &result);
extern DELPHI_PACKAGE System::TDateTime __fastcall Iso8601ToTimePUTF8Char(PUTF8Char P, int L = 0x0)/* overload */;
extern DELPHI_PACKAGE void __fastcall Iso8601ToTimePUTF8CharVar(PUTF8Char P, int L, System::TDateTime &result);
extern DELPHI_PACKAGE bool __fastcall Iso8601ToTimePUTF8Char(PUTF8Char P, int L, unsigned &H, unsigned &M, unsigned &S)/* overload */;
extern DELPHI_PACKAGE System::TDateTime __fastcall IntervalTextToDateTime(PUTF8Char Text);
extern DELPHI_PACKAGE void __fastcall IntervalTextToDateTimeVar(PUTF8Char Text, System::TDateTime &result);
extern DELPHI_PACKAGE System::TDateTime __fastcall Iso8601ToDateTime(const System::RawByteString S)/* overload */;
extern DELPHI_PACKAGE System::TDateTime __fastcall TimeLogToDateTime(const TTimeLog TimeStamp)/* overload */;
extern DELPHI_PACKAGE void __fastcall DateToIso8601PChar(PUTF8Char P, bool Expanded, unsigned Y, unsigned M, unsigned D)/* overload */;
extern DELPHI_PACKAGE void __fastcall TimeToIso8601PChar(PUTF8Char P, bool Expanded, unsigned H, unsigned M, unsigned S, char FirstChar = '\x54')/* overload */;
extern DELPHI_PACKAGE void __fastcall DateToIso8601PChar(System::TDateTime Date, PUTF8Char P, bool Expanded)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall DateToIso8601Text(System::TDateTime Date);
extern DELPHI_PACKAGE void __fastcall TimeToIso8601PChar(System::TDateTime Time, PUTF8Char P, bool Expanded, char FirstChar = '\x54')/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall DateTimeToIso8601(System::TDateTime D, bool Expanded, char FirstChar = '\x54');
extern DELPHI_PACKAGE RawUTF8 __fastcall DateToIso8601(System::TDateTime Date, bool Expanded)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall DateToIso8601(unsigned Y, unsigned M, unsigned D, bool Expanded)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall TimeToIso8601(System::TDateTime Time, bool Expanded, char FirstChar = '\x54');
extern DELPHI_PACKAGE RawUTF8 __fastcall DateTimeToIso8601Text(System::TDateTime DT, char FirstChar = '\x54');
extern DELPHI_PACKAGE void __fastcall DateTimeToIso8601TextVar(System::TDateTime DT, char FirstChar, RawUTF8 &result);
extern DELPHI_PACKAGE void __fastcall DateTimeToIso8601StringVar(System::TDateTime DT, char FirstChar, System::UnicodeString &result);
extern DELPHI_PACKAGE void __fastcall DateTimeToIso8601ExpandedPChar(const System::TDateTime Value, PUTF8Char Dest, char FirstChar = '\x54');
extern DELPHI_PACKAGE TTimeLog __fastcall Iso8601ToTimeLogPUTF8Char(PUTF8Char P, int L, System::PBoolean ContainsNoTime = (System::PBoolean)(0x0));
extern DELPHI_PACKAGE bool __fastcall IsIso8601(PUTF8Char P, int L);
extern DELPHI_PACKAGE TTimeLog __fastcall Iso8601ToTimeLog(const System::RawByteString S);
extern DELPHI_PACKAGE bool __fastcall TryEncodeDate(System::Word Year, System::Word Month, System::Word Day, /* out */ System::TDateTime &Date);
extern DELPHI_PACKAGE TTimeLog __fastcall TimeLogNow(void);
extern DELPHI_PACKAGE TTimeLog __fastcall TimeLogNowUTC(void);
extern DELPHI_PACKAGE RawUTF8 __fastcall NowToString(bool Expanded = true, char FirstTimeChar = '\x20');
extern DELPHI_PACKAGE RawUTF8 __fastcall TimeToString(void);
extern DELPHI_PACKAGE TTimeLog __fastcall TimeLogFromFile(const System::Sysutils::TFileName FileName);
extern DELPHI_PACKAGE TTimeLog __fastcall TimeLogFromDateTime(System::TDateTime DateTime);
extern DELPHI_PACKAGE void __fastcall AppendToTextFile(RawUTF8 aLine, const System::Sysutils::TFileName aFileName);
extern DELPHI_PACKAGE void __fastcall LogToTextFile(RawUTF8 Msg);
extern DELPHI_PACKAGE System::PShortString __fastcall GetEnumName(void * aTypeInfo, int aIndex);
extern DELPHI_PACKAGE int __fastcall GetEnumNameValue(void * aTypeInfo, PUTF8Char aValue, int aValueLen);
extern DELPHI_PACKAGE bool __fastcall IsEqualGUID(const GUID &guid1, const GUID &guid2);
extern DELPHI_PACKAGE PUTF8Char __fastcall GUIDToText(PUTF8Char P, PByteArray guid);
extern DELPHI_PACKAGE PUTF8Char __fastcall TextToGUID(PUTF8Char P, PByteArray guid);
extern DELPHI_PACKAGE RawUTF8 __fastcall GUIDToRawUTF8(const GUID &guid);
extern DELPHI_PACKAGE TGUIDShortString __fastcall GUIDToShort(const GUID &guid);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GUIDToString(const GUID &guid);
extern DELPHI_PACKAGE GUID __fastcall RawUTF8ToGUID(const System::RawByteString text);
extern DELPHI_PACKAGE GUID __fastcall StringToGUID(const System::UnicodeString text);
extern DELPHI_PACKAGE char * __fastcall StrCurr64(char * P, const __int64 Value);
extern DELPHI_PACKAGE void __fastcall Curr64ToStr(const __int64 Value, RawUTF8 &result)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall Curr64ToStr(const __int64 Value)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall CurrencyToStr(System::Currency Value);
extern DELPHI_PACKAGE NativeInt __fastcall Curr64ToPChar(const __int64 Value, PUTF8Char Dest);
extern DELPHI_PACKAGE __int64 __fastcall StrToCurr64(PUTF8Char P, System::PBoolean NoDecimal = (System::PBoolean)(0x0));
extern DELPHI_PACKAGE System::Currency __fastcall StrToCurrency(PUTF8Char P);
extern DELPHI_PACKAGE System::Currency __fastcall TruncTo2Digits(System::Currency Value);
extern DELPHI_PACKAGE System::Currency __fastcall SimpleRoundTo2Digits(System::Currency Value);
extern DELPHI_PACKAGE PUTF8Char __fastcall TrimLeftLowerCase(const RawUTF8 V);
extern DELPHI_PACKAGE System::ShortString __fastcall TrimLeftLowerCaseToShort(System::PShortString V);
extern DELPHI_PACKAGE RawUTF8 __fastcall TrimLeftLowerCaseShort(System::PShortString V);
extern DELPHI_PACKAGE RawUTF8 __fastcall UnCamelCase(const RawUTF8 S)/* overload */;
extern DELPHI_PACKAGE int __fastcall UnCamelCase(PUTF8Char D, PUTF8Char P)/* overload */;
extern DELPHI_PACKAGE void __fastcall GetCaptionFromPCharLen(PUTF8Char P, /* out */ System::UnicodeString &result);
extern DELPHI_PACKAGE RawUTF8 __fastcall GetDisplayNameFromClass(System::TClass C);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetCaptionFromClass(System::TClass C);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetCaptionFromEnum(void * aTypeInfo, int aIndex);
extern DELPHI_PACKAGE unsigned __fastcall CharSetToCodePage(int CharSet);
extern DELPHI_PACKAGE int __fastcall CodePageToCharSet(unsigned CodePage);
extern DELPHI_PACKAGE RawUTF8 __fastcall GetMimeContentType(void * Content, int Len, const System::Sysutils::TFileName FileName = System::Sysutils::TFileName());
extern DELPHI_PACKAGE RawUTF8 __fastcall GetMimeContentTypeHeader(const System::RawByteString Content, const System::Sysutils::TFileName FileName = System::Sysutils::TFileName());
extern DELPHI_PACKAGE bool __fastcall IsContentCompressed(void * Content, int Len);
extern DELPHI_PACKAGE bool __fastcall IsHTMLContentTypeTextual(PUTF8Char Headers);
extern DELPHI_PACKAGE bool __fastcall MultiPartFormDataDecode(const RawUTF8 MimeType, const RawUTF8 Body, TMultiPartDynArray &MultiPart);
extern DELPHI_PACKAGE NativeInt __fastcall FastLocatePUTF8CharSorted(PPUtf8CharArray P, NativeInt R, PUTF8Char Value)/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall FastLocatePUTF8CharSorted(PPUtf8CharArray P, NativeInt R, PUTF8Char Value, TUTF8Compare Compare)/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall FastFindPUTF8CharSorted(PPUtf8CharArray P, NativeInt R, PUTF8Char Value, TUTF8Compare Compare)/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall FastFindPUTF8CharSorted(PPUtf8CharArray P, NativeInt R, PUTF8Char Value)/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall FastFindIndexedPUTF8Char(PPUtf8CharArray P, NativeInt R, TCardinalDynArray &SortedIndexes, PUTF8Char Value, TUTF8Compare ItemComp);
extern DELPHI_PACKAGE NativeInt __fastcall AddSortedRawUTF8(TRawUTF8DynArray &Values, int &ValuesCount, const RawUTF8 Value, PIntegerDynArray CoValues = (PIntegerDynArray)(0x0), NativeInt ForcedIndex = (NativeInt)(0xffffffff), TUTF8Compare Compare = 0x0);
extern DELPHI_PACKAGE void __fastcall QuickSortRawUTF8(TRawUTF8DynArray &Values, int ValuesCount, PIntegerDynArray CoValues = (PIntegerDynArray)(0x0), TUTF8Compare Compare = 0x0);
extern DELPHI_PACKAGE bool __fastcall DeleteRawUTF8(TRawUTF8DynArray &Values, int &ValuesCount, int Index, PIntegerDynArray CoValues = (PIntegerDynArray)(0x0));
extern DELPHI_PACKAGE HWND __fastcall CreateInternalWindow(const System::UnicodeString aWindowName, System::TObject* aObject);
extern DELPHI_PACKAGE bool __fastcall ReleaseInternalWindow(System::UnicodeString &aWindowName, HWND &aWindow);
extern DELPHI_PACKAGE void __fastcall SetExecutableVersion(int aMajor, int aMinor, int aRelease);
extern DELPHI_PACKAGE void __fastcall PatchCode(void * Old, void * New, int Size, void * Backup = (void *)(0x0), bool LeaveUnprotected = false);
extern DELPHI_PACKAGE void __fastcall PatchCodePtrUInt(PPtrUInt Code, NativeUInt Value, bool LeaveUnprotected = false);
extern DELPHI_PACKAGE void __fastcall RedirectCode(void * Func, void * RedirectFunc, PPatchCode Backup = (PPatchCode)(0x0));
extern DELPHI_PACKAGE void __fastcall RedirectCodeRestore(void * Func, const TPatchCode &Backup);
extern DELPHI_PACKAGE System::PByte __fastcall ToVarInt32(NativeInt Value, System::PByte Dest);
extern DELPHI_PACKAGE int __fastcall FromVarInt32(System::PByte &Source);
extern DELPHI_PACKAGE NativeUInt __fastcall ToVarUInt32Length(NativeUInt Value);
extern DELPHI_PACKAGE NativeUInt __fastcall ToVarUInt32LengthWithData(NativeUInt Value);
extern DELPHI_PACKAGE System::PByte __fastcall ToVarUInt32(NativeUInt Value, System::PByte Dest);
extern DELPHI_PACKAGE unsigned __fastcall FromVarUInt32(System::PByte &Source);
extern DELPHI_PACKAGE unsigned __fastcall FromVarUInt32High(System::PByte &Source);
extern DELPHI_PACKAGE unsigned __fastcall FromVarUInt32Up128(System::PByte &Source);
extern DELPHI_PACKAGE System::PByte __fastcall ToVarUInt64(unsigned __int64 Value, System::PByte Dest);
extern DELPHI_PACKAGE unsigned __int64 __fastcall FromVarUInt64(System::PByte &Source);
extern DELPHI_PACKAGE System::PByte __fastcall ToVarInt64(__int64 Value, System::PByte Dest);
extern DELPHI_PACKAGE __int64 __fastcall FromVarInt64(System::PByte &Source);
extern DELPHI_PACKAGE __int64 __fastcall FromVarInt64Value(System::PByte Source);
extern DELPHI_PACKAGE void * __fastcall GotoNextVarInt(System::PByte Source);
extern DELPHI_PACKAGE System::PByte __fastcall ToVarString(const RawUTF8 Value, System::PByte Dest);
extern DELPHI_PACKAGE void * __fastcall GotoNextVarString(System::PByte Source);
extern DELPHI_PACKAGE RawUTF8 __fastcall FromVarString(System::PByte &Source);
extern DELPHI_PACKAGE TValueResult __fastcall FromVarBlob(System::PByte Data);
extern DELPHI_PACKAGE bool __fastcall RecordEquals(const void *RecA, const void *RecB, void * TypeInfo);
extern DELPHI_PACKAGE int __fastcall RecordSaveLength(const void *Rec, void * TypeInfo);
extern DELPHI_PACKAGE char * __fastcall RecordSave(const void *Rec, char * Dest, void * TypeInfo)/* overload */;
extern DELPHI_PACKAGE System::RawByteString __fastcall RecordSave(const void *Rec, void * TypeInfo)/* overload */;
extern DELPHI_PACKAGE System::RawByteString __fastcall RecordSaveBase64(const void *Rec, void * TypeInfo, bool UriCompatible = false);
extern DELPHI_PACKAGE bool __fastcall RecordLoadBase64(char * Source, int Len, void *Rec, void * TypeInfo, bool UriCompatible = false);
extern DELPHI_PACKAGE char * __fastcall RecordLoad(void *Rec, char * Source, void * TypeInfo);
extern DELPHI_PACKAGE void __fastcall RecordCopy(void *Dest, const void *Source, void * TypeInfo);
extern DELPHI_PACKAGE void __fastcall RecordClear(void *Dest, void * TypeInfo);
extern DELPHI_PACKAGE RawUTF8 __fastcall RecordSaveJSON(const void *Rec, void * TypeInfo);
extern DELPHI_PACKAGE PUTF8Char __fastcall RecordLoadJSON(void *Rec, PUTF8Char JSON, void * TypeInfo, PUTF8Char EndOfObject = (PUTF8Char)(0x0));
extern DELPHI_PACKAGE bool __fastcall SetVariantUnRefSimpleValue(const System::Variant &Source, TVarData &Dest);
extern DELPHI_PACKAGE void __fastcall RawByteStringToVariant(System::PByte Data, int DataLen, System::Variant &Value)/* overload */;
extern DELPHI_PACKAGE void __fastcall RawByteStringToVariant(const System::RawByteString Data, System::Variant &Value)/* overload */;
extern DELPHI_PACKAGE void __fastcall VariantToRawByteString(const System::Variant &Value, System::RawByteString &Dest);
extern DELPHI_PACKAGE void __fastcall SetVariantNull(System::Variant &Value);
extern DELPHI_PACKAGE bool __fastcall VarIsEmptyOrNull(const System::Variant &V);
extern DELPHI_PACKAGE bool __fastcall VarIs(const System::Variant &V, const TVarDataTypes &VTypes);
extern DELPHI_PACKAGE void __fastcall SetVariantByRef(const System::Variant &Source, System::Variant &Dest);
extern DELPHI_PACKAGE void __fastcall SetVariantByValue(const System::Variant &Source, System::Variant &Dest);
extern DELPHI_PACKAGE void __fastcall ZeroFill(TVarData &Value);
extern DELPHI_PACKAGE void __fastcall RawUTF8ToVariant(PUTF8Char Txt, int TxtLen, System::Variant &Value)/* overload */;
extern DELPHI_PACKAGE void __fastcall RawUTF8ToVariant(const RawUTF8 Txt, System::Variant &Value)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall RawUTF8ToVariant(const RawUTF8 Txt)/* overload */;
extern DELPHI_PACKAGE void __fastcall RawUTF8ToVariant(const RawUTF8 Txt, TVarData &Value, System::Word ExpectedValueType)/* overload */;
extern DELPHI_PACKAGE char * __fastcall VariantSave(const System::Variant &Value, char * Dest)/* overload */;
extern DELPHI_PACKAGE int __fastcall VariantSaveLength(const System::Variant &Value);
extern DELPHI_PACKAGE System::RawByteString __fastcall VariantSave(const System::Variant &Value)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall VariantLoad(const System::RawByteString Bin, TDocVariantOptions CustomVariantOptions = (TDocVariantOptions() << TDocVariantOption::dvoValueCopiedByReference ))/* overload */;
extern DELPHI_PACKAGE char * __fastcall VariantLoad(System::Variant &Value, char * Source, TDocVariantOptions CustomVariantOptions = (TDocVariantOptions() << TDocVariantOption::dvoValueCopiedByReference ))/* overload */;
extern DELPHI_PACKAGE void __fastcall FromVarVariant(System::PByte &Source, System::Variant &Value, TDocVariantOptions CustomVariantOptions = (TDocVariantOptions() << TDocVariantOption::dvoValueCopiedByReference ));
extern DELPHI_PACKAGE PUTF8Char __fastcall VariantLoadJSON(System::Variant &Value, PUTF8Char JSON, PUTF8Char EndOfObject = (PUTF8Char)(0x0), PDocVariantOptions TryCustomVariants = (PDocVariantOptions)(0x0))/* overload */;
extern DELPHI_PACKAGE void __fastcall VariantLoadJSON(System::Variant &Value, const RawUTF8 JSON, PDocVariantOptions TryCustomVariants = (PDocVariantOptions)(0x0))/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall VariantLoadJSON(const RawUTF8 JSON, PDocVariantOptions TryCustomVariants = (PDocVariantOptions)(0x0))/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall VariantSaveJSON(const System::Variant &Value, TTextWriterKind Escape = (TTextWriterKind)(0x1))/* overload */;
extern DELPHI_PACKAGE void __fastcall VariantSaveJSON(const System::Variant &Value, TTextWriterKind Escape, RawUTF8 &result)/* overload */;
extern DELPHI_PACKAGE int __fastcall VariantSaveJSONLength(const System::Variant &Value, TTextWriterKind Escape = (TTextWriterKind)(0x1));
extern DELPHI_PACKAGE void __fastcall VariantToVarRec(const System::Variant &V, System::TVarRec &result);
extern DELPHI_PACKAGE System::Variant __fastcall VarRecToVariant(const System::TVarRec &V)/* overload */;
extern DELPHI_PACKAGE void __fastcall VarRecToVariant(const System::TVarRec &V, System::Variant &result)/* overload */;
extern DELPHI_PACKAGE void __fastcall GetVariantFromJSON(PUTF8Char JSON, bool wasString, System::Variant &Value, PDocVariantOptions TryCustomVariants = (PDocVariantOptions)(0x0));
extern DELPHI_PACKAGE TSynInvokeableVariantType* __fastcall SynRegisterCustomVariantType(TSynInvokeableVariantTypeClass aClass);
extern DELPHI_PACKAGE RawUTF8 __fastcall VariantDynArrayToJSON(const TVariantDynArray V);
extern DELPHI_PACKAGE TVariantDynArray __fastcall JSONToVariantDynArray(const RawUTF8 JSON);
extern DELPHI_PACKAGE TVariantDynArray __fastcall ValuesToVariantDynArray(const System::TVarRec *items, const int items_High);
extern DELPHI_PACKAGE TSQLDBFieldType __fastcall VariantTypeToSQLDBFieldType(const System::Variant &V);
extern DELPHI_PACKAGE PDocVariantData __fastcall DocVariantData(const System::Variant &DocVariant);
extern DELPHI_PACKAGE PDocVariantData __fastcall DocVariantDataSafe(const System::Variant &DocVariant)/* overload */;
extern DELPHI_PACKAGE PDocVariantData __fastcall DocVariantDataSafe(const System::Variant &DocVariant, TDocVariantKind ExpectedKind)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall _Obj(const System::TVarRec *NameValuePairs, const int NameValuePairs_High, TDocVariantOptions Options = TDocVariantOptions() );
extern DELPHI_PACKAGE System::Variant __fastcall _Arr(const System::TVarRec *Items, const int Items_High, TDocVariantOptions Options = TDocVariantOptions() );
extern DELPHI_PACKAGE void __fastcall _ObjAddProps(const System::TVarRec *NameValuePairs, const int NameValuePairs_High, System::Variant &Obj)/* overload */;
extern DELPHI_PACKAGE void __fastcall _ObjAddProps(const System::Variant &Document, System::Variant &Obj)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall _ObjFast(const System::TVarRec *NameValuePairs, const int NameValuePairs_High);
extern DELPHI_PACKAGE System::Variant __fastcall _ArrFast(const System::TVarRec *Items, const int Items_High);
extern DELPHI_PACKAGE System::Variant __fastcall _Json(const RawUTF8 JSON, TDocVariantOptions Options = (TDocVariantOptions() << TDocVariantOption::dvoReturnNullForUnknownProperty ))/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall _JsonFast(const RawUTF8 JSON);
extern DELPHI_PACKAGE System::Variant __fastcall _JsonFmt(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High, TDocVariantOptions Options = (TDocVariantOptions() << TDocVariantOption::dvoReturnNullForUnknownProperty ));
extern DELPHI_PACKAGE System::Variant __fastcall _JsonFastFmt(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High);
extern DELPHI_PACKAGE bool __fastcall _Json(const RawUTF8 JSON, System::Variant &Value, TDocVariantOptions Options = (TDocVariantOptions() << TDocVariantOption::dvoReturnNullForUnknownProperty ))/* overload */;
extern DELPHI_PACKAGE void __fastcall _Unique(System::Variant &DocVariant);
extern DELPHI_PACKAGE void __fastcall _UniqueFast(System::Variant &DocVariant);
extern DELPHI_PACKAGE System::Variant __fastcall _Copy(const System::Variant &DocVariant);
extern DELPHI_PACKAGE System::Variant __fastcall _CopyFast(const System::Variant &DocVariant);
extern DELPHI_PACKAGE void __fastcall DynArrayCopy(void *Dest, const void *Source, int SourceMaxElem, void * TypeInfo);
extern DELPHI_PACKAGE char * __fastcall DynArrayLoad(void *Value, char * Source, void * TypeInfo);
extern DELPHI_PACKAGE System::RawByteString __fastcall DynArraySave(void *Value, void * TypeInfo);
extern DELPHI_PACKAGE PUTF8Char __fastcall DynArrayLoadJSON(void *Value, PUTF8Char JSON, void * TypeInfo, PUTF8Char EndOfObject = (PUTF8Char)(0x0));
extern DELPHI_PACKAGE RawUTF8 __fastcall DynArraySaveJSON(void *Value, void * TypeInfo)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall DynArraySaveJSON(void * TypeInfo, const System::RawByteString BlobValue)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall DynArrayElementTypeName(void * TypeInfo, System::PPointer ElemTypeInfo = (System::PPointer)(0x0));
extern DELPHI_PACKAGE int __fastcall SortDynArrayByte(const void *A, const void *B);
extern DELPHI_PACKAGE int __fastcall SortDynArrayWord(const void *A, const void *B);
extern DELPHI_PACKAGE int __fastcall SortDynArrayInteger(const void *A, const void *B);
extern DELPHI_PACKAGE int __fastcall SortDynArrayCardinal(const void *A, const void *B);
extern DELPHI_PACKAGE int __fastcall SortDynArrayInt64(const void *A, const void *B);
extern DELPHI_PACKAGE int __fastcall SortDynArrayPointer(const void *A, const void *B);
extern DELPHI_PACKAGE int __fastcall SortDynArraySingle(const void *A, const void *B);
extern DELPHI_PACKAGE int __fastcall SortDynArrayDouble(const void *A, const void *B);
extern DELPHI_PACKAGE int __fastcall SortDynArrayAnsiString(const void *A, const void *B);
extern DELPHI_PACKAGE int __fastcall SortDynArrayString(const void *A, const void *B);
extern DELPHI_PACKAGE int __fastcall SortDynArrayAnsiStringI(const void *A, const void *B);
extern DELPHI_PACKAGE int __fastcall SortDynArrayStringI(const void *A, const void *B);
extern DELPHI_PACKAGE int __fastcall SortDynArrayUnicodeString(const void *A, const void *B);
extern DELPHI_PACKAGE int __fastcall SortDynArrayUnicodeStringI(const void *A, const void *B);
extern DELPHI_PACKAGE int __fastcall SortDynArrayVariant(const void *A, const void *B);
extern DELPHI_PACKAGE int __fastcall SortDynArrayVariantI(const void *A, const void *B);
extern DELPHI_PACKAGE int __fastcall JSONArrayCount(PUTF8Char P)/* overload */;
extern DELPHI_PACKAGE int __fastcall JSONArrayCount(PUTF8Char P, PUTF8Char PMax)/* overload */;
extern DELPHI_PACKAGE int __fastcall JSONObjectPropCount(PUTF8Char P);
extern DELPHI_PACKAGE void * __fastcall SimpleDynArrayLoadFrom(char * Source, void * aTypeInfo, int &Count, int &ElemSize);
extern DELPHI_PACKAGE PIntegerArray __fastcall IntegerDynArrayLoadFrom(char * Source, int &Count);
extern DELPHI_PACKAGE int __fastcall RawUTF8DynArrayLoadFromContains(char * Source, PUTF8Char Value, int ValueLen, bool CaseSensitive);
extern DELPHI_PACKAGE void __fastcall QuickSortIndexedPUTF8Char(PPUtf8CharArray Values, int Count, TCardinalDynArray &SortedIndexes, bool CaseSensitive = false);
extern DELPHI_PACKAGE TDynArray __fastcall DynArray(void * aTypeInfo, void *aValue, System::PInteger aCountPointer = (System::PInteger)(0x0));
extern DELPHI_PACKAGE unsigned __fastcall HashAnsiString(const void *Elem, THasher Hasher);
extern DELPHI_PACKAGE unsigned __fastcall HashAnsiStringI(const void *Elem, THasher Hasher);
extern DELPHI_PACKAGE unsigned __fastcall HashUnicodeString(const void *Elem, THasher Hasher);
extern DELPHI_PACKAGE unsigned __fastcall HashUnicodeStringI(const void *Elem, THasher Hasher);
extern DELPHI_PACKAGE unsigned __fastcall HashSynUnicode(const void *Elem, THasher Hasher);
extern DELPHI_PACKAGE unsigned __fastcall HashSynUnicodeI(const void *Elem, THasher Hasher);
extern DELPHI_PACKAGE unsigned __fastcall HashWideString(const void *Elem, THasher Hasher);
extern DELPHI_PACKAGE unsigned __fastcall HashWideStringI(const void *Elem, THasher Hasher);
extern DELPHI_PACKAGE unsigned __fastcall HashPtrUInt(const void *Elem, THasher Hasher);
extern DELPHI_PACKAGE unsigned __fastcall HashPointer(const void *Elem, THasher Hasher);
extern DELPHI_PACKAGE unsigned __fastcall HashByte(const void *Elem, THasher Hasher);
extern DELPHI_PACKAGE unsigned __fastcall HashWord(const void *Elem, THasher Hasher);
extern DELPHI_PACKAGE unsigned __fastcall HashInteger(const void *Elem, THasher Hasher);
extern DELPHI_PACKAGE unsigned __fastcall HashCardinal(const void *Elem, THasher Hasher);
extern DELPHI_PACKAGE unsigned __fastcall HashInt64(const void *Elem, THasher Hasher);
extern DELPHI_PACKAGE unsigned __fastcall HashVariant(const void *Elem, THasher Hasher);
extern DELPHI_PACKAGE unsigned __fastcall HashVariantI(const void *Elem, THasher Hasher);
extern DELPHI_PACKAGE int __fastcall PtrArrayAdd(void *aPtrArray, void * aItem);
extern DELPHI_PACKAGE int __fastcall ObjArrayAdd(void *aObjArray, System::TObject* aItem);
extern DELPHI_PACKAGE int __fastcall ObjArrayAddOnce(void *aObjArray, System::TObject* aItem);
extern DELPHI_PACKAGE void __fastcall ObjArraySetLength(void *aObjArray, int aLength);
extern DELPHI_PACKAGE int __fastcall ObjArrayFind(void *aObjArray, System::TObject* aItem);
extern DELPHI_PACKAGE void __fastcall ObjArrayDelete(void *aObjArray, int aItemIndex)/* overload */;
extern DELPHI_PACKAGE int __fastcall ObjArrayDelete(void *aObjArray, System::TObject* aItem)/* overload */;
extern DELPHI_PACKAGE void __fastcall ObjArraySort(void *aObjArray, TDynArraySortCompare Compare);
extern DELPHI_PACKAGE void __fastcall ObjArrayClear(void *aObjArray);
extern DELPHI_PACKAGE void __fastcall ObjArrayObjArrayClear(void *aObjArray);
extern DELPHI_PACKAGE int __fastcall InterfaceArrayAdd(void *aInterfaceArray, const System::_di_IInterface aItem);
extern DELPHI_PACKAGE int __fastcall InterfaceArrayFind(void *aInterfaceArray, const System::_di_IInterface aItem);
extern DELPHI_PACKAGE void __fastcall InterfaceArrayDelete(void *aInterfaceArray, int aItemIndex)/* overload */;
extern DELPHI_PACKAGE int __fastcall InterfaceArrayDelete(void *aInterfaceArray, const System::_di_IInterface aItem)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall Chars3ToInt18(void * P);
extern DELPHI_PACKAGE RawUTF8 __fastcall JSONEncode(const System::TVarRec *NameValuePairs, const int NameValuePairs_High)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall JSONEncode(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High, const System::TVarRec *Params, const int Params_High)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall JSONEncodeArrayDouble(const double *Values, const int Values_High)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall JSONEncodeArrayUTF8(const RawUTF8 *Values, const int Values_High)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall JSONEncodeArrayInteger(const int *Values, const int Values_High)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall JSONEncodeArrayOfConst(const System::TVarRec *Values, const int Values_High, bool WithoutBraces = false)/* overload */;
extern DELPHI_PACKAGE void __fastcall JSONEncodeArrayOfConst(const System::TVarRec *Values, const int Values_High, bool WithoutBraces, RawUTF8 &result)/* overload */;
extern DELPHI_PACKAGE void __fastcall JSONDecode(RawUTF8 &JSON, PUTF8Char const *Names, const int Names_High, TPUTF8CharDynArray &Values, bool HandleValuesAsObjectOrArray = false)/* overload */;
extern DELPHI_PACKAGE PUTF8Char __fastcall JSONDecode(PUTF8Char P, PUTF8Char const *Names, const int Names_High, TPUTF8CharDynArray &Values, bool HandleValuesAsObjectOrArray = false)/* overload */;
extern DELPHI_PACKAGE RawUTF8 __fastcall JSONDecode(RawUTF8 &JSON, const RawUTF8 aName = "result", System::PBoolean wasString = (System::PBoolean)(0x0), bool HandleValuesAsObjectOrArray = false)/* overload */;
extern DELPHI_PACKAGE PUTF8Char __fastcall JSONDecode(PUTF8Char P, /* out */ TNameValuePUTF8CharDynArray &Values, bool HandleValuesAsObjectOrArray = false)/* overload */;
extern DELPHI_PACKAGE PUTF8Char __fastcall JSONRetrieveStringField(PUTF8Char P, /* out */ PUTF8Char &Field, /* out */ int &FieldLen, bool ExpectNameField);
extern DELPHI_PACKAGE PUTF8Char __fastcall GetJSONField(PUTF8Char P, /* out */ PUTF8Char &PDest, System::PBoolean wasString = (System::PBoolean)(0x0), PUTF8Char EndOfObject = (PUTF8Char)(0x0));
extern DELPHI_PACKAGE PUTF8Char __fastcall GetJSONPropName(PUTF8Char &P);
extern DELPHI_PACKAGE PUTF8Char __fastcall GotoNextJSONPropName(PUTF8Char P);
extern DELPHI_PACKAGE PUTF8Char __fastcall GetJSONFieldOrObjectOrArray(PUTF8Char &P, System::PBoolean wasString = (System::PBoolean)(0x0), PUTF8Char EndOfObject = (PUTF8Char)(0x0), bool HandleValuesAsObjectOrArray = false);
extern DELPHI_PACKAGE bool __fastcall IsString(PUTF8Char P);
extern DELPHI_PACKAGE bool __fastcall IsStringJSON(PUTF8Char P);
extern DELPHI_PACKAGE PUTF8Char __fastcall GotoEndJSONItem(PUTF8Char P);
extern DELPHI_PACKAGE RawJSON __fastcall GetJSONItemAsRawJSON(PUTF8Char &P, char * EndOfObject = (char *)(0x0));
extern DELPHI_PACKAGE PUTF8Char __fastcall GotoNextJSONItem(PUTF8Char P, unsigned NumberOfItemsToJump = (unsigned)(0x1), char * EndOfObject = (char *)(0x0));
extern DELPHI_PACKAGE PUTF8Char __fastcall GotoNextJSONObjectOrArray(PUTF8Char P, char EndChar = '\0');
extern DELPHI_PACKAGE PUTF8Char __fastcall GotoNextJSONObjectOrArrayMax(PUTF8Char P, PUTF8Char PMax);
extern DELPHI_PACKAGE void __fastcall RemoveCommentsFromJSON(PUTF8Char P);
extern DELPHI_PACKAGE void __fastcall JSONBufferToXML(PUTF8Char P, const RawUTF8 Header, const RawUTF8 NameSpace, /* out */ RawUTF8 &result);
extern DELPHI_PACKAGE RawUTF8 __fastcall JSONToXML(const RawUTF8 JSON, const RawUTF8 Header = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n", const RawUTF8 NameSpace = RawUTF8());
extern DELPHI_PACKAGE void __fastcall JSONBufferReformat(PUTF8Char P, /* out */ RawUTF8 &result, TTextWriterJSONFormat Format = (TTextWriterJSONFormat)(0x1));
extern DELPHI_PACKAGE RawUTF8 __fastcall JSONReformat(const RawUTF8 JSON, TTextWriterJSONFormat Format = (TTextWriterJSONFormat)(0x1));
extern DELPHI_PACKAGE bool __fastcall JSONBufferReformatToFile(PUTF8Char P, const System::Sysutils::TFileName Dest, TTextWriterJSONFormat Format = (TTextWriterJSONFormat)(0x1));
extern DELPHI_PACKAGE bool __fastcall JSONReformatToFile(const RawUTF8 JSON, const System::Sysutils::TFileName Dest, TTextWriterJSONFormat Format = (TTextWriterJSONFormat)(0x1));
extern DELPHI_PACKAGE bool __fastcall IsValidIP4Address(PUTF8Char P);
extern DELPHI_PACKAGE bool __fastcall IsValidEmail(PUTF8Char P);
extern DELPHI_PACKAGE bool __fastcall IsMatch(const RawUTF8 Pattern, const RawUTF8 Text, bool CaseInsensitive = false);
extern DELPHI_PACKAGE void __fastcall TextColor(TConsoleColor Color);
extern DELPHI_PACKAGE void __fastcall TextBackground(TConsoleColor Color);
extern DELPHI_PACKAGE void __fastcall ConsoleWaitForEnterKey(void);
extern DELPHI_PACKAGE void __fastcall ConsoleShowFatalException(System::Sysutils::Exception* E);
extern DELPHI_PACKAGE RawUTF8 __fastcall KB(__int64 bytes);
extern DELPHI_PACKAGE RawUTF8 __fastcall IntToThousandString(int Value, const RawUTF8 ThousandSep = ",");
extern DELPHI_PACKAGE RawUTF8 __fastcall MicroSecToString(unsigned __int64 Micro);
extern DELPHI_PACKAGE bool __fastcall IsInitializedCriticalSection(const _RTL_CRITICAL_SECTION &CS);
extern DELPHI_PACKAGE void __fastcall InitializeCriticalSectionIfNeededAndEnter(_RTL_CRITICAL_SECTION &CS);
extern DELPHI_PACKAGE void __fastcall DeleteCriticalSectionIfNeeded(_RTL_CRITICAL_SECTION &CS);
extern DELPHI_PACKAGE RawUTF8 __fastcall GetDelphiCompilerVersion(void);
extern DELPHI_PACKAGE __int64 __fastcall FileSeek64(NativeUInt Handle, const __int64 Offset, unsigned Origin);
extern DELPHI_PACKAGE bool __fastcall PropNameValid(PUTF8Char P);
extern DELPHI_PACKAGE void __fastcall ToSBFStr(const System::RawByteString Value, /* out */ TSBFString &Result);
extern DELPHI_PACKAGE bool __fastcall CompareOperator(TSynTableFieldType FieldType, PUTF8Char SBF, PUTF8Char SBFEnd, __int64 Value, TCompareOperator Oper)/* overload */;
extern DELPHI_PACKAGE bool __fastcall CompareOperator(PUTF8Char SBF, PUTF8Char SBFEnd, double Value, TCompareOperator Oper)/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall StrCompL(PUTF8Char P1, PUTF8Char P2, int L, int Default);
extern DELPHI_PACKAGE NativeInt __fastcall StrCompIL(PUTF8Char P1, PUTF8Char P2, int L, int Default = 0x0);
extern DELPHI_PACKAGE bool __fastcall CompareOperator(TSynTableFieldType FieldType, PUTF8Char SBF, PUTF8Char SBFEnd, PUTF8Char Value, int ValueLen, TCompareOperator Oper, bool CaseSensitive)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsRowID(PUTF8Char FieldName)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsRowID(PUTF8Char FieldName, int FieldLen)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsRowIDShort(const System::ShortString &FieldName)/* overload */;
extern DELPHI_PACKAGE bool __fastcall GetNextFieldProp(PUTF8Char &P, RawUTF8 &Prop);
extern DELPHI_PACKAGE int __fastcall StreamSynLZComputeLen(char * P, unsigned Len, unsigned aMagic);
extern DELPHI_PACKAGE System::AnsiString __fastcall CompressSynLZ(void *DataRawByteString, bool Compress);
extern DELPHI_PACKAGE int __fastcall StreamSynLZ(System::Classes::TCustomMemoryStream* Source, System::Classes::TStream* Dest, unsigned Magic)/* overload */;
extern DELPHI_PACKAGE int __fastcall StreamSynLZ(System::Classes::TCustomMemoryStream* Source, const System::Sysutils::TFileName DestFile, unsigned Magic)/* overload */;
extern DELPHI_PACKAGE bool __fastcall FileSynLZ(const System::Sysutils::TFileName Source, const System::Sysutils::TFileName Dest, unsigned Magic);
extern DELPHI_PACKAGE bool __fastcall FileUnSynLZ(const System::Sysutils::TFileName Source, const System::Sysutils::TFileName Dest, unsigned Magic);
extern DELPHI_PACKAGE System::Classes::TMemoryStream* __fastcall StreamUnSynLZ(const System::Sysutils::TFileName Source, unsigned Magic)/* overload */;
extern DELPHI_PACKAGE System::Classes::TMemoryStream* __fastcall StreamUnSynLZ(System::Classes::TStream* Source, unsigned Magic)/* overload */;
extern DELPHI_PACKAGE System::RawByteString __fastcall SynLZCompress(const System::RawByteString Data, int CompressionSizeTrigger = 0x64)/* overload */;
extern DELPHI_PACKAGE void __fastcall SynLZCompress(char * P, int PLen, /* out */ System::RawByteString &Result, int CompressionSizeTrigger = 0x64)/* overload */;
extern DELPHI_PACKAGE System::RawByteString __fastcall SynLZDecompress(const System::RawByteString Data)/* overload */;
extern DELPHI_PACKAGE void __fastcall SynLZDecompress(char * P, int PLen, /* out */ System::RawByteString &Result)/* overload */;
extern DELPHI_PACKAGE TByteDynArray __fastcall SynLZCompressToBytes(const System::RawByteString Data, int CompressionSizeTrigger = 0x64)/* overload */;
extern DELPHI_PACKAGE TByteDynArray __fastcall SynLZCompressToBytes(char * P, int PLen, int CompressionSizeTrigger = 0x64)/* overload */;
extern DELPHI_PACKAGE System::RawByteString __fastcall SynLZDecompress(const TByteDynArray Data)/* overload */;
extern DELPHI_PACKAGE bool __fastcall GetLineContains(PUTF8Char p, PUTF8Char pEnd, PUTF8Char up);
extern DELPHI_PACKAGE bool __fastcall GetLineSizeSmallerThan(PUTF8Char P, PUTF8Char PEnd, int aMinimalCount);
extern DELPHI_PACKAGE void __fastcall SetCurrentThreadName(const RawUTF8 Format, const System::TVarRec *Args, const int Args_High);
extern DELPHI_PACKAGE void __fastcall SetThreadName(unsigned ThreadID, const RawUTF8 Format, const System::TVarRec *Args, const int Args_High);
extern DELPHI_PACKAGE System::Types::TWaitResult __fastcall FixedWaitFor(System::Syncobjs::TEvent* Event, unsigned Timeout);
extern DELPHI_PACKAGE void __fastcall FixedWaitForever(System::Syncobjs::TEvent* Event);
extern DELPHI_PACKAGE int __fastcall MultiEventFind(void *EventList, const System::TMethod &Event);
extern DELPHI_PACKAGE bool __fastcall MultiEventAdd(void *EventList, const System::TMethod &Event);
extern DELPHI_PACKAGE void __fastcall MultiEventRemove(void *EventList, const System::TMethod &Event)/* overload */;
extern DELPHI_PACKAGE void __fastcall MultiEventRemove(void *EventList, int Index)/* overload */;
extern DELPHI_PACKAGE void __fastcall GarbageCollectorFree(void);
extern DELPHI_PACKAGE void __fastcall GarbageCollectorFreeAndNil(void *InstanceVariable, System::TObject* Instance);
extern DELPHI_PACKAGE void __fastcall GlobalLock(void);
extern DELPHI_PACKAGE void __fastcall GlobalUnLock(void);
}	/* namespace Xlssyncommons */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSSYNCOMMONS)
using namespace Xlssyncommons;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XlssyncommonsHPP
