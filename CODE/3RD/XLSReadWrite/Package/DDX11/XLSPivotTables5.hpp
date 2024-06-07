// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSPivotTables5.pas' rev: 35.00 (Windows)

#ifndef Xlspivottables5HPP
#define Xlspivottables5HPP

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
#include <System.IniFiles.hpp>
#include <xpgParserPivot.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Manager5.hpp>
#include <Xc12DataWorksheet5.hpp>
#include <XLSUtils5.hpp>
#include <XLSSharedItems5.hpp>
#include <XLSRelCells5.hpp>
#include <XLSCmdFormatValues5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlspivottables5
{
//-- forward type declarations -----------------------------------------------
struct TXLSPivotResultCell;
struct TXLSPivotCompare;
class DELPHICLASS TXLSPivotTableResult;
class DELPHICLASS TXLSPivotField;
class DELPHICLASS TXLSPivotFields;
class DELPHICLASS TXLSPivotFieldsDest;
class DELPHICLASS TXLSPivotRCItem;
class DELPHICLASS TXLSPivotTable;
class DELPHICLASS TXLSPivotTables;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXLSPivotFunc : unsigned char { xpfSum, xpfCount, xpfAverage, xpfMax, xpfMin, xpfProduct, xpfCountNumbers, xpfStdDev, xpfStdDevp, xpfVar, xpfVarp, xpfDefault, xpfNone };

typedef System::StaticArray<System::UnicodeString, 13> Xlspivottables5__1;

enum DECLSPEC_DENUM TXLSPivotResultCellType : unsigned char { xprctValue, xprctSumCol, xprctSumRow, xprctTotal };

struct DECLSPEC_DRECORD TXLSPivotResultCell
{
public:
	double Value;
	TXLSPivotResultCellType CellType;
	int Level;
};


struct DECLSPEC_DRECORD TXLSPivotCompare
{
public:
	Xlsshareditems5::TXLSSharedItemsValue* Value;
	int X;
};


typedef System::DynamicArray<TXLSPivotCompare> TXLSPivotCondition;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSPivotTableResult : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TXLSPivotResultCell> _TXLSPivotTableResult__1;
	
	typedef System::DynamicArray<System::DynamicArray<TXLSPivotResultCell> > _TXLSPivotTableResult__2;
	
	typedef System::DynamicArray<double> _TXLSPivotTableResult__3;
	
	
private:
	double __fastcall GetCells(int ACol, int ARow);
	void __fastcall SetCells(int ACol, int ARow, const double Value);
	
protected:
	_TXLSPivotTableResult__2 FCells;
	_TXLSPivotTableResult__3 FVals;
	int FValsCount;
	int FColCount;
	int FRowCount;
	
public:
	__fastcall TXLSPivotTableResult();
	void __fastcall Clear();
	void __fastcall ClearValues();
	void __fastcall Resize(int AColCount, int ARowCount);
	void __fastcall Val(int ACol, int ARow, double AValue);
	void __fastcall BeginCollect();
	void __fastcall Collect(double AVal);
	void __fastcall Calc(TXLSPivotFunc AFunc, int ACol, int ARow, double AValue);
	void __fastcall CopyTo(int ACol, int ARow, int AColor, Xlsrelcells5::TXLSRelCells* ARef);
	void __fastcall ColTotal(int ARow);
	void __fastcall RowSum(int ACol);
	void __fastcall SumCells(int AMaxRowLevel, bool AColGrandTotals, bool ARowGrandTotals);
	__property int ColCount = {read=FColCount, nodefault};
	__property int RowCount = {read=FRowCount, nodefault};
	__property double Cells[int ACol][int ARow] = {read=GetCells, write=SetCells/*, default*/};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSPivotTableResult() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSPivotField : public Xlsutils5::TIndexObject
{
	typedef Xlsutils5::TIndexObject inherited;
	
private:
	System::UnicodeString __fastcall GetName();
	TXLSPivotFunc __fastcall GetFunction();
	void __fastcall SetFunction(const TXLSPivotFunc Value);
	System::UnicodeString __fastcall GetFunctionName();
	System::UnicodeString __fastcall GetUserName();
	void __fastcall SetUserName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetDisplayName();
	
protected:
	Xpgparserpivot::TCT_CacheField* FCacheField;
	Xpgparserpivot::TCT_PivotField* FPivFld;
	Xlsshareditems5::TXLSUniqueSharedItemsValues* FFilter;
	
public:
	__fastcall TXLSPivotField();
	__fastcall virtual ~TXLSPivotField();
	void __fastcall Sort();
	__property System::UnicodeString Name = {read=GetName};
	__property System::UnicodeString UserName = {read=GetUserName, write=SetUserName};
	__property System::UnicodeString DisplayName = {read=GetDisplayName};
	__property TXLSPivotFunc Func = {read=GetFunction, write=SetFunction, nodefault};
	__property System::UnicodeString FuncName = {read=GetFunctionName};
	__property Xpgparserpivot::TCT_CacheField* CacheField = {read=FCacheField};
	__property Xlsshareditems5::TXLSUniqueSharedItemsValues* Filter = {read=FFilter};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSPivotFields : public Xlsutils5::TIndexObjectList
{
	typedef Xlsutils5::TIndexObjectList inherited;
	
public:
	TXLSPivotField* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSPivotField* __fastcall GetItems(int Index);
	
public:
	__fastcall TXLSPivotFields();
	HIDESBASE TXLSPivotField* __fastcall Add()/* overload */;
	TXLSPivotField* __fastcall Find(System::UnicodeString AName)/* overload */;
	int __fastcall Find(TXLSPivotField* AField)/* overload */;
	__property TXLSPivotField* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXLSPivotFields() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSPivotFieldsDest : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSPivotField* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSPivotField* __fastcall GetItems(int Index);
	
public:
	__fastcall TXLSPivotFieldsDest();
	HIDESBASE void __fastcall Add(TXLSPivotField* AField)/* overload */;
	int __fastcall Find(TXLSPivotField* AField)/* overload */;
	int __fastcall Find(System::UnicodeString AName)/* overload */;
	HIDESBASE bool __fastcall Remove(TXLSPivotField* AField)/* overload */;
	HIDESBASE bool __fastcall Remove(System::UnicodeString AName)/* overload */;
	__property TXLSPivotField* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXLSPivotFieldsDest() { }
	
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Remove(System::TObject* AObject){ return System::Contnrs::TObjectList::Remove(AObject); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSPivotRCItem : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TXLSPivotRCItem* operator[](int Index) { return this->Items[Index]; }
	
protected:
	TXLSPivotRCItem* FParent;
	Xlsshareditems5::TXLSSharedItemsValue* FValue;
	int FCacheX;
	bool FExpanded;
	System::Inifiles::THashedStringList* FChilds;
	TXLSPivotRCItem* __fastcall GetItems(int Index);
	void __fastcall DoMaxLevel(int &ALevel, int &AMaxLevel);
	
public:
	__fastcall TXLSPivotRCItem(TXLSPivotRCItem* AParent, Xlsshareditems5::TXLSSharedItemsValue* AValue, int ACacheX);
	__fastcall virtual ~TXLSPivotRCItem();
	void __fastcall Clear();
	void __fastcall Sort();
	int __fastcall Count();
	int __fastcall TotalCount();
	int __fastcall MaxLevelCount();
	int __fastcall MaxLevel();
	TXLSPivotRCItem* __fastcall Add(Xlsshareditems5::TXLSSharedItemsValue* AValue, int ACacheX);
	TXLSPivotRCItem* __fastcall Find(System::UnicodeString AValue);
	__property TXLSPivotRCItem* Parent = {read=FParent};
	__property int CacheX = {read=FCacheX, nodefault};
	__property Xlsshareditems5::TXLSSharedItemsValue* Value = {read=FValue};
	__property TXLSPivotRCItem* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSPivotTable : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool __fastcall GetColsTotals();
	bool __fastcall GetRowsTotals();
	void __fastcall SetColsTotals(const bool Value);
	void __fastcall SetRowsTotals(const bool Value);
	System::UnicodeString __fastcall GetName();
	void __fastcall SetName(const System::UnicodeString Value);
	
protected:
	Xpgparserpivot::TCT_pivotTableDefinition* FTableDef;
	TXLSPivotFields* FFields;
	TXLSPivotFieldsDest* FReportFilter;
	TXLSPivotFieldsDest* FColumnLabels;
	TXLSPivotFieldsDest* FRowLabels;
	TXLSPivotFieldsDest* FDataValues;
	Xlsrelcells5::TXLSRelCells* FSrcRef;
	Xlsrelcells5::TXLSRelCells* FDestRef;
	TXLSPivotRCItem* FRows;
	TXLSPivotRCItem* FCols;
	System::Classes::TList* FSubCols;
	bool FCalcRowGrand;
	int FMaxRowLevel;
	int FMaxColLevel;
	TXLSPivotTableResult* FPivResult;
	int FColorCols;
	int FColorSubs;
	bool FFixupEdit;
	bool FDirty;
	void __fastcall CheckUsed();
	void __fastcall DoFields();
	void __fastcall DoRowFields();
	void __fastcall DoColFields();
	void __fastcall DoDataValues();
	void __fastcall DoRowColItems(int ARow, int AIndex, TXLSPivotFieldsDest* ALabels, TXLSPivotRCItem* ARCItem, int &AMaxLevel)/* overload */;
	void __fastcall DoColValues(int &AR, int &AC, TXLSPivotRCItem* ACols, int ALevel, bool ASubtotals);
	void __fastcall DoRowValues(int &AR, int &AC, TXLSPivotRCItem* ARows, int ALevel, TXLSPivotCondition ACondition);
	void __fastcall DoValues(bool ASubtotals);
	void __fastcall DoColHeaders(int &AIndex, int ALevel, TXLSPivotRCItem* AItem, bool ASubtotals);
	void __fastcall DoRowHeaders(int &AIndex, int ALevel, TXLSPivotRCItem* AItem);
	void __fastcall DoWriteRowItems(Xpgparserpivot::TCT_RowColItems* ADefItems, TXLSPivotRCItem* ARCItems, int ALevel, bool AHasTotal);
	void __fastcall DoWriteColItems(Xpgparserpivot::TCT_RowColItems* ADefItems, TXLSPivotRCItem* ARCItems, int ALevel, bool AHasTotal);
	void __fastcall DoColDataValues();
	void __fastcall DoFixupEdit();
	void __fastcall DoEpilogue();
	int __fastcall ColHeaderRows();
	bool __fastcall HasLabels();
	
public:
	__fastcall TXLSPivotTable(Xpgparserpivot::TCT_pivotTableDefinition* ATblDef);
	__fastcall virtual ~TXLSPivotTable();
	void __fastcall Clear();
	void __fastcall ClearReport();
	bool __fastcall Make();
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property Xpgparserpivot::TCT_pivotTableDefinition* TableDef = {read=FTableDef};
	__property TXLSPivotFields* Fields = {read=FFields};
	__property TXLSPivotFieldsDest* ReportFilter = {read=FReportFilter};
	__property TXLSPivotFieldsDest* ColumnLabels = {read=FColumnLabels};
	__property TXLSPivotFieldsDest* RowLabels = {read=FRowLabels};
	__property TXLSPivotFieldsDest* DataValues = {read=FDataValues};
	__property bool RowsGrandTotals = {read=GetRowsTotals, write=SetRowsTotals, nodefault};
	__property bool ColsGrandTotals = {read=GetColsTotals, write=SetColsTotals, nodefault};
	__property TXLSPivotTableResult* PivResult = {read=FPivResult};
	__property Xlsrelcells5::TXLSRelCells* DestRef = {read=FDestRef, write=FDestRef};
	__property int ColorCols = {read=FColorCols, write=FColorCols, nodefault};
	__property int ColorSubtotals = {read=FColorSubs, write=FColorSubs, nodefault};
	__property bool Dirty = {read=FDirty, write=FDirty, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSPivotTables : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSPivotTable* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSPivotTable* __fastcall GetItems(int Index);
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	Xlsrelcells5::TXLSRelCells* FOwnerRef;
	
public:
	__fastcall TXLSPivotTables(Xc12manager5::TXc12Manager* AManager, Xlsrelcells5::TXLSRelCells* AOwnerRef);
	__fastcall virtual ~TXLSPivotTables();
	HIDESBASE TXLSPivotTable* __fastcall Add(Xpgparserpivot::TCT_pivotTableDefinition* ATblDef);
	TXLSPivotTable* __fastcall Hit(int ACol, int ARow);
	TXLSPivotTable* __fastcall CreateTable(Xlsrelcells5::TXLSRelCells* ASourceRef, Xlsrelcells5::TXLSRelCells* ADestRef);
	TXLSPivotTable* __fastcall EditTable(Xpgparserpivot::TCT_pivotTableDefinition* ATableDef);
	__property TXLSPivotTable* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Xlspivottables5__1 XLSPivotFuncStr;
}	/* namespace Xlspivottables5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSPIVOTTABLES5)
using namespace Xlspivottables5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlspivottables5HPP
