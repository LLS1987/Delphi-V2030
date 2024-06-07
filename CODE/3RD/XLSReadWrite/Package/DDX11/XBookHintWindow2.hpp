// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookHintWindow2.pas' rev: 35.00 (Windows)

#ifndef Xbookhintwindow2HPP
#define Xbookhintwindow2HPP

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
#include <System.Types.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.Windows.hpp>
#include <XLSUtils5.hpp>
#include <XBookPaint2.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookhintwindow2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXHintWindow;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXHintWindow : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Vcl::Controls::TControl* FParent;
	Vcl::Controls::THintWindow* FHintWnd;
	Xbookpaint2::TXLSBookPaint* FXPaint;
	System::UnicodeString __fastcall GetText();
	void __fastcall SetText(const System::UnicodeString Value);
	
public:
	__fastcall TXHintWindow(Vcl::Controls::TControl* Parent, Xbookpaint2::TXLSBookPaint* XPaint);
	__fastcall virtual ~TXHintWindow();
	void __fastcall Show(int X, int Y);
	void __fastcall Hide();
	__property System::UnicodeString Text = {read=GetText, write=SetText};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xbookhintwindow2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKHINTWINDOW2)
using namespace Xbookhintwindow2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookhintwindow2HPP
