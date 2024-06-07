// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookHeaders2.pas' rev: 35.00 (Windows)

#ifndef Xbookheaders2HPP
#define Xbookheaders2HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Controls.hpp>
#include <XBookSkin2.hpp>
#include <XBookPaintGDI2.hpp>
#include <XBookPaint2.hpp>
#include <XBookUtils2.hpp>
#include <XBookSysVar2.hpp>
#include <XBookWindows2.hpp>
#include <XBookButtons2.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookheaders2
{
//-- forward type declarations -----------------------------------------------
struct THeaderData;
class DELPHICLASS TXHeadersGutter;
class DELPHICLASS TXLSBookHeaders;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM THeaderOption : unsigned char { hoHidden, hoCollapsed };

typedef System::Set<THeaderOption, THeaderOption::hoHidden, THeaderOption::hoCollapsed> THeaderOptions;

struct DECLSPEC_DRECORD THeaderData
{
public:
	int Header;
	System::Word Size;
	System::Word SizingSize;
	double SizeFloat;
	int Pos;
	Xbookskin2::THeaderSelState SelState;
	bool Hoover;
	int OutlineLevel;
	THeaderOptions Options;
};


enum DECLSPEC_DENUM THeaderScroll : unsigned char { hsInc, hsDec, hsIncPage, hsDecPage, hsFirst, hsLast };

enum DECLSPEC_DENUM TSizeHitType : unsigned char { shtNone, shtSize, shtHidden };

enum DECLSPEC_DENUM TOutlineLineType : unsigned char { olpFirst, olpMiddle, olpLast, olpDot };

typedef void __fastcall (__closure *THeaderClickEvent)(System::TObject* Sender, int Header, TSizeHitType SizeHit, Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXHeadersGutter : public Xbookwindows2::TXSSClientWindow
{
	typedef Xbookwindows2::TXSSClientWindow inherited;
	
protected:
	int FLevels;
	int FFirstLevel;
	int FFirstVisibleLevel;
	Xbookbuttons2::TButtonRectList* FButtons;
	int FCurrButton;
	virtual void __fastcall PaintOutline(int P1, int P2, int Level, TOutlineLineType LineType) = 0 ;
	virtual void __fastcall CentrePos(int P1, int P2, int Delta, int &cx, int &cy) = 0 ;
	
public:
	__fastcall TXHeadersGutter(Xbookwindows2::TXSSWindow* AParent);
	__fastcall virtual ~TXHeadersGutter();
	HIDESBASE void __fastcall Paint(THeaderData *Headers, const int Headers_High);
	void __fastcall CalcButtons(THeaderData *Headers, const int Headers_High, int FirstHdr);
	virtual void __fastcall MouseDown(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseLeave();
	__property int Levels = {read=FLevels, write=FLevels, nodefault};
	__property int FirstLevel = {read=FFirstLevel, write=FFirstLevel, nodefault};
	__property int FirstVisibleLevel = {read=FFirstVisibleLevel, write=FFirstVisibleLevel, nodefault};
	__property Xbookbuttons2::TButtonRectList* Buttons = {read=FButtons};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSBookHeaders : public Xbookwindows2::TXSSClientWindow
{
	typedef Xbookwindows2::TXSSClientWindow inherited;
	
	
private:
	typedef System::DynamicArray<THeaderData> _TXLSBookHeaders__1;
	
	
private:
	THeaderOptions __fastcall GetOptions(int Index);
	int __fastcall GetVisibleSize(int Index);
	int __fastcall GetOutlineLevel();
	int __fastcall GetPos(int Index);
	Xbookskin2::THeaderSelState __fastcall GetSelected(int Index);
	void __fastcall SetSelected(int Index, const Xbookskin2::THeaderSelState Value);
	int __fastcall GetHalfPos(int Index);
	int __fastcall GetAbsPos(int Index);
	int __fastcall GetAbsVisibleSize(int Index);
	double __fastcall GetVisibleSizeFloat(int Index);
	int __fastcall GetAbsVisibleSizeEmu(int Index);
	
protected:
	int FMaxHdr;
	int FFirstHdr;
	int FLastHdr;
	int FFrozenHdr;
	int FFrozenFirstHdr;
	int FSizingHdr;
	int FCurrHeader;
	int FHooverHeader;
	bool FMouseIsDown;
	_TXLSBookHeaders__1 FHeaders;
	System::Classes::TNotifyEvent FChangedEvent;
	int FClickP;
	int FHeaderP;
	Xbookutils2::TXPaintLineEvent FPaintLineEvent;
	TXHeadersGutter* FGutter;
	Xbookutils2::TX2IntegerEvent FSyncButtonClickEvent;
	THeaderClickEvent FHeaderClickEvent;
	Xbookutils2::TX2IntegerEvent FSelHeaderChangedEvent;
	int FOffset;
	void __fastcall AddSizingHeaders();
	int __fastcall HeaderHit(int P, /* out */ int &HeaderPos);
	TSizeHitType __fastcall HdrSizeHit(int P, int &Header, int &HeaderP);
	virtual int __fastcall FirstPos() = 0 ;
	virtual int __fastcall LastPos() = 0 ;
	virtual void __fastcall GetHeaderData(int Hdr, int &Size, int &Outline, THeaderOptions &Options) = 0 ;
	virtual void __fastcall GetHeaderDataFloat(int Hdr, double &Size, int &Outline, THeaderOptions &Options) = 0 ;
	virtual int __fastcall XorY(int X, int Y) = 0 ;
	virtual Xbookpaintgdi2::TXLSCursorType __fastcall GetCursor(TSizeHitType HitType) = 0 ;
	int __fastcall DeltaPos();
	int __fastcall FirstScrollHeader();
	virtual void __fastcall PaintSizing() = 0 ;
	virtual void __fastcall PaintHeader(int Hdr) = 0 ;
	void __fastcall CalcGutter();
	void __fastcall HooverOff();
	
public:
	__fastcall TXLSBookHeaders(Xbookwindows2::TXSSClientWindow* Parent, int MaxHdr);
	void __fastcall ClearSelected();
	void __fastcall SetSelectedState(int P1, int P2, bool IsSelected);
	void __fastcall SetFocusedState(int P1, int P2);
	int __fastcall Count();
	virtual void __fastcall MouseDown(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseEnter(int X, int Y);
	virtual void __fastcall MouseLeave();
	virtual void __fastcall SetSize(const int pX1, const int pY1, const int pX2, const int pY2);
	virtual void __fastcall CalcHeaders(int MaxHdrToCalc = 0x7fffffff);
	virtual void __fastcall CalcHeadersFromLast();
	int __fastcall Snap(int P, int EndP, int &Hdr);
	int __fastcall NextVisible(int Hdr);
	int __fastcall PrevVisible(int Hdr);
	int __fastcall PosToHeader(int P);
	int __fastcall GetHeight(int Hdr1, int Hdr2);
	int __fastcall HdrFromSizeRev(int Hdr, int Size);
	bool __fastcall IsFrozen();
	void __fastcall Scroll(THeaderScroll ScrollDirection);
	int __fastcall VisualSize();
	int __fastcall ScrollSize(bool ScrollInc);
	__property THeaderOptions Option[int Index] = {read=GetOptions};
	__property Xbookskin2::THeaderSelState Selected[int Index] = {read=GetSelected, write=SetSelected};
	__property int VisibleSize[int Index] = {read=GetVisibleSize};
	__property double VisibleSizeFloat[int Index] = {read=GetVisibleSizeFloat};
	__property int AbsVisibleSize[int Index] = {read=GetAbsVisibleSize};
	__property int AbsVisibleSizeEmu[int Index] = {read=GetAbsVisibleSizeEmu};
	__property int Pos[int Index] = {read=GetPos};
	__property int AbsPos[int Index] = {read=GetAbsPos};
	__property int HalfPos[int Index] = {read=GetHalfPos};
	__property int OutlineLevel = {read=GetOutlineLevel, nodefault};
	__property int FirstHeader = {read=FFirstHdr, nodefault};
	__property int Offset = {read=FOffset, write=FOffset, nodefault};
	__property System::Classes::TNotifyEvent OnChanged = {read=FChangedEvent, write=FChangedEvent};
	__property Xbookutils2::TXPaintLineEvent OnPaintLine = {read=FPaintLineEvent, write=FPaintLineEvent};
	__property Xbookutils2::TX2IntegerEvent OnSyncButtonClick = {read=FSyncButtonClickEvent, write=FSyncButtonClickEvent};
	__property THeaderClickEvent OnHeaderClick = {read=FHeaderClickEvent, write=FHeaderClickEvent};
	__property Xbookutils2::TX2IntegerEvent OnSelHeaderChanged = {read=FSelHeaderChangedEvent, write=FSelHeaderChangedEvent};
public:
	/* TXSSWindow.Destroy */ inline __fastcall virtual ~TXLSBookHeaders() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xbookheaders2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKHEADERS2)
using namespace Xbookheaders2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookheaders2HPP
