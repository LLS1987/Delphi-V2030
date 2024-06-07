// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSFormattedObj5.pas' rev: 35.00 (Windows)

#ifndef Xlsformattedobj5HPP
#define Xlsformattedobj5HPP

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
#include <Xc12Common5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12Manager5.hpp>
#include <XLSUtils5.hpp>
#include <XLSMMU5.hpp>
#include <XLSCellMMU5.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsformattedobj5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSFormattedCell;
class DELPHICLASS TXLSFormattedObj;
class DELPHICLASS TXLSCell;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSFormattedCell : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Xc12utils5::TXc12Color __fastcall GetBorderBottomColor();
	Xc12datastylesheet5::TXc12CellBorderStyle __fastcall GetBorderBottomStyle();
	Xc12utils5::TXc12Color __fastcall GetBorderDiagColor();
	Xc12datastylesheet5::TXc12CellBorderStyle __fastcall GetBorderDiagStyle();
	Xc12utils5::TXc12Color __fastcall GetBorderLeftColor();
	Xc12datastylesheet5::TXc12CellBorderStyle __fastcall GetBorderLeftStyle();
	Xc12utils5::TXc12Color __fastcall GetBorderRightColor();
	Xc12datastylesheet5::TXc12CellBorderStyle __fastcall GetBorderRightStyle();
	Xc12utils5::TXc12Color __fastcall GetBorderTopColor();
	Xc12datastylesheet5::TXc12CellBorderStyle __fastcall GetBorderTopStyle();
	Xc12utils5::TXc12Color __fastcall GetFillPatternBackColor();
	Xc12utils5::TXc12Color __fastcall GetFillPatternForeColor();
	Xc12datastylesheet5::TXc12FillPattern __fastcall GetFillPatternPattern();
	Xc12utils5::TXc12Color __fastcall GetFontColor();
	int __fastcall GetFontFamily();
	System::UnicodeString __fastcall GetFontName();
	double __fastcall GetFontSize();
	Xc12datastylesheet5::TXc12FontStyles __fastcall GetFontStyle();
	Xc12datastylesheet5::TXc12SubSuperscript __fastcall GetFontSubSuperScript();
	Xc12datastylesheet5::TXc12Underline __fastcall GetFontUnderline();
	Xc12datastylesheet5::TXc12HorizAlignment __fastcall GetHorizAlignment();
	int __fastcall GetIndent();
	System::UnicodeString __fastcall GetNumberFormat();
	Xc12datastylesheet5::TXc12CellProtections __fastcall GetProtection();
	int __fastcall GetRotation();
	bool __fastcall GetShrinkToFit();
	Xc12datastylesheet5::TXc12VertAlignment __fastcall GetVertAlignment();
	bool __fastcall GetWrapText();
	
protected:
	Xc12datastylesheet5::TXc12XF* FXF;
	
public:
	void __fastcall SetXF(Xc12datastylesheet5::TXc12XF* AXF);
	__property Xc12datastylesheet5::TXc12CellProtections Protection = {read=GetProtection, nodefault};
	__property Xc12datastylesheet5::TXc12HorizAlignment HorizAlignment = {read=GetHorizAlignment, nodefault};
	__property Xc12datastylesheet5::TXc12VertAlignment VertAlignment = {read=GetVertAlignment, nodefault};
	__property int Indent = {read=GetIndent, nodefault};
	__property int Rotation = {read=GetRotation, nodefault};
	__property bool WrapText = {read=GetWrapText, nodefault};
	__property bool ShrinkToFit = {read=GetShrinkToFit, nodefault};
	__property Xc12utils5::TXc12Color FillPatternForeColor = {read=GetFillPatternForeColor};
	__property Xc12utils5::TXc12Color FillPatternBackColor = {read=GetFillPatternBackColor};
	__property Xc12datastylesheet5::TXc12FillPattern FillPatternPattern = {read=GetFillPatternPattern, nodefault};
	__property System::UnicodeString NumberFormat = {read=GetNumberFormat};
	__property Xc12utils5::TXc12Color BorderTopColor = {read=GetBorderTopColor};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BorderTopStyle = {read=GetBorderTopStyle, nodefault};
	__property Xc12utils5::TXc12Color BorderLeftColor = {read=GetBorderLeftColor};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BorderLeftStyle = {read=GetBorderLeftStyle, nodefault};
	__property Xc12utils5::TXc12Color BorderRightColor = {read=GetBorderRightColor};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BorderRightStyle = {read=GetBorderRightStyle, nodefault};
	__property Xc12utils5::TXc12Color BorderBottomColor = {read=GetBorderBottomColor};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BorderBottomStyle = {read=GetBorderBottomStyle, nodefault};
	__property Xc12utils5::TXc12Color BorderDiagColor = {read=GetBorderDiagColor};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BorderDiagStyle = {read=GetBorderDiagStyle, nodefault};
	__property System::UnicodeString FontName = {read=GetFontName};
	__property int FontFamily = {read=GetFontFamily, nodefault};
	__property Xc12utils5::TXc12Color FontColor = {read=GetFontColor};
	__property double FontSize = {read=GetFontSize};
	__property Xc12datastylesheet5::TXc12FontStyles FontStyle = {read=GetFontStyle, nodefault};
	__property Xc12datastylesheet5::TXc12SubSuperscript FontSubSuperScript = {read=GetFontSubSuperScript, nodefault};
	__property Xc12datastylesheet5::TXc12Underline FontUnderline = {read=GetFontUnderline, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXLSFormattedCell() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSFormattedCell() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSFormattedObj : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Xc12utils5::TXc12IndexColor __fastcall GetBorderBottomColor();
	unsigned __fastcall GetBorderBottomColorRGB();
	Xc12datastylesheet5::TXc12CellBorderStyle __fastcall GetBorderBottomStyle();
	Xc12utils5::TXc12IndexColor __fastcall GetBorderDiagColor();
	unsigned __fastcall GetBorderDiagColorRGB();
	Xc12datastylesheet5::TXc12CellBorderStyle __fastcall GetBorderDiagStyle();
	Xc12utils5::TXc12IndexColor __fastcall GetBorderLeftColor();
	unsigned __fastcall GetBorderLeftColorRGB();
	Xc12datastylesheet5::TXc12CellBorderStyle __fastcall GetBorderLeftStyle();
	Xc12utils5::TXc12IndexColor __fastcall GetBorderRightColor();
	unsigned __fastcall GetBorderRightColorRGB();
	Xc12datastylesheet5::TXc12CellBorderStyle __fastcall GetBorderRightStyle();
	Xc12utils5::TXc12IndexColor __fastcall GetBorderTopColor();
	unsigned __fastcall GetBorderTopColorRGB();
	Xc12datastylesheet5::TXc12CellBorderStyle __fastcall GetBorderTopStyle();
	unsigned __fastcall GetCellColorRGB();
	Xc12utils5::TXc12IndexColor __fastcall GetFillPatternBackColor();
	unsigned __fastcall GetFillPatternBackColorRGB();
	Xc12utils5::TXc12IndexColor __fastcall GetFillPatternForeColor();
	Xc12datastylesheet5::TXc12FillPattern __fastcall GetFillPatternPattern();
	unsigned __fastcall GetFillPatternForeColorRGB();
	System::Uitypes::TFontCharset __fastcall GetFontCharset();
	unsigned __fastcall GetFontColor();
	int __fastcall GetFontFamily();
	System::UnicodeString __fastcall GetFontName();
	double __fastcall GetFontSize();
	int __fastcall GetFontSize20();
	Xc12datastylesheet5::TXc12FontStyles __fastcall GetFontStyle();
	Xc12datastylesheet5::TXc12SubSuperscript __fastcall GetFontSubSuperScript();
	Xc12datastylesheet5::TXc12Underline __fastcall GetFontUnderline();
	Xc12datastylesheet5::TXc12HorizAlignment __fastcall GetHorizAlignment();
	int __fastcall GetIndent();
	System::UnicodeString __fastcall GetNumberFormat();
	Xc12datastylesheet5::TXc12CellProtections __fastcall GetProtection();
	int __fastcall GetRotation();
	Xc12datastylesheet5::TXc12VertAlignment __fastcall GetVertAlignment();
	bool __fastcall GetWrapText();
	bool __fastcall GetShrinkToFit();
	void __fastcall SetBorderBottomColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetBorderBottomColorRGB(const unsigned Value);
	void __fastcall SetBorderBottomStyle(const Xc12datastylesheet5::TXc12CellBorderStyle Value);
	void __fastcall SetBorderDiagColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetBorderDiagColorRGB(const unsigned Value);
	void __fastcall SetBorderDiagStyle(const Xc12datastylesheet5::TXc12CellBorderStyle Value);
	void __fastcall SetBorderLeftColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetBorderLeftColorRGB(const unsigned Value);
	void __fastcall SetBorderLeftStyle(const Xc12datastylesheet5::TXc12CellBorderStyle Value);
	void __fastcall SetBorderRightColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetBorderRightColorRGB(const unsigned Value);
	void __fastcall SetBorderRightStyle(const Xc12datastylesheet5::TXc12CellBorderStyle Value);
	void __fastcall SetBorderTopColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetBorderTopColorRGB(const unsigned Value);
	void __fastcall SetBorderTopStyle(const Xc12datastylesheet5::TXc12CellBorderStyle Value);
	void __fastcall SetCellColorRGB(const unsigned Value);
	void __fastcall SetFillPatternBackColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetFillPatternBackColorRGB(const unsigned Value);
	void __fastcall SetFillPatternForeColorRGB(const unsigned Value);
	void __fastcall SetFillPatternForeColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetFillPatternPattern(const Xc12datastylesheet5::TXc12FillPattern Value);
	void __fastcall SetFontCharset(const System::Uitypes::TFontCharset Value);
	void __fastcall SetFontColor(const unsigned Value);
	void __fastcall SetFontFamily(const int Value);
	void __fastcall SetFontName(const System::UnicodeString Value);
	void __fastcall SetFontSize(const double Value);
	void __fastcall SetFontSize20(const int Value);
	void __fastcall SetFontStyle(const Xc12datastylesheet5::TXc12FontStyles Value);
	void __fastcall SetFontSubSuperScript(const Xc12datastylesheet5::TXc12SubSuperscript Value);
	void __fastcall SetFontUnderline(const Xc12datastylesheet5::TXc12Underline Value);
	void __fastcall SetProtection(const Xc12datastylesheet5::TXc12CellProtections Value);
	void __fastcall SetHorizAlignment(const Xc12datastylesheet5::TXc12HorizAlignment Value);
	void __fastcall SetIndent(const int Value);
	void __fastcall SetNumberFormat(const System::UnicodeString Value);
	void __fastcall SetRotation(const int Value);
	void __fastcall SetVertAlignment(const Xc12datastylesheet5::TXc12VertAlignment Value);
	void __fastcall SetWrapText(const bool Value);
	void __fastcall SetShrinkToFit(const bool Value);
	Xc12utils5::TXc12Color __fastcall GetFontColorXc12();
	void __fastcall SetFontColorXc12(const Xc12utils5::TXc12Color &Value);
	
protected:
	Xc12datastylesheet5::TXc12DataStyleSheet* FStyles;
	Xc12datastylesheet5::TXc12XF* FXF;
	virtual void __fastcall StyleChanged() = 0 ;
	
public:
	__fastcall TXLSFormattedObj(Xc12datastylesheet5::TXc12DataStyleSheet* AStyles);
	__fastcall virtual ~TXLSFormattedObj();
	void __fastcall SetDefaultFormat();
	void __fastcall CopyToTFont(Vcl::Graphics::TFont* Font);
	bool __fastcall IsFormatted();
	__property Xc12datastylesheet5::TXc12XF* Style = {read=FXF};
	__property Xc12datastylesheet5::TXc12CellProtections Protection = {read=GetProtection, write=SetProtection, nodefault};
	__property Xc12datastylesheet5::TXc12HorizAlignment HorizAlignment = {read=GetHorizAlignment, write=SetHorizAlignment, nodefault};
	__property Xc12datastylesheet5::TXc12VertAlignment VertAlignment = {read=GetVertAlignment, write=SetVertAlignment, nodefault};
	__property int Indent = {read=GetIndent, write=SetIndent, nodefault};
	__property int Rotation = {read=GetRotation, write=SetRotation, nodefault};
	__property bool WrapText = {read=GetWrapText, write=SetWrapText, nodefault};
	__property bool ShrinkToFit = {read=GetShrinkToFit, write=SetShrinkToFit, nodefault};
	__property Xc12utils5::TXc12IndexColor FillPatternForeColor = {read=GetFillPatternForeColor, write=SetFillPatternForeColor, nodefault};
	__property unsigned FillPatternForeColorRGB = {read=GetFillPatternForeColorRGB, write=SetFillPatternForeColorRGB, nodefault};
	__property Xc12utils5::TXc12IndexColor FillPatternBackColor = {read=GetFillPatternBackColor, write=SetFillPatternBackColor, nodefault};
	__property unsigned FillPatternBackColorRGB = {read=GetFillPatternBackColorRGB, write=SetFillPatternBackColorRGB, nodefault};
	__property unsigned CellColorRGB = {read=GetCellColorRGB, write=SetCellColorRGB, nodefault};
	__property Xc12datastylesheet5::TXc12FillPattern FillPatternPattern = {read=GetFillPatternPattern, write=SetFillPatternPattern, nodefault};
	__property System::UnicodeString NumberFormat = {read=GetNumberFormat, write=SetNumberFormat};
	__property Xc12utils5::TXc12IndexColor BorderTopColor = {read=GetBorderTopColor, write=SetBorderTopColor, nodefault};
	__property unsigned BorderTopColorRGB = {read=GetBorderTopColorRGB, write=SetBorderTopColorRGB, nodefault};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BorderTopStyle = {read=GetBorderTopStyle, write=SetBorderTopStyle, nodefault};
	__property Xc12utils5::TXc12IndexColor BorderLeftColor = {read=GetBorderLeftColor, write=SetBorderLeftColor, nodefault};
	__property unsigned BorderLeftColorRGB = {read=GetBorderLeftColorRGB, write=SetBorderLeftColorRGB, nodefault};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BorderLeftStyle = {read=GetBorderLeftStyle, write=SetBorderLeftStyle, nodefault};
	__property Xc12utils5::TXc12IndexColor BorderRightColor = {read=GetBorderRightColor, write=SetBorderRightColor, nodefault};
	__property unsigned BorderRightColorRGB = {read=GetBorderRightColorRGB, write=SetBorderRightColorRGB, nodefault};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BorderRightStyle = {read=GetBorderRightStyle, write=SetBorderRightStyle, nodefault};
	__property Xc12utils5::TXc12IndexColor BorderBottomColor = {read=GetBorderBottomColor, write=SetBorderBottomColor, nodefault};
	__property unsigned BorderBottomColorRGB = {read=GetBorderBottomColorRGB, write=SetBorderBottomColorRGB, nodefault};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BorderBottomStyle = {read=GetBorderBottomStyle, write=SetBorderBottomStyle, nodefault};
	__property Xc12utils5::TXc12IndexColor BorderDiagColor = {read=GetBorderDiagColor, write=SetBorderDiagColor, nodefault};
	__property unsigned BorderDiagColorRGB = {read=GetBorderDiagColorRGB, write=SetBorderDiagColorRGB, nodefault};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BorderDiagStyle = {read=GetBorderDiagStyle, write=SetBorderDiagStyle, nodefault};
	__property System::UnicodeString FontName = {read=GetFontName, write=SetFontName};
	__property System::Uitypes::TFontCharset FontCharset = {read=GetFontCharset, write=SetFontCharset, nodefault};
	__property int FontFamily = {read=GetFontFamily, write=SetFontFamily, nodefault};
	__property unsigned FontColor = {read=GetFontColor, write=SetFontColor, nodefault};
	__property Xc12utils5::TXc12Color FontColorXc12 = {read=GetFontColorXc12, write=SetFontColorXc12};
	__property double FontSize = {read=GetFontSize, write=SetFontSize};
	__property int FontSize20 = {read=GetFontSize20, write=SetFontSize20, nodefault};
	__property Xc12datastylesheet5::TXc12FontStyles FontStyle = {read=GetFontStyle, write=SetFontStyle, nodefault};
	__property Xc12datastylesheet5::TXc12SubSuperscript FontSubSuperScript = {read=GetFontSubSuperScript, write=SetFontSubSuperScript, nodefault};
	__property Xc12datastylesheet5::TXc12Underline FontUnderline = {read=GetFontUnderline, write=SetFontUnderline, nodefault};
	__property Xc12datastylesheet5::TXc12XF* XF = {read=FXF};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCell : public TXLSFormattedObj
{
	typedef TXLSFormattedObj inherited;
	
private:
	TXLSCell* __fastcall GetItems(const int ACol, const int ARow);
	
protected:
	int FCol;
	int FRow;
	Xlscellmmu5::TXLSCellMMU* FCells;
	Xlscellmmu5::TXLSCellItem FRef;
	virtual void __fastcall StyleChanged();
	
public:
	__fastcall TXLSCell(Xc12datastylesheet5::TXc12DataStyleSheet* AStyles, Xlscellmmu5::TXLSCellMMU* ACells);
	__property Xlscellmmu5::TXLSCellMMU* Cells = {read=FCells};
	__property TXLSCell* Items[const int ACol][const int ARow] = {read=GetItems/*, default*/};
public:
	/* TXLSFormattedObj.Destroy */ inline __fastcall virtual ~TXLSCell() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsformattedobj5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSFORMATTEDOBJ5)
using namespace Xlsformattedobj5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsformattedobj5HPP
