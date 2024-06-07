// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XSSIEPhyRow.pas' rev: 35.00 (Windows)

#ifndef XssiephyrowHPP
#define XssiephyrowHPP

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
#include <System.Math.hpp>
#include <XSSIEUtils.hpp>
#include <XSSIEDocProps.hpp>
#include <XSSIECharRun.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xssiephyrow
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAXWPhyRow;
class DELPHICLASS TAXWPhyRowComplex;
class DELPHICLASS TAXWPhyRows;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TAXWPhyRowFlag : unsigned char { aprfDirty, aprfComplex, aprfFirst, aprfLast, aprfDebug };

typedef System::Set<TAXWPhyRowFlag, TAXWPhyRowFlag::aprfDirty, TAXWPhyRowFlag::aprfDebug> TAXWPhyRowFlags;

class PASCALIMPLEMENTATION TAXWPhyRow : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	double FHeight;
	double FWidth;
	double FXOffset;
	double FY;
	double FAscent;
	double FDescent;
	Xssiecharrun::TAXWCharRun* FCR1;
	Xssiecharrun::TAXWCharRun* FCR2;
	int FCRPos1;
	int FCRPos2;
	int FLogPos1;
	TAXWPhyRowFlags FFlags;
	int FBreakCharCount;
	
public:
	__fastcall TAXWPhyRow();
	void __fastcall Assign(TAXWPhyRow* Row);
	bool __fastcall Empty();
	double __fastcall RowHeight();
	int __fastcall Len();
	bool __fastcall SameCR();
	int __fastcall FirstPos();
	int __fastcall LastPos();
	__property double Height = {read=FHeight, write=FHeight};
	__property double Ascent = {read=FAscent, write=FAscent};
	__property double Descent = {read=FDescent, write=FDescent};
	__property double Width = {read=FWidth, write=FWidth};
	__property double XOffset = {read=FXOffset, write=FXOffset};
	__property double Y = {read=FY, write=FY};
	__property int BreakCharCount = {read=FBreakCharCount, write=FBreakCharCount, nodefault};
	__property Xssiecharrun::TAXWCharRun* CR1 = {read=FCR1, write=FCR1};
	__property Xssiecharrun::TAXWCharRun* CR2 = {read=FCR2, write=FCR2};
	__property int CRPos1 = {read=FCRPos1, write=FCRPos1, nodefault};
	__property int CRPos2 = {read=FCRPos2, write=FCRPos2, nodefault};
	__property int LogPos1 = {read=FLogPos1, write=FLogPos1, nodefault};
	__property TAXWPhyRowFlags Flags = {read=FFlags, write=FFlags, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWPhyRow() { }
	
};


class PASCALIMPLEMENTATION TAXWPhyRowComplex : public TAXWPhyRow
{
	typedef TAXWPhyRow inherited;
	
	
private:
	typedef System::DynamicArray<Xssieutils::TBreakCharData> _TAXWPhyRowComplex__1;
	
	
private:
	Xssieutils::TBreakCharData __fastcall GetBreakWidth(int Index);
	int __fastcall GetBreakWidthsCount();
	
protected:
	_TAXWPhyRowComplex__1 FBreakWidths;
	int FIteratePos;
	
public:
	__fastcall TAXWPhyRowComplex(Xssieutils::TBreakCharData *Widths, const int Widths_High);
	void __fastcall BeginIterate();
	double __fastcall IterateNext(int CharCount);
	__property Xssieutils::TBreakCharData BreakWidth[int Index] = {read=GetBreakWidth};
	__property int BreakWidthsCount = {read=GetBreakWidthsCount, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWPhyRowComplex() { }
	
};


class PASCALIMPLEMENTATION TAXWPhyRows : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TAXWPhyRow* operator[](int Index) { return this->Items[Index]; }
	
protected:
	double FWidth;
	double FHeight;
	TAXWPhyRow* __fastcall GetItems(int Index);
	
public:
	__fastcall TAXWPhyRows();
	virtual void __fastcall Clear();
	HIDESBASE TAXWPhyRow* __fastcall Add();
	int __fastcall FindRow(int Pos);
	void __fastcall Replace(int Index, TAXWPhyRow* Row);
	void __fastcall ClearFirstLast();
	void __fastcall SetFirstLast();
	void __fastcall UpdateArea();
	HIDESBASE TAXWPhyRow* __fastcall Last();
	__property double Width = {read=FWidth};
	__property double Height = {read=FHeight};
	__property TAXWPhyRow* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWPhyRows() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xssiephyrow */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XSSIEPHYROW)
using namespace Xssiephyrow;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XssiephyrowHPP
