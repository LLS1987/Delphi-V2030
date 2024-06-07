// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_ControlObj5.pas' rev: 35.00 (Windows)

#ifndef Biff_controlobj5HPP
#define Biff_controlobj5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <BIFF_DrawingObjAnchor5.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_Escher5.hpp>
#include <BIFF_EscherCtrlObj5.hpp>
#include <BIFF_Stream5.hpp>
#include <BIFF_FormulaHandler5.hpp>
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_controlobj5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TControlObjList;
class DELPHICLASS TControlListBox;
class DELPHICLASS TControlListBoxes;
class DELPHICLASS TControlComboBox;
class DELPHICLASS TControlComboBoxes;
class DELPHICLASS TControlText;
class DELPHICLASS TControlTextMacro;
class DELPHICLASS TControlButton;
class DELPHICLASS TControlButtons;
class DELPHICLASS TControlCheckBox;
class DELPHICLASS TControlCheckBoxes;
class DELPHICLASS TControlRadioButton;
class DELPHICLASS TControlRadioButtons;
class DELPHICLASS TControlObjects;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TCtrlCheckState : unsigned char { ccsUnchecked, ccsChecked, cchTristate };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TControlObjList : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	Biff_drawingobjanchor5::TDrwAnchor* operator[](int Index) { return this->Items[Index]; }
	
private:
	Biff_drawingobjanchor5::TDrwAnchor* __fastcall GetItems(int Index);
	
protected:
	System::Classes::TPersistent* FOwner;
	Biff_escher5::TEscherDrawing* FDrawing;
	bool FFileAdd;
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TControlObjList(System::Classes::TPersistent* AOwner, Biff_escher5::TEscherDrawing* Drawing, System::Classes::TCollectionItemClass ItemClass);
	HIDESBASE void __fastcall Delete(int Index);
	void __fastcall DeleteById(int Id);
	__property Biff_drawingobjanchor5::TDrwAnchor* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TControlObjList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TControlListBox : public Biff_drawingobjanchor5::TDrwAnchor
{
	typedef Biff_drawingobjanchor5::TDrwAnchor inherited;
	
private:
	System::UnicodeString __fastcall GetDestCell();
	System::UnicodeString __fastcall GetSourceArea();
	void __fastcall SetDestCell(const System::UnicodeString Value);
	void __fastcall SetSourceArea(const System::UnicodeString Value);
	
public:
	__fastcall virtual TControlListBox(System::Classes::TCollection* Collection);
	
__published:
	__property System::UnicodeString SourceArea = {read=GetSourceArea, write=SetSourceArea};
	__property System::UnicodeString DestCell = {read=GetDestCell, write=SetDestCell};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TControlListBox() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TControlListBoxes : public TControlObjList
{
	typedef TControlObjList inherited;
	
public:
	TControlListBox* operator[](int Index) { return this->Items[Index]; }
	
private:
	TControlListBox* __fastcall GetControlListBox(int Index);
	
public:
	__fastcall TControlListBoxes(System::Classes::TPersistent* AOwner, Biff_escher5::TEscherDrawing* Drawing);
	HIDESBASE TControlListBox* __fastcall Add();
	HIDESBASE void __fastcall Clear();
	void __fastcall AddFromFile(Biff_escher5::TShapeClientAnchor* Shape);
	__property TControlListBox* Items[int Index] = {read=GetControlListBox/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TControlListBoxes() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TControlComboBox : public Biff_drawingobjanchor5::TDrwAnchor
{
	typedef Biff_drawingobjanchor5::TDrwAnchor inherited;
	
private:
	System::UnicodeString __fastcall GetDestCell();
	System::UnicodeString __fastcall GetSourceArea();
	void __fastcall SetDestCell(const System::UnicodeString Value);
	void __fastcall SetSourceArea(const System::UnicodeString Value);
	
public:
	__fastcall virtual TControlComboBox(System::Classes::TCollection* Collection);
	
__published:
	__property System::UnicodeString SourceArea = {read=GetSourceArea, write=SetSourceArea};
	__property System::UnicodeString DestCell = {read=GetDestCell, write=SetDestCell};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TControlComboBox() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TControlComboBoxes : public TControlObjList
{
	typedef TControlObjList inherited;
	
public:
	TControlComboBox* operator[](int Index) { return this->Items[Index]; }
	
private:
	TControlComboBox* __fastcall GetControlComboBox(int Index);
	
protected:
	bool FAddAutoFilter;
	
public:
	__fastcall TControlComboBoxes(System::Classes::TPersistent* AOwner, Biff_escher5::TEscherDrawing* Drawing);
	HIDESBASE TControlComboBox* __fastcall Add();
	TControlComboBox* __fastcall AddAutoFilter();
	HIDESBASE void __fastcall Clear();
	void __fastcall AddFromFile(Biff_escher5::TShapeClientAnchor* Shape);
	__property TControlComboBox* Items[int Index] = {read=GetControlComboBox/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TControlComboBoxes() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TControlText : public Biff_drawingobjanchor5::TDrwAnchor
{
	typedef Biff_drawingobjanchor5::TDrwAnchor inherited;
	
private:
	System::UnicodeString __fastcall GetText();
	void __fastcall SetText(const System::UnicodeString Value);
	
__published:
	__property System::UnicodeString Text = {read=GetText, write=SetText};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TControlText(System::Classes::TCollection* Collection) : Biff_drawingobjanchor5::TDrwAnchor(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TControlText() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TControlTextMacro : public TControlText
{
	typedef TControlText inherited;
	
private:
	System::UnicodeString __fastcall GetMacroName();
	void __fastcall SetMacroName(const System::UnicodeString Value);
	
__published:
	__property System::UnicodeString MacroName = {read=GetMacroName, write=SetMacroName};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TControlTextMacro(System::Classes::TCollection* Collection) : TControlText(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TControlTextMacro() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TControlButton : public TControlTextMacro
{
	typedef TControlTextMacro inherited;
	
public:
	__fastcall virtual TControlButton(System::Classes::TCollection* Collection);
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TControlButton() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TControlButtons : public TControlObjList
{
	typedef TControlObjList inherited;
	
public:
	TControlButton* operator[](int Index) { return this->Items[Index]; }
	
private:
	TControlButton* __fastcall GetControlButton(int Index);
	
public:
	__fastcall TControlButtons(System::Classes::TPersistent* AOwner, Biff_escher5::TEscherDrawing* Drawing);
	HIDESBASE TControlButton* __fastcall Add();
	HIDESBASE void __fastcall Clear();
	void __fastcall AddFromFile(Biff_escher5::TShapeClientAnchor* Shape);
	__property TControlButton* Items[int Index] = {read=GetControlButton/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TControlButtons() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TControlCheckBox : public TControlTextMacro
{
	typedef TControlTextMacro inherited;
	
private:
	TCtrlCheckState __fastcall GetState();
	void __fastcall SetState(const TCtrlCheckState Value);
	
public:
	__fastcall virtual TControlCheckBox(System::Classes::TCollection* Collection);
	__property TCtrlCheckState State = {read=GetState, write=SetState, nodefault};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TControlCheckBox() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TControlCheckBoxes : public TControlObjList
{
	typedef TControlObjList inherited;
	
public:
	TControlCheckBox* operator[](int Index) { return this->Items[Index]; }
	
private:
	TControlCheckBox* __fastcall GetControlCheckBox(int Index);
	
public:
	__fastcall TControlCheckBoxes(System::Classes::TPersistent* AOwner, Biff_escher5::TEscherDrawing* Drawing);
	HIDESBASE TControlCheckBox* __fastcall Add();
	HIDESBASE void __fastcall Clear();
	void __fastcall AddFromFile(Biff_escher5::TShapeClientAnchor* Shape);
	__property TControlCheckBox* Items[int Index] = {read=GetControlCheckBox/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TControlCheckBoxes() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TControlRadioButton : public TControlTextMacro
{
	typedef TControlTextMacro inherited;
	
private:
	TCtrlCheckState __fastcall GetState();
	void __fastcall SetState(const TCtrlCheckState Value);
	
public:
	__fastcall virtual TControlRadioButton(System::Classes::TCollection* Collection);
	__property TCtrlCheckState State = {read=GetState, write=SetState, nodefault};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TControlRadioButton() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TControlRadioButtons : public TControlObjList
{
	typedef TControlObjList inherited;
	
public:
	TControlRadioButton* operator[](int Index) { return this->Items[Index]; }
	
private:
	TControlRadioButton* __fastcall GetControlRadioButton(int Index);
	
public:
	__fastcall TControlRadioButtons(System::Classes::TPersistent* AOwner, Biff_escher5::TEscherDrawing* Drawing);
	HIDESBASE TControlRadioButton* __fastcall Add();
	HIDESBASE void __fastcall Clear();
	void __fastcall AddFromFile(Biff_escher5::TShapeClientAnchor* Shape);
	__property TControlRadioButton* Items[int Index] = {read=GetControlRadioButton/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TControlRadioButtons() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TControlObjects : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TPersistent* FOwner;
	Biff_escher5::TEscherDrawing* FDrawing;
	Biff_formulahandler5::TFormulaHandler* FormulaHandler;
	TControlListBoxes* FListBoxes;
	TControlComboBoxes* FComboBoxes;
	TControlButtons* FButtons;
	TControlCheckBoxes* FCheckBoxes;
	TControlRadioButtons* FRadioButtons;
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TControlObjects(System::Classes::TPersistent* AOwner, Biff_escher5::TEscherDrawing* Drawing, Biff_formulahandler5::TFormulaHandler* FmlaHandler);
	__fastcall virtual ~TControlObjects();
	void __fastcall Clear();
	
__published:
	__property TControlListBoxes* ListBoxes = {read=FListBoxes, write=FListBoxes};
	__property TControlComboBoxes* ComboBoxes = {read=FComboBoxes, write=FComboBoxes};
	__property TControlButtons* Buttons = {read=FButtons, write=FButtons};
	__property TControlCheckBoxes* CheckBoxes = {read=FCheckBoxes, write=FCheckBoxes};
	__property TControlRadioButtons* RadioButtons = {read=FRadioButtons, write=FRadioButtons};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Biff_controlobj5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_CONTROLOBJ5)
using namespace Biff_controlobj5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_controlobj5HPP
