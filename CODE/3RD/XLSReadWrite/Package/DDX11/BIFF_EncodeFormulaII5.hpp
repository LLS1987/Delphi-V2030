// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_EncodeFormulaII5.pas' rev: 35.00 (Windows)

#ifndef Biff_encodeformulaii5HPP
#define Biff_encodeformulaii5HPP

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
#include <BIFF_RecsII5.hpp>
#include <BIFF_Utils5.hpp>
#include <BIFF_ExcelFuncII5.hpp>
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>
#include <XLSFormulaTypes5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_encodeformulaii5
{
//-- forward type declarations -----------------------------------------------
struct TXLSBIFFToken;
class DELPHICLASS TXLSTokenizer;
class DELPHICLASS TEncodeFormula;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TUnknownNameEvent)(System::UnicodeString Name, int &ID);

typedef void __fastcall (__closure *TUnknownExternNameEvent)(System::UnicodeString Path, System::UnicodeString Filename, System::UnicodeString SheetName, System::UnicodeString Name, bool IsRef, int &ExtIndex, int &NameIndex);

typedef void __fastcall (__closure *TTokenErrorEvent)(int ErrorId, System::UnicodeString ErrorStr);

enum DECLSPEC_DENUM TTokenType : unsigned char { ttNone, ttAdd, ttConcat, ttSub, ttMul, ttDiv, ttPercent, ttPower, ttGT, ttGE, ttLT, ttLE, ttEQ, ttNE, ttParenL, ttParenR, ttSpace, ttListSep, ttVectL, ttVectR, ttFunc, ttRef, ttArea, ttRef3d, ttArea3d, ttRefX, ttAreaX, ttNumber, ttString, ttPath, ttFile, ttName, ttNameX, ttSheetName, ttSheetNameX, ttError };

typedef System::StaticArray<System::UnicodeString, 36> Biff_encodeformulaii5__1;

typedef TXLSBIFFToken *PXLSBIFFToken;

struct DECLSPEC_DRECORD TXLSBIFFToken
{
public:
	System::UnicodeString Token;
	TTokenType TokenType;
};


class PASCALIMPLEMENTATION TXLSTokenizer : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	PXLSBIFFToken operator[](int Index) { return this->Items[Index]; }
	
private:
	System::UnicodeString FValue;
	System::UnicodeString FOrigValue;
	int FLen;
	bool FError;
	TTokenErrorEvent FTokenErrorEvent;
	Biff_recsii5::TFormulaVersion FFormulaVersion;
	PXLSBIFFToken __fastcall GetItems(int Index);
	int __fastcall DoName(int i);
	int __fastcall DoQuotedName(int i);
	int __fastcall IsRef(int i);
	int __fastcall AddOp(System::UnicodeString Op, TTokenType TType);
	int __fastcall DoString(int i);
	int __fastcall DoFilename(int i);
	int __fastcall DoNumber(int i);
	int __fastcall DoError(int i);
	void __fastcall ChangeLast(TTokenType TType);
	TTokenType __fastcall GetLast();
	TTokenType __fastcall GetLast2();
	System::UnicodeString __fastcall GetName(int Index);
	
public:
	void __fastcall Tokenize(System::UnicodeString Value);
	HIDESBASE void __fastcall Add(System::UnicodeString Token, TTokenType TType);
	virtual void __fastcall Clear();
	TTokenType __fastcall NextToken(int Index);
	__property PXLSBIFFToken Items[int Index] = {read=GetItems/*, default*/};
	__property System::UnicodeString Name[int Index] = {read=GetName};
	__property bool LastError = {read=FError, nodefault};
	__property System::UnicodeString Value = {read=FOrigValue};
	__property Biff_recsii5::TFormulaVersion FormulaVersion = {write=FFormulaVersion, nodefault};
	__property TTokenErrorEvent OnTokenError = {read=FTokenErrorEvent, write=FTokenErrorEvent};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXLSTokenizer() { }
	
public:
	/* TObject.Create */ inline __fastcall TXLSTokenizer() : System::Classes::TList() { }
	
};


class PASCALIMPLEMENTATION TEncodeFormula : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TXLSTokenizer* FTokenizer;
	Xc12utils5::TExcelVersion FExcelVersion;
	System::UnicodeString FStrTRUE;
	System::UnicodeString FStrFALSE;
	System::Sysutils::TByteArray *FBuffer;
	int FBufSize;
	int FCurrBufSize;
	int FLastSheetIndex;
	System::Byte FFuncArgClass;
	int FLastPtgPos;
	System::Contnrs::TStack* FWSStack;
	Biff_recsii5::TFormulaVersion FFormulaVersion;
	TUnknownNameEvent FUnknownFuncEvent;
	TUnknownNameEvent FUnknownNameEvent;
	TUnknownExternNameEvent FExternNameEvent;
	Biff_utils5::TFormulaErrorEvent FFormulaErrorEvent;
	void __fastcall AddPtg(System::Byte Ptg)/* overload */;
	void __fastcall AddPtg(System::Byte Ptg, const void *Data, int Size)/* overload */;
	void __fastcall AddBuf(const void *Data, int Size);
	void __fastcall AddWS();
	void __fastcall AddConstant(int i1);
	void __fastcall AddVectorConst(int i1);
	bool __fastcall AddCellRef(int i1);
	bool __fastcall Add3dCellRef(int i1);
	bool __fastcall AddBoolConst(int i1);
	bool __fastcall AddFunction(int &Index);
	bool __fastcall AddVariable(int i1);
	System::Byte __fastcall TokenToPtg(TTokenType Token);
	int __fastcall GetFuncId(System::UnicodeString S);
	void __fastcall ValueError(int Id, System::UnicodeString S);
	int __fastcall GetNextFuncArg(int Index);
	void __fastcall AddValue(int &Index);
	void __fastcall CheckWS(int &Index);
	void __fastcall Expression(int &Index, System::Byte FuncArgClass);
	void __fastcall DoOpCompare(int &Index);
	void __fastcall DoOpConcat(int &Index);
	void __fastcall DoOpAddSub(int &Index);
	void __fastcall DoOpMulDiv(int &Index);
	void __fastcall DoOpExp(int &Index);
	void __fastcall DoOpPercent(int &Index);
	void __fastcall DoOpUnary(int &Index);
	void __fastcall DoValue(int &Index);
	
public:
	__fastcall TEncodeFormula();
	__fastcall virtual ~TEncodeFormula();
	int __fastcall Encode(System::UnicodeString Formula, System::Byte ReturnClass, System::Sysutils::PByteArray &Buf, int BufSz, Biff_recsii5::TFormulaVersion FmlaVersion);
	__property Xc12utils5::TExcelVersion ExcelVersion = {read=FExcelVersion, write=FExcelVersion, nodefault};
	__property int LastSheetIndex = {read=FLastSheetIndex, nodefault};
	__property TUnknownNameEvent OnUnknownFunction = {read=FUnknownFuncEvent, write=FUnknownFuncEvent};
	__property TUnknownNameEvent _OnUnknownName = {read=FUnknownNameEvent, write=FUnknownNameEvent};
	__property TUnknownExternNameEvent OnExternName = {read=FExternNameEvent, write=FExternNameEvent};
	__property Biff_utils5::TFormulaErrorEvent OnFormulaError = {read=FFormulaErrorEvent, write=FFormulaErrorEvent};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Biff_encodeformulaii5__1 TTokenName;
}	/* namespace Biff_encodeformulaii5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_ENCODEFORMULAII5)
using namespace Biff_encodeformulaii5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_encodeformulaii5HPP
