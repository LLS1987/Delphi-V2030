// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSReadWriteZIP5.pas' rev: 35.00 (Windows)

#ifndef Xlsreadwritezip5HPP
#define Xlsreadwritezip5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Contnrs.hpp>
#include <System.Zip.hpp>
#include <XLSZlibPas5.hpp>
#include <XLSZip5.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsreadwritezip5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSOwnerStream;
class DELPHICLASS TXLSZipArchiveIntf;
class DELPHICLASS TXLSZipArchiveIntfXLS;
class DELPHICLASS TXLSZipArchiveIntfDelphi;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSOwnerStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
protected:
	Xlszip5::TXLSZipFile* FZipStream;
	System::UnicodeString FId;
	virtual __int64 __fastcall GetSize();
	
public:
	__fastcall TXLSOwnerStream(Xlszip5::TXLSZipFile* const AZipStream, System::UnicodeString AId);
	__fastcall virtual ~TXLSOwnerStream();
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSZipArchiveIntf : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TFileStream* FZipStream;
	
public:
	__fastcall virtual ~TXLSZipArchiveIntf();
	virtual int __fastcall Count() = 0 ;
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream) = 0 ;
	void __fastcall LoadFromFile(const System::UnicodeString AFilename);
	virtual int __fastcall Find(System::UnicodeString Filename) = 0 ;
	virtual System::Classes::TStream* __fastcall OpenStream(System::UnicodeString Filename) = 0 ;
	virtual System::Classes::TStream* __fastcall CreateStream(System::UnicodeString Filename) = 0 /* overload */;
	virtual System::Classes::TStream* __fastcall CreateStream(System::UnicodeString FolderName, System::UnicodeString Filename) = 0 /* overload */;
	virtual void __fastcall CloseStream(System::Classes::TStream* AStream) = 0 ;
	virtual void __fastcall Write(System::UnicodeString Filename, System::Classes::TStream* Source) = 0 /* overload */;
	virtual void __fastcall Write(System::UnicodeString FolderName, System::UnicodeString Filename, System::Classes::TStream* Source) = 0 /* overload */;
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream) = 0 ;
	virtual void __fastcall Close() = 0 ;
public:
	/* TObject.Create */ inline __fastcall TXLSZipArchiveIntf() : System::TObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSZipArchiveIntfXLS : public TXLSZipArchiveIntf
{
	typedef TXLSZipArchiveIntf inherited;
	
private:
	Xlszip5::TXLSZipArchive* FZip;
	
public:
	__fastcall TXLSZipArchiveIntfXLS();
	__fastcall virtual ~TXLSZipArchiveIntfXLS();
	virtual int __fastcall Count();
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual int __fastcall Find(System::UnicodeString Filename);
	virtual System::Classes::TStream* __fastcall OpenStream(System::UnicodeString Filename);
	virtual System::Classes::TStream* __fastcall CreateStream(System::UnicodeString Filename)/* overload */;
	virtual System::Classes::TStream* __fastcall CreateStream(System::UnicodeString FolderName, System::UnicodeString Filename)/* overload */;
	virtual void __fastcall CloseStream(System::Classes::TStream* AStream);
	virtual void __fastcall Write(System::UnicodeString Filename, System::Classes::TStream* Source)/* overload */;
	virtual void __fastcall Write(System::UnicodeString FolderName, System::UnicodeString Filename, System::Classes::TStream* Source)/* overload */;
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall Close();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSZipArchiveIntfDelphi : public TXLSZipArchiveIntf
{
	typedef TXLSZipArchiveIntf inherited;
	
private:
	System::Zip::TZipFile* FZip;
	System::UnicodeString FCurrFilename;
	System::Classes::TStream* FWriteStream;
	
public:
	__fastcall TXLSZipArchiveIntfDelphi();
	__fastcall virtual ~TXLSZipArchiveIntfDelphi();
	virtual int __fastcall Count();
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual int __fastcall Find(System::UnicodeString Filename);
	virtual System::Classes::TStream* __fastcall OpenStream(System::UnicodeString Filename);
	virtual System::Classes::TStream* __fastcall CreateStream(System::UnicodeString Filename)/* overload */;
	virtual System::Classes::TStream* __fastcall CreateStream(System::UnicodeString FolderName, System::UnicodeString Filename)/* overload */;
	virtual void __fastcall CloseStream(System::Classes::TStream* AStream);
	virtual void __fastcall Write(System::UnicodeString Filename, System::Classes::TStream* Source)/* overload */;
	virtual void __fastcall Write(System::UnicodeString FolderName, System::UnicodeString Filename, System::Classes::TStream* Source)/* overload */;
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall Close();
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsreadwritezip5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSREADWRITEZIP5)
using namespace Xlsreadwritezip5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsreadwritezip5HPP
