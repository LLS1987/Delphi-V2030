// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSFmlaDebugger5.pas' rev: 35.00 (Windows)

#ifndef Xlsfmladebugger5HPP
#define Xlsfmladebugger5HPP

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
#include <Xc12Utils5.hpp>
#include <Xc12Manager5.hpp>
#include <XLSUtils5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSFormulaTypes5.hpp>
#include <XLSEvaluate5.hpp>
#include <XLSEvaluateFmla5.hpp>
#include <XLSDecodeFmla5.hpp>
#include <XLSEncodeFmla5.hpp>
#include <XLSFormula5.hpp>
#include <XLSFmlaDebugData5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsfmladebugger5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFmlaDebugger;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TFmlaDebugger : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	int FSheetIndex;
	int FCol;
	int FRow;
	Xlsformulatypes5::TXLSPtgs *FPtgs;
	int FPtgsSz;
	System::Classes::TStringList* FStack;
	Xlsfmladebugdata5::TFmlaDebugItems* FItems;
	Xlsfmladebugdata5::TFmlaDebugItem* FCurrItem;
	System::UnicodeString FFormula;
	System::Classes::TStringList* FFormulas;
	System::UnicodeString FLastEval;
	int FMaxSteps;
	int FCurrSteps;
	System::UnicodeString __fastcall GetFormulaValue(const Xlsevaluate5::TXLSFormulaValue &AFV);
	void __fastcall CollectFormulas();
	void __fastcall DumpStack(Xlsevaluatefmla5::TValueStack* AStack);
	void __fastcall DumpFormulas();
	System::UnicodeString __fastcall Decode(Xlsformulatypes5::PXLSPtgs APtgs, Xlsformulatypes5::PXLSPtgs AStopPtgs, int APtgsSz);
	int __fastcall Encode(const System::UnicodeString AFormula, /* out */ Xlsformulatypes5::PXLSPtgs &APtgs);
	bool __fastcall EvaluateSteps(const int ASteps);
	
public:
	__fastcall TFmlaDebugger(Xc12manager5::TXc12Manager* const AManager, const int ASheetIndex, const int ACol, const int ARow);
	__fastcall virtual ~TFmlaDebugger();
	bool __fastcall AtFirst();
	bool __fastcall AtLast();
	void __fastcall MoveNext();
	void __fastcall MovePrev();
	void __fastcall MoveSteps(const int ASteps);
	int __fastcall StepsToPos(const int APos);
	System::UnicodeString __fastcall LastResult();
	__property System::UnicodeString Formula = {read=FFormula};
	__property System::Classes::TStringList* Formulas = {read=FFormulas};
	__property System::UnicodeString LastEval = {read=FLastEval};
	__property System::Classes::TStringList* Stack = {read=FStack};
	__property Xlsfmladebugdata5::TFmlaDebugItem* CurrItem = {read=FCurrItem};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsfmladebugger5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSFMLADEBUGGER5)
using namespace Xlsfmladebugger5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsfmladebugger5HPP
