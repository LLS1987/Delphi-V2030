// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSSharedItems5.pas' rev: 35.00 (Windows)

#ifndef Xlsshareditems5HPP
#define Xlsshareditems5HPP

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
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsshareditems5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSSharedItemsValue;
class DELPHICLASS TXLSSharedItemsValueBoolean;
class DELPHICLASS TXLSSharedItemsValueDate;
class DELPHICLASS TXLSSharedItemsValueError;
class DELPHICLASS TXLSSharedItemsValueBlank;
class DELPHICLASS TXLSSharedItemsValueNumeric;
class DELPHICLASS TXLSSharedItemsValueString;
class DELPHICLASS TXLSSharedItemsValues;
class DELPHICLASS TXLSUniqueSharedItemsValues;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXLSSharedItemsValueType : unsigned char { xsivtBoolean, xsivtDate, xsivtError, xsivtBlank, xsivtNumeric, xsivtString };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSSharedItemsValue : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FUnused;
	virtual unsigned __fastcall HashOf() = 0 ;
	virtual bool __fastcall GetAsBoolean();
	virtual System::TDateTime __fastcall GetAsDate();
	virtual Xc12utils5::TXc12CellError __fastcall GetAsError();
	virtual double __fastcall GetAsNumeric();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::UnicodeString __fastcall GetAsIdString() = 0 ;
	virtual System::UnicodeString __fastcall GetAsText();
	virtual void __fastcall SetAsBoolean(const bool Value);
	virtual void __fastcall SetAsDate(const System::TDateTime Value);
	virtual void __fastcall SetAsError(const Xc12utils5::TXc12CellError Value);
	virtual void __fastcall SetAsNumeric(const double Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	
public:
	virtual TXLSSharedItemsValueType __fastcall Type_() = 0 ;
	virtual TXLSSharedItemsValue* __fastcall Clone() = 0 ;
	bool __fastcall Equal(bool AValue)/* overload */;
	bool __fastcall Equal()/* overload */;
	bool __fastcall Equal(Xc12utils5::TXc12CellError AValue)/* overload */;
	bool __fastcall Equal(double AValue)/* overload */;
	bool __fastcall Equal(System::UnicodeString AValue)/* overload */;
	bool __fastcall Equal(TXLSSharedItemsValue* AValue)/* overload */;
	__property bool Unused = {read=FUnused, write=FUnused, nodefault};
	__property bool AsBoolean = {read=GetAsBoolean, write=SetAsBoolean, nodefault};
	__property System::TDateTime AsDate = {read=GetAsDate, write=SetAsDate};
	__property Xc12utils5::TXc12CellError AsError = {read=GetAsError, write=SetAsError, nodefault};
	__property double AsNumeric = {read=GetAsNumeric, write=SetAsNumeric};
	__property System::UnicodeString AsString = {read=GetAsString, write=SetAsString};
	__property System::UnicodeString AsIdString = {read=GetAsIdString};
	__property System::UnicodeString AsText = {read=GetAsText};
public:
	/* TObject.Create */ inline __fastcall TXLSSharedItemsValue() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSSharedItemsValue() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSSharedItemsValueBoolean : public TXLSSharedItemsValue
{
	typedef TXLSSharedItemsValue inherited;
	
protected:
	bool FValue;
	virtual unsigned __fastcall HashOf();
	virtual bool __fastcall GetAsBoolean();
	virtual System::UnicodeString __fastcall GetAsIdString();
	virtual System::UnicodeString __fastcall GetAsText();
	virtual void __fastcall SetAsBoolean(const bool Value);
	
public:
	virtual TXLSSharedItemsValueType __fastcall Type_();
	virtual TXLSSharedItemsValue* __fastcall Clone();
public:
	/* TObject.Create */ inline __fastcall TXLSSharedItemsValueBoolean() : TXLSSharedItemsValue() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSSharedItemsValueBoolean() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSSharedItemsValueDate : public TXLSSharedItemsValue
{
	typedef TXLSSharedItemsValue inherited;
	
protected:
	System::TDateTime FValue;
	virtual unsigned __fastcall HashOf();
	virtual System::TDateTime __fastcall GetAsDate();
	virtual System::UnicodeString __fastcall GetAsIdString();
	virtual System::UnicodeString __fastcall GetAsText();
	virtual void __fastcall SetAsDate(const System::TDateTime Value);
	
public:
	virtual TXLSSharedItemsValueType __fastcall Type_();
	virtual TXLSSharedItemsValue* __fastcall Clone();
public:
	/* TObject.Create */ inline __fastcall TXLSSharedItemsValueDate() : TXLSSharedItemsValue() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSSharedItemsValueDate() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSSharedItemsValueError : public TXLSSharedItemsValue
{
	typedef TXLSSharedItemsValue inherited;
	
protected:
	Xc12utils5::TXc12CellError FValue;
	virtual unsigned __fastcall HashOf();
	virtual System::UnicodeString __fastcall GetAsIdString();
	virtual System::UnicodeString __fastcall GetAsText();
	virtual Xc12utils5::TXc12CellError __fastcall GetAsError();
	virtual void __fastcall SetAsError(const Xc12utils5::TXc12CellError Value);
	
public:
	virtual TXLSSharedItemsValueType __fastcall Type_();
	virtual TXLSSharedItemsValue* __fastcall Clone();
public:
	/* TObject.Create */ inline __fastcall TXLSSharedItemsValueError() : TXLSSharedItemsValue() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSSharedItemsValueError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSSharedItemsValueBlank : public TXLSSharedItemsValue
{
	typedef TXLSSharedItemsValue inherited;
	
protected:
	virtual unsigned __fastcall HashOf();
	virtual System::UnicodeString __fastcall GetAsIdString();
	virtual System::UnicodeString __fastcall GetAsText();
	
public:
	virtual TXLSSharedItemsValueType __fastcall Type_();
	virtual TXLSSharedItemsValue* __fastcall Clone();
public:
	/* TObject.Create */ inline __fastcall TXLSSharedItemsValueBlank() : TXLSSharedItemsValue() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSSharedItemsValueBlank() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSSharedItemsValueNumeric : public TXLSSharedItemsValue
{
	typedef TXLSSharedItemsValue inherited;
	
protected:
	double FValue;
	virtual unsigned __fastcall HashOf();
	virtual double __fastcall GetAsNumeric();
	virtual System::UnicodeString __fastcall GetAsIdString();
	virtual System::UnicodeString __fastcall GetAsText();
	virtual void __fastcall SetAsNumeric(const double Value);
	
public:
	virtual TXLSSharedItemsValueType __fastcall Type_();
	virtual TXLSSharedItemsValue* __fastcall Clone();
public:
	/* TObject.Create */ inline __fastcall TXLSSharedItemsValueNumeric() : TXLSSharedItemsValue() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSSharedItemsValueNumeric() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSSharedItemsValueString : public TXLSSharedItemsValue
{
	typedef TXLSSharedItemsValue inherited;
	
protected:
	System::UnicodeString FValue;
	virtual unsigned __fastcall HashOf();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::UnicodeString __fastcall GetAsIdString();
	virtual System::UnicodeString __fastcall GetAsText();
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	
public:
	virtual TXLSSharedItemsValueType __fastcall Type_();
	virtual TXLSSharedItemsValue* __fastcall Clone();
public:
	/* TObject.Create */ inline __fastcall TXLSSharedItemsValueString() : TXLSSharedItemsValue() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSSharedItemsValueString() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSSharedItemsValues : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSSharedItemsValue* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSSharedItemsValue* __fastcall GetItems(int Index);
	
protected:
	void __fastcall DoSort(int ALeft, int ARight);
	
public:
	__fastcall TXLSSharedItemsValues(bool AOwnsItems);
	HIDESBASE void __fastcall Sort();
	virtual bool __fastcall Find(bool AValue)/* overload */;
	virtual bool __fastcall Find(double AValue)/* overload */;
	virtual bool __fastcall Find(Xc12utils5::TXc12CellError AValue)/* overload */;
	virtual bool __fastcall Find()/* overload */;
	virtual bool __fastcall Find(System::UnicodeString AValue)/* overload */;
	virtual bool __fastcall Find(TXLSSharedItemsValue* AValue)/* overload */;
	int __fastcall FindValue(TXLSSharedItemsValue* AValue);
	HIDESBASE virtual bool __fastcall Add(TXLSSharedItemsValue* AValue)/* overload */;
	HIDESBASE virtual bool __fastcall Add(bool AValue)/* overload */;
	HIDESBASE virtual bool __fastcall Add(Xc12utils5::TXc12CellError AValue)/* overload */;
	HIDESBASE virtual bool __fastcall Add()/* overload */;
	HIDESBASE virtual bool __fastcall Add(double AValue)/* overload */;
	HIDESBASE virtual bool __fastcall Add(System::UnicodeString AValue)/* overload */;
	double __fastcall Compare(int AIndex1, int AIndex2);
	__property TXLSSharedItemsValue* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXLSSharedItemsValues() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSUniqueSharedItemsValues : public TXLSSharedItemsValues
{
	typedef TXLSSharedItemsValues inherited;
	
	
private:
	typedef System::DynamicArray<TXLSSharedItemsValues*> _TXLSUniqueSharedItemsValues__1;
	
	
protected:
	_TXLSUniqueSharedItemsValues__1 FBuckets;
	unsigned __fastcall HashOf(Xc12utils5::TXc12CellError AValue)/* overload */;
	unsigned __fastcall HashOf(double AValue)/* overload */;
	unsigned __fastcall HashOf(System::UnicodeString AValue)/* overload */;
	void __fastcall ClearBuckets();
	
public:
	__fastcall TXLSUniqueSharedItemsValues(bool AOwnsItems, unsigned Size);
	void __fastcall Resize(int ASize);
	virtual void __fastcall Clear();
	virtual bool __fastcall Find(bool AValue)/* overload */;
	virtual bool __fastcall Find(Xc12utils5::TXc12CellError AValue)/* overload */;
	virtual bool __fastcall Find()/* overload */;
	virtual bool __fastcall Find(double AValue)/* overload */;
	virtual bool __fastcall Find(System::UnicodeString AValue)/* overload */;
	virtual bool __fastcall Find(TXLSSharedItemsValue* AValue)/* overload */;
	virtual bool __fastcall Add(TXLSSharedItemsValue* AValue)/* overload */;
	virtual bool __fastcall Add(bool AValue)/* overload */;
	virtual bool __fastcall Add(Xc12utils5::TXc12CellError AValue)/* overload */;
	virtual bool __fastcall Add()/* overload */;
	virtual bool __fastcall Add(double AValue)/* overload */;
	virtual bool __fastcall Add(System::UnicodeString AValue)/* overload */;
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXLSUniqueSharedItemsValues() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsshareditems5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSSHAREDITEMS5)
using namespace Xlsshareditems5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsshareditems5HPP
