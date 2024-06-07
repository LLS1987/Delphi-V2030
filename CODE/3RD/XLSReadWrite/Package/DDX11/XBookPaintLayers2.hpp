// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookPaintLayers2.pas' rev: 35.00 (Windows)

#ifndef Xbookpaintlayers2HPP
#define Xbookpaintlayers2HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Contnrs.hpp>
#include <Winapi.Windows.hpp>
#include <XBook_System_2.hpp>
#include <XBookPaintGDI2.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookpaintlayers2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXPaintLayers;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXPaintLayerMode : unsigned char { plmNone, plmDestination, plmSingle, plmMulti, plmMetafile };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPaintLayers : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Xbookpaintgdi2::TAXWGDI* FDestLayer;
	Xbookpaintgdi2::TAXWGDI* FSheetLayer;
	Xbookpaintgdi2::TAXWGDI* FDrawingLayer;
	TXPaintLayerMode FLayerMode;
	Xbook_system_2::TXSSSystem* FSystem;
	void __fastcall SetLayerMode(const TXPaintLayerMode Value);
	Xbookpaintgdi2::TAXWGDIMetafile* __fastcall GetMetafileLayer();
	
public:
	__fastcall TXPaintLayers(Xbook_system_2::TXSSSystem* ASystem);
	__fastcall virtual ~TXPaintLayers();
	void __fastcall ReleaseHandle();
	__property TXPaintLayerMode LayerMode = {read=FLayerMode, write=SetLayerMode, nodefault};
	__property Xbookpaintgdi2::TAXWGDI* DestLayer = {read=FDestLayer};
	__property Xbookpaintgdi2::TAXWGDI* SheetLayer = {read=FSheetLayer};
	__property Xbookpaintgdi2::TAXWGDI* DrawingLayer = {read=FDrawingLayer};
	__property Xbookpaintgdi2::TAXWGDIMetafile* MetafileLayer = {read=GetMetafileLayer};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xbookpaintlayers2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKPAINTLAYERS2)
using namespace Xbookpaintlayers2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookpaintlayers2HPP
