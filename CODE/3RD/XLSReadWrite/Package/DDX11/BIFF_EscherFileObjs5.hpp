// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_EscherFileObjs5.pas' rev: 35.00 (Windows)

#ifndef Biff_escherfileobjs5HPP
#define Biff_escherfileobjs5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_EscherTypes5.hpp>
#include <BIFF_Stream5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_escherfileobjs5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMSOObjCLIENTANCHOR;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TMSOObjCLIENTANCHOR : public Biff_stream5::TXLSStreamObj
{
	typedef Biff_stream5::TXLSStreamObj inherited;
	
private:
	unsigned FOptions;
	unsigned FCol1;
	unsigned FCol1Offset;
	unsigned FRow1;
	unsigned FRow1Offset;
	unsigned FCol2;
	unsigned FCol2Offset;
	unsigned FRow2;
	unsigned FRow2Offset;
	
public:
	virtual void __fastcall Read(Biff_stream5::TXLSStream* Stream);
	virtual void __fastcall Write(Biff_stream5::TXLSStream* Stream);
	void __fastcall Assign(TMSOObjCLIENTANCHOR* Anchor);
	__property unsigned Options = {read=FOptions, write=FOptions, nodefault};
	__property unsigned Col1 = {read=FCol1, write=FCol1, nodefault};
	__property unsigned Col1Offset = {read=FCol1Offset, write=FCol1Offset, nodefault};
	__property unsigned Row1 = {read=FRow1, write=FRow1, nodefault};
	__property unsigned Row1Offset = {read=FRow1Offset, write=FRow1Offset, nodefault};
	__property unsigned Col2 = {read=FCol2, write=FCol2, nodefault};
	__property unsigned Col2Offset = {read=FCol2Offset, write=FCol2Offset, nodefault};
	__property unsigned Row2 = {read=FRow2, write=FRow2, nodefault};
	__property unsigned Row2Offset = {read=FRow2Offset, write=FRow2Offset, nodefault};
public:
	/* TObject.Create */ inline __fastcall TMSOObjCLIENTANCHOR() : Biff_stream5::TXLSStreamObj() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TMSOObjCLIENTANCHOR() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Biff_escherfileobjs5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_ESCHERFILEOBJS5)
using namespace Biff_escherfileobjs5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_escherfileobjs5HPP
