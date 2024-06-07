// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSRange5.pas' rev: 35.00 (Windows)

#ifndef Xlsrange5HPP
#define Xlsrange5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12DataWorksheet5.hpp>
#include <Xc12Manager5.hpp>
#include <XLSUtils5.hpp>
#include <XLSCellAreas5.hpp>
#include <XLSFormattedObj5.hpp>
#include <XLSCmdFormat5.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsrange5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSRange;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXLSRangeType : unsigned char { xrtCell, xrtColumn, xrtRow, xrtArea };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSRange : public Xlscellareas5::TCellAreaImpl
{
	typedef Xlscellareas5::TCellAreaImpl inherited;
	
private:
	Xc12manager5::TXc12Manager* FManager;
	TXLSRangeType FRangeType;
	Xlsutils5::TIndexObject* FSheet;
	Xlscmdformat5::TXLSCmdFormat* FCmdFormat;
	void __fastcall SetBorderInsideHorizColor(const unsigned Value);
	void __fastcall SetBorderInsideHorizStyle(const Xc12datastylesheet5::TXc12CellBorderStyle Value);
	void __fastcall SetBorderInsideVertColor(const unsigned Value);
	void __fastcall SetBorderInsideVertStyle(const Xc12datastylesheet5::TXc12CellBorderStyle Value);
	void __fastcall SetBorderOutlineColor(const unsigned Value);
	void __fastcall SetBorderOutlineStyle(const Xc12datastylesheet5::TXc12CellBorderStyle Value);
	void __fastcall SetBorderBottomColor(const unsigned Value);
	void __fastcall SetBorderBottomStyle(const Xc12datastylesheet5::TXc12CellBorderStyle Value);
	void __fastcall SetBorderDiagColor(const unsigned Value);
	void __fastcall SetBorderDiagStyle(const Xc12datastylesheet5::TXc12CellBorderStyle Value);
	void __fastcall SetBorderLeftColor(const unsigned Value);
	void __fastcall SetBorderLeftStyle(const Xc12datastylesheet5::TXc12CellBorderStyle Value);
	void __fastcall SetBorderRightColor(const unsigned Value);
	void __fastcall SetBorderRightStyle(const Xc12datastylesheet5::TXc12CellBorderStyle Value);
	void __fastcall SetBorderTopColor(const unsigned Value);
	void __fastcall SetBorderTopStyle(const Xc12datastylesheet5::TXc12CellBorderStyle Value);
	void __fastcall SetFillPatternBackColor(const unsigned Value);
	void __fastcall SetFillPatternForeColor(const unsigned Value);
	void __fastcall SetFillPatternPattern(const Xc12datastylesheet5::TXc12FillPattern Value);
	void __fastcall SetFontCharset(const System::Uitypes::TFontCharset Value);
	void __fastcall SetFontColor(const unsigned Value);
	void __fastcall SetFontFamily(const int Value);
	void __fastcall SetFontName(const System::UnicodeString Value);
	void __fastcall SetFontSize(const double Value);
	void __fastcall SetFontSize20(const int Value);
	void __fastcall SetFontSubSuperScript(const Xc12datastylesheet5::TXc12SubSuperscript Value);
	void __fastcall SetFontUnderline(const Xc12datastylesheet5::TXc12Underline Value);
	void __fastcall SetHorizAlignment(const Xc12datastylesheet5::TXc12HorizAlignment Value);
	void __fastcall SetIndent(const int Value);
	void __fastcall SetNumberFormat(const System::UnicodeString Value);
	void __fastcall SetProtection(const Xc12datastylesheet5::TXc12CellProtections Value);
	void __fastcall SetRotation(const int Value);
	void __fastcall SetVertAlignment(const Xc12datastylesheet5::TXc12VertAlignment Value);
	void __fastcall SetFontStyle(const Xc12datastylesheet5::TXc12FontStyles Value);
	TXLSRange* __fastcall GetItems(int C1, int R1, int C2, int R2);
	TXLSRange* __fastcall GetItemsRef(System::UnicodeString Ref);
	void __fastcall SetShrinkToFit(const bool Value);
	void __fastcall SetWrapText(const bool Value);
	
protected:
	int __fastcall GetDefaultFormat(const int ACol, const int ARow);
	
public:
	__fastcall TXLSRange(Xc12manager5::TXc12Manager* AManager, Xlsutils5::TIndexObject* ASheet);
	__fastcall virtual ~TXLSRange();
	__property Xc12datastylesheet5::TXc12CellProtections Protection = {write=SetProtection, nodefault};
	__property Xc12datastylesheet5::TXc12HorizAlignment HorizAlignment = {write=SetHorizAlignment, nodefault};
	__property Xc12datastylesheet5::TXc12VertAlignment VertAlignment = {write=SetVertAlignment, nodefault};
	__property int Indent = {write=SetIndent, nodefault};
	__property int Rotation = {write=SetRotation, nodefault};
	__property bool WrapText = {write=SetWrapText, nodefault};
	__property bool ShrinkToFit = {write=SetShrinkToFit, nodefault};
	__property unsigned FillPatternForeColor = {write=SetFillPatternForeColor, nodefault};
	__property unsigned FillPatternBackColor = {write=SetFillPatternBackColor, nodefault};
	__property Xc12datastylesheet5::TXc12FillPattern FillPatternPattern = {write=SetFillPatternPattern, nodefault};
	__property System::UnicodeString NumberFormat = {write=SetNumberFormat};
	__property unsigned BorderTopColor = {write=SetBorderTopColor, nodefault};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BorderTopStyle = {write=SetBorderTopStyle, nodefault};
	__property unsigned BorderLeftColor = {write=SetBorderLeftColor, nodefault};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BorderLeftStyle = {write=SetBorderLeftStyle, nodefault};
	__property unsigned BorderRightColor = {write=SetBorderRightColor, nodefault};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BorderRightStyle = {write=SetBorderRightStyle, nodefault};
	__property unsigned BorderBottomColor = {write=SetBorderBottomColor, nodefault};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BorderBottomStyle = {write=SetBorderBottomStyle, nodefault};
	__property unsigned BorderDiagColor = {write=SetBorderDiagColor, nodefault};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BorderDiagStyle = {write=SetBorderDiagStyle, nodefault};
	__property unsigned BorderOutlineColor = {write=SetBorderOutlineColor, nodefault};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BorderOutlineStyle = {write=SetBorderOutlineStyle, nodefault};
	__property unsigned BorderInsideVertColor = {write=SetBorderInsideVertColor, nodefault};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BorderInsideVertStyle = {write=SetBorderInsideVertStyle, nodefault};
	__property unsigned BorderInsideHorizColor = {write=SetBorderInsideHorizColor, nodefault};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BorderInsideHorizStyle = {write=SetBorderInsideHorizStyle, nodefault};
	__property System::UnicodeString FontName = {write=SetFontName};
	__property System::Uitypes::TFontCharset FontCharset = {write=SetFontCharset, nodefault};
	__property int FontFamily = {write=SetFontFamily, nodefault};
	__property unsigned FontColor = {write=SetFontColor, nodefault};
	__property double FontSize = {write=SetFontSize};
	__property int FontSize20 = {write=SetFontSize20, nodefault};
	__property Xc12datastylesheet5::TXc12FontStyles FontStyle = {write=SetFontStyle, nodefault};
	__property Xc12datastylesheet5::TXc12SubSuperscript FontSubSuperScript = {write=SetFontSubSuperScript, nodefault};
	__property Xc12datastylesheet5::TXc12Underline FontUnderline = {write=SetFontUnderline, nodefault};
	__property TXLSRange* Items[int C1][int R1][int C2][int R2] = {read=GetItems/*, default*/};
	__property TXLSRange* ItemsRef[System::UnicodeString Ref] = {read=GetItemsRef};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsrange5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSRANGE5)
using namespace Xlsrange5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsrange5HPP
