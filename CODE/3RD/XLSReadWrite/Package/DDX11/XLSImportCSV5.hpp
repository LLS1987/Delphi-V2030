// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSImportCSV5.pas' rev: 35.00 (Windows)

#ifndef Xlsimportcsv5HPP
#define Xlsimportcsv5HPP

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
#include <XLSReadWriteII5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsimportcsv5
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall ImportCSV(Xlsreadwriteii5::TXLSReadWriteII5* XLS, int SheetIndex, int Col, int Row, System::Classes::TStrings* List, System::WideChar SepChar, bool HasQuoteChar)/* overload */;
extern DELPHI_PACKAGE bool __fastcall ImportCSV(Xlsreadwriteii5::TXLSReadWriteII5* XLS, int SheetIndex, int Col, int Row, System::UnicodeString Filename, System::WideChar SepChar, bool HasQuoteChar)/* overload */;
extern DELPHI_PACKAGE bool __fastcall ImportCSVAuto(Xlsreadwriteii5::TXLSReadWriteII5* XLS, int SheetIndex, int Col, int Row, System::UnicodeString Filename);
}	/* namespace Xlsimportcsv5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSIMPORTCSV5)
using namespace Xlsimportcsv5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsimportcsv5HPP
