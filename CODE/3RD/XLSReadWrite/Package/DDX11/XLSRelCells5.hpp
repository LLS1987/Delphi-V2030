// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSRelCells5.pas' rev: 35.00 (Windows)

#ifndef Xlsrelcells5HPP
#define Xlsrelcells5HPP

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
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>
#include <XLSSharedItems5.hpp>
#include <XLSCmdFormatValues5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsrelcells5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSRelCells;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSRelCells : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int __fastcall GetCols();
	int __fastcall GetRows();
	void __fastcall SetCols(const int Value);
	void __fastcall SetRows(const int Value);
	System::UnicodeString __fastcall GetRef();
	void __fastcall SetRef(const System::UnicodeString Value);
	int __fastcall GetColCount();
	int __fastcall GetRowCount();
	void __fastcall SetColCount(const int Value);
	void __fastcall SetRowCount(const int Value);
	System::UnicodeString __fastcall GetRefAbs();
	System::UnicodeString __fastcall GetShortRef();
	System::UnicodeString __fastcall GetAsStringRel(int ACol, int ARow);
	void __fastcall SetAsStringRel(int ACol, int ARow, const System::UnicodeString Value);
	bool __fastcall GetAsBooleanRel(int ACol, int ARow);
	Xc12utils5::TXc12CellError __fastcall GetAsErrorRel(int ACol, int ARow);
	double __fastcall GetAsFloatRel(int ACol, int ARow);
	Xlsshareditems5::TXLSSharedItemsValue* __fastcall GetAsSharedItemRel(int ACol, int ARow);
	void __fastcall SetAsBooleanRel(int ACol, int ARow, const bool Value);
	void __fastcall SetAsErrorRel(int ACol, int ARow, const Xc12utils5::TXc12CellError Value);
	void __fastcall SetAsFloatRel(int ACol, int ARow, const double Value);
	void __fastcall SetAsSharedItemRel(int ACol, int ARow, Xlsshareditems5::TXLSSharedItemsValue* const Value);
	bool __fastcall GetAsBooleanCurr();
	Xc12utils5::TXc12CellError __fastcall GetAsErrorCurr();
	double __fastcall GetAsFloatCurr();
	System::UnicodeString __fastcall GetAsStringCurr();
	void __fastcall SetAsBooleanCurr(const bool Value);
	void __fastcall SetAsErrorCurr(const Xc12utils5::TXc12CellError Value);
	void __fastcall SetAsFloatCurr(const double Value);
	void __fastcall SetAsStringCurr(const System::UnicodeString Value);
	Xc12utils5::TXLSCellType __fastcall GetCellTypeRel(int ACol, int ARow);
	void __fastcall Set__FRef(const System::UnicodeString Value);
	System::UnicodeString __fastcall QuotedSheetname(System::UnicodeString Value);
	
protected:
	System::UnicodeString __FRef;
	int FCol1;
	int FRow1;
	int FCol2;
	int FRow2;
	int FCurrCol;
	int FCurrRow;
	bool FAutoExtend;
	bool FExpand;
	Xlscmdformatvalues5::TXLSCmdFormatValues* FCommand;
	void __fastcall GetRelColRow(int &ACol, int &ARow)/* overload */;
	void __fastcall GetRelColRow(int &ACol1, int &ARow1, int &ACol2, int &ARow2)/* overload */;
	void __fastcall DoAutoExtend(int ACol, int ARow);
	virtual TXLSRelCells* __fastcall Clone() = 0 ;
	virtual bool __fastcall GetAsBoolean(int ACol, int ARow) = 0 ;
	virtual double __fastcall GetAsFloat(int ACol, int ARow) = 0 ;
	virtual System::UnicodeString __fastcall GetAsString(int ACol, int ARow) = 0 ;
	virtual Xc12utils5::TXc12CellError __fastcall GetAsError(int ACol, int ARow) = 0 ;
	virtual bool __fastcall GetAsBlank(int ACol, int ARow) = 0 ;
	virtual bool __fastcall GetAsEmpty(int ACol, int ARow) = 0 ;
	virtual System::UnicodeString __fastcall GetAsFmtString(int ACol, int ARow) = 0 ;
	virtual Xlsshareditems5::TXLSSharedItemsValue* __fastcall GetAsSharedItem(int ACol, int ARow) = 0 ;
	virtual Xc12utils5::TXLSCellType __fastcall GetCellType(int ACol, int ARow) = 0 ;
	virtual bool __fastcall GetIsDateTime(int Col, int Row) = 0 ;
	virtual void __fastcall SetAsBoolean(int ACol, int ARow, const bool Value) = 0 ;
	virtual void __fastcall SetAsFloat(int ACol, int ARow, const double Value) = 0 ;
	virtual void __fastcall SetAsString(int ACol, int ARow, const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetAsError(int ACol, int ARow, const Xc12utils5::TXc12CellError Value) = 0 ;
	virtual void __fastcall SetAsBlank(int ACol, int ARow, const bool Value) = 0 ;
	virtual void __fastcall SetAsSharedItem(int ACol, int ARow, Xlsshareditems5::TXLSSharedItemsValue* Value) = 0 ;
	
public:
	__fastcall TXLSRelCells()/* overload */;
	__fastcall TXLSRelCells(int ACol, int ARow)/* overload */;
	__fastcall TXLSRelCells(int ACol1, int ARow1, int ACol2, int ARow2)/* overload */;
	__fastcall virtual ~TXLSRelCells();
	bool __fastcall Valid();
	bool __fastcall IsList();
	void __fastcall SetArea(int ACol1, int ARow1, int ACol2, int ARow2);
	virtual void __fastcall ClearAll(int ACol1, int ARow1, int ACol2, int ARow2) = 0 /* overload */;
	void __fastcall ClearAll()/* overload */;
	bool __fastcall Hit(int ACol, int ARow);
	TXLSRelCells* __fastcall CloneRow(int ARow);
	TXLSRelCells* __fastcall CloneCol(int ACol);
	bool __fastcall IsArea();
	int __fastcall GetFloatArray(/* out */ Xlsutils5::TDynSingleArray &AArray, int AMaxSize);
	int __fastcall GetStrArray(/* out */ Xlsutils5::TDynStringArray &AArray, int AMaxSize);
	System::UnicodeString __fastcall AsText();
	virtual void __fastcall AutoWidthCol(int ACol) = 0 ;
	void __fastcall AutoWidthCols();
	System::UnicodeString __fastcall RefTopRow();
	virtual System::UnicodeString __fastcall SheetName() = 0 ;
	virtual int __fastcall SheetIndex() = 0 ;
	void __fastcall SettCurrent(int ACol, int ARow);
	void __fastcall IncCol(int ABy = 0x1);
	void __fastcall IncRow(int ABy = 0x1);
	void __fastcall IncCols(int ABy = 0x1);
	void __fastcall IncRows(int ABy = 0x1);
	int __fastcall LastNonBlankRow();
	bool __fastcall Equal(int ACol, int ARow, Xlsshareditems5::TXLSSharedItemsValue* AValue);
	bool __fastcall EqualRel(int ACol, int ARow, Xlsshareditems5::TXLSSharedItemsValue* AValue);
	virtual void __fastcall BeginCommand() = 0 ;
	virtual void __fastcall ApplyCommand() = 0 /* overload */;
	virtual void __fastcall ApplyCommand(const int ACol, const int ARow) = 0 /* overload */;
	virtual void __fastcall ApplyCommand(int ACol1, int ARow1, int ACol2, int ARow2) = 0 /* overload */;
	void __fastcall ApplyCommandRel(int ACol, int ARow)/* overload */;
	void __fastcall ApplyCommandRel(int ACol1, int ARow1, int ACol2, int ARow2)/* overload */;
	__property int Col1 = {read=FCol1, write=FCol1, nodefault};
	__property int Row1 = {read=FRow1, write=FRow1, nodefault};
	__property int Col2 = {read=FCol2, write=FCol2, nodefault};
	__property int Row2 = {read=FRow2, write=FRow2, nodefault};
	__property int Cols = {read=GetCols, write=SetCols, nodefault};
	__property int Rows = {read=GetRows, write=SetRows, nodefault};
	__property System::UnicodeString __Ref = {read=__FRef, write=Set__FRef};
	__property System::UnicodeString RefAbs = {read=GetRefAbs, write=SetRef};
	__property System::UnicodeString Ref = {read=GetRef, write=SetRef};
	__property System::UnicodeString ShortRef = {read=GetShortRef, write=SetRef};
	__property bool AutoExtend = {read=FAutoExtend, write=FAutoExtend, nodefault};
	__property double AsFloat[int ACol][int ARow] = {read=GetAsFloat, write=SetAsFloat};
	__property System::UnicodeString AsString[int ACol][int ARow] = {read=GetAsString, write=SetAsString};
	__property bool AsBoolean[int ACol][int ARow] = {read=GetAsBoolean, write=SetAsBoolean};
	__property Xc12utils5::TXc12CellError AsError[int ACol][int ARow] = {read=GetAsError, write=SetAsError};
	__property bool AsBlank[int ACol][int ARow] = {read=GetAsBlank, write=SetAsBlank};
	__property bool AsEmpty[int ACol][int ARow] = {read=GetAsEmpty};
	__property Xlsshareditems5::TXLSSharedItemsValue* AsSharedItem[int ACol][int ARow] = {read=GetAsSharedItem, write=SetAsSharedItem};
	__property bool AsBooleanCurr = {read=GetAsBooleanCurr, write=SetAsBooleanCurr, nodefault};
	__property double AsFloatCurr = {read=GetAsFloatCurr, write=SetAsFloatCurr};
	__property System::UnicodeString AsStringCurr = {read=GetAsStringCurr, write=SetAsStringCurr};
	__property Xc12utils5::TXc12CellError AsErrorCurr = {read=GetAsErrorCurr, write=SetAsErrorCurr, nodefault};
	__property bool AsBooleanRel[int ACol][int ARow] = {read=GetAsBooleanRel, write=SetAsBooleanRel};
	__property double AsFloatRel[int ACol][int ARow] = {read=GetAsFloatRel, write=SetAsFloatRel};
	__property System::UnicodeString AsStringRel[int ACol][int ARow] = {read=GetAsStringRel, write=SetAsStringRel};
	__property Xc12utils5::TXc12CellError AsErrorRel[int ACol][int ARow] = {read=GetAsErrorRel, write=SetAsErrorRel};
	__property Xlsshareditems5::TXLSSharedItemsValue* AsSharedItemRel[int ACol][int ARow] = {read=GetAsSharedItemRel, write=SetAsSharedItemRel};
	__property Xc12utils5::TXLSCellType CellType[int ACol][int ARow] = {read=GetCellType};
	__property Xc12utils5::TXLSCellType CellTypeRel[int ACol][int ARow] = {read=GetCellTypeRel};
	__property bool IsDateTime[int Col][int Row] = {read=GetIsDateTime};
	__property int ColCount = {read=GetColCount, write=SetColCount, nodefault};
	__property int RowCount = {read=GetRowCount, write=SetRowCount, nodefault};
	__property int CurrCol = {read=FCurrCol, write=FCurrCol, nodefault};
	__property int CurrRow = {read=FCurrRow, write=FCurrRow, nodefault};
	__property bool Expand = {read=FExpand, write=FExpand, nodefault};
	__property Xlscmdformatvalues5::TXLSCmdFormatValues* Command = {read=FCommand, write=FCommand};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsrelcells5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSRELCELLS5)
using namespace Xlsrelcells5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsrelcells5HPP
