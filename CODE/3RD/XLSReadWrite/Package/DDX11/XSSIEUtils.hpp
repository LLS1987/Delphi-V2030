// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XSSIEUtils.pas' rev: 35.00 (Windows)

#ifndef XssieutilsHPP
#define XssieutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Contnrs.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Types.hpp>
#include <XLSUtils5.hpp>
#include <XSSIEDefs.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xssieutils
{
//-- forward type declarations -----------------------------------------------
struct TBreakCharData;
class DELPHICLASS TAXWClientArea;
class DELPHICLASS TAXWEditorArea;
class DELPHICLASS TAXWIndexObject;
class DELPHICLASS TAXWIndexObjectList;
class DELPHICLASS TListStack;
//-- type declarations -------------------------------------------------------
typedef System::RawByteString XLS8String;

typedef char XLS8Char;

typedef char * XLS8PChar;

typedef System::WideChar AxUCChar;

typedef System::UnicodeString AxUCString;

typedef System::WideChar * AxPUCChar;

typedef System::StaticArray<unsigned, 1> TLongwordArray;

typedef TLongwordArray *PLongwordArray;

enum DECLSPEC_DENUM TAXWVertAlign : unsigned char { avaBottom, avaCenter, avaTop, avaDistributed };

enum DECLSPEC_DENUM TAXWFindTextOption : unsigned char { axtoMatchCase, axtoWholeWords, axtoWildcards, axtoSoundex };

enum DECLSPEC_DENUM TAXWCharType : unsigned char { actWhitespace, actNotWhitespace, actPrintable };

struct DECLSPEC_DRECORD TBreakCharData
{
public:
	double Width;
	System::WideChar Char;
	double Percent;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWClientArea : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	virtual void __fastcall SetCX1(const int Value);
	virtual void __fastcall SetCX2(const int Value);
	virtual void __fastcall SetCY1(const int Value);
	virtual void __fastcall SetCY2(const int Value);
	virtual void __fastcall SetX1(const int Value);
	virtual void __fastcall SetX2(const int Value);
	virtual void __fastcall SetY1(const int Value);
	virtual void __fastcall SetY2(const int Value);
	int __fastcall GetPadX1();
	int __fastcall GetPadX2();
	int __fastcall GetPadY1();
	int __fastcall GetPadY2();
	
protected:
	int FX2;
	int FY2;
	int FX1;
	int FY1;
	int FCX2;
	int FCY2;
	int FCX1;
	int FCY1;
	int FPaddingLeft;
	int FPaddingTop;
	int FPaddingRight;
	int FPaddingBottom;
	int FGraphicWidth;
	
public:
	int __fastcall Width();
	int __fastcall Height();
	int __fastcall ClientWidth();
	int __fastcall ClientHeight();
	virtual int __fastcall PaginateWidth();
	virtual int __fastcall PaginateHeight();
	virtual int __fastcall PaperHeight();
	__property int X1 = {read=FX1, write=SetX1, nodefault};
	__property int Y1 = {read=FY1, write=SetY1, nodefault};
	__property int X2 = {read=FX2, write=SetX2, nodefault};
	__property int Y2 = {read=FY2, write=SetY2, nodefault};
	__property int CX1 = {read=FCX1, write=SetCX1, nodefault};
	__property int CY1 = {read=FCY1, write=SetCY1, nodefault};
	__property int CX2 = {read=FCX2, write=SetCX2, nodefault};
	__property int CY2 = {read=FCY2, write=SetCY2, nodefault};
	__property int PaddingLeft = {read=FPaddingLeft, write=FPaddingLeft, nodefault};
	__property int PaddingTop = {read=FPaddingTop, write=FPaddingTop, nodefault};
	__property int PaddingRight = {read=FPaddingRight, write=FPaddingRight, nodefault};
	__property int PaddingBottom = {read=FPaddingBottom, write=FPaddingBottom, nodefault};
	__property int GraphicWidth = {read=FGraphicWidth, write=FGraphicWidth, nodefault};
	__property int PadX1 = {read=GetPadX1, nodefault};
	__property int PadY1 = {read=GetPadY1, nodefault};
	__property int PadX2 = {read=GetPadX2, nodefault};
	__property int PadY2 = {read=GetPadY2, nodefault};
public:
	/* TObject.Create */ inline __fastcall TAXWClientArea() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWClientArea() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWEditorArea : public TAXWClientArea
{
	typedef TAXWClientArea inherited;
	
private:
	void __fastcall SetMargBottom(const int Value);
	void __fastcall SetMargLeft(const int Value);
	void __fastcall SetMargRight(const int Value);
	void __fastcall SetMargTop(const int Value);
	virtual void __fastcall SetX1(const int Value);
	virtual void __fastcall SetX2(const int Value);
	virtual void __fastcall SetY1(const int Value);
	virtual void __fastcall SetY2(const int Value);
	virtual void __fastcall SetCX1(const int Value);
	virtual void __fastcall SetCX2(const int Value);
	virtual void __fastcall SetCY1(const int Value);
	virtual void __fastcall SetCY2(const int Value);
	
protected:
	int FMargLeft;
	int FMargTop;
	int FMargRight;
	int FMargBottom;
	int FCellWidth;
	int FCellHeight;
	int FMinX;
	int FMinY;
	int FMaxX;
	int FMaxY;
	
public:
	void __fastcall ClipToMax();
	virtual int __fastcall PaginateWidth();
	virtual int __fastcall PaginateHeight();
	virtual int __fastcall PaperHeight();
	__property int MargLeft = {read=FMargLeft, write=SetMargLeft, nodefault};
	__property int MargTop = {read=FMargTop, write=SetMargTop, nodefault};
	__property int MargRight = {read=FMargRight, write=SetMargRight, nodefault};
	__property int MargBottom = {read=FMargBottom, write=SetMargBottom, nodefault};
	__property int CellWidth = {read=FCellWidth, write=FCellWidth, nodefault};
	__property int CellHeight = {read=FCellHeight, write=FCellHeight, nodefault};
	__property int MinX = {read=FMinX, write=FMinX, nodefault};
	__property int MinY = {read=FMinY, write=FMinY, nodefault};
	__property int MaxX = {read=FMaxX, write=FMaxX, nodefault};
	__property int MaxY = {read=FMaxY, write=FMaxY, nodefault};
public:
	/* TObject.Create */ inline __fastcall TAXWEditorArea() : TAXWClientArea() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWEditorArea() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWIndexObject : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TAXWIndexObjectList* FOwner;
	int FIndex;
	bool FDirty;
	virtual void __fastcall SetDirty(const bool Value);
	
public:
	__fastcall TAXWIndexObject(TAXWIndexObjectList* AOwner);
	virtual int __fastcall Len() = 0 ;
	__property int Index = {read=FIndex, nodefault};
	__property bool Dirty = {read=FDirty, write=SetDirty, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWIndexObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWIndexObjectList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TAXWIndexObject* operator[](int Index) { return this->Items[Index]; }
	
private:
	TAXWIndexObject* FOwner;
	bool FDirty;
	
protected:
	virtual void __fastcall Notify(void * Ptr, System::Classes::TListNotification Action);
	void __fastcall Reindex();
	TAXWIndexObject* __fastcall GetItems(int Index);
	virtual void __fastcall SetDirty(const bool Value);
	
public:
	__fastcall TAXWIndexObjectList(TAXWIndexObject* AOwner);
	HIDESBASE int __fastcall Add(TAXWIndexObject* AObject);
	__property bool Dirty = {read=FDirty, write=SetDirty, nodefault};
	__property TAXWIndexObject* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWIndexObjectList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TListStack : public System::Contnrs::TStack
{
	typedef System::Contnrs::TStack inherited;
	
public:
	void * operator[](int Index) { return this->Items[Index]; }
	
private:
	void * __fastcall GetItems(int Index);
	
public:
	__property void * Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TOrderedList.Create */ inline __fastcall TListStack() : System::Contnrs::TStack() { }
	/* TOrderedList.Destroy */ inline __fastcall virtual ~TListStack() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
#define TAXWWhitespaceChars (System::Set<char, _DELPHI_SET_CHAR(0), _DELPHI_SET_CHAR(255)>() << '\x9' << '\xa' << '\x20' )
#define TAXWBreakingChars (System::Set<char, _DELPHI_SET_CHAR(0), _DELPHI_SET_CHAR(255)>() << '\x2d' )
#define TAXWSpaceChars (System::Set<char, _DELPHI_SET_CHAR(0), _DELPHI_SET_CHAR(255)>() << '\x20' )
extern DELPHI_PACKAGE int __fastcall Fork(int MinVal, int MaxVal, int Value);
extern DELPHI_PACKAGE bool __fastcall Within(int MinVal, int MaxVal, int Value);
extern DELPHI_PACKAGE int __fastcall CPos(int Pos, System::WideChar C, System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE bool __fastcall LeftText(const System::UnicodeString ASubstring, const System::UnicodeString AString);
extern DELPHI_PACKAGE System::UnicodeString __fastcall SplitAtChar(const System::WideChar C, System::UnicodeString &S);
extern DELPHI_PACKAGE int __fastcall CountChars(System::WideChar C, System::UnicodeString S);
extern DELPHI_PACKAGE bool __fastcall CharIsPrintable(System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsWhitespace(System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsWhitespaceOrHardLB(System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsSpace(System::WideChar C);
extern DELPHI_PACKAGE bool __fastcall CharIsBreakingChar(System::WideChar C);
extern DELPHI_PACKAGE int __fastcall WhitespacePos(System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ValidateText(System::UnicodeString S);
extern DELPHI_PACKAGE int __fastcall ParaBreakPos(int Pos, System::UnicodeString S, int &Sz);
extern DELPHI_PACKAGE bool __fastcall CharIsAlphaNum(System::WideChar C);
extern DELPHI_PACKAGE int __fastcall HexStrToInt(System::UnicodeString S);
extern DELPHI_PACKAGE unsigned __fastcall RevRGB(unsigned RGB);
extern DELPHI_PACKAGE void __fastcall SplitRGB(const unsigned RGB, /* out */ System::Byte &AR, /* out */ System::Byte &AG, /* out */ System::Byte &AB);
extern DELPHI_PACKAGE System::UnicodeString __fastcall IntToRoman(int AValue);
}	/* namespace Xssieutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XSSIEUTILS)
using namespace Xssieutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XssieutilsHPP
