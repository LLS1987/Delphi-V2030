// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_VBA5.pas' rev: 35.00 (Windows)

#ifndef Biff_vba5HPP
#define Biff_vba5HPP

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
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Win.ComObj.hpp>
#include <BIFF_WideStrList5.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_vba5
{
//-- forward type declarations -----------------------------------------------
struct TVBARecHeader;
struct TVBARecordData;
struct TRecVBAProjVersion;
struct TRecVBALanguageId;
struct TModuleData;
class DELPHICLASS TRecordStorageVBA;
class DELPHICLASS TXLSVBAProject;
class DELPHICLASS TVBAModule;
class DELPHICLASS TVBAModuleSource;
class DELPHICLASS TXLSVBA;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TVBAReadResult : unsigned char { vbarrFailure, vbarrReadOnly, vbarrOk };

#pragma pack(push,1)
struct DECLSPEC_DRECORD TVBARecHeader
{
public:
	System::Word RecId;
	unsigned Length;
};
#pragma pack(pop)


typedef TVBARecordData *PVBARecordData;

struct DECLSPEC_DRECORD TVBARecordData
{
	
private:
	struct DECLSPEC_DRECORD _TVBARecordData__1
	{
	};
	
	
	
public:
	System::Word RecId;
	unsigned Length;
	_TVBARecordData__1 Data;
};


#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecVBAProjVersion
{
public:
	System::Word ExcelVBA;
	System::Word Mac;
	System::Word Unknown;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecVBALanguageId
{
public:
	unsigned Id1;
	unsigned Id2;
	System::Word CharSet;
	System::Word Len1;
	unsigned Unknown1;
	unsigned Unknown2;
	System::Word Len2;
	System::Word Len3;
	System::Word Len4;
};
#pragma pack(pop)


struct DECLSPEC_DRECORD TModuleData
{
public:
	System::WideString Name;
	unsigned Offset;
};


enum DECLSPEC_DENUM TVbaModuleType : unsigned char { vmtMacro, vmtDocument };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRecordStorageVBA : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
private:
	System::RawByteString __fastcall GetAsString(int Index);
	System::UnicodeString __fastcall GetAsWideString(int Index);
	void __fastcall SetAsString(int Index, const System::RawByteString Value);
	void __fastcall SetAsWideString(int Index, const System::UnicodeString Value);
	PVBARecordData __fastcall GetItems(int Index);
	
public:
	__fastcall virtual ~TRecordStorageVBA();
	virtual void __fastcall Clear();
	PVBARecordData __fastcall AddRec(const TVBARecHeader &Header, System::Sysutils::PByteArray Data);
	HIDESBASE void __fastcall Delete(int Index);
	void __fastcall RenameModule(System::UnicodeString Name);
	void __fastcall Write(System::Classes::TStream* Stream);
	__property PVBARecordData Items[int Index] = {read=GetItems};
	__property System::RawByteString AsString[int Index] = {read=GetAsString, write=SetAsString};
	__property System::UnicodeString AsWideString[int Index] = {read=GetAsWideString, write=SetAsWideString};
public:
	/* TObject.Create */ inline __fastcall TRecordStorageVBA() : System::Classes::TList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSVBAProject : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<System::UnicodeString> _TXLSVBAProject__1;
	
	typedef System::DynamicArray<TModuleData> _TXLSVBAProject__2;
	
	
private:
	TRecVBAProjVersion FProjVersion;
	TRecVBALanguageId FLangId;
	_TXLSVBAProject__1 FLinkStrings;
	_TXLSVBAProject__2 FModules;
	
public:
	bool __fastcall Read(_di_IStream Stream);
	void __fastcall Clear();
public:
	/* TObject.Create */ inline __fastcall TXLSVBAProject() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSVBAProject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TVBAModule : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall SetName(const System::UnicodeString Value);
	
protected:
	System::UnicodeString FName;
	int FFileOffset;
	TVbaModuleType FModuleType;
	Biff_widestrlist5::TXLSValueWideStringList* FAttributes;
	TRecordStorageVBA* FDir;
	
public:
	__fastcall TVBAModule();
	__fastcall virtual ~TVBAModule();
	__property System::UnicodeString Name = {read=FName, write=SetName};
	__property TVbaModuleType ModuleType = {read=FModuleType, write=FModuleType, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TVBAModuleSource : public TVBAModule
{
	typedef TVBAModule inherited;
	
private:
	System::Classes::TStringList* FSource;
	
protected:
	void __fastcall AddSrcExtractAttr(System::RawByteString Src);
	
public:
	__fastcall TVBAModuleSource();
	__fastcall virtual ~TVBAModuleSource();
	__property System::Classes::TStringList* Source = {read=FSource};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSVBA : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<System::Byte> _TXLSVBA__1;
	
	
public:
	TVBAModuleSource* operator[](int Index) { return this->Modules[Index]; }
	
private:
	System::Contnrs::TObjectList* FModules;
	TXLSVBAProject* FVBAProject;
	System::Classes::TStringList* FProject;
	_TXLSVBA__1 FProjectwm;
	bool FEditVBA;
	bool FDisableVBA;
	bool FIsEditing;
	TRecordStorageVBA* FDir;
	_di_ILockBytes FSavedLockBytes;
	_di_IStorage FSavedStorage;
	bool FHighCompression;
	void __fastcall SetEditVBA(const bool Value);
	int __fastcall StreamSize(_di_IStream Stream);
	int __fastcall DecompressVBA(System::Sysutils::PByteArray BufIn, System::Sysutils::PByteArray &BufOut, int BufSize, int Offset);
	void __fastcall CompressVBA(System::Sysutils::PByteArray Buf, int BufSize, _di_IStream Stream);
	void __fastcall ReadDir(_di_IStorage Storage, System::Sysutils::PByteArray Buf, int BufSz);
	TVBAModuleSource* __fastcall GetModules(int Index);
	int __fastcall ReadStrmToBuf(_di_IStream Stream, System::Sysutils::PByteArray &Buf);
	void __fastcall Strip(_di_IStorage stgVBA);
	void __fastcall ReadPROJECT(_di_IStorage Storage);
	void __fastcall ReadPROJECTwm(_di_IStorage Storage);
	void __fastcall WritePROJECT(_di_IStorage Storage);
	void __fastcall WritePROJECTwm(_di_IStorage Storage);
	void __fastcall WriteModules(_di_IStorage Storage);
	void __fastcall WriteDir(_di_IStorage Storage);
	void __fastcall WriteEmptyVBA_PROJECT(_di_IStream Stream);
	void __fastcall Int_AddModule(System::Sysutils::PByteArray &Buf, _di_IStorage Storage);
	int __fastcall GetCompressShift(int Index);
	void __fastcall SetDisableVBA(const bool Value);
	
public:
	__fastcall TXLSVBA();
	__fastcall virtual ~TXLSVBA();
	void __fastcall Clear();
	TVBAReadResult __fastcall Read(_di_IStorage Storage);
	TVBAReadResult __fastcall ReadXLSM(_di_IStorage Storage);
	void __fastcall Write(_di_IStorage Storage);
	TVBAModuleSource* __fastcall AddModule(System::UnicodeString ModuleName, TVbaModuleType ModuleType);
	TVBAModuleSource* __fastcall ModuleByName(System::UnicodeString ModuleName);
	int __fastcall ModuleIndexByName(System::UnicodeString ModuleName);
	void __fastcall DeleteModule(System::UnicodeString ModuleName);
	int __fastcall Count();
	bool __fastcall HasData();
	__property TVBAModuleSource* Modules[int Index] = {read=GetModules/*, default*/};
	__property bool EditVBA = {read=FEditVBA, write=SetEditVBA, nodefault};
	__property bool DisableVBA = {read=FDisableVBA, write=SetDisableVBA, nodefault};
	__property bool HighCompression = {read=FHighCompression, write=FHighCompression, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
#define VBA_ROOTDIR_NAME L"_VBA_PROJECT_CUR"
#define VBA_SUBDIR_NAME L"VBA"
#define VBA_PROJDIR_NAME L"_VBA_PROJECT"
}	/* namespace Biff_vba5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_VBA5)
using namespace Biff_vba5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_vba5HPP
