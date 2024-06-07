// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookStdComponents.pas' rev: 35.00 (Windows)

#ifndef XbookstdcomponentsHPP
#define XbookstdcomponentsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Winapi.UxTheme.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XLSUtils5.hpp>
#include <XBookTypes2.hpp>
#include <XBookPaintGDI2.hpp>
#include <ExcelColorPicker.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookstdcomponents
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXBookDropDownWin;
class DELPHICLASS TXBookColorPicker;
class DELPHICLASS TXBookWindowComboBox;
class DELPHICLASS TXBookColorComboBox;
struct TXBookCellBorderLine;
class DELPHICLASS TXBookCellBorderPicker;
struct TXBookCellBorderStyle;
class DELPHICLASS TXBookCellBorderStylePicker;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXBookComboState : unsigned char { xbcsDisabled, xbcsNormal, xbcsHoover, xbcsClicked };

class PASCALIMPLEMENTATION TXBookDropDownWin : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
protected:
	Vcl::Controls::TCustomControl* FCombo;
	bool FCancel;
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	
public:
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
public:
	/* TCustomControl.Create */ inline __fastcall virtual TXBookDropDownWin(System::Classes::TComponent* AOwner) : Vcl::Controls::TCustomControl(AOwner) { }
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TXBookDropDownWin() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TXBookDropDownWin(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TXBookColorPicker : public TXBookDropDownWin
{
	typedef TXBookDropDownWin inherited;
	
private:
	HIDESBASE void __fastcall SetColor(const Xc12utils5::TXc12Color &Value);
	bool __fastcall GetCompact();
	void __fastcall SetCompact(const bool Value);
	
protected:
	Excelcolorpicker::TExcelColorPicker* FCPTheme;
	Excelcolorpicker::TExcelColorPicker* FCPStandard;
	int FTitleHeight;
	Xc12utils5::TXc12Color FSelColor;
	void __fastcall ThemeColorClicked(System::TObject* ASender);
	void __fastcall StandardColorClicked(System::TObject* ASender);
	
public:
	__fastcall virtual TXBookColorPicker(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TXBookColorPicker();
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	__property Xc12utils5::TXc12Color Color = {write=SetColor};
	__property Xc12utils5::TXc12Color SelectedColor = {read=FSelColor};
	
__published:
	__property bool Compact = {read=GetCompact, write=SetCompact, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TXBookColorPicker(HWND ParentWindow) : TXBookDropDownWin(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TXBookWindowComboBox : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
protected:
	NativeUInt FHTheme;
	TXBookComboState FState;
	TXBookDropDownWin* FDropDown;
	bool FCanceled;
	bool FIsDestroyingDropdown;
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	virtual void __fastcall SetEnabled(bool Value);
	virtual void __fastcall CreateDropDown();
	virtual void __fastcall BeforeCloseUp();
	virtual void __fastcall CloseUp();
	
public:
	__fastcall virtual TXBookWindowComboBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TXBookWindowComboBox();
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	__property bool Canceled = {read=FCanceled, nodefault};
	__property TabStop = {default=0};
public:
	/* TWinControl.CreateParented */ inline __fastcall TXBookWindowComboBox(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TXBookColorComboBox : public TXBookWindowComboBox
{
	typedef TXBookWindowComboBox inherited;
	
private:
	HIDESBASE void __fastcall SetColor(const Xc12utils5::TXc12Color &Value);
	
protected:
	Xc12utils5::TXc12Color FColor;
	Xc12utils5::TXc12Color FSelColor;
	System::Classes::TNotifyEvent FSelectEvent;
	virtual void __fastcall CreateDropDown();
	virtual void __fastcall BeforeCloseUp();
	virtual void __fastcall CloseUp();
	
public:
	virtual void __fastcall Paint();
	__property Xc12utils5::TXc12Color Color = {read=FColor, write=SetColor};
	
__published:
	__property System::Classes::TNotifyEvent OnSelect = {read=FSelectEvent, write=FSelectEvent};
public:
	/* TXBookWindowComboBox.Create */ inline __fastcall virtual TXBookColorComboBox(System::Classes::TComponent* AOwner) : TXBookWindowComboBox(AOwner) { }
	/* TXBookWindowComboBox.Destroy */ inline __fastcall virtual ~TXBookColorComboBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TXBookColorComboBox(HWND ParentWindow) : TXBookWindowComboBox(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TXBookCellBorderPickerStyle : unsigned char { xcbpsCell, xcbpsColumn, xcbpsRow, xcbpsArea };

enum DECLSPEC_DENUM TXBookCellBorderPickerSide : unsigned char { xcbpsLeft, xcbpsTop, xcbpsBottom, xcbpsRight, xcbpsInsideHoriz, xcbpsInsideVert, xcbpsDiagonalUp, xcbpsDiagonalDown };

struct DECLSPEC_DRECORD TXBookCellBorderLine
{
public:
	Xbooktypes2::TXYPoint Pt1;
	Xbooktypes2::TXYPoint Pt2;
	Xbooktypes2::TXYRect Click;
	bool CanClick;
	Xc12datastylesheet5::TXc12CellBorderStyle Style;
	Xc12utils5::TXc12Color Color;
	bool Changed;
};


class PASCALIMPLEMENTATION TXBookCellBorderPicker : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
	
private:
	typedef System::DynamicArray<TXBookCellBorderLine> _TXBookCellBorderPicker__1;
	
	
private:
	void __fastcall SetStyle(const TXBookCellBorderPickerStyle Value);
	Vcl::Stdctrls::TButton* __fastcall GetButton(const int Index);
	void __fastcall SetButton(const int Index, Vcl::Stdctrls::TButton* const Value);
	Vcl::Stdctrls::TButton* __fastcall GetButtonPreset(const int Index);
	void __fastcall SetButtonPreset(const int Index, Vcl::Stdctrls::TButton* const Value);
	TXBookCellBorderLine __fastcall GetSides(TXBookCellBorderPickerSide Index);
	
protected:
	int FMargin1;
	int FMargin2;
	TXBookCellBorderPickerStyle FStyle;
	_TXBookCellBorderPicker__1 FLines;
	System::StaticArray<Vcl::Stdctrls::TButton*, 8> FButtons;
	System::StaticArray<Vcl::Stdctrls::TButton*, 3> FBtnPreset;
	Xc12datastylesheet5::TXc12CellBorderStyle FBorderStyle;
	Xc12utils5::TXc12Color FBorderColor;
	System::UnicodeString FSampleText;
	bool FChanged;
	System::Classes::TNotifyEvent FSelectEvent;
	void __fastcall CalcLines();
	int __fastcall FindLine(const int AX, const int AY);
	void __fastcall SetLine(const int AIndex);
	void __fastcall UpdateLine(const int AIndex);
	void __fastcall ButtonClick(System::TObject* ASender);
	void __fastcall ButtonPresetClick(System::TObject* ASender);
	
public:
	__fastcall virtual TXBookCellBorderPicker(System::Classes::TComponent* AOwner);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
	__property TXBookCellBorderPickerStyle Style = {read=FStyle, write=SetStyle, nodefault};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BorderStyle = {read=FBorderStyle, write=FBorderStyle, nodefault};
	__property Xc12utils5::TXc12Color BorderColor = {read=FBorderColor, write=FBorderColor};
	__property TXBookCellBorderLine Sides[TXBookCellBorderPickerSide Index] = {read=GetSides};
	
__published:
	__property Vcl::Stdctrls::TButton* ButtonLeft = {read=GetButton, write=SetButton, index=0};
	__property Vcl::Stdctrls::TButton* ButtonTop = {read=GetButton, write=SetButton, index=1};
	__property Vcl::Stdctrls::TButton* ButtonBottom = {read=GetButton, write=SetButton, index=2};
	__property Vcl::Stdctrls::TButton* ButtonRight = {read=GetButton, write=SetButton, index=3};
	__property Vcl::Stdctrls::TButton* ButtonInsideHoriz = {read=GetButton, write=SetButton, index=4};
	__property Vcl::Stdctrls::TButton* ButtonInsideVert = {read=GetButton, write=SetButton, index=5};
	__property Vcl::Stdctrls::TButton* ButtonDiagUp = {read=GetButton, write=SetButton, index=6};
	__property Vcl::Stdctrls::TButton* ButtonDiagDown = {read=GetButton, write=SetButton, index=7};
	__property Vcl::Stdctrls::TButton* ButtonPresetNone = {read=GetButtonPreset, write=SetButtonPreset, index=0};
	__property Vcl::Stdctrls::TButton* ButtonPresetOutline = {read=GetButtonPreset, write=SetButtonPreset, index=1};
	__property Vcl::Stdctrls::TButton* ButtonPresetInside = {read=GetButtonPreset, write=SetButtonPreset, index=2};
	__property bool IsChanged = {read=FChanged, nodefault};
	__property System::Classes::TNotifyEvent OnSelect = {read=FSelectEvent, write=FSelectEvent};
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TXBookCellBorderPicker() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TXBookCellBorderPicker(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


struct DECLSPEC_DRECORD TXBookCellBorderStyle
{
public:
	Xc12datastylesheet5::TXc12CellBorderStyle Style;
	Xbooktypes2::TXYRect Click;
};


class PASCALIMPLEMENTATION TXBookCellBorderStylePicker : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	Xc12datastylesheet5::TXc12CellBorderStyle __fastcall GetLineStyle();
	void __fastcall SetLineStyle(const Xc12datastylesheet5::TXc12CellBorderStyle Value);
	void __fastcall SetLineColor(const Xc12utils5::TXc12Color &Value);
	
protected:
	System::StaticArray<TXBookCellBorderStyle, 14> FStyles;
	int FSelected;
	Xc12utils5::TXc12Color FLineColor;
	int FMargin;
	int FLineCellHeight;
	System::Classes::TNotifyEvent FSelectEvent;
	void __fastcall CalcStyles();
	MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	void __fastcall SetSelectedIndex(const int AIndex);
	
public:
	__fastcall virtual TXBookCellBorderStylePicker(System::Classes::TComponent* AOwner);
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	__property Xc12utils5::TXc12Color LineColor = {read=FLineColor, write=SetLineColor};
	__property Xc12datastylesheet5::TXc12CellBorderStyle LineStyle = {read=GetLineStyle, write=SetLineStyle, nodefault};
	
__published:
	__property System::Classes::TNotifyEvent OnSelect = {read=FSelectEvent, write=FSelectEvent};
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TXBookCellBorderStylePicker() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TXBookCellBorderStylePicker(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 XSS_COMBO_BTN_WIDTH = System::Int8(0x12);
}	/* namespace Xbookstdcomponents */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKSTDCOMPONENTS)
using namespace Xbookstdcomponents;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XbookstdcomponentsHPP
