// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSCellMMU5.pas' rev: 35.00 (Windows)

#ifndef Xlscellmmu5HPP
#define Xlscellmmu5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Math.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataSST5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XLSUtils5.hpp>
#include <Xc12Common5.hpp>
#include <XLSMMU5.hpp>
#include <XLSFormulaTypes5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlscellmmu5
{
//-- forward type declarations -----------------------------------------------
struct TXLSMMURowHeader;
struct TXLSMMUFormulaHeader;
struct TXLSCellItem;
struct TXLSFormulaArea;
struct TXLSFormulaRef;
struct TXLSCellMMUIterate;
class DELPHICLASS TXLSFormulaHelper;
class DELPHICLASS TXLSCellMMUDebugData;
class DELPHICLASS TXLSCellMMU;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXLSRowOption : unsigned char { xroHidden, xroCustomHeight, xroCollapsed, xroThickTop, xroThickBottom, xroPhonetic };

typedef System::Set<TXLSRowOption, TXLSRowOption::xroHidden, TXLSRowOption::xroPhonetic> TXLSRowOptions;

enum DECLSPEC_DENUM TXLSCellFormulaType : unsigned char { xcftNormal, xcftArray, xcftDataTable, xcftArrayChild, xcftArrayChild97, xcftDataTableChild };

typedef TXLSMMURowHeader *PXLSMMURowHeader;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSMMURowHeader
{
public:
	TXLSRowOptions Options;
	System::Word Style;
	System::Byte OutlineLevel;
	System::Word Height;
	System::Word SpanC1;
	System::Word SpanC2;
};
#pragma pack(pop)


typedef TXLSMMUFormulaHeader *PXLSMMUFormulaHeader;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSMMUFormulaHeader
{
public:
	System::Word AllocSize;
	TXLSCellFormulaType FmlaType;
};
#pragma pack(pop)


typedef TXLSCellItem *PXLSCellItem;

struct DECLSPEC_DRECORD TXLSCellItem
{
public:
	int XLate;
	System::Byte *Data;
};


typedef TXLSFormulaArea *PXLSFormulaArea;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSFormulaArea
{
public:
	System::Word Col1;
	unsigned Row1;
	System::Word Col2;
	unsigned Row2;
};
#pragma pack(pop)


typedef TXLSFormulaRef *PXLSFormulaRef;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSFormulaRef
{
public:
	System::Word Col;
	unsigned Row;
};
#pragma pack(pop)


struct DECLSPEC_DRECORD TXLSCellMMUIterate
{
public:
	int Col;
	int Row;
	int LastRow;
	TXLSMMURowHeader *RowHeader;
	TXLSCellItem Cell;
};


class PASCALIMPLEMENTATION TXLSFormulaHelper : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString __fastcall GetRef();
	void __fastcall SetRef(const System::UnicodeString Value);
	double __fastcall GetAsFloat();
	void __fastcall SetAsFloat(const double Value);
	bool __fastcall GetAsBoolean();
	void __fastcall SetAsBoolean(const bool Value);
	System::UnicodeString __fastcall GetAsString();
	void __fastcall SetAsString(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetAsErrorStr();
	void __fastcall SetAsErrorStr(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetStrTargetRef();
	void __fastcall SetStrTragetRef(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetStrR1();
	System::UnicodeString __fastcall GetStrR2();
	void __fastcall SetStrR1(const System::UnicodeString Value);
	void __fastcall SetStrR2(const System::UnicodeString Value);
	Xc12utils5::TXc12CellError __fastcall GetAsError();
	void __fastcall SetAsError(const Xc12utils5::TXc12CellError Value);
	void __fastcall SetPtgs(const Xlsformulatypes5::PXLSPtgs Value);
	
private:
	int FCol;
	int FRow;
	int FParentCol;
	int FParentRow;
	int FStyle;
	System::UnicodeString FFormula;
	bool FFmlaIs8Bit;
	Xlsformulatypes5::TXLSPtgs *FPtgs;
	int FPtgsSize;
	bool FOwnsPtgs;
	Xc12utils5::TXLSCellType FCellType;
	TXLSCellFormulaType FFormulaType;
	TXLSFormulaArea FTargetRef;
	bool FHasApply;
	__int64 FResult;
	System::UnicodeString FStrResult;
	TXLSFormulaRef FR1;
	TXLSFormulaRef FR2;
	bool FIsTABLE;
	System::Byte FOptions;
	System::Byte FTableOptions;
	
public:
	__fastcall virtual ~TXLSFormulaHelper();
	void __fastcall Clear();
	bool __fastcall IsCompiled();
	int __fastcall AllocSize();
	void __fastcall SetR1(const int ACol, const int ARow);
	void __fastcall SetR2(const int ACol, const int ARow);
	void __fastcall AllocPtgs(const Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsSize);
	void __fastcall AllocPtgs97(const Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsSize);
	void __fastcall AllocPtgsArrayConsts97(const Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsSize, const int AArrayConstsSize);
	void __fastcall SetTargetRef(const int ACol1, const int ARow1, const int ACol2, const int ARow2);
	__property int Col = {read=FCol, write=FCol, nodefault};
	__property int Row = {read=FRow, write=FRow, nodefault};
	__property int ParentCol = {read=FParentCol, write=FParentCol, nodefault};
	__property int ParentRow = {read=FParentRow, write=FParentRow, nodefault};
	__property System::UnicodeString Ref = {read=GetRef, write=SetRef};
	__property int Style = {read=FStyle, write=FStyle, nodefault};
	__property System::UnicodeString Formula = {read=FFormula, write=FFormula};
	__property bool FmlaIs8Bit = {read=FFmlaIs8Bit, nodefault};
	__property Xlsformulatypes5::PXLSPtgs Ptgs = {read=FPtgs, write=SetPtgs};
	__property int PtgsSize = {read=FPtgsSize, write=FPtgsSize, nodefault};
	__property double AsFloat = {read=GetAsFloat, write=SetAsFloat};
	__property System::UnicodeString AsString = {read=GetAsString, write=SetAsString};
	__property bool AsBoolean = {read=GetAsBoolean, write=SetAsBoolean, nodefault};
	__property Xc12utils5::TXc12CellError AsError = {read=GetAsError, write=SetAsError, nodefault};
	__property System::UnicodeString AsErrorStr = {read=GetAsErrorStr, write=SetAsErrorStr};
	__property TXLSCellFormulaType FormulaType = {read=FFormulaType, write=FFormulaType, nodefault};
	__property Xc12utils5::TXLSCellType CellType = {read=FCellType, write=FCellType, nodefault};
	__property System::UnicodeString StrTargetRef = {read=GetStrTargetRef, write=SetStrTragetRef};
	__property TXLSFormulaArea TargetRef = {read=FTargetRef, write=FTargetRef};
	__property bool HasApply = {read=FHasApply, write=FHasApply, nodefault};
	__property bool IsTABLE = {read=FIsTABLE, write=FIsTABLE, nodefault};
	__property System::Byte Options = {read=FOptions, write=FOptions, nodefault};
	__property System::Byte TableOptions = {read=FTableOptions, write=FTableOptions, nodefault};
	__property System::UnicodeString StrR1 = {read=GetStrR1, write=SetStrR1};
	__property System::UnicodeString StrR2 = {read=GetStrR2, write=SetStrR2};
	__property TXLSFormulaRef R1 = {read=FR1, write=FR1};
	__property TXLSFormulaRef R2 = {read=FR2, write=FR2};
public:
	/* TObject.Create */ inline __fastcall TXLSFormulaHelper() : System::TObject() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCellMMUDebugData : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TXLSCellMMU* FOwner;
	System::Classes::TStringList* FList;
	
public:
	__fastcall TXLSCellMMUDebugData(TXLSCellMMU* AOwner);
	__fastcall virtual ~TXLSCellMMUDebugData();
	void __fastcall Clear();
	void __fastcall Save(System::UnicodeString AFilename);
	void __fastcall Load(System::UnicodeString AFilename);
	void __fastcall Delete(const int ACol, const int ARow);
	void __fastcall AddBlank(const int ACol, const int ARow, const int AStyle);
	void __fastcall AddBoolean(const int ACol, const int ARow, const int AStyle, const bool AValue);
	void __fastcall AddError(const int ACol, const int ARow, const int AStyle, const Xc12utils5::TXc12CellError AValue);
	void __fastcall AddFloat(const int ACol, const int ARow, const int AStyle, const double AValue);
	void __fastcall AddString(const int ACol, const int ARow, const int AStyle, const int AValue);
	void __fastcall AddFormula(const int ACol, const int ARow, const int AStyle, const System::UnicodeString AFormula);
	void __fastcall AddFormulaFloat(const int ACol, const int ARow, const int AStyle, const double AValue, const Xlsformulatypes5::PXLSPtgs APtgs, int APtgsSize);
	void __fastcall AddRow(const int ARow, const int AStyle);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCellMMU : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<Xlsmmu5::TXLSMMUBlock> _TXLSCellMMU__1;
	
	
private:
	void __fastcall SetDebugSave(const bool Value);
	
protected:
	Xc12datasst5::TXc12DataSST* FSST;
	Xc12datastylesheet5::TXc12DataStyleSheet* FStyles;
	TXLSMMURowHeader FDefaultRowHdr;
	_TXLSCellMMU__1 FBlocks;
	Xlsmmu5::TXLSMMUBlockManager* FBlockManager;
	bool FIsUpdating;
	int FiCurrBlock;
	Xc12utils5::TXLSCellArea FDimension;
	TXLSFormulaHelper* FFormulaHelper;
	TXLSCellMMUIterate FIterate;
	int FSheetIndex;
	bool FDebugLoad;
	bool FDebugSave;
	System::Classes::TStrings* FDebugList;
	int FDebugMem;
	int FDebugCnt;
	TXLSCellMMUDebugData* FDebugData;
	bool __fastcall CheckIfRowHeaderAssigned(Xlsmmu5::TMMUPtr AHeader);
	void __fastcall InitBlock(const int AIndex);
	void __fastcall FreeBlock(const int AIndex);
	int __fastcall EncodeNumber(const double AValue, /* out */ double &AResult);
	void __fastcall AddBlocks(const int ALastIndex);
	bool __fastcall SelectBlock(const int ARow);
	bool __fastcall ExtendBlocks(int ARow);
	int __fastcall ItemSize(const int AXLate, const Xlsmmu5::TMMUPtr APtr);
	bool __fastcall XLateIsFormula(const int AXLate);
	Xc12utils5::TXLSCellType __fastcall XLateToCellType(const int AXLate);
	void __fastcall TrimEndBlocks();
	Xlsmmu5::TMMUPtr __fastcall GetValue(const PXLSCellItem ACell);
	Xlsmmu5::TMMUPtr __fastcall GetFormulaFmla(const Xlsmmu5::TMMUPtr AFormula, const int AXLate, /* out */ int &ASize);
	Xlsmmu5::TMMUPtr __fastcall GetFormulaPtgs(const Xlsmmu5::TMMUPtr AFormula, const int AXLate, /* out */ int &ASize)/* overload */;
	System::UnicodeString __fastcall GetFormulaStr(const Xlsmmu5::TMMUPtr AFormula, const int AXLate);
	int __fastcall GetFormulaValueSize(const Xlsmmu5::TMMUPtr AFormulaValue, const int AXLate);
	Xlsmmu5::TMMUPtr __fastcall AdjustFormulaMem(const PXLSCellItem ACell, const int ACol, const int ARow, const int ANewSize, /* out */ Xlsmmu5::TMMUPtr &AMem, /* out */ int &ASize);
	int __fastcall FindBlock(const int ARow);
	int __fastcall GetLastRow();
	bool __fastcall CheckCol(const int ACol);
	bool __fastcall CheckRow(const int ARow);
	void __fastcall DEBUG_AddFormulaFloat(const int ACol, const int ARow, const int AStyle, const double AValue, const Xlsformulatypes5::PXLSPtgs APtgs, int APtgsSize);
	
public:
	__fastcall TXLSCellMMU(const int ASheetIndex, System::Classes::TStrings* const ADebugList, Xc12datasst5::TXc12DataSST* const ASST, Xc12datastylesheet5::TXc12DataStyleSheet* const AStyles);
	__fastcall virtual ~TXLSCellMMU();
	void __fastcall Clear();
	bool __fastcall IsEmpty();
	bool __fastcall CalcDimensions();
	void __fastcall CalcRowDimensions(int ARow, /* out */ int &ACol1, /* out */ int &ACol2);
	int __fastcall GetStyle(PXLSCellItem ACell)/* overload */;
	int __fastcall GetStyle(const int ACol, const int ARow)/* overload */;
	void __fastcall SetStyle(const int ACol, const int ARow, int AStyle)/* overload */;
	void __fastcall SetStyle(const int ACol, const int ARow, PXLSCellItem ACell, int AStyle)/* overload */;
	void __fastcall SetRowStyle(const int ARow, const int AStyle);
	int __fastcall GetRowStyle(const int ARow);
	TXLSCellItem __fastcall CopyCell(const int ACol, const int ARow);
	void __fastcall InsertCell(const int ACol, const int ARow, const PXLSCellItem ACell);
	void __fastcall MoveCell(const int ASrcCol, const int ASrcRow, const int ADestCol, const int ADestRow);
	void __fastcall ExchangeCells(const int ACol1, const int ARow1, const int ACol2, const int ARow2);
	void __fastcall FreeCell(const PXLSCellItem ACell);
	void __fastcall ClearCell(const int ACol, const int ARow);
	void __fastcall DeleteCell(const int ACol, const int ARow);
	void __fastcall DeleteColumns(const int ACol1, const int ACol2);
	void __fastcall DeleteAndShiftColumns(const int ACol1, const int ACol2);
	void __fastcall DeleteRows(const int ARow1, const int ARow2);
	void __fastcall DeleteAndShiftRows(const int ARow1, const int ARow2);
	void __fastcall InsertColumns(const int ACol, const int ACount);
	void __fastcall InsertRows(const int ARow, const int ACount);
	void __fastcall InsertRows_ORIG(const int ARow, const int ACount);
	PXLSMMURowHeader __fastcall FindRow(const int ARow);
	PXLSMMURowHeader __fastcall AddRow(const int ARow, const int AStyle);
	void __fastcall ClearRowHeaders(const int ARow1, const int ARow2);
	void __fastcall CopyRowHeaders(const int ARow1, const int ARow2, const int ADestRow)/* overload */;
	void __fastcall CopyRowHeaders(TXLSCellMMU* ASrcMMU, const int ARow1, const int ARow2, const int ADestRow)/* overload */;
	Xc12utils5::TXLSCellType __fastcall CellType(const PXLSCellItem ACell);
	void __fastcall StoreBlank(const int ACol, const int ARow, const int AStyle, const bool AAcceptDefStyle = false);
	void __fastcall StoreBoolean(const int ACol, const int ARow, const int AStyle, const bool AValue);
	void __fastcall StoreFloat(const int ACol, const int ARow, const int AStyle, const double AValue);
	void __fastcall StoreError(const int ACol, const int ARow, const int AStyle, const Xc12utils5::TXc12CellError AValue);
	void __fastcall StoreString(const int ACol, const int ARow, const int AStyle, const int AValue)/* overload */;
	void __fastcall StoreString(const int ACol, const int ARow, const int AStyle, const System::UnicodeString AValue)/* overload */;
	bool __fastcall EmptyCell(const int ACol, const int ARow);
	TXLSCellItem __fastcall FindCell(const int ACol, const int ARow)/* overload */;
	bool __fastcall FindCell(const int ACol, const int ARow, /* out */ TXLSCellItem &ACell)/* overload */;
	bool __fastcall GetBlank(const int ACol, const int ARow)/* overload */;
	bool __fastcall GetBlank(const PXLSCellItem ACell)/* overload */;
	bool __fastcall GetEmpty(const int ACol, const int ARow)/* overload */;
	bool __fastcall GetBoolean(const int ACol, const int ARow, /* out */ bool &AValue)/* overload */;
	bool __fastcall GetBoolean(const PXLSCellItem ACell)/* overload */;
	double __fastcall GetFloat(const int ACol, const int ARow)/* overload */;
	double __fastcall GetFloat(const PXLSCellItem ACell)/* overload */;
	bool __fastcall GetError(const int ACol, const int ARow, /* out */ Xc12utils5::TXc12CellError &AValue)/* overload */;
	Xc12utils5::TXc12CellError __fastcall GetError(const PXLSCellItem ACell)/* overload */;
	bool __fastcall GetString(const int ACol, const int ARow, /* out */ System::UnicodeString &AValue)/* overload */;
	System::UnicodeString __fastcall GetString(const PXLSCellItem ACell)/* overload */;
	System::UnicodeString __fastcall GetString(const PXLSCellItem ACell, /* out */ Xc12datastylesheet5::PXc12FontRunArray &AFontRuns, /* out */ int &AFontRunsCount)/* overload */;
	int __fastcall GetStringSST(const PXLSCellItem ACell);
	bool __fastcall AsString(const int ACol, const int ARow, System::UnicodeString &AResult);
	Xc12utils5::TXc12CellError __fastcall AsFloat(int ACol, int ARow, double &Aresult, /* out */ bool &AEmptyCell);
	void __fastcall UpdateBoolean(int ACol, int ARow, bool AValue, const int AStyle = 0x0);
	void __fastcall UpdateFloat(const int ACol, const int ARow, const double AValue, const int AStyle = 0x0)/* overload */;
	void __fastcall UpdateError(const int ACol, const int ARow, const Xc12utils5::TXc12CellError AValue, const int AStyle = 0x0);
	void __fastcall UpdateString(const int ACol, const int ARow, const System::UnicodeString AValue, const int AStyle = 0x0);
	void __fastcall UpdateBlankOF(int ACol, int ARow, const int AStyle = 0x0);
	void __fastcall UpdateBooleanOF(int ACol, int ARow, bool AValue, const int AStyle = 0x0);
	void __fastcall UpdateFloatOF(const int ACol, const int ARow, const double AValue, const int AStyle = 0x0)/* overload */;
	void __fastcall UpdateErrorOF(const int ACol, const int ARow, const Xc12utils5::TXc12CellError AValue, const int AStyle = 0x0);
	void __fastcall UpdateStringOF(const int ACol, const int ARow, const System::UnicodeString AValue, const int AStyle = 0x0);
	void __fastcall ClearFormulaKeepValue(int ACol, int ARow);
	void __fastcall AddFormulaVal(const PXLSCellItem ACell, const int ACol, const int ARow, const bool AValue)/* overload */;
	void __fastcall AddFormulaVal(const int ACol, const int ARow, const bool AValue)/* overload */;
	void __fastcall AddFormulaVal(const PXLSCellItem ACell, const int ACol, const int ARow, const double AValue)/* overload */;
	void __fastcall AddFormulaVal(const int ACol, const int ARow, const double AValue)/* overload */;
	void __fastcall AddFormulaVal(const PXLSCellItem ACell, const int ACol, const int ARow, const Xc12utils5::TXc12CellError AValue)/* overload */;
	void __fastcall AddFormulaVal(const int ACol, const int ARow, const Xc12utils5::TXc12CellError AValue)/* overload */;
	void __fastcall AddFormulaVal(const PXLSCellItem ACell, const int ACol, const int ARow, const System::UnicodeString AValue)/* overload */;
	void __fastcall AddFormulaVal(const int ACol, const int ARow, const System::UnicodeString AValue)/* overload */;
	bool __fastcall IsFormula(const PXLSCellItem ACell)/* overload */;
	bool __fastcall IsFormula(const int ACol, const int ARow)/* overload */;
	TXLSCellFormulaType __fastcall FormulaType(const PXLSCellItem ACell);
	bool __fastcall IsFormulaCompiled(const PXLSCellItem ACell)/* overload */;
	bool __fastcall IsFormulaCompiled(const int ACol, const int ARow)/* overload */;
	int __fastcall GetFormulaPtgs(const PXLSCellItem ACell, /* out */ Xlsformulatypes5::PXLSPtgs &APtgs)/* overload */;
	void __fastcall SetFormulaPtgs(const int ACol, const int ARow, const PXLSCellItem ACell, const Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsSize);
	PXLSFormulaArea __fastcall GetFormulaTargetArea(const PXLSCellItem ACell);
	void __fastcall AddFormula(const int ACol, const int ARow, const System::UnicodeString AFormula, const double AValue)/* overload */;
	void __fastcall AddFormula(const int ACol, const int ARow, const int AStyle, const System::UnicodeString AFormula, const bool AValue)/* overload */;
	void __fastcall AddFormula(const int ACol, const int ARow, const int AStyle, const System::UnicodeString AFormula, const double AValue)/* overload */;
	void __fastcall AddFormula(const int ACol, const int ARow, const int AStyle, const System::UnicodeString AFormula, const System::UnicodeString AValue)/* overload */;
	void __fastcall AddFormula(const int ACol, const int ARow, const int AStyle, const System::UnicodeString AFormula, const Xc12utils5::TXc12CellError AValue)/* overload */;
	void __fastcall AddFormula(const int ACol, const int ARow, const int AStyle, const Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsSize, const bool AValue)/* overload */;
	void __fastcall AddFormula(const int ACol, const int ARow, const int AStyle, const Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsSize, const double AValue)/* overload */;
	void __fastcall AddFormula(const int ACol, const int ARow, const int AStyle, const Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsSize, const System::UnicodeString AValue)/* overload */;
	void __fastcall AddFormula(const int ACol, const int ARow, const int AStyle, const Xlsformulatypes5::PXLSPtgs APtgs, const int APtgsSize, const Xc12utils5::TXc12CellError AValue)/* overload */;
	void __fastcall AddFormula97(const int ACol, const int ARow, void * APtgs, const int APtgsSz, const int AStyle);
	System::UnicodeString __fastcall GetFormula(const int ACol, const int ARow)/* overload */;
	System::UnicodeString __fastcall GetFormula(const PXLSCellItem ACell)/* overload */;
	bool __fastcall GetFormulaValBoolean(const int ACol, const int ARow, /* out */ bool &AValue)/* overload */;
	bool __fastcall GetFormulaValBoolean(const PXLSCellItem ACell)/* overload */;
	bool __fastcall GetFormulaValFloat(const int ACol, const int ARow, /* out */ double &AValue)/* overload */;
	double __fastcall GetFormulaValFloat(const PXLSCellItem ACell)/* overload */;
	bool __fastcall GetFormulaValError(const int ACol, const int ARow, /* out */ Xc12utils5::TXc12CellError &AValue)/* overload */;
	Xc12utils5::TXc12CellError __fastcall GetFormulaValError(const PXLSCellItem ACell)/* overload */;
	bool __fastcall GetFormulaValString(const int ACol, const int ARow, /* out */ System::UnicodeString &AValue)/* overload */;
	System::UnicodeString __fastcall GetFormulaValString(const PXLSCellItem ACell)/* overload */;
	void __fastcall BeginIterate(const int ARow = 0x0);
	bool __fastcall IterateNext();
	void __fastcall BeginIterateRow(const int ARow = 0xffffffff);
	bool __fastcall IterateNextRow();
	void __fastcall BeginIterateCol();
	bool __fastcall IterateNextCol();
	Xc12utils5::TXLSCellType __fastcall IterCellType();
	TXLSCellFormulaType __fastcall IterFormulaType();
	int __fastcall IterCellCol();
	int __fastcall IterCellRow();
	PXLSMMURowHeader __fastcall IterRow();
	PXLSCellItem __fastcall IterCell();
	System::UnicodeString __fastcall IterRefStr();
	int __fastcall IterGetStyleIndex();
	bool __fastcall IterGetBoolean();
	double __fastcall IterGetFloat();
	Xc12utils5::TXc12CellError __fastcall IterGetError();
	int __fastcall IterGetStringIndex();
	void __fastcall IterGetFormula();
	int __fastcall IterGetFormulaPtgs(Xlsformulatypes5::PXLSPtgs &APtgs);
	void __fastcall StoreFormula();
	void __fastcall RetriveFormula(const PXLSCellItem ACell);
	void __fastcall DebugTest(const System::UnicodeString ATest, System::Classes::TStrings* AList);
	bool __fastcall CheckIntegrity(System::Classes::TStrings* const AList);
	void __fastcall SaveDebug(const System::UnicodeString AFilename);
	void __fastcall LoadDebug(const System::UnicodeString AFilename);
	void __fastcall BeginDebug();
	void __fastcall EndDebug();
	void __fastcall DebugAddEmpty(const int ACount);
	void __fastcall DebugAddFloat(const double AValue)/* overload */;
	void __fastcall DebugAddFloat(const double *AValues, const int AValues_High)/* overload */;
	void __fastcall DebugAddFormulaFloat(const double AValue, const int ASize)/* overload */;
	void __fastcall Test();
	__property TXLSCellMMUDebugData* DebugData = {read=FDebugData};
	__property bool DebugSave = {read=FDebugSave, write=SetDebugSave, nodefault};
	__property Xc12utils5::TXLSCellArea Dimension = {read=FDimension, write=FDimension};
	__property TXLSFormulaHelper* FormulaHelper = {read=FFormulaHelper};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 CELLXL_FLAG_STYLE = System::Int8(0x40);
static const System::Int8 CELLXL_BLANK = System::Int8(0x1);
static const System::Int8 CELLXL_NUM_8 = System::Int8(0x2);
static const System::Int8 CELLXL_NUM_16 = System::Int8(0x3);
static const System::Int8 CELLXL_NUM_32 = System::Int8(0x4);
static const System::Int8 CELLXL_NUM_2DEC = System::Int8(0x5);
static const System::Int8 CELLXL_NUM_4DEC = System::Int8(0x6);
static const System::Int8 CELLXL_NUM_SINGLE = System::Int8(0x7);
static const System::Int8 CELLXL_NUM_DOUBLE = System::Int8(0x8);
static const System::Int8 CELLXL_STR_16 = System::Int8(0x9);
static const System::Int8 CELLXL_STR_32 = System::Int8(0xa);
static const System::Int8 CELLXL_BOOLEAN = System::Int8(0xb);
static const System::Int8 CELLXL_ERROR = System::Int8(0xc);
static const System::Int8 CELLXL_FMLA_FIRST = System::Int8(0x14);
static const System::Int8 CELLXL_FMLA_FLOAT = System::Int8(0x14);
static const System::Int8 CELLXL_FMLA_STR = System::Int8(0x15);
static const System::Int8 CELLXL_FMLA_BOOLEAN = System::Int8(0x16);
static const System::Int8 CELLXL_FMLA_ERROR = System::Int8(0x17);
static const System::Int8 CELLXL_FMLA_LAST = System::Int8(0x17);
static const System::Int8 CELLMMU_STYLE_SZ = System::Int8(0x2);
static const System::Int8 CELLMMU_FMLA_FLAG_SZ = System::Int8(0x1);
static const System::Int8 CELLMMU_FMLA_FLAG_ARRAY = System::Int8(0x40);
static const System::Byte CELLMMU_FMLA_FLAG_TABLE = System::Byte(0x80);
static const System::Int8 CELLMMU_FMLA_FLAG_MASK = System::Int8(0x1f);
static const System::Byte CELLMMU_FMLA_IS_PTGS = System::Byte(0xff);
static const System::Int8 CELLMMU_FMLA_IS_STR_8 = System::Int8(0x1);
static const System::Int8 CELLMMU_FMLA_IS_STR_UC = System::Int8(0x0);
}	/* namespace Xlscellmmu5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSCELLMMU5)
using namespace Xlscellmmu5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlscellmmu5HPP
