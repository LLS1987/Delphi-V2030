// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'xpgPLists.pas' rev: 35.00 (Windows)

#ifndef XpgplistsHPP
#define XpgplistsHPP

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
#include <xpgPUtils.hpp>
#include <xpgPXML.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xpgplists
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TBaseXpgList;
class DELPHICLASS TItemXpgList;
class DELPHICLASS TStringXpgList;
class DELPHICLASS TIntegerXpgList;
class DELPHICLASS TExtendedXpgList;
class DELPHICLASS TLongwordXpgList;
class DELPHICLASS TTDateTimeXpgList;
struct TXpgEnumData;
class DELPHICLASS TEnumXpgList;
class DELPHICLASS TFloatXpgList;
class DELPHICLASS TBooleanXpgList;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TErrorNotifyEvent)(System::TObject* Sender);

class PASCALIMPLEMENTATION TBaseXpgList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	virtual System::UnicodeString __fastcall GetAsString(int Index) = 0 ;
	virtual void __fastcall SetAsString(int Index, const System::UnicodeString Value) = 0 ;
	
protected:
	System::WideChar FDelimiter;
	TErrorNotifyEvent FErrorEvent;
	virtual void __fastcall SetDelimiter(const System::WideChar Value);
	virtual System::UnicodeString __fastcall GetDelimitedText() = 0 ;
	virtual void __fastcall SetDelimitedText(const System::UnicodeString Value) = 0 ;
	virtual int __fastcall Count() = 0 ;
	
public:
	__fastcall TBaseXpgList();
	virtual void __fastcall Clear() = 0 ;
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	void __fastcall WriteElements(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property System::WideChar Delimiter = {read=FDelimiter, write=SetDelimiter, nodefault};
	__property System::UnicodeString DelimitedText = {read=GetDelimitedText, write=SetDelimitedText};
	__property TErrorNotifyEvent OnError = {read=FErrorEvent, write=FErrorEvent};
	__property System::UnicodeString AsString[int Index] = {read=GetAsString, write=SetAsString};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBaseXpgList() { }
	
};


class PASCALIMPLEMENTATION TItemXpgList : public TBaseXpgList
{
	typedef TBaseXpgList inherited;
	
protected:
	System::Classes::TList* FItems;
	
public:
	__fastcall TItemXpgList();
	__fastcall virtual ~TItemXpgList();
	virtual void __fastcall Clear();
	virtual int __fastcall Count();
};


class PASCALIMPLEMENTATION TStringXpgList : public TBaseXpgList
{
	typedef TBaseXpgList inherited;
	
public:
	System::UnicodeString operator[](int Index) { return this->Items[Index]; }
	
private:
	virtual System::UnicodeString __fastcall GetAsString(int Index);
	virtual void __fastcall SetAsString(int Index, const System::UnicodeString Value);
	System::UnicodeString __fastcall GetItems(int Index);
	void __fastcall SetItems(int Index, const System::UnicodeString Value);
	
protected:
	System::Classes::TStringList* FItems;
	virtual void __fastcall SetDelimiter(const System::WideChar Value);
	virtual System::UnicodeString __fastcall GetDelimitedText();
	virtual void __fastcall SetDelimitedText(const System::UnicodeString Value);
	
public:
	__fastcall TStringXpgList();
	__fastcall virtual ~TStringXpgList();
	virtual void __fastcall Clear();
	int __fastcall IndexOf(System::UnicodeString AValue);
	virtual int __fastcall Count();
	void __fastcall Add(System::UnicodeString AValue);
	void __fastcall AddNameValue(System::UnicodeString AName, System::UnicodeString AValue);
	System::UnicodeString __fastcall Text();
	__property System::UnicodeString Items[int Index] = {read=GetItems, write=SetItems/*, default*/};
};


class PASCALIMPLEMENTATION TIntegerXpgList : public TItemXpgList
{
	typedef TItemXpgList inherited;
	
public:
	int operator[](int Index) { return this->Items[Index]; }
	
private:
	virtual System::UnicodeString __fastcall GetAsString(int Index);
	virtual void __fastcall SetAsString(int Index, const System::UnicodeString Value);
	int __fastcall GetItems(int Index);
	void __fastcall SetItems(int Index, const int Value);
	
protected:
	virtual System::UnicodeString __fastcall GetDelimitedText();
	virtual void __fastcall SetDelimitedText(const System::UnicodeString Value);
	
public:
	void __fastcall Add(int AValue)/* overload */;
	void __fastcall Add(System::UnicodeString AValue)/* overload */;
	__property int Items[int Index] = {read=GetItems, write=SetItems/*, default*/};
public:
	/* TItemXpgList.Create */ inline __fastcall TIntegerXpgList() : TItemXpgList() { }
	/* TItemXpgList.Destroy */ inline __fastcall virtual ~TIntegerXpgList() { }
	
};


class PASCALIMPLEMENTATION TExtendedXpgList : public TItemXpgList
{
	typedef TItemXpgList inherited;
	
private:
	virtual System::UnicodeString __fastcall GetAsString(int Index);
	virtual void __fastcall SetAsString(int Index, const System::UnicodeString Value);
	System::Extended __fastcall GetItems(int Index);
	
protected:
	virtual System::UnicodeString __fastcall GetDelimitedText();
	virtual void __fastcall SetDelimitedText(const System::UnicodeString Value);
	
public:
	void __fastcall Add(System::Extended AValue)/* overload */;
	void __fastcall Add(System::UnicodeString AValue)/* overload */;
	__property System::Extended Items[int Index] = {read=GetItems};
public:
	/* TItemXpgList.Create */ inline __fastcall TExtendedXpgList() : TItemXpgList() { }
	/* TItemXpgList.Destroy */ inline __fastcall virtual ~TExtendedXpgList() { }
	
};


class PASCALIMPLEMENTATION TLongwordXpgList : public TItemXpgList
{
	typedef TItemXpgList inherited;
	
public:
	unsigned operator[](int Index) { return this->Items[Index]; }
	
private:
	virtual System::UnicodeString __fastcall GetAsString(int Index);
	virtual void __fastcall SetAsString(int Index, const System::UnicodeString Value);
	unsigned __fastcall GetItems(int Index);
	
protected:
	virtual System::UnicodeString __fastcall GetDelimitedText();
	virtual void __fastcall SetDelimitedText(const System::UnicodeString Value);
	
public:
	void __fastcall Add(unsigned AValue)/* overload */;
	void __fastcall Add(System::UnicodeString AValue)/* overload */;
	__property unsigned Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TItemXpgList.Create */ inline __fastcall TLongwordXpgList() : TItemXpgList() { }
	/* TItemXpgList.Destroy */ inline __fastcall virtual ~TLongwordXpgList() { }
	
};


class PASCALIMPLEMENTATION TTDateTimeXpgList : public TItemXpgList
{
	typedef TItemXpgList inherited;
	
private:
	virtual System::UnicodeString __fastcall GetAsString(int Index);
	virtual void __fastcall SetAsString(int Index, const System::UnicodeString Value);
	System::TDateTime __fastcall GetItems(int Index);
	
protected:
	virtual System::UnicodeString __fastcall GetDelimitedText();
	virtual void __fastcall SetDelimitedText(const System::UnicodeString Value);
	
public:
	void __fastcall Add(System::TDateTime AValue)/* overload */;
	void __fastcall Add(System::UnicodeString AValue)/* overload */;
	__property System::TDateTime Items[int Index] = {read=GetItems};
public:
	/* TItemXpgList.Create */ inline __fastcall TTDateTimeXpgList() : TItemXpgList() { }
	/* TItemXpgList.Destroy */ inline __fastcall virtual ~TTDateTimeXpgList() { }
	
};


typedef TXpgEnumData *PXpgEnumData;

struct DECLSPEC_DRECORD TXpgEnumData
{
public:
	int Enum;
	int Index;
};


class PASCALIMPLEMENTATION TEnumXpgList : public TItemXpgList
{
	typedef TItemXpgList inherited;
	
private:
	virtual System::UnicodeString __fastcall GetAsString(int Index);
	virtual void __fastcall SetAsString(int Index, const System::UnicodeString Value);
	int __fastcall GetItems(int Index);
	
protected:
	System::Classes::TStrings* FEnums;
	System::UnicodeString FPrefix;
	virtual System::UnicodeString __fastcall GetDelimitedText();
	virtual void __fastcall SetDelimitedText(const System::UnicodeString Value);
	void __fastcall DoAdd(int AValue, int AIndex);
	
public:
	__fastcall TEnumXpgList(System::Classes::TStrings* AEnums, System::UnicodeString APrefix);
	void __fastcall Add(int AValue)/* overload */;
	void __fastcall Add(System::UnicodeString AValue)/* overload */;
	__property int Items[int Index] = {read=GetItems};
public:
	/* TItemXpgList.Destroy */ inline __fastcall virtual ~TEnumXpgList() { }
	
};


class PASCALIMPLEMENTATION TFloatXpgList : public TItemXpgList
{
	typedef TItemXpgList inherited;
	
private:
	virtual System::UnicodeString __fastcall GetAsString(int Index);
	virtual void __fastcall SetAsString(int Index, const System::UnicodeString Value);
	System::Extended __fastcall GetItems(int Index);
	
protected:
	virtual System::UnicodeString __fastcall GetDelimitedText();
	virtual void __fastcall SetDelimitedText(const System::UnicodeString Value);
	
public:
	void __fastcall Add(System::Extended AValue)/* overload */;
	void __fastcall Add(System::UnicodeString AValue)/* overload */;
	__property System::Extended Items[int Index] = {read=GetItems};
public:
	/* TItemXpgList.Create */ inline __fastcall TFloatXpgList() : TItemXpgList() { }
	/* TItemXpgList.Destroy */ inline __fastcall virtual ~TFloatXpgList() { }
	
};


class PASCALIMPLEMENTATION TBooleanXpgList : public TItemXpgList
{
	typedef TItemXpgList inherited;
	
private:
	virtual System::UnicodeString __fastcall GetAsString(int Index);
	virtual void __fastcall SetAsString(int Index, const System::UnicodeString Value);
	bool __fastcall GetItems(int Index);
	
protected:
	virtual System::UnicodeString __fastcall GetDelimitedText();
	virtual void __fastcall SetDelimitedText(const System::UnicodeString Value);
	
public:
	void __fastcall Add(bool AValue)/* overload */;
	void __fastcall Add(System::UnicodeString AValue)/* overload */;
	__property bool Items[int Index] = {read=GetItems};
public:
	/* TItemXpgList.Create */ inline __fastcall TBooleanXpgList() : TItemXpgList() { }
	/* TItemXpgList.Destroy */ inline __fastcall virtual ~TBooleanXpgList() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xpgplists */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XPGPLISTS)
using namespace Xpgplists;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XpgplistsHPP
