// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookRects2.pas' rev: 35.00 (Windows)

#ifndef Xbookrects2HPP
#define Xbookrects2HPP

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
#include <XBookWindows2.hpp>
#include <XBookPaintGDI2.hpp>
#include <XBookPaint2.hpp>
#include <XBookSkin2.hpp>
#include <XBookUtils2.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookrects2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCornerRect;
class DELPHICLASS TSplitterHandle;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TCornerRect : public Xbookwindows2::TXSSClientWindow
{
	typedef Xbookwindows2::TXSSClientWindow inherited;
	
public:
	virtual void __fastcall MouseMove(Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
public:
	/* TXSSWindow.Create */ inline __fastcall TCornerRect()/* overload */ : Xbookwindows2::TXSSClientWindow() { }
	/* TXSSWindow.Create */ inline __fastcall TCornerRect(Xbookskin2::TXLSBookSkin* ASkin)/* overload */ : Xbookwindows2::TXSSClientWindow(ASkin) { }
	/* TXSSWindow.Create */ inline __fastcall TCornerRect(Xbookwindows2::TXSSWindow* AParent)/* overload */ : Xbookwindows2::TXSSClientWindow(AParent) { }
	/* TXSSWindow.Destroy */ inline __fastcall virtual ~TCornerRect() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TSplitterHandleType : unsigned char { shtHorizontal, shtVertical, shtCenter };

class PASCALIMPLEMENTATION TSplitterHandle : public Xbookwindows2::TXSSClientWindow
{
	typedef Xbookwindows2::TXSSClientWindow inherited;
	
protected:
	bool FSplitting;
	TSplitterHandleType FSplitterType;
	int FCurrX;
	int FCurrY;
	Xbookutils2::TXPaintLineEvent FPaintLineEvent;
	bool FSmall;
	
public:
	__fastcall TSplitterHandle(Xbookwindows2::TXSSWindow* APArent, TSplitterHandleType SplitterType);
	virtual void __fastcall Paint();
	virtual void __fastcall MouseDown(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	__property Xbookutils2::TXPaintLineEvent OnPaintLine = {read=FPaintLineEvent, write=FPaintLineEvent};
	__property bool Small = {read=FSmall, write=FSmall, nodefault};
public:
	/* TXSSWindow.Destroy */ inline __fastcall virtual ~TSplitterHandle() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xbookrects2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKRECTS2)
using namespace Xbookrects2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookrects2HPP
