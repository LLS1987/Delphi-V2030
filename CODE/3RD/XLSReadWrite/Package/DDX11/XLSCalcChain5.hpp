// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSCalcChain5.pas' rev: 35.00 (Windows)

#ifndef Xlscalcchain5HPP
#define Xlscalcchain5HPP

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
#include <BIFF_Utils5.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Manager5.hpp>
#include <Xc12DataWorkbook5.hpp>
#include <XLSUtils5.hpp>
#include <XLSFormulaTypes5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSTSort.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlscalcchain5
{
//-- forward type declarations -----------------------------------------------
struct TCCFormulaData;
class DELPHICLASS TCircPtgsItem;
class DELPHICLASS TCircPtgsStack;
class DELPHICLASS TXLSCalcChain;
class DELPHICLASS TXLSCalcChainBuilder;
//-- type declarations -------------------------------------------------------
typedef TCCFormulaData *PCCFormulaData;

struct DECLSPEC_DRECORD TCCFormulaData
{
public:
	Xc12utils5::TXLS3dCompactRef Ref;
	Xlsformulatypes5::TXLSPtgs *Ptgs;
	int PtgsSize;
};


typedef System::StaticArray<TCCFormulaData, 11> TCCFormulaDataArray;

typedef TCCFormulaDataArray *PCCFormulaDataArray;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCircPtgsItem : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<Xlsformulatypes5::PXLSPtgs> _TCircPtgsItem__1;
	
	
public:
	Xlsformulatypes5::PXLSPtgs operator[](int Index) { return this->Items[Index]; }
	
private:
	Xlsformulatypes5::PXLSPtgs __fastcall GetItems(int Index);
	
protected:
	_TCircPtgsItem__1 FPtgs;
	
public:
	void __fastcall Add(Xlsformulatypes5::PXLSPtgs APtgs)/* overload */;
	void __fastcall Add(TCircPtgsItem* AItem)/* overload */;
	int __fastcall Count();
	__property Xlsformulatypes5::PXLSPtgs Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TObject.Create */ inline __fastcall TCircPtgsItem() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCircPtgsItem() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCircPtgsStack : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TCircPtgsItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCircPtgsItem* __fastcall GetItems(int Index);
	void __fastcall SetItems(int Index, TCircPtgsItem* const Value);
	
protected:
	System::Classes::TNotifyEvent FFoundIgnoreCircularEvent;
	
public:
	__fastcall TCircPtgsStack();
	void __fastcall PushIgnore();
	void __fastcall OpIgnore();
	void __fastcall FuncIgnore(const int AArgCount);
	void __fastcall ArrayIgnore(const int ACols, const int ARows);
	void __fastcall Push(Xlsformulatypes5::PXLSPtgs APtgs);
	void __fastcall Op();
	void __fastcall Func(const int AFuncId, const int AArgCount);
	__property System::Classes::TNotifyEvent OnFoundIgnoreCircular = {read=FFoundIgnoreCircularEvent, write=FFoundIgnoreCircularEvent};
	__property TCircPtgsItem* Items[int Index] = {read=GetItems, write=SetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCircPtgsStack() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCalcChain : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	Xc12utils5::PXLS3dCompactRef operator[](int Index) { return this->Itens[Index]; }
	
private:
	Xc12utils5::PXLS3dCompactRef __fastcall GetItems(int Index);
	
protected:
	Xlstsort::TDepRefArray *FItems;
	int FCount;
	int FAllocSize;
	
public:
	__fastcall virtual ~TXLSCalcChain();
	void __fastcall Clear();
	int __fastcall Count();
	void __fastcall Add(Xc12utils5::PXLS3dCompactRef ARef);
	void __fastcall Append(TXLSCalcChain* ACalcChain);
	void __fastcall Done();
	__property Xc12utils5::PXLS3dCompactRef Itens[int Index] = {read=GetItems/*, default*/};
public:
	/* TObject.Create */ inline __fastcall TXLSCalcChain() : System::TObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCalcChainBuilder : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<Xlsformulatypes5::PXLSPtgs> _TXLSCalcChainBuilder__1;
	
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	int FAllocSize;
	int FFormulaCnt;
	TCCFormulaDataArray *FFormulas;
	_TXLSCalcChainBuilder__1 FPtgsList;
	int FPtgsCount;
	Xlstsort::TDepRefsItems* FDepList;
	TXLSCalcChain* FCalcChain;
	bool FHasIgnoreCircularFunc;
	int __fastcall FindFormula(int ASheetId, int ACol, int ARow);
	int __fastcall FindFormulaClosest(int ASheetId, int ACol, int ARow);
	void __fastcall AddDependencies(Xlstsort::TDepRefsItem* ADep, const int ASheetId, const int ACol, const int ARow)/* overload */;
	void __fastcall AddDependencies(Xlstsort::TDepRefsItem* ADep, const int ASheetId, const int ACol1, const int ARow1, const int ACol2, const int ARow2)/* overload */;
	void __fastcall AddDependencies(Xlstsort::TDepRefsItem* ADep, const int ASheetId, Xlsformulatypes5::PXLSPtgsRef APtgsRef)/* overload */;
	void __fastcall AddDependencies(Xlstsort::TDepRefsItem* ADep, const int ASheetId, Xlsformulatypes5::PXLSPtgsArea APtgsArea)/* overload */;
	void __fastcall AddDependencies(Xlstsort::TDepRefsItem* ADep, Xlsformulatypes5::PXLSPtgsRef3d APtgsRef3d)/* overload */;
	void __fastcall AddDependencies(Xlstsort::TDepRefsItem* ADep, Xlsformulatypes5::PXLSPtgsArea3d APtgsArea3d)/* overload */;
	void __fastcall AddDependencies(Xlstsort::TDepRefsItem* ADep, const int ASheetId, Xlsformulatypes5::PXLSPtgsRef97 APtgsRef)/* overload */;
	void __fastcall AddDependencies(Xlstsort::TDepRefsItem* ADep, const int ASheetId, Xlsformulatypes5::PXLSPtgsArea97 APtgsArea)/* overload */;
	void __fastcall AddDependencies(Xlstsort::TDepRefsItem* ADep, Xlsformulatypes5::PXLSPtgsRef3d97 APtgsRef3d)/* overload */;
	void __fastcall AddDependencies(Xlstsort::TDepRefsItem* ADep, Xlsformulatypes5::PXLSPtgsArea3d97 APtgsArea3d)/* overload */;
	void __fastcall IgnoreCircular(System::TObject* ASender);
	Xlstsort::TDepRefsItem* __fastcall CheckFormulaContent(PCCFormulaData AData);
	void __fastcall CollectFormulaPtgs(Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsSz);
	void __fastcall RemoveRefsWhereCircularIsOk();
	void __fastcall CheckFormulaRefs(Xlstsort::TDepRefsItem* ADep, Xc12utils5::PXLS3dCompactRef ADepRef);
	void __fastcall CollectFormulas(int ASheetId, Xlscellmmu5::TXLSCellMMU* ACells);
	
public:
	__fastcall TXLSCalcChainBuilder(Xc12manager5::TXc12Manager* AManager);
	__fastcall virtual ~TXLSCalcChainBuilder();
	System::UnicodeString __fastcall DepListAsText();
	void __fastcall Clear();
	bool __fastcall Build(TXLSCalcChain* ACalcChain);
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlscalcchain5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSCALCCHAIN5)
using namespace Xlscalcchain5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlscalcchain5HPP
