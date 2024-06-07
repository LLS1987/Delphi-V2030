// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_EscherCtrlObj5.pas' rev: 35.00 (Windows)

#ifndef Biff_escherctrlobj5HPP
#define Biff_escherctrlobj5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Math.hpp>
#include <BIFF_Utils5.hpp>
#include <BIFF_Stream5.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_RecordStorage5.hpp>
#include <BIFF_EscherTypes5.hpp>
#include <BIFF_RecordStorageChart5.hpp>
#include <BIFF_ExcelFuncII5.hpp>
#include <BIFF_Names5.hpp>
#include <XLSUtils5.hpp>
#include <XLSFormulaTypes5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_escherctrlobj5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TShapeOutsideMso;
class DELPHICLASS TShapeOutsideMsoBaseText;
class DELPHICLASS TShapeOutsideMsoNote;
class DELPHICLASS TShapeControl;
class DELPHICLASS TObjLBS;
class DELPHICLASS TObjLBSListBox;
class DELPHICLASS TObjLBSComboBox;
class DELPHICLASS TShapeControlListBox;
class DELPHICLASS TShapeControlComboBox;
class DELPHICLASS TShapeOutsideMsoBaseTextMacro;
class DELPHICLASS TShapeControlButton;
class DELPHICLASS TShapeControlCheckBox;
class DELPHICLASS TShapeControlRadioButton;
class DELPHICLASS TShapeControlScrollBar;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TShapeOutsideMso : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FOwnsObjData;
	System::Word FObjId;
	System::Word FOptions;
	Biff_eschertypes5::TMSOShapeType FShapeType;
	int __fastcall GetDynArraySize(System::Byte *Arr, const int Arr_High);
	void __fastcall WriteDynArray(Biff_stream5::TXLSStream* Stream, int RecId, System::Byte *Arr, const int Arr_High);
	
public:
	__fastcall TShapeOutsideMso(int ObjId, Biff_eschertypes5::TMSOShapeType ST);
	virtual void __fastcall Assign(TShapeOutsideMso* Shape) = 0 ;
	virtual void __fastcall Read(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf) = 0 ;
	virtual void __fastcall Write(Biff_stream5::TXLSStream* Stream) = 0 ;
	virtual bool __fastcall ParseOBJ(Biff_recordstorage5::TBaseRecordStorage* OBJ);
	__property bool OwnsObjData = {read=FOwnsObjData, nodefault};
	__property System::Word ObjId = {read=FObjId, write=FObjId, nodefault};
	__property Biff_eschertypes5::TMSOShapeType ShapeType = {read=FShapeType, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TShapeOutsideMso() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShapeOutsideMsoBaseText : public TShapeOutsideMso
{
	typedef TShapeOutsideMso inherited;
	
private:
	void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetTXORuns(const Biff_recsii5::TDynTXORUNArray Value);
	
protected:
	Biff_recsii5::TRecTXO *FpTXO;
	System::UnicodeString FText;
	Biff_recsii5::TDynTXORUNArray FTXORuns;
	
public:
	__fastcall TShapeOutsideMsoBaseText(int ObjId, Biff_eschertypes5::TMSOShapeType ST);
	__fastcall virtual ~TShapeOutsideMsoBaseText();
	virtual void __fastcall Assign(TShapeOutsideMso* Shape);
	void __fastcall SetDefaultTxo();
	virtual void __fastcall Read(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	virtual void __fastcall Write(Biff_stream5::TXLSStream* Stream);
	__property Biff_recsii5::PRecTXO TXO = {read=FpTXO};
	__property System::UnicodeString Text = {read=FText, write=SetText};
	__property Biff_recsii5::TDynTXORUNArray Formatting = {read=FTXORuns, write=SetTXORuns};
	__property Biff_recsii5::TDynTXORUNArray TXORuns = {read=FTXORuns, write=FTXORuns};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShapeOutsideMsoNote : public TShapeOutsideMsoBaseText
{
	typedef TShapeOutsideMsoBaseText inherited;
	
protected:
	int FCellCol;
	int FCellRow;
	System::Word FOptions;
	System::UnicodeString FAuthor;
	
public:
	virtual void __fastcall Assign(TShapeOutsideMso* Shape);
	__property int CellCol = {read=FCellCol, write=FCellCol, nodefault};
	__property int CellRow = {read=FCellRow, write=FCellRow, nodefault};
	__property System::Word Options = {read=FOptions, write=FOptions, nodefault};
	__property System::UnicodeString Author = {read=FAuthor, write=FAuthor};
public:
	/* TShapeOutsideMsoBaseText.Create */ inline __fastcall TShapeOutsideMsoNote(int ObjId, Biff_eschertypes5::TMSOShapeType ST) : TShapeOutsideMsoBaseText(ObjId, ST) { }
	/* TShapeOutsideMsoBaseText.Destroy */ inline __fastcall virtual ~TShapeOutsideMsoNote() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShapeControl : public TShapeOutsideMso
{
	typedef TShapeOutsideMso inherited;
	
public:
	/* TShapeOutsideMso.Create */ inline __fastcall TShapeControl(int ObjId, Biff_eschertypes5::TMSOShapeType ST) : TShapeOutsideMso(ObjId, ST) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TShapeControl() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TObjLBS : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<System::Byte> _TObjLBS__1;
	
	
protected:
	_TObjLBS__1 FLBSOrig;
	unsigned FUnknownFmlaData1;
	Biff_utils5::TDynByteArray FFormula;
	System::Byte FUnknownFmlaData2;
	System::Word FEntryCount;
	System::Word FSelectedEntry;
	System::Word FStyle;
	System::Word FLinkedEdit;
	
public:
	__fastcall TObjLBS();
	virtual int __fastcall Size(bool OrigSize);
	virtual int __fastcall LoadFromBuf(System::Sysutils::PByteArray Buf, int BufLen);
	virtual void __fastcall SaveToStream(Biff_stream5::TXLSStream* Stream, bool SaveOrig);
	void __fastcall GetSourceArea(int &Sheet, int &Col1, int &Row1, int &Col2, int &Row2);
	void __fastcall SetSourceArea(int Sheet, int Col1, int Row1, int Col2, int Row2);
	void __fastcall GetSourceFmla(Biff_utils5::TDynByteArray &Fmla);
	bool __fastcall HasSourceArea();
	__property System::Word Style = {read=FStyle, write=FStyle, nodefault};
	__property System::Word LinkedEdit = {read=FLinkedEdit, write=FLinkedEdit, nodefault};
	__property System::Word SelectedIndex = {read=FSelectedEntry, write=FSelectedEntry, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TObjLBS() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TObjLBSListBox : public TObjLBS
{
	typedef TObjLBS inherited;
	
	
private:
	typedef System::DynamicArray<System::Byte> _TObjLBSListBox__1;
	
	
protected:
	_TObjLBSListBox__1 FMultiselect;
	
public:
	virtual int __fastcall Size(bool OrigSize);
	virtual int __fastcall LoadFromBuf(System::Sysutils::PByteArray Buf, int BufLen);
	virtual void __fastcall SaveToStream(Biff_stream5::TXLSStream* Stream, bool SaveOrig);
public:
	/* TObjLBS.Create */ inline __fastcall TObjLBSListBox() : TObjLBS() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TObjLBSListBox() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TObjLBSComboBox : public TObjLBS
{
	typedef TObjLBS inherited;
	
private:
	System::Word FLineCount;
	System::Word FComboStyle;
	System::Word FUnknown;
	
public:
	__fastcall TObjLBSComboBox();
	virtual int __fastcall Size(bool OrigSize);
	virtual int __fastcall LoadFromBuf(System::Sysutils::PByteArray Buf, int BufLen);
	virtual void __fastcall SaveToStream(Biff_stream5::TXLSStream* Stream, bool SaveOrig);
	__property System::Word ComboStyle = {read=FComboStyle, write=FComboStyle, nodefault};
	__property System::Word LineCount = {read=FLineCount, write=FLineCount, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TObjLBSComboBox() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShapeControlListBox : public TShapeControl
{
	typedef TShapeControl inherited;
	
	
private:
	typedef System::DynamicArray<System::Byte> _TShapeControlListBox__1;
	
	typedef System::DynamicArray<System::Byte> _TShapeControlListBox__2;
	
	typedef System::DynamicArray<System::Byte> _TShapeControlListBox__3;
	
	
private:
	System::Word __fastcall GetSelectedEntry();
	void __fastcall SetSelectedEntry(const System::Word Value);
	
protected:
	bool FIsComboBox;
	bool FIsComboBoxAutoFilter;
	Biff_recsii5::TObjSBS FSBS;
	_TShapeControlListBox__1 FSBSFormula;
	_TShapeControlListBox__2 FSBSFormulaOrig;
	TObjLBS* FLBS;
	_TShapeControlListBox__3 FMacroFormula;
	bool FChanged;
	
public:
	__fastcall TShapeControlListBox(int ObjId, Biff_eschertypes5::TMSOShapeType ST);
	__fastcall virtual ~TShapeControlListBox();
	virtual void __fastcall Assign(TShapeOutsideMso* Shape);
	virtual void __fastcall Read(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	virtual void __fastcall Write(Biff_stream5::TXLSStream* Stream);
	virtual bool __fastcall ParseOBJ(Biff_recordstorage5::TBaseRecordStorage* OBJ);
	void __fastcall NameIndexChanged(int Delta);
	void __fastcall GetDestCell(int &Col, int &Row);
	void __fastcall SetDestCell(int Col, int Row);
	void __fastcall GetSourceArea(int &Sheet, int &Col1, int &Row1, int &Col2, int &Row2);
	void __fastcall SetSourceArea(int Sheet, int Col1, int Row1, int Col2, int Row2);
	void __fastcall GetSourceFmla(Biff_utils5::TDynByteArray &Fmla);
	bool __fastcall HasSourceArea();
	bool __fastcall HasDestCell();
	__property bool IsComboBox = {read=FIsComboBox, write=FIsComboBox, nodefault};
	__property bool IsComboBoxAutoFilter = {read=FIsComboBoxAutoFilter, write=FIsComboBoxAutoFilter, nodefault};
	__property System::Word SelectedIndex = {read=GetSelectedEntry, write=SetSelectedEntry, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShapeControlComboBox : public TShapeControlListBox
{
	typedef TShapeControlListBox inherited;
	
private:
	bool __fastcall GetIsAutoFilter();
	void __fastcall SetIsAutoFilter(bool Value);
	
public:
	__fastcall TShapeControlComboBox(int ObjId, Biff_eschertypes5::TMSOShapeType ST);
	__property bool IsAutoFilter = {read=GetIsAutoFilter, write=SetIsAutoFilter, nodefault};
public:
	/* TShapeControlListBox.Destroy */ inline __fastcall virtual ~TShapeControlComboBox() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShapeOutsideMsoBaseTextMacro : public TShapeOutsideMsoBaseText
{
	typedef TShapeOutsideMsoBaseText inherited;
	
	
private:
	typedef System::DynamicArray<System::Byte> _TShapeOutsideMsoBaseTextMacro__1;
	
	
protected:
	Biff_names5::TInternalNames* FInternalNames;
	_TShapeOutsideMsoBaseTextMacro__1 FMacroFormula;
	
public:
	__fastcall TShapeOutsideMsoBaseTextMacro(int ObjId, Biff_eschertypes5::TMSOShapeType ST, Biff_names5::TInternalNames* InternalNames);
	bool __fastcall SetMacro(System::UnicodeString Value);
	System::UnicodeString __fastcall GetMacro();
	void __fastcall NameIndexChanged(int Delta);
public:
	/* TShapeOutsideMsoBaseText.Destroy */ inline __fastcall virtual ~TShapeOutsideMsoBaseTextMacro() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShapeControlButton : public TShapeOutsideMsoBaseTextMacro
{
	typedef TShapeOutsideMsoBaseTextMacro inherited;
	
public:
	__fastcall TShapeControlButton(int ObjId, Biff_names5::TInternalNames* InternalNames);
	virtual void __fastcall Write(Biff_stream5::TXLSStream* Stream);
	virtual bool __fastcall ParseOBJ(Biff_recordstorage5::TBaseRecordStorage* OBJ);
public:
	/* TShapeOutsideMsoBaseText.Destroy */ inline __fastcall virtual ~TShapeControlButton() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShapeControlCheckBox : public TShapeOutsideMsoBaseTextMacro
{
	typedef TShapeOutsideMsoBaseTextMacro inherited;
	
	
private:
	typedef System::DynamicArray<System::Byte> _TShapeControlCheckBox__1;
	
	typedef System::DynamicArray<System::Byte> _TShapeControlCheckBox__2;
	
	typedef System::DynamicArray<System::Byte> _TShapeControlCheckBox__3;
	
	
protected:
	_TShapeControlCheckBox__1 FCBLS;
	_TShapeControlCheckBox__2 FCBLSFMLA;
	_TShapeControlCheckBox__3 FCBLSDATA;
	System::Word __fastcall GetState();
	void __fastcall SetState(const System::Word Value);
	
public:
	__fastcall TShapeControlCheckBox(int ObjId, Biff_names5::TInternalNames* InternalNames);
	virtual void __fastcall Write(Biff_stream5::TXLSStream* Stream);
	virtual bool __fastcall ParseOBJ(Biff_recordstorage5::TBaseRecordStorage* OBJ);
	bool __fastcall HasDestCell();
	void __fastcall GetDestCell(int &Col, int &Row);
	void __fastcall SetDestCell(int Col, int Row);
	__property System::Word State = {read=GetState, write=SetState, nodefault};
public:
	/* TShapeOutsideMsoBaseText.Destroy */ inline __fastcall virtual ~TShapeControlCheckBox() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShapeControlRadioButton : public TShapeOutsideMsoBaseTextMacro
{
	typedef TShapeOutsideMsoBaseTextMacro inherited;
	
	
private:
	typedef System::DynamicArray<System::Byte> _TShapeControlRadioButton__1;
	
	typedef System::DynamicArray<System::Byte> _TShapeControlRadioButton__2;
	
	typedef System::DynamicArray<System::Byte> _TShapeControlRadioButton__3;
	
	typedef System::DynamicArray<System::Byte> _TShapeControlRadioButton__4;
	
	typedef System::DynamicArray<System::Byte> _TShapeControlRadioButton__5;
	
	
protected:
	_TShapeControlRadioButton__1 FCBLS;
	_TShapeControlRadioButton__2 FRBO;
	_TShapeControlRadioButton__3 FCBLSDATA;
	_TShapeControlRadioButton__4 FCBLSFMLA;
	_TShapeControlRadioButton__5 FRBODATA;
	System::Word __fastcall GetState();
	void __fastcall SetState(const System::Word Value);
	
public:
	__fastcall TShapeControlRadioButton(int ObjId, Biff_names5::TInternalNames* InternalNames);
	virtual void __fastcall Write(Biff_stream5::TXLSStream* Stream);
	virtual bool __fastcall ParseOBJ(Biff_recordstorage5::TBaseRecordStorage* OBJ);
	bool __fastcall HasDestCell();
	void __fastcall GetDestCell(int &Col, int &Row);
	void __fastcall SetDestCell(int Col, int Row);
	__property System::Word State = {read=GetState, write=SetState, nodefault};
public:
	/* TShapeOutsideMsoBaseText.Destroy */ inline __fastcall virtual ~TShapeControlRadioButton() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShapeControlScrollBar : public TShapeOutsideMso
{
	typedef TShapeOutsideMso inherited;
	
	
private:
	typedef System::DynamicArray<System::Byte> _TShapeControlScrollBar__1;
	
	typedef System::DynamicArray<System::Byte> _TShapeControlScrollBar__2;
	
	typedef System::DynamicArray<System::Byte> _TShapeControlScrollBar__3;
	
	typedef System::DynamicArray<System::Byte> _TShapeControlScrollBar__4;
	
	
private:
	void __fastcall SetIncChange(const int Value);
	void __fastcall SetMaxValue(const int Value);
	void __fastcall SetMinValue(const int Value);
	void __fastcall SetPageChange(const int Value);
	void __fastcall SetValue(const int Value);
	int __fastcall GetIncChange();
	int __fastcall GetMaxValue();
	int __fastcall GetMinValue();
	int __fastcall GetPageChange();
	int __fastcall GetValue();
	
protected:
	_TShapeControlScrollBar__1 FSBS;
	_TShapeControlScrollBar__2 FSBSFormula;
	_TShapeControlScrollBar__3 FSBSFormulaOrig;
	_TShapeControlScrollBar__4 FMacroFormula;
	
public:
	__fastcall TShapeControlScrollBar(int ObjId);
	virtual void __fastcall Write(Biff_stream5::TXLSStream* Stream);
	virtual bool __fastcall ParseOBJ(Biff_recordstorage5::TBaseRecordStorage* OBJ);
	void __fastcall GetDestCell(int &Col, int &Row);
	virtual void __fastcall Assign(TShapeOutsideMso* Shape);
	virtual void __fastcall Read(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	__property int Value = {read=GetValue, write=SetValue, nodefault};
	__property int MinValue = {read=GetMinValue, write=SetMinValue, nodefault};
	__property int MaxValue = {read=GetMaxValue, write=SetMaxValue, nodefault};
	__property int IncChange = {read=GetIncChange, write=SetIncChange, nodefault};
	__property int PageChange = {read=GetPageChange, write=SetPageChange, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TShapeControlScrollBar() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 SHP_NOTE_OPTION_ALWAYS_VISIBLE = System::Int8(0x2);
}	/* namespace Biff_escherctrlobj5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_ESCHERCTRLOBJ5)
using namespace Biff_escherctrlobj5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_escherctrlobj5HPP
