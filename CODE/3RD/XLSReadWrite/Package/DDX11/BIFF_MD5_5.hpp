// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_MD5_5.pas' rev: 35.00 (Windows)

#ifndef Biff_md5_5HPP
#define Biff_md5_5HPP

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

namespace Biff_md5_5
{
//-- forward type declarations -----------------------------------------------
struct TMD5Context;
class DELPHICLASS TMD5;
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<unsigned, 16> TLongwordArray;

typedef TLongwordArray *PLongwordArray;

struct DECLSPEC_DRECORD TMD5Context
{
public:
	System::StaticArray<unsigned, 2> I;
	System::StaticArray<unsigned, 4> Buf;
	System::StaticArray<System::Byte, 64> InBuf;
	System::StaticArray<System::Byte, 16> Digest;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TMD5 : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	void __fastcall Compress(PLongwordArray Buf, PLongwordArray Data);
	
public:
	void __fastcall Init(TMD5Context &Ctx);
	void __fastcall Update(TMD5Context &Ctx, System::Sysutils::PByteArray InBuf, unsigned InLen);
	void __fastcall Store(TMD5Context &Ctx);
public:
	/* TObject.Create */ inline __fastcall TMD5() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TMD5() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::UnicodeString __fastcall XLSMD5String(const System::AnsiString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall XLSMD5Buffer(const void *Buffer, int Size);
}	/* namespace Biff_md5_5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_MD5_5)
using namespace Biff_md5_5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_md5_5HPP
