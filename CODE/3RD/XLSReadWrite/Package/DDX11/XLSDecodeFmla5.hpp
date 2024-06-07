// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSDecodeFmla5.pas' rev: 35.00 (Windows)

#ifndef Xlsdecodefmla5HPP
#define Xlsdecodefmla5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.IniFiles.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Manager5.hpp>
#include <Xc12DataTable5.hpp>
#include <XLSUtils5.hpp>
#include <XLSFormulaTypes5.hpp>
#include <XLSCellMMU5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsdecodefmla5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TStringStack;
class DELPHICLASS TXLSFormulaDecoder;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TStringStack : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::StaticArray<System::UnicodeString, 256> _TStringStack__1;
	
	
protected:
	_TStringStack__1 FStack;
	int FStackPtr;
	Xc12manager5::TXc12Manager* FManager;
	
public:
	__fastcall TStringStack(Xc12manager5::TXc12Manager* AManager);
	void __fastcall Clear();
	int __fastcall Count();
	void __fastcall Push(System::UnicodeString AValue);
	void __fastcall Op(System::UnicodeString AOperator);
	void __fastcall Surround(System::UnicodeString ALeft, System::UnicodeString ARight);
	void __fastcall Func(System::UnicodeString AName, int AArgCount);
	void __fastcall Table(System::UnicodeString AName, int AArgCount);
	void __fastcall Array_(int ACols, int ARows);
	void __fastcall UnaryLeft(System::UnicodeString AOperator);
	void __fastcall UnaryRight(System::UnicodeString AOperator);
	System::UnicodeString __fastcall Pop();
	System::UnicodeString __fastcall Peek();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TStringStack() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSFormulaDecoder : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	Xc12datatable5::TXc12Tables* FCurrTables;
	int FSheetIndex;
	TStringStack* FStack;
	System::UnicodeString __fastcall CheckNameChars(const System::UnicodeString AName);
	
public:
	__fastcall TXLSFormulaDecoder(Xc12manager5::TXc12Manager* AManager);
	__fastcall virtual ~TXLSFormulaDecoder();
	System::UnicodeString __fastcall Decode(Xlscellmmu5::TXLSCellMMU* ACells, const int ASheetIndex, Xlsformulatypes5::PXLSPtgs APtgs, Xlsformulatypes5::PXLSPtgs AStopPtgs, const int APtgsSize, const bool ASaveToFile);
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::UnicodeString __fastcall XLSDecodeFormula(Xc12manager5::TXc12Manager* AManager, Xlscellmmu5::TXLSCellMMU* ACells, const int ASheetIndex, Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsSize);
}	/* namespace Xlsdecodefmla5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSDECODEFMLA5)
using namespace Xlsdecodefmla5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsdecodefmla5HPP
