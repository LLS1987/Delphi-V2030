﻿// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FormPivotTableOptions.pas' rev: 35.00 (Windows)

#ifndef FormpivottableoptionsHPP
#define FormpivottableoptionsHPP

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
#include <XLSPivotTables5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Formpivottableoptions
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TfrmPivotTableOptions;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TfrmPivotTableOptions : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TButton* btnOk;
	Vcl::Stdctrls::TButton* btnCancel;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TEdit* edName;
	Vcl::Stdctrls::TCheckBox* cbTotalsCols;
	Vcl::Stdctrls::TCheckBox* cbTotalsRows;
	
public:
	bool __fastcall Execute(Xlspivottables5::TXLSPivotTable* APivTable);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TfrmPivotTableOptions(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TfrmPivotTableOptions(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TfrmPivotTableOptions() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TfrmPivotTableOptions(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Formpivottableoptions */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FORMPIVOTTABLEOPTIONS)
using namespace Formpivottableoptions;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// FormpivottableoptionsHPP