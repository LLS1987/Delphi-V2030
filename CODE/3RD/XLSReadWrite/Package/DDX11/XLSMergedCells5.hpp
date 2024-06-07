// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSMergedCells5.pas' rev: 35.00 (Windows)

#ifndef Xlsmergedcells5HPP
#define Xlsmergedcells5HPP

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
#include <Xc12Utils5.hpp>
#include <Xc12Common5.hpp>
#include <Xc12DataWorksheet5.hpp>
#include <XLSUtils5.hpp>
#include <XLSCellAreas5.hpp>
#include <XLSClassFactory5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsmergedcells5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSMergedCell;
class DELPHICLASS TXLSMergedCells;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSMergedCell : public Xc12dataworksheet5::TXc12MergedCell
{
	typedef Xc12dataworksheet5::TXc12MergedCell inherited;
	
protected:
	bool FPainted;
	
public:
	__property bool Painted = {read=FPainted, write=FPainted, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXLSMergedCell() : Xc12dataworksheet5::TXc12MergedCell() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSMergedCell() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSMergedCells : public Xc12dataworksheet5::TXc12MergedCells
{
	typedef Xc12dataworksheet5::TXc12MergedCells inherited;
	
public:
	TXLSMergedCell* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TXLSMergedCell* __fastcall GetItems(int Index);
	
protected:
	virtual Xlscellareas5::TCellArea* __fastcall CreateObject();
	
public:
	__fastcall virtual ~TXLSMergedCells();
	HIDESBASE TXLSMergedCell* __fastcall Add()/* overload */;
	HIDESBASE TXLSMergedCell* __fastcall Add(const Xc12utils5::TXLSCellArea &ARef)/* overload */;
	void __fastcall ClearPainted();
	__property TXLSMergedCell* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXc12MergedCells.Create */ inline __fastcall TXLSMergedCells(Xlsclassfactory5::TXLSClassFactory* AClassFactory) : Xc12dataworksheet5::TXc12MergedCells(AClassFactory) { }
	
	/* Hoisted overloads: */
	
public:
	inline Xlscellareas5::TCellArea* __fastcall  Add(const System::UnicodeString ARef){ return Xlscellareas5::TBaseCellAreas::Add(ARef); }
	inline Xlscellareas5::TCellArea* __fastcall  Add(const Xc12utils5::PXLSCellArea AArea){ return Xlscellareas5::TBaseCellAreas::Add(AArea); }
	inline Xlscellareas5::TCellArea* __fastcall  Add(const int C, const int R){ return Xlscellareas5::TBaseCellAreas::Add(C, R); }
	inline Xlscellareas5::TCellArea* __fastcall  Add(const int C1, const int R1, const int C2, const int R2){ return Xlscellareas5::TBaseCellAreas::Add(C1, R1, C2, R2); }
	inline void __fastcall  Add(const int C1, const int R1, const int C2, const int R2, Xlscellareas5::TBaseCellAreas* AAreas){ Xlscellareas5::TBaseCellAreas::Add(C1, R1, C2, R2, AAreas); }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsmergedcells5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSMERGEDCELLS5)
using namespace Xlsmergedcells5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsmergedcells5HPP
