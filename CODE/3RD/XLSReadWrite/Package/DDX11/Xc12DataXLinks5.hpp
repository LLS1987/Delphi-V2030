// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Xc12DataXLinks5.pas' rev: 35.00 (Windows)

#ifndef Xc12dataxlinks5HPP
#define Xc12dataxlinks5HPP

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
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>
#include <Xc12Common5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xc12dataxlinks5
{
//-- forward type declarations -----------------------------------------------
struct TXc12XCellData;
class DELPHICLASS TXc12XDefinedName;
class DELPHICLASS TXc12XDefinedNames;
class DELPHICLASS TXc12XCellValue;
class DELPHICLASS TXc12XCell;
class DELPHICLASS TXc12XRow;
class DELPHICLASS TXc12XSheetData;
class DELPHICLASS TXc12XSheetDataSet;
class DELPHICLASS TXc12XExternalBook;
class DELPHICLASS TXc12DdeValue;
class DELPHICLASS TXc12DdeValues;
class DELPHICLASS TXc12DdeItem;
class DELPHICLASS TXc12DdeLink;
class DELPHICLASS TXc12OleItem;
class DELPHICLASS TXc12OleLink;
class DELPHICLASS TXc12ExternalLink;
class DELPHICLASS TXc12DataXLinks;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXc12XCellType : unsigned char { x12ctNil, x12ctBoolean, x12ctError, x12ctFloat, x12ctString };

enum DECLSPEC_DENUM TXc121DdeValueType : unsigned char { x12dvtNil, x12dvtBoolean, x12dvtFloat, x12dvtError, x12dvtString };

struct DECLSPEC_DRECORD TXc12XCellData
{
	
public:
	TXc12XCellType CT;
	union
	{
		struct 
		{
			System::WideChar *valString;
		};
		struct 
		{
			double valFloat;
		};
		struct 
		{
			Xc12utils5::TXc12CellError valError;
		};
		struct 
		{
			bool valBoolean;
		};
		
	};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12XDefinedName : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FName;
	System::UnicodeString FRefersTo;
	int FSheetId;
	
public:
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString RefersTo = {read=FRefersTo, write=FRefersTo};
	__property int SheetId = {read=FSheetId, write=FSheetId, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXc12XDefinedName() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12XDefinedName() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12XDefinedNames : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12XDefinedName* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12XDefinedName* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12XDefinedNames();
	HIDESBASE TXc12XDefinedName* __fastcall Add();
	__property TXc12XDefinedName* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12XDefinedNames() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXc12XCellValue : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool __fastcall GetAsBoolean();
	Xc12utils5::TXc12CellError __fastcall GetAsError();
	double __fastcall GetAsFloat();
	System::UnicodeString __fastcall GetAsString();
	void __fastcall SetAsBoolean(const bool Value);
	void __fastcall SetAsError(const Xc12utils5::TXc12CellError Value);
	void __fastcall SetAsFloat(const double Value);
	void __fastcall SetAsString(const System::UnicodeString Value);
	bool __fastcall GetAsNil();
	void __fastcall SetAsNil(const bool Value);
	
protected:
	TXc12XCellData FData;
	
public:
	__fastcall TXc12XCellValue();
	__fastcall virtual ~TXc12XCellValue();
	void __fastcall Clear();
	__property bool AsBoolean = {read=GetAsBoolean, write=SetAsBoolean, nodefault};
	__property Xc12utils5::TXc12CellError AsError = {read=GetAsError, write=SetAsError, nodefault};
	__property double AsFloat = {read=GetAsFloat, write=SetAsFloat};
	__property System::UnicodeString AsString = {read=GetAsString, write=SetAsString};
	__property bool AsNil = {read=GetAsNil, write=SetAsNil, nodefault};
	__property TXc12XCellType Type_ = {read=FData.CT, nodefault};
	__property TXc12XCellData Data = {read=FData};
};


class PASCALIMPLEMENTATION TXc12XCell : public TXc12XCellValue
{
	typedef TXc12XCellValue inherited;
	
private:
	System::UnicodeString __fastcall GetCellRef();
	void __fastcall SetCellRef(const System::UnicodeString Value);
	
protected:
	int FCol;
	int FRow;
	int FValueMetadata;
	
public:
	__property System::UnicodeString CellRef = {read=GetCellRef, write=SetCellRef};
	__property int Col = {read=FCol, write=FCol, nodefault};
	__property int Row = {read=FRow, write=FRow, nodefault};
	__property int ValueMetadata = {read=FValueMetadata, write=FValueMetadata, nodefault};
public:
	/* TXc12XCellValue.Create */ inline __fastcall TXc12XCell() : TXc12XCellValue() { }
	/* TXc12XCellValue.Destroy */ inline __fastcall virtual ~TXc12XCell() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12XRow : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12XCell* operator[](int Index) { return this->Cells[Index]; }
	
private:
	TXc12XCell* __fastcall GetCells(int Index);
	
protected:
	int FRow;
	
public:
	__fastcall TXc12XRow();
	HIDESBASE TXc12XCell* __fastcall Add();
	__property int Row = {read=FRow, write=FRow, nodefault};
	__property TXc12XCell* Cells[int Index] = {read=GetCells/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12XRow() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12XSheetData : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12XRow* operator[](int Index) { return this->Rows[Index]; }
	
private:
	TXc12XRow* __fastcall GetRows(int Index);
	
protected:
	int FSheetId;
	bool FRefreshError;
	
public:
	__fastcall TXc12XSheetData();
	HIDESBASE TXc12XRow* __fastcall Add();
	bool __fastcall FindCell(int ACol, int ARow, /* out */ TXc12XCellData &AValue);
	__property int SheetId = {read=FSheetId, write=FSheetId, nodefault};
	__property bool RefreshError = {read=FRefreshError, write=FRefreshError, nodefault};
	__property TXc12XRow* Rows[int Index] = {read=GetRows/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12XSheetData() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12XSheetDataSet : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12XSheetData* operator[](int Index) { return this->SheetData[Index]; }
	
private:
	TXc12XSheetData* __fastcall GetSheetData(int Index);
	
public:
	__fastcall TXc12XSheetDataSet();
	HIDESBASE TXc12XSheetData* __fastcall Add();
	TXc12XSheetData* __fastcall FindSheet(int ASheet);
	__property TXc12XSheetData* SheetData[int Index] = {read=GetSheetData/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12XSheetDataSet() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12XExternalBook : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::Classes::TStringList* FSheetNames;
	TXc12XDefinedNames* FDefinedNames;
	TXc12XSheetDataSet* FSheetDataSet;
	System::UnicodeString FFilename;
	
public:
	__fastcall TXc12XExternalBook();
	__fastcall virtual ~TXc12XExternalBook();
	int __fastcall FindSheetName(System::UnicodeString AName);
	__property System::Classes::TStringList* SheetNames = {read=FSheetNames};
	__property TXc12XDefinedNames* DefinedNames = {read=FDefinedNames};
	__property TXc12XSheetDataSet* SheetDataSet = {read=FSheetDataSet};
	__property System::UnicodeString Filename = {read=FFilename, write=FFilename};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXc12DdeValue : public TXc12XCellValue
{
	typedef TXc12XCellValue inherited;
	
public:
	/* TXc12XCellValue.Create */ inline __fastcall TXc12DdeValue() : TXc12XCellValue() { }
	/* TXc12XCellValue.Destroy */ inline __fastcall virtual ~TXc12DdeValue() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DdeValues : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12DdeValue* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12DdeValue* __fastcall GetItems(int Index);
	
protected:
	int FCols;
	int FRows;
	
public:
	__fastcall TXc12DdeValues();
	HIDESBASE TXc12DdeValue* __fastcall Add();
	__property int Cols = {read=FCols, write=FCols, nodefault};
	__property int Rows = {read=FRows, write=FRows, nodefault};
	__property TXc12DdeValue* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12DdeValues() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DdeItem : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FName;
	bool FOle;
	bool FAdvise;
	bool FPreferPic;
	TXc12DdeValues* FValues;
	
public:
	__fastcall TXc12DdeItem();
	__fastcall virtual ~TXc12DdeItem();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property bool Ole = {read=FOle, write=FOle, nodefault};
	__property bool Advise = {read=FAdvise, write=FAdvise, nodefault};
	__property bool PreferPic = {read=FPreferPic, write=FPreferPic, nodefault};
	__property TXc12DdeValues* Values = {read=FValues};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DdeLink : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12DdeItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12DdeItem* __fastcall GetItems(int Index);
	
protected:
	System::UnicodeString FDdeService;
	System::UnicodeString FDdeTopic;
	
public:
	__fastcall TXc12DdeLink();
	HIDESBASE TXc12DdeItem* __fastcall Add();
	__property System::UnicodeString DdeService = {read=FDdeService, write=FDdeService};
	__property System::UnicodeString DdeTopic = {read=FDdeTopic, write=FDdeTopic};
	__property TXc12DdeItem* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12DdeLink() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12OleItem : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FName;
	bool FIcon;
	bool FAdvice;
	bool FPreferPic;
	
public:
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property bool Icon = {read=FIcon, write=FIcon, nodefault};
	__property bool Advice = {read=FAdvice, write=FAdvice, nodefault};
	__property bool PreferPic = {read=FPreferPic, write=FPreferPic, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXc12OleItem() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12OleItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12OleLink : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12OleItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12OleItem* __fastcall GetItems(int Index);
	
protected:
	System::UnicodeString FFilename;
	System::UnicodeString FProgId;
	
public:
	__fastcall TXc12OleLink();
	HIDESBASE TXc12OleItem* __fastcall Add();
	__property System::UnicodeString Filename = {read=FFilename, write=FFilename};
	__property System::UnicodeString ProgId = {read=FProgId, write=FProgId};
	__property TXc12OleItem* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12OleLink() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12ExternalLink : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TXc12XExternalBook* FExternalBook;
	TXc12DdeLink* FDdeLink;
	TXc12OleLink* FOleLink;
	
public:
	__fastcall TXc12ExternalLink();
	__fastcall virtual ~TXc12ExternalLink();
	__property TXc12XExternalBook* ExternalBook = {read=FExternalBook};
	__property TXc12DdeLink* DdeLink = {read=FDdeLink};
	__property TXc12OleLink* OleLink = {read=FOleLink};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DataXLinks : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12ExternalLink* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12ExternalLink* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12DataXLinks();
	HIDESBASE TXc12ExternalLink* __fastcall Add();
	TXc12ExternalLink* __fastcall AddXBook(System::UnicodeString AFilename, System::UnicodeString *ASheets, const int ASheets_High);
	int __fastcall FindBook(const System::UnicodeString AName);
	bool __fastcall GetValue(int AXBook, int AXSheetIndex, int ACol, int ARow, /* out */ TXc12XCellData &AValue);
	__property TXc12ExternalLink* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12DataXLinks() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xc12dataxlinks5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XC12DATAXLINKS5)
using namespace Xc12dataxlinks5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xc12dataxlinks5HPP
