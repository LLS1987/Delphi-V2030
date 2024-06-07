// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FormPivotTableField.pas' rev: 35.00 (Windows)

#ifndef FormpivottablefieldHPP
#define FormpivottablefieldHPP

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
#include <Vcl.ComCtrls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <XLSPivotTables5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Formpivottablefield
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TfrmPivotTableField;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TfrmPivotTableField : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TButton* btnOk;
	Vcl::Stdctrls::TButton* btnCancel;
	Vcl::Stdctrls::TLabel* lblSourceName;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TEdit* edCustomName;
	Vcl::Stdctrls::TLabel* Label2;
	Vcl::Extctrls::TRadioGroup* rgSubtotals;
	Vcl::Stdctrls::TListBox* lbFunctions;
	Vcl::Stdctrls::TLabel* Label3;
	void __fastcall rgSubtotalsClick(System::TObject* Sender);
	void __fastcall lbFunctionsClick(System::TObject* Sender);
	
private:
	Xlspivottables5::TXLSPivotField* FField;
	
public:
	bool __fastcall Execute(Xlspivottables5::TXLSPivotField* AField);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TfrmPivotTableField(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TfrmPivotTableField(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TfrmPivotTableField() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TfrmPivotTableField(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Formpivottablefield */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FORMPIVOTTABLEFIELD)
using namespace Formpivottablefield;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// FormpivottablefieldHPP
