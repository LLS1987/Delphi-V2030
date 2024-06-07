// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSDCPsha512.pas' rev: 35.00 (Windows)

#ifndef Xlsdcpsha512HPP
#define Xlsdcpsha512HPP

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

namespace Xlsdcpsha512
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDCP_sha512base;
class DELPHICLASS TDCP_sha384;
class DELPHICLASS TDCP_sha512;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TDCP_sha512base : public Xlsdcpcrypt2::TDCP_hash
{
	typedef Xlsdcpcrypt2::TDCP_hash inherited;
	
protected:
	__int64 LenHi;
	__int64 LenLo;
	unsigned Index;
	System::StaticArray<__int64, 8> CurrentHash;
	System::StaticArray<System::Byte, 128> HashBuffer;
	void __fastcall Compress();
	
public:
	virtual void __fastcall Update(const void *Buffer, unsigned Size);
	virtual void __fastcall Burn();
public:
	/* TDCP_hash.Destroy */ inline __fastcall virtual ~TDCP_sha512base() { }
	
public:
	/* TObject.Create */ inline __fastcall TDCP_sha512base() : Xlsdcpcrypt2::TDCP_hash() { }
	
};


class PASCALIMPLEMENTATION TDCP_sha384 : public TDCP_sha512base
{
	typedef TDCP_sha512base inherited;
	
public:
	__classmethod virtual int __fastcall GetId();
	__classmethod virtual System::UnicodeString __fastcall GetAlgorithm();
	__classmethod virtual int __fastcall GetHashSize();
	__classmethod virtual bool __fastcall SelfTest();
	virtual void __fastcall Init();
	virtual void __fastcall Final(void *Digest);
public:
	/* TDCP_hash.Destroy */ inline __fastcall virtual ~TDCP_sha384() { }
	
public:
	/* TObject.Create */ inline __fastcall TDCP_sha384() : TDCP_sha512base() { }
	
};


class PASCALIMPLEMENTATION TDCP_sha512 : public TDCP_sha512base
{
	typedef TDCP_sha512base inherited;
	
public:
	__classmethod virtual int __fastcall GetId();
	__classmethod virtual System::UnicodeString __fastcall GetAlgorithm();
	__classmethod virtual int __fastcall GetHashSize();
	__classmethod virtual bool __fastcall SelfTest();
	virtual void __fastcall Init();
	virtual void __fastcall Final(void *Digest);
public:
	/* TDCP_hash.Destroy */ inline __fastcall virtual ~TDCP_sha512() { }
	
public:
	/* TObject.Create */ inline __fastcall TDCP_sha512() : TDCP_sha512base() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsdcpsha512 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSDCPSHA512)
using namespace Xlsdcpsha512;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsdcpsha512HPP
