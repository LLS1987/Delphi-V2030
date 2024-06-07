// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'xpgParseDocPropsApp.pas' rev: 35.00 (Windows)

#ifndef XpgparsedocpropsappHPP
#define XpgparsedocpropsappHPP

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
#include <System.IniFiles.hpp>
#include <xpgPUtils.hpp>
#include <xpgPLists.hpp>
#include <xpgPXMLUtils.hpp>
#include <XLSUtils5.hpp>
#include <xpgPXML.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xpgparsedocpropsapp
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXPGDocBase;
class DELPHICLASS TXPGBase;
class DELPHICLASS TXPGBaseObjectList;
class DELPHICLASS TXPGReader;
class DELPHICLASS TCT_Empty;
class DELPHICLASS TCT_Null;
class DELPHICLASS TCT_Vstream;
class DELPHICLASS TCT_Cf;
class DELPHICLASS TCT_CfXpgList;
class DELPHICLASS TCT_Variant;
class DELPHICLASS TCT_VariantXpgList;
class DELPHICLASS TCT_Array;
class DELPHICLASS TCT_Vector;
class DELPHICLASS TCT_VectorVariant;
class DELPHICLASS TCT_VectorLpstr;
class DELPHICLASS TCT_DigSigBlob;
class DELPHICLASS TCT_Properties;
class DELPHICLASS T__ROOT__;
class DELPHICLASS TXPGDocDocPropsApp;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TST_ArrayBaseType : unsigned short { stabtVariant, stabtI1, stabtI2, stabtI4, stabtInt, stabtUi1, stabtUi2, stabtUi4, stabtUint, stabtR4, stabtR8, stabtDecimal, stabtBstr, stabtDate, stabtBool, stabtCy, stabtError };

typedef System::StaticArray<System::UnicodeString, 17> Xpgparsedocpropsapp__1;

enum DECLSPEC_DENUM TST_VectorBaseType : unsigned short { stvbtVariant, stvbtI1, stvbtI2, stvbtI4, stvbtI8, stvbtUi1, stvbtUi2, stvbtUi4, stvbtUi8, stvbtR4, stvbtR8, stvbtLpstr, stvbtLpwstr, stvbtBstr, stvbtDate, stvbtFiletime, stvbtBool, stvbtCy, stvbtError, stvbtClsid, stvbtCf };

typedef System::StaticArray<System::UnicodeString, 21> Xpgparsedocpropsapp__2;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGDocBase : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xpgputils::TXpgPErrors* FErrors;
	
public:
	__property Xpgputils::TXpgPErrors* Errors = {read=FErrors};
public:
	/* TObject.Create */ inline __fastcall TXPGDocBase() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXPGDocBase() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGBase : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TXPGDocBase* FOwner;
	int FElementCount;
	int FAttributeCount;
	Xpgpxmlutils::TXpgAssigneds FAssigneds;
	virtual int __fastcall CheckAssigned();
	bool __fastcall Assigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	virtual void __fastcall AfterTag();
	__classmethod int __fastcall StrToEnum(System::UnicodeString AValue);
	__classmethod int __fastcall StrToEnumDef(System::UnicodeString AValue, int ADefault);
	__classmethod bool __fastcall TryStrToEnum(System::UnicodeString AValue, System::UnicodeString AText, System::UnicodeString *AEnumNames, const int AEnumNames_High, System::PInteger APtrInt);
	
public:
	__classmethod void __fastcall AddEnums();
	bool __fastcall Available();
	__property int ElementCount = {read=FElementCount, write=FElementCount, nodefault};
	__property int AttributeCount = {read=FAttributeCount, write=FAttributeCount, nodefault};
	__property Xpgpxmlutils::TXpgAssigneds Assigneds = {read=FAssigneds, write=FAssigneds, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXPGBase() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXPGBase() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGBaseObjectList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
protected:
	TXPGDocBase* FOwner;
	bool FAssigned;
	TXPGBase* __fastcall GetItems(int Index);
	
public:
	__fastcall TXPGBaseObjectList(TXPGDocBase* AOwner);
	__property TXPGBase* Items[int Index] = {read=GetItems};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXPGBaseObjectList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGReader : public Xpgpxml::TXpgReadXML
{
	typedef Xpgpxml::TXpgReadXML inherited;
	
protected:
	TXPGBase* FCurrent;
	System::Contnrs::TObjectStack* FStack;
	Xpgputils::TXpgPErrors* FErrors;
	
public:
	__fastcall TXPGReader(Xpgputils::TXpgPErrors* AErrors, TXPGBase* ARoot);
	__fastcall virtual ~TXPGReader();
	virtual void __fastcall BeginTag();
	virtual void __fastcall EndTag();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Empty : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Empty(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Empty();
	void __fastcall Clear();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Null : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Null(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Null();
	void __fastcall Clear();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Vstream : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FVersion;
	int FContent;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Vstream(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Vstream();
	void __fastcall Clear();
	__property System::UnicodeString Version = {read=FVersion, write=FVersion};
	__property int Content = {read=FContent, write=FContent, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Cf : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FFormat;
	int FContent;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Cf(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Cf();
	void __fastcall Clear();
	__property System::UnicodeString Format = {read=FFormat, write=FFormat};
	__property int Content = {read=FContent, write=FContent, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CfXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Cf* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Cf* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Cf* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Cf* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CfXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CfXpgList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_Variant : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_Variant* FVt_Variant;
	TCT_Vector* FVt_Vector;
	TCT_Array* FVt_Array;
	unsigned FVt_Blob;
	unsigned FVt_Oblob;
	TCT_Empty* FVt_Empty;
	TCT_Null* FVt_Null;
	unsigned FVt_I1;
	unsigned FVt_I2;
	unsigned FVt_I4;
	unsigned FVt_I8;
	unsigned FVt_Int;
	unsigned FVt_Ui1;
	unsigned FVt_Ui2;
	unsigned FVt_Ui4;
	unsigned FVt_Ui8;
	unsigned FVt_Uint;
	System::Extended FVt_R4;
	System::Extended FVt_R8;
	System::Extended FVt_Decimal;
	System::UnicodeString FVt_Lpstr;
	System::UnicodeString FVt_Lpwstr;
	System::UnicodeString FVt_Bstr;
	System::TDateTime FVt_Date;
	System::TDateTime FVt_Filetime;
	bool FVt_Bool;
	System::UnicodeString FVt_Cy;
	System::UnicodeString FVt_Error;
	unsigned FVt_Stream;
	unsigned FVt_Ostream;
	unsigned FVt_Storage;
	unsigned FVt_Ostorage;
	TCT_Vstream* FVt_Vstream;
	System::UnicodeString FVt_Clsid;
	TCT_Cf* FVt_Cf;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Variant(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Variant();
	void __fastcall Clear();
	TCT_Variant* __fastcall CreateTCT_Variant();
	TCT_Vector* __fastcall CreateTCT_Vector();
	TCT_Array* __fastcall CreateTCT_Array();
	__property TCT_Variant* Vt_Variant = {read=FVt_Variant};
	__property TCT_Vector* Vt_Vector = {read=FVt_Vector, write=FVt_Vector};
	__property TCT_Array* Vt_Array = {read=FVt_Array, write=FVt_Array};
	__property unsigned Vt_Blob = {read=FVt_Blob, write=FVt_Blob, nodefault};
	__property unsigned Vt_Oblob = {read=FVt_Oblob, write=FVt_Oblob, nodefault};
	__property TCT_Empty* Vt_Empty = {read=FVt_Empty};
	__property TCT_Null* Vt_Null = {read=FVt_Null};
	__property unsigned Vt_I1 = {read=FVt_I1, write=FVt_I1, nodefault};
	__property unsigned Vt_I2 = {read=FVt_I2, write=FVt_I2, nodefault};
	__property unsigned Vt_I4 = {read=FVt_I4, write=FVt_I4, nodefault};
	__property unsigned Vt_I8 = {read=FVt_I8, write=FVt_I8, nodefault};
	__property unsigned Vt_Int = {read=FVt_Int, write=FVt_Int, nodefault};
	__property unsigned Vt_Ui1 = {read=FVt_Ui1, write=FVt_Ui1, nodefault};
	__property unsigned Vt_Ui2 = {read=FVt_Ui2, write=FVt_Ui2, nodefault};
	__property unsigned Vt_Ui4 = {read=FVt_Ui4, write=FVt_Ui4, nodefault};
	__property unsigned Vt_Ui8 = {read=FVt_Ui8, write=FVt_Ui8, nodefault};
	__property unsigned Vt_Uint = {read=FVt_Uint, write=FVt_Uint, nodefault};
	__property System::Extended Vt_R4 = {read=FVt_R4, write=FVt_R4};
	__property System::Extended Vt_R8 = {read=FVt_R8, write=FVt_R8};
	__property System::Extended Vt_Decimal = {read=FVt_Decimal, write=FVt_Decimal};
	__property System::UnicodeString Vt_Lpstr = {read=FVt_Lpstr, write=FVt_Lpstr};
	__property System::UnicodeString Vt_Lpwstr = {read=FVt_Lpwstr, write=FVt_Lpwstr};
	__property System::UnicodeString Vt_Bstr = {read=FVt_Bstr, write=FVt_Bstr};
	__property System::TDateTime Vt_Date = {read=FVt_Date, write=FVt_Date};
	__property System::TDateTime Vt_Filetime = {read=FVt_Filetime, write=FVt_Filetime};
	__property bool Vt_Bool = {read=FVt_Bool, write=FVt_Bool, nodefault};
	__property System::UnicodeString Vt_Cy = {read=FVt_Cy, write=FVt_Cy};
	__property System::UnicodeString Vt_Error = {read=FVt_Error, write=FVt_Error};
	__property unsigned Vt_Stream = {read=FVt_Stream, write=FVt_Stream, nodefault};
	__property unsigned Vt_Ostream = {read=FVt_Ostream, write=FVt_Ostream, nodefault};
	__property unsigned Vt_Storage = {read=FVt_Storage, write=FVt_Storage, nodefault};
	__property unsigned Vt_Ostorage = {read=FVt_Ostorage, write=FVt_Ostorage, nodefault};
	__property TCT_Vstream* Vt_Vstream = {read=FVt_Vstream};
	__property System::UnicodeString Vt_Clsid = {read=FVt_Clsid, write=FVt_Clsid};
	__property TCT_Cf* Vt_Cf = {read=FVt_Cf};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_VariantXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Variant* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Variant* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Variant* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Variant* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_VariantXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_VariantXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Array : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FLBounds;
	int FUBounds;
	TST_ArrayBaseType FBaseType;
	TCT_VariantXpgList* FVt_VariantXpgList;
	Xpgplists::TLongwordXpgList* FVt_I1XpgList;
	Xpgplists::TLongwordXpgList* FVt_I2XpgList;
	Xpgplists::TLongwordXpgList* FVt_I4XpgList;
	Xpgplists::TLongwordXpgList* FVt_IntXpgList;
	Xpgplists::TLongwordXpgList* FVt_Ui1XpgList;
	Xpgplists::TLongwordXpgList* FVt_Ui2XpgList;
	Xpgplists::TLongwordXpgList* FVt_Ui4XpgList;
	Xpgplists::TLongwordXpgList* FVt_UintXpgList;
	Xpgplists::TExtendedXpgList* FVt_R4XpgList;
	Xpgplists::TExtendedXpgList* FVt_R8XpgList;
	Xpgplists::TExtendedXpgList* FVt_DecimalXpgList;
	Xpgplists::TStringXpgList* FVt_BstrXpgList;
	Xpgplists::TTDateTimeXpgList* FVt_DateXpgList;
	Xpgplists::TBooleanXpgList* FVt_BoolXpgList;
	Xpgplists::TStringXpgList* FVt_ErrorXpgList;
	Xpgplists::TStringXpgList* FVt_CyXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Array(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Array();
	void __fastcall Clear();
	TCT_VariantXpgList* __fastcall CreateTCT_VariantXpgList();
	__property int LBounds = {read=FLBounds, write=FLBounds, nodefault};
	__property int UBounds = {read=FUBounds, write=FUBounds, nodefault};
	__property TST_ArrayBaseType BaseType = {read=FBaseType, write=FBaseType, nodefault};
	__property TCT_VariantXpgList* Vt_VariantXpgList = {read=FVt_VariantXpgList};
	__property Xpgplists::TLongwordXpgList* Vt_I1XpgList = {read=FVt_I1XpgList};
	__property Xpgplists::TLongwordXpgList* Vt_I2XpgList = {read=FVt_I2XpgList};
	__property Xpgplists::TLongwordXpgList* Vt_I4XpgList = {read=FVt_I4XpgList};
	__property Xpgplists::TLongwordXpgList* Vt_IntXpgList = {read=FVt_IntXpgList};
	__property Xpgplists::TLongwordXpgList* Vt_Ui1XpgList = {read=FVt_Ui1XpgList};
	__property Xpgplists::TLongwordXpgList* Vt_Ui2XpgList = {read=FVt_Ui2XpgList};
	__property Xpgplists::TLongwordXpgList* Vt_Ui4XpgList = {read=FVt_Ui4XpgList};
	__property Xpgplists::TLongwordXpgList* Vt_UintXpgList = {read=FVt_UintXpgList};
	__property Xpgplists::TExtendedXpgList* Vt_R4XpgList = {read=FVt_R4XpgList};
	__property Xpgplists::TExtendedXpgList* Vt_R8XpgList = {read=FVt_R8XpgList};
	__property Xpgplists::TExtendedXpgList* Vt_DecimalXpgList = {read=FVt_DecimalXpgList};
	__property Xpgplists::TStringXpgList* Vt_BstrXpgList = {read=FVt_BstrXpgList};
	__property Xpgplists::TTDateTimeXpgList* Vt_DateXpgList = {read=FVt_DateXpgList};
	__property Xpgplists::TBooleanXpgList* Vt_BoolXpgList = {read=FVt_BoolXpgList};
	__property Xpgplists::TStringXpgList* Vt_ErrorXpgList = {read=FVt_ErrorXpgList};
	__property Xpgplists::TStringXpgList* Vt_CyXpgList = {read=FVt_CyXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Vector : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_VectorBaseType FBaseType;
	int FSize;
	TCT_VariantXpgList* FVt_VariantXpgList;
	Xpgplists::TLongwordXpgList* FVt_I1XpgList;
	Xpgplists::TLongwordXpgList* FVt_I2XpgList;
	Xpgplists::TLongwordXpgList* FVt_I4XpgList;
	Xpgplists::TLongwordXpgList* FVt_I8XpgList;
	Xpgplists::TLongwordXpgList* FVt_Ui1XpgList;
	Xpgplists::TLongwordXpgList* FVt_Ui2XpgList;
	Xpgplists::TLongwordXpgList* FVt_Ui4XpgList;
	Xpgplists::TLongwordXpgList* FVt_Ui8XpgList;
	Xpgplists::TExtendedXpgList* FVt_R4XpgList;
	Xpgplists::TExtendedXpgList* FVt_R8XpgList;
	Xpgplists::TStringXpgList* FVt_LpstrXpgList;
	Xpgplists::TStringXpgList* FVt_LpwstrXpgList;
	Xpgplists::TStringXpgList* FVt_BstrXpgList;
	Xpgplists::TTDateTimeXpgList* FVt_DateXpgList;
	Xpgplists::TTDateTimeXpgList* FVt_FiletimeXpgList;
	Xpgplists::TBooleanXpgList* FVt_BoolXpgList;
	Xpgplists::TStringXpgList* FVt_CyXpgList;
	Xpgplists::TStringXpgList* FVt_ErrorXpgList;
	Xpgplists::TStringXpgList* FVt_ClsidXpgList;
	TCT_CfXpgList* FVt_CfXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Vector(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Vector();
	void __fastcall Clear();
	TCT_VariantXpgList* __fastcall CreateTCT_VariantXpgList();
	__property TST_VectorBaseType BaseType = {read=FBaseType, write=FBaseType, nodefault};
	__property int Size = {read=FSize, write=FSize, nodefault};
	__property TCT_VariantXpgList* Vt_VariantXpgList = {read=FVt_VariantXpgList};
	__property Xpgplists::TLongwordXpgList* Vt_I1XpgList = {read=FVt_I1XpgList};
	__property Xpgplists::TLongwordXpgList* Vt_I2XpgList = {read=FVt_I2XpgList};
	__property Xpgplists::TLongwordXpgList* Vt_I4XpgList = {read=FVt_I4XpgList};
	__property Xpgplists::TLongwordXpgList* Vt_I8XpgList = {read=FVt_I8XpgList};
	__property Xpgplists::TLongwordXpgList* Vt_Ui1XpgList = {read=FVt_Ui1XpgList};
	__property Xpgplists::TLongwordXpgList* Vt_Ui2XpgList = {read=FVt_Ui2XpgList};
	__property Xpgplists::TLongwordXpgList* Vt_Ui4XpgList = {read=FVt_Ui4XpgList};
	__property Xpgplists::TLongwordXpgList* Vt_Ui8XpgList = {read=FVt_Ui8XpgList};
	__property Xpgplists::TExtendedXpgList* Vt_R4XpgList = {read=FVt_R4XpgList};
	__property Xpgplists::TExtendedXpgList* Vt_R8XpgList = {read=FVt_R8XpgList};
	__property Xpgplists::TStringXpgList* Vt_LpstrXpgList = {read=FVt_LpstrXpgList};
	__property Xpgplists::TStringXpgList* Vt_LpwstrXpgList = {read=FVt_LpwstrXpgList};
	__property Xpgplists::TStringXpgList* Vt_BstrXpgList = {read=FVt_BstrXpgList};
	__property Xpgplists::TTDateTimeXpgList* Vt_DateXpgList = {read=FVt_DateXpgList};
	__property Xpgplists::TTDateTimeXpgList* Vt_FiletimeXpgList = {read=FVt_FiletimeXpgList};
	__property Xpgplists::TBooleanXpgList* Vt_BoolXpgList = {read=FVt_BoolXpgList};
	__property Xpgplists::TStringXpgList* Vt_CyXpgList = {read=FVt_CyXpgList};
	__property Xpgplists::TStringXpgList* Vt_ErrorXpgList = {read=FVt_ErrorXpgList};
	__property Xpgplists::TStringXpgList* Vt_ClsidXpgList = {read=FVt_ClsidXpgList};
	__property TCT_CfXpgList* Vt_CfXpgList = {read=FVt_CfXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_VectorVariant : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_Vector* FVt_Vector;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_VectorVariant(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_VectorVariant();
	void __fastcall Clear();
	__property TCT_Vector* Vt_Vector = {read=FVt_Vector};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_VectorLpstr : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_Vector* FVt_Vector;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_VectorLpstr(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_VectorLpstr();
	void __fastcall Clear();
	__property TCT_Vector* Vt_Vector = {read=FVt_Vector};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DigSigBlob : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	unsigned FVt_Blob;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_DigSigBlob(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DigSigBlob();
	void __fastcall Clear();
	__property unsigned Vt_Blob = {read=FVt_Blob, write=FVt_Blob, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Properties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FTemplate;
	System::UnicodeString FManager;
	System::UnicodeString FCompany;
	unsigned FPages;
	unsigned FWords;
	unsigned FCharacters;
	System::UnicodeString FPresentationFormat;
	unsigned FLines;
	unsigned FParagraphs;
	unsigned FSlides;
	unsigned FNotes;
	unsigned FTotalTime;
	unsigned FHiddenSlides;
	unsigned FMMClips;
	bool FScaleCrop;
	TCT_VectorVariant* FHeadingPairs;
	TCT_VectorLpstr* FTitlesOfParts;
	bool FLinksUpToDate;
	unsigned FCharactersWithSpaces;
	bool FSharedDoc;
	System::UnicodeString FHyperlinkBase;
	TCT_VectorVariant* FHLinks;
	bool FHyperlinksChanged;
	TCT_DigSigBlob* FDigSig;
	System::UnicodeString FApplication;
	System::UnicodeString FAppVersion;
	unsigned FDocSecurity;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Properties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Properties();
	void __fastcall Clear();
	__property System::UnicodeString Template = {read=FTemplate, write=FTemplate};
	__property System::UnicodeString Manager = {read=FManager, write=FManager};
	__property System::UnicodeString Company = {read=FCompany, write=FCompany};
	__property unsigned Pages = {read=FPages, write=FPages, nodefault};
	__property unsigned Words = {read=FWords, write=FWords, nodefault};
	__property unsigned Characters = {read=FCharacters, write=FCharacters, nodefault};
	__property System::UnicodeString PresentationFormat = {read=FPresentationFormat, write=FPresentationFormat};
	__property unsigned Lines = {read=FLines, write=FLines, nodefault};
	__property unsigned Paragraphs = {read=FParagraphs, write=FParagraphs, nodefault};
	__property unsigned Slides = {read=FSlides, write=FSlides, nodefault};
	__property unsigned Notes = {read=FNotes, write=FNotes, nodefault};
	__property unsigned TotalTime = {read=FTotalTime, write=FTotalTime, nodefault};
	__property unsigned HiddenSlides = {read=FHiddenSlides, write=FHiddenSlides, nodefault};
	__property unsigned MMClips = {read=FMMClips, write=FMMClips, nodefault};
	__property bool ScaleCrop = {read=FScaleCrop, write=FScaleCrop, nodefault};
	__property TCT_VectorVariant* HeadingPairs = {read=FHeadingPairs};
	__property TCT_VectorLpstr* TitlesOfParts = {read=FTitlesOfParts};
	__property bool LinksUpToDate = {read=FLinksUpToDate, write=FLinksUpToDate, nodefault};
	__property unsigned CharactersWithSpaces = {read=FCharactersWithSpaces, write=FCharactersWithSpaces, nodefault};
	__property bool SharedDoc = {read=FSharedDoc, write=FSharedDoc, nodefault};
	__property System::UnicodeString HyperlinkBase = {read=FHyperlinkBase, write=FHyperlinkBase};
	__property TCT_VectorVariant* HLinks = {read=FHLinks};
	__property bool HyperlinksChanged = {read=FHyperlinksChanged, write=FHyperlinksChanged, nodefault};
	__property TCT_DigSigBlob* DigSig = {read=FDigSig};
	__property System::UnicodeString Application = {read=FApplication, write=FApplication};
	__property System::UnicodeString AppVersion = {read=FAppVersion, write=FAppVersion};
	__property unsigned DocSecurity = {read=FDocSecurity, write=FDocSecurity, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION T__ROOT__ : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	Xpgplists::TStringXpgList* FRootAttributes;
	TCT_Properties* FProperties;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall T__ROOT__(TXPGDocBase* AOwner);
	__fastcall virtual ~T__ROOT__();
	void __fastcall Clear();
	__property Xpgplists::TStringXpgList* RootAttributes = {read=FRootAttributes};
	__property TCT_Properties* Properties = {read=FProperties};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGDocDocPropsApp : public TXPGDocBase
{
	typedef TXPGDocBase inherited;
	
protected:
	T__ROOT__* FRoot;
	TXPGReader* FReader;
	Xpgpxml::TXpgWriteXML* FWriter;
	TCT_Properties* __fastcall GetProperties();
	
public:
	__fastcall TXPGDocDocPropsApp();
	__fastcall virtual ~TXPGDocDocPropsApp();
	void __fastcall LoadFromFile(System::UnicodeString AFilename);
	void __fastcall LoadFromStream(System::Classes::TStream* AStream);
	void __fastcall SaveToFile(System::UnicodeString AFilename);
	void __fastcall SaveToStream(System::Classes::TStream* AStream);
	__property T__ROOT__* Root = {read=FRoot};
	__property TCT_Properties* Properties = {read=GetProperties};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Xpgparsedocpropsapp__1 StrTST_ArrayBaseType;
extern DELPHI_PACKAGE Xpgparsedocpropsapp__2 StrTST_VectorBaseType;
}	/* namespace Xpgparsedocpropsapp */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XPGPARSEDOCPROPSAPP)
using namespace Xpgparsedocpropsapp;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XpgparsedocpropsappHPP
