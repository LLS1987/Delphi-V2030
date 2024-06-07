// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XSSIEDefs.pas' rev: 35.00 (Windows)

#ifndef XssiedefsHPP
#define XssiedefsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xssiedefs
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
static const unsigned AXW_COLOR_DEFAULT = unsigned(0xf0000000);
static const int AXW_COLOR_SELECTION = int(0xd7e4bc);
static const System::Int8 AXW_COLOR_FONT = System::Int8(0x0);
static const System::Int8 AXW_LOGPHY_REQUEST_TOPROW = System::Int8(0x1);
static const System::Int8 AXW_LOGPHY_REQUEST_BOTTOMROW = System::Int8(0x2);
static const System::Int8 AXW_LOGPHY_REQUEST_PAGEDOWN = System::Int8(0x3);
static const System::Int8 AXW_LOGPHY_REQUEST_PAGEUP = System::Int8(0x4);
static const System::WideChar AXW_CHAR_EOL = (System::WideChar)(0x0);
static const System::WideChar AXW_CHAR_BREAKCHAR = (System::WideChar)(0x20);
static const System::WideChar AXW_CHAR_SPECIAL_ENDOFPARA = (System::WideChar)(0xd);
static const System::WideChar AXW_CHAR_SPECIAL_HARDLINEBREAK = (System::WideChar)(0xb);
static const System::WideChar AXW_CHAR_SPECIAL_NONREQHYPEN = (System::WideChar)(0x2d);
static const System::WideChar AXW_CHAR_SPECIAL_NONBREAKHYPEN = (System::WideChar)(0x1e);
static const char AXW_CHAR_SPECIAL_NONBREAPSPACE = '\xa0';
static const System::WideChar AXW_CHAR_SPECIAL_PAGEBREAK = (System::WideChar)(0xc);
static const System::WideChar AXW_CHAR_SPECIAL_COLUMNBREAK = (System::WideChar)(0xe);
static const System::WideChar AXW_CHAR_SPECIAL_TAB = (System::WideChar)(0x9);
static const System::WideChar AXW_CHAR_SPECIAL_FIELDBEGIN = (System::WideChar)(0x13);
static const System::WideChar AXW_CHAR_SPECIAL_FIELDEND = (System::WideChar)(0x15);
static const System::WideChar AXW_CHAR_SPECIAL_FIELDSEP = (System::WideChar)(0x14);
static const System::WideChar AXW_CHAR_SPECIAL_FIELDESCAPE = (System::WideChar)(0x5c);
static const System::WideChar AXW_CHAR_SPECIAL_CELLMARK = (System::WideChar)(0x7);
static const char AXW_CHAR_REPLACE_ENDOFPARA = '\xb6';
static const char AXW_CHAR_REPLACE_SPACE = '\xb7';
extern DELPHI_PACKAGE System::StaticArray<char, 128> NonPrintableCharMap;
}	/* namespace Xssiedefs */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XSSIEDEFS)
using namespace Xssiedefs;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XssiedefsHPP
