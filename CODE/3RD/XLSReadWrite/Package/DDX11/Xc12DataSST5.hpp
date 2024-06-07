// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Xc12DataSST5.pas' rev: 35.00 (Windows)

#ifndef Xc12datasst5HPP
#define Xc12datasst5HPP

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
#include <XLSUtils5.hpp>
#include <Xc12Common5.hpp>
#include <Xc12DataStyleSheet5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xc12datasst5
{
//-- forward type declarations -----------------------------------------------
struct TXLSString;
struct TXLSStringUC;
struct TXLSStringRich;
struct TXLSStringRichUC;
struct TXLSStringFarEast;
struct TXLSStringFarEastUC;
struct TXLSStringFarEastRich;
struct TXLSStringFarEastRichUC;
struct THashItem;
class DELPHICLASS TXLSStringHash;
class DELPHICLASS TXc12DataSST;
//-- type declarations -------------------------------------------------------
typedef TXLSString *PXLSString;

struct DECLSPEC_DRECORD TXLSString
{
	
private:
	struct DECLSPEC_DRECORD _TXLSString__1
	{
	};
	
	
	
public:
	int RefCount;
	System::Word Len;
	System::Byte Options;
	_TXLSString__1 Data;
};


typedef System::StaticArray<void *, 268435455> XLSPointerArray;

typedef XLSPointerArray *XLSPPointerArray;

typedef TXLSStringUC *PXLSStringUC;

struct DECLSPEC_DRECORD TXLSStringUC
{
	
private:
	struct DECLSPEC_DRECORD _TXLSStringUC__1
	{
	};
	
	
	
public:
	int RefCount;
	System::Word Len;
	System::Byte Options;
	_TXLSStringUC__1 Data;
};


typedef TXLSStringRich *PXLSStringRich;

struct DECLSPEC_DRECORD TXLSStringRich
{
	
private:
	struct DECLSPEC_DRECORD _TXLSStringRich__1
	{
	};
	
	
	
public:
	int RefCount;
	System::Word Len;
	System::Byte Options;
	System::Word FormatCount;
	_TXLSStringRich__1 Data;
};


typedef TXLSStringRichUC *PXLSStringRichUC;

struct DECLSPEC_DRECORD TXLSStringRichUC
{
	
private:
	struct DECLSPEC_DRECORD _TXLSStringRichUC__1
	{
	};
	
	
	
public:
	int RefCount;
	System::Word Len;
	System::Byte Options;
	System::Word FormatCount;
	_TXLSStringRichUC__1 Data;
};


typedef TXLSStringFarEast *PXLSStringFarEast;

struct DECLSPEC_DRECORD TXLSStringFarEast
{
	
private:
	struct DECLSPEC_DRECORD _TXLSStringFarEast__1
	{
	};
	
	
	
public:
	int RefCount;
	System::Word Len;
	System::Byte Options;
	unsigned FarEastDataSize;
	_TXLSStringFarEast__1 Data;
};


typedef TXLSStringFarEastUC *PXLSStringFarEastUC;

struct DECLSPEC_DRECORD TXLSStringFarEastUC
{
	
private:
	struct DECLSPEC_DRECORD _TXLSStringFarEastUC__1
	{
	};
	
	
	
public:
	int RefCount;
	System::Word Len;
	System::Byte Options;
	unsigned FarEastDataSize;
	_TXLSStringFarEastUC__1 Data;
};


typedef TXLSStringFarEastRich *PXLSStringFarEastRich;

struct DECLSPEC_DRECORD TXLSStringFarEastRich
{
	
private:
	struct DECLSPEC_DRECORD _TXLSStringFarEastRich__1
	{
	};
	
	
	
public:
	int RefCount;
	System::Word Len;
	System::Byte Options;
	System::Word FormatCount;
	unsigned FarEastDataSize;
	_TXLSStringFarEastRich__1 Data;
};


typedef TXLSStringFarEastRichUC *PXLSStringFarEastRichUC;

struct DECLSPEC_DRECORD TXLSStringFarEastRichUC
{
	
private:
	struct DECLSPEC_DRECORD _TXLSStringFarEastRichUC__1
	{
	};
	
	
	
public:
	int RefCount;
	System::Word Len;
	System::Byte Options;
	System::Word FormatCount;
	unsigned FarEastDataSize;
	_TXLSStringFarEastRichUC__1 Data;
};


typedef THashItem *PHashItem;

typedef PHashItem *PPHashItem;

struct DECLSPEC_DRECORD THashItem
{
public:
	THashItem *Next;
	System::UnicodeString Key;
	int Value;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSStringHash : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<PHashItem> _TXLSStringHash__1;
	
	
private:
	_TXLSStringHash__1 Buckets;
	
protected:
	PPHashItem __fastcall Find(const System::UnicodeString Key);
	virtual unsigned __fastcall HashOf(const System::UnicodeString Key);
	
public:
	__fastcall TXLSStringHash(unsigned Size);
	__fastcall virtual ~TXLSStringHash();
	void __fastcall Add(const System::UnicodeString Key, int Value);
	void __fastcall Clear();
	void __fastcall Remove(const System::UnicodeString Key);
	bool __fastcall Modify(const System::UnicodeString Key, int Value);
	int __fastcall ValueOf(const System::UnicodeString Key);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DataSST : public Xc12common5::TXc12Data
{
	typedef Xc12common5::TXc12Data inherited;
	
public:
	PXLSString operator[](int Index) { return this->Items[Index]; }
	
private:
	PXLSString __fastcall GetItems(int Index);
	bool __fastcall GetIsFormatted(int Index);
	System::UnicodeString __fastcall GetItemText(int Index);
	
protected:
	TXLSStringHash* FHashTable;
	bool FHashValid;
	Xc12datastylesheet5::TXc12DataStyleSheet* FStyles;
	Xc12datastylesheet5::TXc12Fonts* FFonts;
	XLSPointerArray *FSST;
	int FTotalCount;
	int FAllocCount;
	int FFreeCount;
	bool FCompress;
	bool FIsExcel97;
	void __fastcall BuildHash();
	void __fastcall Grow();
	bool __fastcall IsUnicode(const System::UnicodeString S);
	System::Sysutils::PByteArray __fastcall GetDataPointer(PXLSString Value);
	PXLSString __fastcall MakeString(const System::UnicodeString S);
	PXLSString __fastcall MakeCompressedString(const System::UnicodeString WS);
	void __fastcall EncodeString(System::UnicodeString &AText);
	
public:
	__fastcall TXc12DataSST(Xc12datastylesheet5::TXc12DataStyleSheet* AStyles);
	__fastcall virtual ~TXc12DataSST();
	void __fastcall AfterRead();
	void __fastcall Clear();
	int __fastcall AddRawString(const int ALen, const System::Sysutils::PByteArray AData)/* overload */;
	int __fastcall AddRawString(const int ALen, const System::Sysutils::PWordArray AData)/* overload */;
	int __fastcall FileAddString(const System::UnicodeString AText);
	int __fastcall AddString(System::UnicodeString AText);
	int __fastcall AddFormattedString(const System::UnicodeString AText, Xc12datastylesheet5::TXc12DynFontRunArray AFontRuns);
	System::UnicodeString __fastcall GetText(PXLSString XString);
	void __fastcall UsesString(int AIndex);
	void __fastcall ReleaseString(int AIndex);
	Xc12datastylesheet5::PXc12FontRunArray __fastcall GetFontRuns(PXLSString Value);
	int __fastcall GetFontRunsCount(PXLSString Value);
	__property bool CompressStrings = {read=FCompress, write=FCompress, nodefault};
	__property int TotalCount = {read=FTotalCount, nodefault};
	__property PXLSString Items[int Index] = {read=GetItems/*, default*/};
	__property bool IsFormatted[int Index] = {read=GetIsFormatted};
	__property System::UnicodeString ItemText[int Index] = {read=GetItemText};
	__property bool IsExcel97 = {read=FIsExcel97, write=FIsExcel97, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 STRID_COMPRESSED = System::Int8(0x0);
static const System::Int8 STRID_UNICODE = System::Int8(0x1);
static const System::Int8 STRID_RICH = System::Int8(0x8);
static const System::Int8 STRID_RICH_UNICODE = System::Int8(0x9);
static const System::Int8 STRID_FAREAST = System::Int8(0x4);
static const System::Int8 STRID_FAREAST_RICH = System::Int8(0xc);
static const System::Int8 STRID_FAREAST_UC = System::Int8(0x5);
static const System::Int8 STRID_FAREAST_RICH_UC = System::Int8(0xd);
static const System::Word SST_HASHSIZE = System::Word(0xffff);
extern DELPHI_PACKAGE bool __fastcall SSTStringIsRichStr(const PXLSString ASSTString);
}	/* namespace Xc12datasst5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XC12DATASST5)
using namespace Xc12datasst5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xc12datasst5HPP
