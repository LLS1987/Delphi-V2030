// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSEncodeFmla5.pas' rev: 35.00 (Windows)

#ifndef Xlsencodefmla5HPP
#define Xlsencodefmla5HPP

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
#include <System.IniFiles.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Manager5.hpp>
#include <Xc12DataTable5.hpp>
#include <XLSFmlaDebugData5.hpp>
#include <XLSUtils5.hpp>
#include <XLSTokenizer5.hpp>
#include <XLSFormulaTypes5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsencodefmla5
{
//-- forward type declarations -----------------------------------------------
struct TTableArgData;
struct TAttributeData;
class DELPHICLASS TXLSFormulaEncoder;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TTokenSequence : unsigned char { tsNone, tsCC, tsRR, tsCR, tsCRCR, tsError, tsXS, tsXSS, tsS, tsSS };

struct DECLSPEC_DRECORD TTableArgData
{
public:
	Xlstokenizer5::TXLSTokenType Token;
	int Special;
	int Index;
};


typedef TAttributeData *PAttributeData;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TAttributeData
{
public:
	System::Word Attribute;
	System::Word Count;
};
#pragma pack(pop)


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSFormulaEncoder : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	Xlstokenizer5::TXLSTokenList* FTokens;
	Xlstokenizer5::TXLSTokenType FPrevToken;
	void *FBuffer;
	int FBufSize;
	int FBufPtr;
	Xlsformulatypes5::TXLSArrayPtgs *FStack;
	int FStackPtr;
	Xlsformulatypes5::TXLSArrayPtgs *FPStack;
	int FPStackPtr;
	Xlsformulatypes5::TXLSArrayPtgs *FPostfix;
	int FPostfixSz;
	TAttributeData FAttrData;
	int FAttrCount;
	Xlsformulatypes5::TXLSPtgs FPtgsRPar;
	Xlsformulatypes5::TXLSPtgs FPtgsComma;
	Xc12datatable5::TXc12Tables* FCurrTables;
	int FSheetId;
	int FCol;
	int FRow;
	bool FStopOnError;
	bool FDone;
	Xlsfmladebugdata5::TFmlaDebugItems* FDebugItems;
	void __fastcall Push(Xlsformulatypes5::PXLSPtgs APtgs);
	Xlsformulatypes5::PXLSPtgs __fastcall Pop();
	int __fastcall Peek();
	int __fastcall PPeek();
	int __fastcall Last(int AN);
	Xlstokenizer5::TXLSTokenType __fastcall NextToken(const int AIndex, const int ACount = 0x1);
	void __fastcall SetString(Xlstokenizer5::PXLSToken AToken, Xlsformulatypes5::PXLSPtgs APtgs);
	System::UnicodeString __fastcall GetString(Xlsformulatypes5::PXLSPtgs APtgs);
	int __fastcall Precedence(Xlsformulatypes5::PXLSPtgs APtgs);
	Xlsformulatypes5::PXLSPtgs __fastcall AddCellRef(int &AIndex);
	void __fastcall AddPostfix(Xlsformulatypes5::PXLSPtgs APtgs);
	void __fastcall AddOperator(Xlsformulatypes5::PXLSPtgs APtgs);
	bool __fastcall PrecheckTable(int &AIndex);
	void __fastcall AddTable(int &AIndex);
	Xlsformulatypes5::PXLSPtgsTable __fastcall SaveTable(System::UnicodeString AName);
	Xlsformulatypes5::PXLSPtgs __fastcall AllocPtgs(int ASize, int APtgs);
	bool __fastcall ParseToken(Xlstokenizer5::PXLSToken AToken, int &AIndex);
	bool __fastcall InfixToPostfix();
	Xlsformulatypes5::PXLSPtgs __fastcall CopyBuffer(int &APtgsSize);
	
public:
	__fastcall TXLSFormulaEncoder(Xc12manager5::TXc12Manager* AManager);
	__fastcall virtual ~TXLSFormulaEncoder();
	int __fastcall Encode(Xlstokenizer5::TXLSTokenList* ATokens, /* out */ Xlsformulatypes5::PXLSPtgs &APtgs, const int ASheetId, const int ACol, const int ARow, Xlsfmladebugdata5::TFmlaDebugItems* ADebug = (Xlsfmladebugdata5::TFmlaDebugItems*)(0x0));
	System::UnicodeString __fastcall Dump();
	System::UnicodeString __fastcall DumpStack();
	__property bool StopOnError = {read=FStopOnError, write=FStopOnError, nodefault};
	__property Xc12datatable5::TXc12Tables* CurrTables = {read=FCurrTables, write=FCurrTables};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Xc12utils5::TXc12SimpleNameType __fastcall IsSimpleName(Xc12manager5::TXc12Manager* AManager, Xlsformulatypes5::PXLSPtgs APtgs, int APtgsSz, Xc12utils5::PXLS3dCellArea AArea);
extern DELPHI_PACKAGE bool __fastcall XLSEncodeFormula(Xc12manager5::TXc12Manager* AManager, const System::UnicodeString AFormula, /* out */ Xlsformulatypes5::PXLSPtgs &APtgs, /* out */ int &APtgsSz, const bool AStrictMode, Xlsfmladebugdata5::TFmlaDebugItems* ADebug = (Xlsfmladebugdata5::TFmlaDebugItems*)(0x0));
}	/* namespace Xlsencodefmla5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSENCODEFMLA5)
using namespace Xlsencodefmla5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsencodefmla5HPP
