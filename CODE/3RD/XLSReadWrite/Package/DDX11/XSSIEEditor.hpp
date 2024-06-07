// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XSSIEEditor.pas' rev: 35.00 (Windows)

#ifndef XssieeditorHPP
#define XssieeditorHPP

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
#include <System.Types.hpp>
#include <System.Math.hpp>
#include <XBookPaintGDI2.hpp>
#include <XBookWindows2.hpp>
#include <XSSIERenderTextIE.hpp>
#include <XSSIEDefs.hpp>
#include <XSSIEUtils.hpp>
#include <XSSIEKeys.hpp>
#include <XSSIEDocProps.hpp>
#include <XSSIECharRun.hpp>
#include <XSSIELogPhyPosition.hpp>
#include <XSSIELogParas.hpp>
#include <XSSIELogEditor.hpp>
#include <XSSIEGDIText.hpp>
#include <XSSIEPhyRow.hpp>
#include <XSSIEPaginate.hpp>
#include <XSSIECaretRow.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xssieeditor
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAXWEditor;
class DELPHICLASS TAXWWinEditor;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TWinCaretAction : unsigned char { wcaShow, wcaHide, wcaPos };

typedef void __fastcall (__closure *TWinCaretEvent)(const TWinCaretAction AAction, const int AX, const int AY, const int AHeight);

typedef void __fastcall (__closure *TAXWTextChangedEvent)(const System::UnicodeString AText);

class PASCALIMPLEMENTATION TAXWEditor : public Xssielogeditor::TAXWLogDocEditor
{
	typedef Xssielogeditor::TAXWLogDocEditor inherited;
	
private:
	System::UnicodeString __fastcall GetText();
	void __fastcall SetText(const System::UnicodeString Value);
	double __fastcall GetTextHeight();
	double __fastcall GetTextWidth();
	Xssiedocprops::TAXWCHP* __fastcall GetCHP();
	Xssiedocprops::TAXWPAP* __fastcall GetPAP();
	void __fastcall SetBgColor(const unsigned Value);
	void __fastcall SetNoFormatting(const bool Value);
	unsigned __fastcall GetBgColor();
	
protected:
	Xbookpaintgdi2::TAXWGDI* FGDI;
	Xssieutils::TAXWClientArea* FArea;
	Xssieutils::TAXWVertAlign FVertAlign;
	bool FNoFormatting;
	bool FFormulaMode;
	Xssierendertextie::TAXWTextRender* FTextRender;
	Xssiepaginate::TAXWPaginator* FPaginator;
	Xssiegditext::TAXWTextPrint* FTextPrint;
	Xssiecaretrow::TAXWCaretRowEditor* FCaretRow;
	Xssiedocprops::TAXWCHP* FCHP;
	Xssiedocprops::TAXWCHP* FPrevCHP;
	bool FIsUpdating;
	TAXWTextChangedEvent FTextChangedEvent;
	System::Classes::TNotifyEvent FBeforePaintEvent;
	System::Classes::TNotifyEvent FAfterPaintEvent;
	TWinCaretEvent FCaretEvent;
	System::Classes::TNotifyEvent FCharFmtChangedEvent;
	System::Classes::TNotifyEvent FDebugEvent;
	System::UnicodeString FDebugText;
	void __fastcall DoParaHeight(Xssielogparas::TAXWLogPara* APara, double &Y);
	virtual void __fastcall Paginate();
	virtual void __fastcall PaginateCaretPara();
	void __fastcall CaretPosChanged(System::TObject* ASender);
	double __fastcall ParasHeight();
	void __fastcall CheckCharFormatChanged();
	void __fastcall Debug(const System::UnicodeString AText);
	
public:
	__fastcall TAXWEditor(Xbookpaintgdi2::TAXWGDI* AGDI, Xssieutils::TAXWClientArea* AArea);
	__fastcall virtual ~TAXWEditor();
	void __fastcall PaintText();
	void __fastcall CommitText();
	void __fastcall KeyPress(System::WideChar &Key);
	HIDESBASE void __fastcall BeginUpdate();
	HIDESBASE void __fastcall EndUpdate();
	void __fastcall Command(Xssiekeys::TAXWCommand ACmd);
	void __fastcall FillCharProps();
	void __fastcall DEBUG_DumpCharRuns(System::Classes::TStrings* ALines);
	__property double TextWidth = {read=GetTextWidth};
	__property double TextHeight = {read=GetTextHeight};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property unsigned BgColor = {read=GetBgColor, write=SetBgColor, nodefault};
	__property Xssieutils::TAXWVertAlign VertAlign = {read=FVertAlign, write=FVertAlign, nodefault};
	__property bool NoFormatting = {read=FNoFormatting, write=SetNoFormatting, nodefault};
	__property bool SetNoFormattingOnFirstEqual = {read=FFormulaMode, write=FFormulaMode, nodefault};
	__property Xssiedocprops::TAXWPAP* CaretPAP = {read=GetPAP};
	__property Xssiedocprops::TAXWCHP* CaretCHP = {read=GetCHP};
	__property System::Classes::TNotifyEvent OnBeforePaint = {read=FBeforePaintEvent, write=FBeforePaintEvent};
	__property System::Classes::TNotifyEvent OnAfterPaint = {read=FAfterPaintEvent, write=FAfterPaintEvent};
	__property TWinCaretEvent OnCaret = {read=FCaretEvent, write=FCaretEvent};
	__property TAXWTextChangedEvent OnTextChanged = {read=FTextChangedEvent, write=FTextChangedEvent};
	__property System::Classes::TNotifyEvent OnCharFmtChanged = {read=FCharFmtChangedEvent, write=FCharFmtChangedEvent};
	__property System::Classes::TNotifyEvent OnDebug = {read=FDebugEvent, write=FDebugEvent};
	__property System::UnicodeString DebugText = {read=FDebugText};
};


class PASCALIMPLEMENTATION TAXWWinEditor : public Xbookwindows2::TXSSClientWindow
{
	typedef Xbookwindows2::TXSSClientWindow inherited;
	
protected:
	TAXWEditor* FEditor;
	System::Sysutils::TWordArray *FCodepage;
	System::Classes::TStringList* FDebugText;
	System::Classes::TNotifyEvent FDebugEvent;
	void __fastcall UpdateWinCaret(const TWinCaretAction AAction, const int AX, const int AY, const int AHeight);
	void __fastcall MoveAreaHoriz(const int ADist);
	void __fastcall DoDebug();
	virtual System::UnicodeString __fastcall GetText();
	virtual void __fastcall SetText(const System::UnicodeString Value);
	
public:
	__fastcall TAXWWinEditor(Xbookwindows2::TXSSWindow* AParent, Xssieutils::TAXWClientArea* AArea, System::Sysutils::PWordArray ACodepage);
	__fastcall virtual ~TAXWWinEditor();
	virtual void __fastcall Paint();
	virtual void __fastcall SetFocus();
	virtual void __fastcall KillFocus();
	virtual void __fastcall KeyPress(System::WideChar Key);
	System::UnicodeString __fastcall PosAsString();
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property System::Classes::TStringList* DebugText = {read=FDebugText};
	__property System::Classes::TNotifyEvent OnDebug = {read=FDebugEvent, write=FDebugEvent};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xssieeditor */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XSSIEEDITOR)
using namespace Xssieeditor;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XssieeditorHPP
