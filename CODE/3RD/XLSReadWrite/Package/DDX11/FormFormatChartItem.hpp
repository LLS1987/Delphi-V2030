// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FormFormatChartItem.pas' rev: 35.00 (Windows)

#ifndef FormformatchartitemHPP
#define FormformatchartitemHPP

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
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <xpgParseDrawingCommon.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <XLSDrawing5.hpp>
#include <Vcl.ExtDlgs.hpp>
#include <Xc12Utils5.hpp>
#include <FrmColor.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Formformatchartitem
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TfrmFormatChartItem;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TfrmFormatChartItem : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TButton* Button2;
	Vcl::Extctrls::TRadioGroup* rgFill;
	Vcl::Extctrls::TRadioGroup* rgLine;
	Vcl::Comctrls::TPageControl* pcFill;
	Vcl::Comctrls::TTabSheet* tsSolid;
	Vcl::Comctrls::TTabSheet* tsGradient;
	Vcl::Comctrls::TTabSheet* tsPicture;
	Vcl::Stdctrls::TButton* btnGradAdd;
	Vcl::Stdctrls::TButton* btnGradRemove;
	Vcl::Stdctrls::TComboBox* cbGradStops;
	Vcl::Stdctrls::TButton* btnGradColor;
	Vcl::Extctrls::TPaintBox* pbFillGrad;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TLabel* Label2;
	Vcl::Stdctrls::TEdit* edFillFilename;
	Vcl::Stdctrls::TButton* Button4;
	Vcl::Extdlgs::TOpenPictureDialog* dlgOpenPict;
	Vcl::Stdctrls::TCheckBox* cbFillPictTile;
	Vcl::Stdctrls::TButton* btnFillColor;
	Vcl::Comctrls::TTrackBar* tbGradTransp;
	Vcl::Stdctrls::TLabel* lblGradTransp;
	Vcl::Comctrls::TTrackBar* tbPictTransp;
	Vcl::Stdctrls::TLabel* lblPictTransp;
	Vcl::Comctrls::TTrackBar* tbSolidTransp;
	Vcl::Stdctrls::TLabel* lblSolidTransp;
	Vcl::Extctrls::TPaintBox* pbFillPict;
	Vcl::Extctrls::TPaintBox* pbFillSolid;
	Vcl::Comctrls::TPageControl* pcLine;
	Vcl::Comctrls::TTabSheet* tsLineSolid;
	Vcl::Stdctrls::TLabel* Label3;
	Vcl::Stdctrls::TLabel* Label4;
	Vcl::Comctrls::TUpDown* udLineWidth;
	Vcl::Stdctrls::TEdit* edLineWidth;
	Vcl::Stdctrls::TButton* Button3;
	Vcl::Extctrls::TPaintBox* pbLineSolid;
	void __fastcall pbFillGradPaint(System::TObject* Sender);
	void __fastcall rgFillClick(System::TObject* Sender);
	void __fastcall btnGradAddClick(System::TObject* Sender);
	void __fastcall btnGradRemoveClick(System::TObject* Sender);
	void __fastcall btnGradColorClick(System::TObject* Sender);
	void __fastcall Button4Click(System::TObject* Sender);
	void __fastcall cbFillPictTileClick(System::TObject* Sender);
	void __fastcall btnFillColorClick(System::TObject* Sender);
	void __fastcall tbGradTranspChange(System::TObject* Sender);
	void __fastcall tbPictTranspChange(System::TObject* Sender);
	void __fastcall tbSolidTranspChange(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall pbFillPictPaint(System::TObject* Sender);
	void __fastcall pbFillSolidPaint(System::TObject* Sender);
	void __fastcall cbFillGradHorizClick(System::TObject* Sender);
	void __fastcall rgLineClick(System::TObject* Sender);
	void __fastcall Button3Click(System::TObject* Sender);
	void __fastcall pbLineSolidPaint(System::TObject* Sender);
	void __fastcall edLineWidthChange(System::TObject* Sender);
	
private:
	Xlsdrawing5::TXLSDrwShapeProperies* FShapeProps;
	Vcl::Graphics::TBitmap* FBitmap;
	void __fastcall LoadPicture(System::UnicodeString AFilename);
	void __fastcall PaintPicture();
	void __fastcall SetupGradient();
	void __fastcall GradientRect(int x1, int y1, int x2, int y2, unsigned StartColor, unsigned EndColor, System::Byte AAlpha, bool HorizontalFill);
	
public:
	void __fastcall Execute(Xlsdrawing5::TXLSDrwShapeProperies* AShapeProps);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TfrmFormatChartItem(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TfrmFormatChartItem(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TfrmFormatChartItem() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TfrmFormatChartItem(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Formformatchartitem */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FORMFORMATCHARTITEM)
using namespace Formformatchartitem;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// FormformatchartitemHPP
