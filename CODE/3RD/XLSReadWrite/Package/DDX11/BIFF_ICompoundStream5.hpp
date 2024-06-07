// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_ICompoundStream5.pas' rev: 35.00 (Windows)

#ifndef Biff_icompoundstream5HPP
#define Biff_icompoundstream5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <XLSUtils5.hpp>
#include <BIFF_CompoundStream5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_icompoundstream5
{
//-- forward type declarations -----------------------------------------------
struct tagSTATSTG;
struct TXLSGlobalMem;
__interface DELPHIINTERFACE IEnumStatStg;
typedef System::DelphiInterface<IEnumStatStg> _di_IEnumStatStg;
__interface DELPHIINTERFACE IStream;
typedef System::DelphiInterface<IStream> _di_IStream;
__interface DELPHIINTERFACE IStorage;
typedef System::DelphiInterface<IStorage> _di_IStorage;
__interface DELPHIINTERFACE ILockBytes;
typedef System::DelphiInterface<ILockBytes> _di_ILockBytes;
class DELPHICLASS TCompLockBytes;
class DELPHICLASS TCompStorage;
class DELPHICLASS TCompStream;
//-- type declarations -------------------------------------------------------
typedef __int64 LargeInt;

typedef System::WideChar * POleStr;

typedef GUID TCLSID;

typedef System::WideChar * *TSNB;

typedef System::PGUID PIID;

typedef System::TDateTime TFileTime;

typedef bool BOOL;

typedef tagSTATSTG *PStatStg;

struct DECLSPEC_DRECORD tagSTATSTG
{
public:
	System::WideChar *pwcsName;
	int dwType;
	__int64 cbSize;
	System::TDateTime mtime;
	System::TDateTime ctime;
	System::TDateTime atime;
	int grfMode;
	int grfLocksSupported;
	GUID clsid;
	int grfStateBits;
	int reserved;
};


typedef tagSTATSTG TStatStg;

typedef tagSTATSTG STATSTG;

typedef TXLSGlobalMem *PXLSGlobalMem;

struct DECLSPEC_DRECORD TXLSGlobalMem
{
public:
	void *Data;
	NativeInt Size;
	System::Classes::TStream* Stream;
};


__interface  INTERFACE_UUID("{B4C201E9-C970-49E7-AAEE-5BF9EFFB389C}") IEnumStatStg  : public System::IInterface 
{
	virtual HRESULT __fastcall Next(int celt, /* out */ void *elt, System::PLongInt pceltFetched) = 0 ;
	virtual HRESULT __fastcall Skip(int celt) = 0 ;
	virtual HRESULT __fastcall Reset() = 0 ;
	virtual HRESULT __fastcall Clone(/* out */ _di_IEnumStatStg &enm) = 0 ;
};

__interface  INTERFACE_UUID("{6464605F-B967-41CD-ABC0-D3B7DCCD3936}") IStream  : public System::IInterface 
{
	virtual HRESULT __fastcall Read(void * pv, int cb, System::PLongInt pcbRead) = 0 ;
	virtual HRESULT __fastcall Write(void * pv, int cb, System::PLongInt pcbWritten) = 0 ;
	virtual HRESULT __fastcall Seek(__int64 dlibMove, int dwOrigin, /* out */ __int64 &libNewPosition) = 0 ;
	virtual HRESULT __fastcall SetSize(__int64 libNewSize) = 0 ;
	virtual HRESULT __fastcall CopyTo(_di_IStream stm, __int64 cb, /* out */ __int64 &cbRead, /* out */ __int64 &cbWritten) = 0 ;
	virtual HRESULT __fastcall Commit(int grfCommitFlags) = 0 ;
	virtual HRESULT __fastcall Revert() = 0 ;
	virtual HRESULT __fastcall LockRegion(__int64 libOffset, __int64 cb, int dwLockType) = 0 ;
	virtual HRESULT __fastcall UnlockRegion(__int64 libOffset, __int64 cb, int dwLockType) = 0 ;
	virtual HRESULT __fastcall Stat(/* out */ tagSTATSTG &statstg, int grfStatFlag) = 0 ;
	virtual HRESULT __fastcall Clone(/* out */ _di_IStream &stm) = 0 ;
};

__interface  INTERFACE_UUID("{12732E38-3E8C-4D79-84F7-0CFB14014082}") IStorage  : public System::IInterface 
{
	virtual HRESULT __fastcall CreateStream(System::WideChar * pwcsName, int grfMode, int reserved1, int reserved2, /* out */ _di_IStream &stm) = 0 ;
	virtual HRESULT __fastcall OpenStream(System::WideChar * pwcsName, void * reserved1, int grfMode, int reserved2, /* out */ _di_IStream &stm) = 0 ;
	virtual HRESULT __fastcall CreateStorage(System::WideChar * pwcsName, int grfMode, int dwStgFmt, int reserved2, /* out */ _di_IStorage &stg) = 0 ;
	virtual HRESULT __fastcall OpenStorage(System::WideChar * pwcsName, const _di_IStorage stgPriority, int grfMode, TSNB snbExclude, int reserved, /* out */ _di_IStorage &stg) = 0 ;
	virtual HRESULT __fastcall CopyTo(int ciidExclude, System::PGUID rgiidExclude, TSNB snbExclude, const _di_IStorage stgDest) = 0 ;
	virtual HRESULT __fastcall MoveElementTo(System::WideChar * pwcsName, const _di_IStorage stgDest, System::WideChar * pwcsNewName, int grfFlags) = 0 ;
	virtual HRESULT __fastcall Commit(int grfCommitFlags) = 0 ;
	virtual HRESULT __fastcall Revert() = 0 ;
	virtual HRESULT __fastcall EnumElements(int reserved1, void * reserved2, int reserved3, /* out */ _di_IEnumStatStg &enm) = 0 ;
	virtual HRESULT __fastcall DestroyElement(System::WideChar * pwcsName) = 0 ;
	virtual HRESULT __fastcall RenameElement(System::WideChar * pwcsOldName, System::WideChar * pwcsNewName) = 0 ;
	virtual HRESULT __fastcall SetElementTimes(System::WideChar * pwcsName, const System::TDateTime ctime, const System::TDateTime atime, const System::TDateTime mtime) = 0 ;
	virtual HRESULT __stdcall SetClass(const GUID &clsid) = 0 ;
	virtual HRESULT __fastcall SetStateBits(int grfStateBits, int grfMask) = 0 ;
	virtual HRESULT __fastcall Stat(/* out */ tagSTATSTG &statstg, int grfStatFlag) = 0 ;
	virtual Biff_compoundstream5::TCompoundStorage* __fastcall Compound() = 0 ;
	virtual Biff_compoundstream5::TCacheFile* __fastcall Cache() = 0 ;
};

__interface  INTERFACE_UUID("{CDCE42EE-0381-420B-9D82-9F2F8ECFC312}") ILockBytes  : public System::IInterface 
{
	virtual HRESULT __fastcall ReadAt(__int64 ulOffset, void * pv, int cb, System::PLongInt pcbRead) = 0 ;
	virtual HRESULT __fastcall WriteAt(__int64 ulOffset, void * pv, int cb, System::PLongInt pcbWritten) = 0 ;
	virtual HRESULT __fastcall Flush() = 0 ;
	virtual HRESULT __fastcall SetSize(__int64 cb) = 0 ;
	virtual HRESULT __fastcall LockRegion(__int64 libOffset, __int64 cb, int dwLockType) = 0 ;
	virtual HRESULT __fastcall UnlockRegion(__int64 libOffset, __int64 cb, int dwLockType) = 0 ;
	virtual HRESULT __fastcall Stat(/* out */ tagSTATSTG &statstg, int grfStatFlag) = 0 ;
	virtual PXLSGlobalMem __fastcall Data() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCompLockBytes : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
protected:
	TXLSGlobalMem *FData;
	
public:
	__fastcall virtual ~TCompLockBytes();
	HRESULT __fastcall ReadAt(__int64 ulOffset, void * pv, int cb, System::PLongInt pcbRead);
	HRESULT __fastcall WriteAt(__int64 ulOffset, void * pv, int cb, System::PLongInt pcbWritten);
	HRESULT __fastcall Flush();
	HRESULT __fastcall SetSize(__int64 cb);
	HRESULT __fastcall LockRegion(__int64 libOffset, __int64 cb, int dwLockType);
	HRESULT __fastcall UnlockRegion(__int64 libOffset, __int64 cb, int dwLockType);
	HRESULT __fastcall Stat(/* out */ tagSTATSTG &statstg, int grfStatFlag);
	PXLSGlobalMem __fastcall Data();
public:
	/* TObject.Create */ inline __fastcall TCompLockBytes() : System::TInterfacedObject() { }
	
private:
	void *__ILockBytes;	// ILockBytes 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {CDCE42EE-0381-420B-9D82-9F2F8ECFC312}
	operator _di_ILockBytes()
	{
		_di_ILockBytes intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ILockBytes*(void) { return (ILockBytes*)&__ILockBytes; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCompStorage : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
protected:
	Biff_compoundstream5::TCompoundStorage* FCompound;
	Biff_compoundstream5::TCacheFile* FCache;
	System::WideString FFilename;
	
public:
	__fastcall TCompStorage();
	__fastcall virtual ~TCompStorage();
	HRESULT __fastcall CreateStream(System::WideChar * pwcsName, int grfMode, int reserved1, int reserved2, /* out */ _di_IStream &stm);
	HRESULT __fastcall OpenStream(System::WideChar * pwcsName, void * reserved1, int grfMode, int reserved2, /* out */ _di_IStream &stm);
	HRESULT __fastcall CreateStorage(System::WideChar * pwcsName, int grfMode, int dwStgFmt, int reserved2, /* out */ _di_IStorage &stg);
	HRESULT __fastcall OpenStorage(System::WideChar * pwcsName, const _di_IStorage stgPriority, int grfMode, TSNB snbExclude, int reserved, /* out */ _di_IStorage &stg);
	HRESULT __fastcall CopyTo(int ciidExclude, System::PGUID rgiidExclude, TSNB snbExclude, const _di_IStorage stgDest);
	HRESULT __fastcall MoveElementTo(System::WideChar * pwcsName, const _di_IStorage stgDest, System::WideChar * pwcsNewName, int grfFlags);
	HRESULT __fastcall Commit(int grfCommitFlags);
	HRESULT __fastcall Revert();
	HRESULT __fastcall EnumElements(int reserved1, void * reserved2, int reserved3, /* out */ _di_IEnumStatStg &enm);
	HRESULT __fastcall DestroyElement(System::WideChar * pwcsName);
	HRESULT __fastcall RenameElement(System::WideChar * pwcsOldName, System::WideChar * pwcsNewName);
	HRESULT __fastcall SetElementTimes(System::WideChar * pwcsName, const System::TDateTime ctime, const System::TDateTime atime, const System::TDateTime mtime);
	HRESULT __stdcall SetClass(const GUID &clsid);
	HRESULT __fastcall SetStateBits(int grfStateBits, int grfMask);
	HRESULT __fastcall Stat(/* out */ tagSTATSTG &statstg, int grfStatFlag);
	Biff_compoundstream5::TCompoundStorage* __fastcall Compound();
	void __fastcall AddCache();
	Biff_compoundstream5::TCacheFile* __fastcall Cache();
private:
	void *__IStorage;	// IStorage 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {12732E38-3E8C-4D79-84F7-0CFB14014082}
	operator _di_IStorage()
	{
		_di_IStorage intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IStorage*(void) { return (IStorage*)&__IStorage; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCompStream : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
protected:
	Biff_compoundstream5::TCompFile* FCompFile;
	
public:
	__fastcall TCompStream(Biff_compoundstream5::TCompFile* ACompFile);
	__fastcall virtual ~TCompStream();
	HRESULT __fastcall Read(void * pv, int cb, System::PLongInt pcbRead);
	HRESULT __fastcall Write(void * pv, int cb, System::PLongInt pcbWritten);
	HRESULT __fastcall Seek(__int64 dlibMove, int dwOrigin, /* out */ __int64 &libNewPosition);
	HRESULT __fastcall SetSize(__int64 libNewSize);
	HRESULT __fastcall CopyTo(_di_IStream stm, __int64 cb, /* out */ __int64 &cbRead, /* out */ __int64 &cbWritten);
	HRESULT __fastcall Commit(int grfCommitFlags);
	HRESULT __fastcall Revert();
	HRESULT __fastcall LockRegion(__int64 libOffset, __int64 cb, int dwLockType);
	HRESULT __fastcall UnlockRegion(__int64 libOffset, __int64 cb, int dwLockType);
	HRESULT __fastcall Stat(/* out */ tagSTATSTG &statstg, int grfStatFlag);
	HRESULT __fastcall Clone(/* out */ _di_IStream &stm);
private:
	void *__IStream;	// IStream 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6464605F-B967-41CD-ABC0-D3B7DCCD3936}
	operator _di_IStream()
	{
		_di_IStream intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IStream*(void) { return (IStream*)&__IStream; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Word STGM_CREATE = System::Word(0x1000);
static const System::Int8 STGM_READ = System::Int8(0x0);
static const System::Int8 STGM_WRITE = System::Int8(0x1);
static const System::Int8 STGM_READWRITE = System::Int8(0x2);
static const System::Int8 STGM_SHARE_EXCLUSIVE = System::Int8(0x10);
static const System::Int8 STGM_DIRECT = System::Int8(0x0);
static const System::Int8 STGM_SHARE_DENY_NONE = System::Int8(0x40);
static const System::Int8 STGM_SHARE_DENY_READ = System::Int8(0x30);
static const System::Int8 STGM_SHARE_DENY_WRITE = System::Int8(0x20);
static const int STGM_TRANSACTED = int(0x10001);
static const int STGC_DEFAULT = int(0x10002);
static const int STATFLAG_NONAME = int(0x10003);
static const System::Int8 STREAM_SEEK_SET = System::Int8(0x0);
static const System::Int8 STREAM_SEEK_CUR = System::Int8(0x1);
static const System::Int8 STREAM_SEEK_END = System::Int8(0x2);
static const System::Int8 GMEM_MOVEABLE = System::Int8(0x1);
extern DELPHI_PACKAGE HRESULT __fastcall StgOpenStorage(System::WideChar * pwcsName, _di_IStorage stgPriority, int grfMode, TSNB snbExclude, int reserved, /* out */ _di_IStorage &stgOpen);
extern DELPHI_PACKAGE HRESULT __fastcall CreateILockBytesOnHGlobal(NativeUInt hglob, bool fDeleteOnRelease, /* out */ _di_ILockBytes &lkbyt);
extern DELPHI_PACKAGE HRESULT __fastcall StgCreateDocfileOnILockBytes(_di_ILockBytes lkbyt, int grfMode, int reserved, /* out */ _di_IStorage &stgOpen);
extern DELPHI_PACKAGE HRESULT __fastcall StgCreateDocfile(System::WideChar * pwcsName, int grfMode, int reserved, /* out */ _di_IStorage &stgOpen);
extern DELPHI_PACKAGE HRESULT __fastcall StgOpenStorageOnILockBytes(_di_ILockBytes lkbyt, _di_IStorage stgPriority, int grfMode, TSNB snbExclude, int reserved, /* out */ _di_IStorage &stgOpen);
extern DELPHI_PACKAGE HRESULT __fastcall StgIsStorageFile(System::WideChar * pwcsName);
extern DELPHI_PACKAGE HRESULT __fastcall GetHGlobalFromILockBytes(_di_ILockBytes lkbyt, /* out */ NativeUInt &hglob);
extern DELPHI_PACKAGE void __fastcall OleCheck(HRESULT Result);
extern DELPHI_PACKAGE NativeInt __fastcall GlobalAlloc(unsigned AFlags, int ASize);
extern DELPHI_PACKAGE void * __fastcall GlobalLock(NativeInt AHandle);
extern DELPHI_PACKAGE void __fastcall GlobalUnlock(NativeInt AHandle);
extern DELPHI_PACKAGE int __fastcall GlobalSize(unsigned AHandle);
}	/* namespace Biff_icompoundstream5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_ICOMPOUNDSTREAM5)
using namespace Biff_icompoundstream5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_icompoundstream5HPP
