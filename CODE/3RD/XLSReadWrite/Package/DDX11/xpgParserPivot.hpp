// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'xpgParserPivot.pas' rev: 35.00 (Windows)

#ifndef XpgparserpivotHPP
#define XpgparserpivotHPP

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
#include <System.Math.hpp>
#include <xpgPUtils.hpp>
#include <xpgPLists.hpp>
#include <xpgPXMLUtils.hpp>
#include <xpgPXML.hpp>
#include <xpgParserXLSX.hpp>
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>
#include <XLSSharedItems5.hpp>
#include <XLSRelCells5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xpgparserpivot
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXPGBase;
class DELPHICLASS TXPGAnyElement;
class DELPHICLASS TXPGAnyElements;
class DELPHICLASS TXPGBaseObjectList;
class DELPHICLASS TXPGReader;
class DELPHICLASS TCT_Extension;
class DELPHICLASS TEG_ExtensionList;
class DELPHICLASS TCT_GroupMember;
class DELPHICLASS TCT_GroupMemberXpgList;
class DELPHICLASS TCT_Index;
class DELPHICLASS TCT_IndexXpgList;
class DELPHICLASS TCT_ExtensionList;
class DELPHICLASS TCT_Tuple;
class DELPHICLASS TCT_TupleXpgList;
class DELPHICLASS TCT_GroupMembers;
class DELPHICLASS TCT_PivotAreaReference;
class DELPHICLASS TCT_PivotAreaReferenceXpgList;
class DELPHICLASS TCT_Tuples;
class DELPHICLASS TCT_TuplesXpgList;
class DELPHICLASS TCT_X;
class DELPHICLASS TCT_XXpgList;
class DELPHICLASS TCT_LevelGroup;
class DELPHICLASS TCT_LevelGroupXpgList;
class DELPHICLASS TCT_PivotAreaReferences;
class DELPHICLASS TCT_PageItem;
class DELPHICLASS TCT_PageItemXpgList;
class DELPHICLASS TCT_Missing;
class DELPHICLASS TCT_MissingXpgList;
class DELPHICLASS TCT_Number;
class DELPHICLASS TCT_NumberXpgList;
class DELPHICLASS TCT_Boolean;
class DELPHICLASS TCT_BooleanXpgList;
class DELPHICLASS TCT_Error;
class DELPHICLASS TCT_ErrorXpgList;
class DELPHICLASS TCT_String;
class DELPHICLASS TCT_StringXpgList;
class DELPHICLASS TCT_DateTime;
class DELPHICLASS TCT_DateTimeXpgList;
class DELPHICLASS TCT_Groups;
class DELPHICLASS TCT_Item;
class DELPHICLASS TCT_PivotArea;
class DELPHICLASS TCT_PivotAreaXpgList;
class DELPHICLASS TCT_MemberProperty;
class DELPHICLASS TCT_MemberPropertyXpgList;
class DELPHICLASS TCT_Member;
class DELPHICLASS TCT_MemberXpgList;
class DELPHICLASS TCT_PCDSCPage;
class DELPHICLASS TCT_PCDSCPageXpgList;
class DELPHICLASS TCT_RangeSet;
class DELPHICLASS TCT_RangeSetXpgList;
class DELPHICLASS TCT_RangePr;
class DELPHICLASS TCT_DiscretePr;
class DELPHICLASS TCT_GroupItems;
class DELPHICLASS TCT_FieldUsage;
class DELPHICLASS TCT_FieldUsageXpgList;
class DELPHICLASS TCT_GroupLevel;
class DELPHICLASS TCT_GroupLevelXpgList;
class DELPHICLASS TCT_Items;
class DELPHICLASS TCT_AutoSortScope;
class DELPHICLASS TCT_PivotAreas;
class DELPHICLASS TCT_MemberProperties;
class DELPHICLASS TCT_Members;
class DELPHICLASS TCT_MembersXpgList;
class DELPHICLASS TCT_Pages;
class DELPHICLASS TCT_RangeSets;
class DELPHICLASS TXLSSharedItemsValuesHash;
class DELPHICLASS TCT_SharedItems;
class DELPHICLASS TCT_FieldGroup;
class DELPHICLASS TCT_FieldsUsage;
class DELPHICLASS TCT_GroupLevels;
class DELPHICLASS TCT_Set;
class DELPHICLASS TCT_SetXpgList;
class DELPHICLASS TCT_Query;
class DELPHICLASS TCT_QueryXpgList;
class DELPHICLASS TCT_ServerFormat;
class DELPHICLASS TCT_ServerFormatXpgList;
class DELPHICLASS TCT_PivotField;
class DELPHICLASS TCT_PivotFieldXpgList;
class DELPHICLASS TCT_Field;
class DELPHICLASS TCT_I;
class DELPHICLASS TCT_PageField;
class DELPHICLASS TCT_PageFieldXpgList;
class DELPHICLASS TCT_DataField;
class DELPHICLASS TCT_DataFields;
class DELPHICLASS TCT_Format;
class DELPHICLASS TCT_FormatXpgList;
class DELPHICLASS TCT_ConditionalFormat;
class DELPHICLASS TCT_ConditionalFormatXpgList;
class DELPHICLASS TCT_ChartFormat;
class DELPHICLASS TCT_ChartFormatXpgList;
class DELPHICLASS TCT_PivotHierarchy;
class DELPHICLASS TCT_PivotHierarchyXpgList;
class DELPHICLASS TCT_PivotFilter;
class DELPHICLASS TCT_PivotFilterXpgList;
class DELPHICLASS TCT_HierarchyUsage;
class DELPHICLASS TCT_HierarchyUsageXpgList;
class DELPHICLASS TCT_WorksheetSource;
class DELPHICLASS TCT_Consolidation;
class DELPHICLASS TCT_CacheField;
class DELPHICLASS TCT_CacheHierarchy;
class DELPHICLASS TCT_CacheHierarchyXpgList;
class DELPHICLASS TCT_PCDKPI;
class DELPHICLASS TCT_PCDKPIXpgList;
class DELPHICLASS TCT_PCDSDTCEntries;
class DELPHICLASS TCT_Sets;
class DELPHICLASS TCT_QueryCache;
class DELPHICLASS TCT_ServerFormats;
class DELPHICLASS TCT_CalculatedItem;
class DELPHICLASS TCT_CalculatedItemXpgList;
class DELPHICLASS TCT_CalculatedMember;
class DELPHICLASS TCT_CalculatedMemberXpgList;
class DELPHICLASS TCT_PivotDimension;
class DELPHICLASS TCT_PivotDimensionXpgList;
class DELPHICLASS TCT_MeasureGroup;
class DELPHICLASS TCT_MeasureGroupXpgList;
class DELPHICLASS TCT_MeasureDimensionMap;
class DELPHICLASS TCT_MeasureDimensionMapXpgList;
class DELPHICLASS TCT_Record;
class DELPHICLASS TCT_RecordXpgList;
class DELPHICLASS TCT_Location;
class DELPHICLASS TCT_PivotFields;
class DELPHICLASS TCT_RowColFields;
class DELPHICLASS TCT_RowColItems;
class DELPHICLASS TCT_PageFields;
class DELPHICLASS TCT_Formats;
class DELPHICLASS TCT_ConditionalFormats;
class DELPHICLASS TCT_ChartFormats;
class DELPHICLASS TCT_PivotHierarchies;
class DELPHICLASS TCT_PivotTableStyle;
class DELPHICLASS TCT_PivotFilters;
class DELPHICLASS TCT_RowHierarchiesUsage;
class DELPHICLASS TCT_ColHierarchiesUsage;
class DELPHICLASS TCT_CacheSource;
class DELPHICLASS TCT_CacheFields;
class DELPHICLASS TCT_CacheHierarchies;
class DELPHICLASS TCT_PCDKPIs;
class DELPHICLASS TCT_TupleCache;
class DELPHICLASS TCT_CalculatedItems;
class DELPHICLASS TCT_CalculatedMembers;
class DELPHICLASS TCT_Dimensions;
class DELPHICLASS TCT_MeasureGroups;
class DELPHICLASS TCT_MeasureDimensionMaps;
class DELPHICLASS TCT_PivotCacheRecords;
class DELPHICLASS TCT_pivotTableDefinition;
class DELPHICLASS TCT_pivotTableDefinitions;
class DELPHICLASS TCT_pivotCacheDefinition;
class DELPHICLASS TCT_PivotCacheDefinitions;
class DELPHICLASS T__ROOT__;
class DELPHICLASS TCT_XStringElement;
class DELPHICLASS TXPGPivotTable;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TST_Axis_N2 : unsigned short { staAxisRow_n2, staAxisCol_n2, staAxisPage_n2, staAxisValues_n2 };

typedef System::StaticArray<System::UnicodeString, 4> Xpgparserpivot__1;

enum DECLSPEC_DENUM TST_PivotAreaType_N2 : unsigned short { stpatNone_n2, stpatNormal_n2, stpatData_n2, stpatAll_n2, stpatOrigin_n2, stpatButton_n2, stpatTopRight_n2 };

typedef System::StaticArray<System::UnicodeString, 7> Xpgparserpivot__2;

enum DECLSPEC_DENUM TST_Type : unsigned short { sttNone, sttAll, sttRow, sttColumn };

typedef System::StaticArray<System::UnicodeString, 4> Xpgparserpivot__3;

enum DECLSPEC_DENUM TST_FieldSortType : unsigned short { stfstManual, stfstAscending, stfstDescending };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparserpivot__4;

enum DECLSPEC_DENUM TST_GroupBy : unsigned short { stgbRange, stgbSeconds, stgbMinutes, stgbHours, stgbDays, stgbMonths, stgbQuarters, stgbYears };

typedef System::StaticArray<System::UnicodeString, 8> Xpgparserpivot__5;

enum DECLSPEC_DENUM TST_SortType : unsigned short { ststNone, ststAscending, ststDescending, ststAscendingAlpha, ststDescendingAlpha, ststAscendingNatural, ststDescendingNatural };

typedef System::StaticArray<System::UnicodeString, 7> Xpgparserpivot__6;

enum DECLSPEC_DENUM TST_ShowDataAs : unsigned short { stsdaNormal, stsdaDifference, stsdaPercent, stsdaPercentDiff, stsdaRunTotal, stsdaPercentOfRow, stsdaPercentOfCol, stsdaPercentOfTotal, stsdaIndex };

typedef System::StaticArray<System::UnicodeString, 9> Xpgparserpivot__7;

enum DECLSPEC_DENUM TST_ItemType : unsigned short { stitData, stitDefault, stitSum, stitCountA, stitAvg, stitMax, stitMin, stitProduct, stitCount, stitStdDev, stitStdDevP, stitVar, stitVarP, stitGrand, stitBlank };

typedef System::StaticArray<System::UnicodeString, 15> Xpgparserpivot__8;

enum DECLSPEC_DENUM TST_Scope : unsigned short { stsSelection, stsData, stsField };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparserpivot__9;

enum DECLSPEC_DENUM TST_PivotFilterType : unsigned short { stpftUnknown, stpftCount, stpftPercent, stpftSum, stpftCaptionEqual, stpftCaptionNotEqual, stpftCaptionBeginsWith, stpftCaptionNotBeginsWith, stpftCaptionEndsWith, stpftCaptionNotEndsWith, stpftCaptionContains, stpftCaptionNotContains, stpftCaptionGreaterThan, stpftCaptionGreaterThanOrEqual, stpftCaptionLessThan, stpftCaptionLessThanOrEqual, stpftCaptionBetween, stpftCaptionNotBetween, stpftValueEqual, stpftValueNotEqual, stpftValueGreaterThan, stpftValueGreaterThanOrEqual, stpftValueLessThan, stpftValueLessThanOrEqual, stpftValueBetween, stpftValueNotBetween, stpftDateEqual, stpftDateNotEqual, stpftDateOlderThan, stpftDateOlderThanOrEqual, stpftDateNewerThan, stpftDateNewerThanOrEqual, 
	stpftDateBetween, stpftDateNotBetween, stpftTomorrow, stpftToday, stpftYesterday, stpftNextWeek, stpftThisWeek, stpftLastWeek, stpftNextMonth, stpftThisMonth, stpftLastMonth, stpftNextQuarter, stpftThisQuarter, stpftLastQuarter, stpftNextYear, stpftThisYear, stpftLastYear, stpftYearToDate, stpftQ1, stpftQ2, stpftQ3, stpftQ4, stpftM1, stpftM2, stpftM3, stpftM4, stpftM5, stpftM6, stpftM7, stpftM8, stpftM9, stpftM10, stpftM11, stpftM12 };

typedef System::StaticArray<System::UnicodeString, 66> Xpgparserpivot__01;

enum DECLSPEC_DENUM TST_SourceType : unsigned short { ststWorksheet, ststExternal, ststConsolidation, ststScenario };

typedef System::StaticArray<System::UnicodeString, 4> Xpgparserpivot__11;

enum DECLSPEC_DENUM TST_FormatAction : unsigned short { stfaBlank, stfaFormatting, stfaDrill, stfaFormula };

typedef System::StaticArray<System::UnicodeString, 4> Xpgparserpivot__21;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGBase : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xpgparserxlsx::TXPGDocBase* FOwner;
	int FElementCount;
	int FAttributeCount;
	Xpgpxmlutils::TXpgAssigneds FAssigneds;
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	virtual void __fastcall AfterTag();
	__classmethod int __fastcall StrToEnum(System::UnicodeString AValue);
	__classmethod int __fastcall StrToEnumDef(System::UnicodeString AValue, int ADefault);
	__classmethod bool __fastcall TryStrToEnum(System::UnicodeString AValue, System::UnicodeString AText, System::UnicodeString *AEnumNames, const int AEnumNames_High, System::PInteger APtrInt);
	
public:
	bool __fastcall Available();
	virtual int __fastcall CheckAssigned();
	bool __fastcall Assigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	__property int ElementCount = {read=FElementCount, write=FElementCount, nodefault};
	__property int AttributeCount = {read=FAttributeCount, write=FAttributeCount, nodefault};
	__property Xpgpxmlutils::TXpgAssigneds Assigneds = {read=FAssigneds, write=FAssigneds, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXPGBase() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXPGBase() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGAnyElement : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FElementName;
	System::UnicodeString FContent;
	Xpgpxmlutils::TXpgXMLAttributeList* FAttributes;
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TXPGAnyElement();
	__fastcall virtual ~TXPGAnyElement();
	__property System::UnicodeString ElementName = {read=FElementName, write=FElementName};
	__property System::UnicodeString Content = {read=FContent, write=FContent};
	__property Xpgpxmlutils::TXpgXMLAttributeList* Attributes = {read=FAttributes};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGAnyElements : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
protected:
	TXPGAnyElement* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TXPGAnyElement* __fastcall Add(System::UnicodeString AElementName, System::UnicodeString AContent);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__property TXPGAnyElement* Items[int Index] = {read=GetItems};
public:
	/* TObjectList.Create */ inline __fastcall TXPGAnyElements()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TXPGAnyElements(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXPGAnyElements() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGBaseObjectList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
protected:
	Xpgparserxlsx::TXPGDocBase* FOwner;
	bool FAssigned;
	TXPGBase* __fastcall GetItems(int Index);
	
public:
	__fastcall TXPGBaseObjectList(Xpgparserxlsx::TXPGDocBase* AOwner);
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
class PASCALIMPLEMENTATION TCT_Extension : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FUri;
	System::UnicodeString FXmlns;
	System::UnicodeString FXmlnsValue;
	TXPGAnyElements* FAnyElements;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Extension(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Extension();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Extension* AItem);
	void __fastcall CopyTo(TCT_Extension* AItem);
	__property System::UnicodeString Uri = {read=FUri, write=FUri};
	__property TXPGAnyElements* AnyElements = {read=FAnyElements};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_ExtensionList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_Extension* FExt;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_ExtensionList(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_ExtensionList();
	void __fastcall Clear();
	void __fastcall Assign(TEG_ExtensionList* AItem);
	void __fastcall CopyTo(TEG_ExtensionList* AItem);
	TCT_Extension* __fastcall Create_Ext();
	__property TCT_Extension* Ext = {read=FExt};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GroupMember : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FUniqueName;
	bool FGroup;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_GroupMember(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GroupMember();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GroupMember* AItem);
	void __fastcall CopyTo(TCT_GroupMember* AItem);
	__property System::UnicodeString UniqueName = {read=FUniqueName, write=FUniqueName};
	__property bool Group = {read=FGroup, write=FGroup, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GroupMemberXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_GroupMember* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_GroupMember* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_GroupMember* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_GroupMemberXpgList* AItem);
	void __fastcall CopyTo(TCT_GroupMemberXpgList* AItem);
	__property TCT_GroupMember* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_GroupMemberXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_GroupMemberXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Index : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FV;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Index(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Index();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Index* AItem);
	void __fastcall CopyTo(TCT_Index* AItem);
	__property int V = {read=FV, write=FV, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_IndexXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Index* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Index* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Index* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_IndexXpgList* AItem);
	void __fastcall CopyTo(TCT_IndexXpgList* AItem);
	__property TCT_Index* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_IndexXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_IndexXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExtensionList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TEG_ExtensionList* FEG_ExtensionList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_ExtensionList(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ExtensionList();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ExtensionList* AItem);
	void __fastcall CopyTo(TCT_ExtensionList* AItem);
	__property TEG_ExtensionList* EG_ExtensionList = {read=FEG_ExtensionList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Tuple : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FFld;
	int FHier;
	int FItem;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Tuple(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Tuple();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Tuple* AItem);
	void __fastcall CopyTo(TCT_Tuple* AItem);
	__property int Fld = {read=FFld, write=FFld, nodefault};
	__property int Hier = {read=FHier, write=FHier, nodefault};
	__property int Item = {read=FItem, write=FItem, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TupleXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Tuple* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Tuple* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Tuple* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_TupleXpgList* AItem);
	void __fastcall CopyTo(TCT_TupleXpgList* AItem);
	__property TCT_Tuple* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_TupleXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_TupleXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GroupMembers : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_GroupMemberXpgList* FGroupMemberXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_GroupMembers(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GroupMembers();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GroupMembers* AItem);
	void __fastcall CopyTo(TCT_GroupMembers* AItem);
	TCT_GroupMemberXpgList* __fastcall Create_GroupMemberXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_GroupMemberXpgList* GroupMemberXpgList = {read=FGroupMemberXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotAreaReference : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FField;
	int FCount;
	bool FSelected;
	bool FByPosition;
	bool FRelative;
	bool FDefaultSubtotal;
	bool FSumSubtotal;
	bool FCountASubtotal;
	bool FAvgSubtotal;
	bool FMaxSubtotal;
	bool FMinSubtotal;
	bool FProductSubtotal;
	bool FCountSubtotal;
	bool FStdDevSubtotal;
	bool FStdDevPSubtotal;
	bool FVarSubtotal;
	bool FVarPSubtotal;
	TCT_IndexXpgList* FXXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PivotAreaReference(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotAreaReference();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PivotAreaReference* AItem);
	void __fastcall CopyTo(TCT_PivotAreaReference* AItem);
	TCT_IndexXpgList* __fastcall Create_XXpgList();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property System::UnicodeString Field = {read=FField, write=FField};
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property bool Selected = {read=FSelected, write=FSelected, nodefault};
	__property bool ByPosition = {read=FByPosition, write=FByPosition, nodefault};
	__property bool Relative = {read=FRelative, write=FRelative, nodefault};
	__property bool DefaultSubtotal = {read=FDefaultSubtotal, write=FDefaultSubtotal, nodefault};
	__property bool SumSubtotal = {read=FSumSubtotal, write=FSumSubtotal, nodefault};
	__property bool CountASubtotal = {read=FCountASubtotal, write=FCountASubtotal, nodefault};
	__property bool AvgSubtotal = {read=FAvgSubtotal, write=FAvgSubtotal, nodefault};
	__property bool MaxSubtotal = {read=FMaxSubtotal, write=FMaxSubtotal, nodefault};
	__property bool MinSubtotal = {read=FMinSubtotal, write=FMinSubtotal, nodefault};
	__property bool ProductSubtotal = {read=FProductSubtotal, write=FProductSubtotal, nodefault};
	__property bool CountSubtotal = {read=FCountSubtotal, write=FCountSubtotal, nodefault};
	__property bool StdDevSubtotal = {read=FStdDevSubtotal, write=FStdDevSubtotal, nodefault};
	__property bool StdDevPSubtotal = {read=FStdDevPSubtotal, write=FStdDevPSubtotal, nodefault};
	__property bool VarSubtotal = {read=FVarSubtotal, write=FVarSubtotal, nodefault};
	__property bool VarPSubtotal = {read=FVarPSubtotal, write=FVarPSubtotal, nodefault};
	__property TCT_IndexXpgList* XXpgList = {read=FXXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotAreaReferenceXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_PivotAreaReference* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_PivotAreaReference* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_PivotAreaReference* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_PivotAreaReferenceXpgList* AItem);
	void __fastcall CopyTo(TCT_PivotAreaReferenceXpgList* AItem);
	__property TCT_PivotAreaReference* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PivotAreaReferenceXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PivotAreaReferenceXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Tuples : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FC;
	TCT_TupleXpgList* FTplXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Tuples(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Tuples();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Tuples* AItem);
	void __fastcall CopyTo(TCT_Tuples* AItem);
	TCT_TupleXpgList* __fastcall Create_TplXpgList();
	__property int C = {read=FC, write=FC, nodefault};
	__property TCT_TupleXpgList* TplXpgList = {read=FTplXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TuplesXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Tuples* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Tuples* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Tuples* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_TuplesXpgList* AItem);
	void __fastcall CopyTo(TCT_TuplesXpgList* AItem);
	__property TCT_Tuples* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_TuplesXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_TuplesXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_X : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FV;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_X(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_X();
	void __fastcall Clear();
	void __fastcall Assign(TCT_X* AItem);
	void __fastcall CopyTo(TCT_X* AItem);
	__property int V = {read=FV, write=FV, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_XXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_X* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_X* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_X* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_XXpgList* AItem);
	void __fastcall CopyTo(TCT_XXpgList* AItem);
	__property TCT_X* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_XXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_XXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LevelGroup : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	System::UnicodeString FUniqueName;
	System::UnicodeString FCaption;
	System::UnicodeString FUniqueParent;
	int FId;
	TCT_GroupMembers* FGroupMembers;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_LevelGroup(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LevelGroup();
	void __fastcall Clear();
	void __fastcall Assign(TCT_LevelGroup* AItem);
	void __fastcall CopyTo(TCT_LevelGroup* AItem);
	TCT_GroupMembers* __fastcall Create_GroupMembers();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString UniqueName = {read=FUniqueName, write=FUniqueName};
	__property System::UnicodeString Caption = {read=FCaption, write=FCaption};
	__property System::UnicodeString UniqueParent = {read=FUniqueParent, write=FUniqueParent};
	__property int Id = {read=FId, write=FId, nodefault};
	__property TCT_GroupMembers* GroupMembers = {read=FGroupMembers};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LevelGroupXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_LevelGroup* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_LevelGroup* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_LevelGroup* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_LevelGroupXpgList* AItem);
	void __fastcall CopyTo(TCT_LevelGroupXpgList* AItem);
	__property TCT_LevelGroup* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_LevelGroupXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_LevelGroupXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotAreaReferences : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_PivotAreaReferenceXpgList* FReferenceXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PivotAreaReferences(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotAreaReferences();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PivotAreaReferences* AItem);
	void __fastcall CopyTo(TCT_PivotAreaReferences* AItem);
	TCT_PivotAreaReferenceXpgList* __fastcall Create_ReferenceXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_PivotAreaReferenceXpgList* ReferenceXpgList = {read=FReferenceXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PageItem : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PageItem(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PageItem();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PageItem* AItem);
	void __fastcall CopyTo(TCT_PageItem* AItem);
	__property System::UnicodeString Name = {read=FName, write=FName};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PageItemXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_PageItem* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_PageItem* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_PageItem* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_PageItemXpgList* AItem);
	void __fastcall CopyTo(TCT_PageItemXpgList* AItem);
	__property TCT_PageItem* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PageItemXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PageItemXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Missing : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FU;
	bool FF;
	System::UnicodeString FC;
	int FCp;
	int FIn;
	int FBc;
	int FFc;
	bool FI;
	bool FUn;
	bool FSt;
	bool FB;
	TCT_TuplesXpgList* FTplsXpgList;
	TCT_XXpgList* FXXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Missing(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Missing();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Missing* AItem);
	void __fastcall CopyTo(TCT_Missing* AItem);
	TCT_TuplesXpgList* __fastcall Create_TplsXpgList();
	TCT_XXpgList* __fastcall Create_XXpgList();
	__property bool U = {read=FU, write=FU, nodefault};
	__property bool F = {read=FF, write=FF, nodefault};
	__property System::UnicodeString C = {read=FC, write=FC};
	__property int Cp = {read=FCp, write=FCp, nodefault};
	__property int In_ = {read=FIn, write=FIn, nodefault};
	__property int Bc = {read=FBc, write=FBc, nodefault};
	__property int Fc_ = {read=FFc, write=FFc, nodefault};
	__property bool I = {read=FI, write=FI, nodefault};
	__property bool Un = {read=FUn, write=FUn, nodefault};
	__property bool St = {read=FSt, write=FSt, nodefault};
	__property bool B = {read=FB, write=FB, nodefault};
	__property TCT_TuplesXpgList* TplsXpgList = {read=FTplsXpgList};
	__property TCT_XXpgList* XXpgList = {read=FXXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_MissingXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Missing* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Missing* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Missing* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_MissingXpgList* AItem);
	void __fastcall CopyTo(TCT_MissingXpgList* AItem);
	__property TCT_Missing* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_MissingXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_MissingXpgList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_Number : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	double FV;
	bool FU;
	bool FF;
	System::UnicodeString FC;
	int FCp;
	int FIn;
	int FBc;
	int FFc;
	bool FI;
	bool FUn;
	bool FSt;
	bool FB;
	TCT_TuplesXpgList* FTplsXpgList;
	TCT_XXpgList* FXXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Number(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Number();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Number* AItem);
	void __fastcall CopyTo(TCT_Number* AItem);
	TCT_TuplesXpgList* __fastcall Create_TplsXpgList();
	TCT_XXpgList* __fastcall Create_XXpgList();
	__property double V = {read=FV, write=FV};
	__property bool U = {read=FU, write=FU, nodefault};
	__property bool F = {read=FF, write=FF, nodefault};
	__property System::UnicodeString C = {read=FC, write=FC};
	__property int Cp = {read=FCp, write=FCp, nodefault};
	__property int In_ = {read=FIn, write=FIn, nodefault};
	__property int Bc = {read=FBc, write=FBc, nodefault};
	__property int Fc_ = {read=FFc, write=FFc, nodefault};
	__property bool I = {read=FI, write=FI, nodefault};
	__property bool Un = {read=FUn, write=FUn, nodefault};
	__property bool St = {read=FSt, write=FSt, nodefault};
	__property bool B = {read=FB, write=FB, nodefault};
	__property TCT_TuplesXpgList* TplsXpgList = {read=FTplsXpgList};
	__property TCT_XXpgList* XXpgList = {read=FXXpgList};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_NumberXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Number* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Number* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Number* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_NumberXpgList* AItem);
	void __fastcall CopyTo(TCT_NumberXpgList* AItem);
	__property TCT_Number* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_NumberXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_NumberXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Boolean : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FV;
	bool FU;
	bool FF;
	System::UnicodeString FC;
	int FCp;
	TCT_XXpgList* FXXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Boolean(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Boolean();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Boolean* AItem);
	void __fastcall CopyTo(TCT_Boolean* AItem);
	TCT_XXpgList* __fastcall Create_XXpgList();
	__property bool V = {read=FV, write=FV, nodefault};
	__property bool U = {read=FU, write=FU, nodefault};
	__property bool F = {read=FF, write=FF, nodefault};
	__property System::UnicodeString C = {read=FC, write=FC};
	__property int Cp = {read=FCp, write=FCp, nodefault};
	__property TCT_XXpgList* XXpgList = {read=FXXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BooleanXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Boolean* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Boolean* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Boolean* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_BooleanXpgList* AItem);
	void __fastcall CopyTo(TCT_BooleanXpgList* AItem);
	__property TCT_Boolean* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_BooleanXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_BooleanXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Error : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FV;
	bool FU;
	bool FF;
	System::UnicodeString FC;
	int FCp;
	int FIn;
	int FBc;
	int FFc;
	bool FI;
	bool FUn;
	bool FSt;
	bool FB;
	TCT_Tuples* FTpls;
	TCT_XXpgList* FXXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Error(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Error();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Error* AItem);
	void __fastcall CopyTo(TCT_Error* AItem);
	TCT_Tuples* __fastcall Create_Tpls();
	TCT_XXpgList* __fastcall Create_XXpgList();
	__property System::UnicodeString V = {read=FV, write=FV};
	__property bool U = {read=FU, write=FU, nodefault};
	__property bool F = {read=FF, write=FF, nodefault};
	__property System::UnicodeString C = {read=FC, write=FC};
	__property int Cp = {read=FCp, write=FCp, nodefault};
	__property int In_ = {read=FIn, write=FIn, nodefault};
	__property int Bc = {read=FBc, write=FBc, nodefault};
	__property int Fc_ = {read=FFc, write=FFc, nodefault};
	__property bool I = {read=FI, write=FI, nodefault};
	__property bool Un = {read=FUn, write=FUn, nodefault};
	__property bool St = {read=FSt, write=FSt, nodefault};
	__property bool B = {read=FB, write=FB, nodefault};
	__property TCT_Tuples* Tpls = {read=FTpls};
	__property TCT_XXpgList* XXpgList = {read=FXXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ErrorXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Error* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Error* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Error* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_ErrorXpgList* AItem);
	void __fastcall CopyTo(TCT_ErrorXpgList* AItem);
	__property TCT_Error* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ErrorXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ErrorXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_String : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FV;
	bool FU;
	bool FF;
	System::UnicodeString FC;
	int FCp;
	int FIn;
	int FBc;
	int FFc;
	bool FI;
	bool FUn;
	bool FSt;
	bool FB;
	TCT_TuplesXpgList* FTplsXpgList;
	TCT_XXpgList* FXXpgList;
	
public:
	__fastcall TCT_String(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_String();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	void __fastcall Assign(TCT_String* AItem);
	void __fastcall CopyTo(TCT_String* AItem);
	TCT_TuplesXpgList* __fastcall Create_TplsXpgList();
	TCT_XXpgList* __fastcall Create_XXpgList();
	__property System::UnicodeString V = {read=FV, write=FV};
	__property bool U = {read=FU, write=FU, nodefault};
	__property bool F = {read=FF, write=FF, nodefault};
	__property System::UnicodeString C = {read=FC, write=FC};
	__property int Cp = {read=FCp, write=FCp, nodefault};
	__property int In_ = {read=FIn, write=FIn, nodefault};
	__property int Bc = {read=FBc, write=FBc, nodefault};
	__property int Fc_ = {read=FFc, write=FFc, nodefault};
	__property bool I = {read=FI, write=FI, nodefault};
	__property bool Un = {read=FUn, write=FUn, nodefault};
	__property bool St = {read=FSt, write=FSt, nodefault};
	__property bool B = {read=FB, write=FB, nodefault};
	__property TCT_TuplesXpgList* TplsXpgList = {read=FTplsXpgList};
	__property TCT_XXpgList* XXpgList = {read=FXXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_StringXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_String* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_String* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_String* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_StringXpgList* AItem);
	void __fastcall CopyTo(TCT_StringXpgList* AItem);
	__property TCT_String* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_StringXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_StringXpgList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_DateTime : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::TDateTime FV;
	bool FU;
	bool FF;
	System::UnicodeString FC;
	int FCp;
	TCT_XXpgList* FXXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_DateTime(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DateTime();
	void __fastcall Clear();
	void __fastcall Assign(TCT_DateTime* AItem);
	void __fastcall CopyTo(TCT_DateTime* AItem);
	TCT_XXpgList* __fastcall Create_XXpgList();
	__property System::TDateTime V = {read=FV, write=FV};
	__property bool U = {read=FU, write=FU, nodefault};
	__property bool F = {read=FF, write=FF, nodefault};
	__property System::UnicodeString C = {read=FC, write=FC};
	__property int Cp = {read=FCp, write=FCp, nodefault};
	__property TCT_XXpgList* XXpgList = {read=FXXpgList};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DateTimeXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_DateTime* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_DateTime* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_DateTime* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_DateTimeXpgList* AItem);
	void __fastcall CopyTo(TCT_DateTimeXpgList* AItem);
	__property TCT_DateTime* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_DateTimeXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_DateTimeXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Groups : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_LevelGroupXpgList* FGroupXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Groups(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Groups();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Groups* AItem);
	void __fastcall CopyTo(TCT_Groups* AItem);
	TCT_LevelGroupXpgList* __fastcall Create_GroupXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_LevelGroupXpgList* GroupXpgList = {read=FGroupXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Item : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FN;
	TST_ItemType FT;
	bool FH;
	bool FS;
	bool FSd;
	bool FF;
	bool FM;
	bool FC;
	int FX;
	bool FD;
	bool FE;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Item(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Item();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Item* AItem);
	void __fastcall CopyTo(TCT_Item* AItem);
	__property System::UnicodeString N = {read=FN, write=FN};
	__property TST_ItemType T = {read=FT, write=FT, nodefault};
	__property bool H = {read=FH, write=FH, nodefault};
	__property bool S = {read=FS, write=FS, nodefault};
	__property bool Sd = {read=FSd, write=FSd, nodefault};
	__property bool F = {read=FF, write=FF, nodefault};
	__property bool M = {read=FM, write=FM, nodefault};
	__property bool C = {read=FC, write=FC, nodefault};
	__property int X = {read=FX, write=FX, nodefault};
	__property bool D = {read=FD, write=FD, nodefault};
	__property bool E = {read=FE, write=FE, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotArea : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FField;
	TST_PivotAreaType_N2 FType;
	bool FDataOnly;
	bool FLabelOnly;
	bool FGrandRow;
	bool FGrandCol;
	bool FCacheIndex;
	bool FOutline;
	System::UnicodeString FOffset;
	bool FCollapsedLevelsAreSubtotals;
	TST_Axis_N2 FAxis;
	int FFieldPosition;
	TCT_PivotAreaReferences* FReferences;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PivotArea(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotArea();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PivotArea* AItem);
	void __fastcall CopyTo(TCT_PivotArea* AItem);
	TCT_PivotAreaReferences* __fastcall Create_References();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property int Field = {read=FField, write=FField, nodefault};
	__property TST_PivotAreaType_N2 Type_ = {read=FType, write=FType, nodefault};
	__property bool DataOnly = {read=FDataOnly, write=FDataOnly, nodefault};
	__property bool LabelOnly = {read=FLabelOnly, write=FLabelOnly, nodefault};
	__property bool GrandRow = {read=FGrandRow, write=FGrandRow, nodefault};
	__property bool GrandCol = {read=FGrandCol, write=FGrandCol, nodefault};
	__property bool CacheIndex = {read=FCacheIndex, write=FCacheIndex, nodefault};
	__property bool Outline = {read=FOutline, write=FOutline, nodefault};
	__property System::UnicodeString Offset = {read=FOffset, write=FOffset};
	__property bool CollapsedLevelsAreSubtotals = {read=FCollapsedLevelsAreSubtotals, write=FCollapsedLevelsAreSubtotals, nodefault};
	__property TST_Axis_N2 Axis = {read=FAxis, write=FAxis, nodefault};
	__property int FieldPosition = {read=FFieldPosition, write=FFieldPosition, nodefault};
	__property TCT_PivotAreaReferences* References = {read=FReferences};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotAreaXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_PivotArea* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_PivotArea* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_PivotArea* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_PivotAreaXpgList* AItem);
	void __fastcall CopyTo(TCT_PivotAreaXpgList* AItem);
	__property TCT_PivotArea* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PivotAreaXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PivotAreaXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_MemberProperty : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	bool FShowCell;
	bool FShowTip;
	bool FShowAsCaption;
	int FNameLen;
	int FPPos;
	int FPLen;
	int FLevel;
	int FField;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_MemberProperty(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_MemberProperty();
	void __fastcall Clear();
	void __fastcall Assign(TCT_MemberProperty* AItem);
	void __fastcall CopyTo(TCT_MemberProperty* AItem);
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property bool ShowCell = {read=FShowCell, write=FShowCell, nodefault};
	__property bool ShowTip = {read=FShowTip, write=FShowTip, nodefault};
	__property bool ShowAsCaption = {read=FShowAsCaption, write=FShowAsCaption, nodefault};
	__property int NameLen = {read=FNameLen, write=FNameLen, nodefault};
	__property int PPos = {read=FPPos, write=FPPos, nodefault};
	__property int PLen = {read=FPLen, write=FPLen, nodefault};
	__property int Level = {read=FLevel, write=FLevel, nodefault};
	__property int Field = {read=FField, write=FField, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_MemberPropertyXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_MemberProperty* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_MemberProperty* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_MemberProperty* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_MemberPropertyXpgList* AItem);
	void __fastcall CopyTo(TCT_MemberPropertyXpgList* AItem);
	__property TCT_MemberProperty* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_MemberPropertyXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_MemberPropertyXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Member : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Member(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Member();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Member* AItem);
	void __fastcall CopyTo(TCT_Member* AItem);
	__property System::UnicodeString Name = {read=FName, write=FName};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_MemberXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Member* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Member* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Member* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_MemberXpgList* AItem);
	void __fastcall CopyTo(TCT_MemberXpgList* AItem);
	__property TCT_Member* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_MemberXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_MemberXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PCDSCPage : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_PageItemXpgList* FPageItemXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PCDSCPage(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PCDSCPage();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PCDSCPage* AItem);
	void __fastcall CopyTo(TCT_PCDSCPage* AItem);
	TCT_PageItemXpgList* __fastcall Create_PageItemXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_PageItemXpgList* PageItemXpgList = {read=FPageItemXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PCDSCPageXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_PCDSCPage* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_PCDSCPage* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_PCDSCPage* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_PCDSCPageXpgList* AItem);
	void __fastcall CopyTo(TCT_PCDSCPageXpgList* AItem);
	__property TCT_PCDSCPage* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PCDSCPageXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PCDSCPageXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RangeSet : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FI1;
	int FI2;
	int FI3;
	int FI4;
	System::UnicodeString FRef;
	System::UnicodeString FName;
	System::UnicodeString FSheet;
	System::UnicodeString FR_Id;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_RangeSet(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_RangeSet();
	void __fastcall Clear();
	void __fastcall Assign(TCT_RangeSet* AItem);
	void __fastcall CopyTo(TCT_RangeSet* AItem);
	__property int I1 = {read=FI1, write=FI1, nodefault};
	__property int I2 = {read=FI2, write=FI2, nodefault};
	__property int I3 = {read=FI3, write=FI3, nodefault};
	__property int I4 = {read=FI4, write=FI4, nodefault};
	__property System::UnicodeString Ref = {read=FRef, write=FRef};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString Sheet = {read=FSheet, write=FSheet};
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RangeSetXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_RangeSet* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_RangeSet* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_RangeSet* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_RangeSetXpgList* AItem);
	void __fastcall CopyTo(TCT_RangeSetXpgList* AItem);
	__property TCT_RangeSet* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_RangeSetXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_RangeSetXpgList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_RangePr : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FAutoStart;
	bool FAutoEnd;
	TST_GroupBy FGroupBy;
	double FStartNum;
	double FEndNum;
	System::TDateTime FStartDate;
	System::TDateTime FEndDate;
	double FGroupInterval;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_RangePr(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_RangePr();
	void __fastcall Clear();
	void __fastcall Assign(TCT_RangePr* AItem);
	void __fastcall CopyTo(TCT_RangePr* AItem);
	__property bool AutoStart = {read=FAutoStart, write=FAutoStart, nodefault};
	__property bool AutoEnd = {read=FAutoEnd, write=FAutoEnd, nodefault};
	__property TST_GroupBy GroupBy = {read=FGroupBy, write=FGroupBy, nodefault};
	__property double StartNum = {read=FStartNum, write=FStartNum};
	__property double EndNum = {read=FEndNum, write=FEndNum};
	__property System::TDateTime StartDate = {read=FStartDate, write=FStartDate};
	__property System::TDateTime EndDate = {read=FEndDate, write=FEndDate};
	__property double GroupInterval = {read=FGroupInterval, write=FGroupInterval};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DiscretePr : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_IndexXpgList* FXXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_DiscretePr(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DiscretePr();
	void __fastcall Clear();
	void __fastcall Assign(TCT_DiscretePr* AItem);
	void __fastcall CopyTo(TCT_DiscretePr* AItem);
	TCT_IndexXpgList* __fastcall Create_XXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_IndexXpgList* XXpgList = {read=FXXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GroupItems : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_MissingXpgList* FMXpgList;
	TCT_NumberXpgList* FNXpgList;
	TCT_BooleanXpgList* FBXpgList;
	TCT_ErrorXpgList* FEXpgList;
	TCT_StringXpgList* FSXpgList;
	TCT_DateTimeXpgList* FDXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_GroupItems(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GroupItems();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GroupItems* AItem);
	void __fastcall CopyTo(TCT_GroupItems* AItem);
	TCT_MissingXpgList* __fastcall Create_MXpgList();
	TCT_NumberXpgList* __fastcall Create_NXpgList();
	TCT_BooleanXpgList* __fastcall Create_BXpgList();
	TCT_ErrorXpgList* __fastcall Create_EXpgList();
	TCT_StringXpgList* __fastcall Create_SXpgList();
	TCT_DateTimeXpgList* __fastcall Create_DXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_MissingXpgList* MXpgList = {read=FMXpgList};
	__property TCT_NumberXpgList* NXpgList = {read=FNXpgList};
	__property TCT_BooleanXpgList* BXpgList = {read=FBXpgList};
	__property TCT_ErrorXpgList* EXpgList = {read=FEXpgList};
	__property TCT_StringXpgList* SXpgList = {read=FSXpgList};
	__property TCT_DateTimeXpgList* DXpgList = {read=FDXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FieldUsage : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FX;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_FieldUsage(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FieldUsage();
	void __fastcall Clear();
	void __fastcall Assign(TCT_FieldUsage* AItem);
	void __fastcall CopyTo(TCT_FieldUsage* AItem);
	__property int X = {read=FX, write=FX, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FieldUsageXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_FieldUsage* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_FieldUsage* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_FieldUsage* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_FieldUsageXpgList* AItem);
	void __fastcall CopyTo(TCT_FieldUsageXpgList* AItem);
	__property TCT_FieldUsage* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_FieldUsageXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_FieldUsageXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GroupLevel : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FUniqueName;
	System::UnicodeString FCaption;
	bool FUser;
	bool FCustomRollUp;
	TCT_Groups* FGroups;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_GroupLevel(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GroupLevel();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GroupLevel* AItem);
	void __fastcall CopyTo(TCT_GroupLevel* AItem);
	TCT_Groups* __fastcall Create_Groups();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property System::UnicodeString UniqueName = {read=FUniqueName, write=FUniqueName};
	__property System::UnicodeString Caption = {read=FCaption, write=FCaption};
	__property bool User = {read=FUser, write=FUser, nodefault};
	__property bool CustomRollUp = {read=FCustomRollUp, write=FCustomRollUp, nodefault};
	__property TCT_Groups* Groups = {read=FGroups};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GroupLevelXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_GroupLevel* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_GroupLevel* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_GroupLevel* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_GroupLevelXpgList* AItem);
	void __fastcall CopyTo(TCT_GroupLevelXpgList* AItem);
	__property TCT_GroupLevel* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_GroupLevelXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_GroupLevelXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Items : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	TCT_Item* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCT_Item* __fastcall GetItems(int Index);
	
protected:
	System::Contnrs::TObjectList* FItems;
	
public:
	__fastcall TCT_Items(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Items();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	void __fastcall Assign(TCT_Items* AItem);
	void __fastcall CopyTo(TCT_Items* AItem);
	TCT_Item* __fastcall Add();
	void __fastcall Exchange(int Aindex1, int AIndex2);
	int __fastcall Count();
	__property TCT_Item* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AutoSortScope : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_PivotArea* FPivotArea;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_AutoSortScope(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_AutoSortScope();
	void __fastcall Clear();
	void __fastcall Assign(TCT_AutoSortScope* AItem);
	void __fastcall CopyTo(TCT_AutoSortScope* AItem);
	TCT_PivotArea* __fastcall Create_PivotArea();
	__property TCT_PivotArea* PivotArea = {read=FPivotArea};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotAreas : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_PivotAreaXpgList* FPivotAreaXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PivotAreas(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotAreas();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PivotAreas* AItem);
	void __fastcall CopyTo(TCT_PivotAreas* AItem);
	TCT_PivotAreaXpgList* __fastcall Create_PivotAreaXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_PivotAreaXpgList* PivotAreaXpgList = {read=FPivotAreaXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_MemberProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_MemberPropertyXpgList* FMpXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_MemberProperties(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_MemberProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_MemberProperties* AItem);
	void __fastcall CopyTo(TCT_MemberProperties* AItem);
	TCT_MemberPropertyXpgList* __fastcall Create_MpXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_MemberPropertyXpgList* MpXpgList = {read=FMpXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Members : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	int FLevel;
	TCT_MemberXpgList* FMemberXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Members(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Members();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Members* AItem);
	void __fastcall CopyTo(TCT_Members* AItem);
	TCT_MemberXpgList* __fastcall Create_MemberXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property int Level = {read=FLevel, write=FLevel, nodefault};
	__property TCT_MemberXpgList* MemberXpgList = {read=FMemberXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_MembersXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Members* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Members* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Members* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_MembersXpgList* AItem);
	void __fastcall CopyTo(TCT_MembersXpgList* AItem);
	__property TCT_Members* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_MembersXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_MembersXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Pages : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_PCDSCPageXpgList* FPageXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Pages(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Pages();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Pages* AItem);
	void __fastcall CopyTo(TCT_Pages* AItem);
	TCT_PCDSCPageXpgList* __fastcall Create_PageXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_PCDSCPageXpgList* PageXpgList = {read=FPageXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RangeSets : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_RangeSetXpgList* FRangeSetXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_RangeSets(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_RangeSets();
	void __fastcall Clear();
	void __fastcall Assign(TCT_RangeSets* AItem);
	void __fastcall CopyTo(TCT_RangeSets* AItem);
	TCT_RangeSetXpgList* __fastcall Create_RangeSetXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_RangeSetXpgList* RangeSetXpgList = {read=FRangeSetXpgList};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSSharedItemsValuesHash : public TXPGBase
{
	typedef TXPGBase inherited;
	
private:
	int __fastcall GetCount();
	
protected:
	int FBooleanCount;
	int FDateCount;
	int FErrorCount;
	int FBlankCount;
	int FNumericCount;
	int FIntegerCount;
	int FStringCount;
	double FMinValue;
	double FMaxValue;
	System::TDateTime FMinDate;
	System::TDateTime FMaxDate;
	bool FLongText;
	Xlsshareditems5::TXLSSharedItemsValueType FCurrType;
	bool FUsed;
	Xlsshareditems5::TXLSUniqueSharedItemsValues* FValueList;
	unsigned __fastcall HashOf(Xc12utils5::TXc12CellError AValue)/* overload */;
	unsigned __fastcall HashOf(double AValue)/* overload */;
	unsigned __fastcall HashOf(System::UnicodeString AValue)/* overload */;
	
public:
	__fastcall TXLSSharedItemsValuesHash(unsigned Size);
	__fastcall virtual ~TXLSSharedItemsValuesHash();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	void __fastcall AddBoolean(bool AValue);
	void __fastcall AddDateTime(System::TDateTime AValue);
	void __fastcall AddError(Xc12utils5::TXc12CellError AValue);
	void __fastcall Add();
	void __fastcall AddFloat(double AValue);
	void __fastcall AddString(System::UnicodeString AValue);
	bool __fastcall CanSort();
	bool __fastcall IsNumeric();
	bool __fastcall IsMonthText();
	bool __fastcall IsDayText();
	__property int Count = {read=GetCount, nodefault};
	__property int BooleanCount = {read=FBooleanCount, nodefault};
	__property int DateCount = {read=FDateCount, nodefault};
	__property int ErrorCount = {read=FErrorCount, nodefault};
	__property int BlankCount = {read=FBlankCount, nodefault};
	__property int NumericCount = {read=FNumericCount, nodefault};
	__property int IntegerCount = {read=FIntegerCount, nodefault};
	__property int StringCount = {read=FStringCount, nodefault};
	__property double MinValue = {read=FMinValue, write=FMinValue};
	__property double MaxValue = {read=FMaxValue, write=FMaxValue};
	__property System::TDateTime MinDate = {read=FMinDate, write=FMinDate};
	__property System::TDateTime MaxDate = {read=FMaxDate, write=FMaxDate};
	__property bool LongText = {read=FLongText, write=FLongText, nodefault};
	__property bool Used = {read=FUsed, write=FUsed, nodefault};
	__property Xlsshareditems5::TXLSUniqueSharedItemsValues* ValueList = {read=FValueList};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SharedItems : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FContainsSemiMixedTypes;
	bool FContainsNonDate;
	bool FContainsMixedTypes;
	TXLSSharedItemsValuesHash* FValues;
	
public:
	__fastcall TCT_SharedItems(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SharedItems();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	void __fastcall Assign(TCT_SharedItems* AItem);
	void __fastcall CopyTo(TCT_SharedItems* AItem);
	void __fastcall UpdateNum(double AValue);
	void __fastcall UpdateDate(System::TDateTime AValue);
	void __fastcall UpdateString(System::UnicodeString AValue);
	void __fastcall UpdateBoolean(bool AValue);
	void __fastcall UpdateBlank();
	__property bool ContainsSemiMixedTypes = {read=FContainsSemiMixedTypes, write=FContainsSemiMixedTypes, nodefault};
	__property bool ContainsNonDate = {read=FContainsNonDate, write=FContainsNonDate, nodefault};
	__property TXLSSharedItemsValuesHash* Values = {read=FValues};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FieldGroup : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FPar;
	int FBase;
	TCT_RangePr* FRangePr;
	TCT_DiscretePr* FDiscretePr;
	TCT_GroupItems* FGroupItems;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_FieldGroup(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FieldGroup();
	void __fastcall Clear();
	void __fastcall Assign(TCT_FieldGroup* AItem);
	void __fastcall CopyTo(TCT_FieldGroup* AItem);
	TCT_RangePr* __fastcall Create_RangePr();
	TCT_DiscretePr* __fastcall Create_DiscretePr();
	TCT_GroupItems* __fastcall Create_GroupItems();
	__property int Par = {read=FPar, write=FPar, nodefault};
	__property int Base = {read=FBase, write=FBase, nodefault};
	__property TCT_RangePr* RangePr = {read=FRangePr};
	__property TCT_DiscretePr* DiscretePr = {read=FDiscretePr};
	__property TCT_GroupItems* GroupItems = {read=FGroupItems};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FieldsUsage : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_FieldUsageXpgList* FFieldUsageXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_FieldsUsage(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FieldsUsage();
	void __fastcall Clear();
	void __fastcall Assign(TCT_FieldsUsage* AItem);
	void __fastcall CopyTo(TCT_FieldsUsage* AItem);
	TCT_FieldUsageXpgList* __fastcall Create_FieldUsageXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_FieldUsageXpgList* FieldUsageXpgList = {read=FFieldUsageXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GroupLevels : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_GroupLevelXpgList* FGroupLevelXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_GroupLevels(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GroupLevels();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GroupLevels* AItem);
	void __fastcall CopyTo(TCT_GroupLevels* AItem);
	TCT_GroupLevelXpgList* __fastcall Create_GroupLevelXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_GroupLevelXpgList* GroupLevelXpgList = {read=FGroupLevelXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Set : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	int FMaxRank;
	System::UnicodeString FSetDefinition;
	TST_SortType FSortType;
	bool FQueryFailed;
	TCT_TuplesXpgList* FTplsXpgList;
	TCT_Tuples* FSortByTuple;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Set(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Set();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Set* AItem);
	void __fastcall CopyTo(TCT_Set* AItem);
	TCT_TuplesXpgList* __fastcall Create_TplsXpgList();
	TCT_Tuples* __fastcall Create_SortByTuple();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property int MaxRank = {read=FMaxRank, write=FMaxRank, nodefault};
	__property System::UnicodeString SetDefinition = {read=FSetDefinition, write=FSetDefinition};
	__property TST_SortType SortType = {read=FSortType, write=FSortType, nodefault};
	__property bool QueryFailed = {read=FQueryFailed, write=FQueryFailed, nodefault};
	__property TCT_TuplesXpgList* TplsXpgList = {read=FTplsXpgList};
	__property TCT_Tuples* SortByTuple = {read=FSortByTuple};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SetXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Set* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Set* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Set* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_SetXpgList* AItem);
	void __fastcall CopyTo(TCT_SetXpgList* AItem);
	__property TCT_Set* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_SetXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_SetXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Query : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FMdx;
	TCT_Tuples* FTpls;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Query(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Query();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Query* AItem);
	void __fastcall CopyTo(TCT_Query* AItem);
	TCT_Tuples* __fastcall Create_Tpls();
	__property System::UnicodeString Mdx = {read=FMdx, write=FMdx};
	__property TCT_Tuples* Tpls = {read=FTpls};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_QueryXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Query* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Query* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Query* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_QueryXpgList* AItem);
	void __fastcall CopyTo(TCT_QueryXpgList* AItem);
	__property TCT_Query* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_QueryXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_QueryXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ServerFormat : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FCulture;
	System::UnicodeString FFormat;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ServerFormat(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ServerFormat();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ServerFormat* AItem);
	void __fastcall CopyTo(TCT_ServerFormat* AItem);
	__property System::UnicodeString Culture = {read=FCulture, write=FCulture};
	__property System::UnicodeString Format = {read=FFormat, write=FFormat};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ServerFormatXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_ServerFormat* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ServerFormat* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ServerFormat* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_ServerFormatXpgList* AItem);
	void __fastcall CopyTo(TCT_ServerFormatXpgList* AItem);
	__property TCT_ServerFormat* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ServerFormatXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ServerFormatXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotField : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	TST_Axis_N2 FAxis;
	bool FDataField;
	System::UnicodeString FSubtotalCaption;
	bool FShowDropDowns;
	bool FHiddenLevel;
	System::UnicodeString FUniqueMemberProperty;
	bool FCompact;
	bool FAllDrilled;
	System::UnicodeString FNumFmtId;
	bool FOutline;
	bool FSubtotalTop;
	bool FDragToRow;
	bool FDragToCol;
	bool FMultipleItemSelectionAllowed;
	bool FDragToPage;
	bool FDragToData;
	bool FDragOff;
	bool FShowAll;
	bool FInsertBlankRow;
	bool FServerField;
	bool FInsertPageBreak;
	bool FAutoShow;
	bool FTopAutoShow;
	bool FHideNewItems;
	bool FMeasureFilter;
	bool FIncludeNewItemsInFilter;
	int FItemPageCount;
	TST_FieldSortType FSortType;
	bool FDataSourceSort;
	bool FNonAutoSortDefault;
	int FRankBy;
	bool FDefaultSubtotal;
	bool FSumSubtotal;
	bool FCountASubtotal;
	bool FAvgSubtotal;
	bool FMaxSubtotal;
	bool FMinSubtotal;
	bool FProductSubtotal;
	bool FCountSubtotal;
	bool FStdDevSubtotal;
	bool FStdDevPSubtotal;
	bool FVarSubtotal;
	bool FVarPSubtotal;
	bool FShowPropCell;
	bool FShowPropTip;
	bool FShowPropAsCaption;
	bool FDefaultAttributeDrillState;
	TCT_Items* FItems;
	TCT_AutoSortScope* FAutoSortScope;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PivotField(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotField();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PivotField* AItem);
	void __fastcall CopyTo(TCT_PivotField* AItem);
	TCT_Items* __fastcall Create_Items();
	TCT_AutoSortScope* __fastcall Create_AutoSortScope();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property TST_Axis_N2 Axis = {read=FAxis, write=FAxis, nodefault};
	__property bool DataField = {read=FDataField, write=FDataField, nodefault};
	__property System::UnicodeString SubtotalCaption = {read=FSubtotalCaption, write=FSubtotalCaption};
	__property bool ShowDropDowns = {read=FShowDropDowns, write=FShowDropDowns, nodefault};
	__property bool HiddenLevel = {read=FHiddenLevel, write=FHiddenLevel, nodefault};
	__property System::UnicodeString UniqueMemberProperty = {read=FUniqueMemberProperty, write=FUniqueMemberProperty};
	__property bool Compact = {read=FCompact, write=FCompact, nodefault};
	__property bool AllDrilled = {read=FAllDrilled, write=FAllDrilled, nodefault};
	__property System::UnicodeString NumFmtId = {read=FNumFmtId, write=FNumFmtId};
	__property bool Outline = {read=FOutline, write=FOutline, nodefault};
	__property bool SubtotalTop = {read=FSubtotalTop, write=FSubtotalTop, nodefault};
	__property bool DragToRow = {read=FDragToRow, write=FDragToRow, nodefault};
	__property bool DragToCol = {read=FDragToCol, write=FDragToCol, nodefault};
	__property bool MultipleItemSelectionAllowed = {read=FMultipleItemSelectionAllowed, write=FMultipleItemSelectionAllowed, nodefault};
	__property bool DragToPage = {read=FDragToPage, write=FDragToPage, nodefault};
	__property bool DragToData = {read=FDragToData, write=FDragToData, nodefault};
	__property bool DragOff = {read=FDragOff, write=FDragOff, nodefault};
	__property bool ShowAll = {read=FShowAll, write=FShowAll, nodefault};
	__property bool InsertBlankRow = {read=FInsertBlankRow, write=FInsertBlankRow, nodefault};
	__property bool ServerField = {read=FServerField, write=FServerField, nodefault};
	__property bool InsertPageBreak = {read=FInsertPageBreak, write=FInsertPageBreak, nodefault};
	__property bool AutoShow = {read=FAutoShow, write=FAutoShow, nodefault};
	__property bool TopAutoShow = {read=FTopAutoShow, write=FTopAutoShow, nodefault};
	__property bool HideNewItems = {read=FHideNewItems, write=FHideNewItems, nodefault};
	__property bool MeasureFilter = {read=FMeasureFilter, write=FMeasureFilter, nodefault};
	__property bool IncludeNewItemsInFilter = {read=FIncludeNewItemsInFilter, write=FIncludeNewItemsInFilter, nodefault};
	__property int ItemPageCount = {read=FItemPageCount, write=FItemPageCount, nodefault};
	__property TST_FieldSortType SortType = {read=FSortType, write=FSortType, nodefault};
	__property bool DataSourceSort = {read=FDataSourceSort, write=FDataSourceSort, nodefault};
	__property bool NonAutoSortDefault = {read=FNonAutoSortDefault, write=FNonAutoSortDefault, nodefault};
	__property int RankBy = {read=FRankBy, write=FRankBy, nodefault};
	__property bool DefaultSubtotal = {read=FDefaultSubtotal, write=FDefaultSubtotal, nodefault};
	__property bool SumSubtotal = {read=FSumSubtotal, write=FSumSubtotal, nodefault};
	__property bool CountASubtotal = {read=FCountASubtotal, write=FCountASubtotal, nodefault};
	__property bool AvgSubtotal = {read=FAvgSubtotal, write=FAvgSubtotal, nodefault};
	__property bool MaxSubtotal = {read=FMaxSubtotal, write=FMaxSubtotal, nodefault};
	__property bool MinSubtotal = {read=FMinSubtotal, write=FMinSubtotal, nodefault};
	__property bool ProductSubtotal = {read=FProductSubtotal, write=FProductSubtotal, nodefault};
	__property bool CountSubtotal = {read=FCountSubtotal, write=FCountSubtotal, nodefault};
	__property bool StdDevSubtotal = {read=FStdDevSubtotal, write=FStdDevSubtotal, nodefault};
	__property bool StdDevPSubtotal = {read=FStdDevPSubtotal, write=FStdDevPSubtotal, nodefault};
	__property bool VarSubtotal = {read=FVarSubtotal, write=FVarSubtotal, nodefault};
	__property bool VarPSubtotal = {read=FVarPSubtotal, write=FVarPSubtotal, nodefault};
	__property bool ShowPropCell = {read=FShowPropCell, write=FShowPropCell, nodefault};
	__property bool ShowPropTip = {read=FShowPropTip, write=FShowPropTip, nodefault};
	__property bool ShowPropAsCaption = {read=FShowPropAsCaption, write=FShowPropAsCaption, nodefault};
	__property bool DefaultAttributeDrillState = {read=FDefaultAttributeDrillState, write=FDefaultAttributeDrillState, nodefault};
	__property TCT_Items* Items = {read=FItems};
	__property TCT_AutoSortScope* AutoSortScope = {read=FAutoSortScope};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotFieldXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_PivotField* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_PivotField* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_PivotField* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_PivotFieldXpgList* AItem);
	void __fastcall CopyTo(TCT_PivotFieldXpgList* AItem);
	__property TCT_PivotField* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PivotFieldXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PivotFieldXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Field : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FX;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Field(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Field();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Field* AItem);
	void __fastcall CopyTo(TCT_Field* AItem);
	__property int X = {read=FX, write=FX, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_I : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_ItemType FT;
	int FR;
	int FI;
	TCT_XXpgList* FXXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_I(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_I();
	void __fastcall Clear();
	void __fastcall Assign(TCT_I* AItem);
	void __fastcall CopyTo(TCT_I* AItem);
	TCT_XXpgList* __fastcall Create_XXpgList();
	__property TST_ItemType T = {read=FT, write=FT, nodefault};
	__property int R = {read=FR, write=FR, nodefault};
	__property int I = {read=FI, write=FI, nodefault};
	__property TCT_XXpgList* XXpgList = {read=FXXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PageField : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FFld;
	int FItem;
	int FHier;
	System::UnicodeString FName;
	System::UnicodeString FCap;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PageField(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PageField();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PageField* AItem);
	void __fastcall CopyTo(TCT_PageField* AItem);
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property int Fld = {read=FFld, write=FFld, nodefault};
	__property int Item = {read=FItem, write=FItem, nodefault};
	__property int Hier = {read=FHier, write=FHier, nodefault};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString Cap = {read=FCap, write=FCap};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PageFieldXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_PageField* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_PageField* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_PageField* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_PageFieldXpgList* AItem);
	void __fastcall CopyTo(TCT_PageFieldXpgList* AItem);
	__property TCT_PageField* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PageFieldXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PageFieldXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DataField : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	int FFld;
	System::UnicodeString FSubtotal;
	TST_ShowDataAs FShowDataAs;
	int FBaseField;
	int FBaseItem;
	System::UnicodeString FNumFmtId;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_DataField(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DataField();
	void __fastcall Clear();
	void __fastcall Assign(TCT_DataField* AItem);
	void __fastcall CopyTo(TCT_DataField* AItem);
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property int Fld = {read=FFld, write=FFld, nodefault};
	__property System::UnicodeString Subtotal = {read=FSubtotal, write=FSubtotal};
	__property TST_ShowDataAs ShowDataAs = {read=FShowDataAs, write=FShowDataAs, nodefault};
	__property int BaseField = {read=FBaseField, write=FBaseField, nodefault};
	__property int BaseItem = {read=FBaseItem, write=FBaseItem, nodefault};
	__property System::UnicodeString NumFmtId = {read=FNumFmtId, write=FNumFmtId};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DataFields : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_DataField* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_DataField* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_DataField* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_DataFields* AItem);
	void __fastcall CopyTo(TCT_DataFields* AItem);
	__property TCT_DataField* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_DataFields(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_DataFields() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Format : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_FormatAction FAction;
	System::UnicodeString FDxfId;
	TCT_PivotArea* FPivotArea;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Format(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Format();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Format* AItem);
	void __fastcall CopyTo(TCT_Format* AItem);
	TCT_PivotArea* __fastcall Create_PivotArea();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TST_FormatAction Action = {read=FAction, write=FAction, nodefault};
	__property System::UnicodeString DxfId = {read=FDxfId, write=FDxfId};
	__property TCT_PivotArea* PivotArea = {read=FPivotArea};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FormatXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Format* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Format* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Format* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_FormatXpgList* AItem);
	void __fastcall CopyTo(TCT_FormatXpgList* AItem);
	__property TCT_Format* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_FormatXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_FormatXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ConditionalFormat : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_Scope FScope;
	TST_Type FType;
	int FPriority;
	TCT_PivotAreas* FPivotAreas;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ConditionalFormat(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ConditionalFormat();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ConditionalFormat* AItem);
	void __fastcall CopyTo(TCT_ConditionalFormat* AItem);
	TCT_PivotAreas* __fastcall Create_PivotAreas();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TST_Scope Scope = {read=FScope, write=FScope, nodefault};
	__property TST_Type Type_ = {read=FType, write=FType, nodefault};
	__property int Priority = {read=FPriority, write=FPriority, nodefault};
	__property TCT_PivotAreas* PivotAreas = {read=FPivotAreas};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ConditionalFormatXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_ConditionalFormat* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ConditionalFormat* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ConditionalFormat* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_ConditionalFormatXpgList* AItem);
	void __fastcall CopyTo(TCT_ConditionalFormatXpgList* AItem);
	__property TCT_ConditionalFormat* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ConditionalFormatXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ConditionalFormatXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ChartFormat : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FChart;
	int FFormat;
	bool FSeries;
	TCT_PivotArea* FPivotArea;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ChartFormat(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ChartFormat();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ChartFormat* AItem);
	void __fastcall CopyTo(TCT_ChartFormat* AItem);
	TCT_PivotArea* __fastcall Create_PivotArea();
	__property int Chart = {read=FChart, write=FChart, nodefault};
	__property int Format = {read=FFormat, write=FFormat, nodefault};
	__property bool Series = {read=FSeries, write=FSeries, nodefault};
	__property TCT_PivotArea* PivotArea = {read=FPivotArea};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ChartFormatXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_ChartFormat* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ChartFormat* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ChartFormat* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_ChartFormatXpgList* AItem);
	void __fastcall CopyTo(TCT_ChartFormatXpgList* AItem);
	__property TCT_ChartFormat* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ChartFormatXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ChartFormatXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotHierarchy : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FOutline;
	bool FMultipleItemSelectionAllowed;
	bool FSubtotalTop;
	bool FShowInFieldList;
	bool FDragToRow;
	bool FDragToCol;
	bool FDragToPage;
	bool FDragToData;
	bool FDragOff;
	bool FIncludeNewItemsInFilter;
	System::UnicodeString FCaption;
	TCT_MemberProperties* FMps;
	TCT_MembersXpgList* FMembersXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PivotHierarchy(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotHierarchy();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PivotHierarchy* AItem);
	void __fastcall CopyTo(TCT_PivotHierarchy* AItem);
	TCT_MemberProperties* __fastcall Create_Mps();
	TCT_MembersXpgList* __fastcall Create_MembersXpgList();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property bool Outline = {read=FOutline, write=FOutline, nodefault};
	__property bool MultipleItemSelectionAllowed = {read=FMultipleItemSelectionAllowed, write=FMultipleItemSelectionAllowed, nodefault};
	__property bool SubtotalTop = {read=FSubtotalTop, write=FSubtotalTop, nodefault};
	__property bool ShowInFieldList = {read=FShowInFieldList, write=FShowInFieldList, nodefault};
	__property bool DragToRow = {read=FDragToRow, write=FDragToRow, nodefault};
	__property bool DragToCol = {read=FDragToCol, write=FDragToCol, nodefault};
	__property bool DragToPage = {read=FDragToPage, write=FDragToPage, nodefault};
	__property bool DragToData = {read=FDragToData, write=FDragToData, nodefault};
	__property bool DragOff = {read=FDragOff, write=FDragOff, nodefault};
	__property bool IncludeNewItemsInFilter = {read=FIncludeNewItemsInFilter, write=FIncludeNewItemsInFilter, nodefault};
	__property System::UnicodeString Caption = {read=FCaption, write=FCaption};
	__property TCT_MemberProperties* Mps = {read=FMps};
	__property TCT_MembersXpgList* MembersXpgList = {read=FMembersXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotHierarchyXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_PivotHierarchy* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_PivotHierarchy* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_PivotHierarchy* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_PivotHierarchyXpgList* AItem);
	void __fastcall CopyTo(TCT_PivotHierarchyXpgList* AItem);
	__property TCT_PivotHierarchy* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PivotHierarchyXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PivotHierarchyXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotFilter : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FFld;
	int FMpFld;
	TST_PivotFilterType FType;
	int FEvalOrder;
	int FId;
	int FIMeasureHier;
	int FIMeasureFld;
	System::UnicodeString FName;
	System::UnicodeString FDescription;
	System::UnicodeString FStringValue1;
	System::UnicodeString FStringValue2;
	Xpgparserxlsx::TCT_AutoFilter* FAutoFilter;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PivotFilter(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotFilter();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PivotFilter* AItem);
	void __fastcall CopyTo(TCT_PivotFilter* AItem);
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property int Fld = {read=FFld, write=FFld, nodefault};
	__property int MpFld = {read=FMpFld, write=FMpFld, nodefault};
	__property TST_PivotFilterType Type_ = {read=FType, write=FType, nodefault};
	__property int EvalOrder = {read=FEvalOrder, write=FEvalOrder, nodefault};
	__property int Id = {read=FId, write=FId, nodefault};
	__property int IMeasureHier = {read=FIMeasureHier, write=FIMeasureHier, nodefault};
	__property int IMeasureFld = {read=FIMeasureFld, write=FIMeasureFld, nodefault};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString Description = {read=FDescription, write=FDescription};
	__property System::UnicodeString StringValue1 = {read=FStringValue1, write=FStringValue1};
	__property System::UnicodeString StringValue2 = {read=FStringValue2, write=FStringValue2};
	__property Xpgparserxlsx::TCT_AutoFilter* AutoFilter = {read=FAutoFilter};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotFilterXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_PivotFilter* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_PivotFilter* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_PivotFilter* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_PivotFilterXpgList* AItem);
	void __fastcall CopyTo(TCT_PivotFilterXpgList* AItem);
	__property TCT_PivotFilter* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PivotFilterXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PivotFilterXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_HierarchyUsage : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FHierarchyUsage;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_HierarchyUsage(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_HierarchyUsage();
	void __fastcall Clear();
	void __fastcall Assign(TCT_HierarchyUsage* AItem);
	void __fastcall CopyTo(TCT_HierarchyUsage* AItem);
	__property int HierarchyUsage = {read=FHierarchyUsage, write=FHierarchyUsage, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_HierarchyUsageXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_HierarchyUsage* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_HierarchyUsage* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_HierarchyUsage* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_HierarchyUsageXpgList* AItem);
	void __fastcall CopyTo(TCT_HierarchyUsageXpgList* AItem);
	__property TCT_HierarchyUsage* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_HierarchyUsageXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_HierarchyUsageXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_WorksheetSource : public TXPGBase
{
	typedef TXPGBase inherited;
	
private:
	void __fastcall SetRCells(Xlsrelcells5::TXLSRelCells* const Value);
	
protected:
	System::UnicodeString FRef;
	Xlsrelcells5::TXLSRelCells* FRCells;
	System::UnicodeString FName;
	System::UnicodeString FSheet;
	System::UnicodeString FR_Id;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_WorksheetSource(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_WorksheetSource();
	void __fastcall Clear();
	void __fastcall Assign(TCT_WorksheetSource* AItem);
	void __fastcall CopyTo(TCT_WorksheetSource* AItem);
	__property System::UnicodeString Ref = {read=FRef, write=FRef};
	__property Xlsrelcells5::TXLSRelCells* RCells = {read=FRCells, write=SetRCells};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString Sheet = {read=FSheet, write=FSheet};
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Consolidation : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FAutoPage;
	TCT_Pages* FPages;
	TCT_RangeSets* FRangeSets;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Consolidation(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Consolidation();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Consolidation* AItem);
	void __fastcall CopyTo(TCT_Consolidation* AItem);
	TCT_Pages* __fastcall Create_Pages();
	TCT_RangeSets* __fastcall Create_RangeSets();
	__property bool AutoPage = {read=FAutoPage, write=FAutoPage, nodefault};
	__property TCT_Pages* Pages = {read=FPages};
	__property TCT_RangeSets* RangeSets = {read=FRangeSets};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CacheField : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	System::UnicodeString FCaption;
	System::UnicodeString FPropertyName;
	bool FServerField;
	bool FUniqueList;
	System::UnicodeString FNumFmtId;
	System::UnicodeString FFormula;
	int FSqlType;
	int FHierarchy;
	int FLevel;
	bool FDatabaseField;
	int FMappingCount;
	bool FMemberPropertyField;
	TCT_SharedItems* FSharedItems;
	TCT_FieldGroup* FFieldGroup;
	TCT_XXpgList* FMpMapXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_CacheField(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CacheField();
	void __fastcall Clear();
	void __fastcall Assign(TCT_CacheField* AItem);
	void __fastcall CopyTo(TCT_CacheField* AItem);
	TCT_SharedItems* __fastcall Create_SharedItems();
	TCT_FieldGroup* __fastcall Create_FieldGroup();
	TCT_XXpgList* __fastcall Create_MpMapXpgList();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString Caption = {read=FCaption, write=FCaption};
	__property System::UnicodeString PropertyName = {read=FPropertyName, write=FPropertyName};
	__property bool ServerField = {read=FServerField, write=FServerField, nodefault};
	__property bool UniqueList = {read=FUniqueList, write=FUniqueList, nodefault};
	__property System::UnicodeString NumFmtId = {read=FNumFmtId, write=FNumFmtId};
	__property System::UnicodeString Formula = {read=FFormula, write=FFormula};
	__property int SqlType = {read=FSqlType, write=FSqlType, nodefault};
	__property int Hierarchy = {read=FHierarchy, write=FHierarchy, nodefault};
	__property int Level = {read=FLevel, write=FLevel, nodefault};
	__property bool DatabaseField = {read=FDatabaseField, write=FDatabaseField, nodefault};
	__property int MappingCount = {read=FMappingCount, write=FMappingCount, nodefault};
	__property bool MemberPropertyField = {read=FMemberPropertyField, write=FMemberPropertyField, nodefault};
	__property TCT_SharedItems* SharedItems = {read=FSharedItems};
	__property TCT_FieldGroup* FieldGroup = {read=FFieldGroup};
	__property TCT_XXpgList* MpMapXpgList = {read=FMpMapXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CacheHierarchy : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FUniqueName;
	System::UnicodeString FCaption;
	bool FMeasure;
	bool FSet;
	int FParentSet;
	int FIconSet;
	bool FAttribute;
	bool FTime;
	bool FKeyAttribute;
	System::UnicodeString FDefaultMemberUniqueName;
	System::UnicodeString FAllUniqueName;
	System::UnicodeString FAllCaption;
	System::UnicodeString FDimensionUniqueName;
	System::UnicodeString FDisplayFolder;
	System::UnicodeString FMeasureGroup;
	bool FMeasures;
	int FCount;
	bool FOneField;
	int FMemberValueDatatype;
	bool FUnbalanced;
	bool FUnbalancedGroup;
	bool FHidden;
	TCT_FieldsUsage* FFieldsUsage;
	TCT_GroupLevels* FGroupLevels;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_CacheHierarchy(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CacheHierarchy();
	void __fastcall Clear();
	void __fastcall Assign(TCT_CacheHierarchy* AItem);
	void __fastcall CopyTo(TCT_CacheHierarchy* AItem);
	TCT_FieldsUsage* __fastcall Create_FieldsUsage();
	TCT_GroupLevels* __fastcall Create_GroupLevels();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property System::UnicodeString UniqueName = {read=FUniqueName, write=FUniqueName};
	__property System::UnicodeString Caption = {read=FCaption, write=FCaption};
	__property bool Measure = {read=FMeasure, write=FMeasure, nodefault};
	__property bool Set_ = {read=FSet, write=FSet, nodefault};
	__property int ParentSet = {read=FParentSet, write=FParentSet, nodefault};
	__property int IconSet = {read=FIconSet, write=FIconSet, nodefault};
	__property bool Attribute = {read=FAttribute, write=FAttribute, nodefault};
	__property bool Time = {read=FTime, write=FTime, nodefault};
	__property bool KeyAttribute = {read=FKeyAttribute, write=FKeyAttribute, nodefault};
	__property System::UnicodeString DefaultMemberUniqueName = {read=FDefaultMemberUniqueName, write=FDefaultMemberUniqueName};
	__property System::UnicodeString AllUniqueName = {read=FAllUniqueName, write=FAllUniqueName};
	__property System::UnicodeString AllCaption = {read=FAllCaption, write=FAllCaption};
	__property System::UnicodeString DimensionUniqueName = {read=FDimensionUniqueName, write=FDimensionUniqueName};
	__property System::UnicodeString DisplayFolder = {read=FDisplayFolder, write=FDisplayFolder};
	__property System::UnicodeString MeasureGroup = {read=FMeasureGroup, write=FMeasureGroup};
	__property bool Measures = {read=FMeasures, write=FMeasures, nodefault};
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property bool OneField = {read=FOneField, write=FOneField, nodefault};
	__property int MemberValueDatatype = {read=FMemberValueDatatype, write=FMemberValueDatatype, nodefault};
	__property bool Unbalanced = {read=FUnbalanced, write=FUnbalanced, nodefault};
	__property bool UnbalancedGroup = {read=FUnbalancedGroup, write=FUnbalancedGroup, nodefault};
	__property bool Hidden = {read=FHidden, write=FHidden, nodefault};
	__property TCT_FieldsUsage* FieldsUsage = {read=FFieldsUsage};
	__property TCT_GroupLevels* GroupLevels = {read=FGroupLevels};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CacheHierarchyXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_CacheHierarchy* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_CacheHierarchy* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_CacheHierarchy* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_CacheHierarchyXpgList* AItem);
	void __fastcall CopyTo(TCT_CacheHierarchyXpgList* AItem);
	__property TCT_CacheHierarchy* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CacheHierarchyXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CacheHierarchyXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PCDKPI : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FUniqueName;
	System::UnicodeString FCaption;
	System::UnicodeString FDisplayFolder;
	System::UnicodeString FMeasureGroup;
	System::UnicodeString FParent;
	System::UnicodeString FValue;
	System::UnicodeString FGoal;
	System::UnicodeString FStatus;
	System::UnicodeString FTrend;
	System::UnicodeString FWeight;
	System::UnicodeString FTime;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PCDKPI(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PCDKPI();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PCDKPI* AItem);
	void __fastcall CopyTo(TCT_PCDKPI* AItem);
	__property System::UnicodeString UniqueName = {read=FUniqueName, write=FUniqueName};
	__property System::UnicodeString Caption = {read=FCaption, write=FCaption};
	__property System::UnicodeString DisplayFolder = {read=FDisplayFolder, write=FDisplayFolder};
	__property System::UnicodeString MeasureGroup = {read=FMeasureGroup, write=FMeasureGroup};
	__property System::UnicodeString Parent = {read=FParent, write=FParent};
	__property System::UnicodeString Value = {read=FValue, write=FValue};
	__property System::UnicodeString Goal = {read=FGoal, write=FGoal};
	__property System::UnicodeString Status = {read=FStatus, write=FStatus};
	__property System::UnicodeString Trend = {read=FTrend, write=FTrend};
	__property System::UnicodeString Weight = {read=FWeight, write=FWeight};
	__property System::UnicodeString Time = {read=FTime, write=FTime};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PCDKPIXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_PCDKPI* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_PCDKPI* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_PCDKPI* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_PCDKPIXpgList* AItem);
	void __fastcall CopyTo(TCT_PCDKPIXpgList* AItem);
	__property TCT_PCDKPI* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PCDKPIXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PCDKPIXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PCDSDTCEntries : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_MissingXpgList* FMXpgList;
	TCT_NumberXpgList* FNXpgList;
	TCT_ErrorXpgList* FEXpgList;
	TCT_StringXpgList* FSXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PCDSDTCEntries(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PCDSDTCEntries();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PCDSDTCEntries* AItem);
	void __fastcall CopyTo(TCT_PCDSDTCEntries* AItem);
	TCT_MissingXpgList* __fastcall Create_MXpgList();
	TCT_NumberXpgList* __fastcall Create_NXpgList();
	TCT_ErrorXpgList* __fastcall Create_EXpgList();
	TCT_StringXpgList* __fastcall Create_SXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_MissingXpgList* MXpgList = {read=FMXpgList};
	__property TCT_NumberXpgList* NXpgList = {read=FNXpgList};
	__property TCT_ErrorXpgList* EXpgList = {read=FEXpgList};
	__property TCT_StringXpgList* SXpgList = {read=FSXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Sets : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_SetXpgList* FSetXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Sets(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Sets();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Sets* AItem);
	void __fastcall CopyTo(TCT_Sets* AItem);
	TCT_SetXpgList* __fastcall Create_SetXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_SetXpgList* SetXpgList = {read=FSetXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_QueryCache : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_QueryXpgList* FQueryXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_QueryCache(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_QueryCache();
	void __fastcall Clear();
	void __fastcall Assign(TCT_QueryCache* AItem);
	void __fastcall CopyTo(TCT_QueryCache* AItem);
	TCT_QueryXpgList* __fastcall Create_QueryXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_QueryXpgList* QueryXpgList = {read=FQueryXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ServerFormats : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_ServerFormatXpgList* FServerFormatXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ServerFormats(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ServerFormats();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ServerFormats* AItem);
	void __fastcall CopyTo(TCT_ServerFormats* AItem);
	TCT_ServerFormatXpgList* __fastcall Create_ServerFormatXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_ServerFormatXpgList* ServerFormatXpgList = {read=FServerFormatXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CalculatedItem : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FField;
	System::UnicodeString FFormula;
	TCT_PivotArea* FPivotArea;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_CalculatedItem(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CalculatedItem();
	void __fastcall Clear();
	void __fastcall Assign(TCT_CalculatedItem* AItem);
	void __fastcall CopyTo(TCT_CalculatedItem* AItem);
	TCT_PivotArea* __fastcall Create_PivotArea();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property int Field = {read=FField, write=FField, nodefault};
	__property System::UnicodeString Formula = {read=FFormula, write=FFormula};
	__property TCT_PivotArea* PivotArea = {read=FPivotArea};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CalculatedItemXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_CalculatedItem* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_CalculatedItem* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_CalculatedItem* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_CalculatedItemXpgList* AItem);
	void __fastcall CopyTo(TCT_CalculatedItemXpgList* AItem);
	__property TCT_CalculatedItem* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CalculatedItemXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CalculatedItemXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CalculatedMember : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	System::UnicodeString FMdx;
	System::UnicodeString FMemberName;
	System::UnicodeString FHierarchy;
	System::UnicodeString FParent;
	int FSolveOrder;
	bool FSet;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_CalculatedMember(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CalculatedMember();
	void __fastcall Clear();
	void __fastcall Assign(TCT_CalculatedMember* AItem);
	void __fastcall CopyTo(TCT_CalculatedMember* AItem);
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString Mdx = {read=FMdx, write=FMdx};
	__property System::UnicodeString MemberName = {read=FMemberName, write=FMemberName};
	__property System::UnicodeString Hierarchy = {read=FHierarchy, write=FHierarchy};
	__property System::UnicodeString Parent = {read=FParent, write=FParent};
	__property int SolveOrder = {read=FSolveOrder, write=FSolveOrder, nodefault};
	__property bool Set_ = {read=FSet, write=FSet, nodefault};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CalculatedMemberXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_CalculatedMember* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_CalculatedMember* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_CalculatedMember* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_CalculatedMemberXpgList* AItem);
	void __fastcall CopyTo(TCT_CalculatedMemberXpgList* AItem);
	__property TCT_CalculatedMember* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CalculatedMemberXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CalculatedMemberXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotDimension : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FMeasure;
	System::UnicodeString FName;
	System::UnicodeString FUniqueName;
	System::UnicodeString FCaption;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PivotDimension(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotDimension();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PivotDimension* AItem);
	void __fastcall CopyTo(TCT_PivotDimension* AItem);
	__property bool Measure = {read=FMeasure, write=FMeasure, nodefault};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString UniqueName = {read=FUniqueName, write=FUniqueName};
	__property System::UnicodeString Caption = {read=FCaption, write=FCaption};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotDimensionXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_PivotDimension* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_PivotDimension* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_PivotDimension* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_PivotDimensionXpgList* AItem);
	void __fastcall CopyTo(TCT_PivotDimensionXpgList* AItem);
	__property TCT_PivotDimension* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PivotDimensionXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PivotDimensionXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_MeasureGroup : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	System::UnicodeString FCaption;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_MeasureGroup(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_MeasureGroup();
	void __fastcall Clear();
	void __fastcall Assign(TCT_MeasureGroup* AItem);
	void __fastcall CopyTo(TCT_MeasureGroup* AItem);
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString Caption = {read=FCaption, write=FCaption};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_MeasureGroupXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_MeasureGroup* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_MeasureGroup* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_MeasureGroup* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_MeasureGroupXpgList* AItem);
	void __fastcall CopyTo(TCT_MeasureGroupXpgList* AItem);
	__property TCT_MeasureGroup* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_MeasureGroupXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_MeasureGroupXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_MeasureDimensionMap : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FMeasureGroup;
	int FDimension;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_MeasureDimensionMap(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_MeasureDimensionMap();
	void __fastcall Clear();
	void __fastcall Assign(TCT_MeasureDimensionMap* AItem);
	void __fastcall CopyTo(TCT_MeasureDimensionMap* AItem);
	__property int MeasureGroup = {read=FMeasureGroup, write=FMeasureGroup, nodefault};
	__property int Dimension = {read=FDimension, write=FDimension, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_MeasureDimensionMapXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_MeasureDimensionMap* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_MeasureDimensionMap* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_MeasureDimensionMap* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_MeasureDimensionMapXpgList* AItem);
	void __fastcall CopyTo(TCT_MeasureDimensionMapXpgList* AItem);
	__property TCT_MeasureDimensionMap* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_MeasureDimensionMapXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_MeasureDimensionMapXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Record : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_MissingXpgList* FMXpgList;
	TCT_NumberXpgList* FNXpgList;
	TCT_BooleanXpgList* FBXpgList;
	TCT_ErrorXpgList* FEXpgList;
	TCT_StringXpgList* FSXpgList;
	TCT_DateTimeXpgList* FDXpgList;
	TCT_IndexXpgList* FXXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Record(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Record();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Record* AItem);
	void __fastcall CopyTo(TCT_Record* AItem);
	TCT_MissingXpgList* __fastcall Create_MXpgList();
	TCT_NumberXpgList* __fastcall Create_NXpgList();
	TCT_BooleanXpgList* __fastcall Create_BXpgList();
	TCT_ErrorXpgList* __fastcall Create_EXpgList();
	TCT_StringXpgList* __fastcall Create_SXpgList();
	TCT_DateTimeXpgList* __fastcall Create_DXpgList();
	TCT_IndexXpgList* __fastcall Create_XXpgList();
	__property TCT_MissingXpgList* MXpgList = {read=FMXpgList};
	__property TCT_NumberXpgList* NXpgList = {read=FNXpgList};
	__property TCT_BooleanXpgList* BXpgList = {read=FBXpgList};
	__property TCT_ErrorXpgList* EXpgList = {read=FEXpgList};
	__property TCT_StringXpgList* SXpgList = {read=FSXpgList};
	__property TCT_DateTimeXpgList* DXpgList = {read=FDXpgList};
	__property TCT_IndexXpgList* XXpgList = {read=FXXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RecordXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Record* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Record* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Record* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_RecordXpgList* AItem);
	void __fastcall CopyTo(TCT_RecordXpgList* AItem);
	__property TCT_Record* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_RecordXpgList(Xpgparserxlsx::TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_RecordXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Location : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FRef;
	Xlsrelcells5::TXLSRelCells* FRCells;
	int FFirstHeaderRow;
	int FFirstDataRow;
	int FFirstDataCol;
	int FRowPageCount;
	int FColPageCount;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Location(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Location();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Location* AItem);
	void __fastcall CopyTo(TCT_Location* AItem);
	__property System::UnicodeString Ref = {read=FRef, write=FRef};
	__property Xlsrelcells5::TXLSRelCells* RCells = {read=FRCells, write=FRCells};
	__property int FirstHeaderRow = {read=FFirstHeaderRow, write=FFirstHeaderRow, nodefault};
	__property int FirstDataRow = {read=FFirstDataRow, write=FFirstDataRow, nodefault};
	__property int FirstDataCol = {read=FFirstDataCol, write=FFirstDataCol, nodefault};
	__property int RowPageCount = {read=FRowPageCount, write=FRowPageCount, nodefault};
	__property int ColPageCount = {read=FColPageCount, write=FColPageCount, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotFields : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	TCT_PivotField* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCT_PivotField* __fastcall GetItems(int Index);
	
protected:
	System::Contnrs::TObjectList* FItems;
	
public:
	__fastcall TCT_PivotFields(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotFields();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	void __fastcall Assign(TCT_PivotFields* AItem);
	void __fastcall CopyTo(TCT_PivotFields* AItem);
	TCT_PivotField* __fastcall Add();
	int __fastcall Count();
	__property TCT_PivotField* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RowColFields : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	TCT_Field* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCT_Field* __fastcall GetItems(int Index);
	
protected:
	System::Contnrs::TObjectList* FItems;
	
public:
	__fastcall TCT_RowColFields(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_RowColFields();
	void __fastcall Clear();
	TCT_Field* __fastcall Add();
	int __fastcall Count();
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	void __fastcall Assign(TCT_RowColFields* AItem);
	void __fastcall CopyTo(TCT_RowColFields* AItem);
	__property TCT_Field* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RowColItems : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	TCT_I* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCT_I* __fastcall GetItems(int Index);
	
protected:
	System::Contnrs::TObjectList* FItems;
	bool FIsRow;
	
public:
	__fastcall TCT_RowColItems(Xpgparserxlsx::TXPGDocBase* AOwner, bool AIsRow);
	__fastcall virtual ~TCT_RowColItems();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	void __fastcall Assign(TCT_RowColItems* AItem);
	void __fastcall CopyTo(TCT_RowColItems* AItem);
	TCT_I* __fastcall Add();
	int __fastcall Count();
	__property bool IsRow = {read=FIsRow, write=FIsRow, nodefault};
	__property TCT_I* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PageFields : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_PageFieldXpgList* FPageFieldXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PageFields(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PageFields();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PageFields* AItem);
	void __fastcall CopyTo(TCT_PageFields* AItem);
	TCT_PageFieldXpgList* __fastcall Create_PageFieldXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_PageFieldXpgList* PageFieldXpgList = {read=FPageFieldXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Formats : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_FormatXpgList* FFormatXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Formats(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Formats();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Formats* AItem);
	void __fastcall CopyTo(TCT_Formats* AItem);
	TCT_FormatXpgList* __fastcall Create_FormatXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_FormatXpgList* FormatXpgList = {read=FFormatXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ConditionalFormats : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_ConditionalFormatXpgList* FConditionalFormatXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ConditionalFormats(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ConditionalFormats();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ConditionalFormats* AItem);
	void __fastcall CopyTo(TCT_ConditionalFormats* AItem);
	TCT_ConditionalFormatXpgList* __fastcall Create_ConditionalFormatXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_ConditionalFormatXpgList* ConditionalFormatXpgList = {read=FConditionalFormatXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ChartFormats : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_ChartFormatXpgList* FChartFormatXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ChartFormats(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ChartFormats();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ChartFormats* AItem);
	void __fastcall CopyTo(TCT_ChartFormats* AItem);
	TCT_ChartFormatXpgList* __fastcall Create_ChartFormatXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_ChartFormatXpgList* ChartFormatXpgList = {read=FChartFormatXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotHierarchies : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_PivotHierarchyXpgList* FPivotHierarchyXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PivotHierarchies(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotHierarchies();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PivotHierarchies* AItem);
	void __fastcall CopyTo(TCT_PivotHierarchies* AItem);
	TCT_PivotHierarchyXpgList* __fastcall Create_PivotHierarchyXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_PivotHierarchyXpgList* PivotHierarchyXpgList = {read=FPivotHierarchyXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotTableStyle : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	bool FShowRowHeaders;
	bool FShowColHeaders;
	bool FShowRowStripes;
	bool FShowColStripes;
	bool FShowLastColumn;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PivotTableStyle(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotTableStyle();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PivotTableStyle* AItem);
	void __fastcall CopyTo(TCT_PivotTableStyle* AItem);
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property bool ShowRowHeaders = {read=FShowRowHeaders, write=FShowRowHeaders, nodefault};
	__property bool ShowColHeaders = {read=FShowColHeaders, write=FShowColHeaders, nodefault};
	__property bool ShowRowStripes = {read=FShowRowStripes, write=FShowRowStripes, nodefault};
	__property bool ShowColStripes = {read=FShowColStripes, write=FShowColStripes, nodefault};
	__property bool ShowLastColumn = {read=FShowLastColumn, write=FShowLastColumn, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotFilters : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_PivotFilterXpgList* FFilterXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PivotFilters(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotFilters();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PivotFilters* AItem);
	void __fastcall CopyTo(TCT_PivotFilters* AItem);
	TCT_PivotFilterXpgList* __fastcall Create_FilterXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_PivotFilterXpgList* FilterXpgList = {read=FFilterXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RowHierarchiesUsage : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_HierarchyUsageXpgList* FRowHierarchyUsageXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_RowHierarchiesUsage(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_RowHierarchiesUsage();
	void __fastcall Clear();
	void __fastcall Assign(TCT_RowHierarchiesUsage* AItem);
	void __fastcall CopyTo(TCT_RowHierarchiesUsage* AItem);
	TCT_HierarchyUsageXpgList* __fastcall Create_RowHierarchyUsageXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_HierarchyUsageXpgList* RowHierarchyUsageXpgList = {read=FRowHierarchyUsageXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ColHierarchiesUsage : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_HierarchyUsageXpgList* FColHierarchyUsageXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ColHierarchiesUsage(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ColHierarchiesUsage();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ColHierarchiesUsage* AItem);
	void __fastcall CopyTo(TCT_ColHierarchiesUsage* AItem);
	TCT_HierarchyUsageXpgList* __fastcall Create_ColHierarchyUsageXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_HierarchyUsageXpgList* ColHierarchyUsageXpgList = {read=FColHierarchyUsageXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CacheSource : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_SourceType FType;
	int FConnectionId;
	TCT_WorksheetSource* FWorksheetSource;
	TCT_Consolidation* FConsolidation;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_CacheSource(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CacheSource();
	void __fastcall Clear();
	void __fastcall Assign(TCT_CacheSource* AItem);
	void __fastcall CopyTo(TCT_CacheSource* AItem);
	TCT_WorksheetSource* __fastcall Create_WorksheetSource();
	TCT_Consolidation* __fastcall Create_Consolidation();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TST_SourceType Type_ = {read=FType, write=FType, nodefault};
	__property int ConnectionId = {read=FConnectionId, write=FConnectionId, nodefault};
	__property TCT_WorksheetSource* WorksheetSource = {read=FWorksheetSource};
	__property TCT_Consolidation* Consolidation = {read=FConsolidation};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CacheFields : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	TCT_CacheField* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCT_CacheField* __fastcall GetItems(int Index);
	
protected:
	System::Contnrs::TObjectList* FItems;
	
public:
	__fastcall TCT_CacheFields(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CacheFields();
	void __fastcall Clear();
	TCT_CacheField* __fastcall Add();
	int __fastcall Count();
	bool __fastcall Valid();
	TCT_CacheField* __fastcall Find(System::UnicodeString AName);
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	void __fastcall Assign(TCT_CacheFields* AItem);
	void __fastcall CopyTo(TCT_CacheFields* AItem);
	__property TCT_CacheField* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CacheHierarchies : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_CacheHierarchyXpgList* FCacheHierarchyXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_CacheHierarchies(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CacheHierarchies();
	void __fastcall Clear();
	void __fastcall Assign(TCT_CacheHierarchies* AItem);
	void __fastcall CopyTo(TCT_CacheHierarchies* AItem);
	TCT_CacheHierarchyXpgList* __fastcall Create_CacheHierarchyXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_CacheHierarchyXpgList* CacheHierarchyXpgList = {read=FCacheHierarchyXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PCDKPIs : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_PCDKPIXpgList* FKpiXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PCDKPIs(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PCDKPIs();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PCDKPIs* AItem);
	void __fastcall CopyTo(TCT_PCDKPIs* AItem);
	TCT_PCDKPIXpgList* __fastcall Create_KpiXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_PCDKPIXpgList* KpiXpgList = {read=FKpiXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TupleCache : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_PCDSDTCEntries* FEntries;
	TCT_Sets* FSets;
	TCT_QueryCache* FQueryCache;
	TCT_ServerFormats* FServerFormats;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_TupleCache(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TupleCache();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TupleCache* AItem);
	void __fastcall CopyTo(TCT_TupleCache* AItem);
	TCT_PCDSDTCEntries* __fastcall Create_Entries();
	TCT_Sets* __fastcall Create_Sets();
	TCT_QueryCache* __fastcall Create_QueryCache();
	TCT_ServerFormats* __fastcall Create_ServerFormats();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property TCT_PCDSDTCEntries* Entries = {read=FEntries};
	__property TCT_Sets* Sets = {read=FSets};
	__property TCT_QueryCache* QueryCache = {read=FQueryCache};
	__property TCT_ServerFormats* ServerFormats = {read=FServerFormats};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CalculatedItems : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_CalculatedItemXpgList* FCalculatedItemXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_CalculatedItems(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CalculatedItems();
	void __fastcall Clear();
	void __fastcall Assign(TCT_CalculatedItems* AItem);
	void __fastcall CopyTo(TCT_CalculatedItems* AItem);
	TCT_CalculatedItemXpgList* __fastcall Create_CalculatedItemXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_CalculatedItemXpgList* CalculatedItemXpgList = {read=FCalculatedItemXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CalculatedMembers : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_CalculatedMemberXpgList* FCalculatedMemberXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_CalculatedMembers(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CalculatedMembers();
	void __fastcall Clear();
	void __fastcall Assign(TCT_CalculatedMembers* AItem);
	void __fastcall CopyTo(TCT_CalculatedMembers* AItem);
	TCT_CalculatedMemberXpgList* __fastcall Create_CalculatedMemberXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_CalculatedMemberXpgList* CalculatedMemberXpgList = {read=FCalculatedMemberXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Dimensions : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_PivotDimensionXpgList* FDimensionXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Dimensions(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Dimensions();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Dimensions* AItem);
	void __fastcall CopyTo(TCT_Dimensions* AItem);
	TCT_PivotDimensionXpgList* __fastcall Create_DimensionXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_PivotDimensionXpgList* DimensionXpgList = {read=FDimensionXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_MeasureGroups : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_MeasureGroupXpgList* FMeasureGroupXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_MeasureGroups(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_MeasureGroups();
	void __fastcall Clear();
	void __fastcall Assign(TCT_MeasureGroups* AItem);
	void __fastcall CopyTo(TCT_MeasureGroups* AItem);
	TCT_MeasureGroupXpgList* __fastcall Create_MeasureGroupXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_MeasureGroupXpgList* MeasureGroupXpgList = {read=FMeasureGroupXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_MeasureDimensionMaps : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_MeasureDimensionMapXpgList* FMapXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_MeasureDimensionMaps(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_MeasureDimensionMaps();
	void __fastcall Clear();
	void __fastcall Assign(TCT_MeasureDimensionMaps* AItem);
	void __fastcall CopyTo(TCT_MeasureDimensionMaps* AItem);
	TCT_MeasureDimensionMapXpgList* __fastcall Create_MapXpgList();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_MeasureDimensionMapXpgList* MapXpgList = {read=FMapXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotCacheRecords : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	Xpgplists::TStringXpgList* FRootAttributes;
	int FCount;
	TCT_RecordXpgList* FRXpgList;
	TCT_ExtensionList* FExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PivotCacheRecords(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotCacheRecords();
	void __fastcall Clear();
	void __fastcall LoadFromStream(System::Classes::TStream* AStream);
	void __fastcall Assign(TCT_PivotCacheRecords* AItem);
	void __fastcall CopyTo(TCT_PivotCacheRecords* AItem);
	TCT_RecordXpgList* __fastcall Create_RXpgList();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_RecordXpgList* RXpgList = {read=FRXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_pivotTableDefinition : public TXPGBase
{
	typedef TXPGBase inherited;
	
private:
	Xlsshareditems5::TXLSSharedItemsValue* __fastcall GetColItemValue(int Index);
	
protected:
	System::UnicodeString FName;
	int FCacheId;
	bool FDataOnRows;
	int FDataPosition;
	System::UnicodeString FDataCaption;
	System::UnicodeString FGrandTotalCaption;
	System::UnicodeString FErrorCaption;
	bool FShowError;
	System::UnicodeString FMissingCaption;
	bool FShowMissing;
	System::UnicodeString FPageStyle;
	System::UnicodeString FPivotTableStyle;
	System::UnicodeString FVacatedStyle;
	System::UnicodeString FTag;
	int FUpdatedVersion;
	int FMinRefreshableVersion;
	bool FAsteriskTotals;
	bool FShowItems;
	bool FEditData;
	bool FDisableFieldList;
	bool FShowCalcMbrs;
	bool FVisualTotals;
	bool FShowMultipleLabel;
	bool FShowDataDropDown;
	bool FShowDrill;
	bool FPrintDrill;
	bool FShowMemberPropertyTips;
	bool FShowDataTips;
	bool FEnableWizard;
	bool FEnableDrill;
	bool FEnableFieldProperties;
	bool FPreserveFormatting;
	bool FUseAutoFormatting;
	int FPageWrap;
	bool FPageOverThenDown;
	bool FSubtotalHiddenItems;
	bool FRowGrandTotals;
	bool FColGrandTotals;
	bool FFieldPrintTitles;
	bool FItemPrintTitles;
	bool FMergeItem;
	bool FShowDropZones;
	int FCreatedVersion;
	int FIndent;
	bool FShowEmptyRow;
	bool FShowEmptyCol;
	bool FShowHeaders;
	bool FCompact;
	bool FOutline;
	bool FOutlineData;
	bool FCompactData;
	bool FPublished;
	bool FGridDropZones;
	bool FImmersive;
	bool FMultipleFieldFilters;
	int FChartFormat;
	System::UnicodeString FRowHeaderCaption;
	System::UnicodeString FColHeaderCaption;
	bool FFieldListSortAscending;
	bool FMdxSubqueries;
	bool FCustomListSort;
	TCT_Location* FLocation;
	TCT_PivotFields* FPivotFields;
	TCT_RowColFields* FRowFields;
	TCT_RowColItems* FRowItems;
	TCT_RowColFields* FColFields;
	TCT_RowColItems* FColItems;
	TCT_PageFields* FPageFields;
	TCT_DataFields* FDataFields;
	TCT_Formats* FFormats;
	TCT_ConditionalFormats* FConditionalFormats;
	TCT_ChartFormats* FChartFormats;
	TCT_PivotHierarchies* FPivotHierarchies;
	TCT_PivotTableStyle* FPivotTableStyleInfo;
	TCT_PivotFilters* FFilters;
	TCT_RowHierarchiesUsage* FRowHierarchiesUsage;
	TCT_ColHierarchiesUsage* FColHierarchiesUsage;
	TCT_ExtensionList* FExtLst;
	Xpgplists::TStringXpgList* FRootAttributes;
	TCT_pivotCacheDefinition* FCache;
	System::TObject* F_OPC;
	Xlsshareditems5::TXLSSharedItemsValue* __fastcall GetRowItemValue(int Index);
	
public:
	__fastcall TCT_pivotTableDefinition(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_pivotTableDefinition();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	void __fastcall Assign(TCT_pivotTableDefinition* AItem);
	void __fastcall CopyTo(TCT_pivotTableDefinition* AItem);
	TCT_Location* __fastcall Create_Location();
	TCT_PivotFields* __fastcall Create_PivotFields();
	TCT_RowColFields* __fastcall Create_RowFields();
	TCT_RowColItems* __fastcall Create_RowItems();
	TCT_RowColFields* __fastcall Create_ColFields();
	TCT_RowColItems* __fastcall Create_ColItems();
	TCT_PageFields* __fastcall Create_PageFields();
	TCT_DataFields* __fastcall Create_DataFields();
	TCT_Formats* __fastcall Create_Formats();
	TCT_ConditionalFormats* __fastcall Create_ConditionalFormats();
	TCT_ChartFormats* __fastcall Create_ChartFormats();
	TCT_PivotHierarchies* __fastcall Create_PivotHierarchies();
	TCT_PivotTableStyle* __fastcall Create_PivotTableStyleInfo();
	TCT_PivotFilters* __fastcall Create_Filters();
	TCT_RowHierarchiesUsage* __fastcall Create_RowHierarchiesUsage();
	TCT_ColHierarchiesUsage* __fastcall Create_ColHierarchiesUsage();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	void __fastcall Delete_ColFields();
	void __fastcall Delete_ColItems();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property int CacheId = {read=FCacheId, write=FCacheId, nodefault};
	__property bool DataOnRows = {read=FDataOnRows, write=FDataOnRows, nodefault};
	__property int DataPosition = {read=FDataPosition, write=FDataPosition, nodefault};
	__property System::UnicodeString DataCaption = {read=FDataCaption, write=FDataCaption};
	__property System::UnicodeString GrandTotalCaption = {read=FGrandTotalCaption, write=FGrandTotalCaption};
	__property System::UnicodeString ErrorCaption = {read=FErrorCaption, write=FErrorCaption};
	__property bool ShowError = {read=FShowError, write=FShowError, nodefault};
	__property System::UnicodeString MissingCaption = {read=FMissingCaption, write=FMissingCaption};
	__property bool ShowMissing = {read=FShowMissing, write=FShowMissing, nodefault};
	__property System::UnicodeString PageStyle = {read=FPageStyle, write=FPageStyle};
	__property System::UnicodeString PivotTableStyle = {read=FPivotTableStyle, write=FPivotTableStyle};
	__property System::UnicodeString VacatedStyle = {read=FVacatedStyle, write=FVacatedStyle};
	__property System::UnicodeString Tag = {read=FTag, write=FTag};
	__property int UpdatedVersion = {read=FUpdatedVersion, write=FUpdatedVersion, nodefault};
	__property int MinRefreshableVersion = {read=FMinRefreshableVersion, write=FMinRefreshableVersion, nodefault};
	__property bool AsteriskTotals = {read=FAsteriskTotals, write=FAsteriskTotals, nodefault};
	__property bool ShowItems = {read=FShowItems, write=FShowItems, nodefault};
	__property bool EditData = {read=FEditData, write=FEditData, nodefault};
	__property bool DisableFieldList = {read=FDisableFieldList, write=FDisableFieldList, nodefault};
	__property bool ShowCalcMbrs = {read=FShowCalcMbrs, write=FShowCalcMbrs, nodefault};
	__property bool VisualTotals = {read=FVisualTotals, write=FVisualTotals, nodefault};
	__property bool ShowMultipleLabel = {read=FShowMultipleLabel, write=FShowMultipleLabel, nodefault};
	__property bool ShowDataDropDown = {read=FShowDataDropDown, write=FShowDataDropDown, nodefault};
	__property bool ShowDrill = {read=FShowDrill, write=FShowDrill, nodefault};
	__property bool PrintDrill = {read=FPrintDrill, write=FPrintDrill, nodefault};
	__property bool ShowMemberPropertyTips = {read=FShowMemberPropertyTips, write=FShowMemberPropertyTips, nodefault};
	__property bool ShowDataTips = {read=FShowDataTips, write=FShowDataTips, nodefault};
	__property bool EnableWizard = {read=FEnableWizard, write=FEnableWizard, nodefault};
	__property bool EnableDrill = {read=FEnableDrill, write=FEnableDrill, nodefault};
	__property bool EnableFieldProperties = {read=FEnableFieldProperties, write=FEnableFieldProperties, nodefault};
	__property bool PreserveFormatting = {read=FPreserveFormatting, write=FPreserveFormatting, nodefault};
	__property bool UseAutoFormatting = {read=FUseAutoFormatting, write=FUseAutoFormatting, nodefault};
	__property int PageWrap = {read=FPageWrap, write=FPageWrap, nodefault};
	__property bool PageOverThenDown = {read=FPageOverThenDown, write=FPageOverThenDown, nodefault};
	__property bool SubtotalHiddenItems = {read=FSubtotalHiddenItems, write=FSubtotalHiddenItems, nodefault};
	__property bool RowGrandTotals = {read=FRowGrandTotals, write=FRowGrandTotals, nodefault};
	__property bool ColGrandTotals = {read=FColGrandTotals, write=FColGrandTotals, nodefault};
	__property bool FieldPrintTitles = {read=FFieldPrintTitles, write=FFieldPrintTitles, nodefault};
	__property bool ItemPrintTitles = {read=FItemPrintTitles, write=FItemPrintTitles, nodefault};
	__property bool MergeItem = {read=FMergeItem, write=FMergeItem, nodefault};
	__property bool ShowDropZones = {read=FShowDropZones, write=FShowDropZones, nodefault};
	__property int CreatedVersion = {read=FCreatedVersion, write=FCreatedVersion, nodefault};
	__property int Indent = {read=FIndent, write=FIndent, nodefault};
	__property bool ShowEmptyRow = {read=FShowEmptyRow, write=FShowEmptyRow, nodefault};
	__property bool ShowEmptyCol = {read=FShowEmptyCol, write=FShowEmptyCol, nodefault};
	__property bool ShowHeaders = {read=FShowHeaders, write=FShowHeaders, nodefault};
	__property bool Compact = {read=FCompact, write=FCompact, nodefault};
	__property bool Outline = {read=FOutline, write=FOutline, nodefault};
	__property bool OutlineData = {read=FOutlineData, write=FOutlineData, nodefault};
	__property bool CompactData = {read=FCompactData, write=FCompactData, nodefault};
	__property bool Published_ = {read=FPublished, write=FPublished, nodefault};
	__property bool GridDropZones = {read=FGridDropZones, write=FGridDropZones, nodefault};
	__property bool Immersive = {read=FImmersive, write=FImmersive, nodefault};
	__property bool MultipleFieldFilters = {read=FMultipleFieldFilters, write=FMultipleFieldFilters, nodefault};
	__property int ChartFormat = {read=FChartFormat, write=FChartFormat, nodefault};
	__property System::UnicodeString RowHeaderCaption = {read=FRowHeaderCaption, write=FRowHeaderCaption};
	__property System::UnicodeString ColHeaderCaption = {read=FColHeaderCaption, write=FColHeaderCaption};
	__property bool FieldListSortAscending = {read=FFieldListSortAscending, write=FFieldListSortAscending, nodefault};
	__property bool MdxSubqueries = {read=FMdxSubqueries, write=FMdxSubqueries, nodefault};
	__property bool CustomListSort = {read=FCustomListSort, write=FCustomListSort, nodefault};
	__property TCT_Location* Location = {read=FLocation};
	__property TCT_PivotFields* PivotFields = {read=FPivotFields};
	__property TCT_RowColFields* RowFields = {read=FRowFields};
	__property TCT_RowColItems* RowItems = {read=FRowItems};
	__property TCT_RowColFields* ColFields = {read=FColFields};
	__property TCT_RowColItems* ColItems = {read=FColItems};
	__property TCT_PageFields* PageFields = {read=FPageFields};
	__property TCT_DataFields* DataFields = {read=FDataFields};
	__property TCT_Formats* Formats = {read=FFormats};
	__property TCT_ConditionalFormats* ConditionalFormats = {read=FConditionalFormats};
	__property TCT_ChartFormats* ChartFormats = {read=FChartFormats};
	__property TCT_PivotHierarchies* PivotHierarchies = {read=FPivotHierarchies};
	__property TCT_PivotTableStyle* PivotTableStyleInfo = {read=FPivotTableStyleInfo};
	__property TCT_PivotFilters* Filters = {read=FFilters};
	__property TCT_RowHierarchiesUsage* RowHierarchiesUsage = {read=FRowHierarchiesUsage};
	__property TCT_ColHierarchiesUsage* ColHierarchiesUsage = {read=FColHierarchiesUsage};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
	__property TCT_pivotCacheDefinition* Cache = {read=FCache, write=FCache};
	__property System::TObject* _OPC = {read=F_OPC, write=F_OPC};
	__property Xlsshareditems5::TXLSSharedItemsValue* RowItemValue[int Index] = {read=GetRowItemValue};
	__property Xlsshareditems5::TXLSSharedItemsValue* ColItemValue[int Index] = {read=GetColItemValue};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_pivotTableDefinitions : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	TCT_pivotTableDefinition* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCT_pivotTableDefinition* __fastcall GetItems(int Index);
	
protected:
	Xpgparserxlsx::TXPGDocBase* FOwner;
	System::Contnrs::TObjectList* FItems;
	
public:
	__fastcall TCT_pivotTableDefinitions();
	__fastcall virtual ~TCT_pivotTableDefinitions();
	TCT_pivotTableDefinition* __fastcall LoadFromStream(System::Classes::TStream* AStream);
	void __fastcall SaveToStream(System::Classes::TStream* AStream, int AIndex, System::TObject* AOPC);
	TCT_pivotTableDefinition* __fastcall Add();
	int __fastcall Count();
	TCT_pivotTableDefinition* __fastcall FindByCache(TCT_pivotCacheDefinition* ACache);
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	void __fastcall Clear();
	__property TCT_pivotTableDefinition* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_pivotCacheDefinition : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FR_Id;
	bool FInvalid;
	bool FSaveData;
	bool FRefreshOnLoad;
	bool FOptimizeMemory;
	bool FEnableRefresh;
	System::UnicodeString FRefreshedBy;
	double FRefreshedDate;
	bool FBackgroundQuery;
	int FMissingItemsLimit;
	int FCreatedVersion;
	int FRefreshedVersion;
	int FMinRefreshableVersion;
	int FRecordCount;
	bool FUpgradeOnRefresh;
	bool FTupleCache;
	bool FSupportSubquery;
	bool FSupportAdvancedDrill;
	TCT_CacheSource* FCacheSource;
	TCT_CacheFields* FCacheFields;
	TCT_CacheHierarchies* FCacheHierarchies;
	TCT_PCDKPIs* FKpis;
	TCT_TupleCache* FTupleCache_Dup;
	TCT_CalculatedItems* FCalculatedItems;
	TCT_CalculatedMembers* FCalculatedMembers;
	TCT_Dimensions* FDimensions;
	TCT_MeasureGroups* FMeasureGroups;
	TCT_MeasureDimensionMaps* FMaps;
	TCT_ExtensionList* FExtLst;
	Xpgplists::TStringXpgList* FRootAttributes;
	int FUsageCount;
	int FCacheId;
	TCT_PivotCacheRecords* FRecords;
	
public:
	__fastcall TCT_pivotCacheDefinition(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_pivotCacheDefinition();
	void __fastcall Clear();
	bool __fastcall AddFields(Xlsrelcells5::TXLSRelCells* ARef);
	void __fastcall CacheValues(int ACol)/* overload */;
	void __fastcall CacheValues()/* overload */;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	void __fastcall Use();
	void __fastcall Release();
	void __fastcall Assign(TCT_pivotCacheDefinition* AItem);
	void __fastcall CopyTo(TCT_pivotCacheDefinition* AItem);
	TCT_CacheSource* __fastcall Create_CacheSource();
	TCT_CacheFields* __fastcall Create_CacheFields();
	TCT_CacheHierarchies* __fastcall Create_CacheHierarchies();
	TCT_PCDKPIs* __fastcall Create_Kpis();
	TCT_TupleCache* __fastcall Create_TupleCache_Dup();
	TCT_CalculatedItems* __fastcall Create_CalculatedItems();
	TCT_CalculatedMembers* __fastcall Create_CalculatedMembers();
	TCT_Dimensions* __fastcall Create_Dimensions();
	TCT_MeasureGroups* __fastcall Create_MeasureGroups();
	TCT_MeasureDimensionMaps* __fastcall Create_Maps();
	TCT_ExtensionList* __fastcall Create_ExtLst();
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
	__property bool Invalid = {read=FInvalid, write=FInvalid, nodefault};
	__property bool SaveData = {read=FSaveData, write=FSaveData, nodefault};
	__property bool RefreshOnLoad = {read=FRefreshOnLoad, write=FRefreshOnLoad, nodefault};
	__property bool OptimizeMemory = {read=FOptimizeMemory, write=FOptimizeMemory, nodefault};
	__property bool EnableRefresh = {read=FEnableRefresh, write=FEnableRefresh, nodefault};
	__property System::UnicodeString RefreshedBy = {read=FRefreshedBy, write=FRefreshedBy};
	__property double RefreshedDate = {read=FRefreshedDate, write=FRefreshedDate};
	__property bool BackgroundQuery = {read=FBackgroundQuery, write=FBackgroundQuery, nodefault};
	__property int MissingItemsLimit = {read=FMissingItemsLimit, write=FMissingItemsLimit, nodefault};
	__property int CreatedVersion = {read=FCreatedVersion, write=FCreatedVersion, nodefault};
	__property int RefreshedVersion = {read=FRefreshedVersion, write=FRefreshedVersion, nodefault};
	__property int MinRefreshableVersion = {read=FMinRefreshableVersion, write=FMinRefreshableVersion, nodefault};
	__property int RecordCount = {read=FRecordCount, write=FRecordCount, nodefault};
	__property bool UpgradeOnRefresh = {read=FUpgradeOnRefresh, write=FUpgradeOnRefresh, nodefault};
	__property bool TupleCache = {read=FTupleCache, write=FTupleCache, nodefault};
	__property bool SupportSubquery = {read=FSupportSubquery, write=FSupportSubquery, nodefault};
	__property bool SupportAdvancedDrill = {read=FSupportAdvancedDrill, write=FSupportAdvancedDrill, nodefault};
	__property TCT_CacheSource* CacheSource = {read=FCacheSource};
	__property TCT_CacheFields* CacheFields = {read=FCacheFields};
	__property TCT_CacheHierarchies* CacheHierarchies = {read=FCacheHierarchies};
	__property TCT_PCDKPIs* Kpis = {read=FKpis};
	__property TCT_TupleCache* TupleCache_Dup = {read=FTupleCache_Dup};
	__property TCT_CalculatedItems* CalculatedItems = {read=FCalculatedItems};
	__property TCT_CalculatedMembers* CalculatedMembers = {read=FCalculatedMembers};
	__property TCT_Dimensions* Dimensions = {read=FDimensions};
	__property TCT_MeasureGroups* MeasureGroups = {read=FMeasureGroups};
	__property TCT_MeasureDimensionMaps* Maps = {read=FMaps};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
	__property int CacheId = {read=FCacheId, write=FCacheId, nodefault};
	__property TCT_PivotCacheRecords* Records = {read=FRecords};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotCacheDefinitions : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	TCT_pivotCacheDefinition* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCT_pivotCacheDefinition* __fastcall GetItems(int Index);
	
protected:
	Xpgparserxlsx::TXPGDocBase* FOwner;
	System::Contnrs::TObjectList* FItems;
	
public:
	__fastcall TCT_PivotCacheDefinitions();
	__fastcall virtual ~TCT_PivotCacheDefinitions();
	TCT_pivotCacheDefinition* __fastcall LoadFromStream(System::Classes::TStream* AStream);
	void __fastcall SaveToStream(System::Classes::TStream* AStream, int AIndex);
	void __fastcall RecordsSaveToStream(System::Classes::TStream* AStream, int AIndex);
	TCT_pivotCacheDefinition* __fastcall Add();
	int __fastcall Count();
	TCT_pivotCacheDefinition* __fastcall Find(const int ACacheId)/* overload */;
	void __fastcall Enumerate();
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	void __fastcall Clear();
	__property TCT_pivotCacheDefinition* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION T__ROOT__ : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	Xpgplists::TStringXpgList* FRootAttributes;
	System::TClass FCurrWriteClass;
	TCT_PivotCacheRecords* FPivotCacheRecords;
	TCT_pivotTableDefinition* FPivotTableDefinition;
	TCT_pivotCacheDefinition* FPivotCacheDefinition;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall T__ROOT__(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~T__ROOT__();
	void __fastcall Clear();
	void __fastcall Assign(T__ROOT__* AItem);
	void __fastcall CopyTo(T__ROOT__* AItem);
	TCT_PivotCacheRecords* __fastcall Create_PivotCacheRecords();
	TCT_pivotTableDefinition* __fastcall Create_PivotTableDefinition();
	TCT_pivotCacheDefinition* __fastcall Create_PivotCacheDefinition();
	__property Xpgplists::TStringXpgList* RootAttributes = {read=FRootAttributes};
	__property TCT_PivotCacheRecords* PivotCacheRecords = {read=FPivotCacheRecords};
	__property TCT_pivotTableDefinition* PivotTableDefinition = {read=FPivotTableDefinition};
	__property TCT_pivotCacheDefinition* PivotCacheDefinition = {read=FPivotCacheDefinition};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_XStringElement : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FV;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_XStringElement(Xpgparserxlsx::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_XStringElement();
	void __fastcall Clear();
	void __fastcall Assign(TCT_XStringElement* AItem);
	void __fastcall CopyTo(TCT_XStringElement* AItem);
	__property System::UnicodeString V = {read=FV, write=FV};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXPGPivotTable : public Xpgparserxlsx::TXPGDocBase
{
	typedef Xpgparserxlsx::TXPGDocBase inherited;
	
protected:
	T__ROOT__* FRoot;
	TXPGReader* FReader;
	Xpgpxml::TXpgWriteXML* FWriter;
	TCT_PivotCacheRecords* __fastcall GetPivotCacheRecords();
	TCT_pivotTableDefinition* __fastcall GetPivotTableDefinition();
	TCT_pivotCacheDefinition* __fastcall GetPivotCacheDefinition();
	
public:
	__fastcall TXPGPivotTable();
	__fastcall virtual ~TXPGPivotTable();
	void __fastcall LoadFromFile(System::UnicodeString AFilename);
	void __fastcall LoadFromStream(System::Classes::TStream* AStream);
	void __fastcall SaveToFile(System::UnicodeString AFilename, System::TClass AClassToWrite);
	void __fastcall SaveToStream(System::Classes::TStream* AStream);
	__property T__ROOT__* Root = {read=FRoot};
	__property TCT_PivotCacheRecords* PivotCacheRecords = {read=GetPivotCacheRecords};
	__property TCT_pivotTableDefinition* PivotTableDefinition = {read=GetPivotTableDefinition};
	__property TCT_pivotCacheDefinition* PivotCacheDefinition = {read=GetPivotCacheDefinition};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Xpgparserpivot__1 StrTST_Axis_1;
extern DELPHI_PACKAGE Xpgparserpivot__2 StrTST_PivotAreaType_1;
extern DELPHI_PACKAGE Xpgparserpivot__3 StrTST_Type;
extern DELPHI_PACKAGE Xpgparserpivot__4 StrTST_FieldSortType;
extern DELPHI_PACKAGE Xpgparserpivot__5 StrTST_GroupBy;
extern DELPHI_PACKAGE Xpgparserpivot__6 StrTST_SortType;
extern DELPHI_PACKAGE Xpgparserpivot__7 StrTST_ShowDataAs;
extern DELPHI_PACKAGE Xpgparserpivot__8 StrTST_ItemType;
extern DELPHI_PACKAGE Xpgparserpivot__9 StrTST_Scope;
extern DELPHI_PACKAGE Xpgparserpivot__01 StrTST_PivotFilterType;
extern DELPHI_PACKAGE Xpgparserpivot__11 StrTST_SourceType;
extern DELPHI_PACKAGE Xpgparserpivot__21 StrTST_FormatAction;
}	/* namespace Xpgparserpivot */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XPGPARSERPIVOT)
using namespace Xpgparserpivot;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XpgparserpivotHPP
