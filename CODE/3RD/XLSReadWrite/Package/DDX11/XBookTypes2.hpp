// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookTypes2.pas' rev: 35.00 (Windows)

#ifndef Xbooktypes2HPP
#define Xbooktypes2HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbooktypes2
{
//-- forward type declarations -----------------------------------------------
struct TXYRect;
struct TXYDWRect;
struct TXYPoint;
struct TXYFRect;
struct TXYFPoint;
struct TWordPoint;
//-- type declarations -------------------------------------------------------
typedef TXYRect *PXYRect;

struct DECLSPEC_DRECORD TXYRect
{
public:
	int X1;
	int Y1;
	int X2;
	int Y2;
};


typedef TXYDWRect *PXYDWRect;

struct DECLSPEC_DRECORD TXYDWRect
{
public:
	unsigned X1;
	unsigned Y1;
	unsigned X2;
	unsigned Y2;
};


struct DECLSPEC_DRECORD TXYPoint
{
public:
	int X;
	int Y;
};


struct DECLSPEC_DRECORD TXYFRect
{
public:
	double X1;
	double Y1;
	double X2;
	double Y2;
};


struct DECLSPEC_DRECORD TXYFPoint
{
public:
	double X;
	double Y;
};


typedef System::StaticArray<System::Types::TPoint, 134217728> TPointArray;

typedef TPointArray *PPointArray;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TWordPoint
{
public:
	System::Word X;
	System::Word Y;
};
#pragma pack(pop)


typedef System::StaticArray<TWordPoint, 134217728> TWordPointArray;

typedef TWordPointArray *PWordPointArray;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TXYRect __fastcall SetXYRect(const int AX1, const int AY1, const int AX2, const int AY2)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetXYRect(TXYRect &Rect, int X1, int Y1, int X2, int Y2)/* overload */;
extern DELPHI_PACKAGE bool __fastcall HitXYRect(const int AX, const int AY, const TXYRect &ARect);
}	/* namespace Xbooktypes2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKTYPES2)
using namespace Xbooktypes2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbooktypes2HPP
