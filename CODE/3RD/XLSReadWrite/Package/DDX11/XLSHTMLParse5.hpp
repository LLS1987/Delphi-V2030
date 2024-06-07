// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSHTMLParse5.pas' rev: 35.00 (Windows)

#ifndef Xlshtmlparse5HPP
#define Xlshtmlparse5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <XLSUtils5.hpp>
#include <XLSHTMLTypes5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlshtmlparse5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THTMLParser;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION THTMLParser : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TStream* FStream;
	char *Buffer;
	int BufferPos;
	int BytesInBuffer;
	int ElementCount;
	Xlshtmltypes5::THTMLElementArray *Elements;
	int LineCount;
	bool FSpecialDecodeText;
	System::UnicodeString FCSSText;
	void __fastcall CreateHash();
	void __fastcall NewElement(Xlshtmltypes5::THTMLElementID ID);
	bool __fastcall ReadStream();
	bool __fastcall GetNextChar(System::WideChar &C, bool PreserveCR = false);
	bool __fastcall GetNextTag();
	Xlshtmltypes5::THTMLElementID __fastcall GetElementID(System::UnicodeString S);
	Xlshtmltypes5::TElementAttributeID __fastcall GetAttributeID(System::UnicodeString S);
	void __fastcall AddAttribute(int Index, Xlshtmltypes5::TElementAttributeID ID, System::UnicodeString Data);
	void __fastcall ScanAttributes(int Index, System::UnicodeString S);
	void __fastcall DoComment();
	void __fastcall DoCSS();
	void __fastcall DoScript();
	
public:
	__fastcall THTMLParser(Xlshtmltypes5::THTMLElementArray &E);
	__fastcall virtual ~THTMLParser();
	void __fastcall Clear();
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromFile(const System::UnicodeString Filename);
	Xlshtmltypes5::PElementAttribute __fastcall GetAttribute(const Xlshtmltypes5::THTMLElement &E, Xlshtmltypes5::TElementAttributeID Attr);
	bool __fastcall GetStrAttribute(const Xlshtmltypes5::THTMLElement &E, Xlshtmltypes5::TElementAttributeID Attr, System::UnicodeString &S);
	__property bool SpecialDecodeText = {read=FSpecialDecodeText, write=FSpecialDecodeText, nodefault};
	__property System::UnicodeString CSSText = {read=FCSSText};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::UnicodeString __fastcall DecodeQuotedPrintable(const System::UnicodeString S);
}	/* namespace Xlshtmlparse5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSHTMLPARSE5)
using namespace Xlshtmlparse5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlshtmlparse5HPP
