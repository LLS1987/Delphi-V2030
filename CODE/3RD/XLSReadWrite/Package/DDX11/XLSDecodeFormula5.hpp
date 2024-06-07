// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSDecodeFormula5.pas' rev: 35.00 (Windows)

#ifndef Xlsdecodeformula5HPP
#define Xlsdecodeformula5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Contnrs.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsdecodeformula5
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TFormulaNameType : unsigned char { ntName, ntExternName, ntExternSheet, ntCurrBook, ntCellValue };

typedef System::UnicodeString __fastcall (__closure *TGetNameEvent)(TFormulaNameType NameType, int SheetIndex, int NameIndex, int Col, int Row);

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::UnicodeString __fastcall DecodeFormula(void * Buf, int Len, int SheetIndex, int ACol, int ARow, TGetNameEvent GetNameMethod, System::WideChar FuncArgSep);
}	/* namespace Xlsdecodeformula5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSDECODEFORMULA5)
using namespace Xlsdecodeformula5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsdecodeformula5HPP
