// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSTokenizer5.pas' rev: 35.00 (Windows)

#ifndef Xlstokenizer5HPP
#define Xlstokenizer5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <xpgPUtils.hpp>
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlstokenizer5
{
//-- forward type declarations -----------------------------------------------
struct TXLSTokenPos;
struct TXLSToken;
class DELPHICLASS TXLSTokenList;
class DELPHICLASS TXLSTokenizer;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXLSTokenValType : unsigned char { xtvtNone, xtvtInteger, xtvtFloat, xtvtChar, xtvtString, xtvtIdetifier, xtvtTokenList };

enum DECLSPEC_DENUM TXLSTokenType : unsigned char { xttNone, xttWhitespace, xttComma, xttColon, xttSemicolon, xttSpaceOp, xttExclamation, xttLPar, xttRPar, xttLSqBracket, xttRSqBracket, xttAphostrophe, xttSpace, xttConstErrNull, xttConstErrDiv0, xttConstErrValue, xttConstErrRef, xttConstErrName, xttConstErrNum, xttConstErrNA, xttConstErrGettingData, xttConstLogicalTrue, xttConstLogicalFalse, xttConstString, xttConstArrayBegin, xttConstArrayEnd, xttConstNumber, xttOpHat, xttOpMult, xttOpDiv, xttOpPlus, xttOpMinus, xttOpUMinus, xttOpUPlus, xttOpAmp, xttOpEqual, xttOpNotEqual, xttOpLess, xttOpLessEqual, xttOpGreater, xttOpGreaterEqual, xttOpPercent, xttOpRange, xttOpISect, xttRelCol, xttAbsCol, xttRelRow, xttAbsRow, xttR1C1RelCol, xttR1C1AbsCol, xttR1C1RelRow, 
	xttR1C1AbsRow, xttName, xttFuncName, xttSheetName, xttWorkbookName, xttTable, xttTableCol, xttTableSpecial };

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSTokenPos
{
public:
	System::Word P1;
	System::Word P2;
};
#pragma pack(pop)


typedef TXLSToken *PXLSToken;

struct DECLSPEC_DRECORD TXLSToken
{
public:
	TXLSTokenPos Pos;
	TXLSTokenType TokenType;
	
public:
	TXLSTokenValType ValueType;
	union
	{
		struct 
		{
			System::Sysutils::TWordArray *vPStr;
		};
		struct 
		{
			System::WideChar vChar;
		};
		struct 
		{
			double vFloat;
		};
		struct 
		{
			int vInteger;
		};
		
	};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSTokenList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	PXLSToken operator[](const int Index) { return this->Items[Index]; }
	
private:
	PXLSToken __fastcall GetItems(const int Index);
	System::WideChar __fastcall GetAsChar(const int Index);
	double __fastcall GetAsFloat(const int Index);
	int __fastcall GetAsInteger(const int Index);
	System::UnicodeString __fastcall GetAsString(const int Index);
	
protected:
	virtual void __fastcall Notify(void * Ptr, System::Classes::TListNotification Action);
	void __fastcall AddStringVal(const System::UnicodeString AValue, const TXLSTokenType AToken, const TXLSTokenPos APos);
	
public:
	HIDESBASE void __fastcall Add(const TXLSTokenType AValue, const int APos)/* overload */;
	HIDESBASE void __fastcall Add(const TXLSTokenType AValue, const TXLSTokenPos APos)/* overload */;
	void __fastcall AddUnknown(const System::WideChar AValue);
	void __fastcall AddConstError(const Xc12utils5::TXc12CellError AValue, const TXLSTokenPos APos);
	void __fastcall AddConstLogical(const bool AValue, const TXLSTokenPos APos);
	void __fastcall AddConstNumber(const double AValue, const TXLSTokenPos APos);
	void __fastcall AddConstString(const System::UnicodeString AValue, const TXLSTokenPos APos);
	void __fastcall AddSpace(const int ACount, const bool AIsWhitespace);
	void __fastcall AddCol(const int ACol, const bool AAbsolute, const TXLSTokenPos APos);
	void __fastcall AddRow(const int ARow, const bool AAbsolute, const TXLSTokenPos APos);
	void __fastcall AddR1C1Col(const int ACol, const bool AAbsolute);
	void __fastcall AddR1C1Row(const int ARow, const bool AAbsolute);
	void __fastcall AddName(const System::UnicodeString AValue, const TXLSTokenPos APos);
	void __fastcall AddTableCol(const System::UnicodeString AValue, const TXLSTokenPos APos);
	void __fastcall AddTableSpecial(const System::UnicodeString AValue, const TXLSTokenPos APos);
	void __fastcall AddTableEnd();
	void __fastcall AddSheetName(const System::UnicodeString AValue, const TXLSTokenPos APos);
	void __fastcall AddWorkbookName(const System::UnicodeString AValue, const TXLSTokenPos APos);
	HIDESBASE PXLSToken __fastcall Last();
	TXLSTokenType __fastcall LastTokenType();
	TXLSTokenType __fastcall NextTokenType(int AIndex);
	void __fastcall Dump(System::Classes::TStrings* AList);
	__property int AsInteger[const int Index] = {read=GetAsInteger};
	__property double AsFloat[const int Index] = {read=GetAsFloat};
	__property System::WideChar AsChar[const int Index] = {read=GetAsChar};
	__property System::UnicodeString AsString[const int Index] = {read=GetAsString};
	__property PXLSToken Items[const int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXLSTokenList() { }
	
public:
	/* TObject.Create */ inline __fastcall TXLSTokenList() : System::Classes::TList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSTokenizer : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall SetFormula(const System::UnicodeString Value);
	void __fastcall SetStrictMode(const bool Value);
	
protected:
	Xlsutils5::TXLSErrorManager* FErrors;
	bool FR1C1Mode;
	System::UnicodeString FFormula;
	int FIndex;
	TXLSTokenList* FTokenList;
	bool FStrictMode;
	System::WideChar FDecimalSep;
	System::WideChar FListSep;
	System::WideChar __fastcall CurrChar();
	System::UnicodeString __fastcall CurrChars(const int ACount);
	System::WideChar __fastcall NextChar();
	System::UnicodeString __fastcall NextChars(const int AOffset, const int ACount);
	bool __fastcall NextCharsIs(const System::UnicodeString AText);
	System::UnicodeString __fastcall PrevChars(const int ACount);
	System::UnicodeString __fastcall SkipUntilNot(System::UnicodeString AOkChars);
	int __fastcall DropAnchor();
	void __fastcall GotoAnchor(int AAnchor);
	System::UnicodeString __fastcall AnchorLink(int AAnchor);
	TXLSTokenPos __fastcall AnchorPos(int AAnchor);
	void __fastcall Eat(const int ACount = 0x1);
	void __fastcall EatWhitespaces();
	bool __fastcall EatAndSaveChar(System::WideChar AChar, TXLSTokenType AToken);
	bool __fastcall IsEOF();
	void __fastcall DeleteChar();
	double __fastcall Xc12StrToFloat(System::UnicodeString AValue);
	System::UnicodeString __fastcall RemoveDoubleQuotes(System::UnicodeString AValue);
	bool __fastcall IsOperatorChar();
	bool __fastcall IsA1Column(/* out */ int &ACol);
	bool __fastcall IsA1Row(/* out */ int &ARow);
	bool __fastcall IsNameChar(System::WideChar AChar);
	bool __fastcall IsFuncName(System::UnicodeString AName);
	bool __fastcall TryChar(System::WideChar AChar);
	bool __fastcall TrySpace();
	bool __fastcall TryStringChars();
	bool __fastcall TryComma();
	bool __fastcall TryListSep();
	bool __fastcall TryColon();
	bool __fastcall TrySemicolon();
	bool __fastcall TrySpaceOp();
	bool __fastcall TryConstantListRow();
	bool __fastcall TryConstantListRows();
	bool __fastcall TryFractionalPart();
	bool __fastcall TrySign();
	bool __fastcall TryExponentPart();
	bool __fastcall TryFullStop();
	bool __fastcall TryDecimalSep();
	bool __fastcall TryDecimalDigit();
	bool __fastcall TryDigitSequence();
	bool __fastcall TryWholePartNumber();
	bool __fastcall TryErrorConstant();
	bool __fastcall TryLogicalConstant();
	bool __fastcall TryNumericConstant();
	bool __fastcall TryStringConstant();
	bool __fastcall TryArrayConstant();
	bool __fastcall TryConstant();
	bool __fastcall TryInfixOperator();
	bool __fastcall TryPostfixOperator();
	bool __fastcall TryPrefixOperator();
	bool __fastcall TryLetter();
	bool __fastcall TryNameStartCharacter();
	bool __fastcall TryNameCharacters();
	bool __fastcall TryTableColNameCharacters();
	bool __fastcall TryTableColStartNameCharacter();
	bool __fastcall TryName();
	bool __fastcall TrySheetNameCharacter();
	bool __fastcall TrySheetNameCharacters();
	bool __fastcall TryBookNameCharacter();
	bool __fastcall TryBookNameCharacters();
	bool __fastcall TryWorkbookName();
	bool __fastcall TrySheetName(const System::UnicodeString APending, const TXLSTokenPos APendingPos);
	bool __fastcall TryWorkSheetPrefixSpecial();
	bool __fastcall TryA1Reference();
	bool __fastcall TryRRReference();
	bool __fastcall TryR1C1Reference();
	bool __fastcall TryWorkSheetPrefix();
	bool __fastcall TryCellReference();
	bool __fastcall TryTable();
	bool __fastcall TryTableParts();
	bool __fastcall TryTableCol();
	bool __fastcall TryFunctionName();
	bool __fastcall TryFormula();
	bool __fastcall TryExpression();
	void __fastcall DoToken();
	void __fastcall Postcheck();
	
public:
	__fastcall TXLSTokenizer(Xlsutils5::TXLSErrorManager* AErrors);
	__fastcall virtual ~TXLSTokenizer();
	TXLSTokenList* __fastcall Parse();
	__property bool R1C1Mode = {read=FR1C1Mode, write=FR1C1Mode, nodefault};
	__property System::UnicodeString Formula = {read=FFormula, write=SetFormula};
	__property bool StrictMode = {read=FStrictMode, write=SetStrictMode, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
#define TXLSTokenTypeOperator (System::Set<TXLSTokenType, TXLSTokenType::xttNone, TXLSTokenType::xttTableSpecial>() << TXLSTokenType::xttOpHat << TXLSTokenType::xttOpMult << TXLSTokenType::xttOpDiv << TXLSTokenType::xttOpPlus << TXLSTokenType::xttOpMinus << TXLSTokenType::xttOpUMinus << TXLSTokenType::xttOpUPlus << TXLSTokenType::xttOpAmp << TXLSTokenType::xttOpEqual << TXLSTokenType::xttOpNotEqual << TXLSTokenType::xttOpLess << TXLSTokenType::xttOpLessEqual << TXLSTokenType::xttOpGreater << TXLSTokenType::xttOpGreaterEqual << TXLSTokenType::xttOpPercent << TXLSTokenType::xttOpRange )
extern DELPHI_PACKAGE System::UnicodeString __fastcall TokenAsString(PXLSToken AToken);
}	/* namespace Xlstokenizer5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSTOKENIZER5)
using namespace Xlstokenizer5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlstokenizer5HPP
