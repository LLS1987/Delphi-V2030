// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSTSort.pas' rev: 35.00 (Windows)

#ifndef XlstsortHPP
#define XlstsortHPP

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
#include <XLSUtils5.hpp>
#include <XLSCellMMU5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlstsort
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDepRefsItem;
class DELPHICLASS TDepRefsItems;
class DELPHICLASS TSuccessor;
class DELPHICLASS TTopoItem;
class DELPHICLASS TTopoSort;
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<Xc12utils5::TXLS3dCompactRef, 11> TDepRefArray;

typedef TDepRefArray *PDepRefArray;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDepRefsItem : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	Xc12utils5::PXLS3dCompactRef operator[](int Index) { return this->Items[Index]; }
	
private:
	Xc12utils5::PXLS3dCompactRef __fastcall GetItems(int Index);
	
protected:
	TDepRefArray *FData;
	int FCount;
	System::Word FAllocBlocks;
	
public:
	__fastcall TDepRefsItem(Xc12utils5::PXLS3dCompactRef ADep);
	__fastcall virtual ~TDepRefsItem();
	void __fastcall AddRef(Xc12utils5::PXLS3dCompactRef ADep);
	void __fastcall EndAddRefs();
	System::UnicodeString __fastcall AsText();
	__property int Count = {read=FCount, nodefault};
	__property Xc12utils5::PXLS3dCompactRef Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDepRefsItems : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TDepRefsItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TDepRefsItem* __fastcall GetItems(int Index);
	
public:
	__fastcall TDepRefsItems();
	HIDESBASE TDepRefsItem* __fastcall Add(Xc12utils5::PXLS3dCompactRef ADep)/* overload */;
	HIDESBASE void __fastcall Add(TDepRefsItem* ADep)/* overload */;
	HIDESBASE TDepRefsItem* __fastcall Last();
	System::UnicodeString __fastcall AsText();
	__property TDepRefsItem* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TDepRefsItems() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSuccessor : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TTopoItem* FSuc;
	TSuccessor* FNext;
	
public:
	__property TTopoItem* Suc = {read=FSuc, write=FSuc};
	__property TSuccessor* Next = {read=FNext, write=FNext};
public:
	/* TObject.Create */ inline __fastcall TSuccessor() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TSuccessor() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TTopoItem : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12utils5::TXLS3dCompactRef *FDep;
	TTopoItem* FLeft;
	TTopoItem* FRight;
	int FCount;
	int FBalance;
	TTopoItem* FQLink;
	TSuccessor* FTop;
	
public:
	__property Xc12utils5::PXLS3dCompactRef Dep = {read=FDep, write=FDep};
	__property TTopoItem* Left = {read=FLeft, write=FLeft};
	__property TTopoItem* Right = {read=FRight, write=FRight};
	__property int Balance = {read=FBalance, write=FBalance, nodefault};
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TTopoItem* QLink = {read=FQLink, write=FQLink};
	__property TSuccessor* Top = {read=FTop, write=FTop};
public:
	/* TObject.Create */ inline __fastcall TTopoItem() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TTopoItem() { }
	
};

#pragma pack(pop)

typedef bool __fastcall (__closure *TTSortCallback)(TTopoItem* AItem);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TTopoSort : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TTopoItem* FRoot;
	TTopoItem* FHead;
	TTopoItem* FZeros;
	TTopoItem* FLoop;
	int FNStrings;
	System::Contnrs::TObjectList* FGarbages;
	System::Classes::TList* FOutput;
	TDepRefsItems* FCircular;
	TTopoItem* __fastcall NewItem(Xc12utils5::PXLS3dCompactRef ADep);
	TTopoItem* __fastcall SearchItem(TTopoItem* ARoot, Xc12utils5::PXLS3dCompactRef ADep);
	void __fastcall RecordRelation(TTopoItem* j, TTopoItem* k);
	bool __fastcall CountItems(TTopoItem* AItem);
	bool __fastcall ScanZeros(TTopoItem* k);
	bool __fastcall DetectLoop(TTopoItem* k);
	bool __fastcall RecurseTree(TTopoItem* ARoot, TTSortCallback ACallback);
	void __fastcall WalkTree(TTopoItem* ARoot, TTSortCallback ACallback);
	bool __fastcall DoSort(System::Classes::TList* AList);
	
public:
	__fastcall TTopoSort();
	__fastcall virtual ~TTopoSort();
	System::UnicodeString __fastcall AsText();
	void __fastcall Clear();
	bool __fastcall Sort(TDepRefsItems* AList);
	__property System::Classes::TList* Output = {read=FOutput};
	__property TDepRefsItems* Circular = {read=FCircular};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
#define TOPOSORT_TEXT_LOOP L"** Loop **"
}	/* namespace Xlstsort */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSTSORT)
using namespace Xlstsort;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XlstsortHPP
