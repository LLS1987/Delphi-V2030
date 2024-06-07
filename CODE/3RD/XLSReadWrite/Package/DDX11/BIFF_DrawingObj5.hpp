// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_DrawingObj5.pas' rev: 35.00 (Windows)

#ifndef Biff_drawingobj5HPP
#define Biff_drawingobj5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <BIFF_DrawingObjAnchor5.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_Escher5.hpp>
#include <BIFF_EscherCtrlObj5.hpp>
#include <BIFF_Stream5.hpp>
#include <BIFF_EscherTypes5.hpp>
#include <BIFF_FormulaHandler5.hpp>
#include <BIFF_Utils5.hpp>
#include <BIFF_ExcelFuncII5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XLSUtils5.hpp>
#include <XLSFormulaTypes5.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_drawingobj5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDrwCustom;
class DELPHICLASS TDrwCollection;
class DELPHICLASS TCustomDrwText;
class DELPHICLASS TDrwText;
class DELPHICLASS TDrwTexts;
class DELPHICLASS TDrwNote;
class DELPHICLASS TDrwNotes;
class DELPHICLASS TDrwBasic;
class DELPHICLASS TDrwBasics;
class DELPHICLASS TDrwAutoShape;
class DELPHICLASS TDrwAutoShapes;
class DELPHICLASS TDrwPicture;
class DELPHICLASS TDrwPictures;
class DELPHICLASS TDrawingObjects;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDrwCustom : public Biff_drawingobjanchor5::TDrwAnchor
{
	typedef Biff_drawingobjanchor5::TDrwAnchor inherited;
	
private:
	double __fastcall GetRotation();
	void __fastcall SetRotation(const double Value);
	System::UnicodeString __fastcall GetMacroName();
	virtual void __fastcall SetMacroName(const System::UnicodeString Value);
	System::Uitypes::TColor __fastcall GetLineColor();
	void __fastcall SetLineColor(const System::Uitypes::TColor Value);
	System::Uitypes::TColor __fastcall GetFillColor();
	void __fastcall SetFillColor(const System::Uitypes::TColor Value);
	bool __fastcall GetMoveWithCells();
	void __fastcall SetMoveWithCells(const bool Value);
	
public:
	__property System::UnicodeString MacroName = {read=GetMacroName, write=SetMacroName};
	__property double Rotation = {read=GetRotation, write=SetRotation};
	__property System::Uitypes::TColor LineColor = {read=GetLineColor, write=SetLineColor, nodefault};
	__property System::Uitypes::TColor FillColor = {read=GetFillColor, write=SetFillColor, nodefault};
	__property bool MoveWithCells = {read=GetMoveWithCells, write=SetMoveWithCells, nodefault};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TDrwCustom(System::Classes::TCollection* Collection) : Biff_drawingobjanchor5::TDrwAnchor(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TDrwCustom() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDrwCollection : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
protected:
	System::Classes::TPersistent* FOwner;
	Biff_escher5::TEscherDrawing* FDrawing;
	bool FFileAdd;
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TDrwCollection(System::Classes::TCollectionItemClass ItemClass, System::Classes::TPersistent* AOwner, Biff_escher5::TEscherDrawing* Drawing);
	HIDESBASE void __fastcall Clear();
	HIDESBASE void __fastcall Delete(int Index);
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDrwCollection() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCustomDrwText : public TDrwCustom
{
	typedef TDrwCustom inherited;
	
private:
	System::UnicodeString FName;
	void __fastcall SetName(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetName();
	System::UnicodeString __fastcall GetText();
	void __fastcall SetText(const System::UnicodeString Value);
	Biff_recsii5::TRecTXORUN __fastcall GetFormatting(int Index);
	double __fastcall GetMarginLeft();
	double __fastcall GetMarginBottom();
	double __fastcall GetMarginRight();
	double __fastcall GetMarginTop();
	void __fastcall SetMarginLeft(const double Value);
	void __fastcall SetMarginBottom(const double Value);
	void __fastcall SetMarginRight(const double Value);
	void __fastcall SetMarginTop(const double Value);
	
public:
	__fastcall virtual TCustomDrwText(System::Classes::TCollection* Collection);
	__fastcall virtual ~TCustomDrwText();
	virtual void __fastcall SetShape(Biff_escher5::TShapeClientAnchor* const Value);
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromFile(System::UnicodeString Filename);
	__property Biff_recsii5::TRecTXORUN Formatting[int Index] = {read=GetFormatting};
	
__published:
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property double MarginLeft = {read=GetMarginLeft, write=SetMarginLeft};
	__property double MarginTop = {read=GetMarginTop, write=SetMarginTop};
	__property double MarginRight = {read=GetMarginRight, write=SetMarginRight};
	__property double MarginBottom = {read=GetMarginBottom, write=SetMarginBottom};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDrwText : public TCustomDrwText
{
	typedef TCustomDrwText inherited;
	
public:
	__fastcall virtual TDrwText(System::Classes::TCollection* Collection);
public:
	/* TCustomDrwText.Destroy */ inline __fastcall virtual ~TDrwText() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDrwTexts : public TDrwCollection
{
	typedef TDrwCollection inherited;
	
public:
	TDrwText* operator[](int Index) { return this->Items[Index]; }
	
private:
	TDrwText* __fastcall GetDrwText(int Index);
	
protected:
	Xc12datastylesheet5::TXc12Fonts* FFonts;
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TDrwTexts(System::Classes::TPersistent* AOwner, Biff_escher5::TEscherDrawing* Drawing, Xc12datastylesheet5::TXc12Fonts* Fonts);
	HIDESBASE TDrwText* __fastcall Add();
	void __fastcall AddFromFile(Biff_escher5::TShapeClientAnchor* Shape);
	__property TDrwText* Items[int Index] = {read=GetDrwText/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDrwTexts() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDrwNote : public TCustomDrwText
{
	typedef TCustomDrwText inherited;
	
private:
	void __fastcall SetCellCol(const int Value);
	void __fastcall SetCellRow(const int Value);
	int __fastcall GetCellCol();
	int __fastcall GetCellRow();
	System::UnicodeString __fastcall GetAuthor();
	void __fastcall SetAuthor(const System::UnicodeString Value);
	virtual void __fastcall SetMacroName(const System::UnicodeString Value);
	bool __fastcall GetAlwaysVisible();
	void __fastcall SetAlwaysVisible(const bool Value);
	
public:
	__fastcall virtual TDrwNote(System::Classes::TCollection* Collection);
	__fastcall virtual ~TDrwNote();
	
__published:
	__property int CellCol = {read=GetCellCol, write=SetCellCol, nodefault};
	__property int CellRow = {read=GetCellRow, write=SetCellRow, nodefault};
	__property System::UnicodeString Author = {read=GetAuthor, write=SetAuthor};
	__property bool AlwaysVisible = {read=GetAlwaysVisible, write=SetAlwaysVisible, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDrwNotes : public TDrwCollection
{
	typedef TDrwCollection inherited;
	
public:
	TDrwNote* operator[](int Index) { return this->Items[Index]; }
	
private:
	TDrwNote* __fastcall GetDrwNote(int Index);
	
protected:
	Xc12datastylesheet5::TXc12Fonts* FFonts;
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TDrwNotes(System::Classes::TPersistent* AOwner, Biff_escher5::TEscherDrawing* Drawing, Xc12datastylesheet5::TXc12Fonts* Fonts);
	HIDESBASE TDrwNote* __fastcall Add();
	void __fastcall AddFromFile(Biff_escher5::TShapeClientAnchor* Shape);
	int __fastcall FindByColRow(int Col, int Row);
	__property TDrwNote* Items[int Index] = {read=GetDrwNote/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDrwNotes() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDrwBasic : public TDrwCustom
{
	typedef TDrwCustom inherited;
	
private:
	Biff_escher5::TBasicShapeType __fastcall GetShapeType();
	void __fastcall SetShapeType(const Biff_escher5::TBasicShapeType Value);
	
public:
	__fastcall virtual TDrwBasic(System::Classes::TCollection* Collection);
	
__published:
	__property Biff_escher5::TBasicShapeType ShapeType = {read=GetShapeType, write=SetShapeType, nodefault};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TDrwBasic() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDrwBasics : public TDrwCollection
{
	typedef TDrwCollection inherited;
	
public:
	TDrwBasic* operator[](int Index) { return this->Items[Index]; }
	
private:
	TDrwBasic* __fastcall GetDrwBasic(int Index);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TDrwBasics(System::Classes::TPersistent* AOwner, Biff_escher5::TEscherDrawing* Drawing);
	HIDESBASE TDrwBasic* __fastcall Add();
	void __fastcall AddFromFile(Biff_escher5::TShapeClientAnchor* Shape);
	__property TDrwBasic* Items[int Index] = {read=GetDrwBasic/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDrwBasics() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDrwAutoShape : public TDrwCustom
{
	typedef TDrwCustom inherited;
	
private:
	Biff_escher5::TAutoShapeType __fastcall GetAutoShapeType();
	HIDESBASE System::Uitypes::TColor __fastcall GetFillColor();
	HIDESBASE System::Uitypes::TColor __fastcall GetLineColor();
	void __fastcall SetAutoShapeType(const Biff_escher5::TAutoShapeType Value);
	HIDESBASE void __fastcall SetFillColor(const System::Uitypes::TColor Value);
	HIDESBASE void __fastcall SetLineColor(const System::Uitypes::TColor Value);
	
public:
	__fastcall virtual TDrwAutoShape(System::Classes::TCollection* Collection);
	void __fastcall SetAutoShapeTypeInteger(int Value);
	
__published:
	__property Biff_escher5::TAutoShapeType ShapeType = {read=GetAutoShapeType, write=SetAutoShapeType, nodefault};
	__property System::Uitypes::TColor LineColor = {read=GetLineColor, write=SetLineColor, nodefault};
	__property System::Uitypes::TColor FillColor = {read=GetFillColor, write=SetFillColor, nodefault};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TDrwAutoShape() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDrwAutoShapes : public TDrwCollection
{
	typedef TDrwCollection inherited;
	
public:
	TDrwAutoShape* operator[](int Index) { return this->Items[Index]; }
	
private:
	TDrwAutoShape* __fastcall GetDrwAutoShape(int Index);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TDrwAutoShapes(System::Classes::TPersistent* AOwner, Biff_escher5::TEscherDrawing* Drawing);
	HIDESBASE TDrwAutoShape* __fastcall Add();
	void __fastcall AddFromFile(Biff_escher5::TShapeClientAnchor* Shape);
	__property TDrwAutoShape* Items[int Index] = {read=GetDrwAutoShape/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDrwAutoShapes() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDrwPicture : public TDrwCustom
{
	typedef TDrwCustom inherited;
	
private:
	int __fastcall GetPictureId();
	System::UnicodeString __fastcall GetPictureName();
	void __fastcall SetPictureId(const int Value);
	void __fastcall SetPictureName(const System::UnicodeString Value);
	
public:
	__fastcall virtual TDrwPicture(System::Classes::TCollection* Collection);
	
__published:
	__property int PictureId = {read=GetPictureId, write=SetPictureId, nodefault};
	__property System::UnicodeString PictureName = {read=GetPictureName, write=SetPictureName};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TDrwPicture() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDrwPictures : public TDrwCollection
{
	typedef TDrwCollection inherited;
	
public:
	TDrwPicture* operator[](int Index) { return this->Items[Index]; }
	
private:
	TDrwPicture* __fastcall GetDrwPicture(int Index);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TDrwPictures(System::Classes::TPersistent* AOwner, Biff_escher5::TEscherDrawing* Drawing);
	HIDESBASE TDrwPicture* __fastcall Add();
	void __fastcall AddFromFile(Biff_escher5::TShapeClientAnchor* Shape);
	__property TDrwPicture* Items[int Index] = {read=GetDrwPicture/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDrwPictures() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDrawingObjects : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TPersistent* FOwner;
	Biff_escher5::TEscherDrawing* FDrawing;
	Biff_formulahandler5::TFormulaHandler* FormulaHandler;
	TDrwTexts* FTexts;
	TDrwNotes* FNotes;
	TDrwBasics* FBasics;
	TDrwAutoShapes* FAutoShapes;
	TDrwPictures* FPictures;
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TDrawingObjects(System::Classes::TPersistent* AOwner, Biff_escher5::TEscherDrawing* Drawing, Biff_formulahandler5::TFormulaHandler* FmlaHandler, Xc12datastylesheet5::TXc12Fonts* Fonts);
	__fastcall virtual ~TDrawingObjects();
	void __fastcall Clear();
	
__published:
	__property TDrwTexts* Texts = {read=FTexts, write=FTexts};
	__property TDrwNotes* Notes = {read=FNotes, write=FNotes};
	__property TDrwBasics* Basics = {read=FBasics, write=FBasics};
	__property TDrwAutoShapes* AutoShapes = {read=FAutoShapes, write=FAutoShapes};
	__property TDrwPictures* Pictures = {read=FPictures, write=FPictures};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Biff_drawingobj5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_DRAWINGOBJ5)
using namespace Biff_drawingobj5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_drawingobj5HPP
