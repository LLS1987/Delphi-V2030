// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSColumn5.pas' rev: 35.00 (Windows)

#ifndef Xlscolumn5HPP
#define Xlscolumn5HPP

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
#include <Xc12DataWorksheet5.hpp>
#include <Xc12Manager5.hpp>
#include <XLSUtils5.hpp>
#include <XLSMMU5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSFormattedObj5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlscolumn5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSColumn;
class DELPHICLASS TXLSColumns;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSColumn : public Xlsformattedobj5::TXLSFormattedObj
{
	typedef Xlsformattedobj5::TXLSFormattedObj inherited;
	
protected:
	TXLSColumns* FOwner;
	int FColIndex;
	Xc12dataworksheet5::TXc12Column* FCol;
	bool __fastcall GetCollapsedOutline();
	int __fastcall GetOutlineLevel();
	double __fastcall GetCharWidth();
	int __fastcall GetPixelWidth();
	int __fastcall GetPixelWidth2();
	bool __fastcall GetHidden();
	int __fastcall GetWidth();
	void __fastcall SetOutlineLevel(const int Value);
	void __fastcall SetCollapsedOutline(const bool Value);
	void __fastcall SetCharWidth(const double AValue);
	void __fastcall SetPixelWidth(const int AValue);
	void __fastcall SetHidden(const bool AValue);
	void __fastcall SetWidth(const int AValue);
	double __fastcall GetWidthPt();
	void __fastcall SetWidthPt(const double Value);
	void __fastcall Changed(int AIndex);
	virtual void __fastcall StyleChanged();
	void __fastcall SetXc12ColWidth(Xc12dataworksheet5::TXc12Column* ACol, int AWidth)/* overload */;
	void __fastcall SetXc12ColWidth(Xc12dataworksheet5::TXc12Column* ACol, double AWidth)/* overload */;
	double __fastcall DefaultCharWidth();
	void __fastcall SetDefault();
	void __fastcall Split();
	
public:
	__fastcall TXLSColumn(TXLSColumns* AOwner, Xc12datastylesheet5::TXc12DataStyleSheet* AStyles);
	__fastcall virtual ~TXLSColumn();
	__property double CharWidth = {read=GetCharWidth, write=SetCharWidth};
	__property int PixelWidth = {read=GetPixelWidth, write=SetPixelWidth, nodefault};
	__property int PixelWidth2 = {read=GetPixelWidth2, write=SetPixelWidth, nodefault};
	__property bool Hidden = {read=GetHidden, write=SetHidden, nodefault};
	__property int Width = {read=GetWidth, write=SetWidth, nodefault};
	__property double WidthPt = {read=GetWidthPt, write=SetWidthPt};
	__property int OutlineLevel = {read=GetOutlineLevel, write=SetOutlineLevel, nodefault};
	__property bool CollapsedOutline = {read=GetCollapsedOutline, write=SetCollapsedOutline, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSColumns : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TXLSColumn* operator[](int Index) { return this->Items[Index]; }
	
protected:
	Xc12dataworksheet5::TXc12Columns* FCols;
	TXLSColumn* FTheColumn;
	Xc12datastylesheet5::TXc12DataStyleSheet* FStyles;
	int FDefaultWidth;
	Xlsutils5::TTwoIntegerEvent FChangeEvent;
	void __fastcall SetDefaultWidth(const int Value);
	TXLSColumn* __fastcall GetItems(int Index);
	void __fastcall CheckValidColumns(int ACol1, int ACol2);
	Xc12dataworksheet5::TXc12Column* __fastcall FindCol(int ACol);
	int __fastcall FindColIndex(int ACol);
	Xc12dataworksheet5::TXc12Column* __fastcall Cut(int AColIndex, int ACol1, int ACol2);
	Xc12dataworksheet5::TXc12Column* __fastcall Copy(int AColIndex, int ACol1, int ACol2);
	void __fastcall Delete(int AColIndex, int ACol1, int ACol2);
	void __fastcall FillGaps(Xc12dataworksheet5::TXc12Columns* AList, int ACol1, int ACol2);
	Xc12dataworksheet5::TXc12Column* __fastcall NewColumn(int ACol1, int ACol2, int AWidth);
	bool __fastcall FindRange(int ACol1, int ACol2, int &AIndex1, int &AIndex2);
	void __fastcall DeleteHits(int ACol1, int ACol2);
	void __fastcall Sort();
	void __fastcall Compact();
	
public:
	__fastcall TXLSColumns(Xc12dataworksheet5::TXc12Columns* AColumns, Xc12datastylesheet5::TXc12DataStyleSheet* AStyles);
	__fastcall virtual ~TXLSColumns();
	void __fastcall Assign(TXLSColumns* AColumns);
	void __fastcall Clear();
	Xc12dataworksheet5::TXc12Columns* __fastcall CutHitList(int ACol1, int ACol2);
	Xc12dataworksheet5::TXc12Columns* __fastcall CopyHitList(int ACol1, int ACol2);
	void __fastcall OffsetList(Xc12dataworksheet5::TXc12Columns* AList, const int AOffset);
	void __fastcall InsertList(Xc12dataworksheet5::TXc12Columns* AList);
	int __fastcall GetColWidth(int ACol);
	int __fastcall GetColWidthPixels(int ACol);
	void __fastcall SetColWidth(int ACol1, int ACol2, int AValue);
	Xc12dataworksheet5::TXc12Columns* __fastcall BeginSetStyle(int ACol1, int ACol2, Xc12datastylesheet5::TXc12XF* AStyle);
	void __fastcall EndSetStyle(Xc12dataworksheet5::TXc12Columns* AList);
	void __fastcall DeleteColumns(int ACol1, int ACol2);
	void __fastcall ClearColumns(int ACol1, int ACol2);
	void __fastcall CopyColumns(int ACol1, int ACol2, int ADestCol);
	void __fastcall MoveColumns(int ACol1, int ACol2, int ADestCol);
	void __fastcall InsertColumns(int ACol, int AColCount);
	void __fastcall InsertColumnsKeepFmt(int ACol, int AColCount);
	void __fastcall ToggleGrouped(int ACol);
	void __fastcall ToggleGroupedAll(int ALevel);
	void __fastcall AddIfNone _DEPRECATED_ATTRIBUTE1("Not required anymore") (int ACol, int ACount);
	int __fastcall DefaultPixelWidth();
	__property int DefaultWidth = {read=FDefaultWidth, write=SetDefaultWidth, nodefault};
	__property Xc12datastylesheet5::TXc12DataStyleSheet* Styles = {read=FStyles};
	__property Xlsutils5::TTwoIntegerEvent OnColWidthChange = {read=FChangeEvent, write=FChangeEvent};
	__property TXLSColumn* Items[int Index] = {read=GetItems/*, default*/};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlscolumn5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSCOLUMN5)
using namespace Xlscolumn5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlscolumn5HPP
