// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSZlibPas5.pas' rev: 35.00 (Windows)

#ifndef Xlszlibpas5HPP
#define Xlszlibpas5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Math.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlszlibpas5
{
//-- forward type declarations -----------------------------------------------
struct TZStreamRec;
class DELPHICLASS EZlibError;
class DELPHICLASS ECompressionError;
class DELPHICLASS EDecompressionError;
class DELPHICLASS TCustomZlibStream;
class DELPHICLASS TCompressionStream;
class DELPHICLASS TDecompressionStream;
//-- type declarations -------------------------------------------------------
typedef void * __fastcall (*TAlloc)(void * AppData, int Items, int Size);

typedef void __fastcall (*TFree)(void * AppData, void * Block);

struct DECLSPEC_DRECORD TZStreamRec
{
public:
	char *next_in;
	int avail_in;
	int total_in;
	char *next_out;
	int avail_out;
	int total_out;
	char *msg;
	void *internal;
	TAlloc zalloc;
	TFree zfree;
	void *AppData;
	int data_type;
	int adler;
	int reserved;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION EZlibError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EZlibError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EZlibError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EZlibError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EZlibError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EZlibError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EZlibError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EZlibError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EZlibError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EZlibError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EZlibError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EZlibError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EZlibError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EZlibError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION ECompressionError : public EZlibError
{
	typedef EZlibError inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECompressionError(const System::UnicodeString Msg) : EZlibError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECompressionError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EZlibError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECompressionError(NativeUInt Ident)/* overload */ : EZlibError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECompressionError(System::PResStringRec ResStringRec)/* overload */ : EZlibError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECompressionError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EZlibError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECompressionError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EZlibError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECompressionError(const System::UnicodeString Msg, int AHelpContext) : EZlibError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECompressionError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EZlibError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECompressionError(NativeUInt Ident, int AHelpContext)/* overload */ : EZlibError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECompressionError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EZlibError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECompressionError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EZlibError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECompressionError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EZlibError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECompressionError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EDecompressionError : public EZlibError
{
	typedef EZlibError inherited;
	
public:
	/* Exception.Create */ inline __fastcall EDecompressionError(const System::UnicodeString Msg) : EZlibError(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EDecompressionError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EZlibError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EDecompressionError(NativeUInt Ident)/* overload */ : EZlibError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EDecompressionError(System::PResStringRec ResStringRec)/* overload */ : EZlibError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EDecompressionError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EZlibError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EDecompressionError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EZlibError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EDecompressionError(const System::UnicodeString Msg, int AHelpContext) : EZlibError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EDecompressionError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EZlibError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDecompressionError(NativeUInt Ident, int AHelpContext)/* overload */ : EZlibError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDecompressionError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EZlibError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDecompressionError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EZlibError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDecompressionError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EZlibError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EDecompressionError() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCustomZlibStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
private:
	System::Classes::TStream* FStrm;
	int FStrmPos;
	System::Classes::TNotifyEvent FOnProgress;
	TZStreamRec FZRec;
	System::StaticArray<char, 65536> FBuffer;
	
protected:
	__fastcall TCustomZlibStream(System::Classes::TStream* Strm);
	DYNAMIC void __fastcall Progress(System::TObject* Sender);
	__property System::Classes::TNotifyEvent OnProgress = {read=FOnProgress, write=FOnProgress};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomZlibStream() { }
	
};


enum DECLSPEC_DENUM TCompressionLevel : unsigned char { clNone, clFastest, clDefault, clMax };

class PASCALIMPLEMENTATION TCompressionStream : public TCustomZlibStream
{
	typedef TCustomZlibStream inherited;
	
private:
	unsigned FCRC32;
	void *FTempBuffer;
	int FTempBufSz;
	float __fastcall GetCompressionRate();
	
public:
	__fastcall TCompressionStream(TCompressionLevel CompressionLevel, System::Classes::TStream* Dest, bool AsZip);
	__fastcall virtual ~TCompressionStream();
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	int __fastcall DoWrite(const void *Buffer, int Count);
	void __fastcall WriteStream(System::Classes::TStream* AStream);
	virtual int __fastcall Seek(int Offset, System::Word Origin)/* overload */;
	void __fastcall Flush();
	int __fastcall UncompressedSize();
	__property unsigned CRC32Val = {read=FCRC32, write=FCRC32, nodefault};
	__property float CompressionRate = {read=GetCompressionRate};
	__property OnProgress;
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};


class PASCALIMPLEMENTATION TDecompressionStream : public TCustomZlibStream
{
	typedef TCustomZlibStream inherited;
	
protected:
	int FSize;
	bool FZipMode;
	
public:
	__fastcall TDecompressionStream(System::Classes::TStream* Source);
	__fastcall TDecompressionStream(System::Classes::TStream* Source, int ASize);
	__fastcall virtual ~TDecompressionStream();
	int __fastcall ReadZip(void *Buffer, int Count);
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	int __fastcall Read_(void *Buffer, int Count);
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual int __fastcall Seek(int Offset, System::Word Origin)/* overload */;
	__property bool ZipMode = {read=FZipMode, write=FZipMode, nodefault};
	__property OnProgress;
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};


//-- var, const, procedure ---------------------------------------------------
#define zlib_version L"1.2.5"
static const System::Int8 Z_NO_FLUSH = System::Int8(0x0);
static const System::Int8 Z_PARTIAL_FLUSH = System::Int8(0x1);
static const System::Int8 Z_SYNC_FLUSH = System::Int8(0x2);
static const System::Int8 Z_FULL_FLUSH = System::Int8(0x3);
static const System::Int8 Z_FINISH = System::Int8(0x4);
static const System::Int8 Z_OK = System::Int8(0x0);
static const System::Int8 Z_STREAM_END = System::Int8(0x1);
static const System::Int8 Z_NEED_DICT = System::Int8(0x2);
static const System::Int8 Z_ERRNO = System::Int8(-1);
static const System::Int8 Z_STREAM_ERROR = System::Int8(-2);
static const System::Int8 Z_DATA_ERROR = System::Int8(-3);
static const System::Int8 Z_MEM_ERROR = System::Int8(-4);
static const System::Int8 Z_BUF_ERROR = System::Int8(-5);
static const System::Int8 Z_VERSION_ERROR = System::Int8(-6);
static const System::Int8 Z_NO_COMPRESSION = System::Int8(0x0);
static const System::Int8 Z_BEST_SPEED = System::Int8(0x1);
static const System::Int8 Z_BEST_COMPRESSION = System::Int8(0x9);
static const System::Int8 Z_DEFAULT_COMPRESSION = System::Int8(-1);
static const System::Int8 Z_FILTERED = System::Int8(0x1);
static const System::Int8 Z_HUFFMAN_ONLY = System::Int8(0x2);
static const System::Int8 Z_DEFAULT_STRATEGY = System::Int8(0x0);
static const System::Int8 Z_BINARY = System::Int8(0x0);
static const System::Int8 Z_ASCII = System::Int8(0x1);
static const System::Int8 Z_UNKNOWN = System::Int8(0x2);
static const System::Int8 Z_DEFLATED = System::Int8(0x8);
extern DELPHI_PACKAGE System::StaticArray<char *, 10> _z_errmsg;
extern DELPHI_PACKAGE void __fastcall DecompressBuf(const void * InBuf, int InBytes, int OutEstimate, /* out */ void * &OutBuf, /* out */ int &OutBytes);
extern DELPHI_PACKAGE void __fastcall CompressBuf(const void * InBuf, int InBytes, /* out */ void * &OutBuf, /* out */ int &OutBytes);
}	/* namespace Xlszlibpas5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSZLIBPAS5)
using namespace Xlszlibpas5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlszlibpas5HPP
