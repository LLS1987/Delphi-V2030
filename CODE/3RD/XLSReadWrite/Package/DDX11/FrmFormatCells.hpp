// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FrmFormatCells.pas' rev: 35.00 (Windows)

#ifndef FrmformatcellsHPP
#define FrmformatcellsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Variants.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <XLSBook2.hpp>
#include <Vcl.ComCtrls.hpp>
#include <XBookUI2.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.Math.hpp>
#include <XLSUtils5.hpp>
#include <XBookStdComponents.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Menus.hpp>
#include <ExcelColorPicker.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Frmformatcells
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TfrmFmtCells;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TfrmFmtCells : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TButton* Button1;
	Vcl::Stdctrls::TButton* Button2;
	Vcl::Comctrls::TPageControl* PageControl;
	Vcl::Comctrls::TTabSheet* tsNumber;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TListBox* lbNumCategory;
	Vcl::Stdctrls::TGroupBox* GroupBox1;
	Vcl::Stdctrls::TLabel* lblNumSample;
	Vcl::Stdctrls::TListBox* lbNumNegNumbers;
	Vcl::Stdctrls::TLabel* lblNumNegNumbers;
	Vcl::Stdctrls::TCheckBox* cbNumUse1000Sep;
	Vcl::Stdctrls::TEdit* edNumDecimals;
	Vcl::Stdctrls::TLabel* lblNumDecimal;
	Vcl::Comctrls::TUpDown* udNumDecimals;
	Vcl::Stdctrls::TComboBox* cbNumCurrencySymbol;
	Vcl::Stdctrls::TLabel* lblNumCurrencySymbol;
	Vcl::Stdctrls::TListBox* lbNumType;
	Vcl::Stdctrls::TLabel* lblNumType;
	Vcl::Stdctrls::TEdit* edNumberCustom;
	Vcl::Comctrls::TTabSheet* tsAlignment;
	Vcl::Extctrls::TPaintBox* pbAlignOrientation;
	Vcl::Comctrls::TUpDown* udAlignDegrees;
	Vcl::Stdctrls::TEdit* edAlignDegrees;
	Vcl::Stdctrls::TLabel* Label2;
	Vcl::Stdctrls::TComboBox* cbAlignTextHoriz;
	Vcl::Stdctrls::TLabel* Label3;
	Vcl::Stdctrls::TLabel* Label4;
	Vcl::Stdctrls::TComboBox* cbAlignTextVert;
	Vcl::Comctrls::TUpDown* udAlignTextIndent;
	Vcl::Stdctrls::TEdit* edAlignTextIndent;
	Vcl::Stdctrls::TLabel* Label5;
	Vcl::Stdctrls::TCheckBox* cbAlignJustifyDistr;
	Vcl::Stdctrls::TCheckBox* cbAlignWrapText;
	Vcl::Stdctrls::TCheckBox* cbAlignShrinkToFit;
	Vcl::Stdctrls::TCheckBox* cbAlignMergeCells;
	Vcl::Stdctrls::TLabel* Label6;
	Vcl::Stdctrls::TComboBox* cbAlignTextDirection;
	Vcl::Stdctrls::TLabel* Label7;
	Vcl::Stdctrls::TLabel* Label8;
	Vcl::Stdctrls::TLabel* Label9;
	Vcl::Stdctrls::TLabel* Label10;
	Vcl::Comctrls::TTabSheet* tsFont;
	Vcl::Stdctrls::TListBox* lbFontFont;
	Vcl::Stdctrls::TLabel* Label11;
	Vcl::Stdctrls::TEdit* edFontFont;
	Vcl::Stdctrls::TListBox* lbFontStyle;
	Vcl::Stdctrls::TEdit* edFontStyle;
	Vcl::Stdctrls::TListBox* lbFontSize;
	Vcl::Stdctrls::TEdit* edFontSize;
	Vcl::Stdctrls::TLabel* Label12;
	Vcl::Stdctrls::TLabel* Label13;
	Vcl::Stdctrls::TLabel* Label14;
	Vcl::Stdctrls::TComboBox* cbFontUnderline;
	Vcl::Stdctrls::TLabel* Label15;
	Vcl::Stdctrls::TButton* btnFontNormal;
	Vcl::Stdctrls::TLabel* Label16;
	Vcl::Stdctrls::TCheckBox* cbFontStriketrough;
	Vcl::Stdctrls::TCheckBox* cbFontSuperscript;
	Vcl::Stdctrls::TCheckBox* cbFontSubscript;
	Vcl::Stdctrls::TLabel* Label17;
	Vcl::Extctrls::TPaintBox* pbFontPreview;
	Vcl::Comctrls::TTabSheet* tsBorder;
	Vcl::Controls::TImageList* ImageList;
	Vcl::Controls::TImageList* ImageList_27;
	Vcl::Stdctrls::TLabel* Label18;
	Vcl::Stdctrls::TLabel* Label19;
	Vcl::Stdctrls::TLabel* Label20;
	Vcl::Stdctrls::TLabel* Label21;
	Vcl::Comctrls::TTabSheet* tsFill;
	Vcl::Stdctrls::TLabel* Label22;
	Vcl::Comctrls::TTabSheet* tsProtection;
	Vcl::Stdctrls::TCheckBox* cbProtectionLocked;
	Vcl::Stdctrls::TCheckBox* cbProtectionHidden;
	Xbookstdcomponents::TXBookColorComboBox* xccbFontColor;
	Xbookstdcomponents::TXBookColorComboBox* xbccbBorder;
	Xbookstdcomponents::TXBookCellBorderStylePicker* xcbspBorder;
	Excelcolorpicker::TExcelColorPicker* ecpFillColors;
	Excelcolorpicker::TExcelColorPicker* ecpFillStdColors;
	Vcl::Extctrls::TShape* Shape1;
	Vcl::Stdctrls::TButton* btnFillNoColor;
	Vcl::Extctrls::TShape* shpFillSample;
	Vcl::Stdctrls::TLabel* Label23;
	Vcl::Extctrls::TShape* Shape2;
	Vcl::Buttons::TBitBtn* btnPresetNone;
	Vcl::Buttons::TBitBtn* btnPresetOutline;
	Xbookstdcomponents::TXBookCellBorderPicker* xcbpBorder;
	Vcl::Buttons::TBitBtn* btnBorderDiagDown;
	Vcl::Buttons::TBitBtn* btnBorderRight;
	Vcl::Buttons::TBitBtn* btnBorderInsideVert;
	Vcl::Buttons::TBitBtn* btnBorderLeft;
	Vcl::Buttons::TBitBtn* btnBorderDiagUp;
	Vcl::Buttons::TBitBtn* btnBorderBottom;
	Vcl::Buttons::TBitBtn* btnBorderInsideHoriz;
	Vcl::Buttons::TBitBtn* btnBorderTop;
	Vcl::Buttons::TBitBtn* btnPresetInside;
	void __fastcall FormClose(System::TObject* Sender, System::Uitypes::TCloseAction &Action);
	void __fastcall FormCreate(System::TObject* Sender);
	
private:
	Xlsbook2::TXLSSpreadSheet* FXSS;
	void __fastcall AddLocalizedTexts();
	void __fastcall RegisterControls();
	
public:
	bool __fastcall Execute(Xlsbook2::TXLSSpreadSheet* AXSS);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TfrmFmtCells(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TfrmFmtCells(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TfrmFmtCells() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TfrmFmtCells(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Frmformatcells */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FRMFORMATCELLS)
using namespace Frmformatcells;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// FrmformatcellsHPP
