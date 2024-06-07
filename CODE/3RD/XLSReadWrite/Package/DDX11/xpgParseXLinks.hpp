// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'xpgParseXLinks.pas' rev: 35.00 (Windows)

#ifndef XpgparsexlinksHPP
#define XpgparsexlinksHPP

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

namespace Xpgparsexlinks
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXPGDocBase;
class DELPHICLASS TXPGBase;
class DELPHICLASS TXPGBaseObjectList;
class DELPHICLASS TXPGReader;
class DELPHICLASS TCT_ExternalCell;
class DELPHICLASS TCT_ExternalCellXpgList;
class DELPHICLASS TCT_DdeValue;
class DELPHICLASS TCT_DdeValueXpgList;
class DELPHICLASS TCT_ExternalRow;
class DELPHICLASS TCT_ExternalRowXpgList;
class DELPHICLASS TCT_DdeValues;
class DELPHICLASS TCT_ExternalSheetName;
class DELPHICLASS TCT_ExternalSheetNameXpgList;
class DELPHICLASS TCT_ExternalDefinedName;
class DELPHICLASS TCT_ExternalDefinedNameXpgList;
class DELPHICLASS TCT_ExternalSheetData;
class DELPHICLASS TCT_ExternalSheetDataXpgList;
class DELPHICLASS TCT_DdeItem;
class DELPHICLASS TCT_DdeItemXpgList;
class DELPHICLASS TCT_OleItem;
class DELPHICLASS TCT_OleItemXpgList;
class DELPHICLASS TCT_ExternalSheetNames;
class DELPHICLASS TCT_ExternalDefinedNames;
class DELPHICLASS TCT_ExternalSheetDataSet;
class DELPHICLASS TCT_DdeItems;
class DELPHICLASS TCT_OleItems;
class DELPHICLASS TCT_Extension;
class DELPHICLASS TCT_ExtensionXpgList;
class DELPHICLASS TCT_ExternalBook;
class DELPHICLASS TCT_DdeLink;
class DELPHICLASS TCT_OleLink;
class DELPHICLASS TCT_ExtensionList;
class DELPHICLASS TCT_ExternalLink;
class DELPHICLASS T__ROOT__;
class DELPHICLASS TCT_XStringElement;
class DELPHICLASS TXPGDocXLink;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TST_DdeValueType : unsigned short { stdvtNil, stdvtB, stdvtN, stdvtE, stdvtStr };

typedef System::StaticArray<System::UnicodeString, 5> Xpgparsexlinks__1;

enum DECLSPEC_DENUM TST_ExternalCellType : unsigned short { stectB, stectN, stectE, stectS, stectStr, stectInlineStr };

typedef System::StaticArray<System::UnicodeString, 6> Xpgparsexlinks__2;

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
class PASCALIMPLEMENTATION TCT_ExternalCell : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FR;
	TST_ExternalCellType FT;
	int FVm;
	System::UnicodeString FV;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_ExternalCell(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ExternalCell();
	void __fastcall Clear();
	__property System::UnicodeString R = {read=FR, write=FR};
	__property TST_ExternalCellType T = {read=FT, write=FT, nodefault};
	__property int Vm = {read=FVm, write=FVm, nodefault};
	__property System::UnicodeString V = {read=FV, write=FV};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExternalCellXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_ExternalCell* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ExternalCell* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ExternalCell* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_ExternalCell* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ExternalCellXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ExternalCellXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DdeValue : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_DdeValueType FT;
	System::UnicodeString FVal;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_DdeValue(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DdeValue();
	void __fastcall Clear();
	__property TST_DdeValueType T = {read=FT, write=FT, nodefault};
	__property System::UnicodeString Val = {read=FVal, write=FVal};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DdeValueXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_DdeValue* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_DdeValue* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_DdeValue* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_DdeValue* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_DdeValueXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_DdeValueXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExternalRow : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FR;
	TCT_ExternalCellXpgList* FCellXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_ExternalRow(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ExternalRow();
	void __fastcall Clear();
	__property int R = {read=FR, write=FR, nodefault};
	__property TCT_ExternalCellXpgList* CellXpgList = {read=FCellXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExternalRowXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_ExternalRow* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ExternalRow* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ExternalRow* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_ExternalRow* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ExternalRowXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ExternalRowXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DdeValues : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FRows;
	int FCols;
	TCT_DdeValueXpgList* FValueXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_DdeValues(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DdeValues();
	void __fastcall Clear();
	__property int Rows = {read=FRows, write=FRows, nodefault};
	__property int Cols = {read=FCols, write=FCols, nodefault};
	__property TCT_DdeValueXpgList* ValueXpgList = {read=FValueXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExternalSheetName : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FVal;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_ExternalSheetName(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ExternalSheetName();
	void __fastcall Clear();
	__property System::UnicodeString Val = {read=FVal, write=FVal};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExternalSheetNameXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_ExternalSheetName* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ExternalSheetName* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ExternalSheetName* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_ExternalSheetName* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ExternalSheetNameXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ExternalSheetNameXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExternalDefinedName : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	System::UnicodeString FRefersTo;
	int FSheetId;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_ExternalDefinedName(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ExternalDefinedName();
	void __fastcall Clear();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString RefersTo = {read=FRefersTo, write=FRefersTo};
	__property int SheetId = {read=FSheetId, write=FSheetId, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExternalDefinedNameXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_ExternalDefinedName* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ExternalDefinedName* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ExternalDefinedName* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_ExternalDefinedName* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ExternalDefinedNameXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ExternalDefinedNameXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExternalSheetData : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FSheetId;
	bool FRefreshError;
	TCT_ExternalRowXpgList* FRowXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_ExternalSheetData(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ExternalSheetData();
	void __fastcall Clear();
	__property int SheetId = {read=FSheetId, write=FSheetId, nodefault};
	__property bool RefreshError = {read=FRefreshError, write=FRefreshError, nodefault};
	__property TCT_ExternalRowXpgList* RowXpgList = {read=FRowXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExternalSheetDataXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_ExternalSheetData* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ExternalSheetData* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ExternalSheetData* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_ExternalSheetData* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ExternalSheetDataXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ExternalSheetDataXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DdeItem : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	bool FOle;
	bool FAdvise;
	bool FPreferPic;
	TCT_DdeValues* FValues;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_DdeItem(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DdeItem();
	void __fastcall Clear();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property bool Ole = {read=FOle, write=FOle, nodefault};
	__property bool Advise = {read=FAdvise, write=FAdvise, nodefault};
	__property bool PreferPic = {read=FPreferPic, write=FPreferPic, nodefault};
	__property TCT_DdeValues* Values = {read=FValues};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DdeItemXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_DdeItem* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_DdeItem* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_DdeItem* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_DdeItem* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_DdeItemXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_DdeItemXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OleItem : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	bool FIcon;
	bool FAdvise;
	bool FPreferPic;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_OleItem(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_OleItem();
	void __fastcall Clear();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property bool Icon = {read=FIcon, write=FIcon, nodefault};
	__property bool Advise = {read=FAdvise, write=FAdvise, nodefault};
	__property bool PreferPic = {read=FPreferPic, write=FPreferPic, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OleItemXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_OleItem* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_OleItem* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_OleItem* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_OleItem* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_OleItemXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_OleItemXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExternalSheetNames : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_ExternalSheetNameXpgList* FSheetNameXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_ExternalSheetNames(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ExternalSheetNames();
	void __fastcall Clear();
	__property TCT_ExternalSheetNameXpgList* SheetNameXpgList = {read=FSheetNameXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExternalDefinedNames : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_ExternalDefinedNameXpgList* FDefinedNameXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_ExternalDefinedNames(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ExternalDefinedNames();
	void __fastcall Clear();
	__property TCT_ExternalDefinedNameXpgList* DefinedNameXpgList = {read=FDefinedNameXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExternalSheetDataSet : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_ExternalSheetDataXpgList* FSheetDataXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_ExternalSheetDataSet(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ExternalSheetDataSet();
	void __fastcall Clear();
	__property TCT_ExternalSheetDataXpgList* SheetDataXpgList = {read=FSheetDataXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DdeItems : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_DdeItemXpgList* FDdeItemXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_DdeItems(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DdeItems();
	void __fastcall Clear();
	__property TCT_DdeItemXpgList* DdeItemXpgList = {read=FDdeItemXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OleItems : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_OleItemXpgList* FOleItemXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_OleItems(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_OleItems();
	void __fastcall Clear();
	__property TCT_OleItemXpgList* OleItemXpgList = {read=FOleItemXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Extension : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FUri;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Extension(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Extension();
	void __fastcall Clear();
	__property System::UnicodeString Uri = {read=FUri, write=FUri};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExtensionXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Extension* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Extension* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Extension* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Extension* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ExtensionXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ExtensionXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExternalBook : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FR_Id;
	TCT_ExternalSheetNames* FSheetNames;
	TCT_ExternalDefinedNames* FDefinedNames;
	TCT_ExternalSheetDataSet* FSheetDataSet;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_ExternalBook(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ExternalBook();
	void __fastcall Clear();
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
	__property TCT_ExternalSheetNames* SheetNames = {read=FSheetNames};
	__property TCT_ExternalDefinedNames* DefinedNames = {read=FDefinedNames};
	__property TCT_ExternalSheetDataSet* SheetDataSet = {read=FSheetDataSet};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DdeLink : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FDdeService;
	System::UnicodeString FDdeTopic;
	TCT_DdeItems* FDdeItems;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_DdeLink(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DdeLink();
	void __fastcall Clear();
	__property System::UnicodeString DdeService = {read=FDdeService, write=FDdeService};
	__property System::UnicodeString DdeTopic = {read=FDdeTopic, write=FDdeTopic};
	__property TCT_DdeItems* DdeItems = {read=FDdeItems};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OleLink : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FR_Id;
	System::UnicodeString FProgId;
	TCT_OleItems* FOleItems;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_OleLink(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_OleLink();
	void __fastcall Clear();
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
	__property System::UnicodeString ProgId = {read=FProgId, write=FProgId};
	__property TCT_OleItems* OleItems = {read=FOleItems};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExtensionList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_ExtensionXpgList* FExtXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_ExtensionList(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ExtensionList();
	void __fastcall Clear();
	__property TCT_ExtensionXpgList* ExtXpgList = {read=FExtXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExternalLink : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_ExternalBook* FExternalBook;
	TCT_DdeLink* FDdeLink;
	TCT_OleLink* FOleLink;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_ExternalLink(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ExternalLink();
	void __fastcall Clear();
	__property TCT_ExternalBook* ExternalBook = {read=FExternalBook};
	__property TCT_DdeLink* DdeLink = {read=FDdeLink};
	__property TCT_OleLink* OleLink = {read=FOleLink};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION T__ROOT__ : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	Xpgplists::TStringXpgList* FRootAttributes;
	TCT_ExternalLink* FExternalLink;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall T__ROOT__(TXPGDocBase* AOwner);
	__fastcall virtual ~T__ROOT__();
	void __fastcall Clear();
	__property Xpgplists::TStringXpgList* RootAttributes = {read=FRootAttributes};
	__property TCT_ExternalLink* ExternalLink = {read=FExternalLink};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_XStringElement : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FV;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_XStringElement(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_XStringElement();
	void __fastcall Clear();
	__property System::UnicodeString V = {read=FV, write=FV};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGDocXLink : public TXPGDocBase
{
	typedef TXPGDocBase inherited;
	
protected:
	T__ROOT__* FRoot;
	TXPGReader* FReader;
	Xpgpxml::TXpgWriteXML* FWriter;
	TCT_ExternalLink* __fastcall GetExternalLink();
	
public:
	__fastcall TXPGDocXLink();
	__fastcall virtual ~TXPGDocXLink();
	void __fastcall LoadFromFile(System::UnicodeString AFilename);
	void __fastcall LoadFromStream(System::Classes::TStream* AStream);
	void __fastcall SaveToFile(System::UnicodeString AFilename);
	void __fastcall SaveToStream(System::Classes::TStream* AStream);
	__property T__ROOT__* Root = {read=FRoot};
	__property TCT_ExternalLink* ExternalLink = {read=GetExternalLink};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Xpgparsexlinks__1 StrTST_DdeValueType;
extern DELPHI_PACKAGE Xpgparsexlinks__2 StrTST_ExternalCellType;
}	/* namespace Xpgparsexlinks */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XPGPARSEXLINKS)
using namespace Xpgparsexlinks;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XpgparsexlinksHPP
