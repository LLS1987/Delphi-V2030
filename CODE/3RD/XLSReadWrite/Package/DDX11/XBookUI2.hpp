// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookUI2.pas' rev: 35.00 (Windows)

#ifndef Xbookui2HPP
#define Xbookui2HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Types.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.Math.hpp>
#include <ExcelColorPicker.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XLSUtils5.hpp>
#include <XLSMMU5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSSheetData5.hpp>
#include <XLSReadWriteII5.hpp>
#include <XLSCmdFormat5.hpp>
#include <XLSMask5.hpp>
#include <XBookUtils2.hpp>
#include <XLSCellAreas5.hpp>
#include <XBookStdComponents.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookui2
{
//-- forward type declarations -----------------------------------------------
struct TXLSBookUIControlData;
class DELPHICLASS TXLSBookUI;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXLSBookUIControlId : unsigned char { xuicFormat, xuicFormatNumberSample, xuicFormatNumberCategory, xuicFormatNumberNumberDecimals, xuicFormatNumberNumberDecimals_Txt, xuicFormatNumberNumberUse1000Sep, xuicFormatNumberNumberNegNumbers, xuicFormatNumberNumberNegNumbers_Txt, xuicFormatNumberCurrencyDecimals, xuicFormatNumberCurrencyDecimals_Txt, xuicFormatNumberCurrencySymbol, xuicFormatNumberCurrencySymbol_Txt, xuicFormatNumberCurrencyNegNumbers, xuicFormatNumberCurrencyNegNumbers_Txt, xuicFormatNumberAccountingDecimals, xuicFormatNumberAccountingDecimals_Txt, xuicFormatNumberAccountingSymbol, xuicFormatNumberAccountingSymbol_Txt, xuicFormatNumberDate, xuicFormatNumberDateType_Txt, xuicFormatNumberTime, xuicFormatNumberTimeType_Txt, 
	xuicFormatNumberPercentageDecimals, xuicFormatNumberPercentageDecimals_Txt, xuicFormatNumberFractionType, xuicFormatNumberFractionType_Txt, xuicFormatNumberScientificDecimals, xuicFormatNumberScientificDecimals_Txt, xuicFormatNumberSpecialType, xuicFormatNumberSpecialType_Txt, xuicFormatNumberCustom, xuicFormatNumberCustomType_Txt, xuicFormatAlignOrientation, xuicFormatAlignDegrees, xuicFormatAlignHoriz, xuicFormatAlignVert, xuicFormatAlignIndent, xuicFormatAlignJustifyDistributed, xuicFormatAlignWrapText, xuicFormatAlignShrinkToFit, xuicFormatAlignMergeCells, xuicFormatAlignTextDirection, xuicFormatFontFont, xuicFormatFontFontEd, xuicFormatFontStyle, xuicFormatFontStyleEd, xuicFormatFontSize, xuicFormatFontSizeEd, xuicFormatFontUnderline, 
	xuicFormatFontColor, xuicFormatFontNormal, xuicFormatFontStriketrough, xuicFormatFontSuperscript, xuicFormatFontSubscript, xuicFormatFontPreview, xuicFormatBorderColor, xuicFormatBorderStyle, xuicFormatBorderBorders, xuicFillColor, xuicFillNoColor, xuicFillSample, xuicProtectionLocked, xuicProtectionHidden };

struct DECLSPEC_DRECORD TXLSBookUIControlData
{
public:
	Vcl::Controls::TControl* Control;
	System::TClass ControlClass;
	int Group;
};


class PASCALIMPLEMENTATION TXLSBookUI : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xlsreadwriteii5::TXLSReadWriteII5* FXLS;
	Xlssheetdata5::TXLSWorksheet* FSheet;
	System::StaticArray<TXLSBookUIControlData, 63> FControls;
	double FSampleNum;
	int FDecimals;
	bool FFillChanged;
	Vcl::Graphics::TBitmap* FBMPTrueType;
	Vcl::Graphics::TBitmap* FBMPPrinter;
	bool FAlignOrientationBtnDown;
	int __fastcall SearchStrings(const System::UnicodeString AText, System::Classes::TStrings* AStrings);
	void __fastcall AddControls();
	void __fastcall AddControlData(const TXLSBookUIControlId AId, System::TClass AClass, const int AGroup = 0xffffffff);
	void __fastcall ShowControls(const int AGroup, const bool AVisible);
	void __fastcall UpdateFontStyle();
	void __fastcall UpdateNumberSample();
	void __fastcall UpdateNegNumSample();
	void __fastcall UpdateNumFmt();
	void __fastcall UpdateFontSample();
	void __fastcall DialogActivate(System::TObject* ASender);
	void __fastcall DialogCloseQuery(System::TObject* ASender, bool &ACanClose);
	void __fastcall NumberCategoryClick(System::TObject* ASender);
	void __fastcall NumberChanged(System::TObject* ASender);
	void __fastcall NumberDecimalsChanged(System::TObject* ASender);
	void __fastcall NumberNegNumbersDrawItem(Vcl::Controls::TWinControl* Control, int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	void __fastcall NumberNegNumbersClick(System::TObject* ASender);
	void __fastcall NumberCurrencyCloseUp(System::TObject* ASender);
	void __fastcall NumberTypeClick(System::TObject* ASender);
	void __fastcall NumberCustomChanged(System::TObject* ASender);
	void __fastcall AlignOrientationPaint(System::TObject* Sender);
	void __fastcall AlignOrientationMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall AlignOrientationMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall AlignOrientationMouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall AlignOrientationDegreesChanged(System::TObject* ASender);
	void __fastcall AlignChanged(System::TObject* ASender);
	void __fastcall FontFontDrawItem(Vcl::Controls::TWinControl* Control, int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	void __fastcall FontFontClick(System::TObject* ASender);
	void __fastcall FontFontEdChanged(System::TObject* ASender);
	void __fastcall FontStyleClick(System::TObject* ASender);
	void __fastcall FontSizeEdChanged(System::TObject* ASender);
	void __fastcall FontSizeClick(System::TObject* ASender);
	void __fastcall FontUnderlineCloseUp(System::TObject* ASender);
	void __fastcall FontStriketroughClick(System::TObject* ASender);
	void __fastcall FontSuperscriptClick(System::TObject* ASender);
	void __fastcall FontSubscriptClick(System::TObject* ASender);
	void __fastcall FontNormalFontClick(System::TObject* ASender);
	void __fastcall FontColorChanged(System::TObject* ASender);
	void __fastcall FontSamplePaint(System::TObject* ASender);
	void __fastcall BorderColorSelect(System::TObject* ASender);
	void __fastcall BorderStyleSelect(System::TObject* ASender);
	void __fastcall BorderBorderSelect(System::TObject* ASender);
	void __fastcall FillColorClick(System::TObject* ASender);
	void __fastcall FillNoColorClick(System::TObject* ASender);
	void __fastcall ProtectionLockedClick(System::TObject* ASender);
	void __fastcall ProtectionHiddenClick(System::TObject* ASender);
	void __fastcall SelectNumberType(const int AIndex);
	void __fastcall FillCurrencyStrings(System::Classes::TStrings* AStrings);
	Xc12datastylesheet5::TXc12Fill* __fastcall FindCommonFill();
	void __fastcall Prepare();
	
public:
	__fastcall TXLSBookUI(Xlsreadwriteii5::TXLSReadWriteII5* AXLS);
	__fastcall virtual ~TXLSBookUI();
	void __fastcall RegisterControl(Vcl::Controls::TControl* AControl, const TXLSBookUIControlId AId);
	__property Xlssheetdata5::TXLSWorksheet* Sheet = {read=FSheet, write=FSheet};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xbookui2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKUI2)
using namespace Xbookui2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookui2HPP
