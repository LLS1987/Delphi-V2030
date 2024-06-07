// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSZip5.pas' rev: 35.00 (Windows)

#ifndef Xlszip5HPP
#define Xlszip5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Contnrs.hpp>
#include <System.Math.hpp>
#include <XLSUtils5.hpp>
#include <XLSZlibPas5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlszip5
{
//-- forward type declarations -----------------------------------------------
struct TEndOfCentralDir;
struct TCentralDirectoryFile;
struct TLocalFile;
struct TDataDescriptor;
class DELPHICLASS TXLSZipFile;
class DELPHICLASS TXLSZipArchive;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TZipCompressionType : unsigned char { ctNormal, ctMaximum, ctFast, ctSuperFast, ctNone, ctUnknown };

enum DECLSPEC_DENUM TZipCompressionMethod : unsigned char { cmStored, cmShrunk, cmReduced1, cmReduced2, cmReduced3, cmReduced4, cmImploded, cmTokenizingReserved, cmDeflated, cmDeflated64, cmDCLImploding, cmPKWAREReserved };

#pragma pack(push,1)
struct DECLSPEC_DRECORD TEndOfCentralDir
{
public:
	unsigned EndOfCentralDirSignature;
	System::Word NumberOfThisDisk;
	System::Word NumberOfTheDiskWithTheStart;
	System::Word TotalNumberOfEntriesOnThisDisk;
	System::Word TotalNumberOfEntries;
	unsigned SizeOfTheCentralDirectory;
	unsigned OffsetOfStartOfCentralDirectory;
	System::Word ZipfileCommentLength;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TCentralDirectoryFile
{
public:
	unsigned CentralFileHeaderSignature;
	System::Word VersionMadeBy;
	System::Word VersionNeededToExtract;
	System::Word GeneralPurposeBitFlag;
	System::Word CompressionMethod;
	unsigned LastModFileTimeDate;
	unsigned Crc32;
	unsigned CompressedSize;
	unsigned UncompressedSize;
	System::Word FilenameLength;
	System::Word ExtraFieldLength;
	System::Word FileCommentLength;
	System::Word DiskNumberStart;
	System::Word InternalFileAttributes;
	unsigned ExternalFileAttributes;
	unsigned RelativeOffsetOfLocalHeader;
	System::AnsiString FileName;
	System::AnsiString ExtraField;
	System::AnsiString FileComment;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TLocalFile
{
public:
	unsigned LocalFileHeaderSignature;
	System::Word VersionNeededToExtract;
	System::Word GeneralPurposeBitFlag;
	System::Word CompressionMethod;
	unsigned LastModFileTimeDate;
	unsigned Crc32;
	unsigned CompressedSize;
	unsigned UncompressedSize;
	System::Word FilenameLength;
	System::Word ExtraFieldLength;
	System::AnsiString FileName;
	System::AnsiString ExtraField;
	int CompressedDataPos;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TDataDescriptor
{
public:
	unsigned DescriptorSignature;
	unsigned Crc32;
	unsigned CompressedSize;
	unsigned UncompressedSize;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TXLSZipOpenMode : unsigned char { xzomClosed, xzomRead, xzomWrite };

class PASCALIMPLEMENTATION TXLSZipFile : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
private:
	System::UnicodeString __fastcall GetName();
	
protected:
	TXLSZipArchive* FParent;
	System::TDateTime FDate;
	bool FIsEncrypted;
	bool FIsFolder;
	TZipCompressionType FCompressionType;
	TCentralDirectoryFile FCentralDirectoryFile;
	TLocalFile FLocalFile;
	System::Classes::TStream* FDStream;
	int FSeekCount;
	unsigned __fastcall GetCentralEntrySize();
	
public:
	__fastcall TXLSZipFile(TXLSZipArchive* AParent);
	__fastcall virtual ~TXLSZipFile();
	void __fastcall OpenRead();
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
	void __fastcall _SaveToStream(System::Classes::TStream* AStream);
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	void __fastcall Close();
	__property System::UnicodeString Name = {read=GetName};
	__property unsigned CompressedSize = {read=FLocalFile.CompressedSize, nodefault};
	__property unsigned UncompressedSize = {read=FLocalFile.UncompressedSize, nodefault};
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSZipArchive : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSZipFile* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSZipFile* __fastcall GetItems(int Index);
	
protected:
	TXLSZipOpenMode FOpenMode;
	System::Classes::TStream* FStream;
	bool FOwnsStream;
	System::UnicodeString FComment;
	unsigned FEndOfCentralDirPos;
	TEndOfCentralDir FEndOfCentralDir;
	bool FHasBadEntries;
	int FLocalHeaderNumFiles;
	bool FStoreFolders;
	bool FStoreRelativePath;
	TXLSZipFile* FCurrZip;
	int FCurrStreamStart;
	HIDESBASE TXLSZipFile* __fastcall Add();
	bool __fastcall ParseLocalHeaders();
	TLocalFile __fastcall GetLocalEntry(int Offset, int NextOffset);
	void __fastcall LoadLocalHeaders();
	bool __fastcall FindCentralDirectory();
	bool __fastcall ParseCentralHeaders();
	void __fastcall ReadFile();
	void __fastcall ClearEndOfCentralDir();
	void __fastcall WriteCentralDirectory();
	bool __fastcall AddFolderChain(System::UnicodeString ItemName);
	TXLSZipFile* __fastcall AddStreamFast(System::UnicodeString ItemName, System::Classes::TStream* Stream);
	
public:
	__fastcall TXLSZipArchive();
	__fastcall virtual ~TXLSZipArchive();
	int __fastcall Find(System::UnicodeString AFilename);
	void __fastcall OpenRead(System::UnicodeString AFilename)/* overload */;
	void __fastcall OpenRead(System::Classes::TStream* AStream)/* overload */;
	void __fastcall OpenWrite(System::UnicodeString AFilename)/* overload */;
	void __fastcall OpenWrite(System::Classes::TStream* AStream)/* overload */;
	void __fastcall AddStream(System::UnicodeString AFilename, System::Classes::TStream* AStream);
	Xlszlibpas5::TCompressionStream* __fastcall CreateStream(const System::UnicodeString AFilename);
	void __fastcall CloseStream(Xlszlibpas5::TCompressionStream* AStream);
	void __fastcall Close();
	__property TXLSZipFile* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 ZL_DEF_COMPRESSIONMETHOD = System::Int8(0x8);
static const System::Int8 ZL_ENCH_COMPRESSIONMETHOD = System::Int8(0x9);
static const System::Int8 ZL_DEF_COMPRESSIONINFO = System::Int8(0x7);
static const System::Int8 ZL_PRESET_DICT = System::Int8(0x20);
static const System::Int8 ZL_FASTEST_COMPRESSION = System::Int8(0x0);
static const System::Int8 ZL_FAST_COMPRESSION = System::Int8(0x1);
static const System::Int8 ZL_DEFAULT_COMPRESSION = System::Int8(0x2);
static const System::Int8 ZL_MAXIMUM_COMPRESSION = System::Int8(0x3);
static const System::Int8 ZL_FCHECK_MASK = System::Int8(0x1f);
static const System::Byte ZL_CINFO_MASK = System::Byte(0xf0);
static const System::Byte ZL_FLEVEL_MASK = System::Byte(0xc0);
static const System::Int8 ZL_CM_MASK = System::Int8(0xf);
static const int ZL_MULTIPLE_DISK_SIG = int(0x8074b50);
static const int ZL_DATA_DESCRIPT_SIG = int(0x8074b50);
static const int ZL_LOCAL_HEADERSIG = int(0x4034b50);
static const int ZL_CENTRAL_HEADERSIG = int(0x2014b50);
static const int ZL_EOC_HEADERSIG = int(0x6054b50);
}	/* namespace Xlszip5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSZIP5)
using namespace Xlszip5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlszip5HPP
