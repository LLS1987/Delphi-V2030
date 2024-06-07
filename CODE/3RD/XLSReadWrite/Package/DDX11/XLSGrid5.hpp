// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSGrid5.pas' rev: 35.00 (Windows)

#ifndef Xlsgrid5HPP
#define Xlsgrid5HPP

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
#include <Vcl.Controls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Tabs.hpp>
#include <Winapi.Windows.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Graphics.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <xpgParseDrawingCommon.hpp>
#include <XLSUtils5.hpp>
#include <XLSMMU5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSColumn5.hpp>
#include <XLSRichPainter5.hpp>
#include <XLSDrawing5.hpp>
#include <XLSSheetData5.hpp>
#include <XLSReadWriteII5.hpp>
#include <XLSTools5.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsgrid5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSTabSet;
class DELPHICLASS TXLSReadWriteIIGrid5;
class DELPHICLASS TXLSGrid;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TXLSTabSet : public Vcl::Tabs::TTabSet
{
	typedef Vcl::Tabs::TTabSet inherited;
	
protected:
	virtual void __fastcall WriteState(System::Classes::TWriter* Writer);
public:
	/* TTabSet.Create */ inline __fastcall virtual TXLSTabSet(System::Classes::TComponent* AOwner) : Vcl::Tabs::TTabSet(AOwner) { }
	/* TTabSet.Destroy */ inline __fastcall virtual ~TXLSTabSet() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TXLSTabSet(HWND ParentWindow) : Vcl::Tabs::TTabSet(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TXLSReadWriteIIGrid5 : public Xlsreadwriteii5::TXLSReadWriteII5
{
	typedef Xlsreadwriteii5::TXLSReadWriteII5 inherited;
	
protected:
	virtual void __fastcall AfterRead();
	
public:
	__fastcall virtual TXLSReadWriteIIGrid5(System::Classes::TComponent* AOwner);
public:
	/* TXLSReadWriteII5.Destroy */ inline __fastcall virtual ~TXLSReadWriteIIGrid5() { }
	
};


class PASCALIMPLEMENTATION TXLSGrid : public Vcl::Grids::TCustomDrawGrid
{
	typedef Vcl::Grids::TCustomDrawGrid inherited;
	
protected:
	TXLSTabSet* FTabs;
	TXLSReadWriteIIGrid5* FXLS;
	Xlssheetdata5::TXLSWorksheet* FSheet;
	System::Uitypes::TColor FHeaderColor;
	System::Uitypes::TColor FGridlineColor;
	int FNoCellPaintCnt;
	System::UnicodeString FEditText;
	int FEditCol;
	int FEditRow;
	System::Classes::TNotifyEvent FEvTabChanged;
	DYNAMIC void __fastcall TopLeftChanged();
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	virtual void __fastcall DrawCell(int ACol, int ARow, const System::Types::TRect &ARect, Vcl::Grids::TGridDrawState AState);
	virtual void __fastcall Paint();
	DYNAMIC bool __fastcall CanEditAcceptKey(System::WideChar Key);
	DYNAMIC System::UnicodeString __fastcall GetEditText(int ACol, int ARow);
	DYNAMIC void __fastcall SetEditText(int ACol, int ARow, const System::UnicodeString Value);
	virtual bool __fastcall SelectCell(int ACol, int ARow);
	void __fastcall TabChanged(System::TObject* Sender, int NewTab, bool &AllowChange);
	int __fastcall RowPixelHeight(int AHeight);
	void __fastcall GetShapeRect(Xlsdrawing5::TXLSDrwTwoPosShape* AShape, /* out */ System::Types::TRect &ARect);
	bool __fastcall IsCellVisible(int ACol, int ARow);
	void __fastcall ColsChanged();
	void __fastcall RowsChanged();
	Xc12datastylesheet5::TXc12XF* __fastcall FindXF(int ACol, int ARow);
	bool __fastcall DoMerged(System::Types::TRect &ARect, int ACol, int ARow, int AIndex);
	void __fastcall DoImage(Xlsdrawing5::TXLSDrawingImage* AImage);
	void __fastcall DoTextBox(Xlsdrawing5::TXLSDrawingTextBox* ATextBox);
	void __fastcall DoGraphics();
	void __fastcall PaintHeader(const System::Types::TRect &ARect, System::UnicodeString AText);
	void __fastcall PaintBorder(int X1, int Y1, int X2, int Y2, Xc12datastylesheet5::TXc12BorderPr* ABorder);
	void __fastcall PaintBorders(const System::Types::TRect &ARect, Xc12datastylesheet5::TXc12Border* ABorder);
	void __fastcall PaintDefaultCell(const System::Types::TRect &ARect, Xc12datastylesheet5::TXc12XF* AXF, bool AFillCell);
	void __fastcall PaintCell(const System::Types::TRect &ARect, Xc12datastylesheet5::TXc12XF* AXF, Xc12datastylesheet5::TXc12XF* AXFLeft, Xc12datastylesheet5::TXc12XF* AXFTop, bool AFillCell);
	void __fastcall ExpandWidthLeft(System::Types::TRect &ARect, int ACol, int ARow, int AWidth);
	void __fastcall ExpandWidthRight(System::Types::TRect &ARect, int ACol, int ARow, int AWidth);
	void __fastcall PaintText(const System::Types::TRect &ARect, Xc12datastylesheet5::TXc12XF* AXF, int ACol, int ARow, System::UnicodeString AText, Xc12utils5::TXLSCellType ACellType, bool ACanExpand);
	
public:
	__fastcall virtual TXLSGrid(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TXLSGrid();
	void __fastcall XLSChanged(bool AUpdateTabs = true);
	void __fastcall SetCellText(int ACol, int ARow, System::UnicodeString AText);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property Xlssheetdata5::TXLSWorksheet* Sheet = {read=FSheet};
	
__published:
	__property TXLSReadWriteIIGrid5* XLS = {read=FXLS};
	__property System::Uitypes::TColor HeaderColor = {read=FHeaderColor, write=FHeaderColor, nodefault};
	__property System::Uitypes::TColor GridlineColor = {read=FGridlineColor, write=FGridlineColor, nodefault};
	__property System::Classes::TNotifyEvent OnTabChanged = {read=FEvTabChanged, write=FEvTabChanged};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property ColCount = {default=5};
	__property Constraints;
	__property Ctl3D;
	__property DefaultColWidth = {default=64};
	__property DefaultRowHeight = {default=24};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property FixedColor = {default=-16777201};
	__property RowCount = {default=5};
	__property GridLineWidth = {default=1};
	__property Options = {default=524319};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ScrollBars = {default=3};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property Visible = {default=1};
	__property VisibleColCount;
	__property VisibleRowCount;
	__property OnClick;
	__property OnColumnMoved;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGetEditMask;
	__property OnGetEditText;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property OnSelectCell;
	__property OnSetEditText;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnTopLeftChanged;
public:
	/* TWinControl.CreateParented */ inline __fastcall TXLSGrid(HWND ParentWindow) : Vcl::Grids::TCustomDrawGrid(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsgrid5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSGRID5)
using namespace Xlsgrid5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsgrid5HPP
