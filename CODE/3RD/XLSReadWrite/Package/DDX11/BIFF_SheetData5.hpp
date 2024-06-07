// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_SheetData5.pas' rev: 35.00 (Windows)

#ifndef Biff_sheetdata5HPP
#define Biff_sheetdata5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Contnrs.hpp>
#include <System.Math.hpp>
#include <System.UITypes.hpp>
#include <BIFF_Utils5.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_Stream5.hpp>
#include <BIFF_EncodeFormulaII5.hpp>
#include <BIFF_Validate5.hpp>
#include <BIFF_RecordStorage5.hpp>
#include <BIFF_Escher5.hpp>
#include <BIFF_EscherTypes5.hpp>
#include <BIFF_DrawingObj5.hpp>
#include <BIFF_ControlObj5.hpp>
#include <BIFF_FormulaHandler5.hpp>
#include <BIFF_DrawingObjChart5.hpp>
#include <BIFF_MergedCells5.hpp>
#include <BIFF_CondFmt5.hpp>
#include <BIFF_CellAreas5.hpp>
#include <BIFF_DecodeFormula5.hpp>
#include <BIFF_Autofilter5.hpp>
#include <BIFF_EscherCtrlObj5.hpp>
#include <BIFF_WideStrList5.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Manager5.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_sheetdata5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TSelectedArea;
class DELPHICLASS TSelectedAreas;
class DELPHICLASS TPane;
class DELPHICLASS TBasicSheet;
class DELPHICLASS TSheet;
class DELPHICLASS TSheets;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TPaneType : unsigned char { ptNone, ptFrozen, ptSplit };

enum DECLSPEC_DENUM THiddenState : unsigned char { hsVisible, hsHidden, hsVeryHidden };

enum DECLSPEC_DENUM TWorksheetType : unsigned char { wtSheet, wtVBModule, wtExcel4Macro };

enum DECLSPEC_DENUM TSheetProtection : unsigned char { spEditObjects, spEditScenarios, spEditCellFormatting, spEditColumnFormatting, spEditRowFormatting, spInsertColumns, spInsertRows, spInsertHyperlinks, spDeleteColumns, spDeleteRows, spSelectLockedCells, spSortCellRange, spEditAutoFileters, spEditPivotTables, spSelectUnlockedCells };

typedef System::Set<TSheetProtection, TSheetProtection::spEditObjects, TSheetProtection::spSelectUnlockedCells> TSheetProtections;

enum DECLSPEC_DENUM TSelectedAreaHit : unsigned char { sahNo, sahInside, sahEdge, sahActiveCell };

enum DECLSPEC_DENUM TSelectedEdgeHit : unsigned char { sehLeft, sehTop, sehRight, sehBottom };

typedef System::Set<TSelectedEdgeHit, TSelectedEdgeHit::sehLeft, TSelectedEdgeHit::sehBottom> TSelectedEdgeHits;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSelectedArea : public Biff_cellareas5::TCellArea97
{
	typedef Biff_cellareas5::TCellArea97 inherited;
	
public:
	__fastcall virtual ~TSelectedArea();
	HIDESBASE void __fastcall Normalize();
	bool __fastcall Hit(int Col, int Row);
	Biff_recsii5::TRecCellAreaI __fastcall AsRect();
	void __fastcall SetArea(int C1, int R1, int C2, int R2);
	void __fastcall Intersect(int C1, int R1, int C2, int R2);
public:
	/* TObject.Create */ inline __fastcall TSelectedArea() : Biff_cellareas5::TCellArea97() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TSelectedAreas : public Biff_cellareas5::TCellAreas97
{
	typedef Biff_cellareas5::TCellAreas97 inherited;
	
public:
	TSelectedArea* operator[](int Index) { return this->Items[Index]; }
	
private:
	int FActiveCol;
	int FActiveRow;
	int FActiveArea;
	HIDESBASE TSelectedArea* __fastcall GetItems(int Index);
	void __fastcall SetActiveCol(const int Value);
	void __fastcall SetActiveRow(const int Value);
	
public:
	__fastcall TSelectedAreas();
	__fastcall virtual ~TSelectedAreas();
	virtual void __fastcall Clear();
	void __fastcall Init(int Col = 0x0, int Row = 0x0)/* overload */;
	void __fastcall Init(int C1, int R1, int C2, int R2, int ActC, int ActR)/* overload */;
	virtual void __fastcall Move(int Col, int Row)/* overload */;
	HIDESBASE TSelectedArea* __fastcall Add()/* overload */;
	HIDESBASE TSelectedArea* __fastcall Add(int C1, int R1, int C2, int R2)/* overload */;
	HIDESBASE int __fastcall CellInAreas(int Col, int Row, TSelectedEdgeHits &EdgeHit, TSelectedAreaHit &AreaHit);
	bool __fastcall CursorVisible();
	HIDESBASE TSelectedArea* __fastcall First();
	HIDESBASE TSelectedArea* __fastcall Last();
	__property int ActiveCol = {read=FActiveCol, write=SetActiveCol, nodefault};
	__property int ActiveRow = {read=FActiveRow, write=SetActiveRow, nodefault};
	__property int ActiveArea = {read=FActiveArea, write=FActiveArea, nodefault};
	__property TSelectedArea* Items[int Index] = {read=GetItems/*, default*/};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Move(int Col1, int Row1, int Col2, int Row2, int DeltaCol, int DeltaRow){ Biff_cellareas5::TCellAreas97::Move(Col1, Row1, Col2, Row2, DeltaCol, DeltaRow); }
	inline Biff_cellareas5::TCellArea97* __fastcall  Add(Biff_recsii5::PRecCellArea RecArea){ return Biff_cellareas5::TBaseCellAreas97::Add(RecArea); }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TPane : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TPaneType FPaneType;
	int FSplitColX;
	int FSplitRowY;
	int FLeftCol;
	int FTopRow;
	System::Byte FActivePane;
	Biff_recordstorage5::TBaseRecordStorage* FSelections;
	void __fastcall SetActivePane(const System::Byte Value);
	
public:
	__fastcall TPane();
	__fastcall virtual ~TPane();
	void __fastcall Clear();
	__property Biff_recordstorage5::TBaseRecordStorage* Selections = {read=FSelections};
	__property System::Byte ActivePane = {read=FActivePane, write=SetActivePane, nodefault};
	
__published:
	__property TPaneType PaneType = {read=FPaneType, write=FPaneType, nodefault};
	__property int SplitColX = {read=FSplitColX, write=FSplitColX, nodefault};
	__property int SplitRowY = {read=FSplitRowY, write=FSplitRowY, nodefault};
	__property int LeftCol = {read=FLeftCol, write=FLeftCol, nodefault};
	__property int TopRow = {read=FTopRow, write=FTopRow, nodefault};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TSheetOption : unsigned char { soGridlines, soRowColHeadings, soProtected, soR1C1Mode, soIteration, soShowFormulas, soFrozenPanes, soShowZeros };

typedef System::Set<TSheetOption, TSheetOption::soGridlines, TSheetOption::soShowZeros> TSheetOptions;

enum DECLSPEC_DENUM TWorkspaceOption : unsigned char { woShowAutoBreaks, woApplyStyles, woRowSumsBelow, woColSumsRight, woFitToPage, woOutlineSymbols };

typedef System::Set<TWorkspaceOption, TWorkspaceOption::woShowAutoBreaks, TWorkspaceOption::woOutlineSymbols> TWorkspaceOptions;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasicSheet : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	HIDESBASE int __fastcall GetIndex();
	
protected:
	System::UnicodeString FName;
	int FSheetIndex;
	void __fastcall SetName(System::UnicodeString Value);
	void __fastcall SetNameNoCheck(System::UnicodeString Value);
	System::UnicodeString __fastcall GetName();
	
public:
	__fastcall virtual TBasicSheet(System::Classes::TCollection* Collection);
	__fastcall virtual ~TBasicSheet();
	__property int Index = {read=GetIndex, nodefault};
	
__published:
	__property System::UnicodeString Name = {read=GetName, write=SetName};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSheet : public TBasicSheet
{
	typedef TBasicSheet inherited;
	
private:
	Biff_recordstorage5::TRecordStorageSheet* FRecords;
	bool FHasDefaultRecords;
	bool FRecalcFormulas;
	Biff_mergedcells5::TMergedCells* FMergedCells;
	Biff_validate5::TDataValidations* FValidations;
	TPane* FPane;
	Biff_drawingobj5::TDrawingObjects* FDrawingObjects;
	Biff_controlobj5::TControlObjects* FControlObjects;
	Biff_drawingobjchart5::TDrwCharts* FCharts;
	Biff_escher5::TEscherDrawing* FEscherDrawing;
	Biff_condfmt5::TConditionalFormats* FConditionalFormats;
	Biff_autofilter5::TAutoFilters* FAutofilters;
	TSelectedAreas* FSelectedAreas;
	THiddenState FHidden;
	TSheetProtections FSheetProtections;
	TWorksheetType FWorksheetType;
	Xc12utils5::TXc12IndexColor FTabColor;
	Biff_recsii5::TRec32CellArea FDimension;
	Biff_cellareas5::TCellAreas97* FVisibleAreas;
	Biff_recordstorage5::TBaseRecordStorage* FCachedMSORecs;
	TWorkspaceOptions __fastcall GetWorkspaceOptions();
	void __fastcall SetWorkspaceOptions(const TWorkspaceOptions Value);
	System::Word __fastcall GetDefaultColWidth();
	void __fastcall SetDefaultColWidth(const System::Word Value);
	unsigned __fastcall GetFirstCol();
	unsigned __fastcall GetFirstRow();
	unsigned __fastcall GetLastCol();
	unsigned __fastcall GetLastRow();
	void __fastcall SetFirstCol(const unsigned Value);
	void __fastcall SetFirstRow(const unsigned Value);
	void __fastcall SetLastCol(const unsigned Value);
	void __fastcall SetLastRow(const unsigned Value);
	TSheetOptions __fastcall GetOptions();
	System::Word __fastcall GetZoom();
	System::Word __fastcall GetZoomPreview();
	void __fastcall SetOptions(const TSheetOptions Value);
	void __fastcall SetZoom(const System::Word Value);
	void __fastcall SetZoomPreview(const System::Word Value);
	int __fastcall GetLeftCol();
	int __fastcall GetTopRow();
	void __fastcall SetLeftCol(const int Value);
	void __fastcall SetTopRow(const int Value);
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	void __fastcall WriteBuf(Biff_stream5::TXLSStream* Stream, System::Word RecId, System::Word Size, void * P);
	void __fastcall CheckFirstLast(int ACol, int ARow);
	System::Word __fastcall GetDefaultWriteFormat(Xc12utils5::TExcelVersion Version, int FormatIndex);
	void __fastcall OnEscherReadShape(System::TObject* Sender, Biff_escher5::TMSOShape* Shape);
	
public:
	__fastcall virtual TSheet(System::Classes::TCollection* Collection);
	__fastcall virtual ~TSheet();
	void __fastcall ClearData();
	void __fastcall NameIndexChanged(int Delta);
	void __fastcall AfterFileRead();
	void __fastcall SetRightToLeft(bool AValue);
	__property Biff_recordstorage5::TBaseRecordStorage* _Int_CachedMSORecs = {read=FCachedMSORecs};
	__property Biff_recordstorage5::TRecordStorageSheet* _Int_Records = {read=FRecords};
	__property Biff_escher5::TEscherDrawing* _Int_EscherDrawing = {read=FEscherDrawing};
	__property bool _Int_HasDefaultRecords = {read=FHasDefaultRecords, write=FHasDefaultRecords, nodefault};
	__property int _Int_SheetIndex = {read=FSheetIndex, write=FSheetIndex, nodefault};
	void __fastcall ClearWorksheet();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	Biff_drawingobjchart5::TDrwChart* __fastcall AddChart();
	__property unsigned FirstCol = {read=GetFirstCol, write=SetFirstCol, nodefault};
	__property unsigned LastCol = {read=GetLastCol, write=SetLastCol, nodefault};
	__property unsigned FirstRow = {read=GetFirstRow, write=SetFirstRow, nodefault};
	__property unsigned LastRow = {read=GetLastRow, write=SetLastRow, nodefault};
	__property int LeftCol = {read=GetLeftCol, write=SetLeftCol, nodefault};
	__property int TopRow = {read=GetTopRow, write=SetTopRow, nodefault};
	__property TSelectedAreas* SelectedAreas = {read=FSelectedAreas};
	__property Biff_drawingobjchart5::TDrwCharts* Charts = {read=FCharts, write=FCharts};
	__property TWorksheetType WorksheetType = {read=FWorksheetType, nodefault};
	__property Biff_autofilter5::TAutoFilters* Autofilters = {read=FAutofilters, write=FAutofilters};
	__property Xc12utils5::TXc12IndexColor TabColor = {read=FTabColor, write=FTabColor, nodefault};
	__property Biff_cellareas5::TCellAreas97* VisibleAreas = {read=FVisibleAreas, write=FVisibleAreas};
	
__published:
	__property System::Word DefaultColWidth = {read=GetDefaultColWidth, write=SetDefaultColWidth, nodefault};
	__property Biff_mergedcells5::TMergedCells* MergedCells = {read=FMergedCells, write=FMergedCells};
	__property TSheetOptions Options = {read=GetOptions, write=SetOptions, nodefault};
	__property TWorkspaceOptions WorkspaceOptions = {read=GetWorkspaceOptions, write=SetWorkspaceOptions, nodefault};
	__property TSheetProtections SheetProtection = {read=FSheetProtections, write=FSheetProtections, nodefault};
	__property System::Word Zoom = {read=GetZoom, write=SetZoom, nodefault};
	__property System::Word ZoomPreview = {read=GetZoomPreview, write=SetZoomPreview, nodefault};
	__property bool RecalcFormulas = {read=FRecalcFormulas, write=FRecalcFormulas, nodefault};
	__property THiddenState Hidden = {read=FHidden, write=FHidden, nodefault};
	__property Biff_validate5::TDataValidations* Validations = {read=FValidations, write=FValidations};
	__property Biff_drawingobj5::TDrawingObjects* DrawingObjects = {read=FDrawingObjects, write=FDrawingObjects};
	__property Biff_controlobj5::TControlObjects* ControlsObjects = {read=FControlObjects, write=FControlObjects};
	__property TPane* Pane = {read=FPane};
	__property Biff_condfmt5::TConditionalFormats* ConditionalFormats = {read=FConditionalFormats, write=FConditionalFormats};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSheets : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TSheet* operator[](int Index) { return this->Items[Index]; }
	
private:
	Biff_formulahandler5::TFormulaHandler* FFormulaHandler;
	TSheet* __fastcall GetSheet(int Index);
	
protected:
	System::Classes::TPersistent* FOwner;
	Xc12manager5::TXc12Manager* FManager;
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	void __fastcall Reindex();
	
public:
	__fastcall TSheets(System::Classes::TPersistent* AOwner, Biff_formulahandler5::TFormulaHandler* FormulaHandler, Xc12manager5::TXc12Manager* AManager);
	__fastcall virtual ~TSheets();
	HIDESBASE TSheet* __fastcall Insert(int Index);
	HIDESBASE void __fastcall Delete(int Index, const bool AAddSheet = true);
	HIDESBASE void __fastcall Clear();
	HIDESBASE TSheet* __fastcall Add(TWorksheetType WorksheetType = (TWorksheetType)(0x0));
	TSheet* __fastcall SheetByName(System::UnicodeString Name);
	bool __fastcall SplitSheetCellRef(System::UnicodeString Ref, /* out */ int &SheetIndex, /* out */ int &Col1, /* out */ int &Row1, /* out */ int &Col2, /* out */ int &Row2);
	void __fastcall ClearAll();
	__property Biff_formulahandler5::TFormulaHandler* FormulaHandler = {read=FFormulaHandler};
	__property TSheet* Items[int Index] = {read=GetSheet/*, default*/};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
#define DefaultSheetProtections (System::Set<TSheetProtection, TSheetProtection::spEditObjects, TSheetProtection::spSelectUnlockedCells>() << TSheetProtection::spEditObjects << TSheetProtection::spEditScenarios << TSheetProtection::spEditCellFormatting << TSheetProtection::spEditColumnFormatting << TSheetProtection::spEditRowFormatting << TSheetProtection::spInsertColumns << TSheetProtection::spInsertRows << TSheetProtection::spInsertHyperlinks << TSheetProtection::spDeleteColumns << TSheetProtection::spDeleteRows << TSheetProtection::spSelectLockedCells << TSheetProtection::spSortCellRange << TSheetProtection::spEditAutoFileters << TSheetProtection::spEditPivotTables << TSheetProtection::spSelectUnlockedCells )
}	/* namespace Biff_sheetdata5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_SHEETDATA5)
using namespace Biff_sheetdata5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_sheetdata5HPP
