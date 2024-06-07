// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSDCPcrypt2.pas' rev: 35.00 (Windows)

#ifndef Xlsdcpcrypt2HPP
#define Xlsdcpcrypt2HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <XLSDCPbase64.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsdcpcrypt2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EDCP_hash;
class DELPHICLASS TDCP_hash;
class DELPHICLASS EDCP_cipher;
class DELPHICLASS TDCP_cipher;
class DELPHICLASS EDCP_blockcipher;
class DELPHICLASS TDCP_blockcipher;
//-- type declarations -------------------------------------------------------
typedef System::Byte *Pbyte;

typedef System::Word *Pword;

typedef unsigned *Pdword;

typedef __int64 *Pint64;

typedef unsigned dword;

typedef System::StaticArray<System::Word, 19384> Twordarray;

typedef Twordarray *Pwordarray;

typedef System::StaticArray<unsigned, 8192> Tdwordarray;

typedef Tdwordarray *Pdwordarray;

typedef Pbyte PointerToInt;

#pragma pack(push,4)
class PASCALIMPLEMENTATION EDCP_hash : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EDCP_hash(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EDCP_hash(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EDCP_hash(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EDCP_hash(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EDCP_hash(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EDCP_hash(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EDCP_hash(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EDCP_hash(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDCP_hash(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDCP_hash(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDCP_hash(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDCP_hash(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EDCP_hash() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDCP_hash : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool fInitialized;
	void __fastcall DeadInt(int Value);
	void __fastcall DeadStr(System::UnicodeString Value);
	
private:
	int __fastcall _GetId();
	System::UnicodeString __fastcall _GetAlgorithm();
	int __fastcall _GetHashSize();
	
public:
	__property bool Initialized = {read=fInitialized, nodefault};
	__classmethod virtual int __fastcall GetId();
	__classmethod virtual System::UnicodeString __fastcall GetAlgorithm();
	__classmethod virtual int __fastcall GetHashSize();
	__classmethod virtual bool __fastcall SelfTest();
	virtual void __fastcall Init();
	virtual void __fastcall Final(void *Digest);
	virtual void __fastcall Burn();
	virtual void __fastcall Update(const void *Buffer, unsigned Size);
	void __fastcall UpdateStream(System::Classes::TStream* Stream, unsigned Size);
	void __fastcall UpdateUnicodeStr(const System::UnicodeString Str)/* overload */;
	__fastcall virtual ~TDCP_hash();
	__property int Id = {read=_GetId, write=DeadInt, nodefault};
	__property System::UnicodeString Algorithm = {read=_GetAlgorithm, write=DeadStr};
	__property int HashSize = {read=_GetHashSize, write=DeadInt, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDCP_hash() : System::TObject() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TDCP_hashclass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION EDCP_cipher : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EDCP_cipher(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EDCP_cipher(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EDCP_cipher(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EDCP_cipher(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EDCP_cipher(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EDCP_cipher(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EDCP_cipher(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EDCP_cipher(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDCP_cipher(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDCP_cipher(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDCP_cipher(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDCP_cipher(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EDCP_cipher() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TDCP_cipher : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
protected:
	bool fInitialized;
	void __fastcall DeadInt(int Value);
	void __fastcall DeadStr(System::UnicodeString Value);
	
private:
	int __fastcall _GetId();
	System::UnicodeString __fastcall _GetAlgorithm();
	int __fastcall _GetMaxKeySize();
	
public:
	__property bool Initialized = {read=fInitialized, nodefault};
	__classmethod virtual int __fastcall GetId();
	__classmethod virtual System::UnicodeString __fastcall GetAlgorithm();
	__classmethod virtual int __fastcall GetMaxKeySize();
	__classmethod virtual bool __fastcall SelfTest();
	virtual void __fastcall Init(const void *Key, unsigned Size, void * InitVector);
	void __fastcall InitUnicodeStr(const System::UnicodeString Key, TDCP_hashclass HashType);
	virtual void __fastcall Burn();
	virtual void __fastcall Reset();
	virtual void __fastcall Encrypt(const void *Indata, void *Outdata, unsigned Size);
	virtual void __fastcall Decrypt(const void *Indata, void *Outdata, unsigned Size);
	unsigned __fastcall EncryptStream(System::Classes::TStream* InStream, System::Classes::TStream* OutStream, unsigned Size);
	unsigned __fastcall DecryptStream(System::Classes::TStream* InStream, System::Classes::TStream* OutStream, unsigned Size);
	virtual System::UnicodeString __fastcall EncryptUnicodeString(const System::UnicodeString Str);
	virtual System::UnicodeString __fastcall DecryptUnicodeString(const System::UnicodeString Str);
	unsigned __fastcall PartialEncryptStream(System::Classes::TMemoryStream* AStream, unsigned Size);
	unsigned __fastcall PartialDecryptStream(System::Classes::TMemoryStream* AStream, unsigned Size);
	__fastcall virtual TDCP_cipher(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDCP_cipher();
	
__published:
	__property int Id = {read=_GetId, write=DeadInt, nodefault};
	__property System::UnicodeString Algorithm = {read=_GetAlgorithm, write=DeadStr};
	__property int MaxKeySize = {read=_GetMaxKeySize, write=DeadInt, nodefault};
};


typedef System::TMetaClass* TDCP_cipherclass;

enum DECLSPEC_DENUM TDCP_ciphermode : unsigned char { cmCBC, cmCFB8bit, cmCFBblock, cmOFB, cmCTR };

#pragma pack(push,4)
class PASCALIMPLEMENTATION EDCP_blockcipher : public EDCP_cipher
{
	typedef EDCP_cipher inherited;
	
public:
	/* Exception.Create */ inline __fastcall EDCP_blockcipher(const System::UnicodeString Msg) : EDCP_cipher(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EDCP_blockcipher(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EDCP_cipher(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EDCP_blockcipher(NativeUInt Ident)/* overload */ : EDCP_cipher(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EDCP_blockcipher(System::PResStringRec ResStringRec)/* overload */ : EDCP_cipher(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EDCP_blockcipher(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EDCP_cipher(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EDCP_blockcipher(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EDCP_cipher(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EDCP_blockcipher(const System::UnicodeString Msg, int AHelpContext) : EDCP_cipher(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EDCP_blockcipher(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EDCP_cipher(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDCP_blockcipher(NativeUInt Ident, int AHelpContext)/* overload */ : EDCP_cipher(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDCP_blockcipher(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EDCP_cipher(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDCP_blockcipher(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EDCP_cipher(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDCP_blockcipher(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EDCP_cipher(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EDCP_blockcipher() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TDCP_blockcipher : public TDCP_cipher
{
	typedef TDCP_cipher inherited;
	
protected:
	TDCP_ciphermode fCipherMode;
	virtual void __fastcall InitKey(const void *Key, unsigned Size);
	
private:
	int __fastcall _GetBlockSize();
	
public:
	__classmethod virtual int __fastcall GetBlockSize();
	virtual void __fastcall SetIV(const void *Value);
	virtual void __fastcall GetIV(void *Value);
	virtual void __fastcall Encrypt(const void *Indata, void *Outdata, unsigned Size);
	virtual void __fastcall Decrypt(const void *Indata, void *Outdata, unsigned Size);
	virtual System::UnicodeString __fastcall EncryptUnicodeString(const System::UnicodeString Str);
	virtual System::UnicodeString __fastcall DecryptUnicodeString(const System::UnicodeString Str);
	virtual void __fastcall EncryptECB(const void *Indata, void *Outdata);
	virtual void __fastcall DecryptECB(const void *Indata, void *Outdata);
	virtual void __fastcall EncryptCBC(const void *Indata, void *Outdata, unsigned Size);
	virtual void __fastcall DecryptCBC(const void *Indata, void *Outdata, unsigned Size);
	virtual void __fastcall EncryptCFB8bit(const void *Indata, void *Outdata, unsigned Size);
	virtual void __fastcall DecryptCFB8bit(const void *Indata, void *Outdata, unsigned Size);
	virtual void __fastcall EncryptCFBblock(const void *Indata, void *Outdata, unsigned Size);
	virtual void __fastcall DecryptCFBblock(const void *Indata, void *Outdata, unsigned Size);
	virtual void __fastcall EncryptOFB(const void *Indata, void *Outdata, unsigned Size);
	virtual void __fastcall DecryptOFB(const void *Indata, void *Outdata, unsigned Size);
	virtual void __fastcall EncryptCTR(const void *Indata, void *Outdata, unsigned Size);
	virtual void __fastcall DecryptCTR(const void *Indata, void *Outdata, unsigned Size);
	__fastcall virtual TDCP_blockcipher(System::Classes::TComponent* AOwner);
	
__published:
	__property int BlockSize = {read=_GetBlockSize, write=DeadInt, nodefault};
	__property TDCP_ciphermode CipherMode = {read=fCipherMode, write=fCipherMode, default=0};
public:
	/* TDCP_cipher.Destroy */ inline __fastcall virtual ~TDCP_blockcipher() { }
	
};


typedef System::TMetaClass* TDCP_blockcipherclass;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall XorBlock(void *InData1, void *InData2, unsigned Size);
}	/* namespace Xlsdcpcrypt2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSDCPCRYPT2)
using namespace Xlsdcpcrypt2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsdcpcrypt2HPP
