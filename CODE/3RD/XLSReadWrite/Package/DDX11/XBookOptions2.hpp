// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookOptions2.pas' rev: 35.00 (Windows)

#ifndef Xbookoptions2HPP
#define Xbookoptions2HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <XLSUtils5.hpp>
#include <XLSReadWriteII5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookoptions2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSBookOptionsView;
class DELPHICLASS TXLSBookOptionsGeneral;
class DELPHICLASS TXLSBookOptions;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSBookOptionsView : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Xlsreadwriteii5::TXLSReadWriteII5* FXLS;
	bool FRowsColumns;
	bool FGridlines;
	bool FHorizontalScroll;
	bool FVerticalScroll;
	void __fastcall SetRowsColumns(const bool Value);
	void __fastcall SetGridlines(const bool Value);
	void __fastcall SetHorizontalScroll(const bool Value);
	void __fastcall SetVerticalScroll(const bool Value);
	bool __fastcall GetGridlines();
	bool __fastcall GetHorizontalScroll();
	bool __fastcall GetRowsColumns();
	bool __fastcall GetVerticalScroll();
	
public:
	__fastcall TXLSBookOptionsView(Xlsreadwriteii5::TXLSReadWriteII5* XLS);
	__fastcall virtual ~TXLSBookOptionsView();
	
__published:
	__property bool RowsColumns = {read=GetRowsColumns, write=SetRowsColumns, nodefault};
	__property bool Gridlines = {read=GetGridlines, write=SetGridlines, nodefault};
	__property bool HorizontalScroll = {read=GetHorizontalScroll, write=SetHorizontalScroll, nodefault};
	__property bool VerticalScroll = {read=GetVerticalScroll, write=SetVerticalScroll, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSBookOptionsGeneral : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Xlsreadwriteii5::TXLSReadWriteII5* FXLS;
	void __fastcall SetFontName(const System::UnicodeString Value);
	void __fastcall SetFontSize(const double Value);
	System::UnicodeString __fastcall GetFontName();
	double __fastcall GetFontSize();
	
public:
	__fastcall TXLSBookOptionsGeneral(Xlsreadwriteii5::TXLSReadWriteII5* AXLS);
	
__published:
	__property System::UnicodeString FontName = {read=GetFontName, write=SetFontName};
	__property double FontSize = {read=GetFontSize, write=SetFontSize};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TXLSBookOptionsGeneral() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSBookOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TXLSBookOptionsGeneral* FGeneral;
	TXLSBookOptionsView* FView;
	bool FReadOnly;
	bool FHideHiddenSheets;
	
public:
	__fastcall TXLSBookOptions(Xlsreadwriteii5::TXLSReadWriteII5* XLS);
	__fastcall virtual ~TXLSBookOptions();
	
__published:
	__property TXLSBookOptionsGeneral* General = {read=FGeneral, write=FGeneral};
	__property TXLSBookOptionsView* View = {read=FView, write=FView};
	__property bool ReadOnly = {read=FReadOnly, write=FReadOnly, nodefault};
	__property bool HideHiddenSheets = {read=FHideHiddenSheets, write=FHideHiddenSheets, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xbookoptions2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKOPTIONS2)
using namespace Xbookoptions2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookoptions2HPP
