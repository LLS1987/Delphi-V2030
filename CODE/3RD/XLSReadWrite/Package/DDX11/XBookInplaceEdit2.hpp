// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookInplaceEdit2.pas' rev: 35.00 (Windows)

#ifndef Xbookinplaceedit2HPP
#define Xbookinplaceedit2HPP

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
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Math.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12DataSST5.hpp>
#include <Xc12Manager5.hpp>
#include <Xc12Common5.hpp>
#include <XLSUtils5.hpp>
#include <XLSMMU5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSTools5.hpp>
#include <XLSFormulaTypes5.hpp>
#include <XLSEncodeFmla5.hpp>
#include <XLSDecodeFmla5.hpp>
#include <XBookUtils2.hpp>
#include <XBook_System_2.hpp>
#include <XBookSkin2.hpp>
#include <XBookWindows2.hpp>
#include <XSSIEDefs.hpp>
#include <XSSIEUtils.hpp>
#include <XSSIEDocProps.hpp>
#include <XSSIELogParas.hpp>
#include <XSSIEEditor.hpp>
#include <XSSIEKeys.hpp>
#include <XSSIECharRun.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbookinplaceedit2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXBookIECellAreaHelper;
class DELPHICLASS TXBookInplaceEditor;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TXBookEditorCloseEvent)(System::TObject* ASender, System::Word AKey);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXBookIECellAreaHelper : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xssieutils::TAXWEditorArea* FEditorArea;
	int FDispCol;
	int FDispRow;
	Xlsutils5::TDynIntegerArray FDispCols;
	Xlsutils5::TDynIntegerArray FDispRows;
	Xssiedocprops::TAXWPapTextAlign FAlignment;
	int FOrigLeft;
	int FOrigTop;
	
public:
	__fastcall TXBookIECellAreaHelper(Xssieutils::TAXWEditorArea* AEditorArea);
	void __fastcall CalcExpand(const int ATextWidth, const int ATextHeight);
	__property Xssiedocprops::TAXWPapTextAlign Alignment = {read=FAlignment, write=FAlignment, nodefault};
	__property int OrigLeft = {read=FOrigLeft, write=FOrigLeft, nodefault};
	__property int OrigTop = {read=FOrigTop, write=FOrigTop, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXBookIECellAreaHelper() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXBookInplaceEditor : public Xssieeditor::TAXWWinEditor
{
	typedef Xssieeditor::TAXWWinEditor inherited;
	
private:
	Xlscellmmu5::PXLSCellItem __fastcall GetCell();
	Xssieeditor::TAXWTextChangedEvent __fastcall GetTextChangedEvent();
	void __fastcall SetTextChangedEvent(const Xssieeditor::TAXWTextChangedEvent Value);
	System::Classes::TNotifyEvent __fastcall GetOnCharFmtChanged();
	void __fastcall SetOnCharFmtChanged(const System::Classes::TNotifyEvent Value);
	Xssiedocprops::TAXWCHP* __fastcall GetCHP();
	Xssiedocprops::TAXWPAP* __fastcall GetPAP();
	
protected:
	bool FIsVisible;
	Xc12manager5::TXc12Manager* FManager;
	TXBookEditorCloseEvent FCloseEvent;
	int FSheetIndex;
	int FCol;
	int FRow;
	Xlscellmmu5::TXLSCellItem FEditCell;
	bool FCRLFMode;
	Xssieutils::TAXWEditorArea* FEditorArea;
	TXBookIECellAreaHelper* FAreaHelper;
	virtual System::UnicodeString __fastcall GetText();
	void __fastcall CalcEditorArea(const int AX, const int AY, const bool AWrapText);
	void __fastcall Xc12FontToCHPX(Xc12datastylesheet5::TXc12Font* AFont, Xssiedocprops::TAXWCHPX* ACHPX);
	void __fastcall CHPToXc12Font(Xssiedocprops::TAXWCHP* ACHP, Xc12datastylesheet5::TXc12Font* AFont);
	void __fastcall CHPXToXc12Font(Xssiedocprops::TAXWCHPX* ACHPX, Xc12datastylesheet5::TXc12Font* AFont);
	void __fastcall AddFormatted(const int ASSTIndex, Xc12datastylesheet5::TXc12Font* ADefaultFont);
	void __fastcall DoShow();
	void __fastcall EditorBeforePaint(System::TObject* ASender);
	void __fastcall EditorAfterPaint(System::TObject* ASender);
	System::UnicodeString __fastcall PrepareTextBefore(const System::UnicodeString AText);
	System::UnicodeString __fastcall PrepareTextAfter(const System::UnicodeString AText);
	
public:
	__fastcall TXBookInplaceEditor(Xbookwindows2::TXSSWindow* AParent, Xc12manager5::TXc12Manager* AManager, System::Sysutils::PWordArray ACodepage);
	__fastcall virtual ~TXBookInplaceEditor();
	void __fastcall SetColsRows(const Xlsutils5::TDynIntegerArray ADispCols, const Xlsutils5::TDynIntegerArray ADispRows, const int ADispCol, const int ADispColCount, const int ADispRow, const int ADispRowCount);
	void __fastcall SetCellPos(const int ASheetIndex, const int ACol, const int ARow);
	void __fastcall BeginAddRefs();
	void __fastcall AddRefText(const System::UnicodeString AText)/* overload */;
	int __fastcall AddRefText(const System::UnicodeString AText, const unsigned AColor)/* overload */;
	void __fastcall EndAddRefs();
	void __fastcall UpdateRefText(const int AIndex, const System::UnicodeString AText);
	bool __fastcall LastCharIsOperator();
	bool __fastcall IsFormatted();
	void __fastcall GetFormatted(Xc12datastylesheet5::TXc12DynFontRunArray &AFontRuns);
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	void __fastcall Command(Xssiekeys::TAXWCommand ACmd);
	void __fastcall ClearCharFormatting();
	System::UnicodeString __fastcall Show(const int AX, const int AY, const int AWidth, const int AHeight, bool AssignCellValue);
	void __fastcall Hide();
	bool __fastcall IsFormula();
	__property Xlscellmmu5::PXLSCellItem Cell = {read=GetCell};
	__property int SheetIndex = {read=FSheetIndex, nodefault};
	__property int Col = {read=FCol, nodefault};
	__property int Row = {read=FRow, nodefault};
	__property Xssiedocprops::TAXWPAP* PAP = {read=GetPAP};
	__property Xssiedocprops::TAXWCHP* CHP = {read=GetCHP};
	__property TXBookEditorCloseEvent OnClose = {read=FCloseEvent, write=FCloseEvent};
	__property Xssieeditor::TAXWTextChangedEvent OnTextChanged = {read=GetTextChangedEvent, write=SetTextChangedEvent};
	__property System::Classes::TNotifyEvent OnCharFmtChanged = {read=GetOnCharFmtChanged, write=SetOnCharFmtChanged};
};


//-- var, const, procedure ---------------------------------------------------
#define EDITREF_TAG_START L"<!"
#define EDITREF_TAG_END L"!>"
}	/* namespace Xbookinplaceedit2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKINPLACEEDIT2)
using namespace Xbookinplaceedit2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbookinplaceedit2HPP
