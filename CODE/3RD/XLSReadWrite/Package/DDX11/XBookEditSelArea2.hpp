// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookEditSelArea2.pas' rev: 35.00 (Windows)

#ifndef Xbookeditselarea2HPP
#define Xbookeditselarea2HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>
#include <XLSSheetData5.hpp>
#include <XBookUtils2.hpp>
#include <XBookSkin2.hpp>
#include <XBookPaint2.hpp>
#include <XBookColumns2.hpp>
#include <XBookRows2.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookeditselarea2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSBookEditSelArea;
class DELPHICLASS TXLSBookMoveSelArea;
class DELPHICLASS TXLSBookSizeSelArea;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TSelEditMode : unsigned char { semMove, semSize };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSBookEditSelArea : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xbookskin2::TXLSBookSkin* FSkin;
	int FLastCol;
	int FLastRow;
	Xlssheetdata5::TXLSSelectedArea* FSelectedArea;
	Xc12utils5::TXLSCellArea FSheetArea;
	Xbookcolumns2::TXLSBookColumns* FColumns;
	Xbookrows2::TXLSBookRows* FRows;
	bool FStarted;
	void __fastcall ClipToSheet(int &C1, int &R1, int &C2, int &R2);
	
public:
	__fastcall TXLSBookEditSelArea(Xbookskin2::TXLSBookSkin* Skin, Xbookcolumns2::TXLSBookColumns* Columns, Xbookrows2::TXLSBookRows* Rows);
	virtual void __fastcall PaintRect() = 0 ;
	virtual void __fastcall BeginEdit(Xlssheetdata5::TXLSSelectedArea* SelectedArea, int Col, int Row) = 0 ;
	virtual void __fastcall UpdateEdit(int Col, int Row, bool ClipToSheet) = 0 ;
	virtual void __fastcall EndEdit(int Col, int Row) = 0 ;
	virtual TSelEditMode __fastcall Mode() = 0 ;
	virtual void __fastcall ScrollUpdate(int Col, int Row) = 0 ;
	void __fastcall SheetAreaChanged();
	__property bool Started = {read=FStarted, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSBookEditSelArea() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSBookMoveSelArea : public TXLSBookEditSelArea
{
	typedef TXLSBookEditSelArea inherited;
	
protected:
	int FMouseDownCol;
	int FMouseDownRow;
	int FDeltaCol;
	int FDeltaRow;
	void __fastcall MakeMoveRect(int C1, int R1, int C2, int R2, Xbookskin2::TStraightLineArray &Lines);
	void __fastcall ClipMoveRect();
	
public:
	__fastcall TXLSBookMoveSelArea(Xbookskin2::TXLSBookSkin* Skin, Xbookcolumns2::TXLSBookColumns* Columns, Xbookrows2::TXLSBookRows* Rows, int MouseCol, int MouseRow);
	virtual void __fastcall PaintRect();
	virtual void __fastcall BeginEdit(Xlssheetdata5::TXLSSelectedArea* SelectedArea, int Col, int Row);
	virtual void __fastcall UpdateEdit(int Col, int Row, bool ClipToSheet);
	virtual void __fastcall EndEdit(int Col, int Row);
	virtual TSelEditMode __fastcall Mode();
	virtual void __fastcall ScrollUpdate(int Col, int Row);
	__property int DeltaCol = {read=FDeltaCol, nodefault};
	__property int DeltaRow = {read=FDeltaRow, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSBookMoveSelArea() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSBookSizeSelArea : public TXLSBookEditSelArea
{
	typedef TXLSBookEditSelArea inherited;
	
protected:
	Xc12utils5::TXLSCellArea FSizeArea;
	Xc12utils5::TXLSCellArea FDeleteArea;
	bool FIsDelete;
	bool FLastWasDelete;
	void __fastcall SetSizeArea(int Col, int Row);
	void __fastcall SetDeleteArea(int Col, int Row);
	void __fastcall MakeSizeRect(int C1, int R1, int C2, int R2, Xbookskin2::TStraightLineArray &Lines);
	void __fastcall DoDeleteArea();
	
public:
	virtual void __fastcall PaintRect();
	virtual void __fastcall BeginEdit(Xlssheetdata5::TXLSSelectedArea* SelectedArea, int Col, int Row);
	virtual void __fastcall UpdateEdit(int Col, int Row, bool ClipToSheet);
	virtual void __fastcall EndEdit(int Col, int Row);
	virtual TSelEditMode __fastcall Mode();
	virtual void __fastcall ScrollUpdate(int Col, int Row);
	__property bool IsDelete = {read=FIsDelete, write=FIsDelete, nodefault};
	__property Xc12utils5::TXLSCellArea SizeArea = {read=FSizeArea};
	__property Xc12utils5::TXLSCellArea DeleteArea = {read=FDeleteArea};
public:
	/* TXLSBookEditSelArea.Create */ inline __fastcall TXLSBookSizeSelArea(Xbookskin2::TXLSBookSkin* Skin, Xbookcolumns2::TXLSBookColumns* Columns, Xbookrows2::TXLSBookRows* Rows) : TXLSBookEditSelArea(Skin, Columns, Rows) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSBookSizeSelArea() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xbookeditselarea2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKEDITSELAREA2)
using namespace Xbookeditselarea2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookeditselarea2HPP
