// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_Autofilter5.pas' rev: 35.00 (Windows)

#ifndef Biff_autofilter5HPP
#define Biff_autofilter5HPP

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
#include <BIFF_Utils5.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_Stream5.hpp>
#include <BIFF_Names5.hpp>
#include <BIFF_ControlObj5.hpp>
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_autofilter5
{
//-- forward type declarations -----------------------------------------------
struct TAutoFilterCondData;
class DELPHICLASS TAutoFilterCondition;
class DELPHICLASS TAutoFilter;
class DELPHICLASS TAutoFilters;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TAutoFilterDataType : unsigned char { afdtUnused, afdtFloat, afdtString, afdtBoolean, afdtError, afdtAllBlanks, afdtAllNonBlanks };

enum DECLSPEC_DENUM TAutoFilterOperator : unsigned char { afoUnassigned, afoLess, afoEqual, afoLessEqual, afoGreater, afoNotEqual, afoGreaterEqual };

enum DECLSPEC_DENUM TAutoFilterType : unsigned char { aftAndFilter, aftOrFilter };

struct DECLSPEC_DRECORD TAutoFilterCondData
{
public:
	TAutoFilterOperator CompOperator;
	System::UnicodeString vString;
	
public:
	TAutoFilterDataType DataType;
	union
	{
		struct 
		{
			Xc12utils5::TXc12CellError vError;
		};
		struct 
		{
			bool vBoolean;
		};
		struct 
		{
			double vFloat;
		};
		
	};
};


class PASCALIMPLEMENTATION TAutoFilterCondition : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TAutoFilterCondData FData;
	bool __fastcall GetBooleanValue();
	TAutoFilterOperator __fastcall GetCompOperator();
	Xc12utils5::TXc12CellError __fastcall GetErrorValue();
	double __fastcall GetFloatValue();
	System::UnicodeString __fastcall GetStringValue();
	void __fastcall SetBooleanValue(const bool Value);
	void __fastcall SetCompOperator(const TAutoFilterOperator Value);
	void __fastcall SetErrorValue(const Xc12utils5::TXc12CellError Value);
	void __fastcall SetFloatValue(const double Value);
	void __fastcall SetStringValue(const System::UnicodeString Value);
	bool __fastcall GetBlankValue();
	void __fastcall SetBlankValue(const bool Value);
	bool __fastcall GetNonBlankValue();
	void __fastcall SetNonBlankValue(const bool Value);
	
protected:
	int __fastcall SetData(System::Sysutils::PByteArray P, System::Sysutils::PByteArray PStr);
	void __fastcall GetData(System::Sysutils::PByteArray P, System::Sysutils::PByteArray PStr);
	int __fastcall GetStringSize();
	
public:
	bool __fastcall FilterFloatValue(double Value);
	bool __fastcall FilterStringValue(System::UnicodeString Value);
	bool __fastcall FilterBooleanValue(bool Value);
	bool __fastcall FilterErrorValue(Xc12utils5::TXc12CellError Value);
	bool __fastcall FilterBlankValue();
	__property TAutoFilterOperator CompOperator = {read=GetCompOperator, write=SetCompOperator, nodefault};
	__property double FloatValue = {read=GetFloatValue, write=SetFloatValue};
	__property System::UnicodeString StringValue = {read=GetStringValue, write=SetStringValue};
	__property bool BooleanValue = {read=GetBooleanValue, write=SetBooleanValue, nodefault};
	__property Xc12utils5::TXc12CellError ErrorValue = {read=GetErrorValue, write=SetErrorValue, nodefault};
	__property bool BlankValue = {read=GetBlankValue, write=SetBlankValue, nodefault};
	__property bool NonBlankValue = {read=GetNonBlankValue, write=SetNonBlankValue, nodefault};
	__property TAutoFilterCondData ConditionData = {read=FData, write=FData};
public:
	/* TObject.Create */ inline __fastcall TAutoFilterCondition() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAutoFilterCondition() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAutoFilter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TAutoFilters* FParent;
	unsigned FId;
	System::Word FIndex;
	System::Word FOptions;
	TAutoFilterType FFilterType;
	TAutoFilterCondition* FCondition1;
	TAutoFilterCondition* FCondition2;
	void __fastcall SetFilterType(const TAutoFilterType Value);
	
public:
	__fastcall TAutoFilter(TAutoFilters* Parent);
	__fastcall virtual ~TAutoFilter();
	void __fastcall LoadFromStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	void __fastcall SaveToStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	void __fastcall Clear();
	bool __fastcall FilterFloatValue(double Value);
	bool __fastcall FilterStringValue(System::UnicodeString Value);
	bool __fastcall FilterBooleanValue(bool Value);
	bool __fastcall FilterErrorValue(Xc12utils5::TXc12CellError Value);
	bool __fastcall FilterBlankValue();
	__property TAutoFilterType FilterType = {read=FFilterType, write=SetFilterType, nodefault};
	__property TAutoFilterCondition* Condition1 = {read=FCondition1};
	__property TAutoFilterCondition* Condition2 = {read=FCondition2};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAutoFilters : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TAutoFilter* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::TObject* FParent;
	int FDropDownCount;
	bool FLoadFromFile;
	Biff_controlobj5::TControlComboBoxes* FComboBoxes;
	Biff_names5::TInternalNames* FInternalNames;
	Biff_names5::TInternalName* FInternalName;
	bool FIsDynamicFilter;
	int __fastcall GetCol1();
	int __fastcall GetCol2();
	int __fastcall GetRow1();
	int __fastcall GetRow2();
	TAutoFilter* __fastcall GetItems(int Index);
	
protected:
	void __fastcall DeleteAll();
	void __fastcall AddNil();
	
public:
	__fastcall TAutoFilters(System::TObject* Parent, Biff_controlobj5::TControlComboBoxes* ComboBoxes, Biff_names5::TInternalNames* Names);
	__fastcall virtual ~TAutoFilters();
	void __fastcall LoadFromStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	void __fastcall SaveToStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	HIDESBASE TAutoFilter* __fastcall Add(int C1, int R1, int C2, int R2);
	void __fastcall IndexFilterVal(int Index, TAutoFilterOperator Op, System::UnicodeString Value);
	void __fastcall IndexClear(int Index);
	HIDESBASE void __fastcall Delete(int Index);
	virtual void __fastcall Clear();
	bool __fastcall IsFiltered();
	void __fastcall QuickFilter(int C, int R1, int R2, System::UnicodeString *Conditions, const int Conditions_High);
	bool __fastcall CellHit(int C, int R);
	__property TAutoFilter* Items[int Index] = {read=GetItems/*, default*/};
	__property int Col1 = {read=GetCol1, nodefault};
	__property int Row1 = {read=GetRow1, nodefault};
	__property int Col2 = {read=GetCol2, nodefault};
	__property int Row2 = {read=GetRow2, nodefault};
	__property bool IsDynamicFilter = {read=FIsDynamicFilter, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 AUTOFILTER_UNUSED = System::Int8(0x0);
static const System::Int8 AUTOFILTER_RK = System::Int8(0x2);
static const System::Int8 AUTOFILTER_FLOAT = System::Int8(0x4);
static const System::Int8 AUTOFILTER_STRING = System::Int8(0x6);
static const System::Int8 AUTOFILTER_BOOLERR = System::Int8(0x8);
static const System::Int8 AUTOFILTER_ALLBLANK = System::Int8(0xc);
static const System::Int8 AUTOFILTER_ALLNONBLANK = System::Int8(0xe);
}	/* namespace Biff_autofilter5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_AUTOFILTER5)
using namespace Biff_autofilter5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_autofilter5HPP
