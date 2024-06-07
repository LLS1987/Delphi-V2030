// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookTabSet2.pas' rev: 35.00 (Windows)

#ifndef Xbooktabset2HPP
#define Xbooktabset2HPP

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
#include <XLSUtils5.hpp>
#include <XBookWindows2.hpp>
#include <XBookRects2.hpp>
#include <XBookPaintGDI2.hpp>
#include <XBookPaint2.hpp>
#include <XBookSkin2.hpp>
#include <XBookUtils2.hpp>
#include <XBookTypes2.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbooktabset2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TTabButtons;
class DELPHICLASS TXTab;
class DELPHICLASS TXTabs;
class DELPHICLASS TXTabSet;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TTabButtons : public Xbookwindows2::TXSSClientWindow
{
	typedef Xbookwindows2::TXSSClientWindow inherited;
	
private:
	int FOverButton;
	System::StaticArray<Xbooktypes2::TXYRect, 4> FBtnRects;
	Xbookutils2::TXIntegerEvent FClickEvent;
	
public:
	__fastcall TTabButtons(Xbookwindows2::TXSSWindow* AParent);
	virtual void __fastcall SetSize(const int pX1, const int pY1, const int pX2, const int pY2);
	virtual void __fastcall Paint();
	virtual void __fastcall MouseDown(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseLeave();
	__property Xbookutils2::TXIntegerEvent OnClick = {read=FClickEvent, write=FClickEvent};
public:
	/* TXSSWindow.Destroy */ inline __fastcall virtual ~TTabButtons() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXTab : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FText;
	int FX1;
	int FX2;
	unsigned FColor;
	bool FFocused;
	int FSheet;
	void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetColor(const unsigned Value);
	
public:
	__property System::UnicodeString Text = {read=FText, write=SetText};
	__property int X1 = {read=FX1, write=FX1, nodefault};
	__property int X2 = {read=FX2, write=FX2, nodefault};
	__property unsigned Color = {read=FColor, write=SetColor, nodefault};
	__property bool Focused = {read=FFocused, write=FFocused, nodefault};
	__property int Sheet = {read=FSheet, write=FSheet, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXTab() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXTab() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXTabs : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXTab* operator[](int Index) { return this->Items[Index]; }
	
private:
	Xbookskin2::TXLSBookSkin* FSkin;
	int FLeftTab;
	int FWidth;
	int FSelectedTab;
	TXTab* __fastcall GetItems(int Index);
	void __fastcall SetClickTab(int Value, Xbookskin2::TTabState State, bool Range);
	void __fastcall SetSelectedTab(const int Value);
	int __fastcall GetLeftStart();
	
public:
	__fastcall TXTabs(Xbookskin2::TXLSBookSkin* Skin);
	void __fastcall CalcSize();
	HIDESBASE TXTab* __fastcall Add();
	int __fastcall MouseDown(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	__property TXTab* Items[int Index] = {read=GetItems/*, default*/};
	__property int LeftTab = {read=FLeftTab, write=FLeftTab, nodefault};
	__property int LeftStart = {read=GetLeftStart, nodefault};
	__property int SelectedTab = {read=FSelectedTab, write=SetSelectedTab, nodefault};
	__property int Width = {read=FWidth, write=FWidth, nodefault};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXTabs() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXTabSet : public Xbookwindows2::TXSSClientWindow
{
	typedef Xbookwindows2::TXSSClientWindow inherited;
	
private:
	TXTabs* FTabs;
	Xbookrects2::TSplitterHandle* FSplitter;
	double FPercentWidth;
	Xbookutils2::TX2IntegerEvent FXSizeEvent;
	bool FSplitterSizing;
	TTabButtons* FTabButtons;
	int FLastClick;
	int FExWidth;
	Xbookutils2::TXIntegerEvent FClickEvent;
	void __fastcall SetPercentWidth(const double Value);
	int __fastcall GetSelectedTab();
	void __fastcall SetSelectedTab(const int Value);
	System::UnicodeString __fastcall GetTexts(int Index);
	void __fastcall SetTexts(int Index, const System::UnicodeString Value);
	
protected:
	void __fastcall ButtonClick(System::TObject* Sender, int Value);
	void __fastcall ClientPaint();
	void __fastcall CalcEditSize();
	void __fastcall ShowEdit();
	void __fastcall HideEdit();
	void __fastcall TabEditKeyPress(System::TObject* Sender, System::WideChar &Key);
	
public:
	__fastcall TXTabSet(Xbookwindows2::TXSSWindow* AParent);
	__fastcall virtual ~TXTabSet();
	virtual void __fastcall SetSize(const int pX1, const int pY1, const int pX2, const int pY2);
	virtual void __fastcall Paint();
	virtual void __fastcall MouseDown(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseEnter(int X, int Y);
	virtual void __fastcall MouseLeave();
	int __fastcall SnapX(int &X);
	void __fastcall Exchange(int Index1, int Index2);
	virtual void __fastcall DeleteChilds();
	HIDESBASE void __fastcall Add(int ASheetIndex, System::UnicodeString TabText, unsigned TabColor = (unsigned)(0xf0000000));
	__property double PercentWidth = {read=FPercentWidth, write=SetPercentWidth};
	__property Xbookutils2::TX2IntegerEvent OnSize = {read=FXSizeEvent, write=FXSizeEvent};
	__property int LastClick = {read=FLastClick, write=FLastClick, nodefault};
	__property int SelectedTab = {read=GetSelectedTab, write=SetSelectedTab, nodefault};
	__property System::UnicodeString Texts[int Index] = {read=GetTexts, write=SetTexts};
	__property int ExWidth = {read=FExWidth, write=FExWidth, nodefault};
	__property Xbookutils2::TXIntegerEvent OnClick = {read=FClickEvent, write=FClickEvent};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 TABBUTTONWIDTH = System::Int8(0xf);
static const System::Int8 TABBUTTONHEIGHT = System::Int8(0xe);
static const System::Int8 MAXTABTEXTLEN = System::Int8(0x1f);
}	/* namespace Xbooktabset2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKTABSET2)
using namespace Xbooktabset2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbooktabset2HPP
