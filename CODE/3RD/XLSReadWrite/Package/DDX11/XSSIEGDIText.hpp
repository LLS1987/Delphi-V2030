// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XSSIEGDIText.pas' rev: 35.00 (Windows)

#ifndef XssiegditextHPP
#define XssiegditextHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Types.hpp>
#include <System.Contnrs.hpp>
#include <System.Math.hpp>
#include <Winapi.Windows.hpp>
#include <XBookPaintGDI2.hpp>
#include <XSSIEDefs.hpp>
#include <XSSIEUtils.hpp>
#include <XSSIEDocProps.hpp>
#include <XSSIECharRun.hpp>
#include <XSSIEPhyRow.hpp>
#include <XSSIELogParas.hpp>
#include <XSSIELogEditor.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xssiegditext
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAXWULData;
class DELPHICLASS TAXWUnderlineList;
class DELPHICLASS TAXWTextPrint;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAXWULData : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	unsigned FColor;
	bool FIsULColor;
	int FSize;
	int FPosition;
	int FDescent;
	double FX;
	double FWidth;
	
public:
	__property int Size = {read=FSize, write=FSize, nodefault};
	__property int Position = {read=FPosition, write=FPosition, nodefault};
	__property int Descent = {read=FDescent, write=FDescent, nodefault};
	__property unsigned Color = {read=FColor, write=FColor, nodefault};
	__property bool IsULColor = {read=FIsULColor, write=FIsULColor, nodefault};
	__property double X = {read=FX, write=FX};
	__property double Width = {read=FWidth, write=FWidth};
public:
	/* TObject.Create */ inline __fastcall TAXWULData() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWULData() { }
	
};


class PASCALIMPLEMENTATION TAXWUnderlineList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TAXWULData* operator[](int Index) { return this->Items[Index]; }
	
private:
	TAXWULData* __fastcall GetItems(int Index);
	
protected:
	Xbookpaintgdi2::TAXWGDI* FGDI;
	unsigned FNewULColor;
	Xssiedocprops::TAXWChpUnderline FNewUnderline;
	Xssiedocprops::TAXWChpUnderline FUnderline;
	double FY;
	double FAveSize;
	double FAvePos;
	double FAveDescent;
	void __fastcall PaintUnderline();
	
public:
	__fastcall TAXWUnderlineList(Xbookpaintgdi2::TAXWGDI* AGDI);
	virtual void __fastcall Clear();
	HIDESBASE TAXWULData* __fastcall Add();
	bool __fastcall Active();
	void __fastcall UpdatePos(const double X, const double Y, const double W);
	void __fastcall BeginProps();
	void __fastcall EndProps();
	void __fastcall Calc();
	void __fastcall BeginRow();
	void __fastcall EndRow();
	__property TAXWULData* Items[int Index] = {read=GetItems/*, default*/};
	__property Xssiedocprops::TAXWChpUnderline NewUnderline = {read=FNewUnderline, write=FNewUnderline, nodefault};
	__property unsigned NewULColor = {read=FNewULColor, write=FNewULColor, nodefault};
	__property double Y = {read=FY, write=FY};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWUnderlineList() { }
	
};


typedef void __fastcall (__closure *TAXWProcPrint)(int X, int Y, System::UnicodeString Text);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWTextPrint : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xbookpaintgdi2::TAXWGDI* FGDI;
	Xssieutils::TAXWClientArea* FArea;
	Xssiedocprops::TAXWDOP* FDOP;
	Xssielogeditor::TAXWSelections* FSelections;
	bool FIsPrintRow;
	bool FShowNonprintChars;
	int FLastWidth;
	TAXWUnderlineList* FULList;
	int FTabCount;
	void __fastcall PrintTextSelected(const System::UnicodeString S, double &X, double &Y, Xssiephyrow::TAXWPhyRow* Row);
	void __fastcall PrintTextMarker(Xssiedocprops::TAXWCHP* CHP, Xssiecharrun::TAXWCharRun* CR, double X, double Y, System::UnicodeString S, int &P, Xssiephyrow::TAXWPhyRow* Row);
	void __fastcall BeginRow();
	void __fastcall EndRow();
	void __fastcall Print(double X, double Y, System::UnicodeString Text);
	
public:
	__fastcall TAXWTextPrint(Xbookpaintgdi2::TAXWGDI* AGDI, Xssieutils::TAXWClientArea* AArea, Xssielogeditor::TAXWSelections* ASelections, Xssiedocprops::TAXWDOP* ADOP);
	__fastcall virtual ~TAXWTextPrint();
	void __fastcall PrintRow(Xssielogparas::TAXWLogPara* Para, Xssiedocprops::TAXWCHP* CHP, Xssiedocprops::TAXWPAP* PAP, Xssiephyrow::TAXWPhyRow* Row, double Y);
	void __fastcall PrintNoDoc(int X, int Y, System::UnicodeString Text);
	void __fastcall SetupFormat(Xssiedocprops::TAXWCHP* CHP, Xssiedocprops::TAXWCHPX* CHPX);
	System::WideChar __fastcall CurrBreakChar();
	int __fastcall SetTextJustification(const int BreakExtra, const int BreakCount);
	__property bool ShowNonprintChars = {read=FShowNonprintChars, write=FShowNonprintChars, nodefault};
	__property Xbookpaintgdi2::TAXWGDI* GDI = {read=FGDI};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xssiegditext */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XSSIEGDITEXT)
using namespace Xssiegditext;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XssiegditextHPP
