// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_Utils5.pas' rev: 35.00 (Windows)

#ifndef Biff_utils5HPP
#define Biff_utils5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Math.hpp>
#include <Vcl.Graphics.hpp>
#include <BIFF_RecsII5.hpp>
#include <XLSUtils5.hpp>
#include <Xc12Utils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_utils5
{
//-- forward type declarations -----------------------------------------------
struct TRecPTGS;
struct TFormulaValue;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TFormulaValType : unsigned char { fvFloat, fvBoolean, fvError, fvString, fvRef, fvArea, fvExtRef, fvExtArea, fvNull };

typedef TRecPTGS *PRecPTGS;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecPTGS
{
public:
	System::Word Size;
	System::Sysutils::TByteArray *PTGS;
};
#pragma pack(pop)


struct DECLSPEC_DRECORD TFormulaValue
{
public:
	System::UnicodeString vString;
	
public:
	TFormulaValType ValType;
	union
	{
		struct 
		{
			System::StaticArray<System::Word, 5> vExtArea;
		};
		struct 
		{
			System::StaticArray<System::Word, 3> vExtRef;
		};
		struct 
		{
			System::StaticArray<System::Word, 4> vArea;
		};
		struct 
		{
			System::StaticArray<System::Word, 2> vRef;
		};
		struct 
		{
			bool xvString;
		};
		struct 
		{
			Xc12utils5::TXc12CellError vError;
		};
		struct 
		{
			bool vBoolean;
		};
		struct 
		{
			double vFloat;
		};
		
	};
};


typedef System::DynamicArray<System::Byte> TDynByteArray;

typedef System::StaticArray<unsigned, 8192> TLongWordArray;

typedef TLongWordArray *PLongWordArray;

typedef System::StaticArray<System::Byte, 8> TByte8Array;

typedef void __fastcall (__closure *TFormulaErrorEvent)(System::TObject* Sender, int ErrorId, System::UnicodeString ErrorStr);

typedef void __fastcall (__closure *TFunctionEvent)(System::TObject* Sender, System::UnicodeString FuncName, TFormulaValue *Args, const int Args_High, TFormulaValue &Result);

enum DECLSPEC_DENUM TFormulaNameType : unsigned char { ntName, ntExternName, ntExternSheet, ntCurrBook, ntCellValue };

//-- var, const, procedure ---------------------------------------------------
#define TFormulaValTypeRef (System::Set<TFormulaValType, TFormulaValType::fvFloat, TFormulaValType::fvNull>() << TFormulaValType::fvRef << TFormulaValType::fvArea << TFormulaValType::fvExtRef << TFormulaValType::fvExtArea )
extern DELPHI_PACKAGE Xc12utils5::TXc12IndexColor __fastcall RGBToClosestIndexColor(unsigned Color);
extern DELPHI_PACKAGE bool __fastcall ValidRef(int C, int R);
extern DELPHI_PACKAGE bool __fastcall ValidArea(int C1, int R1, int C2, int R2);
extern DELPHI_PACKAGE System::Byte __fastcall CellErrorToErrorCode(Xc12utils5::TXc12CellError Error);
extern DELPHI_PACKAGE void __fastcall WideStringToByteStr(System::UnicodeString S, System::Sysutils::PByteArray P);
extern DELPHI_PACKAGE double __fastcall DecodeRK(int Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall Bit8StrToWideString(System::Sysutils::PByteArray P, int CharCount);
extern DELPHI_PACKAGE Xc12utils5::TXc12CellError __fastcall ErrorCodeToCellError(int Code);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall XColorToTColor(Xc12utils5::TXc12IndexColor XC);
extern DELPHI_PACKAGE unsigned __fastcall XColorToRGB(Xc12utils5::TXc12IndexColor XC);
extern DELPHI_PACKAGE Xc12utils5::TXc12IndexColor __fastcall IntToXColor(System::Word Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall BufUnicodeZToWS(System::Sysutils::PByteArray Buf, int Len);
extern DELPHI_PACKAGE bool __fastcall ClipAreaToSheet(int &C1, int &R1, int &C2, int &R2);
extern DELPHI_PACKAGE int __fastcall UCStringLenFile(System::UnicodeString S);
extern DELPHI_PACKAGE int __fastcall CompressedStringLen(System::RawByteString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ByteToWideString(System::Sysutils::PByteArray P, int CharCount);
extern DELPHI_PACKAGE System::UnicodeString __fastcall CompressedStrToWideString(System::RawByteString S);
extern DELPHI_PACKAGE System::RawByteString __fastcall ByteToCompressedStr(System::Sysutils::PByteArray P, int CharCount);
extern DELPHI_PACKAGE void __fastcall FVClear(TFormulaValue &FV);
extern DELPHI_PACKAGE void __fastcall FVSetNull(TFormulaValue &FV);
extern DELPHI_PACKAGE void __fastcall FVSetFloat(TFormulaValue &FV, double Value);
extern DELPHI_PACKAGE void __fastcall FVSetBoolean(TFormulaValue &FV, bool Value);
extern DELPHI_PACKAGE void __fastcall FVSetError(TFormulaValue &FV, Xc12utils5::TXc12CellError Value);
extern DELPHI_PACKAGE void __fastcall FVSetString(TFormulaValue &FV, System::UnicodeString Value);
extern DELPHI_PACKAGE void __fastcall FVSetRef(TFormulaValue &FV, System::Word Col, System::Word Row);
extern DELPHI_PACKAGE void __fastcall FVSetArea(TFormulaValue &FV, System::Word Col1, System::Word Row1, System::Word Col2, System::Word Row2);
extern DELPHI_PACKAGE void __fastcall FVSetXRef(TFormulaValue &FV, System::Word Col, System::Word Row, System::Word Sheet);
extern DELPHI_PACKAGE void __fastcall FVSetXArea(TFormulaValue &FV, System::Word Col1, System::Word Row1, System::Word Col2, System::Word Row2, System::Word Sheet);
extern DELPHI_PACKAGE double __fastcall FVGetFloat(const TFormulaValue &FV);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FVGetString(const TFormulaValue &FV);
extern DELPHI_PACKAGE bool __fastcall FVGetBoolean(const TFormulaValue &FV);
extern DELPHI_PACKAGE System::Variant __fastcall FVGetVariant(const TFormulaValue &FV);
extern DELPHI_PACKAGE bool __fastcall FVCompare(const TFormulaValue &FV1, const TFormulaValue &FV2, double &Res);
extern DELPHI_PACKAGE int __fastcall FVSize(const TFormulaValue &FV);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ErrorCodeToText(int Code);
extern DELPHI_PACKAGE System::UnicodeString __fastcall MyWideUppercase(System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ByteStrToWideString(System::Sysutils::PByteArray P, int CharCount);
}	/* namespace Biff_utils5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_UTILS5)
using namespace Biff_utils5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_utils5HPP
