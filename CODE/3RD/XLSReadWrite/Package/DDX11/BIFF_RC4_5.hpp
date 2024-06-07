// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_RC4_5.pas' rev: 35.00 (Windows)

#ifndef Biff_rc4_5HPP
#define Biff_rc4_5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_rc4_5
{
//-- forward type declarations -----------------------------------------------
struct TRC4Key;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TRC4Key
{
public:
	System::StaticArray<System::Byte, 256> State;
	System::Byte x;
	System::Byte y;
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall RC4PrepareKey(System::Sysutils::PByteArray KeyData, int DataLen, TRC4Key &Key);
extern DELPHI_PACKAGE void __fastcall RC4(System::Sysutils::PByteArray Buffer, int BuffLen, TRC4Key &Key);
}	/* namespace Biff_rc4_5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_RC4_5)
using namespace Biff_rc4_5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_rc4_5HPP
