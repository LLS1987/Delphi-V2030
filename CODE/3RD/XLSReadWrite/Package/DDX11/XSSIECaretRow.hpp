// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XSSIECaretRow.pas' rev: 35.00 (Windows)

#ifndef XssiecaretrowHPP
#define XssiecaretrowHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <XSSIEUtils.hpp>
#include <XSSIEDefs.hpp>
#include <XSSIECharRun.hpp>
#include <XSSIELogParas.hpp>
#include <XSSIEPhyRow.hpp>
#include <XSSIELogPhyPosition.hpp>
#include <XSSIEGDIText.hpp>
#include <XSSIEDocProps.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xssiecaretrow
{
//-- forward type declarations -----------------------------------------------
struct TAXWPhyCharData;
class DELPHICLASS TAXWCaretRowEditor;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TAXWPhyCharData
{
public:
	System::WideChar C;
	double X;
	double Width;
};


class PASCALIMPLEMENTATION TAXWCaretRowEditor : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TAXWPhyCharData> _TAXWCaretRowEditor__1;
	
	typedef System::DynamicArray<int> _TAXWCaretRowEditor__2;
	
	
public:
	TAXWPhyCharData operator[](int Index) { return this->Char[Index]; }
	
private:
	TAXWPhyCharData __fastcall GetChar(int Index);
	void __fastcall SetCaretPos(Xssielogphyposition::TAXWEventLogPhyPosition* const Value);
	
protected:
	Xssieutils::TAXWClientArea* FArea;
	Xssiegditext::TAXWTextPrint* FPrint;
	Xssielogparas::TAXWLogParas* FParas;
	double FHeight;
	double FPrevCaretX;
	int FTabCount;
	double FScrCaretX;
	double FScrCaretY;
	double FScrCaretH;
	Xssielogphyposition::TAXWEventLogPhyPosition* FCaretPos;
	_TAXWCaretRowEditor__1 FChars;
	_TAXWCaretRowEditor__2 FBreakCharsWidth;
	void __fastcall AddEOL(double X);
	void __fastcall DoCharRun(double &AX, Xssiecharrun::TAXWCharRun* ACR, const int APos1, const int APos2, Xssiephyrow::TAXWPhyRowComplex* ARowCx, const double AJustifyWidth);
	
public:
	__fastcall TAXWCaretRowEditor(Xssiegditext::TAXWTextPrint* Print, Xssielogparas::TAXWLogParas* Paras, Xssieutils::TAXWClientArea* Area);
	void __fastcall Clear();
	void __fastcall RowChanged();
	bool __fastcall Equal(Xssielogparas::TAXWLogPara* Para, int RowIndex)/* overload */;
	bool __fastcall Equal(Xssielogphyposition::TAXWLogPhyPosition* Pos)/* overload */;
	int __fastcall XToRelCharPos(double X);
	int __fastcall MatchPrevCP();
	bool __fastcall IsEOL();
	void __fastcall SaveX();
	void __fastcall RestoreX();
	TAXWPhyCharData __fastcall CaretChar();
	__property Xssielogphyposition::TAXWEventLogPhyPosition* CaretPos = {read=FCaretPos, write=SetCaretPos};
	__property TAXWPhyCharData Char[int Index] = {read=GetChar/*, default*/};
	__property double ScrCaretX = {read=FScrCaretX, write=FScrCaretX};
	__property double ScrCaretY = {read=FScrCaretY, write=FScrCaretY};
	__property double ScrCaretH = {read=FScrCaretH, write=FScrCaretH};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWCaretRowEditor() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xssiecaretrow */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XSSIECARETROW)
using namespace Xssiecaretrow;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XssiecaretrowHPP
