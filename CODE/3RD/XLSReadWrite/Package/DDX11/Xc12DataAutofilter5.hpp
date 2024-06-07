// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Xc12DataAutofilter5.pas' rev: 35.00 (Windows)

#ifndef Xc12dataautofilter5HPP
#define Xc12dataautofilter5HPP

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
#include <xpgPUtils.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XLSUtils5.hpp>
#include <XLSClassFactory5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xc12dataautofilter5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXc12IconFilter;
class DELPHICLASS TXc12ColorFilter;
class DELPHICLASS TXc12DynamicFilter;
class DELPHICLASS TXc12CustomFilter;
class DELPHICLASS TXc12CustomFilters;
class DELPHICLASS TXc12DateGroupItem;
class DELPHICLASS TXc12DateGroupItems;
class DELPHICLASS TXc12Filters;
class DELPHICLASS TXc12Top10;
class DELPHICLASS TXc12FilterColumn;
class DELPHICLASS TXc12FilterColumns;
class DELPHICLASS TXc12SortCondition;
class DELPHICLASS TXc12SortConditions;
class DELPHICLASS TXc12SortState;
class DELPHICLASS TXc12AutoFilter;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXc12SortBy : unsigned char { x12sbValue, x12sbCellColor, x12sbFontColor, x12sbIcon };

enum DECLSPEC_DENUM TXc12IconSetType : unsigned char { x12ist3Arrows, x12ist3ArrowsGray, x12ist3Flags, x12ist3TrafficLights1, x12ist3TrafficLights2, x12ist3Signs, x12ist3Symbols, x12ist3Symbols2, x12ist4Arrows, x12ist4ArrowsGray, x12ist4RedToBlack, x12ist4Rating, x12ist4TrafficLights, x12ist5Arrows, x12ist5ArrowsGray, x12ist5Rating, x12ist5Quarters };

enum DECLSPEC_DENUM TXc12DynamicFilterType : unsigned char { x12dftNull, x12dftAboveAverage, x12dftBelowAverage, x12dftTomorrow, x12dftToday, x12dftYesterday, x12dftNextWeek, x12dftThisWeek, x12dftLastWeek, x12dftNextMonth, x12dftThisMonth, x12dftLastMonth, x12dftNextQuarter, x12dftThisQuarter, x12dftLastQuarter, x12dftNextYear, x12dftThisYear, x12dftLastYear, x12dftYearToDate, x12dftQ1, x12dftQ2, x12dftQ3, x12dftQ4, x12dftM1, x12dftM2, x12dftM3, x12dftM4, x12dftM5, x12dftM6, x12dftM7, x12dftM8, x12dftM9, x12dftM10, x12dftM11, x12dftM12 };

enum DECLSPEC_DENUM TXc12FilterOperator : unsigned char { x12foEqual, x12foLessThan, x12foLessThanOrEqual, x12foNotEqual, x12foGreaterThanOrEqual, x12foGreaterThan };

enum DECLSPEC_DENUM TXc12CalendarType : unsigned char { x12ctNone, x12ctGregorian, x12ctGregorianUs, x12ctJapan, x12ctTaiwan, x12ctKorea, x12ctHijri, x12ctThai, x12ctHebrew, x12ctGregorianMeFrench, x12ctGregorianArabic, x12ctGregorianXlitEnglish };

enum DECLSPEC_DENUM TXc12DateTimeGrouping : unsigned char { x12dtgYear, x12dtgMonth, x12dtgDay, x12dtgHour, x12dtgMinute, x12dtgSecond };

enum DECLSPEC_DENUM TXc12SortMethod : unsigned char { x12smStroke, x12smPinYin, x12smNone };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12IconFilter : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TXc12IconSetType FIconSet;
	int FIconId;
	
public:
	__fastcall TXc12IconFilter();
	void __fastcall Assign(TXc12IconFilter* AIconFilter);
	void __fastcall Clear();
	__property TXc12IconSetType IconSet = {read=FIconSet, write=FIconSet, nodefault};
	__property int IconId = {read=FIconId, write=FIconId, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12IconFilter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12ColorFilter : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12datastylesheet5::TXc12DXF* FDXF;
	bool FCellColor;
	
public:
	__fastcall TXc12ColorFilter();
	void __fastcall Assign(TXc12ColorFilter* AColorFilter);
	void __fastcall Clear();
	__property Xc12datastylesheet5::TXc12DXF* DXF = {read=FDXF, write=FDXF};
	__property bool CellColor = {read=FCellColor, write=FCellColor, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12ColorFilter() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXc12DynamicFilter : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TXc12DynamicFilterType FType_;
	double FVal;
	double FMaxVal;
	
public:
	__fastcall TXc12DynamicFilter();
	void __fastcall Assign(TXc12DynamicFilter* ADynFilter);
	void __fastcall Clear();
	__property TXc12DynamicFilterType Type_ = {read=FType_, write=FType_, nodefault};
	__property double Val = {read=FVal, write=FVal};
	__property double MaxVal = {read=FMaxVal, write=FMaxVal};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12DynamicFilter() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12CustomFilter : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TXc12FilterOperator FOperator;
	System::UnicodeString FVal;
	System::UnicodeString __fastcall GetOperatorAsString();
	void __fastcall SetOperatorAsString(const System::UnicodeString Value);
	
public:
	__fastcall TXc12CustomFilter();
	void __fastcall Assign(TXc12CustomFilter* ACustFilter);
	void __fastcall Clear();
	__property TXc12FilterOperator Operator_ = {read=FOperator, write=FOperator, nodefault};
	__property System::UnicodeString OperatorAsString = {read=GetOperatorAsString, write=SetOperatorAsString};
	__property System::UnicodeString Val = {read=FVal, write=FVal};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12CustomFilter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12CustomFilters : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FAssigned;
	TXc12CustomFilter* FFilter1;
	TXc12CustomFilter* FFilter2;
	bool FAnd;
	
public:
	__fastcall TXc12CustomFilters();
	__fastcall virtual ~TXc12CustomFilters();
	void __fastcall Assign(TXc12CustomFilters* ACustFilters);
	void __fastcall Clear();
	__property bool Assigned = {read=FAssigned, write=FAssigned, nodefault};
	__property TXc12CustomFilter* Filter1 = {read=FFilter1, write=FFilter1};
	__property TXc12CustomFilter* Filter2 = {read=FFilter2, write=FFilter2};
	__property bool And_ = {read=FAnd, write=FAnd, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DateGroupItem : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FYear;
	int FMonth;
	int FDay;
	int FHour;
	int FMinute;
	int FSecond;
	TXc12DateTimeGrouping FDateTimeGrouping;
	
public:
	__fastcall TXc12DateGroupItem();
	void __fastcall Assign(TXc12DateGroupItem* ADGItem);
	void __fastcall Clear();
	__property int Year = {read=FYear, write=FYear, nodefault};
	__property int Month = {read=FMonth, write=FMonth, nodefault};
	__property int Day = {read=FDay, write=FDay, nodefault};
	__property int Hour = {read=FHour, write=FHour, nodefault};
	__property int Minute = {read=FMinute, write=FMinute, nodefault};
	__property int Second = {read=FSecond, write=FSecond, nodefault};
	__property TXc12DateTimeGrouping DateTimeGrouping = {read=FDateTimeGrouping, write=FDateTimeGrouping, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12DateGroupItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DateGroupItems : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12DateGroupItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12DateGroupItem* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12DateGroupItems();
	HIDESBASE void __fastcall Assign(TXc12DateGroupItems* ADGItems);
	HIDESBASE TXc12DateGroupItem* __fastcall Add();
	__property TXc12DateGroupItem* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12DateGroupItems() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Filters : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FBlank;
	TXc12CalendarType FCalendarType;
	System::Classes::TStringList* FFilter;
	TXc12DateGroupItems* FDateGroupItems;
	
public:
	__fastcall TXc12Filters();
	__fastcall virtual ~TXc12Filters();
	void __fastcall Assign(TXc12Filters* AFilters);
	void __fastcall Clear();
	__property bool Blank = {read=FBlank, write=FBlank, nodefault};
	__property TXc12CalendarType CalendarType = {read=FCalendarType, write=FCalendarType, nodefault};
	__property System::Classes::TStringList* Filter = {read=FFilter};
	__property TXc12DateGroupItems* DateGroupItems = {read=FDateGroupItems, write=FDateGroupItems};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXc12Top10 : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FAssigned;
	bool FTop;
	bool FPercent;
	double FVal;
	double FFilterVal;
	
public:
	__fastcall TXc12Top10();
	void __fastcall Assign(TXc12Top10* ATop10);
	void __fastcall Clear();
	__property bool Assigned = {read=FAssigned, write=FAssigned, nodefault};
	__property bool Top = {read=FTop, write=FTop, nodefault};
	__property bool Percent = {read=FPercent, write=FPercent, nodefault};
	__property double Val = {read=FVal, write=FVal};
	__property double FilterVal = {read=FFilterVal, write=FFilterVal};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12Top10() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12FilterColumn : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FColId;
	bool FHiddenButton;
	bool FShowButton;
	TXc12Filters* FFilters;
	TXc12Top10* FTop10;
	TXc12CustomFilters* FCustomFilters;
	TXc12DynamicFilter* FDynamicFilter;
	TXc12ColorFilter* FColorFilter;
	TXc12IconFilter* FIconFilter;
	
public:
	__fastcall TXc12FilterColumn();
	__fastcall virtual ~TXc12FilterColumn();
	void __fastcall Assign(TXc12FilterColumn* AFilterColumn);
	void __fastcall Clear();
	__property int ColId = {read=FColId, write=FColId, nodefault};
	__property bool HiddenButton = {read=FHiddenButton, write=FHiddenButton, nodefault};
	__property bool ShowButton = {read=FShowButton, write=FShowButton, nodefault};
	__property TXc12Filters* Filters = {read=FFilters};
	__property TXc12Top10* Top10 = {read=FTop10};
	__property TXc12CustomFilters* CustomFilters = {read=FCustomFilters};
	__property TXc12DynamicFilter* DynamicFilter = {read=FDynamicFilter};
	__property TXc12ColorFilter* ColorFilter = {read=FColorFilter};
	__property TXc12IconFilter* IconFilter = {read=FIconFilter};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12FilterColumns : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12FilterColumn* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12FilterColumn* __fastcall GetItems(int Index);
	
protected:
	Xlsclassfactory5::TXLSClassFactory* FClassFactory;
	
public:
	__fastcall TXc12FilterColumns(Xlsclassfactory5::TXLSClassFactory* AClassFactory);
	HIDESBASE void __fastcall Assign(TXc12FilterColumns* AFilterColumns);
	TXc12FilterColumn* __fastcall Find(int ACol);
	HIDESBASE bool __fastcall Remove(int ACol);
	HIDESBASE TXc12FilterColumn* __fastcall Add();
	__property TXc12FilterColumn* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12FilterColumns() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12SortCondition : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FDescending;
	TXc12SortBy FSortBy;
	Xc12utils5::TXLSCellArea FRef;
	System::UnicodeString FCustomList;
	int FDxfId;
	TXc12IconSetType FIconSet;
	int FIconId;
	
public:
	__fastcall TXc12SortCondition();
	void __fastcall Assign(TXc12SortCondition* ASortCond);
	void __fastcall Clear();
	__property bool Descending = {read=FDescending, write=FDescending, nodefault};
	__property TXc12SortBy SortBy = {read=FSortBy, write=FSortBy, nodefault};
	__property Xc12utils5::TXLSCellArea Ref = {read=FRef, write=FRef};
	__property System::UnicodeString CustomList = {read=FCustomList, write=FCustomList};
	__property int DxfId = {read=FDxfId, write=FDxfId, nodefault};
	__property TXc12IconSetType IconSet = {read=FIconSet, write=FIconSet, nodefault};
	__property int IconId = {read=FIconId, write=FIconId, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12SortCondition() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12SortConditions : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12SortCondition* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12SortCondition* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12SortConditions();
	HIDESBASE void __fastcall Assign(TXc12SortConditions* ASortConds);
	HIDESBASE TXc12SortCondition* __fastcall Add();
	__property TXc12SortCondition* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12SortConditions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12SortState : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FColumnSort;
	bool FCaseSensitive;
	TXc12SortMethod FSortMethod;
	Xc12utils5::TXLSCellArea FRef;
	TXc12SortConditions* FSortConditions;
	
public:
	__fastcall TXc12SortState();
	__fastcall virtual ~TXc12SortState();
	void __fastcall Assign(TXc12SortState* ASortState);
	void __fastcall Clear();
	__property bool ColumnSort = {read=FColumnSort, write=FColumnSort, nodefault};
	__property bool CaseSensitive = {read=FCaseSensitive, write=FCaseSensitive, nodefault};
	__property TXc12SortMethod SortMethod = {read=FSortMethod, write=FSortMethod, nodefault};
	__property Xc12utils5::TXLSCellArea Ref = {read=FRef, write=FRef};
	__property TXc12SortConditions* SortConditions = {read=FSortConditions};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12AutoFilter : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xlsclassfactory5::TXLSClassFactory* FClassFactory;
	TXc12FilterColumns* FFilterColumns;
	TXc12SortState* FSortState;
	Xc12utils5::TXLSCellArea FRef;
	
public:
	__fastcall TXc12AutoFilter(Xlsclassfactory5::TXLSClassFactory* AClassFactory);
	__fastcall virtual ~TXc12AutoFilter();
	void __fastcall Assign(TXc12AutoFilter* AAutoFilter);
	void __fastcall Clear();
	bool __fastcall Active();
	__property TXc12FilterColumns* FilterColumns = {read=FFilterColumns};
	__property TXc12SortState* SortState = {read=FSortState};
	__property Xc12utils5::TXLSCellArea Ref = {read=FRef, write=FRef};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xc12dataautofilter5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XC12DATAAUTOFILTER5)
using namespace Xc12dataautofilter5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xc12dataautofilter5HPP
