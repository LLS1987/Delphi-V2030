// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSCmdFormat5.pas' rev: 35.00 (Windows)

#ifndef Xlscmdformat5HPP
#define Xlscmdformat5HPP

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
#include <System.IniFiles.hpp>
#include <System.Math.hpp>
#include <System.UITypes.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Common5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12DataWorksheet5.hpp>
#include <Xc12Manager5.hpp>
#include <Xc12DataSST5.hpp>
#include <XLSUtils5.hpp>
#include <XLSMMU5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSColumn5.hpp>
#include <XLSRow5.hpp>
#include <XLSCellAreas5.hpp>
#include <XLSCmdFormatValues5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlscmdformat5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSCmdFormatColor;
class DELPHICLASS TXLSCmdFormatAlignment;
class DELPHICLASS TXLSCmdFormatNumber;
class DELPHICLASS TXLSCmdFormatFill;
class DELPHICLASS TXLSCmdFormatFont;
class DELPHICLASS TXLSCmdFormatBorder;
class DELPHICLASS TXLSCmdFormatProtection;
class DELPHICLASS TXLSDefaultFormat;
class DELPHICLASS TXLSDefaultFormats;
class DELPHICLASS TXLSCmdFormat;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXLSCmdFormatMode : unsigned char { xcfmMerge, xcfmReplace };

enum DECLSPEC_DENUM TCmdFmtXFProp : unsigned char { cfxfAlignHoriz, cfxfAlignVert, cfxfIndent, cfxfJustifyDist, cfxfWrapText, cfxfShrinkToFit, cfxfMergeCells, cfxfRotation, cfxfTextDirection };

enum DECLSPEC_DENUM TCmdFmtFontProp : unsigned char { cffpName, cffpSize, cffpColor, cffpStyle, cffpUnderline, cffpSubSuperscript, cffpCharset };

enum DECLSPEC_DENUM TCmdFmtFillProp : unsigned char { cfipBgColor, cfipPatColor, cfipPattern };

enum DECLSPEC_DENUM TCmdFmtObject : unsigned char { cfoXFAlignment, cfoXFProtection, cfoNumFmt, cfoFill, cfoFont, cfoBorder };

enum DECLSPEC_DENUM TCmdTriState : unsigned char { ctsTrue, ctsFalse, ctsUnassigned };

enum DECLSPEC_DENUM TCmdBorderSide : unsigned char { cbsTop, cbsLeft, cbsRight, cbsBottom, cbsInsideHoriz, cbsInsideVert, cbsDiagLeft, cbsDiagRight };

typedef System::Set<TCmdBorderSide, TCmdBorderSide::cbsTop, TCmdBorderSide::cbsDiagRight> TCmdBorderSides;

enum DECLSPEC_DENUM TCmdBorderSidePreset : unsigned char { cbspNone, cbspOutline, cbspInside, cbspOutlineAndInside };

class PASCALIMPLEMENTATION TXLSCmdFormatColor : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	unsigned __fastcall GetRGB();
	void __fastcall SetRGB(const unsigned Value);
	Xc12utils5::TXc12IndexColor __fastcall GetIndexColor();
	void __fastcall SetIndexColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetTheme(Xc12utils5::TXc12ClrSchemeColor AScheme, const double Value);
	Xc12utils5::TXc12Color __fastcall GetColor();
	void __fastcall SetColor(const Xc12utils5::TXc12Color &Value);
	System::Uitypes::TColor __fastcall GetTColor();
	void __fastcall SetTColor(const System::Uitypes::TColor Value);
	
protected:
	System::Classes::TNotifyEvent FChanged;
	Xc12utils5::TXc12Color *FColor;
	__property System::Classes::TNotifyEvent Changed = {read=FChanged, write=FChanged};
	
public:
	__fastcall TXLSCmdFormatColor(Xc12utils5::PXc12Color AColor);
	void __fastcall Clear();
	void __fastcall ExcelSwatch(int AColor, int ATint);
	__property Xc12utils5::TXc12Color Color = {read=GetColor, write=SetColor};
	__property System::Uitypes::TColor TColor = {read=GetTColor, write=SetTColor, nodefault};
	__property unsigned RGB = {read=GetRGB, write=SetRGB, nodefault};
	__property double Theme[Xc12utils5::TXc12ClrSchemeColor AScheme] = {write=SetTheme};
	__property Xc12utils5::TXc12IndexColor IndexColor = {read=GetIndexColor, write=SetIndexColor, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSCmdFormatColor() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCmdFormatAlignment : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Xc12datastylesheet5::TXc12HorizAlignment __fastcall GetHorizontal();
	int __fastcall GetIndent();
	bool __fastcall GetJustifyDistributed();
	bool __fastcall GetMergeCells();
	int __fastcall GetRotation();
	bool __fastcall GetShrinkToFit();
	Xc12datastylesheet5::TXc12ReadOrder __fastcall GetTextDirection();
	Xc12datastylesheet5::TXc12VertAlignment __fastcall GetVertical();
	bool __fastcall GetWrapText();
	void __fastcall SetHorizontal(const Xc12datastylesheet5::TXc12HorizAlignment Value);
	void __fastcall SetIndent(const int Value);
	void __fastcall SetJustifyDistributed(const bool Value);
	void __fastcall SetMergeCells(const bool Value);
	void __fastcall SetRotation(const int Value);
	void __fastcall SetShrinkToFit(const bool Value);
	void __fastcall SetTextDirection(const Xc12datastylesheet5::TXc12ReadOrder Value);
	void __fastcall SetVertical(const Xc12datastylesheet5::TXc12VertAlignment Value);
	void __fastcall SetWrapText(const bool Value);
	
protected:
	TXLSCmdFormat* FOwner;
	Xc12datastylesheet5::TXc12XFs* FXFs;
	Xc12datastylesheet5::TXc12XF* FXF;
	bool FMergeCells;
	System::StaticArray<bool, 9> FAssigneds;
	void __fastcall SetResult(Xc12datastylesheet5::TXc12CellAlignment* ASrc, Xc12datastylesheet5::TXc12CellAlignment* ADest);
	
public:
	__fastcall TXLSCmdFormatAlignment(TXLSCmdFormat* AOwner, Xc12datastylesheet5::TXc12XFs* AXFs);
	__fastcall virtual ~TXLSCmdFormatAlignment();
	void __fastcall Clear();
	__property Xc12datastylesheet5::TXc12HorizAlignment Horizontal = {read=GetHorizontal, write=SetHorizontal, nodefault};
	__property Xc12datastylesheet5::TXc12VertAlignment Vertical = {read=GetVertical, write=SetVertical, nodefault};
	__property int Indent = {read=GetIndent, write=SetIndent, nodefault};
	__property bool JustifyDistributed = {read=GetJustifyDistributed, write=SetJustifyDistributed, nodefault};
	__property int Rotation = {read=GetRotation, write=SetRotation, nodefault};
	__property bool WrapText = {read=GetWrapText, write=SetWrapText, nodefault};
	__property bool ShrinkToFit = {read=GetShrinkToFit, write=SetShrinkToFit, nodefault};
	__property bool MergeCells = {read=GetMergeCells, write=SetMergeCells, nodefault};
	__property Xc12datastylesheet5::TXc12ReadOrder TextDirection = {read=GetTextDirection, write=SetTextDirection, nodefault};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TXLSNumFmtFractions : unsigned char { xnffNone, xnffOneDigit, xnffTwoDigits, xnffThreeDigits, xnffAsHalves, xnffAsQuarters, xnffAsEights, xnffAsSixtheenths, xnffAsTenths, xnffAsHundredths };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCmdFormatNumber : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString __fastcall GetFormat();
	void __fastcall SetFormat(const System::UnicodeString Value);
	void __fastcall SetDecimals(const int Value);
	void __fastcall SetThousands(const bool Value);
	void __fastcall SetNegColor(const System::Uitypes::TColor Value);
	void __fastcall SetNegColorSign(const bool Value);
	void __fastcall SetCurrencySymbolLCID(const int Value);
	void __fastcall SetPercentage(const bool Value);
	void __fastcall SetFractions(const TXLSNumFmtFractions Value);
	void __fastcall SetScientific(const bool Value);
	
protected:
	TXLSCmdFormat* FOwner;
	Xc12datastylesheet5::TXc12NumberFormats* FNumFmts;
	Xc12datastylesheet5::TXc12NumberFormat* FNumFmt;
	int FDecimals;
	bool FThousands;
	System::Uitypes::TColor FNegColor;
	bool FNegColorSign;
	int FCurrencyLCID;
	bool FPercentage;
	TXLSNumFmtFractions FFractions;
	bool FScientific;
	bool FAssigned;
	void __fastcall SetResult(Xc12datastylesheet5::TXc12NumberFormat* ADest);
	System::UnicodeString __fastcall GetDecimalsStr();
	void __fastcall MakeFormatString();
	
public:
	__fastcall TXLSCmdFormatNumber(TXLSCmdFormat* AOwner, Xc12datastylesheet5::TXc12NumberFormats* ANumFmts);
	__fastcall virtual ~TXLSCmdFormatNumber();
	void __fastcall Clear();
	__property System::UnicodeString Format = {read=GetFormat, write=SetFormat};
	__property int Decimals = {read=FDecimals, write=SetDecimals, nodefault};
	__property bool Thousands = {read=FThousands, write=SetThousands, nodefault};
	__property System::Uitypes::TColor NegativeColor = {read=FNegColor, write=SetNegColor, nodefault};
	__property bool NegativeColorShowSign = {read=FNegColorSign, write=SetNegColorSign, nodefault};
	__property int CurrencySymbolLCID = {read=FCurrencyLCID, write=SetCurrencySymbolLCID, nodefault};
	__property bool Percentage = {read=FPercentage, write=SetPercentage, nodefault};
	__property TXLSNumFmtFractions Fractions = {read=FFractions, write=SetFractions, nodefault};
	__property bool Scientific = {read=FScientific, write=SetScientific, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCmdFormatFill : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall SetPatternStyle(const Xc12datastylesheet5::TXc12FillPattern Value);
	Xc12datastylesheet5::TXc12FillPattern __fastcall GetPatternStyle();
	void __fastcall SetNoColor(const bool Value);
	
protected:
	TXLSCmdFormat* FOwner;
	Xc12datastylesheet5::TXc12Fills* FFills;
	Xc12datastylesheet5::TXc12Fill* FFill;
	TXLSCmdFormatColor* FBgColor;
	TXLSCmdFormatColor* FPatColor;
	bool FNoColor;
	System::StaticArray<bool, 3> FAssigneds;
	void __fastcall BgColorChanged(System::TObject* ASender);
	void __fastcall PatColorChanged(System::TObject* ASender);
	void __fastcall SetResult(Xc12datastylesheet5::TXc12Fill* ASrc, Xc12datastylesheet5::TXc12Fill* ADest);
	
public:
	__fastcall TXLSCmdFormatFill(TXLSCmdFormat* AOwner, Xc12datastylesheet5::TXc12Fills* AFills);
	__fastcall virtual ~TXLSCmdFormatFill();
	void __fastcall Clear();
	__property TXLSCmdFormatColor* BackgroundColor = {read=FBgColor};
	__property TXLSCmdFormatColor* PatternColor = {read=FPatColor};
	__property Xc12datastylesheet5::TXc12FillPattern PatternStyle = {read=GetPatternStyle, write=SetPatternStyle, nodefault};
	__property bool NoColor = {read=FNoColor, write=SetNoColor, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCmdFormatFont : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall SetCharset(const int Value);
	void __fastcall SetName(const System::UnicodeString Value);
	void __fastcall SetSize(const double Value);
	void __fastcall SetStyle(const Xc12datastylesheet5::TXc12FontStyles Value);
	void __fastcall SetSubSuperscript(const Xc12datastylesheet5::TXc12SubSuperscript Value);
	void __fastcall SetUnderline(const Xc12datastylesheet5::TXc12Underline Value);
	int __fastcall GetCharset();
	System::UnicodeString __fastcall GetName();
	double __fastcall GetSize();
	Xc12datastylesheet5::TXc12FontStyles __fastcall GetStyle();
	Xc12datastylesheet5::TXc12SubSuperscript __fastcall GetSubSuperscript();
	Xc12datastylesheet5::TXc12Underline __fastcall GetUnderline();
	bool __fastcall GetBold();
	bool __fastcall GetItalic();
	void __fastcall SetBold(const bool Value);
	void __fastcall SetItalic(const bool Value);
	
protected:
	TXLSCmdFormat* FOwner;
	Xc12datastylesheet5::TXc12Fonts* FFonts;
	Xc12datastylesheet5::TXc12Font* FFont;
	TXLSCmdFormatColor* FColor;
	System::StaticArray<bool, 7> FAssigneds;
	void __fastcall SetAssigned(const TCmdFmtFontProp AValue);
	void __fastcall Clear();
	void __fastcall ColorChanged(System::TObject* ASender);
	void __fastcall SetResult(Xc12datastylesheet5::TXc12Font* ASrc, Xc12datastylesheet5::TXc12Font* ADest);
	
public:
	__fastcall TXLSCmdFormatFont(TXLSCmdFormat* AOwner, Xc12datastylesheet5::TXc12Fonts* AFonts);
	__fastcall virtual ~TXLSCmdFormatFont();
	void __fastcall SetDefault();
	void __fastcall ClearAssigned();
	void __fastcall Assign(Vcl::Graphics::TFont* AFont)/* overload */;
	void __fastcall Assign(Xc12datastylesheet5::TXc12Font* AFont)/* overload */;
	void __fastcall CopyToTFont(Vcl::Graphics::TFont* ATFont);
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property double Size = {read=GetSize, write=SetSize};
	__property TXLSCmdFormatColor* Color = {read=FColor};
	__property Xc12datastylesheet5::TXc12FontStyles Style = {read=GetStyle, write=SetStyle, nodefault};
	__property bool Bold = {read=GetBold, write=SetBold, nodefault};
	__property bool Italic = {read=GetItalic, write=SetItalic, nodefault};
	__property Xc12datastylesheet5::TXc12Underline Underline = {read=GetUnderline, write=SetUnderline, nodefault};
	__property Xc12datastylesheet5::TXc12SubSuperscript SubSuperscript = {read=GetSubSuperscript, write=SetSubSuperscript, nodefault};
	__property int Charset = {read=GetCharset, write=SetCharset, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSCmdFormatBorder : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool __fastcall GetSide(TCmdBorderSide Index);
	void __fastcall SetSide(TCmdBorderSide Index, const bool Value);
	
protected:
	TXLSCmdFormat* FOwner;
	Xc12datastylesheet5::TXc12CellBorderOptions FOptions;
	Xc12datastylesheet5::TXc12CellBorderStyle FStyle;
	Xc12utils5::TXc12Color FColor;
	System::StaticArray<Xc12datastylesheet5::TXc12BorderPr*, 8> FBorders;
	System::StaticArray<TCmdTriState, 8> FSides;
	TXLSCmdFormatColor* FCmdColor;
	void __fastcall SetResult(Xc12datastylesheet5::TXc12Border* ASrc, Xc12datastylesheet5::TXc12Border* ADest, const TCmdBorderSides ASides);
	void __fastcall SetResultPr(Xc12datastylesheet5::TXc12BorderPr* ASrc, Xc12datastylesheet5::TXc12BorderPr* ADest, const TCmdBorderSide ASide);
	
public:
	__fastcall TXLSCmdFormatBorder(TXLSCmdFormat* AOwner);
	__fastcall virtual ~TXLSCmdFormatBorder();
	void __fastcall Clear();
	void __fastcall Preset(const TCmdBorderSidePreset ASides);
	__property TXLSCmdFormatColor* Color = {read=FCmdColor};
	__property Xc12datastylesheet5::TXc12CellBorderStyle Style = {read=FStyle, write=FStyle, nodefault};
	__property bool Side[TCmdBorderSide Index] = {read=GetSide, write=SetSide};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCmdFormatProtection : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool __fastcall GetHidden();
	bool __fastcall GetLocked();
	void __fastcall SetHidden(const bool Value);
	void __fastcall SetLocked(const bool Value);
	
protected:
	TXLSCmdFormat* FOwner;
	Xc12datastylesheet5::TXc12XFs* FXFs;
	Xc12datastylesheet5::TXc12XF* FXF;
	TCmdTriState FAssignLocked;
	TCmdTriState FAssignHidden;
	void __fastcall SetResult(Xc12datastylesheet5::TXc12XF* ASrc, Xc12datastylesheet5::TXc12XF* ADest);
	
public:
	__fastcall TXLSCmdFormatProtection(TXLSCmdFormat* AOwner, Xc12datastylesheet5::TXc12XFs* AXFs);
	__fastcall virtual ~TXLSCmdFormatProtection();
	void __fastcall Clear();
	__property bool Locked = {read=GetLocked, write=SetLocked, nodefault};
	__property bool Hidden = {read=GetHidden, write=SetHidden, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDefaultFormat : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12datastylesheet5::TXc12XF* FXF;
	System::UnicodeString FName;
	
public:
	void __fastcall UseByDirectWrite(Xc12manager5::TXLSEventCell* ACell);
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property Xc12datastylesheet5::TXc12XF* XF = {read=FXF};
public:
	/* TObject.Create */ inline __fastcall TXLSDefaultFormat() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSDefaultFormat() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDefaultFormats : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TXLSDefaultFormat* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSDefaultFormat* __fastcall GetItems(int Index);
	
protected:
	System::Inifiles::THashedStringList* FItems;
	TXLSDefaultFormat* __fastcall Add(Xc12datastylesheet5::TXc12XF* AXF, const System::UnicodeString AName);
	
public:
	__fastcall TXLSDefaultFormats();
	__fastcall virtual ~TXLSDefaultFormats();
	void __fastcall Clear();
	int __fastcall Count();
	TXLSDefaultFormat* __fastcall Find(const System::UnicodeString AName);
	__property TXLSDefaultFormat* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCmdFormat : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall SetSetRowHeight(const bool Value);
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	Xc12datastylesheet5::TXc12DataStyleSheet* FStyles;
	Xc12dataworksheet5::TXc12DataWorksheet* FSheet;
	Xlscolumn5::TXLSColumns* FColumns;
	Xlsrow5::TXLSRows* FRows;
	Xlscellareas5::TCellAreas* FAreas;
	Xlscellmmu5::TXLSCellMMU* FCells;
	TXLSCmdFormatMode FMode;
	bool FSetRowHeight;
	Xc12datastylesheet5::TXc12Font* FMaxFont;
	Xc12datastylesheet5::TXc12XF* FXF;
	TXLSCmdFormatAlignment* FAlignment;
	TXLSCmdFormatNumber* FNumFmt;
	TXLSCmdFormatFont* FFont;
	TXLSCmdFormatFill* FFill;
	TXLSCmdFormatBorder* FBorder;
	TXLSCmdFormatProtection* FProtect;
	Xc12datastylesheet5::TXc12XF* FSearchXF;
	System::StaticArray<bool, 6> FAssigneds;
	TXLSDefaultFormats* FDefaults;
	bool FAddBlank;
	Xlscmdformatvalues5::TXLSCmdFormatValues* FCommands;
	Xc12datastylesheet5::TXc12XF* __fastcall MakeXF(Xc12datastylesheet5::TXc12XF* ASrcXF, const TCmdBorderSides ASides);
	void __fastcall DoSSTRichString(Xc12datasst5::PXLSString ASSTStr);
	void __fastcall DoReplaceCell(const int ACol, const int ARow, Xc12datastylesheet5::TXc12XF* AXF);
	void __fastcall DoMergeCell(const int ACol, const int ARow, const TCmdBorderSides ASides)/* overload */;
	void __fastcall DoMergeCell(Xlscellmmu5::PXLSCellItem ACell, const int ACol, const int ARow, const TCmdBorderSides ASides)/* overload */;
	void __fastcall DoApplyReplace(int ACol1, int ARow1, int ACol2, int ARow2);
	void __fastcall DoApplyReplaceBorder(int ACol1, int ARow1, int ACol2, int ARow2);
	void __fastcall DoApplyMerge(int ACol1, int ARow1, int ACol2, int ARow2);
	void __fastcall DoApplyCommands();
	
public:
	__fastcall TXLSCmdFormat(Xc12manager5::TXc12Manager* AManager);
	__fastcall virtual ~TXLSCmdFormat();
	void __fastcall Clear();
	void __fastcall BeginEdit(Xlsutils5::TIndexObject* ASheet);
	void __fastcall Apply()/* overload */;
	void __fastcall Apply(const int ACol, const int ARow)/* overload */;
	void __fastcall Apply(int ACol1, int ARow1, int ACol2, int ARow2)/* overload */;
	void __fastcall ApplyCols(int ACol1, int ACol2);
	void __fastcall ApplyRows(int ARow1, int ARow2);
	void __fastcall ApplySheet();
	TXLSDefaultFormat* __fastcall AddAsDefault(const System::UnicodeString AName);
	__property TXLSCmdFormatMode Mode = {read=FMode, write=FMode, nodefault};
	__property bool SetRowHeight = {read=FSetRowHeight, write=SetSetRowHeight, nodefault};
	__property TXLSCmdFormatAlignment* Alignment = {read=FAlignment};
	__property TXLSCmdFormatNumber* Number = {read=FNumFmt};
	__property TXLSCmdFormatFont* Font = {read=FFont};
	__property TXLSCmdFormatFill* Fill = {read=FFill};
	__property TXLSCmdFormatBorder* Border = {read=FBorder};
	__property TXLSCmdFormatProtection* Protection = {read=FProtect};
	__property TXLSDefaultFormats* Defaults = {read=FDefaults};
	__property Xlscmdformatvalues5::TXLSCmdFormatValues* Commands = {read=FCommands};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlscmdformat5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSCMDFORMAT5)
using namespace Xlscmdformat5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlscmdformat5HPP
