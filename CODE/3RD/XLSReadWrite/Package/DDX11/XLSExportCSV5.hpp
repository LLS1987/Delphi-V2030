// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSExportCSV5.pas' rev: 35.00 (Windows)

#ifndef Xlsexportcsv5HPP
#define Xlsexportcsv5HPP

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
#include <XLSSheetData5.hpp>
#include <XLSReadWriteII5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsexportcsv5
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TExportCSVOption : unsigned char { ecoQuotedStrings, ecoFormatValues, ecoSelection, ecoFormulas, ecoWriteUTF8 };

typedef System::Set<TExportCSVOption, TExportCSVOption::ecoQuotedStrings, TExportCSVOption::ecoWriteUTF8> TExportCSVOptions;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall ExportCSV(Xlsreadwriteii5::TXLSReadWriteII5* XLS, int SheetIndex, System::WideChar SeparatorChar, System::WideChar QuoteChar, TExportCSVOptions Options, System::UnicodeString Filename);
}	/* namespace Xlsexportcsv5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSEXPORTCSV5)
using namespace Xlsexportcsv5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsexportcsv5HPP
