// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookRefEdit2.pas' rev: 35.00 (Windows)

#ifndef Xbookrefedit2HPP
#define Xbookrefedit2HPP

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
#include <System.Contnrs.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataWorkbook5.hpp>
#include <Xc12Manager5.hpp>
#include <XLSUtils5.hpp>
#include <XLSFormulaTypes5.hpp>
#include <XLSEncodeFmla5.hpp>
#include <XLSFormula5.hpp>
#include <XLSFmlaDebugData5.hpp>
#include <XSSIEKeys.hpp>
#include <XBookUtils2.hpp>
#include <XBookPaintGDI2.hpp>
#include <XBookPaint2.hpp>
#include <XBookSkin2.hpp>
#include <XBookColumns2.hpp>
#include <XBookRows2.hpp>
#include <XBookWindows2.hpp>
#include <XBookTypes2.hpp>
#include <XBookInplaceEdit2.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookrefedit2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXBookEditRef;
class DELPHICLASS TXBookEditRefList;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TRefEditMode : unsigned char { remIdle, remMove, remSize };

enum DECLSPEC_DENUM TRefScrollDirection : unsigned char { rsdNone, rsdHoriz, rsdVert };

enum DECLSPEC_DENUM TRefEditType : unsigned char { retUndefined, retRef, retRef1d, retName, retSelect };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXBookEditRef : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FVisible;
	TRefEditType FType;
	int FCol1;
	int FRow1;
	int FCol2;
	int FRow2;
	bool FAbsC1;
	bool FAbsR1;
	bool FAbsC2;
	bool FAbsR2;
	int FDeltaCol;
	int FDeltaRow;
	int FCRIndex;
	System::UnicodeString FName;
	Xbooktypes2::TXYRect FRect;
	unsigned FColor;
	bool FHasGrips;
	System::StaticArray<Xbooktypes2::TXYRect, 4> FGrips;
	
public:
	__fastcall TXBookEditRef(int C1, int R1, int C2, int R2);
	void __fastcall Move();
	void __fastcall Size(int Corner);
	void __fastcall SetInside(int &Col, int &Row);
	bool __fastcall Inside(int Col, int Row);
	void __fastcall FitToExtent();
	System::UnicodeString __fastcall AsString();
	__property TRefEditType Type_ = {read=FType, nodefault};
	__property int Col1 = {read=FCol1, write=FCol1, nodefault};
	__property int Row1 = {read=FRow1, write=FRow1, nodefault};
	__property int Col2 = {read=FCol2, write=FCol2, nodefault};
	__property int Row2 = {read=FRow2, write=FRow2, nodefault};
	__property Xbooktypes2::TXYRect Rect = {read=FRect, write=FRect};
	__property bool AbsC1 = {read=FAbsC1, nodefault};
	__property bool AbsR1 = {read=FAbsR1, nodefault};
	__property bool AbsC2 = {read=FAbsC2, nodefault};
	__property bool AbsR2 = {read=FAbsR2, nodefault};
	__property int CRIndex = {read=FCRIndex, write=FCRIndex, nodefault};
	__property System::UnicodeString Name = {read=FName};
	__property unsigned Color = {read=FColor, write=FColor, nodefault};
	__property bool HasGrips = {read=FHasGrips, write=FHasGrips, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXBookEditRef() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXBookEditRefList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXBookEditRef* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXBookEditRef* __fastcall GetItems(int Index);
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	Xbookinplaceedit2::TXBookInplaceEditor* FEditor;
	System::UnicodeString FFormula;
	Xbookwindows2::TXSSClientWindow* FWin;
	Xbookcolumns2::TXLSBookColumns* FColumns;
	Xbookrows2::TXLSBookRows* FRows;
	int FCurrColor;
	int FFocused;
	int FExcludePaint;
	Xbookutils2::TX4IntegerEvent FPaintCellsEvent;
	Xbookutils2::TXIntegerEvent FDoScrollEvent;
	TRefEditMode FEditMode;
	int FLastCol;
	int FLastRow;
	int FClickCol;
	int FClickRow;
	int FSizeCorner;
	TRefScrollDirection FScrollDir;
	bool FIsUpdating;
	Xbookutils2::TXStringEvent FDebugEvent;
	void __fastcall SetPos(TXBookEditRef* ERef, const bool AUpdateEditor = true);
	void __fastcall SetSize(TXBookEditRef* ERef, int Corner);
	void __fastcall PaintRef(int Index, bool Focused);
	int __fastcall RefHit(int X, int Y);
	void __fastcall ClipToSheet(int &C1, int &R1, int &C2, int &R2);
	bool __fastcall SetGripCursor(int X, int Y);
	void __fastcall ClipXYToWin(TXBookEditRef* ERef, int C1, int R1, int C2, int R2);
	void __fastcall UpdateEditor(TXBookEditRef* AERef, const int C1, const int R1, const int C2, const int R2);
	HIDESBASE TXBookEditRef* __fastcall Add(const int C, const int R)/* overload */;
	HIDESBASE TXBookEditRef* __fastcall Add(const int C1, const int R1, const int C2, const int R2, const TRefEditType AType = (TRefEditType)(0x1), const System::UnicodeString AName = System::UnicodeString())/* overload */;
	HIDESBASE TXBookEditRef* __fastcall Add(const int C, const int R, const System::UnicodeString ASheetName)/* overload */;
	HIDESBASE TXBookEditRef* __fastcall Add(const int C1, const int R1, const int C2, const int R2, const System::UnicodeString ASheetName)/* overload */;
	TXBookEditRef* __fastcall AddName(const int C, const int R, const System::UnicodeString AName)/* overload */;
	TXBookEditRef* __fastcall AddName(const int C1, const int R1, const int C2, const int R2, const System::UnicodeString AName)/* overload */;
	void __fastcall ScanPtgs(Xlsfmladebugdata5::TFmlaDebugItems* ADebugItems);
	void __fastcall EditorTextChanged(const System::UnicodeString AText);
	
public:
	__fastcall TXBookEditRefList(Xc12manager5::TXc12Manager* AManager, Xbookinplaceedit2::TXBookInplaceEditor* AEditor, Xbookwindows2::TXSSClientWindow* AWin, Xbookcolumns2::TXLSBookColumns* Columns, Xbookrows2::TXLSBookRows* Rows);
	__fastcall virtual ~TXBookEditRefList();
	void __fastcall MouseDown(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y, int Col, int Row);
	void __fastcall MouseMove(Xbookwindows2::TXSSShiftState Shift, int X, int Y, int Col, int Row);
	void __fastcall MouseUp(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y, int Col, int Row);
	void __fastcall Paint();
	void __fastcall ScrollUpdate(int Col, int Row);
	bool __fastcall IsFocused();
	bool __fastcall HasSelect();
	void __fastcall AddSelect(const int C, const int R);
	void __fastcall SetFormula(const System::UnicodeString AFormula)/* overload */;
	void __fastcall SetFormula(const System::UnicodeString AFormula, const bool AStrictMode)/* overload */;
	__property TXBookEditRef* Items[int Index] = {read=GetItems/*, default*/};
	__property Xbookutils2::TX4IntegerEvent OnPaintCells = {read=FPaintCellsEvent, write=FPaintCellsEvent};
	__property Xbookutils2::TXIntegerEvent OnDoScroll = {read=FDoScrollEvent, write=FDoScrollEvent};
	__property Xbookutils2::TXStringEvent OnDebug = {read=FDebugEvent, write=FDebugEvent};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xbookrefedit2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKREFEDIT2)
using namespace Xbookrefedit2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookrefedit2HPP
