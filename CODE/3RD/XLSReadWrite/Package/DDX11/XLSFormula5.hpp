// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSFormula5.pas' rev: 35.00 (Windows)

#ifndef Xlsformula5HPP
#define Xlsformula5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <BIFF_Utils5.hpp>
#include <BIFF_DecodeFormula5.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Manager5.hpp>
#include <Xc12DataTable5.hpp>
#include <XLSUtils5.hpp>
#include <XLSFormulaTypes5.hpp>
#include <XLSTokenizer5.hpp>
#include <XLSEncodeFmla5.hpp>
#include <XLSDecodeFmla5.hpp>
#include <XLSTSort.hpp>
#include <XLSEvaluate5.hpp>
#include <XLSEvaluateFmla5.hpp>
#include <XLSCalcChain5.hpp>
#include <XLSMMU5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSFmlaDebugData5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsformula5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSIteratePtgs;
class DELPHICLASS TXLSFormulaHandler;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSIteratePtgs : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xlsformulatypes5::TXLSPtgs *FPtgs;
	Xlsformulatypes5::TXLSPtgs *FCurrPtgs;
	int FPtgsSz;
	
public:
	__fastcall TXLSIteratePtgs(Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsSz);
	bool __fastcall Next();
	Xlsformulatypes5::PXLSPtgs __fastcall CurrPtgs();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSIteratePtgs() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSFormulaHandler : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall SetTables(Xc12datatable5::TXc12Tables* const Value);
	Xlsevaluatefmla5::TUserFunctionEvent __fastcall GetUserFuncEvent();
	void __fastcall SetUserFuncEvent(const Xlsevaluatefmla5::TUserFunctionEvent Value);
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	Xlstokenizer5::TXLSTokenizer* FTokenizer;
	Xlsdecodefmla5::TXLSFormulaDecoder* FDecoder;
	Xlscalcchain5::TXLSCalcChainBuilder* FCCBuilder;
	Xlsevaluatefmla5::TXLSFormulaEvaluator* FEvaluator;
	Xlscalcchain5::TXLSCalcChain* FCalcChain;
	bool FFormulasUncalced;
	Xc12datatable5::TXc12Tables* FCurrTables;
	bool __fastcall CheckAdjustSheetIndex(const int ACurrIndex, const int ASheetIndex, const int ACount, /* out */ int &ANewIndex);
	int __fastcall GetAreaErrorId(int AId);
	
public:
	__fastcall TXLSFormulaHandler(Xc12manager5::TXc12Manager* AManager);
	__fastcall virtual ~TXLSFormulaHandler();
	void __fastcall Calculate();
	void __fastcall CalculateAndVerify();
	int __fastcall EncodeFormula(const System::UnicodeString AFormula, /* out */ Xlsformulatypes5::PXLSPtgs &APtgs, const int ASheetId)/* overload */;
	int __fastcall EncodeFormula(const System::UnicodeString AFormula, /* out */ Xlsformulatypes5::PXLSPtgs &APtgs, const int ASheetId, const int ACol, const int ARow, bool AStrictMode = true)/* overload */;
	int __fastcall EncodeFormula(const System::UnicodeString AFormula, /* out */ Xlsformulatypes5::PXLSPtgs &APtgs, const int ASheetId, const int ACol, const int ARow, Xlsfmladebugdata5::TFmlaDebugItems* const ADebugItems)/* overload */;
	System::UnicodeString __fastcall DecodeFormula(Xlscellmmu5::TXLSCellMMU* ACells, const int ASheetIndex, Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsSize, const bool ASaveToFile);
	Xlsevaluate5::TXLSFormulaValue __fastcall EvaluateFormula(int ASheetIndex, int ACol, int ARow, Xlsformulatypes5::PXLSPtgs APtgs, int APtgsSize);
	System::UnicodeString __fastcall EvaluateFormulaStr(Xlscellmmu5::TXLSCellMMU* ACells, int ASheetIndex, int ACol, int ARow, Xlsformulatypes5::PXLSPtgs APtgs, int APtgsSize);
	void __fastcall AdjustCell(const Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsSize, const int ADeltaCol, const int ADeltaRow, bool ALockStartRow = false);
	void __fastcall AdjustCellRowsChanged(const Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsSize, const int ASheetIndex, const int ARow, const int ADeltaRow);
	void __fastcall AdjustCellRowsChanged1d(const Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsSize, const int ASheetIndex, const int ARow, const int ADeltaRow);
	void __fastcall AdjustCellColsChanged(const Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsSize, const int ASheetIndex, const int ACol, const int ADeltaCol);
	void __fastcall AdjustCellColsChanged1d(const Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsSize, const int ASheetIndex, const int ACol, const int ADeltaCol);
	void __fastcall AdjustSheetIndex(const Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsSize, const int ASheetIndex, const int ACount);
	bool __fastcall CollectNames(Xlsutils5::TIntegerList* ANames, const Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsSize);
	__property Xlscalcchain5::TXLSCalcChain* CalcChain = {read=FCalcChain};
	__property Xc12datatable5::TXc12Tables* CurrTables = {write=SetTables};
	__property bool FormulasUncalced = {read=FFormulasUncalced, write=FFormulasUncalced, nodefault};
	__property Xlsevaluatefmla5::TUserFunctionEvent OnUserFunction = {read=GetUserFuncEvent, write=SetUserFuncEvent};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int __fastcall NameEncodeFormula(Xc12manager5::TXc12Manager* const AManager, const System::UnicodeString AFormula, /* out */ Xlsformulatypes5::PXLSPtgs &APtgs, const int ASheetId);
}	/* namespace Xlsformula5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSFORMULA5)
using namespace Xlsformula5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsformula5HPP
