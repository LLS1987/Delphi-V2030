// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSMMU5.pas' rev: 35.00 (Windows)

#ifndef Xlsmmu5HPP
#define Xlsmmu5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsmmu5
{
//-- forward type declarations -----------------------------------------------
struct TXVectHeader;
struct TXLSMMUBlock;
class DELPHICLASS TXLSMMURebuildVector;
class DELPHICLASS TXLSMMUVectorIterator;
class DELPHICLASS TXLSMMUVectorManager;
class DELPHICLASS TXLSMMUBlockManager;
//-- type declarations -------------------------------------------------------
typedef System::Byte *TMMUPtr;

typedef bool __fastcall (__closure *TMMUPtrEvent)(TMMUPtr APtr);

typedef TXVectHeader *PXVectHeader;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXVectHeader
{
public:
	System::Word ItemCount;
	unsigned OffsetToLastEq;
};
#pragma pack(pop)


typedef TXLSMMUBlock *PXLSMMUBlock;

struct DECLSPEC_DRECORD TXLSMMUBlock
{
public:
	int MemSize;
	System::Byte *Memory;
	System::StaticArray<int, 256> VectorsOffs;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSMMURebuildVector : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::Byte *FMem;
	int FMemSize;
	int FAllocSize;
	int FWrittenMem;
	System::StaticArray<int, 16386> FItems;
	int FItemCount;
	void __fastcall AddItem(const int AOffset);
	TMMUPtr __fastcall AddMem(const int ASize);
	TMMUPtr __fastcall Add(const TMMUPtr APtr);
	TMMUPtr __fastcall Address(const int AIndex);
	
public:
	__fastcall TXLSMMURebuildVector(const TMMUPtr AVector);
	__fastcall virtual ~TXLSMMURebuildVector();
	void __fastcall InsertExItem(const int AItem, const System::Byte AXLate, const int ASize);
	void __fastcall InsertXLateItem(const int AItem, const System::Byte AXLate);
	void __fastcall InsertEmpty(const int AItem, const int ACount);
	bool __fastcall DeleteItem(const int AItem);
	int __fastcall MoveItems(const int ASrcItem, const int ADestItem);
	TMMUPtr __fastcall WriteVector(const TMMUPtr AVector, const int AItem);
	int __fastcall RequiredMem();
	__property int ItemCount = {read=FItemCount, nodefault};
	__property int WrittenMem = {read=FWrittenMem, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSMMUVectorIterator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Byte *FVector;
	int FSlotCount;
	bool FIsEmpty;
	int FEQIndex;
	int FItemXL;
	System::Byte *FResItem;
	System::Byte *FItem;
	void __fastcall BeginSlot();
	bool __fastcall HitSlot(const int AItem);
	
public:
	void __fastcall Clear(const TMMUPtr AVector);
	bool __fastcall Find(int &AItem);
	bool __fastcall FindNext(int &AItem);
	__property TMMUPtr ResItem = {read=FResItem};
	__property int ItemXL = {read=FItemXL, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXLSMMUVectorIterator() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSMMUVectorIterator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSMMUVectorManager : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Byte *FVector;
	
private:
	void __fastcall SetVector(const TMMUPtr Value);
	
protected:
	TXLSMMUBlockManager* FBlockManager;
	TXLSMMUVectorIterator* FIterator;
	TMMUPtr __fastcall AddEmpty(const TMMUPtr APtr, const int ACount);
	int __fastcall DeleteEmpty(const TMMUPtr APtr);
	TMMUPtr __fastcall InitVector(const int AItem, const int AItemSize);
	int __fastcall GetItemsBlockSize(const TMMUPtr APtr);
	TMMUPtr __fastcall GetEndOfMem();
	TMMUPtr __fastcall GetLastEq();
	TMMUPtr __fastcall SetEqualAndXLate(const TMMUPtr APtr, const System::Byte AEqual, const System::Byte AXLate);
	int __fastcall GetEmptySlotCount(const int AEmptyCount);
	TMMUPtr __fastcall GetItem(const int AItem, /* out */ TMMUPtr &APtrEqual, /* out */ int &AIndexEqual);
	__classmethod int __fastcall GetXLate(const int AIndex);
	
public:
	__classmethod void __fastcall SetXLate(const int AIndex, const int AValue);
	__classmethod void __fastcall SetItemsHeaderSize(const int ASize, const TMMUPtr ADefaultData, const int ADefaultDataSize);
	__fastcall TXLSMMUVectorManager(TXLSMMUBlockManager* ABlockManager);
	__fastcall virtual ~TXLSMMUVectorManager();
	bool __fastcall WalkVector(System::Classes::TStrings* AList);
	int __fastcall ItemCount();
	int __fastcall MemorySize();
	TMMUPtr __fastcall New();
	TMMUPtr __fastcall Alloc(const int AItem, const int AXLate);
	TMMUPtr __fastcall AllocEx(const int AItem, const int AXLate, const int ASize);
	void __fastcall FreeMem(const int AItem1, const int AItem2);
	TMMUPtr __fastcall GetMem(const int AItem, /* out */ int &AXLate);
	TMMUPtr __fastcall GetNextMem(int &AItem, /* out */ int &AXLate);
	void __fastcall MoveMem(const int ASrcItem, const int ADestItem);
	void __fastcall InsertEmpty(const int AItem, const int ACount);
	int __fastcall FirstItem();
	int __fastcall LastItem();
	__property TMMUPtr Vector = {read=FVector, write=SetVector};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSMMUBlockManager : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall SetBlock(const PXLSMMUBlock Value);
	TMMUPtr __fastcall GetVector(const int AIndex);
	
protected:
	TXLSMMUBlock *FBlock;
	TXLSMMUVectorManager* FVectManager;
	int FCurrVectorIndex;
	TMMUPtr __fastcall _AddMem(const int ASize);
	TMMUPtr __fastcall _InsertMem(const TMMUPtr APtr, const int ASize);
	void __fastcall _Realloc(const int AOldSize, const int ANewSize);
	void __fastcall _Delete(const int ASize);
	void __fastcall SetVector(int AVector);
	
public:
	__fastcall TXLSMMUBlockManager();
	__fastcall virtual ~TXLSMMUBlockManager();
	bool __fastcall WalkVectors(System::Classes::TStrings* AList, int ABlockOffs = 0x0);
	TMMUPtr __fastcall GetMem(const int AVector, const int AItem, /* out */ int &AXLate);
	TMMUPtr __fastcall AllocMem(const int AVector, const int AItem, const int AXLate);
	TMMUPtr __fastcall AllocMemEx(const int AVector, const int AItem, const int AXLate, const int ASize);
	void __fastcall MoveMem(const int AVector, const int ASrcItem, const int ADestItem);
	void __fastcall MoveMemAll(const int ASrcItem, const int ADestItem);
	void __fastcall FreeMem(const int AVector, const int AItem);
	void __fastcall FreeMemAll(const int AItem1, const int AItem2);
	void __fastcall InsertEmpty(const int AVector, const int AItem, const int ACount);
	void __fastcall InsertEmptyAll(const int AItem, const int ACount);
	TMMUPtr __fastcall GetItemsHeader(const int AVector);
	TMMUPtr __fastcall NewVector(const int AVector);
	void __fastcall FreeVector(const int AVector);
	void __fastcall FreeVectors(const int AVector1, const int AVector2);
	void __fastcall MoveVector(const int ASrcVector, const int ADestVector);
	TMMUPtr __fastcall CopyVector(const int AVector);
	void __fastcall InsertVector(const int AVector, const TMMUPtr APtr);
	int __fastcall _VectorItemsCount();
	TMMUPtr __fastcall GetNextVector(int &AVector);
	TMMUPtr __fastcall GetNextItem(int &AItem, /* out */ int &AXLate);
	void __fastcall CalcDimensions(/* out */ int &AMinVect, /* out */ int &AMaxVect, /* out */ int &AMinItem, /* out */ int &AMaxItem);
	__property PXLSMMUBlock Block = {read=FBlock, write=SetBlock};
	__property TMMUPtr Vector[const int AIndex] = {read=GetVector};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 XVECT_MAX_EQCOUNT = System::Int8(0x7f);
static const System::Byte XVECT_EQCOUNT_EMPTY = System::Byte(0x80);
static const System::Byte XVECT_XLATE_EX = System::Byte(0x80);
static const System::Int8 XVECT_XLATE_MASK = System::Int8(0x1f);
static const System::Word XVECT_MAX_ITEMS = System::Word(0x4001);
static const System::Int8 SZ_HDR_EQ = System::Int8(0x1);
static const System::Int8 SZ_HDR_XL = System::Int8(0x1);
static const System::Int8 SZ_HDR_EX = System::Int8(0x2);
static const System::Int8 XBLOCK_VECTOR_COUNT_BITS = System::Int8(0x8);
static const System::Byte XBLOCK_VECTOR_MASK = System::Byte(0xff);
static const System::Word XBLOCK_VECTOR_COUNT = System::Word(0x100);
static const unsigned XBLOCK_VECTOR_UNUSED = unsigned(0xffffffff);
static const System::Word XBLOCK_PREALLOCSIZE = System::Word(0xffff);
extern DELPHI_PACKAGE TMMUPtrEvent G_XLSCellMMU5_KeepItemsHeaderEvent;
}	/* namespace Xlsmmu5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSMMU5)
using namespace Xlsmmu5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsmmu5HPP
