// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ExcelColorPicker.pas' rev: 35.00 (Windows)

#ifndef ExcelcolorpickerHPP
#define ExcelcolorpickerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.Windows.hpp>
#include <System.UITypes.hpp>
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>
#include <System.Math.hpp>
#include <Vcl.Dialogs.hpp>

//-- user supplied -----------------------------------------------------------

namespace Excelcolorpicker
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TColorSwatch;
class DELPHICLASS TColorSwatches;
class DELPHICLASS TSwatchContainer;
class DELPHICLASS TEx97Swatches;
class DELPHICLASS TEx2007ThemeSwatches;
class DELPHICLASS TEx2007StandardSwatches;
class DELPHICLASS TExcelColorPicker;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TColorSwatch : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	int Col;
	int Row;
	Xc12utils5::TXc12Color Color;
	int X;
	int Y;
public:
	/* TObject.Create */ inline __fastcall TColorSwatch() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TColorSwatch() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TColorSwatches : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TColorSwatch*> _TColorSwatches__1;
	
	typedef System::DynamicArray<System::DynamicArray<TColorSwatch*> > _TColorSwatches__2;
	
	
private:
	void __fastcall SetCols(const int Value);
	void __fastcall SetRows(const int Value);
	void __fastcall SetSwatchSize(const int Value);
	void __fastcall SetSwatchXSpacing(const int Value);
	void __fastcall SetSwatchYSpacing(const int Value);
	void __fastcall SetY1(const int Value);
	void __fastcall SetX1(const int Value);
	TColorSwatch* __fastcall GetSwatches(int Col, int Row);
	
protected:
	int FX1;
	int FY1;
	int FX2;
	int FY2;
	int FHorizMarg;
	int FVertMarg;
	int FCols;
	int FRows;
	int FSwatchSize;
	int FSwatchXSpacing;
	int FSwatchYSpacing;
	_TColorSwatches__2 FSwatches;
	TColorSwatch* FCurrSwatch;
	TColorSwatch* FSelectedSwatch;
	TColorSwatch* FTempSwatch;
	void __fastcall Clear();
	virtual void __fastcall InitSwatches();
	void __fastcall PaintSwatch(Vcl::Graphics::TCanvas* Canvas, TColorSwatch* Swatch);
	void __fastcall PaintMouseSwatch(Vcl::Graphics::TCanvas* Canvas, TColorSwatch* Swatch);
	bool __fastcall Hit(int X, int Y);
	
public:
	__fastcall TColorSwatches(int Cols, int Rows);
	__fastcall virtual ~TColorSwatches();
	void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	void __fastcall MouseMove(Vcl::Graphics::TCanvas* Canvas, int X, int Y);
	void __fastcall MouseUp(Vcl::Graphics::TCanvas* Canvas, int X, int Y);
	void __fastcall ClearMouse(Vcl::Graphics::TCanvas* Canvas);
	bool __fastcall ClientHit(int X, int Y);
	void __fastcall ClearSelected(Vcl::Graphics::TCanvas* Canvas);
	bool __fastcall SetSelected(Vcl::Graphics::TCanvas* Canvas, const Xc12utils5::TXc12Color &Color);
	__property int X1 = {read=FX1, write=SetX1, nodefault};
	__property int Y1 = {read=FY1, write=SetY1, nodefault};
	__property int X2 = {read=FX2, nodefault};
	__property int Y2 = {read=FY2, nodefault};
	__property int Cols = {read=FCols, write=SetCols, nodefault};
	__property int Rows = {read=FRows, write=SetRows, nodefault};
	__property int SwatchSize = {read=FSwatchSize, write=SetSwatchSize, nodefault};
	__property int SwatchXSpacing = {read=FSwatchXSpacing, write=SetSwatchXSpacing, nodefault};
	__property int SwatchYSpacing = {read=FSwatchYSpacing, write=SetSwatchYSpacing, nodefault};
	__property TColorSwatch* Swatches[int Col][int Row] = {read=GetSwatches/*, default*/};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TSwatchContainer : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TColorSwatches*> _TSwatchContainer__1;
	
	
private:
	void __fastcall SetX1(const int Value);
	void __fastcall SetY1(const int Value);
	
protected:
	int FX1;
	int FY1;
	int FX2;
	int FY2;
	_TSwatchContainer__1 FSwatchList;
	Xc12utils5::TXc12Color FSelectedColor;
	virtual void __fastcall Initiate();
	void __fastcall _ClearSelected();
	
public:
	__fastcall TSwatchContainer();
	__fastcall virtual ~TSwatchContainer();
	void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	void __fastcall MouseMove(Vcl::Graphics::TCanvas* Canvas, int X, int Y);
	void __fastcall MouseUp(Vcl::Graphics::TCanvas* Canvas, int X, int Y);
	void __fastcall ClearMouse(Vcl::Graphics::TCanvas* Canvas);
	void __fastcall ClearSelected(Vcl::Graphics::TCanvas* Canvas);
	bool __fastcall ClientHit(int X, int Y);
	bool __fastcall SwatchHit();
	bool __fastcall SetSelected(Vcl::Graphics::TCanvas* Canvas, const Xc12utils5::TXc12Color &Color);
	__property int X1 = {read=FX1, write=SetX1, nodefault};
	__property int Y1 = {read=FY1, write=SetY1, nodefault};
	__property int X2 = {read=FX2, nodefault};
	__property int Y2 = {read=FY2, nodefault};
};


class PASCALIMPLEMENTATION TEx97Swatches : public TSwatchContainer
{
	typedef TSwatchContainer inherited;
	
protected:
	virtual void __fastcall Initiate();
	
public:
	__fastcall TEx97Swatches();
public:
	/* TSwatchContainer.Destroy */ inline __fastcall virtual ~TEx97Swatches() { }
	
};


class PASCALIMPLEMENTATION TEx2007ThemeSwatches : public TSwatchContainer
{
	typedef TSwatchContainer inherited;
	
protected:
	System::StaticArray<System::StaticArray<double, 5>, 10> FAdjust;
	virtual void __fastcall Initiate();
	
public:
	__fastcall TEx2007ThemeSwatches(bool Compact);
public:
	/* TSwatchContainer.Destroy */ inline __fastcall virtual ~TEx2007ThemeSwatches() { }
	
};


class PASCALIMPLEMENTATION TEx2007StandardSwatches : public TSwatchContainer
{
	typedef TSwatchContainer inherited;
	
protected:
	virtual void __fastcall Initiate();
	
public:
	__fastcall TEx2007StandardSwatches();
public:
	/* TSwatchContainer.Destroy */ inline __fastcall virtual ~TEx2007StandardSwatches() { }
	
};


enum DECLSPEC_DENUM TExcelColorPickerMode : unsigned char { ecpmNone, ecpmExcel2007ThemeCompact, ecpmExcel2007Theme, ecpmExcel2007Standard, ecpmExcel97 };

class PASCALIMPLEMENTATION TExcelColorPicker : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
private:
	void __fastcall SetColorMode(const TExcelColorPickerMode Value);
	Xc12utils5::TXc12Color __fastcall GetExcelColor();
	void __fastcall SetExcelColor(const Xc12utils5::TXc12Color &Value);
	void __fastcall SetLinkedPicker(TExcelColorPicker* const Value);
	
protected:
	TExcelColorPickerMode FColorMode;
	TSwatchContainer* FColorSwatches;
	System::Classes::TNotifyEvent FClickEvent;
	TExcelColorPicker* FLinkedPicker;
	TExcelColorPicker* FParentPicker;
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	MESSAGE void __fastcall WMMouseLeave(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TExcelColorPicker(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TExcelColorPicker();
	virtual void __fastcall Paint();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	bool __fastcall FindAndSelect(const Xc12utils5::TXc12Color &AColor);
	__property Xc12utils5::TXc12Color ExcelColor = {read=GetExcelColor, write=SetExcelColor};
	
__published:
	__property TExcelColorPickerMode ColorMode = {read=FColorMode, write=SetColorMode, nodefault};
	__property TExcelColorPicker* LinkedPicker = {read=FLinkedPicker, write=SetLinkedPicker};
	__property System::Classes::TNotifyEvent OnClick = {read=FClickEvent, write=FClickEvent};
};


//-- var, const, procedure ---------------------------------------------------
static const int SWATCH_BORDERCOLOR = int(0xc5c5c5);
static const int SWATCH_MOUSECOLOR1 = int(0x3694f2);
static const int SWATCH_MOUSECOLOR2 = int(0x94e2ff);
static const int SWATCH_SELECTEDCOLOR = int(0x1048ef);
}	/* namespace Excelcolorpicker */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_EXCELCOLORPICKER)
using namespace Excelcolorpicker;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ExcelcolorpickerHPP
