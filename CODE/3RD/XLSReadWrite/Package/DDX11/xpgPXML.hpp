// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'xpgPXML.pas' rev: 35.00 (Windows)

#ifndef XpgpxmlHPP
#define XpgpxmlHPP

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
#include <Winapi.Windows.hpp>
#include <XLSUtils5.hpp>
#include <xpgPUtils.hpp>
#include <xpgPXMLUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xpgpxml
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXpgStrStack;
class DELPHICLASS TXpgWriteXML;
struct TReadState;
class DELPHICLASS TXpgReadXML;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TAxBOM : unsigned char { axbomNone, axbomUTF8, axbomUTF16BE, axbomUTF16LE, axbomUTF32BE, axbomUTF32LE };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXpgStrStack : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::Classes::TStringList* FValues;
	
public:
	__fastcall TXpgStrStack();
	__fastcall virtual ~TXpgStrStack();
	void __fastcall Push(System::UnicodeString AValue);
	System::UnicodeString __fastcall Pop();
	int __fastcall Count();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXpgWriteXML : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall SetAttributes(const System::UnicodeString Value);
	
protected:
	System::Classes::TStream* FStream;
	bool FOwnsStream;
	bool FAborted;
	System::UnicodeString FText;
	Xpgpxmlutils::TXpgXMLString FAttributes;
	TXpgStrStack* FStack;
	System::AnsiString FSpaces;
	bool FWriteIndent;
	void __fastcall AddAttr(const System::UnicodeString AValue);
	void __fastcall CopyToBufUTF8(System::UnicodeString AValue);
	void __fastcall WriteString(const System::UnicodeString S)/* overload */;
	void __fastcall WriteString(const char * S, const int Len)/* overload */;
	
public:
	__fastcall TXpgWriteXML();
	__fastcall virtual ~TXpgWriteXML();
	void __fastcall SaveToStream(System::Classes::TStream* AStream);
	void __fastcall SaveToFile(System::UnicodeString AFilename);
	void __fastcall Declaration();
	void __fastcall BeginTag(const System::UnicodeString AName)/* overload */;
	void __fastcall SimpleTag(const System::UnicodeString AName)/* overload */;
	void __fastcall SimpleTextTag(const System::UnicodeString AName, const System::UnicodeString AText);
	void __fastcall EmptyTag(const System::UnicodeString AName);
	void __fastcall EndTag();
	void __fastcall AddAttribute(const System::UnicodeString AName, const System::UnicodeString AValue);
	__property System::UnicodeString Text = {read=FText, write=FText};
	__property System::UnicodeString Attributes = {write=SetAttributes};
	__property bool WriteIndent = {read=FWriteIndent, write=FWriteIndent, nodefault};
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TReadState
{
public:
	int Sz;
	bool Ok;
	System::Sysutils::TByteArray *Buf;
	int BufSz;
	int AllocSz;
	char *ppP1;
	char *ppP2;
	char *ppLT;
	char *ppGT;
	char *ppEnd;
	char *ppMax;
	char *ppColon;
	char *ppSlash1;
	char *ppSlash2;
	char *ppEq;
	char *ppQuestion;
	char *ppQuote;
	char *ppText;
	int Result;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXpgReadXML : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::Sysutils::TByteArray *Buf;
	System::Classes::TStream* FStream;
	bool FAborted;
	TAxBOM FBOM;
	Xpgpxmlutils::TXpgXMLString FNamespace;
	bool FHasNamespace;
	Xpgpxmlutils::TXpgXMLString FTag;
	Xpgpxmlutils::TXpgXMLString FElementVal;
	Xpgpxmlutils::TXpgXmlAttributeArray FAttributes;
	int FAttrCount;
	Xpgpxmlutils::TXpgXMLString FText;
	bool FHasText;
	Xpgpxmlutils::TXpgXMLString FComment;
	int FRow;
	System::StaticArray<System::Byte, 256> FBuf;
	bool FPreserveSpaces;
	bool FSkipNamespace;
	bool FHtmlRawMode;
	Xpgpxmlutils::TXpgXMLAttributeList* FAttrList;
	TReadState FReadState;
	bool F_Stop;
	void __fastcall CheckBOM();
	System::UnicodeString __fastcall GetAsString(const Xpgpxmlutils::TXpgXMLString &Str);
	System::UnicodeString __fastcall GetAsStringUTF8(const Xpgpxmlutils::TXpgXMLString &Str);
	void __fastcall MakeLowercase(const Xpgpxmlutils::TXpgXMLString &Str);
	
public:
	__fastcall TXpgReadXML();
	__fastcall virtual ~TXpgReadXML();
	virtual void __fastcall Clear();
	void __fastcall ClearNamespace();
	virtual int __fastcall LoadFromStream(System::Classes::TStream* AStream, bool ARestore = false);
	void __fastcall LoadFromFile(System::UnicodeString AFilename);
	virtual int __fastcall LoadFromStreamHtml(System::Classes::TStream* AStream);
	virtual void __fastcall Declaration();
	virtual void __fastcall BeginTag();
	virtual void __fastcall EndTag();
	virtual void __fastcall Comment();
	bool __fastcall CmpTag(const System::UnicodeString S);
	System::UnicodeString __fastcall Namespace();
	System::UnicodeString __fastcall Tag();
	System::UnicodeString __fastcall Text();
	System::UnicodeString __fastcall QName();
	char * __fastcall QNameP();
	char * __fastcall QNameT();
	bool __fastcall QNameIsC();
	bool __fastcall QNameIsV();
	unsigned __fastcall NameHashA(System::UnicodeString NS);
	unsigned __fastcall QNameHashA();
	unsigned __fastcall QNameHashB();
	unsigned __fastcall QNameHashC();
	unsigned __fastcall QNameHashD();
	System::UnicodeString __fastcall FindAttribute(const System::UnicodeString Attr);
	int __fastcall Col();
	int __fastcall Row();
	void __fastcall Abort();
	__property Xpgpxmlutils::TXpgXMLAttributeList* Attributes = {read=FAttrList};
	__property bool HasText = {read=FHasText, nodefault};
	__property bool PreserveSpaces = {read=FPreserveSpaces, write=FPreserveSpaces, nodefault};
	__property bool SkipNamespace = {read=FSkipNamespace, write=FSkipNamespace, nodefault};
	__property bool _Stop = {read=F_Stop, write=F_Stop, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const int AX_STREAM_READ_BUF_SZ = int(0x2fffff);
static const int AX_STREAM_READ_BUF_SZ_EX = int(0x17ffff);
static const System::Word AX_STREAM_READ_MAX_ALLOC = System::Word(0xffff);
static const System::Word AX_STREAM_WRITE_BUF_SZ = System::Word(0x7fff);
static const System::Word AX_STREAM_WRITE_BUF_SZ_EX = System::Word(0xffff);
static const System::Word AX_MAXINDENT = System::Word(0x100);
}	/* namespace Xpgpxml */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XPGPXML)
using namespace Xpgpxml;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XpgpxmlHPP
