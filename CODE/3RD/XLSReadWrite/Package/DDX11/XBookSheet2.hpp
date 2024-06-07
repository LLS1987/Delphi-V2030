// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBookSheet2.pas' rev: 35.00 (Windows)

#ifndef Xbooksheet2HPP
#define Xbooksheet2HPP

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
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Winapi.Windows.hpp>
#include <System.Math.hpp>
#include <System.Contnrs.hpp>
#include <System.StrUtils.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12Manager5.hpp>
#include <Xc12DataWorkbook5.hpp>
#include <XLSCondFormat5.hpp>
#include <XLSHyperlinks5.hpp>
#include <XLSUtils5.hpp>
#include <XLSCellAreas5.hpp>
#include <Xc12DataWorksheet5.hpp>
#include <Xc12DataAutofilter5.hpp>
#include <XLSMMU5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSSheetData5.hpp>
#include <XLSDrawing5.hpp>
#include <XLSComment5.hpp>
#include <XLSMergedCells5.hpp>
#include <XLSPivotTables5.hpp>
#include <FormPivotTable.hpp>
#include <XBookSkin2.hpp>
#include <XBookOptions2.hpp>
#include <XBookRows2.hpp>
#include <XBookColumns2.hpp>
#include <XBookSysVar2.hpp>
#include <XBookTabSet2.hpp>
#include <XBookRects2.hpp>
#include <XBookPaintGDI2.hpp>
#include <XBookWindows2.hpp>
#include <XBookPaint2.hpp>
#include <XBookUtils2.hpp>
#include <XBook_System_2.hpp>
#include <XBookHeaders2.hpp>
#include <XBookButtons2.hpp>
#include <XBookComponent2.hpp>
#include <XBookEditSelArea2.hpp>
#include <XBookRefEdit2.hpp>
#include <XBookTypes2.hpp>
#include <XBookPaintLayers2.hpp>
#include <XBookRichPainter2.hpp>
#include <XBookInplaceEdit2.hpp>
#include <XBookControls2.hpp>
#include <XBookDrawing2.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbooksheet2
{
//-- forward type declarations -----------------------------------------------
struct TCellStyleRec;
struct TCellLineCacheRec;
class DELPHICLASS TCellPaintData;
class DELPHICLASS TXLSBookSheet;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXSSSelectOption : unsigned char { xsoHyperlink, xsoShape, xsoPicture };

typedef System::Set<TXSSSelectOption, TXSSSelectOption::xsoHyperlink, TXSSSelectOption::xsoPicture> TXSSSelectOptions;

enum DECLSPEC_DENUM TCellsToPaint : unsigned char { ctpAll, ctpSelected, ctpInvSelected };

typedef System::StaticArray<void *, 65536> TPointerArray;

enum DECLSPEC_DENUM TCellPaintBorder : unsigned char { cpbLeft, cpbTop, cpbRight, cpbBottom };

enum DECLSPEC_DENUM TCellCorners : unsigned char { ccN, ccS, ccE, ccW };

typedef System::StaticArray<Xc12datastylesheet5::TXc12CellBorderStyle, 4> TCellCorner;

enum DECLSPEC_DENUM TCellStyleFlag : unsigned char { csfHorizOverride, csfTextExpandLeft, csfTextExpandRight, csfComment };

typedef System::Set<TCellStyleFlag, TCellStyleFlag::csfHorizOverride, TCellStyleFlag::csfComment> TCellStyleFlags;

enum DECLSPEC_DENUM TXSSChildWindows : unsigned char { xcwUnknown, xcwSheet, xcwColumns, xcwRows, xcwTopLeft, xcwTabs, xcwVertScroll, xcwHorizScroll, xcwBottomRight, xcwDrawing };

struct DECLSPEC_DRECORD TCellStyleRec
{
public:
	Xlscellmmu5::TXLSCellItem Ref;
	Xc12datastylesheet5::TXc12DXF* DXF;
	Xlscondformat5::TXSSCondFmtResultType CondFmtRes;
	int CondFmtVal;
	unsigned CondFmtColor;
	unsigned ForeColor;
	unsigned BackColor;
	Xc12datastylesheet5::TXc12FillPattern Pattern;
	unsigned RightColor;
	unsigned BottomColor;
	TCellStyleFlags Flags;
	int InMerged;
	Xlshyperlinks5::TXLSHyperlink* Hyperlink;
	TCellCorner StyleNW;
	TCellCorner StyleNE;
	TCellCorner StyleSW;
	TCellCorner StyleSE;
	Xc12datastylesheet5::TDiagLines Diagonal;
	unsigned DiagColor;
	Xc12datastylesheet5::TXc12CellBorderStyle DiagStyle;
};


typedef System::StaticArray<TCellStyleRec, 65536> TCellStyleRecArray;

typedef TCellStyleRecArray *PCellStyleRecArray;

struct DECLSPEC_DRECORD TCellLineCacheRec
{
public:
	Xbooktypes2::TXYRect Pos;
	unsigned PenColor;
	unsigned BackColor;
	Xbookpaintgdi2::TPaintLineStyle Style;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCellPaintData : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TCellLineCacheRec> _TCellPaintData__1;
	
	typedef System::DynamicArray<TCellLineCacheRec> _TCellPaintData__2;
	
	
private:
	TCellStyleRec FCellStyle;
	Xbooktypes2::TXYRect FCellRect;
	Xbooktypes2::TXYRect FPaintRect;
	Xbooktypes2::TXYRect FRightPos;
	Xbooktypes2::TXYRect FBottomPos;
	bool FIsPrinting;
	_TCellPaintData__1 FVertLCache;
	_TCellPaintData__2 FHorizLCache;
	int FLineCacheCount;
	void __fastcall SetIsPrinting(const bool Value);
	
public:
	void __fastcall Clear(int X1, int Y1, int X2, int Y2, const TCellStyleRec &CellStyle);
	void __fastcall Calc(const TCellStyleRec &CSR, Xc12datastylesheet5::TXc12CellBorderStyle Left, Xc12datastylesheet5::TXc12CellBorderStyle Top, Xc12datastylesheet5::TXc12CellBorderStyle Right, Xc12datastylesheet5::TXc12CellBorderStyle Bottom);
	void __fastcall CalcPaintRect(Xc12datastylesheet5::TXc12CellBorderStyle Left, Xc12datastylesheet5::TXc12CellBorderStyle Top, Xc12datastylesheet5::TXc12CellBorderStyle Right, Xc12datastylesheet5::TXc12CellBorderStyle Bottom);
	void __fastcall PaintBorders(Xbookskin2::TXLSBookSkin* Skin, unsigned Right, unsigned Bottom);
	void __fastcall PaintBorderLeft(Xbookskin2::TXLSBookSkin* Skin, unsigned AColor, Xc12datastylesheet5::TXc12CellBorderStyle AStyle);
	void __fastcall PaintBorderTop(Xbookskin2::TXLSBookSkin* Skin, unsigned AColor, Xc12datastylesheet5::TXc12CellBorderStyle AStyle);
	void __fastcall PaintBordersTopLeft(Xbookskin2::TXLSBookSkin* Skin, Xc12datastylesheet5::TXc12BorderPr* ATop, Xc12datastylesheet5::TXc12BorderPr* ALeft);
	void __fastcall PaintCell(Xbookskin2::TXLSBookSkin* Skin);
	void __fastcall PaintDataBar(Xbookskin2::TXLSBookSkin* Skin, const double APercent, const unsigned AColor);
	void __fastcall PaintIcon(Xbookskin2::TXLSBookSkin* Skin, const Xc12dataautofilter5::TXc12IconSetType AIconSet, const int AIndex, const bool ACentre);
	void __fastcall SetCacheSize(int ACols, int ARows);
	void __fastcall PaintLineCache(Xbookskin2::TXLSBookSkin* ASkin);
	void __fastcall PaintDiagonal(Xbookskin2::TXLSBookSkin* ASkin);
	__property bool IsPrinting = {read=FIsPrinting, write=SetIsPrinting, nodefault};
public:
	/* TObject.Create */ inline __fastcall TCellPaintData() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCellPaintData() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TCursorAreaHit : unsigned char { cahNo, cahInside, cahEdge, cahSize };

class PASCALIMPLEMENTATION TXLSBookSheet : public Xbookwindows2::TXSSClientWindow
{
	typedef Xbookwindows2::TXSSClientWindow inherited;
	
private:
	int __fastcall GetLeftCol();
	void __fastcall SetLeftCol(int Value);
	void __fastcall PaintInvalidate();
	int __fastcall GetRightCol();
	void __fastcall SetRightCol(const int Value);
	void __fastcall SetTopRow(int Value);
	int __fastcall GetBottomRow();
	int __fastcall GetTopRow();
	void __fastcall SetBottomRow(int Value);
	
protected:
	Vcl::Controls::TCustomControl* FOwner;
	Xbookpaintlayers2::TXPaintLayers* FLayers;
	Xc12manager5::TXc12Manager* FManager;
	Xlssheetdata5::TXLSWorksheet* FXLSSheet;
	Xlssheetdata5::TXLSWorkbook* FWorkbook;
	Xlscellmmu5::TXLSCellMMU* FCells;
	Xbookoptions2::TXLSBookOptions* FOptions;
	TXSSSelectOptions FSelectOptions;
	Xbookrects2::TCornerRect* FTopLeft;
	Xbookrects2::TCornerRect* FTopTopLeft;
	Xbookrects2::TCornerRect* FBottomRight;
	Xbookrows2::TXLSBookRows* FRows;
	Xbookcolumns2::TXLSBookColumns* FColumns;
	Xbooktabset2::TXTabSet* FTabs;
	Xbookcontrols2::TXLSScrollBar* FVScroll;
	Xbookcontrols2::TXLSScrollBar* FHScroll;
	Xbookrects2::TSplitterHandle* FHSplit;
	Xbookrects2::TSplitterHandle* FVSplit;
	Xbookrects2::TSplitterHandle* FCSplit;
	bool FHideHSplitter;
	bool FHideVSplitter;
	Xbookbuttons2::TGroupButtons* FColGroupBtns;
	Xbookbuttons2::TGroupButtons* FRowGroupBtns;
	int FLastX;
	int FLastDragTab;
	Xc12utils5::TXLSCellArea FSheetArea;
	Xbooktypes2::TXYRect FCursorXY;
	Xbooktypes2::TXYRect FCursorXYMargO;
	Xbooktypes2::TXYRect FCursorXYMargI;
	int FSizeCol;
	int FSizeRow;
	int FScrollTimerId;
	int FCommentTimerId;
	TCellStyleRecArray *FCellStyleCache;
	int FCellCacheCols;
	int FCellCacheRows;
	Xbooktypes2::TXYPoint FLastMouseDown;
	bool FMouseIsDown;
	Xbookeditselarea2::TXLSBookEditSelArea* FSelectionEdit;
	Xbookrefedit2::TXBookEditRefList* FEditRefs;
	Xbookskin2::TCursorSizePos FCursorSizePos;
	TCellPaintData* FCellPaint;
	int FInMergedCells;
	Xbookdrawing2::TXBookDrawing* FDrawing;
	bool FSheetChanged;
	bool FCacheRequest;
	Xlscomment5::TXLSComment* FVisibleComment;
	Xbookinplaceedit2::TXBookInplaceEditor* FInplaceEditor;
	Xlscellareas5::TCellAreas* FCopyAreas;
	Xlssheetdata5::TXLSDeleteOptions FDeleteOptions;
	bool FUseCodepage;
	System::StaticArray<System::Word, 128> FCodepage;
	bool FIsPrinting;
	int FPrintStdFontWidth;
	int FPrintMaxX;
	int FPrintMaxY;
	Formpivottable::TfrmPivotTable* FFormPivot;
	Xbookutils2::TXColRowEvent FCellChangedEvent;
	System::Classes::TNotifyEvent FSelectionChangedEvent;
	Xbookutils2::TXStringEvent FHyperlinkClickEvent;
	System::Classes::TNotifyEvent FIECharFmtEvent;
	Xbookutils2::TXBooleanEvent FEditorOpenEvent;
	Xbookutils2::TXBooleanEvent FEditorCloseEvent;
	System::Classes::TNotifyEvent FEditorDisableFmtEvent;
	Xbookutils2::TXNotifyEvent FNotificationEvent;
	void __fastcall SetTopRowPrint(int Value, int MaxRowToCalc);
	void __fastcall SetVisibleRects();
	bool __fastcall CalcVScroll();
	bool __fastcall CalcHScroll();
	void __fastcall TabSizeChanged(System::TObject* Sender, int X, int Y);
	void __fastcall RepaintRequest(System::TObject* Sender);
	void __fastcall PaintLine(System::TObject* Sender, Xbookutils2::TPaintLineType LineType, int &X, int &Y, bool Execute);
	void __fastcall PaintCursor(int C1, int R1, int C2, int R2);
	void __fastcall PaintMarchingAnts(int C1, int R1, int C2, int R2);
	void __fastcall PaintCells(int Col1, int Row1, int Col2, int Row2, TCellsToPaint CellsToPaint);
	void __fastcall PaintTheCell(int Col, int Row, int pX1, int pY1, int pX2, int pY2, bool Selected = false);
	void __fastcall PaintCellText(int Col, int Row, const Xlscellmmu5::TXLSCellItem &Ref, const Xbooktypes2::TXYRect &Rect, Xc12datastylesheet5::TXc12DXF* ADXF);
	void __fastcall ClearSelected(int Col, int Row, bool DoPaint, Xbookskin2::TCursorSizePos CursorSizePos = (Xbookskin2::TCursorSizePos)(0x0));
	void __fastcall BeginSelection(int Col, int Row);
	void __fastcall AppendSelection(int Col, int Row, bool DoPaint);
	bool __fastcall Scroll(int Col, int Row);
	void __fastcall ClipToExtent(int &Col, int &Row);
	void __fastcall ClipToSheet(int &C1, int &R1, int &C2, int &R2);
	void __fastcall MarchingAntsTimer(System::TObject* Sender, int TimerId, int Data);
	void __fastcall CommentTimer(System::TObject* Sender, void * AData);
	void __fastcall CacheCells();
	void __fastcall CacheMergedCells(const int AMergedIndex, const unsigned AFgColor, const unsigned ABgColor);
	void __fastcall ApplyCondFmt();
	TCursorAreaHit __fastcall GetCursorAreaHit(int X, int Y);
	void __fastcall UpdateSheetArea();
	void __fastcall PaintEditRefs(System::TObject* Sender, int C1, int R1, int C2, int R2);
	void __fastcall ScrollEditRefs(System::TObject* Sender, int Direction);
	void __fastcall ColumnClick(System::TObject* Sender, int Header, Xbookheaders2::TSizeHitType SizeHit, Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift);
	void __fastcall RowClick(System::TObject* Sender, int Header, Xbookheaders2::TSizeHitType SizeHit, Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift);
	void __fastcall SelColChanged(System::TObject* Sender, int Header, int ScrollDirection);
	void __fastcall SelRowChanged(System::TObject* Sender, int Header, int ScrollDirection);
	void __fastcall SetSelectedHeaders();
	void __fastcall DoSheetChanged();
	void __fastcall InvalidateCell(int Col, int Row);
	void __fastcall HideComment(int Col, int Row);
	System::UnicodeString __fastcall FitNumAsString(int Width, double Val);
	void __fastcall IEPaintCells(System::TObject* Sender, const int Col1, const int Row1, const int Col2, const int Row2);
	void __fastcall HandleScrollTimer(System::TObject* ASender, void * AData);
	void __fastcall IECharFormatChanged(System::TObject* ASender);
	void __fastcall DoReloadSheet(System::TObject* ASender);
	void __fastcall DoShowPivotForm(Xlspivottables5::TXLSPivotTable* APivTbl);
	void __fastcall ClosePivotForm(System::TObject* ASender, System::Uitypes::TCloseAction &Action);
	
public:
	__fastcall TXLSBookSheet(Vcl::Controls::TCustomControl* AOwner, Xbookwindows2::TXSSWindow* AParent, Xbookoptions2::TXLSBookOptions* Options, Xbookpaintlayers2::TXPaintLayers* Layers, Xc12manager5::TXc12Manager* Manager, Xlssheetdata5::TXLSWorkbook* AWorkbook, Xlssheetdata5::TXLSWorksheet* Sheet);
	__fastcall virtual ~TXLSBookSheet();
	void __fastcall SheetChanged(Xlssheetdata5::TXLSWorksheet* Sheet);
	virtual void __fastcall Paint();
	virtual void __fastcall Invalidate();
	void __fastcall InvalidateAndReload();
	void __fastcall SetCodepage(System::Sysutils::PWordArray ACodepage);
	void __fastcall BeginPrint(const double AVertAdjustment, const int AStdFontWidth);
	void __fastcall PaintPrint(Xlssheetdata5::TXLSWorksheet* ASheet, const int ACol1, const int ARow1, const int ACol2, const int ARow2);
	void __fastcall EndPrint();
	void __fastcall HideForms();
	void __fastcall ShowPivotForm();
	virtual void __fastcall SetSize(const int pX1, const int pY1, const int pX2, const int pY2);
	virtual void __fastcall MouseDown(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseMove(Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseUp(Xbookwindows2::TXSSMouseButton Button, Xbookwindows2::TXSSShiftState Shift, int X, int Y);
	virtual void __fastcall MouseWheel(const int X, const int Y, const int Delta);
	virtual void __fastcall MouseEnter(int X, int Y);
	virtual void __fastcall MouseLeave();
	virtual void __fastcall HandleKey(const Xbookwindows2::TXSSKey Key, const Xbookwindows2::TXSSShiftKeys Shift);
	virtual void __fastcall KeyPress(System::WideChar Key);
	void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	void __fastcall DragDrop(System::TObject* Source, int X, int Y);
	void __fastcall OnVScroll(System::TObject* Sender, Xbookcontrols2::TXScrollState Value);
	void __fastcall OnHScroll(System::TObject* Sender, Xbookcontrols2::TXScrollState Value);
	void __fastcall InvalidateArea(int C1, int R1, int C2, int R2);
	void __fastcall HideCursor();
	void __fastcall ShowCursor();
	void __fastcall MoveCursor(const int ACol, const int ARow);
	void __fastcall ShowInplaceEdit(bool AAssignCellValue, const bool AIsFormula = false);
	void __fastcall HideInplaceEdit(const bool ASaveText = false, Xbookwindows2::TXSSKey AKey = (Xbookwindows2::TXSSKey)(0x6));
	void __fastcall ColGroupBtnsClick(System::TObject* Sender, int Hdr, int Level);
	void __fastcall RowGroupBtnsClick(System::TObject* Sender, int Hdr, int Level);
	TXSSChildWindows __fastcall FocusedChild();
	__property Xbookcolumns2::TXLSBookColumns* Columns = {read=FColumns};
	__property Xbookrows2::TXLSBookRows* Rows = {read=FRows};
	__property int LeftCol = {read=GetLeftCol, write=SetLeftCol, nodefault};
	__property int RightCol = {read=GetRightCol, write=SetRightCol, nodefault};
	__property int TopRow = {read=GetTopRow, write=SetTopRow, nodefault};
	__property int BottomRow = {read=GetBottomRow, write=SetBottomRow, nodefault};
	__property Xbooktabset2::TXTabSet* Tabs = {read=FTabs};
	__property Xlssheetdata5::TXLSWorksheet* XLSSheet = {read=FXLSSheet};
	__property Xbookdrawing2::TXBookDrawing* Drawing = {read=FDrawing};
	__property Xbookinplaceedit2::TXBookInplaceEditor* InplaceEditor = {read=FInplaceEditor};
	__property Xbooktypes2::TXYRect CursorArea = {read=FCursorXY};
	__property TXSSSelectOptions SelectOptions = {read=FSelectOptions, write=FSelectOptions, nodefault};
	__property Xlssheetdata5::TXLSDeleteOptions DeleteOptions = {read=FDeleteOptions, write=FDeleteOptions, nodefault};
	__property Xbookutils2::TXColRowEvent OnCellChanged = {read=FCellChangedEvent, write=FCellChangedEvent};
	__property System::Classes::TNotifyEvent OnSelectionChanged = {read=FSelectionChangedEvent, write=FSelectionChangedEvent};
	__property Xbookutils2::TXBooleanEvent OnEditorOpen = {read=FEditorOpenEvent, write=FEditorOpenEvent};
	__property Xbookutils2::TXBooleanEvent OnEditorClose = {read=FEditorCloseEvent, write=FEditorCloseEvent};
	__property System::Classes::TNotifyEvent OnEditorDisableFmt = {read=FEditorDisableFmtEvent, write=FEditorDisableFmtEvent};
	__property Xbookutils2::TXStringEvent OnHyperlinkClick = {read=FHyperlinkClickEvent, write=FHyperlinkClickEvent};
	__property System::Classes::TNotifyEvent OnIECharFmt = {read=FIECharFmtEvent, write=FIECharFmtEvent};
	__property Xbookutils2::TXNotifyEvent OnNotification = {read=FNotificationEvent, write=FNotificationEvent};
};


//-- var, const, procedure ---------------------------------------------------
static const int COND_FMT_VAL_SCALE = int(0xf4240);
}	/* namespace Xbooksheet2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOKSHEET2)
using namespace Xbooksheet2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbooksheet2HPP
