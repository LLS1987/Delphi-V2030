// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSDCPsha1.pas' rev: 35.00 (Windows)

#ifndef Xlsdcpsha1HPP
#define Xlsdcpsha1HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <XLSDCPcrypt2.hpp>
#include <XLSDCPconst.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsdcpsha1
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDCP_sha1;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDCP_sha1 : public Xlsdcpcrypt2::TDCP_hash
{
	typedef Xlsdcpcrypt2::TDCP_hash inherited;
	
protected:
	unsigned LenHi;
	unsigned LenLo;
	unsigned Index;
	System::StaticArray<unsigned, 5> CurrentHash;
	System::StaticArray<System::Byte, 64> HashBuffer;
	void __fastcall Compress();
	
public:
	__classmethod virtual int __fastcall GetId();
	__classmethod virtual System::UnicodeString __fastcall GetAlgorithm();
	__classmethod virtual int __fastcall GetHashSize();
	__classmethod virtual bool __fastcall SelfTest();
	virtual void __fastcall Init();
	virtual void __fastcall Final(void *Digest);
	virtual void __fastcall Burn();
	virtual void __fastcall Update(const void *Buffer, unsigned Size);
public:
	/* TDCP_hash.Destroy */ inline __fastcall virtual ~TDCP_sha1() { }
	
public:
	/* TObject.Create */ inline __fastcall TDCP_sha1() : Xlsdcpcrypt2::TDCP_hash() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsdcpsha1 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSDCPSHA1)
using namespace Xlsdcpsha1;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsdcpsha1HPP
