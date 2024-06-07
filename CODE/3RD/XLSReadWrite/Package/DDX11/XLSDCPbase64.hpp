// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSDCPbase64.pas' rev: 35.00 (Windows)

#ifndef Xlsdcpbase64HPP
#define Xlsdcpbase64HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsdcpbase64
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int __fastcall Base64Encode(void * pInput, void * pOutput, int Size);
extern DELPHI_PACKAGE System::AnsiString __fastcall Base64EncodeStr(const System::AnsiString Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall Base64EncodeStr(const System::UnicodeString Value)/* overload */;
extern DELPHI_PACKAGE int __fastcall Base64Decode(void * pInput, void * pOutput, int Size);
extern DELPHI_PACKAGE System::AnsiString __fastcall Base64DecodeStr(const System::AnsiString Value)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall Base64DecodeStr(const System::UnicodeString Value)/* overload */;
}	/* namespace Xlsdcpbase64 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSDCPBASE64)
using namespace Xlsdcpbase64;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsdcpbase64HPP
