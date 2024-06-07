// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_Stream5.pas' rev: 35.00 (Windows)

#ifndef Biff_stream5HPP
#define Biff_stream5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Win.ComObj.hpp>
#include <System.Math.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_EscherTypes5.hpp>
#include <BIFF_VBA5.hpp>
#include <BIFF_MD5_5.hpp>
#include <BIFF_RC4_5.hpp>
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_stream5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TExtraObjects;
class DELPHICLASS TXLSStream;
class DELPHICLASS TXLSStreamObj;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TExtraObjects : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	_di_ILockBytes FSavedLockBytes;
	_di_IStorage FSavedStorage;
	
public:
	void __fastcall Clear();
	__property _di_ILockBytes SavedLockBytes = {read=FSavedLockBytes};
	__property _di_IStorage SavedStorage = {read=FSavedStorage};
public:
	/* TObject.Create */ inline __fastcall TExtraObjects() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TExtraObjects() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSStream : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	_di_IStorage OleStorage;
	_di_IStream OleStream;
	System::Classes::TStream* FTargetStream;
	System::Classes::TStream* FSourceStream;
	_di_ILockBytes FLockBytes;
	TExtraObjects* FExtraObjects;
	Biff_vba5::TXLSVBA* FVBA;
	Xc12utils5::TExcelVersion FFileVersion;
	System::Classes::TStream* FStream;
	int FStreamSize;
	int FWrittenBytes;
	int FWriteCONTINUEPos;
	int FReadCONTINUEPos;
	bool FReadCONTINUEActive;
	int FMaxBytesWrite;
	bool FSaveVBA;
	bool FISAPIRead;
	bool FIsEncrypted;
	Biff_md5_5::TMD5Context FMD5Ctx;
	Biff_rc4_5::TRC4Key FRC4Key;
	int FNextReKeyBlock;
	Xc12utils5::TExcelVersion __fastcall OpenFileStreamRead(const System::UnicodeString Filename);
	int __fastcall IntWrite(const void *Buffer, int Count);
	void __fastcall WriteStorageToDestStream();
	Xc12utils5::TExcelVersion __fastcall OpenOleStreamRead(System::WideChar * Filename);
	void __fastcall MakeKey(unsigned Block, const Biff_md5_5::TMD5Context &ctxVal, Biff_rc4_5::TRC4Key &Key);
	void __fastcall EncryptSkipBytes(int Start, int Count);
	bool __fastcall VerifyPassword(Biff_recsii5::PRecFILEPASS FILEPASS, System::UnicodeString Password);
	
public:
	__fastcall TXLSStream(Biff_vba5::TXLSVBA* VBA);
	__fastcall virtual ~TXLSStream();
	void __fastcall CreatePassword(Biff_recsii5::PRecFILEPASS FILEPASS, System::UnicodeString Password);
	Xc12utils5::TExcelVersion __fastcall OpenStorageRead(const System::UnicodeString Filename);
	void __fastcall OpenStorageWrite(const System::UnicodeString Filename, Xc12utils5::TExcelVersion Version);
	void __fastcall OpenRawFileStreamWrite(const System::UnicodeString Filename);
	void __fastcall OpenRawFileStreamRead(const System::UnicodeString Filename);
	void __fastcall OpenRawMemStreamWrite();
	void __fastcall OpenRawMemStreamRead();
	int __fastcall Read(void *Buffer, int Count);
	int __fastcall ReadUnencrypted(void *Buffer, int Count);
	int __fastcall ReadUnencryptedSync(void *Buffer, int Count);
	int __fastcall ReadHeader(Biff_recsii5::TBIFFHeader &Header);
	int __fastcall ReadOtherHeader(Biff_recsii5::TBIFFHeader &Header);
	System::Word __fastcall PeekHeader();
	System::Word __fastcall PeekMSOHeader();
	int __fastcall Write(const void *Buffer, int Count);
	void __fastcall WriteCONTINUE(System::Word RecId, const void *Buffer, int Count);
	void __fastcall WriteHeader(System::Word RecId, System::Word Length);
	void __fastcall WriteMSOHeader(System::Byte Version, System::Word Instance, System::Word FBT, unsigned Length);
	void __fastcall WriteBufHeader(const void *Buffer, System::Word RecId, System::Word Length);
	void __fastcall WriteWord(System::Word RecId, System::Word Value);
	void __fastcall WLWord(unsigned Value);
	void __fastcall WWord(System::Word Value);
	void __fastcall WByte(System::Byte Value);
	void __fastcall WriteUnicodeStr16(System::RawByteString Value);
	void __fastcall WriteUnicodeStr8(System::RawByteString Value);
	void __fastcall WriteWideString(System::UnicodeString Value, bool WriteLen = true);
	void __fastcall WriteCellArea(const Biff_recsii5::TRec32CellArea &Area);
	void __fastcall WriteCellAreaI(const Biff_recsii5::TRecCellAreaI &Area);
	int __fastcall ReadWideString(int Length, System::UnicodeString &Str);
	int __fastcall Seek(int Offset, System::Word Origin);
	int __fastcall Pos();
	void __fastcall BeginCONTINUEWrite(int MaxRecSize);
	void __fastcall CheckCONTINUEWrite(const void *Buffer, int Count);
	void __fastcall EndCONTINUEWrite();
	void __fastcall BeginCONTINUERead();
	void __fastcall ResetCONTINUERead();
	void __fastcall EndCONTINUERead();
	void __fastcall WriteVBA();
	bool __fastcall SetReadDecrypt(Biff_recsii5::PRecFILEPASS FILEPASS, System::UnicodeString Password);
	void __fastcall Decrypt(System::Sysutils::PByteArray Buffer, int Count);
	void __fastcall CloseStorage();
	void __fastcall CloseStream();
	void __fastcall EncryptFile();
	void __fastcall WriteFile(System::Word RecId, System::Word Length, System::UnicodeString Filename);
	__property int Size = {read=FStreamSize, nodefault};
	__property int WrittenBytes = {read=FWrittenBytes, write=FWrittenBytes, nodefault};
	__property System::Classes::TStream* TargetStream = {read=FTargetStream, write=FTargetStream};
	__property System::Classes::TStream* SourceStream = {read=FSourceStream, write=FSourceStream};
	__property TExtraObjects* ExtraObjects = {read=FExtraObjects, write=FExtraObjects};
	__property bool SaveVBA = {read=FSaveVBA, write=FSaveVBA, nodefault};
	__property bool ISAPIRead = {read=FISAPIRead, write=FISAPIRead, nodefault};
	__property bool IsEncrypted = {read=FIsEncrypted, nodefault};
	__property Xc12utils5::TExcelVersion FileVersion = {read=FFileVersion, nodefault};
	__property bool ReadCONTINUEActive = {read=FReadCONTINUEActive, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSStreamObj : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual void __fastcall Read(TXLSStream* Stream) = 0 ;
	virtual void __fastcall Write(TXLSStream* Stream) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TXLSStreamObj() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSStreamObj() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Biff_stream5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_STREAM5)
using namespace Biff_stream5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_stream5HPP
