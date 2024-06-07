// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'xpgPUtils.pas' rev: 35.00 (Windows)

#ifndef XpgputilsHPP
#define XpgputilsHPP

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

namespace Xpgputils
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXpgPErrors;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXpgErrorMsg : unsigned char { xemUnknownAttribute, xemUnknownElement };

typedef void __fastcall (__closure *TWriteElementEvent)(System::TObject* Sender, bool &WriteElement);

class PASCALIMPLEMENTATION TXpgPErrors : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall SetErrorEvent(const System::Classes::TNotifyEvent Value);
	
protected:
	bool FNoDuplicates;
	System::UnicodeString FErrorText;
	System::Classes::TNotifyEvent FErrorEvent;
	
public:
	__fastcall TXpgPErrors();
	void __fastcall Error(TXpgErrorMsg Msg, const System::UnicodeString Args, int ARow = 0x0);
	int __fastcall Count();
	void __fastcall GetDuplicates(System::Classes::TStrings* AStrings);
	__property bool NoDuplicates = {read=FNoDuplicates, write=FNoDuplicates, nodefault};
	__property System::UnicodeString LastErrorText = {read=FErrorText};
	__property System::Classes::TNotifyEvent OnError = {read=FErrorEvent, write=SetErrorEvent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXpgPErrors() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Byte XPG_UNKNOWN_ENUM = System::Byte(0xff);
static const System::Int8 HASH_FUNC_COUNT = System::Int8(0x5);
extern DELPHI_PACKAGE System::Extended __fastcall XmlStrToFloat(const System::UnicodeString AValue);
extern DELPHI_PACKAGE bool __fastcall XmlStrToBool(const System::UnicodeString AValue);
extern DELPHI_PACKAGE int __fastcall XmlStrToIntDef(const System::UnicodeString AValue, int ADefault);
extern DELPHI_PACKAGE bool __fastcall XmlStrToBoolDef(const System::UnicodeString AValue, bool ADefault);
extern DELPHI_PACKAGE System::Extended __fastcall XmlStrToFloatDef(const System::UnicodeString AValue, System::Extended ADefault);
extern DELPHI_PACKAGE int __fastcall XmlStrHexToIntDef(const System::UnicodeString AValue, int ADefault);
extern DELPHI_PACKAGE System::TDateTime __fastcall XmlStrToDateTime(const System::UnicodeString AValue);
extern DELPHI_PACKAGE System::TDateTime __fastcall XmlStrToTime(const System::UnicodeString AValue);
extern DELPHI_PACKAGE System::TDateTime __fastcall XmlStrToDate(const System::UnicodeString AValue);
extern DELPHI_PACKAGE bool __fastcall XmlTryStrToInt(const System::UnicodeString AValue, /* out */ int &AResult)/* overload */;
extern DELPHI_PACKAGE bool __fastcall XmlTryStrToInt(const System::UnicodeString AValue, /* out */ unsigned &AResult)/* overload */;
extern DELPHI_PACKAGE bool __fastcall XmlTryStrToBool(const System::UnicodeString AValue, /* out */ bool &AResult);
extern DELPHI_PACKAGE bool __fastcall XmlTryStrToFloat(const System::UnicodeString AValue, /* out */ double &AResult)/* overload */;
extern DELPHI_PACKAGE bool __fastcall XmlTryStrToDateTime(const System::UnicodeString AValue, /* out */ System::TDateTime &AResult);
extern DELPHI_PACKAGE bool __fastcall XmlTryStrToTime(const System::UnicodeString AValue, /* out */ System::TDateTime &AResult);
extern DELPHI_PACKAGE bool __fastcall XmlTryStrToDate(const System::UnicodeString AValue, /* out */ System::TDateTime &AResult);
extern DELPHI_PACKAGE System::UnicodeString __fastcall XmlIntToStr(const int AValue);
extern DELPHI_PACKAGE System::UnicodeString __fastcall XmlIntToHexStr(const int AValue)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall XmlIntToHexStr(const int AValue, int ADigits)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall XmlFloatToStr(const System::Extended AValue);
extern DELPHI_PACKAGE System::UnicodeString __fastcall XmlDateTimeToStr(const System::TDateTime AValue);
extern DELPHI_PACKAGE System::UnicodeString __fastcall XmlBoolToStr(const bool AValue);
extern DELPHI_PACKAGE System::UnicodeString __fastcall XmlStrToBoolToStr(const System::UnicodeString AValue);
extern DELPHI_PACKAGE void __fastcall HtmlCheckText(System::UnicodeString &AText);
extern DELPHI_PACKAGE System::UnicodeString __fastcall NameOfQName(System::UnicodeString AQName);
extern DELPHI_PACKAGE System::AnsiString __fastcall XPGDecodeBase64(const System::AnsiString Value);
extern DELPHI_PACKAGE unsigned __fastcall CalcHash_A(const System::UnicodeString Str);
extern DELPHI_PACKAGE unsigned __fastcall CalcHash_A_P(const char * Str);
extern DELPHI_PACKAGE unsigned __fastcall CalcHash_B(const System::UnicodeString Str);
extern DELPHI_PACKAGE unsigned __fastcall CalcHash_C(const System::UnicodeString Str);
extern DELPHI_PACKAGE unsigned __fastcall CalcHash_D(const System::UnicodeString Str);
extern DELPHI_PACKAGE unsigned __fastcall CalcHash_CRC32(const System::UnicodeString Str);
}	/* namespace Xpgputils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XPGPUTILS)
using namespace Xpgputils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XpgputilsHPP
