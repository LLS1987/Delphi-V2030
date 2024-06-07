// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSSynCrypto.pas' rev: 35.00 (Windows)

#ifndef XlssyncryptoHPP
#define XlssyncryptoHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.RTLConsts.hpp>
#include <System.Classes.hpp>
#include <XLSSynLZ.hpp>
#include <XLSSynCommons.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlssyncrypto
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS ESynCrypto;
struct TAES;
class DELPHICLASS TAESAbstract;
class DELPHICLASS TAESAbstractSyn;
class DELPHICLASS TAESECB;
class DELPHICLASS TAESCBC;
class DELPHICLASS TAESCFB;
class DELPHICLASS TAESOFB;
class DELPHICLASS TAESCTR;
class DELPHICLASS TAESAbstract_API;
class DELPHICLASS TAESECB_API;
class DELPHICLASS TAESCBC_API;
class DELPHICLASS TAESCFB_API;
class DELPHICLASS TAESOFB_API;
struct TSHA1;
struct TSHA256;
struct TMD5;
struct TRC4;
struct TAESFullHeader;
struct TAESFull;
class DELPHICLASS TAESWriteStream;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION ESynCrypto : public Xlssyncommons::ESynException
{
	typedef Xlssyncommons::ESynException inherited;
	
public:
	/* ESynException.CreateUTF8 */ inline __fastcall ESynCrypto(const Xlssyncommons::RawUTF8 Format, const System::TVarRec *Args, const int Args_High) : Xlssyncommons::ESynException(Format, Args, Args_High) { }
	
public:
	/* Exception.Create */ inline __fastcall ESynCrypto(const System::UnicodeString Msg) : Xlssyncommons::ESynException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ESynCrypto(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Xlssyncommons::ESynException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ESynCrypto(NativeUInt Ident)/* overload */ : Xlssyncommons::ESynException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ESynCrypto(System::PResStringRec ResStringRec)/* overload */ : Xlssyncommons::ESynException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ESynCrypto(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Xlssyncommons::ESynException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ESynCrypto(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Xlssyncommons::ESynException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ESynCrypto(const System::UnicodeString Msg, int AHelpContext) : Xlssyncommons::ESynException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ESynCrypto(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Xlssyncommons::ESynException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESynCrypto(NativeUInt Ident, int AHelpContext)/* overload */ : Xlssyncommons::ESynException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESynCrypto(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Xlssyncommons::ESynException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESynCrypto(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Xlssyncommons::ESynException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESynCrypto(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Xlssyncommons::ESynException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ESynCrypto() { }
	
};

#pragma pack(pop)

typedef System::StaticArray<System::Byte, 16> TAESBlock;

typedef TAESBlock *PAESBlock;

typedef System::StaticArray<System::Byte, 32> TAESKey;

typedef TAES *PAES;

struct DECLSPEC_DRECORD TAES
{
private:
	System::StaticArray<System::Byte, 275> Context;
	
public:
	bool Initialized;
	bool __fastcall EncryptInit(const void *Key, unsigned KeySize);
	void __fastcall Encrypt(const TAESBlock &BI, TAESBlock &BO)/* overload */;
	void __fastcall Encrypt(TAESBlock &B)/* overload */;
	bool __fastcall DecryptInit(const void *Key, unsigned KeySize);
	void __fastcall Decrypt(TAESBlock &B)/* overload */;
	void __fastcall Decrypt(const TAESBlock &BI, TAESBlock &BO)/* overload */;
	void __fastcall Done();
	bool __fastcall DoInit(const void *Key, unsigned KeySize, bool doEncrypt);
	void __fastcall DoBlocks(PAESBlock pIn, PAESBlock pOut, /* out */ PAESBlock &oIn, /* out */ PAESBlock &oOut, int Count, bool doEncrypt)/* overload */;
	void __fastcall DoBlocks(PAESBlock pIn, PAESBlock pOut, int Count, bool doEncrypt)/* overload */;
	void __fastcall DoBlocksThread(PAESBlock &bIn, PAESBlock &bOut, int Count, bool doEncrypt);
	bool __fastcall UsesAESNI();
};


typedef System::TMetaClass* TAESAbstractClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAESAbstract : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	unsigned fKeySize;
	unsigned fKeySizeBytes;
	TAESKey fKey;
	TAESBlock fIV;
	void __fastcall DecryptLen(int &InputLen, int &iv, void * Input, bool IVAtBeginning);
	
public:
	__fastcall virtual TAESAbstract(const void *aKey, unsigned aKeySize);
	__fastcall virtual TAESAbstract(const Xlssyncommons::RawUTF8 aKey);
	virtual TAESAbstract* __fastcall Clone();
	virtual void __fastcall Encrypt(void * BufIn, void * BufOut, unsigned Count) = 0 ;
	virtual void __fastcall Decrypt(void * BufIn, void * BufOut, unsigned Count) = 0 ;
	System::RawByteString __fastcall EncryptPKCS7(const System::RawByteString Input, bool IVAtBeginning = false)/* overload */;
	System::RawByteString __fastcall DecryptPKCS7(const System::RawByteString Input, bool IVAtBeginning = false)/* overload */;
	System::DynamicArray<System::Byte> __fastcall EncryptPKCS7(const System::DynamicArray<System::Byte> Input, bool IVAtBeginning = false)/* overload */;
	System::DynamicArray<System::Byte> __fastcall DecryptPKCS7(const System::DynamicArray<System::Byte> Input, bool IVAtBeginning = false)/* overload */;
	unsigned __fastcall EncryptPKCS7Length(unsigned InputLen, bool IVAtBeginning);
	bool __fastcall EncryptPKCS7Buffer(void * Input, void * Output, unsigned InputLen, unsigned OutputLen, bool IVAtBeginning);
	__classmethod System::RawByteString __fastcall SimpleEncrypt(const System::RawByteString Input, const System::RawByteString Key, bool Encrypt, bool IVAtBeginning = false);
	__property unsigned KeySize = {read=fKeySize, nodefault};
	__property TAESBlock IV = {read=fIV, write=fIV};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAESAbstract() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAESAbstractSyn : public TAESAbstract
{
	typedef TAESAbstract inherited;
	
protected:
	TAESBlock *fIn;
	TAESBlock *fOut;
	TAES AES;
	unsigned fCount;
	TAESBlock fCV;
	void __fastcall EncryptInit();
	void __fastcall DecryptInit();
	void __fastcall EncryptTrailer();
	void __fastcall DecryptTrailer();
	
public:
	virtual void __fastcall Encrypt(void * BufIn, void * BufOut, unsigned Count);
	virtual void __fastcall Decrypt(void * BufIn, void * BufOut, unsigned Count);
public:
	/* TAESAbstract.Create */ inline __fastcall virtual TAESAbstractSyn(const void *aKey, unsigned aKeySize) : TAESAbstract(aKey, aKeySize) { }
	/* TAESAbstract.CreateFromSha256 */ inline __fastcall virtual TAESAbstractSyn(const Xlssyncommons::RawUTF8 aKey) : TAESAbstract(aKey) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAESAbstractSyn() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAESECB : public TAESAbstractSyn
{
	typedef TAESAbstractSyn inherited;
	
public:
	virtual void __fastcall Encrypt(void * BufIn, void * BufOut, unsigned Count);
	virtual void __fastcall Decrypt(void * BufIn, void * BufOut, unsigned Count);
public:
	/* TAESAbstract.Create */ inline __fastcall virtual TAESECB(const void *aKey, unsigned aKeySize) : TAESAbstractSyn(aKey, aKeySize) { }
	/* TAESAbstract.CreateFromSha256 */ inline __fastcall virtual TAESECB(const Xlssyncommons::RawUTF8 aKey) : TAESAbstractSyn(aKey) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAESECB() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAESCBC : public TAESAbstractSyn
{
	typedef TAESAbstractSyn inherited;
	
public:
	virtual void __fastcall Encrypt(void * BufIn, void * BufOut, unsigned Count);
	virtual void __fastcall Decrypt(void * BufIn, void * BufOut, unsigned Count);
public:
	/* TAESAbstract.Create */ inline __fastcall virtual TAESCBC(const void *aKey, unsigned aKeySize) : TAESAbstractSyn(aKey, aKeySize) { }
	/* TAESAbstract.CreateFromSha256 */ inline __fastcall virtual TAESCBC(const Xlssyncommons::RawUTF8 aKey) : TAESAbstractSyn(aKey) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAESCBC() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAESCFB : public TAESAbstractSyn
{
	typedef TAESAbstractSyn inherited;
	
public:
	virtual void __fastcall Encrypt(void * BufIn, void * BufOut, unsigned Count);
	virtual void __fastcall Decrypt(void * BufIn, void * BufOut, unsigned Count);
public:
	/* TAESAbstract.Create */ inline __fastcall virtual TAESCFB(const void *aKey, unsigned aKeySize) : TAESAbstractSyn(aKey, aKeySize) { }
	/* TAESAbstract.CreateFromSha256 */ inline __fastcall virtual TAESCFB(const Xlssyncommons::RawUTF8 aKey) : TAESAbstractSyn(aKey) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAESCFB() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAESOFB : public TAESAbstractSyn
{
	typedef TAESAbstractSyn inherited;
	
public:
	virtual void __fastcall Encrypt(void * BufIn, void * BufOut, unsigned Count);
	virtual void __fastcall Decrypt(void * BufIn, void * BufOut, unsigned Count);
public:
	/* TAESAbstract.Create */ inline __fastcall virtual TAESOFB(const void *aKey, unsigned aKeySize) : TAESAbstractSyn(aKey, aKeySize) { }
	/* TAESAbstract.CreateFromSha256 */ inline __fastcall virtual TAESOFB(const Xlssyncommons::RawUTF8 aKey) : TAESAbstractSyn(aKey) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAESOFB() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAESCTR : public TAESAbstractSyn
{
	typedef TAESAbstractSyn inherited;
	
public:
	virtual void __fastcall Encrypt(void * BufIn, void * BufOut, unsigned Count);
	virtual void __fastcall Decrypt(void * BufIn, void * BufOut, unsigned Count);
public:
	/* TAESAbstract.Create */ inline __fastcall virtual TAESCTR(const void *aKey, unsigned aKeySize) : TAESAbstractSyn(aKey, aKeySize) { }
	/* TAESAbstract.CreateFromSha256 */ inline __fastcall virtual TAESCTR(const Xlssyncommons::RawUTF8 aKey) : TAESAbstractSyn(aKey) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAESCTR() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAESAbstract_API : public TAESAbstract
{
	typedef TAESAbstract inherited;
	
	
private:
	#pragma pack(push,1)
	struct DECLSPEC_DRECORD _TAESAbstract_API__1
	{
	public:
		System::Byte bType;
		System::Byte bVersion;
		System::Word reserved;
		unsigned aiKeyAlg;
		unsigned dwKeyLength;
	};
	#pragma pack(pop)
	
	
	
protected:
	_TAESAbstract_API__1 fKeyHeader;
	TAESKey fKeyHeaderKey;
	void *fKeyCryptoAPI;
	unsigned fInternalMode;
	virtual void __fastcall InternalSetMode() = 0 ;
	void __fastcall EncryptDecrypt(void * BufIn, void * BufOut, unsigned Count, bool DoEncrypt);
	
public:
	__fastcall virtual TAESAbstract_API(const void *aKey, unsigned aKeySize);
	__fastcall virtual ~TAESAbstract_API();
	virtual void __fastcall Encrypt(void * BufIn, void * BufOut, unsigned Count);
	virtual void __fastcall Decrypt(void * BufIn, void * BufOut, unsigned Count);
public:
	/* TAESAbstract.CreateFromSha256 */ inline __fastcall virtual TAESAbstract_API(const Xlssyncommons::RawUTF8 aKey) : TAESAbstract(aKey) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAESECB_API : public TAESAbstract_API
{
	typedef TAESAbstract_API inherited;
	
protected:
	virtual void __fastcall InternalSetMode();
public:
	/* TAESAbstract_API.Create */ inline __fastcall virtual TAESECB_API(const void *aKey, unsigned aKeySize) : TAESAbstract_API(aKey, aKeySize) { }
	/* TAESAbstract_API.Destroy */ inline __fastcall virtual ~TAESECB_API() { }
	
public:
	/* TAESAbstract.CreateFromSha256 */ inline __fastcall virtual TAESECB_API(const Xlssyncommons::RawUTF8 aKey) : TAESAbstract_API(aKey) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAESCBC_API : public TAESAbstract_API
{
	typedef TAESAbstract_API inherited;
	
protected:
	virtual void __fastcall InternalSetMode();
public:
	/* TAESAbstract_API.Create */ inline __fastcall virtual TAESCBC_API(const void *aKey, unsigned aKeySize) : TAESAbstract_API(aKey, aKeySize) { }
	/* TAESAbstract_API.Destroy */ inline __fastcall virtual ~TAESCBC_API() { }
	
public:
	/* TAESAbstract.CreateFromSha256 */ inline __fastcall virtual TAESCBC_API(const Xlssyncommons::RawUTF8 aKey) : TAESAbstract_API(aKey) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAESCFB_API : public TAESAbstract_API
{
	typedef TAESAbstract_API inherited;
	
protected:
	virtual void __fastcall InternalSetMode();
public:
	/* TAESAbstract_API.Create */ inline __fastcall virtual TAESCFB_API(const void *aKey, unsigned aKeySize) : TAESAbstract_API(aKey, aKeySize) { }
	/* TAESAbstract_API.Destroy */ inline __fastcall virtual ~TAESCFB_API() { }
	
public:
	/* TAESAbstract.CreateFromSha256 */ inline __fastcall virtual TAESCFB_API(const Xlssyncommons::RawUTF8 aKey) : TAESAbstract_API(aKey) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAESOFB_API : public TAESAbstract_API
{
	typedef TAESAbstract_API inherited;
	
protected:
	virtual void __fastcall InternalSetMode();
public:
	/* TAESAbstract_API.Create */ inline __fastcall virtual TAESOFB_API(const void *aKey, unsigned aKeySize) : TAESAbstract_API(aKey, aKeySize) { }
	/* TAESAbstract_API.Destroy */ inline __fastcall virtual ~TAESOFB_API() { }
	
public:
	/* TAESAbstract.CreateFromSha256 */ inline __fastcall virtual TAESOFB_API(const Xlssyncommons::RawUTF8 aKey) : TAESAbstract_API(aKey) { }
	
};

#pragma pack(pop)

typedef System::StaticArray<System::Byte, 20> TSHA1Digest;

typedef TSHA1Digest *PSHA1Digest;

typedef TSHA1 *PSHA1;

struct DECLSPEC_DRECORD TSHA1
{
private:
	System::StaticArray<unsigned, 27> Context;
	void __fastcall Compress();
	
public:
	void __fastcall Init();
	void __fastcall Update(void * Buffer, int Len);
	void __fastcall Final(/* out */ TSHA1Digest &Digest);
	void __fastcall Full(void * Buffer, int Len, /* out */ TSHA1Digest &Digest);
};


typedef System::StaticArray<System::Byte, 32> TSHA256Digest;

typedef TSHA256Digest *PSHA256Digest;

typedef TSHA256 *PSHA256;

struct DECLSPEC_DRECORD TSHA256
{
private:
	System::StaticArray<System::Byte, 108> Context;
	void __fastcall Compress();
	
public:
	void __fastcall Init();
	void __fastcall Update(void * Buffer, int Len);
	void __fastcall Final(/* out */ TSHA256Digest &Digest);
	void __fastcall Full(void * Buffer, int Len, /* out */ TSHA256Digest &Digest);
};


typedef System::StaticArray<unsigned, 16> TMD5In;

typedef System::StaticArray<System::Byte, 16> TMD5Digest;

typedef TMD5 *PMD5;

typedef System::StaticArray<unsigned, 4> TMD5Buf;

struct DECLSPEC_DRECORD TMD5
{
private:
	TMD5Buf buf;
	System::StaticArray<unsigned, 2> bytes;
	TMD5In in_;
	void __fastcall Finalize();
	
public:
	void __fastcall Init();
	void __fastcall Update(const void *buffer, unsigned Len);
	void __fastcall Final(/* out */ TMD5Digest &result)/* overload */;
	TMD5Digest __fastcall Final()/* overload */;
	void __fastcall Full(void * Buffer, int Len, /* out */ TMD5Digest &Digest);
};


typedef System::StaticArray<System::Byte, 256> TRC4InternalKey;

struct DECLSPEC_DRECORD TRC4
{
private:
	TRC4InternalKey key;
	
public:
	void __fastcall Init(const void *aKey, int aKeyLen);
	void __fastcall Encrypt(const void *BufIn, void *BufOut, unsigned Count);
	void __fastcall SaveKey(/* out */ TRC4InternalKey &Backup);
	void __fastcall RestoreKey(const TRC4InternalKey &Backup);
};


#pragma pack(push,1)
struct DECLSPEC_DRECORD TAESFullHeader
{
public:
	unsigned OriginalLen;
	unsigned SourceLen;
	unsigned SomeSalt;
	unsigned HeaderCheck;
	unsigned __fastcall Calc(const void *Key, unsigned KeySize);
};
#pragma pack(pop)


typedef TAESFull *PAESFull;

struct DECLSPEC_DRECORD TAESFull
{
public:
	TAESFullHeader Head;
	System::Classes::TMemoryStream* outStreamCreated;
	int __fastcall EncodeDecode(const void *Key, unsigned KeySize, unsigned inLen, bool Encrypt, System::Classes::TStream* inStream, System::Classes::TStream* outStream, void * bIn, void * bOut, unsigned OriginalLen = (unsigned)(0x0));
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAESWriteStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
public:
	unsigned Adler;
	unsigned DestSize;
	
private:
	System::Classes::TStream* Dest;
	TAESBlock Buf;
	int BufCount;
	TAES AES;
	bool NoCrypt;
	
public:
	__fastcall TAESWriteStream(System::Classes::TStream* outStream, const void *Key, unsigned KeySize);
	__fastcall virtual ~TAESWriteStream();
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual int __fastcall Seek(int Offset, System::Word Origin)/* overload */;
	void __fastcall Finish();
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Word AESContextSize = System::Word(0x113);
static const System::Int8 SHAContextSize = System::Int8(0x6c);
static const System::Int8 AESBlockSize = System::Int8(0x10);
static const System::Int8 AESKeySize = System::Int8(0x20);
static const System::Int8 SHA1DIGESTSTRLEN = System::Int8(0x28);
static const System::Int8 SHA256DIGESTSTRLEN = System::Int8(0x40);
static const System::Int8 MD5DIGESTSTRLEN = System::Int8(0x20);
extern DELPHI_PACKAGE TSHA256Digest CompressShaAesKey;
extern DELPHI_PACKAGE TAESAbstractClass CompressShaAesClass;
extern DELPHI_PACKAGE void __fastcall bswap256(Xlssyncommons::PIntegerArray s, Xlssyncommons::PIntegerArray d);
extern DELPHI_PACKAGE void __fastcall bswap160(Xlssyncommons::PIntegerArray s, Xlssyncommons::PIntegerArray d);
extern DELPHI_PACKAGE bool __fastcall SHA256SelfTest(void);
extern DELPHI_PACKAGE Xlssyncommons::RawUTF8 __fastcall MD5(const System::RawByteString s);
extern DELPHI_PACKAGE Xlssyncommons::RawUTF8 __fastcall SHA1(const System::RawByteString s);
extern DELPHI_PACKAGE Xlssyncommons::RawUTF8 __fastcall SHA256(const System::RawByteString s)/* overload */;
extern DELPHI_PACKAGE Xlssyncommons::RawUTF8 __fastcall SHA256(void * Data, int Len)/* overload */;
extern DELPHI_PACKAGE bool __fastcall SHA1SelfTest(void);
extern DELPHI_PACKAGE bool __fastcall AESSelfTest(bool onlytables);
extern DELPHI_PACKAGE void __fastcall SHA256Weak(const System::RawByteString s, /* out */ TSHA256Digest &Digest)/* overload */;
extern DELPHI_PACKAGE void __fastcall AES(const void *Key, unsigned KeySize, void * buffer, int Len, bool Encrypt)/* overload */;
extern DELPHI_PACKAGE void __fastcall AES(const void *Key, unsigned KeySize, void * bIn, void * bOut, int Len, bool Encrypt)/* overload */;
extern DELPHI_PACKAGE System::RawByteString __fastcall AES(const void *Key, unsigned KeySize, const System::RawByteString s, bool Encrypt)/* overload */;
extern DELPHI_PACKAGE bool __fastcall AES(const void *Key, unsigned KeySize, void * buffer, unsigned Len, System::Classes::TStream* Stream, bool Encrypt)/* overload */;
extern DELPHI_PACKAGE bool __fastcall AESFullKeyOK(const void *Key, unsigned KeySize, void * buff);
extern DELPHI_PACKAGE int __fastcall AESFull(const void *Key, unsigned KeySize, void * bIn, void * bOut, int Len, bool Encrypt, unsigned OriginalLen = (unsigned)(0x0))/* overload */;
extern DELPHI_PACKAGE bool __fastcall AESFull(const void *Key, unsigned KeySize, void * bIn, int Len, System::Classes::TStream* outStream, bool Encrypt, unsigned OriginalLen = (unsigned)(0x0))/* overload */;
extern DELPHI_PACKAGE void __fastcall AESSHA256(void * bIn, void * bOut, int Len, const System::RawByteString Password, bool Encrypt)/* overload */;
extern DELPHI_PACKAGE System::RawByteString __fastcall AESSHA256(const System::RawByteString s, const System::RawByteString Password, bool Encrypt)/* overload */;
extern DELPHI_PACKAGE void __fastcall AESSHA256(void * Buffer, int Len, const System::RawByteString Password, bool Encrypt)/* overload */;
extern DELPHI_PACKAGE void __fastcall AESSHA256Full(void * bIn, int Len, System::Classes::TStream* outStream, const System::RawByteString Password, bool Encrypt)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall Adler32Pas(unsigned Adler, void * p, int Count);
extern DELPHI_PACKAGE unsigned __fastcall Adler32Asm(unsigned Adler, void * p, int Count);
extern DELPHI_PACKAGE bool __fastcall Adler32SelfTest(void);
extern DELPHI_PACKAGE void __fastcall XorBlock(Xlssyncommons::PIntegerArray p, int Count, int Cod);
extern DELPHI_PACKAGE void __fastcall XorOffset(System::PByte p, int Index, int Count);
extern DELPHI_PACKAGE void __fastcall XorConst(Xlssyncommons::PIntegerArray p, int Count);
extern DELPHI_PACKAGE TMD5Digest __fastcall MD5Buf(const void *Buffer, unsigned Len);
extern DELPHI_PACKAGE bool __fastcall MD5DigestsEqual(const TMD5Digest &A, const TMD5Digest &B);
extern DELPHI_PACKAGE Xlssyncommons::RawUTF8 __fastcall MD5DigestToString(const TMD5Digest &D);
extern DELPHI_PACKAGE Xlssyncommons::RawUTF8 __fastcall SHA1DigestToString(const TSHA1Digest &D);
extern DELPHI_PACKAGE Xlssyncommons::RawUTF8 __fastcall SHA256DigestToString(const TSHA256Digest &D);
extern DELPHI_PACKAGE Xlssyncommons::RawUTF8 __fastcall htdigest(const System::RawByteString user, const System::RawByteString realm, const System::RawByteString pass);
extern DELPHI_PACKAGE bool __fastcall MD5SelfTest(void);
extern DELPHI_PACKAGE void __fastcall FillRandom(TAESBlock &IV);
extern DELPHI_PACKAGE bool __fastcall RC4SelfTest(void);
extern DELPHI_PACKAGE void __fastcall CompressShaAesSetKey(const System::RawByteString Key, TAESAbstractClass AesClass = 0x0);
extern DELPHI_PACKAGE System::AnsiString __fastcall CompressShaAes(void *DataRawByteString, bool Compress);
}	/* namespace Xlssyncrypto */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSSYNCRYPTO)
using namespace Xlssyncrypto;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XlssyncryptoHPP
