// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookControls2.pas' rev: 35.00 (Windows)

#ifndef Xbookcontrols2HPP
#define Xbookcontrols2HPP

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
#include <System.Math.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.UxTheme.hpp>
#include <XLSUtils5.hpp>
#include <XBookUtils2.hpp>
#include <XBookWindows2.hpp>
#include <XBookSkin2.hpp>
#include <XBookPaintGDI2.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookcontrols2
{
//-- forward type declarations -----------------------------------------------
struct TXLSShapeAnchor;
class DELPHICLASS TXLSShapeClientAnchor;
class DELPHICLASS TXBookClientShape;
class DELPHICLASS TXLSControl;
class DELPHICLASS TXLSScrollBar;
class DELPHICLASS TXLSListBox;
class DELPHICLASS TXLSComboBox;
class DELPHICLASS TXLSRadioButton;
class DELPHICLASS TXLSCheckBox;
class DELPHICLASS TXLSButton;
class DELPHICLASS TXLSLabel;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXScrollState : unsigned char { xssIdle, xssUpClicked, xssDownClicked, xssLargeUpClicked, xssLargeDownClicked, xssTrack, xssReleaseTrack };

enum DECLSPEC_DENUM TXScrollHitTest : unsigned char { xshtOutside, xshtUp, xshtDown, xshtLargeUp, xshtLargeDown, xshtThumb };

typedef void __fastcall (__closure *TXLSScrollEvent)(System::TObject* Sender, TXScrollState Value);

struct DECLSPEC_DRECORD TXLSShapeAnchor
{
public:
	int Col1;
	int Col1Offset;
	int Row1;
	int Row1Offset;
	int Col2;
	int Col2Offset;
	int Row2;
	int Row2Offset;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSShapeClientAnchor : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TXLSShapeAnchor FAnchor;
	
public:
	__property TXLSShapeAnchor Anchor = {read=FAnchor};
public:
	/* TObject.Create */ inline __fastcall TXLSShapeClientAnchor() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSShapeClientAnchor() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXBookClientShape : public Xbookwindows2::TXSSClientWindow
{
	typedef Xbookwindows2::TXSSClientWindow inherited;
	
protected:
	TXLSShapeClientAnchor* FShape;
	
public:
	__fastcall TXBookClientShape(Xbookwindows2::TXSSWindow* AParent, TXLSShapeClientAnchor* AShape);
	virtual void __fastcall Paint();
	__property TXLSShapeClientAnchor* Shape = {read=FShape};
public:
	/* TXSSWindow.Destroy */ inline __fastcall virtual ~TXBookClientShape() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSControl : public TXBookClientShape
{
	typedef TXBookClientShape inherited;
	
protected:
	Xbookutils2::TXLSProcEvent FSetCtrlFontEvent;
	
public:
	virtual void __fastcall SetCtrlFont();
	__property Xbookutils2::TXLSProcEvent OnSetCtrlFont = {read=FSetCtrlFontEvent, write=FSetCtrlFontEvent};
public:
	/* TXBookClientShape.Create */ inline __fastcall TXLSControl(Xbookwindows2::TXSSWindow* AParent, TXLSShapeClientAnchor* AShape) : TXBookClientShape(AParent, AShape) { }
	
public:
	/* TXSSWindow.Destroy */ inline __fastcall virtual ~TXLSControl() { }
	
};


class PASCALIMPLEMENTATION TXLSScrollBar : public TXLSControl
{
	typedef TXLSControl inherited;
	
private:
	unsigned FHTheme;
	bool FKindHoriz;
	int FBtnSize;
	int FMax;
	int FMin;
	int FPosition;
	int FTotalValues;
	TXScrollState FState;
	TXScrollHitTest FHit;
	TXScrollHitTest FLastHit;
	int FThumbPos;
	int FThumbSize;
	bool FThumbVisible;
	int FSmallChange;
	int FLargeChange;
	int FClickDPos;
	int FLastX;
	int FLastY;
	bool FTimerActive;
	System::Classes::TNotifyEvent FChangeEvent;
	TXLSScrollEvent FScrollEvent;
	bool FEnabled;
	bool FExcelStyle;
	int __fastcall PosXY(int X, int Y);
	int __fastcall PosC1();
	int __fastcall PosC2();
	void __fastcall SetMax(const int Value);
	void __fastcall SetMin(const int Value);
	void __fastcall SetPosition(const int Value);
	TXScrollHitTest __fastcall HitTest(int X, int Y);
	void __fastcall SetKindHoriz(const bool Value);
	void __fastcall SetEnabled(const bool Value);
	
protected:
	void __fastcall CalcThumbPos();
	void __fastcall DoPosChange();
	virtual void __fastcall ScrollChanged();
	void __fastcall PaintNormal();
	void __fastcall PaintThemed();
	
public:
	__fastcall TXLSScrollBar(Xbookwindows2::TXSSWindow* AParent, TXLSShapeClientAnchor* AShape);
	__fastcall virtual ~TXLSScrollBar();
	virtual void __fastcall Paint();
	virtual void __fastcall SetSize(const int pX1, const int pY1, const int pX2, const int pY2);
	virtual void __fastcall MouseDown(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseEnter(int X, int Y);
	virtual void __fastcall MouseLeave();
	void __fastcall HandleTimer(System::TObject* ASender, void * AData);
	int __fastcall SysSize();
	__property int MinVal = {read=FMin, write=SetMin, nodefault};
	__property int MaxVal = {read=FMax, write=SetMax, nodefault};
	__property int Position = {read=FPosition, write=SetPosition, nodefault};
	__property int TotalValues = {read=FTotalValues, write=FTotalValues, nodefault};
	__property int SmallChange = {read=FSmallChange, write=FSmallChange, nodefault};
	__property int LargeChange = {read=FLargeChange, write=FLargeChange, nodefault};
	__property bool KindHoriz = {read=FKindHoriz, write=SetKindHoriz, nodefault};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, nodefault};
	__property bool ExcelStyle = {read=FExcelStyle, write=FExcelStyle, nodefault};
	__property System::Classes::TNotifyEvent OnChange = {read=FChangeEvent, write=FChangeEvent};
	__property TXLSScrollEvent OnScroll = {read=FScrollEvent, write=FScrollEvent};
};


class PASCALIMPLEMENTATION TXLSListBox : public TXLSControl
{
	typedef TXLSControl inherited;
	
protected:
	TXLSScrollBar* FScroll;
	int FSelectedIndex;
	int FTopIndex;
	System::Classes::TNotifyEvent FChangeEvent;
	int __fastcall VisibleItems();
	void __fastcall ValuesChanged(System::TObject* Sender);
	void __fastcall ScrollChanged(System::TObject* Sender);
	void __fastcall SetSelected(int Y);
	void __fastcall PaintLine(int Index);
	void __fastcall SetTopIndex(int Value);
	void __fastcall SetSelectedIndex(int Value);
	virtual void __fastcall ListChanged();
	
public:
	__fastcall TXLSListBox(Xbookwindows2::TXSSWindow* AParent, TXLSShapeClientAnchor* AShape);
	__fastcall virtual ~TXLSListBox();
	virtual void __fastcall Paint();
	virtual void __fastcall SetSize(const int pX1, const int pY1, const int pX2, const int pY2);
	virtual void __fastcall MouseDown(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	__property System::Classes::TNotifyEvent OnChange = {read=FChangeEvent, write=FChangeEvent};
	__property int SelectedIndex = {read=FSelectedIndex, write=FSelectedIndex, nodefault};
};


class PASCALIMPLEMENTATION TXLSComboBox : public TXLSControl
{
	typedef TXLSControl inherited;
	
private:
	int __fastcall GetSelectedIndex();
	void __fastcall SetSelectedIndex(const int Value);
	
protected:
	TXLSListBox* FList;
	System::UnicodeString FValue;
	int FY2CbUp;
	bool FShowOnlyButton;
	bool FHighlight;
	virtual void __fastcall ListChanged(System::TObject* Sender);
	virtual void __fastcall HideList();
	virtual void __fastcall ShowList();
	
public:
	__fastcall TXLSComboBox(Xbookwindows2::TXSSWindow* AParent, TXLSShapeClientAnchor* AShape);
	__fastcall virtual ~TXLSComboBox();
	virtual void __fastcall Paint();
	virtual void __fastcall SetSize(const int pX1, const int pY1, const int pX2, const int pY2);
	virtual void __fastcall MouseDown(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	__property System::UnicodeString Value = {read=FValue, write=FValue};
	__property int SelectedIndex = {read=GetSelectedIndex, write=SetSelectedIndex, nodefault};
	__property bool Highlight = {read=FHighlight, write=FHighlight, nodefault};
};


class PASCALIMPLEMENTATION TXLSRadioButton : public TXLSControl
{
	typedef TXLSControl inherited;
	
protected:
	bool FChecked;
	System::UnicodeString FText;
	System::Classes::TNotifyEvent FChangeEvent;
	
public:
	__fastcall TXLSRadioButton(Xbookwindows2::TXSSWindow* AParent, TXLSShapeClientAnchor* AShape);
	__fastcall virtual ~TXLSRadioButton();
	virtual void __fastcall Paint();
	virtual void __fastcall MouseDown(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	__property bool Checked = {read=FChecked, write=FChecked, nodefault};
	__property System::UnicodeString Text = {read=FText, write=FText};
};


enum DECLSPEC_DENUM TXLSCheckBoxState : unsigned char { xcbsUnChecked, xcbsChecked, xcbsMixed };

class PASCALIMPLEMENTATION TXLSCheckBox : public TXLSControl
{
	typedef TXLSControl inherited;
	
protected:
	TXLSCheckBoxState FState;
	System::UnicodeString FText;
	
public:
	virtual void __fastcall Paint();
	virtual void __fastcall MouseDown(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	__property TXLSCheckBoxState Checked = {read=FState, write=FState, nodefault};
	__property System::UnicodeString Text = {read=FText, write=FText};
public:
	/* TXBookClientShape.Create */ inline __fastcall TXLSCheckBox(Xbookwindows2::TXSSWindow* AParent, TXLSShapeClientAnchor* AShape) : TXLSControl(AParent, AShape) { }
	
public:
	/* TXSSWindow.Destroy */ inline __fastcall virtual ~TXLSCheckBox() { }
	
};


class PASCALIMPLEMENTATION TXLSButton : public TXLSControl
{
	typedef TXLSControl inherited;
	
protected:
	System::UnicodeString FText;
	
public:
	virtual void __fastcall Paint();
	virtual void __fastcall MouseDown(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	__property System::UnicodeString Text = {read=FText, write=FText};
public:
	/* TXBookClientShape.Create */ inline __fastcall TXLSButton(Xbookwindows2::TXSSWindow* AParent, TXLSShapeClientAnchor* AShape) : TXLSControl(AParent, AShape) { }
	
public:
	/* TXSSWindow.Destroy */ inline __fastcall virtual ~TXLSButton() { }
	
};


class PASCALIMPLEMENTATION TXLSLabel : public TXLSControl
{
	typedef TXLSControl inherited;
	
protected:
	System::UnicodeString FText;
	
public:
	virtual void __fastcall Paint();
	virtual void __fastcall MouseDown(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	__property System::UnicodeString Text = {read=FText, write=FText};
public:
	/* TXBookClientShape.Create */ inline __fastcall TXLSLabel(Xbookwindows2::TXSSWindow* AParent, TXLSShapeClientAnchor* AShape) : TXLSControl(AParent, AShape) { }
	
public:
	/* TXSSWindow.Destroy */ inline __fastcall virtual ~TXLSLabel() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MIN_THUMBSIZE = System::Int8(0x8);
static const System::Int8 XSCROLL_TIMERTIME = System::Int8(0x32);
static const System::Byte XSCROLL_STARTTIMERTIME = System::Byte(0xc8);
static const System::Int8 XLSLISTBOX_TOPMARG = System::Int8(0x4);
static const System::Int8 XLSRADIOBUTTONSIZE = System::Int8(0xd);
}	/* namespace Xbookcontrols2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKCONTROLS2)
using namespace Xbookcontrols2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookcontrols2HPP
