// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XSSIEKeys.pas' rev: 35.00 (Windows)

#ifndef XssiekeysHPP
#define XssiekeysHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xssiekeys
{
//-- forward type declarations -----------------------------------------------
struct TAXWKeyMapRec;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TAXWCommandClass : unsigned char { axccNone, axccControl, axccMove, axccFormat, axccClipboard, axccSelect, axccDeleteText, axccUnknown };

enum DECLSPEC_DENUM TAXWCommand : unsigned char { axcNoneStart, axcNone, axcCurrent, axcNoneEnd, axcControlStart, axcControlNewPara, axcControlLineBreak, axcControlEnd, axcMoveStart, axcMoveCharLeft, axcMoveCharRight, axcMoveWordLeft, axcMoveWordRight, axcMoveParaUp, axcMoveParaDown, axcMoveCellLeft, axcMoveCellRight, axcMoveLineUp, axcMoveLineDown, axcMoveEndOfLIne, axcMoveBeginningOfLine, axcMoveTopOfWindow, axcMoveEndOfWindow, axcMovePgUp, axcMovePgDown, axcMoveTopOfNextPg, axcMoveTopOfPrevPg, axcMoveEndOfDoc, axcMoveBeginningOfDoc, axcMoveLastLocation, axcMoveEnd, axcMoveBeginningOfPara, axcMoveEndOfPara, axcFormatStart, axcFormatCHP, axcFormatBold, axcFormatItalic, axcFormatUnderline, axcClearAllCharFmt, axcFormatDecFont, axcFormatIncFont, 
	axcFormatParaLeft, axcFormatParaCenter, axcFormatParaRight, axcFormatParaJustify, axcFormatEnd, axcClipboardStart, axcClipboardCopy, axcClipboardCut, axcClipboardPaste, axcClipboardPastePlain, axcClipboardEnd, axcSelectStart, axcSelectCharLeft, axcSelectCharRight, axcSelectWordLeft, axcSelectWordRight, axcSelectParaUp, axcSelectParaDown, axcSelectLineUp, axcSelectLineDown, axcSelectEndOfLine, axcSelectBeginningOfLine, axcSelectPgUp, axcSelectPgDown, axcSelectTopOfNextPg, axcSelectTopOfPrevPg, axcSelectEndOfDoc, axcSelectBeginningOfDoc, axcSelectBookmark, axcSelectWord, axcSelectLine, axcSelectPara, axcSelectAll, axcSelectEnd, axcDeleteStart, axcDelCharLeft, axcDelCharRight, axcDelWordLeft, axcDelWordRight, axcDelSelection, axcDeleteEnd };

struct DECLSPEC_DRECORD TAXWKeyMapRec
{
public:
	System::Word Key;
	System::Classes::TShiftState Shift;
	TAXWCommand Command;
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 AXW_VK_NOKEY = System::Int8(0x0);
extern DELPHI_PACKAGE System::StaticArray<TAXWKeyMapRec, 60> NavKeysMap;
extern DELPHI_PACKAGE TAXWCommand __fastcall KeyToCommand(System::Word Key, System::Classes::TShiftState Shift);
extern DELPHI_PACKAGE TAXWCommandClass __fastcall CommandClass(TAXWCommand Command);
}	/* namespace Xssiekeys */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XSSIEKEYS)
using namespace Xssiekeys;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XssiekeysHPP
