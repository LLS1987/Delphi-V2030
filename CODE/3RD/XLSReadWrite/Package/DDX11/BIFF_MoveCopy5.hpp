// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_MoveCopy5.pas' rev: 35.00 (Windows)

#ifndef Biff_movecopy5HPP
#define Biff_movecopy5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_movecopy5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCollectionItemMoveCopy;
class DELPHICLASS TCollectionMoveCopy;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TCollectionItemMoveCopy : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
protected:
	virtual bool __fastcall Intersect(int Col1, int Row1, int Col2, int Row2) = 0 ;
	virtual void __fastcall Copy(int Col1, int Row1, int Col2, int Row2, int DeltaCol, int DeltaRow) = 0 ;
	virtual void __fastcall Delete(int Col1, int Row1, int Col2, int Row2) = 0 ;
	virtual void __fastcall Include(int Col1, int Row1, int Col2, int Row2) = 0 ;
	virtual void __fastcall Move(int DeltaCol, int DeltaRow) = 0 /* overload */;
	virtual void __fastcall Move(int Col1, int Row1, int Col2, int Row2, int DeltaCol, int DeltaRow) = 0 /* overload */;
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TCollectionItemMoveCopy(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TCollectionItemMoveCopy() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCollectionMoveCopy : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TCollectionItemMoveCopy* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCollectionItemMoveCopy* __fastcall GetItems(int Index);
	
public:
	void __fastcall MoveLocal(int Col1, int Row1, int Col2, int Row2, int DestCol, int DestRow);
	void __fastcall DeleteLocal(int Col1, int Row1, int Col2, int Row2);
	void __fastcall CopyLocal(int Col1, int Row1, int Col2, int Row2, int DestCol, int DestRow);
	void __fastcall CopyList(System::Classes::TList* List, int Col1, int Row1, int Col2, int Row2);
	void __fastcall InsertList(System::Classes::TList* List, int Col1, int Row1, int Col2, int Row2, int DestCol, int DestRow);
	void __fastcall DeleteList(System::Classes::TList* List, int Col1, int Row1, int Col2, int Row2);
	__property TCollectionItemMoveCopy* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TCollection.Create */ inline __fastcall TCollectionMoveCopy(System::Classes::TCollectionItemClass ItemClass) : System::Classes::TCollection(ItemClass) { }
	/* TCollection.Destroy */ inline __fastcall virtual ~TCollectionMoveCopy() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Biff_movecopy5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_MOVECOPY5)
using namespace Biff_movecopy5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_movecopy5HPP
