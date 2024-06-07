// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSHyperlinks5.pas' rev: 35.00 (Windows)

#ifndef Xlshyperlinks5HPP
#define Xlshyperlinks5HPP

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
#include <Xc12DataWorksheet5.hpp>
#include <Xc12Manager5.hpp>
#include <XLSUtils5.hpp>
#include <XLSMoveCopy5.hpp>
#include <XLSFormulaTypes5.hpp>
#include <XLSFormula5.hpp>
#include <XLSClassFactory5.hpp>
#include <XLSCellAreas5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlshyperlinks5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSHyperlink;
class DELPHICLASS TXLSHyperlinks;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSHyperlink : public Xc12dataworksheet5::TXc12Hyperlink
{
	typedef Xc12dataworksheet5::TXc12Hyperlink inherited;
	
private:
	System::UnicodeString __fastcall GetAddress();
	void __fastcall SetAddress(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetDescription();
	System::UnicodeString __fastcall GetToolTip();
	void __fastcall SetDescription(const System::UnicodeString Value);
	void __fastcall SetToolTip(const System::UnicodeString Value);
	
protected:
	TXLSHyperlinks* FOwner;
	System::UnicodeString __fastcall EncodeFileHLink(System::UnicodeString ALink);
	virtual int __fastcall GetCol1();
	virtual int __fastcall GetCol2();
	virtual int __fastcall GetRow1();
	virtual int __fastcall GetRow2();
	virtual void __fastcall SetCol1(const int Value);
	virtual void __fastcall SetCol2(const int Value);
	virtual void __fastcall SetRow1(const int Value);
	virtual void __fastcall SetRow2(const int Value);
	virtual void __fastcall Parse();
	
public:
	__fastcall virtual ~TXLSHyperlink();
	int __fastcall SheetIndex _DEPRECATED_ATTRIBUTE1("Do not use anymore. Take sheet index from the sheet that owns the hyperlink") ();
	bool __fastcall GetWorkbookTarget(/* out */ int &ACol, /* out */ int &ARow);
	__property TXLSHyperlinks* Owner = {read=FOwner, write=FOwner};
	__property System::UnicodeString Address = {read=GetAddress, write=SetAddress};
	__property int Col1 = {read=GetCol1, write=SetCol1, nodefault};
	__property int Row1 = {read=GetRow1, write=SetRow1, nodefault};
	__property int Col2 = {read=GetCol2, write=SetCol2, nodefault};
	__property int Row2 = {read=GetRow2, write=SetRow2, nodefault};
	__property System::UnicodeString Description = {read=GetDescription, write=SetDescription};
	__property System::UnicodeString ToolTip = {read=GetToolTip, write=SetToolTip};
public:
	/* TXc12Hyperlink.Create */ inline __fastcall TXLSHyperlink() : Xc12dataworksheet5::TXc12Hyperlink() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSHyperlinks : public Xc12dataworksheet5::TXc12Hyperlinks
{
	typedef Xc12dataworksheet5::TXc12Hyperlinks inherited;
	
public:
	TXLSHyperlink* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TXLSHyperlink* __fastcall GetItems(int Index);
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	
public:
	__fastcall TXLSHyperlinks(Xlsclassfactory5::TXLSClassFactory* AClassFactory, Xc12manager5::TXc12Manager* AManager);
	__fastcall virtual ~TXLSHyperlinks();
	HIDESBASE TXLSHyperlink* __fastcall Add();
	TXLSHyperlink* __fastcall Find(int ACol, int ARow);
	__property TXLSHyperlink* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlshyperlinks5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSHYPERLINKS5)
using namespace Xlshyperlinks5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlshyperlinks5HPP
