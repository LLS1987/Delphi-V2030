// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'xpgParseContentType.pas' rev: 35.00 (Windows)

#ifndef XpgparsecontenttypeHPP
#define XpgparsecontenttypeHPP

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
#include <xpgPUtils.hpp>
#include <xpgPLists.hpp>
#include <xpgPXMLUtils.hpp>
#include <XLSUtils5.hpp>
#include <xpgPXML.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xpgparsecontenttype
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXPGDocBase;
class DELPHICLASS TXPGBase;
class DELPHICLASS TXPGBaseObjectList;
class DELPHICLASS TXPGReader;
class DELPHICLASS TCT_Default;
class DELPHICLASS TCT_DefaultXpgList;
class DELPHICLASS TCT_Override;
class DELPHICLASS TCT_OverrideXpgList;
class DELPHICLASS TCT_Types;
class DELPHICLASS T__ROOT__;
class DELPHICLASS TXPGDocContentType;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGDocBase : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xpgputils::TXpgPErrors* FErrors;
	
public:
	__property Xpgputils::TXpgPErrors* Errors = {read=FErrors};
public:
	/* TObject.Create */ inline __fastcall TXPGDocBase() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXPGDocBase() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGBase : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TXPGDocBase* FOwner;
	int FElementCount;
	int FAttributeCount;
	Xpgpxmlutils::TXpgAssigneds FAssigneds;
	virtual int __fastcall CheckAssigned();
	bool __fastcall Assigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	virtual void __fastcall AfterTag();
	__classmethod int __fastcall StrToEnum(System::UnicodeString AValue);
	__classmethod int __fastcall StrToEnumDef(System::UnicodeString AValue, int ADefault);
	__classmethod bool __fastcall TryStrToEnum(System::UnicodeString AValue, System::UnicodeString AText, System::UnicodeString *AEnumNames, const int AEnumNames_High, System::PInteger APtrInt);
	
public:
	__classmethod void __fastcall AddEnums();
	bool __fastcall Available();
	__property int ElementCount = {read=FElementCount, write=FElementCount, nodefault};
	__property int AttributeCount = {read=FAttributeCount, write=FAttributeCount, nodefault};
	__property Xpgpxmlutils::TXpgAssigneds Assigneds = {read=FAssigneds, write=FAssigneds, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXPGBase() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXPGBase() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGBaseObjectList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
protected:
	TXPGDocBase* FOwner;
	bool FAssigned;
	TXPGBase* __fastcall GetItems(int Index);
	
public:
	__fastcall TXPGBaseObjectList(TXPGDocBase* AOwner);
	__property TXPGBase* Items[int Index] = {read=GetItems};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXPGBaseObjectList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGReader : public Xpgpxml::TXpgReadXML
{
	typedef Xpgpxml::TXpgReadXML inherited;
	
protected:
	TXPGBase* FCurrent;
	System::Contnrs::TObjectStack* FStack;
	Xpgputils::TXpgPErrors* FErrors;
	
public:
	__fastcall TXPGReader(Xpgputils::TXpgPErrors* AErrors, TXPGBase* ARoot);
	__fastcall virtual ~TXPGReader();
	virtual void __fastcall BeginTag();
	virtual void __fastcall EndTag();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Default : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FExtension;
	System::UnicodeString FContentType;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Default(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Default();
	void __fastcall Clear();
	__property System::UnicodeString Extension = {read=FExtension, write=FExtension};
	__property System::UnicodeString ContentType = {read=FContentType, write=FContentType};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DefaultXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Default* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Default* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Default* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Default* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_DefaultXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_DefaultXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Override : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FContentType;
	System::UnicodeString FPartName;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Override(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Override();
	void __fastcall Clear();
	__property System::UnicodeString ContentType = {read=FContentType, write=FContentType};
	__property System::UnicodeString PartName = {read=FPartName, write=FPartName};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OverrideXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Override* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Override* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Override* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Override* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_OverrideXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_OverrideXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Types : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_DefaultXpgList* FDefaultXpgList;
	TCT_OverrideXpgList* FOverrideXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Types(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Types();
	void __fastcall Clear();
	__property TCT_DefaultXpgList* DefaultXpgList = {read=FDefaultXpgList};
	__property TCT_OverrideXpgList* OverrideXpgList = {read=FOverrideXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION T__ROOT__ : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	Xpgplists::TStringXpgList* FRootAttributes;
	TCT_Default* FDefault;
	TCT_Override* FOverride;
	TCT_Types* FTypes;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall T__ROOT__(TXPGDocBase* AOwner);
	__fastcall virtual ~T__ROOT__();
	void __fastcall Clear();
	__property Xpgplists::TStringXpgList* RootAttributes = {read=FRootAttributes};
	__property TCT_Default* Default = {read=FDefault};
	__property TCT_Override* Override = {read=FOverride};
	__property TCT_Types* Types = {read=FTypes};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGDocContentType : public TXPGDocBase
{
	typedef TXPGDocBase inherited;
	
protected:
	T__ROOT__* FRoot;
	TXPGReader* FReader;
	Xpgpxml::TXpgWriteXML* FWriter;
	TCT_Default* __fastcall GetDefault();
	TCT_Override* __fastcall GetOverride();
	TCT_Types* __fastcall GetTypes();
	
public:
	__fastcall TXPGDocContentType();
	__fastcall virtual ~TXPGDocContentType();
	void __fastcall LoadFromFile(System::UnicodeString AFilename);
	void __fastcall LoadFromStream(System::Classes::TStream* AStream);
	void __fastcall SaveToFile(System::UnicodeString AFilename);
	void __fastcall SaveToStream(System::Classes::TStream* AStream);
	__property T__ROOT__* Root = {read=FRoot};
	__property TCT_Default* Default = {read=GetDefault};
	__property TCT_Override* Override = {read=GetOverride};
	__property TCT_Types* Types = {read=GetTypes};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xpgparsecontenttype */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XPGPARSECONTENTTYPE)
using namespace Xpgparsecontenttype;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XpgparsecontenttypeHPP
