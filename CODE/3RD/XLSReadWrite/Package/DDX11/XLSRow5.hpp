// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSRow5.pas' rev: 35.00 (Windows)

#ifndef Xlsrow5HPP
#define Xlsrow5HPP

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
#include <Xc12Common5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12Manager5.hpp>
#include <XLSUtils5.hpp>
#include <XLSMMU5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSFormattedObj5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsrow5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSRow;
class DELPHICLASS TXLSRows;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSRow : public Xlsformattedobj5::TXLSFormattedObj
{
	typedef Xlsformattedobj5::TXLSFormattedObj inherited;
	
private:
	int __fastcall GetOutlineLevel();
	void __fastcall SetOutlineLevel(const int Value);
	bool __fastcall GetCollapsedOutline();
	void __fastcall SetCollapsedOutline(const bool Value);
	int __fastcall GetPixelHeight();
	void __fastcall SetPixelHeight(const int Value);
	double __fastcall GetHeightPt();
	void __fastcall SetHeightPt(const double Value);
	bool __fastcall GetCustomHeight();
	
protected:
	TXLSRows* FOwner;
	int FIndex;
	Xlscellmmu5::TXLSMMURowHeader *FRowItem;
	void __fastcall SetHeight(int AValue);
	int __fastcall GetHeight();
	void __fastcall SetHidden(bool AValue);
	bool __fastcall GetHidden();
	int __fastcall DefaultHeight();
	void __fastcall Changed(int AIndex);
	virtual void __fastcall StyleChanged();
	
public:
	__fastcall TXLSRow(TXLSRows* AOwner);
	__fastcall virtual ~TXLSRow();
	bool __fastcall Assigned();
	__property int Height = {read=GetHeight, write=SetHeight, nodefault};
	__property double HeightPt = {read=GetHeightPt, write=SetHeightPt};
	__property int PixelHeight = {read=GetPixelHeight, write=SetPixelHeight, nodefault};
	__property bool Hidden = {read=GetHidden, write=SetHidden, nodefault};
	__property int OutlineLevel = {read=GetOutlineLevel, write=SetOutlineLevel, nodefault};
	__property bool CollapsedOutline = {read=GetCollapsedOutline, write=SetCollapsedOutline, nodefault};
	__property bool CustomHeight = {read=GetCustomHeight, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSRows : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TXLSRow* operator[](int Index) { return this->Items[Index]; }
	
protected:
	Xc12datastylesheet5::TXc12DataStyleSheet* FStyles;
	TXLSRow* FTheRow;
	Xlscellmmu5::TXLSCellMMU* FCells;
	bool FApplyStyleOnCells;
	int FLastVisibleRow;
	TXLSRow* __fastcall GetItems(int Index);
	
public:
	__fastcall TXLSRows(Xlscellmmu5::TXLSCellMMU* ACells, Xc12datastylesheet5::TXc12DataStyleSheet* AStyles);
	__fastcall virtual ~TXLSRows();
	void __fastcall Clear();
	void __fastcall ToggleGrouped(int ARow);
	void __fastcall ToggleGroupedAll(int ALevel);
	int __fastcall DefaultPixelHeight();
	int __fastcall CalcLastVisibleRow();
	__property bool ApplyStyleOnCells = {read=FApplyStyleOnCells, write=FApplyStyleOnCells, nodefault};
	__property TXLSRow* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsrow5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSROW5)
using namespace Xlsrow5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsrow5HPP
