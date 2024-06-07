// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSBook2.pas' rev: 35.00 (Windows)

#ifndef Xlsbook2HPP
#define Xlsbook2HPP

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
#include <Winapi.Messages.hpp>
#include <Winapi.Windows.hpp>
#include <System.Math.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Contnrs.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ActnList.hpp>
#include <Winapi.UxTheme.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12Manager5.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataComments5.hpp>
#include <XLSUtils5.hpp>
#include <XLSCellAreas5.hpp>
#include <XLSSheetData5.hpp>
#include <XLSReadWriteII5.hpp>
#include <XLSMMU5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSCmdFormat5.hpp>
#include <XLSEvaluateFmla5.hpp>
#include <XSSIEKeys.hpp>
#include <XBookSkin2.hpp>
#include <XBookSheet2.hpp>
#include <XBookPaint2.hpp>
#include <XBookOptions2.hpp>
#include <XBookUtils2.hpp>
#include <XBookHintWindow2.hpp>
#include <XBookPaintLayers2.hpp>
#include <XBookComponent2.hpp>
#include <XBookPaintGDI2.hpp>
#include <XBookSysVar2.hpp>
#include <XBookWindows2.hpp>
#include <XBookInplaceEdit2.hpp>
#include <XBookUI2.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsbook2
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSSpreadSheet;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXSSCommand : unsigned char { xsscFmtFontBold, xsscFmtFontItalic, xsscFmtFontUnderline, xsscFmtFontName, xsscFmtFontSize, xsscFmtFontColor, xsscFmtAlignHorizLeft, xsscFmtAlignHorizCenter, xsscFmtAlignHorizRight, xsscFmtAlignVertTop, xsscFmtAlignVertMiddle, xsscFmtAlignVertBottom, xsscFmtRotate, xsscFmtIndent, xsscFmtWrapText, xsscFmtCellColor, xsscFmtBorderThinLeft, xsscFmtBorderThinRight, xsscFmtBorderThinTop, xsscFmtBorderThinBottom, xsscFmtBorderThinOutline, xsscFmtBorderThinInside, xsscFmtBorderNoBorder, xsscMergeCells, xsscUnMergeCells, xsscEditCopy, xsscEditCut, xsscEditPaste, xsscEditPasteSpecial };

class PASCALIMPLEMENTATION TXLSSpreadSheet : public Xbookcomponent2::TXSSComponent
{
	typedef Xbookcomponent2::TXSSComponent inherited;
	
private:
	Xc12manager5::TXc12Manager* FManager;
	Xlsreadwriteii5::TXLSReadWriteII5* FXLS;
	Xbookui2::TXLSBookUI* FUI;
	Xbookwindows2::TXSSShiftKeys FShiftState;
	Xbookwindows2::TXSSKey FLastKey;
	bool FDoRepaint;
	bool FComponentIsValid;
	bool FDelayedRead;
	int FX1;
	int FY1;
	int FX2;
	int FY2;
	int FCX1;
	int FCY1;
	int FCX2;
	int FCY2;
	Xbookoptions2::TXLSBookOptions* FOptions;
	Xbooksheet2::TXLSBookSheet* FXSSSheet;
	int FPanesXSplit;
	int FPanesYSplit;
	bool FMultilayer;
	Xlssheetdata5::TXLSWorksheet* FXLSSheet;
	Xbookskin2::TXBookSkinStyle FPendingSkinStyle;
	Xlsutils5::TIntegerEvent FAfterSheetChangedEvent;
	Xbookutils2::TXColRowEvent FCellChangeEvent;
	System::Classes::TNotifyEvent FSelectionChangedEvent;
	Xbookutils2::TXStringEvent FHyperlinkClickEvent;
	Xbookutils2::TXNotifyEvent FNotificationEvent;
	Xbookutils2::TXBooleanEvent FEditorOpenEvent;
	Xbookutils2::TXBooleanEvent FEditorCloseEvent;
	System::Classes::TNotifyEvent FEditorDisableFmtEvent;
	System::Classes::TNotifyEvent FIECharFmtEvent;
	System::UnicodeString __fastcall GetFilename();
	void __fastcall SetFilename(const System::UnicodeString Value);
	void __fastcall CreateTheComponent();
	System::UnicodeString __fastcall GetComponentVersion();
	void __fastcall SetComponentVersion(const System::UnicodeString Value);
	Xlssheetdata5::TXLSWorksheet* __fastcall GetXLSSheet();
	bool __fastcall GetReadOnly();
	void __fastcall SetReadOnly(const bool Value);
	Xbookskin2::TXBookSkinStyle __fastcall GetSkinStyle();
	void __fastcall SetSkinStyle(const Xbookskin2::TXBookSkinStyle Value);
	Xbooksheet2::TXLSBookSheet* __fastcall GetXSSSheet();
	Xbookutils2::TXColRowEvent __fastcall GetOnCellChanged();
	void __fastcall SetOnCellChanged(const Xbookutils2::TXColRowEvent Value);
	void __fastcall SetEditorCloseEvent(const Xbookutils2::TXBooleanEvent Value);
	void __fastcall SetEditorOpenEvent(const Xbookutils2::TXBooleanEvent Value);
	void __fastcall SetHyperlinkClickEvent(const Xbookutils2::TXStringEvent Value);
	void __fastcall SetEditorDisableFmt(const System::Classes::TNotifyEvent Value);
	System::Classes::TNotifyEvent __fastcall GetSelectionChanged();
	void __fastcall SetSelectionChanged(const System::Classes::TNotifyEvent Value);
	Xbookutils2::TXNotifyEvent __fastcall GetNotificationEvent();
	void __fastcall SetNotificationEvent(const Xbookutils2::TXNotifyEvent Value);
	Xlsevaluatefmla5::TUserFunctionEvent __fastcall GetUserFunctionEvent();
	void __fastcall SetUserFunctionEvent(const Xlsevaluatefmla5::TUserFunctionEvent Value);
	
protected:
	void __fastcall CalcMetrics();
	virtual void __fastcall CreateHandle();
	void __fastcall TabClickEvent(System::TObject* Sender, int TabIndex);
	void __fastcall XLSSheetChanged(const int ASheetIndex);
	void __fastcall Int_Clear();
	void __fastcall XLSAfterRead(System::TObject* ASender);
	void __fastcall XLSChanged(int SheetIndex);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyUp(Winapi::Messages::TWMKey &Message);
	
public:
	__fastcall virtual TXLSSpreadSheet(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TXLSSpreadSheet();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall Command(const TXSSCommand ACommand)/* overload */;
	void __fastcall Command(const TXSSCommand ACommand, const bool AValue)/* overload */;
	void __fastcall Command(const TXSSCommand ACommand, const int AValue)/* overload */;
	void __fastcall Command(const TXSSCommand ACommand, const double AValue)/* overload */;
	void __fastcall Command(const TXSSCommand ACommand, const System::UnicodeString AValue)/* overload */;
	void __fastcall Command(const TXSSCommand ACommand, const Xc12utils5::TXc12Color &AValue)/* overload */;
	virtual void __fastcall Paint();
	void __fastcall Read();
	void __fastcall Write();
	void __fastcall Clear();
	void __fastcall LoadFromStream(System::Classes::TStream* AStream);
	void __fastcall SetSheet(const int ASheetIndex);
	void __fastcall SetCursorPos(int SheetIndex, int Col, int Row);
	void __fastcall MergeCellsSelectedAreas();
	void __fastcall InvalidateSheet();
	void __fastcall InvalidateAndReloadSheet();
	void __fastcall InvalidateArea(int SheetIndex, int Col1, int Row1, int Col2, int Row2)/* overload */;
	void __fastcall InvalidateArea(Xlscellareas5::TCellArea* Area)/* overload */;
	void __fastcall InvalidateRows();
	void __fastcall InvalidateCell(int SheetIndex, int Col, int Row);
	__property Xlssheetdata5::TXLSWorksheet* XLSSheet = {read=GetXLSSheet};
	__property Xbooksheet2::TXLSBookSheet* XSSSheet = {read=GetXSSSheet};
	__property Xbookui2::TXLSBookUI* UI = {read=FUI};
	
__published:
	__property System::UnicodeString ComponentVersion = {read=GetComponentVersion, write=SetComponentVersion};
	__property Xlsreadwriteii5::TXLSReadWriteII5* XLS = {read=FXLS};
	__property System::UnicodeString Filename = {read=GetFilename, write=SetFilename};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, nodefault};
	__property Xbookoptions2::TXLSBookOptions* Options = {read=FOptions};
	__property Xbookskin2::TXBookSkinStyle SkinStyle = {read=GetSkinStyle, write=SetSkinStyle, nodefault};
	__property Xlsutils5::TIntegerEvent OnAfterSheetChange = {read=FAfterSheetChangedEvent, write=FAfterSheetChangedEvent};
	__property Xbookutils2::TXColRowEvent OnCellChanged = {read=GetOnCellChanged, write=SetOnCellChanged};
	__property System::Classes::TNotifyEvent OnSelectionChanged = {read=GetSelectionChanged, write=SetSelectionChanged};
	__property Xbookutils2::TXBooleanEvent OnEditorOpen = {read=FEditorOpenEvent, write=SetEditorOpenEvent};
	__property Xbookutils2::TXBooleanEvent OnEditorClose = {read=FEditorCloseEvent, write=SetEditorCloseEvent};
	__property System::Classes::TNotifyEvent OnEditorDisableFmt = {read=FEditorDisableFmtEvent, write=SetEditorDisableFmt};
	__property Xbookutils2::TXStringEvent OnHyperlinkClick = {read=FHyperlinkClickEvent, write=SetHyperlinkClickEvent};
	__property System::Classes::TNotifyEvent OnIECharFormatChanged = {read=FIECharFmtEvent, write=FIECharFmtEvent};
	__property Xbookutils2::TXNotifyEvent OnNotification = {read=GetNotificationEvent, write=SetNotificationEvent};
	__property Xlsevaluatefmla5::TUserFunctionEvent OnUserFunction = {read=GetUserFunctionEvent, write=SetUserFunctionEvent};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Constraints;
	__property UseDockManager = {default=1};
	__property DockSite = {default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Visible = {default=1};
	__property OnCanResize;
	__property OnClick;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGetSiteInfo;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
public:
	/* TWinControl.CreateParented */ inline __fastcall TXLSSpreadSheet(HWND ParentWindow) : Xbookcomponent2::TXSSComponent(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define XSSCommandBorder (System::Set<TXSSCommand, TXSSCommand::xsscFmtFontBold, TXSSCommand::xsscEditPasteSpecial>() << TXSSCommand::xsscFmtBorderThinLeft << TXSSCommand::xsscFmtBorderThinRight << TXSSCommand::xsscFmtBorderThinTop << TXSSCommand::xsscFmtBorderThinBottom << TXSSCommand::xsscFmtBorderThinOutline << TXSSCommand::xsscFmtBorderThinInside << TXSSCommand::xsscFmtBorderNoBorder )
}	/* namespace Xlsbook2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSBOOK2)
using namespace Xlsbook2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsbook2HPP
