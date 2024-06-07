// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_MD4Hash_5.pas' rev: 35.00 (Windows)

#ifndef Biff_md4hash_5HPP
#define Biff_md4hash_5HPP

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

namespace Biff_md4hash_5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMD4Hash;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TMD4Hash : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FInitialized;
	unsigned LenHi;
	unsigned LenLo;
	unsigned Index;
	System::StaticArray<unsigned, 4> CurrentHash;
	System::StaticArray<System::Byte, 64> HashBuffer;
	void __fastcall Compress();
	
public:
	void __fastcall Init();
	void __fastcall Clear();
	void __fastcall Update(const void *Buffer, unsigned Size);
	void __fastcall Final(void *Digest);
public:
	/* TObject.Create */ inline __fastcall TMD4Hash() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TMD4Hash() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Biff_md4hash_5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_MD4HASH_5)
using namespace Biff_md4hash_5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_md4hash_5HPP
