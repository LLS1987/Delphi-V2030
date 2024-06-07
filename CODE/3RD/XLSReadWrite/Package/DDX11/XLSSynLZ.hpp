// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSSynLZ.pas' rev: 35.00 (Windows)

#ifndef XlssynlzHPP
#define XlssynlzHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlssynlz
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int __fastcall (*SynLZCompress1)(char * src, int size, char * dst);
extern DELPHI_PACKAGE int __fastcall (*SynLZDecompress1)(char * src, int size, char * dst);
extern DELPHI_PACKAGE int __fastcall SynLZcompressdestlen(int in_len);
extern DELPHI_PACKAGE int __fastcall SynLZdecompressdestlen(char * in_p);
extern DELPHI_PACKAGE int __fastcall SynLZcompress1asm(char * src, int size, char * dst);
extern DELPHI_PACKAGE int __fastcall SynLZcompress1pas(char * src, int size, char * dst);
extern DELPHI_PACKAGE int __fastcall SynLZdecompress1asm(char * src, int size, char * dst);
extern DELPHI_PACKAGE int __fastcall SynLZdecompress1pas(char * src, int size, char * dst);
extern DELPHI_PACKAGE int __fastcall SynLZdecompress1partial(char * src, int size, char * dst, int maxDst);
extern DELPHI_PACKAGE int __fastcall SynLZcompress2(char * src, int size, char * dst);
extern DELPHI_PACKAGE int __fastcall SynLZdecompress2(char * src, int size, char * dst);
}	/* namespace Xlssynlz */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSSYNLZ)
using namespace Xlssynlz;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XlssynlzHPP
