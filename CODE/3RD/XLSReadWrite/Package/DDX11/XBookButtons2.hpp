// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookButtons2.pas' rev: 35.00 (Windows)

#ifndef Xbookbuttons2HPP
#define Xbookbuttons2HPP

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
#include <Vcl.Controls.hpp>
#include <XBookUtils2.hpp>
#include <XBookPaintGDI2.hpp>
#include <XBookPaint2.hpp>
#include <XBookSkin2.hpp>
#include <XBookWindows2.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookbuttons2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TButtonRect;
class DELPHICLASS TButtonRectList;
class DELPHICLASS TGroupButtons;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TButtonRect : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FX1;
	int FY1;
	int FX2;
	int FY2;
	int FIndex;
	Xbookpaintgdi2::TBmpButtonState FButtonState;
	int FIdA;
	int FIdB;
	
public:
	bool __fastcall MouseHit(int X, int Y);
	__property int X = {read=FX1, write=FX1, nodefault};
	__property int Y = {read=FY1, write=FY1, nodefault};
	__property int Index = {read=FIndex, write=FIndex, nodefault};
	__property Xbookpaintgdi2::TBmpButtonState ButtonState = {read=FButtonState, write=FButtonState, nodefault};
	__property int IdA = {read=FIdA, write=FIdA, nodefault};
	__property int IdB = {read=FIdB, write=FIdB, nodefault};
public:
	/* TObject.Create */ inline __fastcall TButtonRect() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TButtonRect() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TButtonRectList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TButtonRect* operator[](int Index) { return this->Items[Index]; }
	
private:
	Xbookpaintgdi2::TBmpButtonType FButtonType;
	Xbookskin2::TXLSBookSkin* FSkin;
	int FCurrButton;
	Xbookutils2::TX2IntegerEvent FButtonClickEvent;
	TButtonRect* __fastcall GetItems(int Index);
	
public:
	__fastcall TButtonRectList(Xbookskin2::TXLSBookSkin* Skin, Xbookpaintgdi2::TBmpButtonType ButtonType);
	HIDESBASE void __fastcall Add(int pX, int pY, int Index, int IdA = 0xffffffff, int IdB = 0xffffffff);
	void __fastcall Paint();
	int __fastcall MouseHit(int X, int Y);
	void __fastcall MouseDown(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	void __fastcall MouseMove(Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	void __fastcall MouseUp(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	void __fastcall MouseLeave();
	__property TButtonRect* Items[int Index] = {read=GetItems/*, default*/};
	__property Xbookpaintgdi2::TBmpButtonType ButtonType = {read=FButtonType, nodefault};
	__property Xbookutils2::TX2IntegerEvent OnButtonClick = {read=FButtonClickEvent, write=FButtonClickEvent};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TButtonRectList() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TGroupButtons : public Xbookwindows2::TXSSClientWindow
{
	typedef Xbookwindows2::TXSSClientWindow inherited;
	
private:
	TButtonRectList* FButtons;
	bool FHorizontal;
	int __fastcall GetLevels();
	void __fastcall SetLevels(const int Value);
	
public:
	__fastcall TGroupButtons(Xbookwindows2::TXSSWindow* AParent, bool AHorizontal);
	__fastcall virtual ~TGroupButtons();
	void __fastcall Clear();
	virtual void __fastcall Paint();
	virtual void __fastcall MouseDown(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseLeave();
	virtual void __fastcall SetSize(const int pX1, const int pY1, const int pX2, const int pY2);
	__property int Levels = {read=GetLevels, write=SetLevels, nodefault};
	__property TButtonRectList* Buttons = {read=FButtons};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xbookbuttons2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKBUTTONS2)
using namespace Xbookbuttons2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookbuttons2HPP
