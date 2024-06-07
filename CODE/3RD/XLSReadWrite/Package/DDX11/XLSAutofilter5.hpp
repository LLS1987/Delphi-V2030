// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSAutofilter5.pas' rev: 35.00 (Windows)

#ifndef Xlsautofilter5HPP
#define Xlsautofilter5HPP

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
#include <Xc12DataAutofilter5.hpp>
#include <Xc12DataWorkbook5.hpp>
#include <Xc12DataWorksheet5.hpp>
#include <Xc12Manager5.hpp>
#include <XLSUtils5.hpp>
#include <XLSClassFactory5.hpp>
#include <XLSNames5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsautofilter5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSAutofilterColumn;
class DELPHICLASS TXLSAutofilter;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSAutofilterColumn : public Xc12dataautofilter5::TXc12FilterColumn
{
	typedef Xc12dataautofilter5::TXc12FilterColumn inherited;
	
protected:
	bool __fastcall TestCondition(double AVal1, double AVal2, Xc12dataautofilter5::TXc12FilterOperator AOp)/* overload */;
	bool __fastcall TestCondition(System::UnicodeString AVal1, System::UnicodeString AVal2, Xc12dataautofilter5::TXc12FilterOperator AOp)/* overload */;
	bool __fastcall TestCondition(bool AVal1, bool AVal2, Xc12dataautofilter5::TXc12FilterOperator AOp)/* overload */;
	
public:
	void __fastcall Add(double AValue, Xc12dataautofilter5::TXc12FilterOperator AOperator)/* overload */;
	void __fastcall Add(double AValue1, double AValue2, Xc12dataautofilter5::TXc12FilterOperator AOperator1, Xc12dataautofilter5::TXc12FilterOperator AOperator2)/* overload */;
	void __fastcall Add(System::UnicodeString AValue1, System::UnicodeString AValue2, Xc12dataautofilter5::TXc12FilterOperator AOperator1, Xc12dataautofilter5::TXc12FilterOperator AOperator2)/* overload */;
	void __fastcall Add(System::UnicodeString AValue, Xc12dataautofilter5::TXc12FilterOperator AOperator)/* overload */;
	bool __fastcall Apply(double AValue)/* overload */;
	bool __fastcall Apply(System::UnicodeString AValue)/* overload */;
	bool __fastcall Apply(bool AValue)/* overload */;
public:
	/* TXc12FilterColumn.Create */ inline __fastcall TXLSAutofilterColumn() : Xc12dataautofilter5::TXc12FilterColumn() { }
	/* TXc12FilterColumn.Destroy */ inline __fastcall virtual ~TXLSAutofilterColumn() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSAutofilter : public Xc12dataautofilter5::TXc12AutoFilter
{
	typedef Xc12dataautofilter5::TXc12AutoFilter inherited;
	
protected:
	Xlsnames5::TXLSNames* FNames;
	Xc12dataworksheet5::TXc12DataWorksheet* FXc12Sheet;
	int __fastcall GetCol1();
	int __fastcall GetCol2();
	int __fastcall GetRow1();
	int __fastcall GetRow2();
	
public:
	__fastcall TXLSAutofilter(Xlsclassfactory5::TXLSClassFactory* AClassFactory, System::TObject* AClassOwner, Xlsnames5::TXLSNames* ANames);
	HIDESBASE void __fastcall Clear();
	bool __fastcall Assigned();
	bool __fastcall IsFiltered();
	void __fastcall Add(const int AC1, const int AR1, const int AC2, const int AR2);
	void __fastcall Move(int Col1, int Row1, int Col2, int Row2, int DeltaCol, int DeltaRow);
	__property int Col1 = {read=GetCol1, nodefault};
	__property int Row1 = {read=GetRow1, nodefault};
	__property int Col2 = {read=GetCol2, nodefault};
	__property int Row2 = {read=GetRow2, nodefault};
public:
	/* TXc12AutoFilter.Destroy */ inline __fastcall virtual ~TXLSAutofilter() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsautofilter5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSAUTOFILTER5)
using namespace Xlsautofilter5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsautofilter5HPP
