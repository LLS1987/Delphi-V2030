// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Xc12FileData5.pas' rev: 35.00 (Windows)

#ifndef Xc12filedata5HPP
#define Xc12filedata5HPP

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
#include <System.IniFiles.hpp>
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>
#include <xpgPSimpleDOM.hpp>
#include <XLSReadWriteOPC5.hpp>
#include <Xc12DefaultData5.hpp>
#include <xpgParseContentType.hpp>
#include <xpgParseDocPropsApp.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xc12filedata5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSSavedFileData;
class DELPHICLASS TXLSSavedFileDataList;
class DELPHICLASS TXLSSavedFileDataSheet;
class DELPHICLASS TXc12FileData;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSSavedFileData : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FType;
	System::UnicodeString FTarget;
	System::UnicodeString FContent;
	System::Classes::TStream* FData;
	TXLSSavedFileDataList* FChilds;
	
public:
	__fastcall TXLSSavedFileData();
	__fastcall virtual ~TXLSSavedFileData();
	void __fastcall AddChilds();
	__property System::UnicodeString Type_ = {read=FType, write=FType};
	__property System::UnicodeString Target = {read=FTarget, write=FTarget};
	__property System::UnicodeString Content = {read=FContent, write=FContent};
	__property System::Classes::TStream* Data = {read=FData, write=FData};
	__property TXLSSavedFileDataList* Childs = {read=FChilds};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSSavedFileDataList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSSavedFileData* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSSavedFileData* __fastcall GetItems(int Index);
	
protected:
	bool FHasVBA;
	bool FHasSignedVBA;
	
public:
	__fastcall TXLSSavedFileDataList();
	__fastcall virtual ~TXLSSavedFileDataList();
	TXLSSavedFileData* __fastcall FindByType(System::UnicodeString AType);
	TXLSSavedFileData* __fastcall FindByTarget(System::UnicodeString ATarget);
	HIDESBASE void __fastcall Add(System::UnicodeString AType, System::UnicodeString ATarget, System::UnicodeString AContent, System::Classes::TStream* AData);
	__property bool HasMacros = {read=FHasVBA, nodefault};
	__property bool HasSignedVBA = {read=FHasSignedVBA, nodefault};
	__property TXLSSavedFileData* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSSavedFileDataSheet : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TXLSSavedFileDataList* FSheetData;
	TXLSSavedFileDataList* FTableData;
	
public:
	__fastcall TXLSSavedFileDataSheet();
	__fastcall virtual ~TXLSSavedFileDataSheet();
	__property TXLSSavedFileDataList* SheetData = {read=FSheetData};
	__property TXLSSavedFileDataList* TableData = {read=FTableData};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12FileData : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall SetUseAlternateZip(const bool Value);
	bool __fastcall GetHasMacros();
	
protected:
	Xpgparsecontenttype::TXPGDocContentType* FContentType;
	Xpgparsedocpropsapp::TXPGDocDocPropsApp* FDocPropsApp;
	Xpgpsimpledom::TXpgSimpleDOM* FDocPropsCore;
	Xlsreadwriteopc5::TOPC_XLSX* FOPC;
	TXLSSavedFileDataList* FSavedRoot;
	TXLSSavedFileDataList* FSavedWorkbook;
	System::Inifiles::THashedStringList* FSavedSheets;
	bool FUseAlternateZip;
	void __fastcall SetDefaultData();
	void __fastcall ClearSavedSheets();
	void __fastcall ReadContentTypes();
	void __fastcall ReadDocPropsApp();
	void __fastcall ReadDocPropsCore();
	void __fastcall ReadTheme();
	void __fastcall WriteDocPropsCore();
	void __fastcall WriteTheme();
	
public:
	__fastcall TXc12FileData();
	__fastcall virtual ~TXc12FileData();
	void __fastcall Clear();
	void __fastcall LoadFromStream(System::Classes::TStream* AZIPStream);
	void __fastcall ReadUnusedData();
	void __fastcall WriteUnusedData();
	void __fastcall WriteUnusedDataSheet(int AIndex, Xlsreadwriteopc5::TOPCItem* AOPCSheet);
	void __fastcall BeginSaveToStream(System::Classes::TStream* AZIPStream);
	void __fastcall CommitSaveToStream();
	void __fastcall AddSaveSheet(System::UnicodeString AId);
	System::Classes::TStream* __fastcall StreamByName(const System::UnicodeString AName);
	__property Xlsreadwriteopc5::TOPC_XLSX* OPC = {read=FOPC};
	__property Xpgparsedocpropsapp::TXPGDocDocPropsApp* DocPropsApp = {read=FDocPropsApp};
	__property Xpgpsimpledom::TXpgSimpleDOM* DocPropsCore = {read=FDocPropsCore};
	__property bool HasMacros = {read=GetHasMacros, nodefault};
	__property bool UseAlternateZip = {read=FUseAlternateZip, write=SetUseAlternateZip, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xc12filedata5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XC12FILEDATA5)
using namespace Xc12filedata5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xc12filedata5HPP
