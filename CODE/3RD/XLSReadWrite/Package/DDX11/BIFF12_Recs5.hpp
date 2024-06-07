// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF12_Recs5.pas' rev: 35.00 (Windows)

#ifndef Biff12_recs5HPP
#define Biff12_recs5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff12_recs5
{
//-- forward type declarations -----------------------------------------------
struct TRK;
struct TBIFF12_RowHdr;
struct TBIFF12_CellRk;
struct TBIFF12_CellError;
struct TBIFF12_CellBool;
struct TBIFF12_CellReal;
struct TBIFF12_FmlaNum;
struct TBIFF12_FmlaString;
struct TBIFF12_FmlaBool;
struct TBIFF12_FmlaError;
struct TBIFF12_CellRString;
struct TBIFF12_WsDim;
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<System::UnicodeString, 664> Biff12_recs5__1;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRK
{
	
public:
	union
	{
		struct 
		{
			System::StaticArray<int, 2> DW;
		};
		struct 
		{
			double V;
		};
		
	};
};
#pragma pack(pop)


typedef TBIFF12_RowHdr *PBIFF12_RowHdr;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TBIFF12_RowHdr
{
public:
	int Row;
	int Style;
	System::Word Height;
};
#pragma pack(pop)


typedef TBIFF12_CellRk *PBIFF12_CellRk;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TBIFF12_CellRk
{
public:
	int Col;
	unsigned Options;
	unsigned RK;
};
#pragma pack(pop)


typedef TBIFF12_CellError *PBIFF12_CellError;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TBIFF12_CellError
{
public:
	int Col;
	unsigned Options;
	System::Byte Error;
};
#pragma pack(pop)


typedef TBIFF12_CellBool *PBIFF12_CellBool;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TBIFF12_CellBool
{
public:
	int Col;
	unsigned Options;
	System::Byte Bool;
};
#pragma pack(pop)


typedef TBIFF12_CellReal *PBIFF12_CellReal;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TBIFF12_CellReal
{
public:
	int Col;
	unsigned Options;
	double Num;
};
#pragma pack(pop)


typedef TBIFF12_FmlaNum *PBIFF12_FmlaNum;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TBIFF12_FmlaNum
{
public:
	int Col;
	unsigned Options;
	double Num;
	System::Word FmlOptions;
	System::StaticArray<System::Byte, 1> FMLA;
};
#pragma pack(pop)


typedef TBIFF12_FmlaString *PBIFF12_FmlaString;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TBIFF12_FmlaString
{
public:
	int Col;
	unsigned Options;
	int Length;
	System::StaticArray<System::WideChar, 1> Str;
};
#pragma pack(pop)


typedef TBIFF12_FmlaBool *PBIFF12_FmlaBool;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TBIFF12_FmlaBool
{
public:
	int Col;
	unsigned Options;
	System::Byte Bool;
	System::Word FmlOptions;
	System::StaticArray<System::Byte, 1> FMLA;
};
#pragma pack(pop)


typedef TBIFF12_FmlaError *PBIFF12_FmlaError;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TBIFF12_FmlaError
{
public:
	int Col;
	unsigned Options;
	System::Byte Error;
	System::Word FmlOptions;
	System::StaticArray<System::Byte, 1> FMLA;
};
#pragma pack(pop)


typedef TBIFF12_CellRString *PBIFF12_CellRString;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TBIFF12_CellRString
{
public:
	int Col;
	unsigned Options;
	System::Byte StrOptions;
	int Length;
	System::StaticArray<System::WideChar, 1> Str;
};
#pragma pack(pop)


typedef TBIFF12_WsDim *PBIFF12_WsDim;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TBIFF12_WsDim
{
public:
	unsigned Row1;
	unsigned Row2;
	unsigned Col1;
	unsigned Col2;
};
#pragma pack(pop)


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Biff12_recs5__1 BIFFRecNames;
static const System::Int8 BIFF12_REC_ROWHDR = System::Int8(0x0);
static const System::Int8 BIFF12_REC_CELLRK = System::Int8(0x2);
static const System::Int8 BIFF12_REC_CELLERROR = System::Int8(0x3);
static const System::Int8 BIFF12_REC_CELLBOOL = System::Int8(0x4);
static const System::Int8 BIFF12_REC_CELLREAL = System::Int8(0x5);
static const System::Int8 BIFF12_REC_CELLST = System::Int8(0x6);
static const System::Int8 BIFF12_REC_FMLASTRING = System::Int8(0x8);
static const System::Int8 BIFF12_REC_FMLANUM = System::Int8(0x9);
static const System::Int8 BIFF12_REC_FMLABOOL = System::Int8(0xa);
static const System::Int8 BIFF12_REC_FMLAERROR = System::Int8(0xb);
static const System::Int8 BIFF12_REC_CELLRSTRING = System::Int8(0x3e);
static const System::Byte BIFF12_REC_BEGINSHEET = System::Byte(0x81);
static const System::Byte BIFF12_REC_BEGINSHEETDATA = System::Byte(0x91);
static const System::Byte BIFF12_REC_WSDIM = System::Byte(0x94);
}	/* namespace Biff12_recs5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF12_RECS5)
using namespace Biff12_recs5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff12_recs5HPP
