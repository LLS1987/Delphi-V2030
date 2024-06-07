// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FrmColor.pas' rev: 35.00 (Windows)

#ifndef FrmcolorHPP
#define FrmcolorHPP

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
#include <ExcelColorPicker.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Xc12Utils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Frmcolor
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TfrmSelectColor;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TfrmSelectColor : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TButton* Button1;
	Vcl::Stdctrls::TButton* Button2;
	Excelcolorpicker::TExcelColorPicker* ecpTheme;
	Excelcolorpicker::TExcelColorPicker* ecpStandard;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TLabel* Label2;
	
public:
	bool __fastcall Execute(Xc12utils5::TXc12Color &AColor);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TfrmSelectColor(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TfrmSelectColor(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TfrmSelectColor() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TfrmSelectColor(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Frmcolor */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FRMCOLOR)
using namespace Frmcolor;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// FrmcolorHPP
