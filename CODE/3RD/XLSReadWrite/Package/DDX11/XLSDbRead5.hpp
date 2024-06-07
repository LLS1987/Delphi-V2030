// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSDbRead5.pas' rev: 35.00 (Windows)

#ifndef Xlsdbread5HPP
#define Xlsdbread5HPP

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
#include <Data.DB.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12DataWorksheet5.hpp>
#include <Xc12Manager5.hpp>
#include <XLSUtils5.hpp>
#include <XLSReadWriteII5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsdbread5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSDataSetList;
class DELPHICLASS TXLSDbRead5;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TXLSDbCellEvent)(System::TObject* Sender, bool IsFieldNames, Data::Db::TDataSet* Dataset, int FieldIndex, int Col, int Row);

typedef void __fastcall (__closure *TXLSDbRecordEvent)(System::TObject* Sender, bool &ReadRecord);

typedef void __fastcall (__closure *TXLSDbColEvent)(System::TObject* Sender, int &AColumn);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDataSetList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
	
private:
	typedef System::DynamicArray<bool> _TXLSDataSetList__1;
	
	typedef System::DynamicArray<bool> _TXLSDataSetList__2;
	
	
public:
	TXLSDataSetList* operator[](int Index) { return this->Items[Index]; }
	
private:
	Data::Db::TDataSet* FDataSet;
	_TXLSDataSetList__1 FIncludeFieldsInx;
	_TXLSDataSetList__2 FExcludeFieldsInx;
	TXLSDataSetList* __fastcall GetItems(int Index);
	
public:
	__fastcall TXLSDataSetList();
	__fastcall virtual ~TXLSDataSetList();
	virtual void __fastcall Clear();
	void __fastcall GetDetail(Data::Db::TDataSet* DS, System::Classes::TStrings* InclFields, System::Classes::TStrings* ExclFields);
	HIDESBASE TXLSDataSetList* __fastcall Add();
	__property Data::Db::TDataSet* DataSet = {read=FDataSet};
	__property TXLSDataSetList* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSDbRead5 : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Xlsreadwriteii5::TXLSReadWriteII5* FXLS;
	Data::Db::TDataSet* FDataSet;
	System::Byte FCol;
	System::Word FRow;
	int FSheet;
	System::Classes::TStrings* FIncludeFields;
	System::Classes::TStrings* FExcludeFields;
	bool FIncludeFieldnames;
	bool FReadDetailTables;
	bool FIndentDetailTables;
	bool FFormatCells;
	TXLSDataSetList* FXLSDetails;
	TXLSDbCellEvent FDbCellEvent;
	TXLSDbRecordEvent FDbRecordEvent;
	TXLSDbColEvent FDbColEvent;
	Xc12utils5::TXc12IndexColor __fastcall GetCellColors(int Index);
	void __fastcall SetCellColors(int Index, const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetExcludeFields(System::Classes::TStrings* const Value);
	void __fastcall SetIncludeFields(System::Classes::TStrings* const Value);
	void __fastcall ReadDataSet(TXLSDataSetList* XLSDetails, int &ARow, int Level);
	void __fastcall ShowFieldnames(TXLSDataSetList* XLSDetails, int &ARow, int Level);
	void __fastcall SetXLS(Xlsreadwriteii5::TXLSReadWriteII5* const Value);
	
public:
	__fastcall virtual TXLSDbRead5(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TXLSDbRead5();
	void __fastcall Read();
	__property Xc12utils5::TXc12IndexColor CellColors[int Index] = {read=GetCellColors, write=SetCellColors};
	
__published:
	__property System::Byte Column = {read=FCol, write=FCol, nodefault};
	__property Data::Db::TDataSet* Dataset = {read=FDataSet, write=FDataSet};
	__property System::Classes::TStrings* ExcludeFields = {read=FExcludeFields, write=SetExcludeFields};
	__property System::Classes::TStrings* IncludeFields = {read=FIncludeFields, write=SetIncludeFields};
	__property bool IncludeFieldnames = {read=FIncludeFieldnames, write=FIncludeFieldnames, nodefault};
	__property bool IndentDetailTables = {read=FIndentDetailTables, write=FIndentDetailTables, nodefault};
	__property bool ReadDetailTables = {read=FReadDetailTables, write=FReadDetailTables, nodefault};
	__property bool FormatCells = {read=FFormatCells, write=FFormatCells, nodefault};
	__property System::Word Row = {read=FRow, write=FRow, nodefault};
	__property int Sheet = {read=FSheet, write=FSheet, nodefault};
	__property Xlsreadwriteii5::TXLSReadWriteII5* XLS = {read=FXLS, write=SetXLS};
	__property TXLSDbCellEvent OnDbCell = {read=FDbCellEvent, write=FDbCellEvent};
	__property TXLSDbRecordEvent OnDbRecord = {read=FDbRecordEvent, write=FDbRecordEvent};
	__property TXLSDbColEvent OnDbColumn = {read=FDbColEvent, write=FDbColEvent};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsdbread5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSDBREAD5)
using namespace Xlsdbread5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsdbread5HPP
