// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookUtils2.pas' rev: 35.00 (Windows)

#ifndef Xbookutils2HPP
#define Xbookutils2HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.IniFiles.hpp>
#include <XLSUtils5.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XBookTypes2.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookutils2
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<System::UnicodeString, 69> Xbookutils2__1;

typedef System::StaticArray<unsigned, 1> TLongwordArray;

typedef TLongwordArray *PLongwordArray;

enum DECLSPEC_DENUM TPaintLineType : unsigned char { pltHSize, pltVSize, pltHSplit, pltVSplit };

enum DECLSPEC_DENUM TXBookNotification : unsigned char { xbnNone, xbnCellLocked };

typedef void __fastcall (__closure *TXLSProcEvent)(void);

typedef void __fastcall (__closure *TXPaintLineEvent)(System::TObject* Sender, TPaintLineType LineType, int &X, int &Y, bool Execute);

typedef void __fastcall (__closure *TX2IntegerEvent)(System::TObject* Sender, int Val1, int Val2);

typedef void __fastcall (__closure *TXStringEvent)(System::TObject* Sender, System::UnicodeString Value);

typedef void __fastcall (__closure *TXIntegerEvent)(System::TObject* Sender, int Value);

typedef void __fastcall (__closure *TX4IntegerEvent)(System::TObject* Sender, const int Val1, const int Val2, const int Val3, const int Val4);

typedef void __fastcall (__closure *TXBooleanEvent)(System::TObject* Sender, bool &Value);

typedef void __fastcall (__closure *TXNotifyEvent)(System::TObject* Sender, TXBookNotification Notification);

typedef void __fastcall (__closure *TXColRowEvent)(System::TObject* Sender, int Col, int Row);

//-- var, const, procedure ---------------------------------------------------
static const unsigned EX12_AUTO_COLOR = unsigned(0xff000000);
extern DELPHI_PACKAGE System::StaticArray<int, 14> CellBorderWidthts;
extern DELPHI_PACKAGE System::StaticArray<int, 16> XSSDefaultFontSizes;
extern DELPHI_PACKAGE Xbookutils2__1 PaperSizeNames;
extern DELPHI_PACKAGE bool __fastcall InDelta(int Val, int Pos, int Delta);
extern DELPHI_PACKAGE void __fastcall OffsetXYRect(Xbooktypes2::TXYRect &Rect, int DX, int DY);
extern DELPHI_PACKAGE bool __fastcall PtInXYRect(int X, int Y, const Xbooktypes2::TXYRect &Rect);
extern DELPHI_PACKAGE bool __fastcall IntersectXYRect(const Xbooktypes2::TXYRect &R1, const Xbooktypes2::TXYRect &R2, /* out */ Xbooktypes2::TXYRect &Dest);
extern DELPHI_PACKAGE bool __fastcall CellInArea(int Col, int Row, const Xc12utils5::TXLSCellArea &Area);
extern DELPHI_PACKAGE Xbooktypes2::TXYRect __fastcall SizeXYRect(const Xbooktypes2::TXYRect &Rect, int Delta);
extern DELPHI_PACKAGE unsigned __fastcall _Temp_XCColorToRGB(unsigned XColor, unsigned AutoColor);
}	/* namespace Xbookutils2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKUTILS2)
using namespace Xbookutils2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookutils2HPP
