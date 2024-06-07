// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSFmlaDebugData5.pas' rev: 35.00 (Windows)

#ifndef Xlsfmladebugdata5HPP
#define Xlsfmladebugdata5HPP

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
#include <XLSFormulaTypes5.hpp>
#include <XLSEvaluate5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsfmladebugdata5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFmlaDebugFmlaItem;
class DELPHICLASS TFmlaDebugFmlaItems;
class DELPHICLASS TFmlaDebugItem;
class DELPHICLASS TFmlaDebugItems;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TFmlaDebugFmlaItem : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FSteps;
	Xlsformulatypes5::TXLSPtgs *FPtgs;
	int FPtgsOffset;
	Xlsevaluate5::TXLSFormulaValue FResult;
	
public:
	__property int Steps = {read=FSteps, nodefault};
	__property int PtgsOffset = {read=FPtgsOffset, nodefault};
	__property Xlsevaluate5::TXLSFormulaValue Result = {read=FResult};
	__property Xlsformulatypes5::PXLSPtgs Ptgs = {read=FPtgs};
public:
	/* TObject.Create */ inline __fastcall TFmlaDebugFmlaItem() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TFmlaDebugFmlaItem() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TFmlaDebugFmlaItems : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TFmlaDebugFmlaItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TFmlaDebugFmlaItem* __fastcall GetItems(int Index);
	
public:
	__fastcall TFmlaDebugFmlaItems();
	HIDESBASE void __fastcall Add(const int ASteps, const int APtgsOffset, const Xlsformulatypes5::PXLSPtgs APtgs, const Xlsevaluate5::TXLSFormulaValue &AResult);
	__property TFmlaDebugFmlaItem* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TFmlaDebugFmlaItems() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TFmlaDebugItem : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FP1;
	int FP2;
	Xlsformulatypes5::TXLSPtgs *FPtgs;
	int FPtgsOffs;
	int FIndex;
	
public:
	__property int P1 = {read=FP1, write=FP1, nodefault};
	__property int P2 = {read=FP2, write=FP2, nodefault};
	__property Xlsformulatypes5::PXLSPtgs _Ptgs = {read=FPtgs, write=FPtgs};
	__property int PtgsOffs = {read=FPtgsOffs, write=FPtgsOffs, nodefault};
	__property int Index = {read=FIndex, write=FIndex, nodefault};
public:
	/* TObject.Create */ inline __fastcall TFmlaDebugItem() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TFmlaDebugItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TFmlaDebugItems : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TFmlaDebugItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TFmlaDebugItem* __fastcall GetItems(int Index);
	
protected:
	int FSteps;
	TFmlaDebugFmlaItems* FFmlaItems;
	Xlsformulatypes5::TXLSPtgs *FCurrPtgs;
	int FCurrPtgsOffs;
	bool FCollectFormulas;
	Xlsutils5::TIntegerStack* FTempPosStack;
	
public:
	__fastcall TFmlaDebugItems();
	__fastcall virtual ~TFmlaDebugItems();
	TFmlaDebugItem* __fastcall Find(const Xlsformulatypes5::PXLSPtgs APtgs)/* overload */;
	TFmlaDebugItem* __fastcall Find(const int APtgsOffs)/* overload */;
	HIDESBASE void __fastcall Add(const Xlsformulatypes5::PXLSPtgs APtgs, const int AP1, const int AP2);
	void __fastcall UpdatePos(const Xlsformulatypes5::PXLSPtgs APtgs, const int APos);
	void __fastcall UpdateOffs(const Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsOffs, const int AIndex);
	__property TFmlaDebugItem* Items[int Index] = {read=GetItems/*, default*/};
	__property TFmlaDebugFmlaItems* FmlaItems = {read=FFmlaItems};
	__property int Steps = {read=FSteps, write=FSteps, nodefault};
	__property Xlsformulatypes5::PXLSPtgs CurrPtgs = {read=FCurrPtgs, write=FCurrPtgs};
	__property int CurrPtgsOffs = {read=FCurrPtgsOffs, write=FCurrPtgsOffs, nodefault};
	__property bool CollectFormulas = {read=FCollectFormulas, write=FCollectFormulas, nodefault};
	__property Xlsutils5::TIntegerStack* TempPosStack = {read=FTempPosStack};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsfmladebugdata5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSFMLADEBUGDATA5)
using namespace Xlsfmladebugdata5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsfmladebugdata5HPP
