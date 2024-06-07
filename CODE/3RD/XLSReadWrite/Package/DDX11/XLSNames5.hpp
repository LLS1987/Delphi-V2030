// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSNames5.pas' rev: 35.00 (Windows)

#ifndef Xlsnames5HPP
#define Xlsnames5HPP

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
#include <Xc12DataWorkbook5.hpp>
#include <Xc12Manager5.hpp>
#include <BIFF_Names5.hpp>
#include <XLSUtils5.hpp>
#include <XLSFormulaTypes5.hpp>
#include <XLSEncodeFmla5.hpp>
#include <XLSFormula5.hpp>
#include <XLSClassFactory5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsnames5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSName;
class DELPHICLASS TXLSNames;
class DELPHICLASS TXLSNames_Int;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSName : public Xc12dataworkbook5::TXc12DefinedName
{
	typedef Xc12dataworkbook5::TXc12DefinedName inherited;
	
private:
	HIDESBASE void __fastcall SetName(const System::UnicodeString Value);
	Xc12utils5::PXLS3dCellArea __fastcall GetArea();
	
protected:
	TXLSNames* FParent;
	void __fastcall ClearDefinition();
	void __fastcall Compile();
	virtual System::UnicodeString __fastcall GetContent();
	System::UnicodeString __fastcall GetDefinition();
	void __fastcall SetDefinition(const System::UnicodeString Value);
	__property Ptgs;
	__property PtgsSz;
	__property Content = {default=0};
	__property OrigContent = {default=0};
	__property Deleted;
	__property Unused97;
	
public:
	__fastcall TXLSName(TXLSNames* AParent);
	void __fastcall Update();
	bool __fastcall Hit(const int ASheetIndex, const int ACol, const int ARow);
	__property System::UnicodeString Name = {read=FName, write=SetName};
	__property System::UnicodeString Definition = {read=GetDefinition, write=SetDefinition};
	__property Xc12utils5::PXLS3dCellArea Area = {read=GetArea};
public:
	/* TXc12DefinedName.Destroy */ inline __fastcall virtual ~TXLSName() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSNames : public Xc12dataworkbook5::TXc12DefinedNames
{
	typedef Xc12dataworkbook5::TXc12DefinedNames inherited;
	
public:
	TXLSName* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TXLSName* __fastcall GetItems(int Index);
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	Xlsformula5::TXLSFormulaHandler* FFormulas;
	TXLSName* __fastcall DoAdd(const System::UnicodeString AName, const System::UnicodeString ADefinition, const int ALocalSheetId);
	
public:
	__fastcall TXLSNames(Xlsclassfactory5::TXLSClassFactory* AClassFactory, Xc12manager5::TXc12Manager* AManager, Xlsformula5::TXLSFormulaHandler* AFormulas);
	void __fastcall ToStrings(const int ASheetId, System::Classes::TStrings* AList, const bool ASetObject = false);
	void __fastcall DumpNames(System::Classes::TStrings* AList);
	TXLSName* __fastcall Hit(const int ASheetIndex, const int ACol, const int ARow);
	HIDESBASE TXLSName* __fastcall Add(const System::UnicodeString AName, const System::UnicodeString ASheetName, const int ACol, const int ARow)/* overload */;
	HIDESBASE TXLSName* __fastcall Add(const System::UnicodeString AName, const System::UnicodeString ASheetName, const int ACol1, const int ARow1, const int ACol2, const int ARow2)/* overload */;
	HIDESBASE TXLSName* __fastcall Add(const System::UnicodeString AName, const System::UnicodeString ADefinition, const int ALocalSheetId = 0xffffffff)/* overload */;
	HIDESBASE TXLSName* __fastcall Add(const System::UnicodeString AName, const System::UnicodeString ADefinition, const System::UnicodeString ASheetName)/* overload */;
	TXLSName* __fastcall Find(const System::UnicodeString AName);
	__property TXLSName* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXc12DefinedNames.Destroy */ inline __fastcall virtual ~TXLSNames() { }
	
	/* Hoisted overloads: */
	
public:
	inline Xc12dataworkbook5::TXc12DefinedName* __fastcall  Add(const Xc12utils5::TXc12BuiltInName ABuiltIn, const int ALocalSheetId){ return Xc12dataworkbook5::TXc12DefinedNames::Add(ABuiltIn, ALocalSheetId); }
	inline Xc12dataworkbook5::TXc12DefinedName* __fastcall  Add(const System::UnicodeString AName, const int ALocalSheetId){ return Xc12dataworkbook5::TXc12DefinedNames::Add(AName, ALocalSheetId); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSNames_Int : public TXLSNames
{
	typedef TXLSNames inherited;
	
protected:
	void __fastcall AdjustSheetInsert(const int ASheetIndex, const int ACount);
	void __fastcall AdjustSheetDelete(const int ASheetIndex, const int ACount);
	
public:
	void __fastcall AfterRead();
	void __fastcall AdjustSheetIndex(const int ASheetIndex, const int ACount);
	__property bool HashValid = {read=FHashValid, write=FHashValid, nodefault};
public:
	/* TXLSNames.Create */ inline __fastcall TXLSNames_Int(Xlsclassfactory5::TXLSClassFactory* AClassFactory, Xc12manager5::TXc12Manager* AManager, Xlsformula5::TXLSFormulaHandler* AFormulas) : TXLSNames(AClassFactory, AManager, AFormulas) { }
	
public:
	/* TXc12DefinedNames.Destroy */ inline __fastcall virtual ~TXLSNames_Int() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsnames5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSNAMES5)
using namespace Xlsnames5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsnames5HPP
