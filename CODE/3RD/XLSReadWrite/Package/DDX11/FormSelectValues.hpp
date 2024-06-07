// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FormSelectValues.pas' rev: 35.00 (Windows)

#ifndef FormselectvaluesHPP
#define FormselectvaluesHPP

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
#include <Vcl.CheckLst.hpp>
#include <XLSSharedItems5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Formselectvalues
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TfrmSelectValues;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TfrmSelectValues : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Checklst::TCheckListBox* clbValues;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TButton* btnOk;
	Vcl::Stdctrls::TButton* btnCancel;
	void __fastcall clbValuesClickCheck(System::TObject* Sender);
	
private:
	void __fastcall AddValues(Xlsshareditems5::TXLSUniqueSharedItemsValues* AValues, Xlsshareditems5::TXLSUniqueSharedItemsValues* AFilter);
	
public:
	bool __fastcall Execute(Xlsshareditems5::TXLSUniqueSharedItemsValues* AValues, Xlsshareditems5::TXLSUniqueSharedItemsValues* AFilter);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TfrmSelectValues(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TfrmSelectValues(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TfrmSelectValues() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TfrmSelectValues(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Formselectvalues */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FORMSELECTVALUES)
using namespace Formselectvalues;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// FormselectvaluesHPP
