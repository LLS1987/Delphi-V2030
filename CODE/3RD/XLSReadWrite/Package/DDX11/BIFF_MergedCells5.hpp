// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_MergedCells5.pas' rev: 35.00 (Windows)

#ifndef Biff_mergedcells5HPP
#define Biff_mergedcells5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_Utils5.hpp>
#include <BIFF_CellAreas5.hpp>
#include <XLSUtils5.hpp>
#include <System.Contnrs.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_mergedcells5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMergedCell;
class DELPHICLASS TMergedCells;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TMergedCell : public Biff_cellareas5::TCellArea97
{
	typedef Biff_cellareas5::TCellArea97 inherited;
	
public:
	/* TObject.Create */ inline __fastcall TMergedCell() : Biff_cellareas5::TCellArea97() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TMergedCell() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TMergedCells : public Biff_cellareas5::TSolidCellAreas97
{
	typedef Biff_cellareas5::TSolidCellAreas97 inherited;
	
public:
	void __fastcall CopyList(System::Classes::TList* List, int Col1, int Row1, int Col2, int Row2);
	void __fastcall InsertList(System::Classes::TList* List, int Col1, int Row1, int Col2, int Row2, int DestCol, int DestRow);
	void __fastcall _DeleteList(System::Classes::TList* List, int Col1, int Row1, int Col2, int Row2);
	virtual void __fastcall Copy(System::Word Col1, System::Word Row1, System::Word Col2, System::Word Row2, int DeltaCol, int DeltaRow);
public:
	/* TBaseCellAreas97.Create */ inline __fastcall TMergedCells() : Biff_cellareas5::TSolidCellAreas97() { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TMergedCells() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Biff_mergedcells5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_MERGEDCELLS5)
using namespace Biff_mergedcells5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_mergedcells5HPP
