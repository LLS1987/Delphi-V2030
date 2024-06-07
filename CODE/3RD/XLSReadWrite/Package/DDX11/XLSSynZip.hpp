// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSSynZip.pas' rev: 35.00 (Windows)

#ifndef XlssynzipHPP
#define XlssynzipHPP

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

//-- user supplied -----------------------------------------------------------

namespace Xlssynzip
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS ESynZipException;
struct TZStream;
struct TFileInfo;
struct TFileHeader;
struct TLocalFileHeader;
struct TLastHeader;
class DELPHICLASS TSynZipCompressor;
struct TZipEntry;
class DELPHICLASS TZipRead;
class DELPHICLASS TZipWriteAbstract;
class DELPHICLASS TZipWrite;
class DELPHICLASS TZipWriteToStream;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TSynZipCompressorFormat : unsigned char { szcfRaw, szcfZip, szcfGZ };

typedef System::RawByteString ZipString;

typedef System::StaticArray<unsigned, 536870911> TCardinalArray;

typedef TCardinalArray *PCardinalArray;

#pragma pack(push,4)
class PASCALIMPLEMENTATION ESynZipException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ESynZipException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ESynZipException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ESynZipException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ESynZipException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ESynZipException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ESynZipException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ESynZipException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ESynZipException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESynZipException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ESynZipException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESynZipException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ESynZipException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ESynZipException() { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TZStream
{
public:
	char *next_in;
	unsigned avail_in;
	unsigned total_in;
	char *next_out;
	unsigned avail_out;
	unsigned total_out;
	char *msg;
	void *state;
	void *zalloc;
	void *zfree;
	void *opaque;
	int data_type;
	unsigned adler;
	unsigned reserved;
};


typedef TFileInfo *PFileInfo;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TFileInfo
{
public:
	System::Word neededVersion;
	System::Word flags;
	System::Word zzipMethod;
	int zlastMod;
	unsigned zcrc32;
	unsigned zzipSize;
	unsigned zfullSize;
	System::Word nameLen;
	System::Word extraLen;
	bool __fastcall SameAs(PFileInfo aInfo);
	int __fastcall AlgoID();
	void __fastcall SetAlgoID(int Algorithm);
	bool __fastcall GetUTF8FileName();
	void __fastcall SetUTF8FileName();
	void __fastcall UnSetUTF8FileName();
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TFileHeader
{
public:
	unsigned signature;
	System::Word madeBy;
	TFileInfo fileInfo;
	System::Word commentLen;
	System::Word firstDiskNo;
	System::Word intFileAttr;
	unsigned extFileAttr;
	unsigned localHeadOff;
	bool __fastcall IsFolder();
	void __fastcall Init();
};
#pragma pack(pop)


typedef TFileHeader *PFileHeader;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TLocalFileHeader
{
public:
	unsigned signature;
	TFileInfo fileInfo;
	char * __fastcall LocalData();
};
#pragma pack(pop)


typedef TLocalFileHeader *PLocalFileHeader;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TLastHeader
{
public:
	unsigned signature;
	System::Word thisDisk;
	System::Word headerDisk;
	System::Word thisFiles;
	System::Word totalFiles;
	unsigned headerSize;
	unsigned headerOffset;
	System::Word commentLen;
};
#pragma pack(pop)


typedef TLastHeader *PLastHeader;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynZipCompressor : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
private:
	bool fInitialized;
	System::Classes::TStream* fDestStream;
	TZStream fStrm;
	unsigned fCRC;
	bool fGZFormat;
	System::StaticArray<System::Byte, 65536> fBufferOut;
	int __fastcall FlushBufferOut();
	
public:
	__fastcall TSynZipCompressor(System::Classes::TStream* outStream, int CompressionLevel, TSynZipCompressorFormat Format);
	__fastcall virtual ~TSynZipCompressor();
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual int __fastcall Seek(int Offset, System::Word Origin)/* overload */;
	unsigned __fastcall SizeIn();
	unsigned __fastcall SizeOut();
	void __fastcall Flush();
	__property unsigned CRC = {read=fCRC, nodefault};
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

struct DECLSPEC_DRECORD TZipEntry
{
public:
	TFileInfo *infoLocal;
	TFileHeader *infoDirectory;
	char *data;
	char *storedName;
	System::Sysutils::TFileName zipName;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TZipRead : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TZipEntry> _TZipRead__1;
	
	
private:
	NativeUInt file_;
	NativeUInt map;
	System::Sysutils::TByteArray *buf;
	TFileHeader *FirstFileHeader;
	unsigned ReadOffset;
	void __fastcall UnMap();
	
public:
	int Count;
	_TZipRead__1 Entry;
	__fastcall TZipRead(const System::Sysutils::TFileName aFileName, unsigned ZipStartOffset, unsigned Size)/* overload */;
	__fastcall TZipRead(NativeUInt Instance, const System::UnicodeString ResName, System::WideChar * ResType)/* overload */;
	__fastcall TZipRead(NativeUInt aFile, unsigned ZipStartOffset, unsigned Size)/* overload */;
	__fastcall TZipRead(System::Sysutils::PByteArray BufZip, unsigned Size)/* overload */;
	__fastcall TZipRead(System::Classes::TStream* aStream)/* overload */;
	__fastcall virtual ~TZipRead();
	int __fastcall NameToIndex(const System::Sysutils::TFileName aName);
	ZipString __fastcall UnZip(int aIndex)/* overload */;
	bool __fastcall UnZip(int aIndex, const System::Sysutils::TFileName DestDir, bool DestDirIsFileName = false)/* overload */;
	ZipString __fastcall UnZip(const System::Sysutils::TFileName aName)/* overload */;
	System::Classes::TStream* __fastcall UnZipStream(const System::Sysutils::TFileName aName)/* overload */;
	bool __fastcall UnZip(const System::Sysutils::TFileName aName, const System::Sysutils::TFileName DestDir, bool DestDirIsFileName = false)/* overload */;
	int __fastcall UnZipAll(System::Sysutils::TFileName DestDir);
	bool __fastcall RetrieveFileInfo(int Index, TFileInfo &Info);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TZipWriteAbstract : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	#pragma pack(push,8)
	struct DECLSPEC_DRECORD _TZipWriteAbstract__1
	{
	public:
		ZipString intName;
		TFileHeader fhr;
	};
	#pragma pack(pop)
	
	
	typedef System::DynamicArray<_TZipWriteAbstract__1> _TZipWriteAbstract__2;
	
	
protected:
	unsigned fAppendOffset;
	unsigned fMagic;
	unsigned __fastcall InternalAdd(const System::Sysutils::TFileName zipName, void * Buf, int Size);
	virtual unsigned __fastcall InternalWritePosition() = 0 ;
	virtual void __fastcall InternalWrite(const void *buf, unsigned len) = 0 ;
	
public:
	int Count;
	_TZipWriteAbstract__2 Entry;
	__fastcall TZipWriteAbstract();
	void __fastcall AddDeflated(const System::Sysutils::TFileName aZipName, void * Buf, int Size, int CompressLevel = 0x6, int FileAge = 0x3c21)/* overload */;
	void __fastcall AddStored(const System::Sysutils::TFileName aZipName, void * Buf, int Size, int FileAge = 0x3c21);
	void __fastcall AddStream(const System::Sysutils::TFileName aName, System::Classes::TStream* aStream);
	void __fastcall Append(const ZipString Content);
	__fastcall virtual ~TZipWriteAbstract();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TZipWrite : public TZipWriteAbstract
{
	typedef TZipWriteAbstract inherited;
	
protected:
	System::Sysutils::TFileName fFileName;
	virtual unsigned __fastcall InternalWritePosition();
	virtual void __fastcall InternalWrite(const void *buf, unsigned len);
	
public:
	int Handle;
	__fastcall TZipWrite(const System::Sysutils::TFileName aFileName)/* overload */;
	__fastcall TZipWrite(const System::Sysutils::TFileName aFileName);
	HIDESBASE void __fastcall AddDeflated(const System::Sysutils::TFileName aFileName, bool RemovePath = true, int CompressLevel = 0x6)/* overload */;
	void __fastcall AddFromZip(const TZipEntry &ZipEntry);
	__fastcall virtual ~TZipWrite();
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  AddDeflated(const System::Sysutils::TFileName aZipName, void * Buf, int Size, int CompressLevel = 0x6, int FileAge = 0x3c21){ TZipWriteAbstract::AddDeflated(aZipName, Buf, Size, CompressLevel, FileAge); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TZipWriteToStream : public TZipWriteAbstract
{
	typedef TZipWriteAbstract inherited;
	
protected:
	System::Classes::TStream* fDest;
	virtual unsigned __fastcall InternalWritePosition();
	virtual void __fastcall InternalWrite(const void *buf, unsigned len);
	
public:
	__fastcall TZipWriteToStream(System::Classes::TStream* aDest);
public:
	/* TZipWriteAbstract.Destroy */ inline __fastcall virtual ~TZipWriteToStream() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
#define ZLIB_VERSION L"1.2.5"
static const System::Int8 Z_NO_FLUSH = System::Int8(0x0);
static const System::Int8 Z_PARTIAL_FLUSH = System::Int8(0x1);
static const System::Int8 Z_SYNC_FLUSH = System::Int8(0x2);
static const System::Int8 Z_FULL_FLUSH = System::Int8(0x3);
static const System::Int8 Z_FINISH = System::Int8(0x4);
static const System::Int8 Z_OK = System::Int8(0x0);
static const System::Int8 Z_STREAM_END = System::Int8(0x1);
static const System::Int8 Z_MEM_ERROR = System::Int8(-4);
static const System::Int8 Z_BUF_ERROR = System::Int8(-5);
static const System::Int8 Z_STORED = System::Int8(0x0);
static const System::Int8 Z_DEFLATED = System::Int8(0x8);
static const System::Int8 MAX_WBITS = System::Int8(0xf);
static const System::Int8 DEF_MEM_LEVEL = System::Int8(0x8);
static const System::Int8 Z_DEFAULT_STRATEGY = System::Int8(0x0);
static const System::Int8 Z_HUFFMAN_ONLY = System::Int8(0x2);
extern DELPHI_PACKAGE bool __fastcall EventArchiveZip(const System::Sysutils::TFileName aOldLogFileName, const System::Sysutils::TFileName aDestinationPath);
extern DELPHI_PACKAGE ZipString __fastcall GZRead(char * gz, int gzLen);
extern DELPHI_PACKAGE int __stdcall inflateInit2_(TZStream &strm, int windowBits, char * version, int stream_size);
extern DELPHI_PACKAGE int __stdcall inflate(TZStream &strm, int flush);
extern DELPHI_PACKAGE int __stdcall inflateEnd(TZStream &strm);
extern DELPHI_PACKAGE unsigned __fastcall adler32(unsigned adler, char * buf, unsigned len);
extern DELPHI_PACKAGE unsigned __fastcall crc32(unsigned crc, char * buf, unsigned len);
extern DELPHI_PACKAGE void * __fastcall get_crc_table(void);
extern DELPHI_PACKAGE void __fastcall StreamInit(TZStream &Stream);
extern DELPHI_PACKAGE bool __fastcall DeflateInit(TZStream &Stream, int CompressionLevel, bool ZlibFormat);
extern DELPHI_PACKAGE int __fastcall Check(const int Code, const int *ValidCodes, const int ValidCodes_High);
extern DELPHI_PACKAGE ZipString __fastcall CompressString(const ZipString data, bool failIfGrow = false, int CompressionLevel = 0x6);
extern DELPHI_PACKAGE ZipString __fastcall UncompressString(const ZipString data);
extern DELPHI_PACKAGE int __fastcall CompressMem(void * src, void * dst, int srcLen, int dstLen, int CompressionLevel = 0x6, bool ZlibFormat = false);
extern DELPHI_PACKAGE unsigned __fastcall CompressStream(void * src, int srcLen, System::Classes::TStream* aStream, int CompressionLevel = 0x6, bool ZlibFormat = false);
extern DELPHI_PACKAGE int __fastcall UnCompressMem(void * src, void * dst, int srcLen, int dstLen, bool ZlibFormat = false);
extern DELPHI_PACKAGE unsigned __fastcall UnCompressStream(void * src, int srcLen, System::Classes::TStream* aStream, System::PCardinal checkCRC, bool ZlibFormat = false);
extern DELPHI_PACKAGE System::AnsiString __fastcall CompressGZip(void *DataRawByteString, bool Compress);
extern DELPHI_PACKAGE System::AnsiString __fastcall CompressDeflate(void *DataRawByteString, bool Compress);
extern DELPHI_PACKAGE System::AnsiString __fastcall CompressZLib(void *DataRawByteString, bool Compress);
extern DELPHI_PACKAGE unsigned __fastcall CRC32string(const ZipString aString);
extern DELPHI_PACKAGE int __fastcall deflateInit2_(TZStream &strm, int level, int method, int windowBits, int memLevel, int strategy, char * version, int stream_size);
extern DELPHI_PACKAGE int __fastcall deflate(TZStream &strm, int flush);
extern DELPHI_PACKAGE int __fastcall deflateEnd(TZStream &strm);
}	/* namespace Xlssynzip */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSSYNZIP)
using namespace Xlssynzip;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XlssynzipHPP
