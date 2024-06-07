// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_CompoundStream5.pas' rev: 35.00 (Windows)

#ifndef Biff_compoundstream5HPP
#define Biff_compoundstream5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Math.hpp>
#include <System.Contnrs.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_compoundstream5
{
//-- forward type declarations -----------------------------------------------
struct TCompoundDocHeader;
struct TDirEntry;
class DELPHICLASS TCacheFile;
class DELPHICLASS TCompFile;
class DELPHICLASS TCompoundStorage;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TStorageOpenMode : unsigned char { somClosed, somRead, somWrite };

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCompoundDocHeader
{
public:
	System::StaticArray<System::Byte, 8> Id;
	System::StaticArray<System::Byte, 16> DocId;
	System::Word RevisionNumber;
	System::Word VersionNumber;
	System::Word ByteOrder;
	System::Word SectorSize;
	System::Word ShortSectorSize;
	System::StaticArray<System::Byte, 10> Unused1;
	unsigned TotalSectors;
	int DirSID;
	unsigned Unused2;
	unsigned MinStdStream;
	int ShortSecSID;
	unsigned ShortSecCount;
	int MasterSecSID;
	unsigned MasterSecCount;
	System::StaticArray<int, 109> FirstMasterSecSIDs;
};
#pragma pack(pop)


typedef TDirEntry *PDirEntry;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TDirEntry
{
public:
	System::StaticArray<System::WideChar, 32> Name;
	System::Word NameSize;
	System::Byte EntryType;
	System::Byte NodeColor;
	int LeftChildDID;
	int RightChildDID;
	int RootDID;
	System::StaticArray<System::Byte, 16> Id;
	unsigned UserFlags;
	System::StaticArray<unsigned, 2> CreationTimestamp;
	System::StaticArray<unsigned, 2> LastModTimestamp;
	int FirstSID;
	unsigned StreamSize;
	unsigned Unused;
};
#pragma pack(pop)


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCacheFile : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TCacheFile* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::WideString FName;
	System::Sysutils::TByteArray *FData;
	int FDataSize;
	bool FIsDirectory;
	TCacheFile* FFiles;
	TCacheFile* __fastcall GetItems(int Index);
	void __fastcall SetData(const System::Sysutils::PByteArray Value);
	
public:
	HIDESBASE TCacheFile* __fastcall Add();
	virtual void __fastcall Clear();
	__property TCacheFile* Items[int Index] = {read=GetItems/*, default*/};
	__property System::WideString Name = {read=FName, write=FName};
	__property System::Sysutils::PByteArray Data = {read=FData, write=SetData};
	__property int DataSize = {read=FDataSize, write=FDataSize, nodefault};
	__property bool IsDirectory = {read=FIsDirectory, write=FIsDirectory, nodefault};
public:
	/* TObjectList.Create */ inline __fastcall TCacheFile()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TCacheFile(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCacheFile() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCompFile : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TCompFile* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCompoundStorage* FStorage;
	TCompFile* FFiles;
	System::WideString FName;
	int FDataSize;
	bool FIsDirectory;
	int FSID;
	int FSize;
	int FCurrPos;
	bool FWritingSmallSec;
	int FDID;
	int FLeftDID;
	int FRightDID;
	int FRootDID;
	System::StaticArray<unsigned, 2> FCreationTimestamp;
	System::StaticArray<unsigned, 2> FLastModTimestamp;
	TCompFile* __fastcall GetItems(int Index);
	
protected:
	int __fastcall DecompressVBA(System::Sysutils::PByteArray &Buf, int Offset);
	
public:
	__fastcall TCompFile(TCompoundStorage* CompStorage);
	__fastcall virtual ~TCompFile();
	HIDESBASE TCompFile* __fastcall Add(System::WideString Name, int Size = 0x0);
	TCompFile* __fastcall FindStream(System::WideString Name, bool SearchSubDirs);
	void __fastcall Cache(System::Sysutils::PByteArray &Data);
	void __fastcall Open();
	int __fastcall Read(const void *Buffer, int Count);
	int __fastcall Write(const void *Buffer, int Count);
	int __fastcall Seek(int Offset, System::Word Origin);
	void __fastcall Close();
	__property TCompFile* Items[int Index] = {read=GetItems/*, default*/};
	__property bool IsDirectory = {read=FIsDirectory, write=FIsDirectory, nodefault};
	__property TCompFile* Files = {read=FFiles};
	__property System::WideString Name = {read=FName};
	__property int DataSize = {read=FDataSize, nodefault};
	__property int DID = {read=FDID, nodefault};
	__property int LeftDID = {read=FLeftDID, nodefault};
	__property int RightDID = {read=FRightDID, nodefault};
	__property int RootDID = {read=FRootDID, nodefault};
	__property int Size = {read=FSize, nodefault};
};

#pragma pack(pop)

typedef System::StaticArray<int, 16384> TLongintArray;

typedef TLongintArray *PLongintArray;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCompoundStorage : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TStorageOpenMode FOpenMode;
	System::Classes::TStream* FStream;
	bool FOwnsStream;
	TCompoundDocHeader FHeader;
	int FSectorSize;
	int FShortSectorSize;
	TLongintArray *FSAT;
	TLongintArray *FSSAT;
	TCompFile* FFiles;
	System::Sysutils::TByteArray *FShortSectors;
	int FShortSectorsSize;
	System::Sysutils::TByteArray *FWBuf;
	int FMaxSID;
	int FMaxSSID;
	int FLastSID;
	int FLastPos;
	int __fastcall SIDToPos(int SID);
	int __fastcall GetSID();
	int __fastcall AllocSIDs(int Count, bool IsMSAT = false);
	int __fastcall AllocSSIDs(int Count);
	void __fastcall WriteShort(const void *Buffer, int Count);
	void __fastcall WriteSAT();
	void __fastcall WriteDirectories();
	void __fastcall WriteShortSectors();
	void __fastcall ReadSAT();
	void __fastcall ReadShortSectors();
	void __fastcall ReadDirectories();
	int __fastcall ReadStream(bool SS, int SID, int Position, int Count, System::Sysutils::PByteArray Buf);
	void __fastcall Clear();
	void __fastcall SetDefault();
	void __fastcall PadSector();
	void __fastcall PadSectorNeg();
	void __fastcall SetFiles(TCompFile* const Value);
	
public:
	__fastcall TCompoundStorage();
	__fastcall virtual ~TCompoundStorage();
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromFile(System::WideString Filename);
	void __fastcall ReadCache(TCacheFile* CacheFile, System::WideString *ExceptThese, const int ExceptThese_High);
	void __fastcall WriteCache(TCacheFile* CacheFile);
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall SaveToFile(System::WideString Filename);
	void __fastcall Close();
	void __fastcall CloseFile();
	bool __fastcall IsStorage(System::WideString Filename);
	__property TCompFile* Files = {read=FFiles, write=SetFiles};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 SID_Free = System::Int8(-1);
static const System::Int8 SID_EndOfChain = System::Int8(-2);
static const System::Int8 SID_SAT = System::Int8(-3);
static const System::Int8 SID_MSAT = System::Int8(-4);
static const System::Int8 DirEntry_Empty = System::Int8(0x0);
static const System::Int8 DirEntry_Storage = System::Int8(0x1);
static const System::Int8 DirEntry_Stream = System::Int8(0x2);
static const System::Int8 DirEntry_LockBytes = System::Int8(0x3);
static const System::Int8 DirEntry_Property = System::Int8(0x4);
static const System::Int8 DirEntry_Root = System::Int8(0x5);
}	/* namespace Biff_compoundstream5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_COMPOUNDSTREAM5)
using namespace Biff_compoundstream5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_compoundstream5HPP
