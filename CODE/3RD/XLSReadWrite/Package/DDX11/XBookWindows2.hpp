// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookWindows2.pas' rev: 35.00 (Windows)

#ifndef Xbookwindows2HPP
#define Xbookwindows2HPP

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
#include <XLSUtils5.hpp>
#include <XBook_System_2.hpp>
#include <XBookPaintGDI2.hpp>
#include <XBookSkin2.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookwindows2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXSSWindow;
class DELPHICLASS TXSSWindows;
class DELPHICLASS TXSSClientWindow;
class DELPHICLASS TXSSRootWindow;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXSSMouseButton : unsigned char { xmbLeft, xmbRight, xmbMiddle };

enum DECLSPEC_DENUM Xbookwindows2__1 : unsigned char { xssShift, xssAlt, xssCtrl, xssLeft, xssRight, xssMiddle, xssDouble, xssTouch, xssPen, xssCommand };

typedef System::Set<Xbookwindows2__1, Xbookwindows2__1::xssShift, Xbookwindows2__1::xssCommand> TXSSShiftState;

enum DECLSPEC_DENUM TXSSKey : unsigned char { kyNone, kyEscape, kyTab, kyLeft, kyRight, kyUp, kyDown, kyPgUp, kyPgDown, kyHome, kyEnd, kyFirstCol, kyLastCol, kyFirstRow, kyLastRow, kyInplaceEdit, kyCopy, kyCut, kyPaste, kyPasteSpecial, kyDelete };

enum DECLSPEC_DENUM TXSSShiftKey : unsigned char { skShift, skCtrl, skAlt, skMouseLeft, skMouseRight, skMouseMiddle, skMouseDouble };

typedef System::Set<TXSSShiftKey, TXSSShiftKey::skShift, TXSSShiftKey::skMouseDouble> TXSSShiftKeys;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSWindow : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xbook_system_2::TXSSSystem* FSystem;
	Xbookskin2::TXLSBookSkin* FSkin;
	TXSSWindow* FParent;
	TXSSWindows* FChilds;
	int FX1;
	int FY1;
	int FX2;
	int FY2;
	bool FVisible;
	bool FEnabled;
	bool FIsOnScr;
	unsigned FColor;
	Xbookpaintgdi2::TXLSCursorType FCursor;
	int FId;
	virtual void __fastcall BeginPaint();
	virtual void __fastcall EndPaint();
	TXSSWindow* __fastcall RootWindow();
	
public:
	__fastcall TXSSWindow()/* overload */;
	__fastcall TXSSWindow(Xbookskin2::TXLSBookSkin* ASkin)/* overload */;
	__fastcall TXSSWindow(TXSSWindow* AParent)/* overload */;
	__fastcall virtual ~TXSSWindow();
	void __fastcall DeleteChild(TXSSWindow* AChild);
	virtual void __fastcall DeleteChilds();
	TXSSWindow* __fastcall FindWindow(const int AX, const int AY);
	void __fastcall Add(TXSSWindow* AWin);
	virtual void __fastcall Paint();
	virtual void __fastcall Repaint();
	virtual void __fastcall Invalidate();
	virtual void __fastcall SetSize(const int AX1, const int AY1, const int AX2, const int AY2);
	virtual bool __fastcall Hit(const int AX, const int AY);
	void __fastcall CaptureMouse(const bool ACapture);
	virtual void __fastcall MouseEnter(int X, int Y);
	virtual void __fastcall MouseLeave();
	virtual void __fastcall MouseDown(TXSSMouseButton Button, TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(TXSSMouseButton Button, TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseWheel(const int X, const int Y, const int Delta);
	void __fastcall Focus();
	virtual void __fastcall SetFocus();
	virtual void __fastcall KillFocus();
	virtual void __fastcall KeyDown(System::Word Key, TXSSShiftState Shift);
	virtual void __fastcall KeyPress(System::WideChar Key);
	virtual void __fastcall HandleKey(const TXSSKey AKey, const TXSSShiftKeys AShift);
	int __fastcall Width();
	int __fastcall Height();
	__property int X1 = {read=FX1, write=FX1, nodefault};
	__property int Y1 = {read=FY1, write=FY1, nodefault};
	__property int X2 = {read=FX2, write=FX2, nodefault};
	__property int Y2 = {read=FY2, write=FY2, nodefault};
	__property Xbookskin2::TXLSBookSkin* Skin = {read=FSkin};
	__property bool Visible = {read=FVisible, write=FVisible, nodefault};
	__property bool Enabled = {read=FEnabled, write=FEnabled, nodefault};
	__property unsigned Color = {read=FColor, write=FColor, nodefault};
	__property Xbookpaintgdi2::TXLSCursorType Cursor = {read=FCursor, write=FCursor, nodefault};
	__property int Id = {read=FId, write=FId, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSWindows : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TXSSWindow* operator[](const int Index) { return this->Items[Index]; }
	
private:
	TXSSWindow* __fastcall GetItems(const int Index);
	
protected:
	System::Contnrs::TObjectList* FItems;
	Xbook_system_2::TXSSSystem* FSystem;
	Xbookskin2::TXLSBookSkin* FSkin;
	
public:
	__fastcall TXSSWindows(Xbook_system_2::TXSSSystem* ASystem, Xbookskin2::TXLSBookSkin* ASkin);
	__fastcall virtual ~TXSSWindows();
	void __fastcall Clear();
	void __fastcall Add(TXSSWindow* AWin);
	void __fastcall Delete(TXSSWindow* AWin);
	int __fastcall Count();
	__property TXSSWindow* Items[const int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSClientWindow : public TXSSWindow
{
	typedef TXSSWindow inherited;
	
protected:
	unsigned FClipHandle;
	int FCX1;
	int FCY1;
	int FCX2;
	int FCY2;
	
public:
	virtual void __fastcall BeginPaint();
	void __fastcall BeginPaintClipParent();
	virtual void __fastcall EndPaint();
	virtual bool __fastcall ClientHit(const int AX, const int AY);
	virtual void __fastcall SetSize(const int AX1, const int AY1, const int AX2, const int AY2);
	virtual void __fastcall SetClientSize(const int AX1, const int AY1, const int AX2, const int AY2);
	__property int CX1 = {read=FCX1, nodefault};
	__property int CY1 = {read=FCY1, nodefault};
	__property int CX2 = {read=FCX2, nodefault};
	__property int CY2 = {read=FCY2, nodefault};
public:
	/* TXSSWindow.Create */ inline __fastcall TXSSClientWindow()/* overload */ : TXSSWindow() { }
	/* TXSSWindow.Create */ inline __fastcall TXSSClientWindow(Xbookskin2::TXLSBookSkin* ASkin)/* overload */ : TXSSWindow(ASkin) { }
	/* TXSSWindow.Create */ inline __fastcall TXSSClientWindow(TXSSWindow* AParent)/* overload */ : TXSSWindow(AParent) { }
	/* TXSSWindow.Destroy */ inline __fastcall virtual ~TXSSClientWindow() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSRootWindow : public TXSSClientWindow
{
	typedef TXSSClientWindow inherited;
	
protected:
	TXSSWindow* FFocusedWin;
	TXSSWindow* FMouseWin;
	TXSSWindow* FMouseCaptured;
	bool FMouseIsDown;
	TXSSWindow* __fastcall FindChild(const int AX, const int AY);
	TXSSWindow* __fastcall FindMouseChild(const int AX, const int AY);
	void __fastcall RootMouseDown(TXSSWindows* AChilds, TXSSMouseButton Button, TXSSShiftState Shift, int X, int Y);
	void __fastcall RootPaint(TXSSWindows* AChilds);
	void __fastcall RootCaptureMouse(const bool ACapture, TXSSWindow* AWin);
	
public:
	__fastcall TXSSRootWindow(Xbook_system_2::TXSSSystem* ASystem, Xbookskin2::TXLSBookSkin* ASkin);
	void __fastcall Clear();
	virtual void __fastcall KillFocus();
	virtual void __fastcall SetFocus()/* overload */;
	void __fastcall SetFocusWin(TXSSWindow* AWindow);
	virtual void __fastcall Paint();
	virtual void __fastcall MouseLeave();
	virtual void __fastcall MouseDown(TXSSMouseButton Button, TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(TXSSMouseButton Button, TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseWheel(const int X, const int Y, const int Delta);
	virtual void __fastcall KeyDown(System::Word Key, TXSSShiftState Shift);
	virtual void __fastcall KeyPress(System::WideChar Key);
	virtual void __fastcall HandleKey(const TXSSKey AKey, const TXSSShiftKeys AShift);
	__property TXSSWindow* FocusedWin = {read=FFocusedWin};
public:
	/* TXSSWindow.Destroy */ inline __fastcall virtual ~TXSSRootWindow() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xbookwindows2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKWINDOWS2)
using namespace Xbookwindows2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookwindows2HPP
