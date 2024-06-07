// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Xc12DataTable5.pas' rev: 35.00 (Windows)

#ifndef Xc12datatable5HPP
#define Xc12datatable5HPP

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
#include <xpgPSimpleDOM.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Common5.hpp>
#include <Xc12DataAutofilter5.hpp>
#include <XLSUtils5.hpp>
#include <XLSClassFactory5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xc12datatable5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXc12TableFormula;
class DELPHICLASS TXc12XmlColumnPr;
class DELPHICLASS TXc12TableColumn;
class DELPHICLASS TXc12TableColumns;
class DELPHICLASS TXc12TableStyleInfo;
class DELPHICLASS TXc12Table;
class DELPHICLASS TXc12Tables;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXc12TableType : unsigned char { x12ttWorksheet, x12ttXml, x12ttQueryTable };

enum DECLSPEC_DENUM TXc12TotalsRowFunction : unsigned char { x12trfNone, x12trfSum, x12trfMin, x12trfMax, x12trfAverage, x12trfCount, x12trfCountNums, x12trfStdDev, x12trfVar, x12trfCustom };

enum DECLSPEC_DENUM TXc12XmlDataType : unsigned char { x12xdtString, x12xdtNormalizedString, x12xdtToken, x12xdtByte, x12xdtUnsignedByte, x12xdtBase64Binary, x12xdtHexBinary, x12xdtInteger, x12xdtPositiveInteger, x12xdtNegativeInteger, x12xdtNonPositiveInteger, x12xdtNonNegativeInteger, x12xdtInt, x12xdtUnsignedInt, x12xdtLong, x12xdtUnsignedLong, x12xdtShort, x12xdtUnsignedShort, x12xdtDecimal, x12xdtFloat, x12xdtDouble, x12xdtBoolean, x12xdtTime, x12xdtDateTime, x12xdtDuration, x12xdtDate, x12xdtGMonth, x12xdtGYear, x12xdtGYearMonth, x12xdtGDay, x12xdtGMonthDay, x12xdtName, x12xdtQName, x12xdtNCName, x12xdtAnyURI, x12xdtLanguage, x12xdtID, x12xdtIDREF, x12xdtIDREFS, x12xdtENTITY, x12xdtENTITIES, x12xdtNOTATION, x12xdtNMTOKEN, x12xdtNMTOKENS, x12xdtAnyType };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12TableFormula : public Xc12common5::TXc12Data
{
	typedef Xc12common5::TXc12Data inherited;
	
protected:
	bool FArray;
	System::UnicodeString FContent;
	
public:
	__fastcall TXc12TableFormula();
	void __fastcall Clear();
	__property bool Array_ = {read=FArray, write=FArray, nodefault};
	__property System::UnicodeString Content = {read=FContent, write=FContent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12TableFormula() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12XmlColumnPr : public Xc12common5::TXc12Data
{
	typedef Xc12common5::TXc12Data inherited;
	
protected:
	int FMapId;
	System::UnicodeString FXpath;
	bool FDenormalized;
	TXc12XmlDataType FXmlDataType;
	
public:
	__fastcall TXc12XmlColumnPr();
	void __fastcall Clear();
	__property int MapId = {read=FMapId, write=FMapId, nodefault};
	__property System::UnicodeString Xpath = {read=FXpath, write=FXpath};
	__property bool Denormalized = {read=FDenormalized, write=FDenormalized, nodefault};
	__property TXc12XmlDataType XmlDataType = {read=FXmlDataType, write=FXmlDataType, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12XmlColumnPr() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12TableColumn : public Xc12common5::TXc12Data
{
	typedef Xc12common5::TXc12Data inherited;
	
protected:
	int FId;
	System::UnicodeString FUniqueName;
	System::UnicodeString FName;
	TXc12TotalsRowFunction FTotalsRowFunction;
	System::UnicodeString FTotalsRowLabel;
	int FQueryTableFieldId;
	System::UnicodeString FHeaderRowDxfId;
	System::UnicodeString FDataDxfId;
	System::UnicodeString FTotalsRowDxfId;
	System::UnicodeString FHeaderRowCellStyle;
	System::UnicodeString FDataCellStyle;
	System::UnicodeString FTotalsRowCellStyle;
	TXc12TableFormula* FCalculatedColumnFormula;
	TXc12TableFormula* FTotalsRowFormula;
	TXc12XmlColumnPr* FXmlColumnPr;
	
public:
	__fastcall TXc12TableColumn();
	__fastcall virtual ~TXc12TableColumn();
	void __fastcall Clear();
	__property int Id = {read=FId, write=FId, nodefault};
	__property System::UnicodeString UniqueName = {read=FUniqueName, write=FUniqueName};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property TXc12TotalsRowFunction TotalsRowFunction = {read=FTotalsRowFunction, write=FTotalsRowFunction, nodefault};
	__property System::UnicodeString TotalsRowLabel = {read=FTotalsRowLabel, write=FTotalsRowLabel};
	__property int QueryTableFieldId = {read=FQueryTableFieldId, write=FQueryTableFieldId, nodefault};
	__property System::UnicodeString HeaderRowDxfId = {read=FHeaderRowDxfId, write=FHeaderRowDxfId};
	__property System::UnicodeString DataDxfId = {read=FDataDxfId, write=FDataDxfId};
	__property System::UnicodeString TotalsRowDxfId = {read=FTotalsRowDxfId, write=FTotalsRowDxfId};
	__property System::UnicodeString HeaderRowCellStyle = {read=FHeaderRowCellStyle, write=FHeaderRowCellStyle};
	__property System::UnicodeString DataCellStyle = {read=FDataCellStyle, write=FDataCellStyle};
	__property System::UnicodeString TotalsRowCellStyle = {read=FTotalsRowCellStyle, write=FTotalsRowCellStyle};
	__property TXc12TableFormula* CalculatedColumnFormula = {read=FCalculatedColumnFormula};
	__property TXc12TableFormula* TotalsRowFormula = {read=FTotalsRowFormula};
	__property TXc12XmlColumnPr* XmlColumnPr = {read=FXmlColumnPr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12TableColumns : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12TableColumn* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12TableColumn* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12TableColumns();
	HIDESBASE TXc12TableColumn* __fastcall Add();
	__property TXc12TableColumn* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12TableColumns() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12TableStyleInfo : public Xc12common5::TXc12Data
{
	typedef Xc12common5::TXc12Data inherited;
	
protected:
	System::UnicodeString FName;
	bool FShowFirstColumn;
	bool FShowLastColumn;
	bool FShowRowStripes;
	bool FShowColumnStripes;
	
public:
	__fastcall TXc12TableStyleInfo();
	void __fastcall Clear();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property bool ShowFirstColumn = {read=FShowFirstColumn, write=FShowFirstColumn, nodefault};
	__property bool ShowLastColumn = {read=FShowLastColumn, write=FShowLastColumn, nodefault};
	__property bool ShowRowStripes = {read=FShowRowStripes, write=FShowRowStripes, nodefault};
	__property bool ShowColumnStripes = {read=FShowColumnStripes, write=FShowColumnStripes, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12TableStyleInfo() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Table : public Xc12common5::TXc12Data
{
	typedef Xc12common5::TXc12Data inherited;
	
protected:
	Xlsclassfactory5::TXLSClassFactory* FClassFactory;
	int FId;
	System::UnicodeString FName;
	System::UnicodeString FDisplayName;
	System::UnicodeString FComment;
	Xc12utils5::TXLSCellArea FRef;
	TXc12TableType FTableType;
	int FHeaderRowCount;
	bool FInsertRow;
	bool FInsertRowShift;
	int FTotalsRowCount;
	bool FTotalsRowShown;
	bool FPublished;
	System::UnicodeString FHeaderRowDxfId;
	System::UnicodeString FDataDxfId;
	System::UnicodeString FTotalsRowDxfId;
	System::UnicodeString FHeaderRowBorderDxfId;
	System::UnicodeString FTableBorderDxfId;
	System::UnicodeString FTotalsRowBorderDxfId;
	System::UnicodeString FHeaderRowCellStyle;
	System::UnicodeString FDataCellStyle;
	System::UnicodeString FTotalsRowCellStyle;
	int FConnectionId;
	Xc12dataautofilter5::TXc12AutoFilter* FAutoFilter;
	Xc12dataautofilter5::TXc12SortState* FSortState;
	TXc12TableColumns* FTableColumns;
	TXc12TableStyleInfo* FTableStyleInfo;
	Xpgpsimpledom::TXpgSimpleDOM* FQueryTable;
	
public:
	__fastcall TXc12Table(Xlsclassfactory5::TXLSClassFactory* AClassFactory);
	__fastcall virtual ~TXc12Table();
	void __fastcall Clear();
	bool __fastcall Hit(const int ACol, const int ARow);
	__property int Id = {read=FId, write=FId, nodefault};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString DisplayName = {read=FDisplayName, write=FDisplayName};
	__property System::UnicodeString Comment = {read=FComment, write=FComment};
	__property Xc12utils5::TXLSCellArea Ref = {read=FRef, write=FRef};
	__property TXc12TableType TableType = {read=FTableType, write=FTableType, nodefault};
	__property int HeaderRowCount = {read=FHeaderRowCount, write=FHeaderRowCount, nodefault};
	__property bool InsertRow = {read=FInsertRow, write=FInsertRow, nodefault};
	__property bool InsertRowShift = {read=FInsertRowShift, write=FInsertRowShift, nodefault};
	__property int TotalsRowCount = {read=FTotalsRowCount, write=FTotalsRowCount, nodefault};
	__property bool TotalsRowShown = {read=FTotalsRowShown, write=FTotalsRowShown, nodefault};
	__property bool Published_ = {read=FPublished, write=FPublished, nodefault};
	__property System::UnicodeString HeaderRowDxfId = {read=FHeaderRowDxfId, write=FHeaderRowDxfId};
	__property System::UnicodeString DataDxfId = {read=FDataDxfId, write=FDataDxfId};
	__property System::UnicodeString TotalsRowDxfId = {read=FTotalsRowDxfId, write=FTotalsRowDxfId};
	__property System::UnicodeString HeaderRowBorderDxfId = {read=FHeaderRowBorderDxfId, write=FHeaderRowBorderDxfId};
	__property System::UnicodeString TableBorderDxfId = {read=FTableBorderDxfId, write=FTableBorderDxfId};
	__property System::UnicodeString TotalsRowBorderDxfId = {read=FTotalsRowBorderDxfId, write=FTotalsRowBorderDxfId};
	__property System::UnicodeString HeaderRowCellStyle = {read=FHeaderRowCellStyle, write=FHeaderRowCellStyle};
	__property System::UnicodeString DataCellStyle = {read=FDataCellStyle, write=FDataCellStyle};
	__property System::UnicodeString TotalsRowCellStyle = {read=FTotalsRowCellStyle, write=FTotalsRowCellStyle};
	__property int ConnectionId = {read=FConnectionId, write=FConnectionId, nodefault};
	__property Xc12dataautofilter5::TXc12AutoFilter* AutoFilter = {read=FAutoFilter};
	__property Xc12dataautofilter5::TXc12SortState* SortState = {read=FSortState};
	__property TXc12TableColumns* TableColumns = {read=FTableColumns};
	__property TXc12TableStyleInfo* TableStyleInfo = {read=FTableStyleInfo};
	__property Xpgpsimpledom::TXpgSimpleDOM* QueryTable = {read=FQueryTable};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Tables : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12Table* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12Table* __fastcall GetItems(int Index);
	
protected:
	Xlsclassfactory5::TXLSClassFactory* FClassFactory;
	System::UnicodeString __fastcall FixupColNameFromFormula(System::UnicodeString AName);
	
public:
	__fastcall TXc12Tables(Xlsclassfactory5::TXLSClassFactory* AClassFactory);
	HIDESBASE TXc12Table* __fastcall Add();
	int __fastcall Find(const System::UnicodeString AName)/* overload */;
	int __fastcall Find(const int ACol, const int ARow)/* overload */;
	int __fastcall FindCol(const System::UnicodeString AName);
	__property TXc12Table* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12Tables() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xc12datatable5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XC12DATATABLE5)
using namespace Xc12datatable5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xc12datatable5HPP
