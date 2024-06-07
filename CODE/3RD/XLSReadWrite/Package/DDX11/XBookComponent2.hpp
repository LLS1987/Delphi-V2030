// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookComponent2.pas' rev: 35.00 (Windows)

#ifndef Xbookcomponent2HPP
#define Xbookcomponent2HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <XLSUtils5.hpp>
#include <XBook_System_2.hpp>
#include <XBookPaintLayers2.hpp>
#include <XBookSkin2.hpp>
#include <XBookWindows2.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookcomponent2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXSSComponent;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TXSSComponent : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
protected:
	Xbook_system_2::TXSSSystem* FSystem;
	Xbookpaintlayers2::TXPaintLayers* FLayers;
	Xbookskin2::TXLSBookSkin* FSkin;
	Xbookwindows2::TXSSRootWindow* FRootWin;
	System::Classes::TNotifyEvent FDebugEvent;
	System::UnicodeString FDebugText;
	virtual void __fastcall CreateHandle();
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMMouseLeave(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMTimer(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseWheel(Winapi::Messages::TWMMouseWheel &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Msg);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	Xbookwindows2::TXSSShiftState __fastcall CvtShift(const System::Classes::TShiftState AShift);
	
public:
	__fastcall virtual TXSSComponent(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TXSSComponent();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	virtual void __fastcall Paint();
	__property Xbookwindows2::TXSSRootWindow* RootWin = {read=FRootWin};
	__property System::Classes::TNotifyEvent OnDebug = {read=FDebugEvent, write=FDebugEvent};
	__property System::UnicodeString DebugText = {read=FDebugText};
public:
	/* TWinControl.CreateParented */ inline __fastcall TXSSComponent(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xbookcomponent2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKCOMPONENT2)
using namespace Xbookcomponent2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookcomponent2HPP
