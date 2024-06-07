// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Xc12Common5.pas' rev: 35.00 (Windows)

#ifndef Xc12common5HPP
#define Xc12common5HPP

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

//-- user supplied -----------------------------------------------------------

namespace Xc12common5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSIndexObject;
class DELPHICLASS TXLSStyleObject;
class DELPHICLASS TXLSIndexObjectList;
struct TXLSHashItem;
class DELPHICLASS TXLSStyleObjectHash;
class DELPHICLASS TXLSStyleObjectList;
class DELPHICLASS TXc12Data;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSIndexObject : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FIndex;
	
public:
	__property int Index = {read=FIndex, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXLSIndexObject() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSIndexObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSStyleObject : public Xlsutils5::TIndexObject
{
	typedef Xlsutils5::TIndexObject inherited;
	
private:
	int FRefCount;
	
protected:
	bool FHashvalid;
	unsigned FHash;
	bool FLocked;
	virtual void __fastcall CalcHash() = 0 ;
	TXLSStyleObjectList* FOwner;
	void __fastcall IncRef();
	void __fastcall DecRef();
	virtual bool __fastcall Equal(TXLSStyleObject* AItem) = 0 ;
	
public:
	__fastcall TXLSStyleObject(TXLSStyleObjectList* AOwner);
	virtual System::UnicodeString __fastcall AsString(const int AIndent = 0x0);
	unsigned __fastcall HashKey();
	__property TXLSStyleObjectList* Owner = {read=FOwner};
	__property bool Locked = {read=FLocked, write=FLocked, nodefault};
	__property int RefCount = {read=FRefCount, nodefault};
	__property unsigned Hash = {read=FHash, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSStyleObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSIndexObjectList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
protected:
	bool FIsDestroying;
	void __fastcall Enumerate(int AStartIndex = 0x0);
	virtual void __fastcall Notify(void * Ptr, System::Classes::TListNotification Action);
	
public:
	__fastcall virtual ~TXLSIndexObjectList();
public:
	/* TObjectList.Create */ inline __fastcall TXLSIndexObjectList()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TXLSIndexObjectList(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
};

#pragma pack(pop)

typedef TXLSHashItem *PXLSHashItem;

typedef PXLSHashItem *PPXLSHashItem;

struct DECLSPEC_DRECORD TXLSHashItem
{
public:
	TXLSHashItem *Next;
	TXLSStyleObject* Key;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSStyleObjectHash : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<PXLSHashItem> _TXLSStyleObjectHash__1;
	
	
private:
	_TXLSStyleObjectHash__1 FBuckets;
	
protected:
	PPXLSHashItem __fastcall Find(TXLSStyleObject* AKey);
	
public:
	__fastcall TXLSStyleObjectHash(const unsigned ASize);
	__fastcall virtual ~TXLSStyleObjectHash();
	void __fastcall Add(TXLSStyleObject* AKey);
	void __fastcall Clear();
	void __fastcall Remove(TXLSStyleObject* AKey);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSStyleObjectList : public TXLSIndexObjectList
{
	typedef TXLSIndexObjectList inherited;
	
private:
	TXLSStyleObjectHash* FItemHash;
	bool FItemHashValid;
	void __fastcall UpdateItemHash();
	TXLSStyleObject* __fastcall GetItems(int Index);
	
protected:
	virtual void __fastcall Notify(void * Ptr, System::Classes::TListNotification Action);
	
public:
	__fastcall TXLSStyleObjectList(const int AHashSize);
	__fastcall virtual ~TXLSStyleObjectList();
	TXLSStyleObject* __fastcall Find(TXLSStyleObject* AItem);
	virtual void __fastcall SetIsDefault() = 0 ;
	int __fastcall DefaultCount();
	HIDESBASE void __fastcall Add(TXLSStyleObject* AObject);
	__property TXLSStyleObject* StyleItems[int Index] = {read=GetItems};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Data : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	/* TObject.Create */ inline __fastcall TXc12Data() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12Data() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xc12common5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XC12COMMON5)
using namespace Xc12common5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xc12common5HPP
