// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_DecodeFormula5.pas' rev: 35.00 (Windows)

#ifndef Biff_decodeformula5HPP
#define Biff_decodeformula5HPP

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
#include <BIFF_Utils5.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_ExcelFuncII5.hpp>
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>
#include <XLSFormulaTypes5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_decodeformula5
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef System::UnicodeString __fastcall (__closure *TGetNameEvent)(Biff_utils5::TFormulaNameType NameType, int SheetIndex, int NameIndex, int Col, int Row);

enum DECLSPEC_DENUM TAbsoluteRef : unsigned char { arCol1, arRow1, arCol2, arRow2 };

typedef System::Set<TAbsoluteRef, TAbsoluteRef::arCol1, TAbsoluteRef::arRow2> TAbsoluteRefs;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::UnicodeString StrTRUE;
extern DELPHI_PACKAGE System::UnicodeString StrFALSE;
extern DELPHI_PACKAGE System::WideChar FuncArgSeparator;
extern DELPHI_PACKAGE System::UnicodeString __fastcall DecodeFmla(void * Buf, int Len, int SheetIndex, int ACol, int ARow, TGetNameEvent GetNameMethod, System::WideChar FuncArgSep);
extern DELPHI_PACKAGE void __fastcall AdjustCell(bool BIFF8, void * Buf, int Len, int DCol, int DRow, bool LockStartRow, bool ForceAdjust);
extern DELPHI_PACKAGE void __fastcall AdjustCell2(void * Buf, int Len, int Col, int Row, int SheetIndex, int DCol, int DRow);
extern DELPHI_PACKAGE void __fastcall AdjustSheet(System::Sysutils::PByteArray Buf, int Len, int NewExtIndex);
extern DELPHI_PACKAGE void __fastcall ConvertShrFmla(bool BIFF8, void * Buf, int Len, int ACol, int ARow);
}	/* namespace Biff_decodeformula5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_DECODEFORMULA5)
using namespace Biff_decodeformula5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_decodeformula5HPP
