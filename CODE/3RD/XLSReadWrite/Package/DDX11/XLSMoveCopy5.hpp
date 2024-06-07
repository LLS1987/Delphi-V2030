// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSMoveCopy5.pas' rev: 35.00 (Windows)

#ifndef Xlsmovecopy5HPP
#define Xlsmovecopy5HPP

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
#include <Xc12Common5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsmovecopy5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSMoveCopyItem;
class DELPHICLASS TXLSMoveCopyList;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSMoveCopyItem : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	virtual bool __fastcall Intersect(int Col1, int Row1, int Col2, int Row2) = 0 ;
	virtual void __fastcall Copy(int Col1, int Row1, int Col2, int Row2, int DeltaCol, int DeltaRow) = 0 ;
	virtual void __fastcall Delete(int Col1, int Row1, int Col2, int Row2) = 0 ;
	virtual void __fastcall Include(int Col1, int Row1, int Col2, int Row2) = 0 ;
	virtual void __fastcall Move(int DeltaCol, int DeltaRow) = 0 /* overload */;
	virtual void __fastcall Move(int Col1, int Row1, int Col2, int Row2, int DeltaCol, int DeltaRow) = 0 /* overload */;
	
public:
	virtual void __fastcall Assign(TXLSMoveCopyItem* ASource);
public:
	/* TObject.Create */ inline __fastcall TXLSMoveCopyItem() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSMoveCopyItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSMoveCopyList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSMoveCopyItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSMoveCopyItem* __fastcall GetItems(int Index);
	
public:
	HIDESBASE virtual TXLSMoveCopyItem* __fastcall Add() = 0 /* overload */;
	void __fastcall MoveLocal(int Col1, int Row1, int Col2, int Row2, int DeltaCol, int DeltaRow);
	void __fastcall DeleteLocal(int Col1, int Row1, int Col2, int Row2);
	void __fastcall CopyLocal(int Col1, int Row1, int Col2, int Row2, int DestCol, int DestRow);
	void __fastcall CopyList(System::Classes::TList* List, int Col1, int Row1, int Col2, int Row2);
	void __fastcall InsertList(System::Classes::TList* List, int Col1, int Row1, int Col2, int Row2, int DestCol, int DestRow);
	void __fastcall DeleteList(System::Classes::TList* List, int Col1, int Row1, int Col2, int Row2);
	__property TXLSMoveCopyItem* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TObjectList.Create */ inline __fastcall TXLSMoveCopyList()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TXLSMoveCopyList(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXLSMoveCopyList() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsmovecopy5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSMOVECOPY5)
using namespace Xlsmovecopy5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsmovecopy5HPP
