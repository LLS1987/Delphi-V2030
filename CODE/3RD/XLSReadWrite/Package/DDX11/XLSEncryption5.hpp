// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSEncryption5.pas' rev: 35.00 (Windows)

#ifndef Xlsencryption5HPP
#define Xlsencryption5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Win.ComObj.hpp>
#include <System.Math.hpp>
#include <xpgPSimpleDOM.hpp>
#include <XLSUtils5.hpp>
#include <XLSDCPsha1.hpp>
#include <XLSDCPsha512.hpp>
#include <XLSSynCrypto.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsencryption5
{
//-- forward type declarations -----------------------------------------------
struct TXLSRecEncVersion;
struct TXLSRecEncHeader;
struct TXLSRecEncVerifier;
class DELPHICLASS TXLSVector;
class DELPHICLASS TXLSCrypto;
class DELPHICLASS TXLSCryptoStandard;
class DELPHICLASS TXLSCryptoAgile;
class DELPHICLASS TXLSEncryption;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXLSCryptoResult : unsigned char { xcrUnknown, xcrOk, xcrMissingPassword, xcrWrongPassword, xcrUnsupportedEncryption };

typedef TXLSRecEncVersion *PXLSRecEncVersion;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSRecEncVersion
{
public:
	System::Word Major;
	System::Word Minor;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TXLSCryptoHash : unsigned char { xchSHA1, xchSHA512 };

enum DECLSPEC_DENUM TXLSCryptoCiper : unsigned char { xccAESECB, xccAESCBC };

typedef TXLSRecEncHeader *PXLSRecEncHeader;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSRecEncHeader
{
public:
	unsigned Flags;
	unsigned SizeExtra;
	unsigned AlgId;
	unsigned AlgIDHash;
	unsigned KeySize;
	unsigned ProviderType;
	unsigned Reserved1;
	unsigned Reserved2;
};
#pragma pack(pop)


typedef TXLSRecEncVerifier *PXLSRecEncVerifier;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSRecEncVerifier
{
public:
	unsigned SaltSize;
	System::StaticArray<System::Byte, 16> Salt;
	System::StaticArray<System::Byte, 16> EncryptedVerifier;
	unsigned VerifierHashSize;
	System::StaticArray<System::Byte, 32> EncryptedVerifierHash;
};
#pragma pack(pop)


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSVector : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int __fastcall GetAsInteger(int AIndex);
	void __fastcall SetAsInteger(int AIndex, const int Value);
	System::UnicodeString __fastcall GetAsString();
	
protected:
	System::Sysutils::TByteArray *FBytes;
	int FSize;
	
public:
	__fastcall TXLSVector(int ASize, int AValue)/* overload */;
	__fastcall TXLSVector(TXLSVector* AVector)/* overload */;
	__fastcall virtual ~TXLSVector();
	void __fastcall Clear();
	void __fastcall Resize(int ASize)/* overload */;
	void __fastcall Resize(int ASize, int AValue)/* overload */;
	void __fastcall Assign(System::Byte *AArray, const int AArray_High)/* overload */;
	void __fastcall Assign(System::AnsiString AStr)/* overload */;
	void __fastcall Assign(TXLSVector* AVector)/* overload */;
	void __fastcall CopyFrom(System::Sysutils::PByteArray ABytes, int ACount, int AOffset)/* overload */;
	void __fastcall CopyFrom(TXLSVector* AVector, int AOffset)/* overload */;
	void __fastcall CopyFrom(TXLSVector* AVector, int ACount, int AOffset)/* overload */;
	bool __fastcall Equal(TXLSVector* AVector, int ACompareSize = 0x0);
	__property System::Sysutils::PByteArray Bytes = {read=FBytes};
	__property int Size = {read=FSize, nodefault};
	__property int AsInteger[int AIndex] = {read=GetAsInteger, write=SetAsInteger};
	__property System::UnicodeString AsString = {read=GetAsString};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCrypto : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FSaltSize;
	int FSpinCount;
	int FKeyBits;
	int FHashSize;
	System::UnicodeString FPassword;
	void __fastcall FillRandom(System::Sysutils::PByteArray AArray, int ASize);
	
public:
	__fastcall TXLSCrypto(System::UnicodeString APassword);
	__fastcall virtual ~TXLSCrypto();
	virtual TXLSCryptoResult __fastcall InitiateRead(System::Sysutils::PByteArray ABuf, int ABufSize) = 0 ;
	virtual TXLSCryptoResult __fastcall InitiateWrite(_di_IStream AStream) = 0 ;
	virtual bool __fastcall DecryptDocument(_di_IStream AInStream, System::Classes::TStream* AOutStream) = 0 ;
	virtual bool __fastcall EncryptDocument(System::Classes::TStream* AInStream, _di_IStream AOutStream) = 0 ;
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCryptoStandard : public TXLSCrypto
{
	typedef TXLSCrypto inherited;
	
protected:
	TXLSRecEncHeader FHeader;
	TXLSRecEncVerifier FVerifier;
	System::StaticArray<System::Byte, 16> FKey;
	void __fastcall CalcKey();
	bool __fastcall VerifyPassword();
	void __fastcall EncryptVerifier(System::Sysutils::PByteArray AVeriVal);
	
public:
	__fastcall TXLSCryptoStandard(System::UnicodeString APassword);
	virtual TXLSCryptoResult __fastcall InitiateRead(System::Sysutils::PByteArray ABuf, int ABufSize);
	virtual TXLSCryptoResult __fastcall InitiateWrite(_di_IStream AStream);
	virtual bool __fastcall DecryptDocument(_di_IStream AInStream, System::Classes::TStream* AOutStream);
	virtual bool __fastcall EncryptDocument(System::Classes::TStream* AInStream, _di_IStream AOutStream);
	bool __fastcall EncryptDocumentFile(System::Classes::TStream* AInStream, System::Classes::TStream* AOutStream);
public:
	/* TXLSCrypto.Destroy */ inline __fastcall virtual ~TXLSCryptoStandard() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCryptoAgile : public TXLSCrypto
{
	typedef TXLSCrypto inherited;
	
protected:
	int FSpinCount;
	int FBlockSize;
	int FKeyBits;
	int FHashSize;
	TXLSCryptoCiper FCipherAlgorithm;
	TXLSCryptoHash FHashAlgorithm;
	TXLSVector* FKeyDataSalt;
	TXLSVector* FSaltValue;
	TXLSVector* FEncryptedVerifierHashInput;
	TXLSVector* FEncryptedVerifierHashValue;
	TXLSVector* FEncryptedKeyValue;
	TXLSVector* FKey;
	bool __fastcall ReadXML(System::Sysutils::PByteArray ABuf, int ASize);
	void __fastcall SetupSHA512();
	void __fastcall SetTestSHA512();
	bool __fastcall HashCalc(TXLSVector* output, TXLSVector* input, TXLSCryptoHash Algorithm);
	bool __fastcall CalculateBlock(System::Sysutils::PByteArray rBlock, int aBlockSize, TXLSVector* rHashFinal, TXLSVector* rInput, TXLSVector* rOutput);
	bool __fastcall CalculateHashFinal(System::UnicodeString rPassword, TXLSVector* aHashFinal);
	bool __fastcall GenerateEncryptionKey(System::UnicodeString rPassword);
	
public:
	__fastcall TXLSCryptoAgile(System::UnicodeString APassword);
	__fastcall virtual ~TXLSCryptoAgile();
	virtual TXLSCryptoResult __fastcall InitiateRead(System::Sysutils::PByteArray ABuf, int ABufSize);
	virtual TXLSCryptoResult __fastcall InitiateWrite(_di_IStream AStream);
	virtual bool __fastcall DecryptDocument(_di_IStream AInStream, System::Classes::TStream* AOutStream);
	virtual bool __fastcall EncryptDocument(System::Classes::TStream* AInStream, _di_IStream AOutStream);
	bool __fastcall Test();
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSEncryption : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall SetPassword(const System::UnicodeString Value);
	
protected:
	_di_IStorage FOleStorage;
	_di_ILockBytes FLockBytes;
	System::UnicodeString FPassword;
	Xlsutils5::TXLSPasswordEvent FPasswEvent;
	TXLSRecEncHeader FHeader;
	TXLSCrypto* FCrypto;
	TXLSCryptoResult FResult;
	TXLSRecEncVerifier FVerifier;
	System::StaticArray<System::Byte, 16> FKey;
	bool FWrongPassw;
	System::Classes::TStream* FInStream;
	System::Classes::TMemoryStream* FOutStream;
	TXLSCrypto* __fastcall DoEncryptionInfo(System::Sysutils::PByteArray &ABuf, int ASize);
	void __fastcall WriteStorageToDestStream(System::Classes::TStream* AStream);
	
public:
	__fastcall TXLSEncryption();
	__fastcall virtual ~TXLSEncryption();
	void __fastcall Test();
	bool __fastcall LoadFromFile(const System::UnicodeString AFilename);
	bool __fastcall LoadFromStream(System::Classes::TStream* AStream);
	bool __fastcall SaveToStream(System::Classes::TStream* AStream);
	bool __fastcall SaveToStreamTest(System::Classes::TStream* AStream, TXLSCrypto* ACrypto);
	__property System::UnicodeString Password = {read=FPassword, write=SetPassword};
	__property TXLSCryptoResult CryptoResult = {read=FResult, nodefault};
	__property System::Classes::TStream* InStream = {write=FInStream};
	__property System::Classes::TMemoryStream* OutStream = {read=FOutStream};
	__property Xlsutils5::TXLSPasswordEvent OnPassword = {read=FPasswEvent, write=FPasswEvent};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsencryption5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSENCRYPTION5)
using namespace Xlsencryption5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsencryption5HPP
