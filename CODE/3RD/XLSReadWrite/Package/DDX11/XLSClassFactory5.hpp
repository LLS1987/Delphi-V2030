// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSClassFactory5.pas' rev: 35.00 (Windows)

#ifndef Xlsclassfactory5HPP
#define Xlsclassfactory5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsclassfactory5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSClassFactory;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXLSClassFactoryType : unsigned char { xcftNames, xcftNamesMember, xcftMergedCells, xcftMergedCellsMember, xcftHyperlinks, xcftHyperlinksMember, xcftDataValidations, xcftDataValidationsMember, xcftConditionalFormat, xcftConditionalFormats, xcftAutofilter, xcftAutofilterColumn, xcftDrawing, xcftVirtualCells };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSClassFactory : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual System::TObject* __fastcall CreateAClass(TXLSClassFactoryType AClassType, System::TObject* AOwner = (System::TObject*)(0x0)) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TXLSClassFactory() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSClassFactory() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsclassfactory5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSCLASSFACTORY5)
using namespace Xlsclassfactory5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsclassfactory5HPP
