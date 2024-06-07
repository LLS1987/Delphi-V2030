// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_DrawingObjAnchor5.pas' rev: 35.00 (Windows)

#ifndef Biff_drawingobjanchor5HPP
#define Biff_drawingobjanchor5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <BIFF_Escher5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_drawingobjanchor5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDrwAnchor;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDrwAnchor : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	unsigned __fastcall GetSpId();
	int __fastcall GetCol1();
	double __fastcall GetCol1Offset();
	int __fastcall GetCol2();
	double __fastcall GetCol2Offset();
	int __fastcall GetRow1();
	double __fastcall GetRow1Offset();
	int __fastcall GetRow2();
	double __fastcall GetRow2Offset();
	void __fastcall SetCol1(const int Value);
	void __fastcall SetCol1Offset(double Value);
	void __fastcall SetCol2(const int Value);
	void __fastcall SetCol2Offset(double Value);
	void __fastcall SetRow1(const int Value);
	void __fastcall SetRow1Offset(double Value);
	void __fastcall SetRow2(const int Value);
	void __fastcall SetRow2Offset(double Value);
	bool __fastcall GetFlipHorizontal();
	bool __fastcall GetFlipVertical();
	void __fastcall SetFlipHorizontal(const bool Value);
	void __fastcall SetFlipVertical(const bool Value);
	
protected:
	System::UnicodeString FName;
	bool FFileAdd;
	Biff_escher5::TShapeClientAnchor* FShape;
	virtual System::UnicodeString __fastcall GetDisplayName();
	virtual void __fastcall SetShape(Biff_escher5::TShapeClientAnchor* const Value);
	
public:
	__property Biff_escher5::TShapeClientAnchor* Shape = {read=FShape};
	
__published:
	__property int Col1 = {read=GetCol1, write=SetCol1, nodefault};
	__property double Col1Offset = {read=GetCol1Offset, write=SetCol1Offset};
	__property int Col2 = {read=GetCol2, write=SetCol2, nodefault};
	__property double Col2Offset = {read=GetCol2Offset, write=SetCol2Offset};
	__property int Row1 = {read=GetRow1, write=SetRow1, nodefault};
	__property double Row1Offset = {read=GetRow1Offset, write=SetRow1Offset};
	__property int Row2 = {read=GetRow2, write=SetRow2, nodefault};
	__property double Row2Offset = {read=GetRow2Offset, write=SetRow2Offset};
	__property bool FlipHorizontal = {read=GetFlipHorizontal, write=SetFlipHorizontal, nodefault};
	__property bool FlipVertical = {read=GetFlipVertical, write=SetFlipVertical, nodefault};
	__property unsigned SpId = {read=GetSpId, nodefault};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TDrwAnchor(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TDrwAnchor() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Biff_drawingobjanchor5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_DRAWINGOBJANCHOR5)
using namespace Biff_drawingobjanchor5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_drawingobjanchor5HPP
