// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSEvaluate5.pas' rev: 35.00 (Windows)

#ifndef Xlsevaluate5HPP
#define Xlsevaluate5HPP

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
#include <System.Masks.hpp>
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>
#include <XLSCellMMU5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsevaluate5
{
//-- forward type declarations -----------------------------------------------
struct TXLSFormulaValue;
struct TXLSVarValue;
class DELPHICLASS TXLSArrayItem;
class DELPHICLASS TXLSArrayItemIterate;
class DELPHICLASS TXLSCellsSource;
class DELPHICLASS TXLSDbCondition;
class DELPHICLASS TXLSDbConditionAnd;
class DELPHICLASS TXLSDbConditionOr;
class DELPHICLASS TXLSDbField;
class DELPHICLASS TXLSFmlaDatabase;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXLSFormulaValueType : unsigned char { xfvtUnknown, xfvtFloat, xfvtBoolean, xfvtError, xfvtString, xfvtAreaList, xfvtTableSpecial };

enum DECLSPEC_DENUM TXLSFormulaRefType : unsigned char { xfrtNone, xfrtRef, xfrtArea, xfrtXArea, xfrtAreaList, xfrtArray, xfrtArrayArg };

typedef TXLSFormulaValue *PXLSFormulaValue;

struct DECLSPEC_DRECORD TXLSFormulaValue
{
public:
	bool Empty;
	TXLSFormulaRefType RefType;
	Xlscellmmu5::TXLSCellMMU* Cells;
	int Col1;
	int Col2;
	int Row1;
	int Row2;
	System::UnicodeString vStr;
	
public:
	TXLSFormulaValueType ValType;
	union
	{
		struct 
		{
			System::TObject* vSource;
		};
		struct 
		{
			int vSpec;
		};
		struct 
		{
			Xc12utils5::TXc12CellError vErr;
		};
		struct 
		{
			bool vBool;
		};
		struct 
		{
			double vFloat;
		};
		
	};
};


typedef TXLSVarValue *PXLSVarValue;

struct DECLSPEC_DRECORD TXLSVarValue
{
public:
	bool Empty;
	System::UnicodeString vStr;
	
public:
	TXLSFormulaValueType ValType;
	union
	{
		struct 
		{
			Xc12utils5::TXc12CellError vErr;
		};
		struct 
		{
			bool vBool;
		};
		struct 
		{
			double vFloat;
		};
		
	};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSArrayItem : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TXLSVarValue> _TXLSArrayItem__1;
	
	typedef System::DynamicArray<System::DynamicArray<TXLSVarValue> > _TXLSArrayItem__2;
	
	
private:
	PXLSVarValue __fastcall GetItems(int ACol, int ARow);
	int __fastcall GetHeight();
	int __fastcall GetWidth();
	double __fastcall GetAsFloat(int ACol, int ARow);
	bool __fastcall GetAsBoolean(int ACol, int ARow);
	Xc12utils5::TXc12CellError __fastcall GetAsError(int ACol, int ARow);
	System::UnicodeString __fastcall GetAsString(int ACol, int ARow);
	void __fastcall SetAsFloat(int ACol, int ARow, double AValue);
	void __fastcall SetAsBoolean(int ACol, int ARow, const bool Value);
	void __fastcall SetAsError(int ACol, int ARow, const Xc12utils5::TXc12CellError Value);
	void __fastcall SetAsString(int ACol, int ARow, const System::UnicodeString Value);
	bool __fastcall GetHit(int ACol, int ARow);
	
protected:
	_TXLSArrayItem__2 FValues;
	bool FVectorMode;
	int FTag;
	void __fastcall CheckVectorMode(int &ACol, int &ARow);
	
public:
	__fastcall TXLSArrayItem(int AWidth, int AHeight);
	__fastcall TXLSArrayItem(const TXLSFormulaValue &AValue);
	void __fastcall Clear();
	void __fastcall Assign(TXLSArrayItem* AValue);
	void __fastcall MakeEqualSize(TXLSArrayItem* AValue);
	void __fastcall FillError();
	bool __fastcall Add(const int ACol, const int ARow, const TXLSFormulaValue &AValue)/* overload */;
	void __fastcall Add(const int ACol, const int ARow, const double AValue)/* overload */;
	void __fastcall Add(const int ACol, const int ARow, const System::UnicodeString AValue)/* overload */;
	void __fastcall Add(const int ACol, const int ARow, const bool AValue)/* overload */;
	void __fastcall Add(const int ACol, const int ARow, const Xc12utils5::TXc12CellError AValue)/* overload */;
	TXLSFormulaValue __fastcall GetAsFormulaValue(int ACol, int ARow);
	bool __fastcall IsVector();
	__property int Width = {read=GetWidth, nodefault};
	__property int Height = {read=GetHeight, nodefault};
	__property bool VectorMode = {read=FVectorMode, write=FVectorMode, nodefault};
	__property bool Hit[int ACol][int ARow] = {read=GetHit};
	__property bool AsBoolean[int ACol][int ARow] = {read=GetAsBoolean, write=SetAsBoolean};
	__property double AsFloat[int ACol][int ARow] = {read=GetAsFloat, write=SetAsFloat};
	__property System::UnicodeString AsString[int ACol][int ARow] = {read=GetAsString, write=SetAsString};
	__property Xc12utils5::TXc12CellError AsError[int ACol][int ARow] = {read=GetAsError, write=SetAsError};
	__property int Tag = {read=FTag, write=FTag, nodefault};
	__property PXLSVarValue Items[int ACol][int ARow] = {read=GetItems/*, default*/};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSArrayItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSArrayItemIterate : public TXLSArrayItem
{
	typedef TXLSArrayItem inherited;
	
protected:
	int FCol;
	int FRow;
	bool FLoopOnVectors;
	
public:
	void __fastcall BeginIterate(bool ALoopOnVectors = true);
	bool __fastcall IterateNext();
	double __fastcall IterFloat();
	Xc12utils5::TXc12CellError __fastcall IterError();
public:
	/* TXLSArrayItem.Create */ inline __fastcall TXLSArrayItemIterate(int AWidth, int AHeight) : TXLSArrayItem(AWidth, AHeight) { }
	/* TXLSArrayItem.CreateFV */ inline __fastcall TXLSArrayItemIterate(const TXLSFormulaValue &AValue) : TXLSArrayItem(AValue) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSArrayItemIterate() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCellsSource : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	double __fastcall GetAsFloat(int ACol, int ARow);
	void __fastcall SetAsFloat(int ACol, int ARow, const double Value);
	int __fastcall GetHeight();
	int __fastcall GetWidth();
	
protected:
	int FCol1;
	int FCol2;
	int FRow1;
	int FRow2;
	int FIterCol;
	int FIterRow;
	Xlscellmmu5::TXLSCellMMU* FCells;
	TXLSArrayItem* FArray;
	bool FEmpty;
	Xc12utils5::TXc12CellError FError;
	bool FOwnsArray;
	
public:
	__fastcall TXLSCellsSource(int AWidth, int AHeight)/* overload */;
	__fastcall TXLSCellsSource(TXLSArrayItem* AArray)/* overload */;
	__fastcall TXLSCellsSource(Xlscellmmu5::TXLSCellMMU* ACells, int ACol1, int ARow1, int ACol2, int ARow2)/* overload */;
	__fastcall virtual ~TXLSCellsSource();
	void __fastcall BeginIterate();
	bool __fastcall IterateNext();
	double __fastcall IterAsFloat();
	__property double AsFloat[int ACol][int ARow] = {read=GetAsFloat, write=SetAsFloat};
	__property bool LastWasEmpty = {read=FEmpty, nodefault};
	__property Xc12utils5::TXc12CellError LastError = {read=FError, nodefault};
	__property int Col1 = {read=FCol1, nodefault};
	__property int Row1 = {read=FRow1, nodefault};
	__property int Col2 = {read=FCol2, nodefault};
	__property int Row2 = {read=FRow2, nodefault};
	__property int Width = {read=GetWidth, nodefault};
	__property int Height = {read=GetHeight, nodefault};
	__property int IterCol = {read=FIterCol, nodefault};
	__property int IterRow = {read=FIterRow, nodefault};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TXLSDbCondOperator : unsigned char { xdcoNone, xdcoLT, xdcoLE, xdcoEQ, xdcoGE, xdcoGT, xdcoNE, xdcoError };

class PASCALIMPLEMENTATION TXLSDbCondition : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	PXLSVarValue __fastcall GetValue();
	
protected:
	TXLSDbField* FField;
	TXLSDbCondOperator FOp;
	TXLSVarValue FValue;
	
public:
	__fastcall virtual ~TXLSDbCondition();
	bool __fastcall DoCondition(PXLSVarValue AValue);
	__property TXLSDbField* Field = {read=FField, write=FField};
	__property TXLSDbCondOperator Op = {read=FOp, write=FOp, nodefault};
	__property PXLSVarValue Value = {read=GetValue};
public:
	/* TObject.Create */ inline __fastcall TXLSDbCondition() : System::TObject() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDbConditionAnd : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSDbCondition* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSDbCondition* __fastcall GetItems(int Index);
	
public:
	__fastcall TXLSDbConditionAnd();
	HIDESBASE TXLSDbCondition* __fastcall Add(TXLSDbField* AField, const System::UnicodeString ACondStr);
	__property TXLSDbCondition* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXLSDbConditionAnd() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDbConditionOr : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSDbConditionAnd* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSDbConditionAnd* __fastcall GetItems(int Index);
	
public:
	__fastcall TXLSDbConditionOr();
	HIDESBASE TXLSDbConditionAnd* __fastcall Add();
	__property TXLSDbConditionAnd* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXLSDbConditionOr() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDbField : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FName;
	int FIndex;
	bool FUsed;
	
public:
	__fastcall virtual ~TXLSDbField();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property int Index = {read=FIndex, nodefault};
	__property bool Used = {read=FUsed, write=FUsed, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXLSDbField() : System::TObject() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSFmlaDatabase : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
	
private:
	typedef System::DynamicArray<int> _TXLSFmlaDatabase__1;
	
	
public:
	TXLSDbField* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSDbField* __fastcall GetItems(int Index);
	
protected:
	TXLSFormulaValue FFvDb;
	TXLSFormulaValue FFvCriteria;
	TXLSDbConditionOr* FConditions;
	_TXLSFmlaDatabase__1 FFieldXLate;
	int FSrcField;
	int FResCount;
	int FResCountA;
	double FResSum;
	int FResCount2;
	int FResCountA2;
	double FResSum2;
	void __fastcall SaveRes();
	void __fastcall GetCellValue(Xlscellmmu5::TXLSCellMMU* Cells, int ACol, int ARow, PXLSFormulaValue AFormulaVal);
	
public:
	__fastcall TXLSFmlaDatabase(const TXLSFormulaValue &AFvDb, const TXLSFormulaValue &AFvCriteria);
	__fastcall virtual ~TXLSFmlaDatabase();
	HIDESBASE TXLSDbField* __fastcall Add(int AIndex);
	TXLSDbField* __fastcall Find(System::UnicodeString AName);
	Xc12utils5::TXc12CellError __fastcall BuildDb();
	bool __fastcall ApplyCondition(TXLSArrayItem* AValues);
	void __fastcall SearchDb(int AFuncId, System::UnicodeString ASrcField, /* out */ TXLSFormulaValue &AResult);
	__property TXLSDbConditionOr* Conditions = {read=FConditions};
	__property TXLSDbField* Items[int Index] = {read=GetItems/*, default*/};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall FVToVarValue(PXLSFormulaValue AFV, PXLSVarValue AVarVal);
extern DELPHI_PACKAGE bool __fastcall CompareFVValue(PXLSFormulaValue AValue1, PXLSFormulaValue AValue2, TXLSDbCondOperator AOperator);
extern DELPHI_PACKAGE bool __fastcall CompareVarValue(PXLSVarValue AValue1, PXLSVarValue AValue2, TXLSDbCondOperator AOperator);
extern DELPHI_PACKAGE void __fastcall FVSetError(PXLSFormulaValue AFV, Xc12utils5::TXc12CellError AError);
extern DELPHI_PACKAGE bool __fastcall ConditionStrToVarValue(System::UnicodeString ACondStr, /* out */ TXLSDbCondOperator &AOperator, PXLSVarValue AValue);
}	/* namespace Xlsevaluate5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSEVALUATE5)
using namespace Xlsevaluate5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsevaluate5HPP
