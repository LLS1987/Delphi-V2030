// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'xpgPSimpleDOM.pas' rev: 35.00 (Windows)

#ifndef XpgpsimpledomHPP
#define XpgpsimpledomHPP

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

namespace Xpgpsimpledom
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXpgDOMAttribute;
class DELPHICLASS TXpgDOMAttributes;
class DELPHICLASS TXpgDOMNodeList;
class DELPHICLASS TXpgDOMNode;
class DELPHICLASS TXpgSimpleDOM;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXpgDOMAttribute : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FName;
	System::UnicodeString FValue;
	int __fastcall GetAsInteger();
	System::AnsiString __fastcall GetAsBase64();
	
public:
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString Value = {read=FValue, write=FValue};
	__property int AsInteger = {read=GetAsInteger, nodefault};
	__property System::AnsiString AsBase64 = {read=GetAsBase64};
public:
	/* TObject.Create */ inline __fastcall TXpgDOMAttribute() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXpgDOMAttribute() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXpgDOMAttributes : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TXpgDOMAttribute* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXpgDOMAttribute* __fastcall GetItems(int Index);
	
protected:
	System::Contnrs::TObjectList* FItems;
	
public:
	__fastcall TXpgDOMAttributes();
	__fastcall virtual ~TXpgDOMAttributes();
	System::UnicodeString __fastcall AsText();
	void __fastcall Clear();
	void __fastcall Assign(TXpgDOMAttributes* ASource);
	TXpgDOMAttribute* __fastcall Add(const System::UnicodeString AName, const System::UnicodeString AValue)/* overload */;
	TXpgDOMAttribute* __fastcall Add(const System::UnicodeString AName, int AValue)/* overload */;
	TXpgDOMAttribute* __fastcall Add(const System::UnicodeString AName, double AValue)/* overload */;
	TXpgDOMAttribute* __fastcall Add(const System::UnicodeString AName, bool AValue)/* overload */;
	TXpgDOMAttribute* __fastcall Update(const System::UnicodeString AName, const System::UnicodeString AValue)/* overload */;
	TXpgDOMAttribute* __fastcall Update(const System::UnicodeString AName, int AValue)/* overload */;
	TXpgDOMAttribute* __fastcall Update(const System::UnicodeString AName, bool AValue)/* overload */;
	TXpgDOMAttribute* __fastcall Find(const System::UnicodeString AName);
	System::UnicodeString __fastcall FindValue(const System::UnicodeString AName);
	System::UnicodeString __fastcall FindValueDef(const System::UnicodeString AName, const System::UnicodeString ADefault);
	int __fastcall FindValueInt(const System::UnicodeString AName);
	int __fastcall FindValueIntDef(const System::UnicodeString AName, const int ADefault);
	int __fastcall FindValueHexDef(const System::UnicodeString AName, const int ADefault);
	bool __fastcall FindValueBool(const System::UnicodeString AName);
	double __fastcall FindValueFloatDef(const System::UnicodeString AName, const int ADefault);
	bool __fastcall EqualValue(const System::UnicodeString AName, const System::UnicodeString AMatchPrefix, const System::UnicodeString AValue);
	TXpgDOMAttributes* __fastcall Clone();
	int __fastcall Count();
	__property TXpgDOMAttribute* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXpgDOMNodeList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXpgDOMNode* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXpgDOMNode* __fastcall GetItems(int Index);
	
public:
	__fastcall TXpgDOMNodeList();
	__property TXpgDOMNode* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXpgDOMNodeList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXpgDOMNode : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TXpgDOMNode* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXpgDOMNode* __fastcall GetItems(int Index);
	bool __fastcall GetAsBoolean();
	double __fastcall GetAsFloat();
	int __fastcall GetAsInteger();
	System::UnicodeString __fastcall GetAsString();
	System::TDateTime __fastcall GetAsDateTime();
	void __fastcall SetAsBoolean(const bool Value);
	void __fastcall SetAsFloat(const double Value);
	void __fastcall SetAsInteger(const int Value);
	void __fastcall SetAsString(const System::UnicodeString Value);
	void __fastcall SetAsDateTime(const System::TDateTime Value);
	
protected:
	TXpgDOMNode* FParent;
	System::UnicodeString FQName;
	System::UnicodeString FContent;
	TXpgDOMAttributes* FAttributes;
	System::Contnrs::TObjectList* FChilds;
	virtual TXpgDOMNode* __fastcall CreateNode(TXpgDOMNode* AParent);
	void __fastcall DoFindAll(const System::UnicodeString APathName, TXpgDOMNodeList* AResult);
	
public:
	__fastcall TXpgDOMNode(TXpgDOMNode* AParent);
	__fastcall virtual ~TXpgDOMNode();
	void __fastcall Clear();
	void __fastcall Assign(TXpgDOMNode* ANode);
	TXpgDOMNode* __fastcall AddChild(const System::UnicodeString AQName)/* overload */;
	TXpgDOMNode* __fastcall AddChild(const System::UnicodeString AQName, const System::UnicodeString AContent)/* overload */;
	TXpgDOMNode* __fastcall AddChild(const System::UnicodeString AQName, double AContent)/* overload */;
	TXpgDOMNode* __fastcall AddChild(const System::UnicodeString AQName, bool AContent)/* overload */;
	TXpgDOMNode* __fastcall CheckChild(const System::UnicodeString AQName);
	void __fastcall AddAttribute(const System::UnicodeString AQName, const System::UnicodeString AValue)/* overload */;
	void __fastcall AddAttribute(const System::UnicodeString AQName, int AValue)/* overload */;
	void __fastcall AddAttribute(const System::UnicodeString AQName, bool AValue)/* overload */;
	TXpgDOMAttribute* __fastcall CheckAttribute(const System::UnicodeString AQName, const System::UnicodeString ADefaultValue);
	void __fastcall Delete(const int AIndex);
	TXpgDOMNode* __fastcall Detach(const int AIndex);
	bool __fastcall DeleteChildFirst(const System::UnicodeString AName)/* overload */;
	bool __fastcall DeleteChildFirst(const System::UnicodeString *ANames, const int ANames_High)/* overload */;
	int __fastcall DeleteChildAll(const System::UnicodeString AName);
	int __fastcall Count();
	TXpgDOMNode* __fastcall Find(const System::UnicodeString APathName, bool ARequired = false)/* overload */;
	int __fastcall Find(const System::UnicodeString *ANames, const int ANames_High, bool ARequired, /* out */ TXpgDOMNode* &ANode)/* overload */;
	TXpgDOMNodeList* __fastcall FindAll(const System::UnicodeString APathName);
	TXpgDOMNode* __fastcall FindChildWithAttrValue(const System::UnicodeString AAttribute, const System::UnicodeString AValue);
	System::UnicodeString __fastcall GetContent(const System::UnicodeString AName);
	TXpgDOMNode* __fastcall Clone();
	void __fastcall Insert(TXpgDOMNode* ANode);
	int __fastcall Index();
	TXpgDOMNode* __fastcall PrevSibling();
	TXpgDOMNode* __fastcall NextSibling();
	__property TXpgDOMNode* Parent = {read=FParent};
	__property System::UnicodeString QName = {read=FQName, write=FQName};
	__property System::UnicodeString Content = {read=FContent, write=FContent};
	__property TXpgDOMAttributes* Attributes = {read=FAttributes};
	__property System::UnicodeString AsString = {read=GetAsString, write=SetAsString};
	__property int AsInteger = {read=GetAsInteger, write=SetAsInteger, nodefault};
	__property double AsFloat = {read=GetAsFloat, write=SetAsFloat};
	__property bool AsBoolean = {read=GetAsBoolean, write=SetAsBoolean, nodefault};
	__property System::TDateTime AsDateTime = {read=GetAsDateTime, write=SetAsDateTime};
	__property TXpgDOMNode* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXpgSimpleDOM : public Xpgpxml::TXpgReadXML
{
	typedef Xpgpxml::TXpgReadXML inherited;
	
protected:
	System::Contnrs::TObjectStack* FStack;
	TXpgDOMNode* FRoot;
	virtual TXpgDOMNode* __fastcall CreateRoot();
	
public:
	__fastcall TXpgSimpleDOM();
	__fastcall virtual ~TXpgSimpleDOM();
	virtual void __fastcall Clear();
	virtual void __fastcall BeginTag();
	virtual void __fastcall EndTag();
	bool __fastcall Empty();
	HIDESBASE int __fastcall LoadFromFile(const System::UnicodeString AFilename);
	virtual int __fastcall LoadFromStream(System::Classes::TStream* AStream, bool ARestore = false);
	virtual int __fastcall LoadFromStreamHtml(System::Classes::TStream* AStream);
	void __fastcall LoadFromString(System::UnicodeString AStr);
	int __fastcall LoadFromBuffer(System::Sysutils::PByteArray ABuf, int AMaxSize);
	void __fastcall SaveToFile(const System::UnicodeString AFilename);
	void __fastcall SaveToStream(System::Classes::TStream* AStream);
	System::UnicodeString __fastcall SaveToString();
	__property TXpgDOMNode* Root = {read=FRoot};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xpgpsimpledom */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XPGPSIMPLEDOM)
using namespace Xpgpsimpledom;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XpgpsimpledomHPP
