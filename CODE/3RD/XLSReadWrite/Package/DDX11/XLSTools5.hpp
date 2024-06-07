// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSTools5.pas' rev: 35.00 (Windows)

#ifndef Xlstools5HPP
#define Xlstools5HPP

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
#include <Xc12Manager5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XLSUtils5.hpp>
#include <XLSFormulaTypes5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlstools5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSFontRunData;
class DELPHICLASS TXLSFontRunBuilder;
class DELPHICLASS TXLSFormattedTextItem;
class DELPHICLASS TXLSFormattedText;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSFontRunData : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	/* TObject.Create */ inline __fastcall TXLSFontRunData() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSFontRunData() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSFontRunBuilder : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	Xc12datastylesheet5::TXc12DataStyleSheet* FStyles;
	System::UnicodeString FText;
	Xc12datastylesheet5::TXc12DynFontRunArray FRuns;
	bool FBold;
	bool FItalic;
	bool FUnderline;
	int FSize;
	System::UnicodeString FFontName;
	unsigned FColor;
	Xc12datastylesheet5::TXc12Font* __fastcall MakeFont();
	Xc12datastylesheet5::PXc12FontRun __fastcall IncFontRuns();
	bool __fastcall ExtractTag(System::UnicodeString &AText, /* out */ System::UnicodeString &ATag, /* out */ int &AIndex);
	void __fastcall DoSimpleTag(const System::UnicodeString ATag);
	
public:
	__fastcall TXLSFontRunBuilder(Xc12manager5::TXc12Manager* AManager);
	void __fastcall Clear();
	void __fastcall FromSimpleTags(const System::UnicodeString AText);
	__property System::UnicodeString Text = {read=FText};
	__property Xc12datastylesheet5::TXc12DynFontRunArray FontRuns = {read=FRuns};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSFontRunBuilder() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSFormattedTextItem : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FText;
	Xc12datastylesheet5::TXc12Font* FFont;
	bool FNewLine;
	
public:
	__fastcall TXLSFormattedTextItem(System::UnicodeString AText, Xc12datastylesheet5::TXc12Font* AFont);
	System::UnicodeString __fastcall AsHTML();
	System::UnicodeString __fastcall FontAsRTF();
	void __fastcall AddSpecialCR(System::WideChar ACR);
	__property System::UnicodeString Text = {read=FText};
	__property Xc12datastylesheet5::TXc12Font* Font = {read=FFont};
	__property bool NewLine = {read=FNewLine, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSFormattedTextItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSFormattedText : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSFormattedTextItem* operator[](int Index) { return this->Items[Index]; }
	
protected:
	Xc12datastylesheet5::TXc12Font* FFirstFont;
	bool FSplitAtCR;
	TXLSFormattedTextItem* __fastcall GetItems(int Index);
	
public:
	__fastcall TXLSFormattedText();
	HIDESBASE void __fastcall Assign(TXLSFormattedText* AText);
	HIDESBASE void __fastcall Add(const System::UnicodeString AText, Xc12datastylesheet5::TXc12Font* AFont)/* overload */;
	HIDESBASE void __fastcall Add(const System::UnicodeString AText, Xc12datastylesheet5::TXc12Font* AFirstFont, Xc12datastylesheet5::PXc12FontRunArray AFontRuns, int AFontRunsCount)/* overload */;
	System::UnicodeString __fastcall AsHTML(const bool AIncludeFirstFont = false);
	__property bool SplitAtCR = {read=FSplitAtCR, write=FSplitAtCR, nodefault};
	__property TXLSFormattedTextItem* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXLSFormattedText() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::WideChar XLS_LT_PLACEHOLDER = (System::WideChar)(0x1);
}	/* namespace Xlstools5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSTOOLS5)
using namespace Xlstools5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlstools5HPP
