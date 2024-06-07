// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'xpgParseOPC.pas' rev: 35.00 (Windows)

#ifndef XpgparseopcHPP
#define XpgparseopcHPP

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

namespace Xpgparseopc
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXPGDocBase;
class DELPHICLASS TXPGBase;
class DELPHICLASS TXPGBaseObjectList;
class DELPHICLASS TXPGReader;
class DELPHICLASS TCT_Relationship;
class DELPHICLASS TCT_RelationshipXpgList;
class DELPHICLASS TCT_Relationships;
class DELPHICLASS T__ROOT__;
class DELPHICLASS TXPGDocOPC;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TST_TargetMode : unsigned short { sttmExternal, sttmInternal };

typedef System::StaticArray<System::UnicodeString, 2> Xpgparseopc__1;

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
class PASCALIMPLEMENTATION TCT_Relationship : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_TargetMode FTargetMode;
	System::UnicodeString FTarget;
	System::UnicodeString FType;
	System::UnicodeString FId;
	System::UnicodeString FContent;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Relationship(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Relationship();
	void __fastcall Clear();
	__property TST_TargetMode TargetMode = {read=FTargetMode, write=FTargetMode, nodefault};
	__property System::UnicodeString Target = {read=FTarget, write=FTarget};
	__property System::UnicodeString Type_ = {read=FType, write=FType};
	__property System::UnicodeString Id = {read=FId, write=FId};
	__property System::UnicodeString Content = {read=FContent, write=FContent};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RelationshipXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Relationship* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Relationship* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Relationship* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Relationship* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_RelationshipXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_RelationshipXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Relationships : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_RelationshipXpgList* FRelationshipXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Relationships(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Relationships();
	void __fastcall Clear();
	__property TCT_RelationshipXpgList* RelationshipXpgList = {read=FRelationshipXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION T__ROOT__ : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	Xpgplists::TStringXpgList* FRootAttributes;
	TCT_Relationships* FRelationships;
	TCT_Relationship* FRelationship;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall T__ROOT__(TXPGDocBase* AOwner);
	__fastcall virtual ~T__ROOT__();
	void __fastcall Clear();
	__property Xpgplists::TStringXpgList* RootAttributes = {read=FRootAttributes};
	__property TCT_Relationships* Relationships = {read=FRelationships};
	__property TCT_Relationship* Relationship = {read=FRelationship};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGDocOPC : public TXPGDocBase
{
	typedef TXPGDocBase inherited;
	
protected:
	T__ROOT__* FRoot;
	TXPGReader* FReader;
	Xpgpxml::TXpgWriteXML* FWriter;
	TCT_Relationships* __fastcall GetRelationships();
	TCT_Relationship* __fastcall GetRelationship();
	
public:
	__fastcall TXPGDocOPC();
	__fastcall virtual ~TXPGDocOPC();
	void __fastcall LoadFromFile(System::UnicodeString AFilename);
	void __fastcall LoadFromStream(System::Classes::TStream* AStream);
	void __fastcall SaveToFile(System::UnicodeString AFilename);
	void __fastcall SaveToStream(System::Classes::TStream* AStream);
	__property T__ROOT__* Root = {read=FRoot};
	__property TCT_Relationships* Relationships = {read=GetRelationships};
	__property TCT_Relationship* Relationship = {read=GetRelationship};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Xpgparseopc__1 StrTST_TargetMode;
}	/* namespace Xpgparseopc */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XPGPARSEOPC)
using namespace Xpgparseopc;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XpgparseopcHPP
