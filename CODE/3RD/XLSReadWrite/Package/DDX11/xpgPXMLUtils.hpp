// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'xpgPXMLUtils.pas' rev: 35.00 (Windows)

#ifndef XpgpxmlutilsHPP
#define XpgpxmlutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <XLSUtils5.hpp>
#include <xpgPUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xpgpxmlutils
{
//-- forward type declarations -----------------------------------------------
struct TXpgXMLString;
struct TXpgXMLUCString;
struct TXpgXmlAttribute;
class DELPHICLASS TXpgXMLAttributeList;
//-- type declarations -------------------------------------------------------
typedef char Ax8Char;

typedef System::AnsiString Ax8String;

enum DECLSPEC_DENUM TXpgAssigned : unsigned char { xaElements, xaAttributes, xaContent, xaRead };

typedef System::Set<TXpgAssigned, TXpgAssigned::xaElements, TXpgAssigned::xaRead> TXpgAssigneds;

struct DECLSPEC_DRECORD TXpgXMLString
{
public:
	char *pStart;
	char *pEnd;
};


struct DECLSPEC_DRECORD TXpgXMLUCString
{
public:
	System::WideChar *pStart;
	System::WideChar *pEnd;
};


typedef TXpgXmlAttribute *PXpgXmlAttribute;

struct DECLSPEC_DRECORD TXpgXmlAttribute
{
public:
	TXpgXMLString Attribute;
	TXpgXMLString Value;
	System::UnicodeString sAttr;
	System::UnicodeString sVal;
	int Flag;
};


typedef System::DynamicArray<TXpgXmlAttribute> TXpgXmlAttributeArray;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXpgXMLAttributeList : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::UnicodeString operator[](int Index) { return this->Attributes[Index]; }
	
private:
	System::UnicodeString __fastcall GetAttributes(int Index);
	System::UnicodeString __fastcall GetValues(int Index);
	unsigned __fastcall GetHashA(int Index);
	unsigned __fastcall GetHashB(int Index);
	unsigned __fastcall GetHashC(int Index);
	unsigned __fastcall GetHashD(int Index);
	
protected:
	System::Classes::TList* FSortList;
	bool FSorted;
	int FCount;
	bool FSnatching;
	System::UnicodeString FBadEnumValue;
	System::UnicodeString __fastcall GetAsString(const TXpgXMLString &Str);
	System::UnicodeString __fastcall GetAsStringUTF8(const TXpgXMLString &Str);
	void __fastcall MakeStrings();
	void __fastcall Sort();
	
public:
	TXpgXmlAttributeArray FAttributes;
	__fastcall TXpgXMLAttributeList();
	__fastcall virtual ~TXpgXMLAttributeList();
	void __fastcall Clear();
	void __fastcall ClearNamespace();
	void __fastcall Assign(TXpgXmlAttributeArray AAttributes, int ACount);
	int __fastcall Count();
	int __fastcall Find(const System::UnicodeString AName)/* overload */;
	bool __fastcall Find(const System::UnicodeString AName, /* out */ System::UnicodeString &AValue)/* overload */;
	void __fastcall CollectPrefixed(System::UnicodeString APrefix, System::Classes::TStrings* AList);
	void __fastcall BeginSnatch();
	void __fastcall EndSnatch(System::Classes::TStrings* BadAttributes);
	System::UnicodeString __fastcall AsString(const System::UnicodeString AName);
	System::UnicodeString __fastcall AsXmlText();
	System::UnicodeString __fastcall AsXmlText2(int AIndex);
	bool __fastcall AsBoolDef(const System::UnicodeString AName, bool ADefault);
	int __fastcall AsIntegerDef(const System::UnicodeString AName, int ADefault);
	System::UnicodeString __fastcall AsStringDef(const System::UnicodeString AName, const System::UnicodeString ADefault);
	int __fastcall AsEnumDef(const System::UnicodeString AName, System::UnicodeString *AEnums, const int AEnums_High, int ADefault);
	System::UnicodeString __fastcall EnumError();
	void __fastcall Add(TXpgXmlAttributeArray AAttributes, int ACount)/* overload */;
	void __fastcall Add(const System::UnicodeString AName, const System::UnicodeString AValue)/* overload */;
	__property System::UnicodeString Attributes[int Index] = {read=GetAttributes/*, default*/};
	__property System::UnicodeString Values[int Index] = {read=GetValues};
	__property unsigned HashA[int Index] = {read=GetHashA};
	__property unsigned HashB[int Index] = {read=GetHashB};
	__property unsigned HashC[int Index] = {read=GetHashC};
	__property unsigned HashD[int Index] = {read=GetHashD};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Byte AX_XML_MAX_ATTRIBUTES = System::Byte(0xff);
}	/* namespace Xpgpxmlutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XPGPXMLUTILS)
using namespace Xpgpxmlutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XpgpxmlutilsHPP
