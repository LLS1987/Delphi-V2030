// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Xc12Manager5.pas' rev: 35.00 (Windows)

#ifndef Xc12manager5HPP
#define Xc12manager5HPP

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
#include <Winapi.Windows.hpp>
#include <xpgPUtils.hpp>
#include <xpgPSimpleDOM.hpp>
#include <BIFF_Names5.hpp>
#include <xpgParseDrawing.hpp>
#include <xpgParserPivot.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Common5.hpp>
#include <Xc12DataSST5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12DataWorkbook5.hpp>
#include <Xc12DataWorksheet5.hpp>
#include <Xc12DataXLinks5.hpp>
#include <Xc12FileData5.hpp>
#include <Xc12DataTable5.hpp>
#include <Xc12Graphics.hpp>
#include <XLSUtils5.hpp>
#include <XLSClassFactory5.hpp>
#include <XLSRelCells5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xc12manager5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSEventCell;
class DELPHICLASS TXc12DocProps;
class DELPHICLASS TXc12GraphicManagerImpl;
class DELPHICLASS TXc12Manager;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TXLSEventCell : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool __fastcall GetBoolean();
	Xc12utils5::TXLSCellType __fastcall GetCellType();
	Xc12utils5::TXc12CellError __fastcall GetError();
	double __fastcall GetFloat();
	System::UnicodeString __fastcall GetFormula();
	System::UnicodeString __fastcall GetString();
	void __fastcall SetBoolean(const bool Value);
	void __fastcall SetError(const Xc12utils5::TXc12CellError Value);
	void __fastcall SetFloat(const double Value);
	void __fastcall SetFormula(const System::UnicodeString Value);
	void __fastcall SetString(const System::UnicodeString Value);
	void __fastcall SetRef(const System::UnicodeString Value);
	void __fastcall SetRow(const int Value);
	void __fastcall SetCol(const int Value);
	bool __fastcall GetActive();
	
protected:
	int FPrevCol;
	int FPrevRow;
	bool FActive;
	bool FAborted;
	int FSheetIndex;
	System::UnicodeString FSheetName;
	int FCol;
	int FRow;
	Xc12utils5::TXLSCellArea FTargetArea;
	Xc12utils5::TXLSCellType FCellType;
	bool FIsFormula;
	bool FValBoolean;
	Xc12utils5::TXc12CellError FValError;
	double FValFloat;
	System::UnicodeString FValString;
	System::UnicodeString FFormula;
	Xc12datastylesheet5::TXc12XF* FXF;
	
public:
	__fastcall TXLSEventCell();
	void __fastcall Clear();
	void __fastcall ClearValues();
	void __fastcall SetTargetArea(const int ASheetIndex, const int ACol1, const int ARow1, const int ACol2, const int ARow2);
	void __fastcall ColDone();
	void __fastcall RowDone();
	void __fastcall Abort();
	__property bool Active = {read=GetActive, write=FActive, nodefault};
	__property int SheetIndex = {read=FSheetIndex, write=FSheetIndex, nodefault};
	__property System::UnicodeString SheetName = {read=FSheetName, write=FSheetName};
	__property int Col = {read=FCol, write=SetCol, nodefault};
	__property int Row = {read=FRow, write=SetRow, nodefault};
	__property System::UnicodeString Ref = {write=SetRef};
	__property Xc12utils5::TXLSCellArea TargetArea = {read=FTargetArea};
	__property Xc12utils5::TXLSCellType CellType = {read=GetCellType, nodefault};
	__property bool AsBoolean = {read=GetBoolean, write=SetBoolean, nodefault};
	__property Xc12utils5::TXc12CellError AsError = {read=GetError, write=SetError, nodefault};
	__property double AsFloat = {read=GetFloat, write=SetFloat};
	__property System::UnicodeString AsString = {read=GetString, write=SetString};
	__property System::UnicodeString AsFormula = {read=GetFormula, write=SetFormula};
	__property Xc12datastylesheet5::TXc12XF* XF = {read=FXF, write=FXF};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSEventCell() { }
	
};


typedef void __fastcall (__closure *TCellReadWriteEvent)(TXLSEventCell* ACell);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DocProps : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString __fastcall GetCreator();
	System::TDateTime __fastcall GetDateCreated();
	System::TDateTime __fastcall GetDateModified();
	System::UnicodeString __fastcall GetLastModifiedBy();
	void __fastcall SetCreator(const System::UnicodeString Value);
	void __fastcall SetDateCreated(const System::TDateTime Value);
	void __fastcall SetDateModified(const System::TDateTime Value);
	void __fastcall SetLastModifiedBy(const System::UnicodeString Value);
	
protected:
	Xpgpsimpledom::TXpgSimpleDOM* FDocPropsCore;
	bool FAutoUpdate;
	
public:
	__fastcall TXc12DocProps(Xpgpsimpledom::TXpgSimpleDOM* ADocPropsCore);
	__property bool AutoUpdate = {read=FAutoUpdate, write=FAutoUpdate, nodefault};
	__property System::UnicodeString Creator = {read=GetCreator, write=SetCreator};
	__property System::UnicodeString LastModifiedBy = {read=GetLastModifiedBy, write=SetLastModifiedBy};
	__property System::TDateTime DateCreated = {read=GetDateCreated, write=SetDateCreated};
	__property System::TDateTime DateModified = {read=GetDateModified, write=SetDateModified};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12DocProps() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12GraphicManagerImpl : public Xc12graphics::TXc12GraphicManager
{
	typedef Xc12graphics::TXc12GraphicManager inherited;
	
protected:
	TXc12Manager* FManager;
	
public:
	__fastcall TXc12GraphicManagerImpl(TXc12Manager* AManager, Xlsutils5::TXLSErrorManager* AErrors);
	virtual Xlsrelcells5::TXLSRelCells* __fastcall CreateRelativeCells(System::UnicodeString ARef);
public:
	/* TXc12GraphicManager.Destroy */ inline __fastcall virtual ~TXc12GraphicManagerImpl() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXc12Manager : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString __fastcall GetFilenameAsXLS();
	bool __fastcall GetUseAlternateZip();
	void __fastcall SetUseAlternateZip(const bool Value);
	void __fastcall SetVersion(const Xc12utils5::TExcelVersion Value);
	
protected:
	Xlsutils5::TXLSErrorManager* FErrors;
	Xc12utils5::TExcelVersion FVersion;
	System::UnicodeString FFilename;
	System::UnicodeString FPassword;
	Xlsutils5::TStringEvent FPasswordEvent;
	bool FHasXSS;
	Xc12filedata5::TXc12FileData* FFileData;
	Xc12datastylesheet5::TXc12DataStyleSheet* FStyleSheet;
	Xc12datasst5::TXc12DataSST* FSST;
	Xc12dataworkbook5::TXc12DataWorkbook* FWorkbook;
	Xc12dataworksheet5::TXc12DataWorksheets* FWorksheets;
	Xc12dataxlinks5::TXc12DataXLinks* FXLinks;
	Xc12graphics::TXc12GraphicManager* FGrManager;
	Biff_names5::TInternalNames* FNames97;
	Biff_names5::TExternalNames* FExtNames97;
	bool FIsUpdating;
	bool FPaletteChanged;
	System::WideChar FColSeparator;
	System::WideChar FRowSeparator;
	bool FAborted;
	TXLSEventCell* FEventCell;
	TCellReadWriteEvent FCellReadEvent;
	TCellReadWriteEvent FCellWriteEvent;
	bool FDirectRead;
	bool FDirectWrite;
	Xc12utils5::TXc12PaperSize FDefaultPaperSz;
	Xlsclassfactory5::TXLSClassFactory* FClassFactory;
	Xlsutils5::TXLSProgressEvent FProgress;
	Xlsutils5::TXLSProgressType FProgressType;
	int FProgressCount;
	System::Classes::TNotifyEvent FXSSAfterRead;
	System::UnicodeString FStrSERIES;
	TXc12DocProps* FDocProps;
	System::Contnrs::TObjectList* FVirtualCells;
	void __fastcall SetupLocale();
	
public:
	__fastcall TXc12Manager(Xlsclassfactory5::TXLSClassFactory* AClassFactory, Xlsutils5::TXLSErrorManager* AErrors);
	__fastcall virtual ~TXc12Manager();
	void __fastcall CreateMembers();
	void __fastcall Clear();
	int __fastcall FindTable(const System::UnicodeString AName, /* out */ Xc12datatable5::TXc12Tables* &ATables, /* out */ int &ASheetIndex);
	Xpgparserpivot::TCT_pivotTableDefinition* __fastcall FindPivotTable(Xpgparserpivot::TCT_pivotCacheDefinition* ACache);
	void __fastcall BeforeRead();
	void __fastcall AfterRead();
	void __fastcall BeforeWrite();
	void __fastcall BeginProgress(const Xlsutils5::TXLSProgressType AType, const int ACount);
	void __fastcall WorkProgress(int AValue);
	void __fastcall EndProgress();
	void __fastcall FireReadCellEvent();
	void __fastcall FireWriteCellEvent(const bool ARowChanged);
	bool __fastcall CheckDirectWrite();
	__property Xlsutils5::TXLSErrorManager* Errors = {read=FErrors};
	__property Xc12utils5::TExcelVersion Version = {read=FVersion, write=SetVersion, nodefault};
	__property System::UnicodeString Filename = {read=FFilename, write=FFilename};
	__property System::UnicodeString FilenameAsXLS = {read=GetFilenameAsXLS};
	__property System::UnicodeString Password = {read=FPassword, write=FPassword};
	__property bool HasXSS = {read=FHasXSS, write=FHasXSS, nodefault};
	__property System::WideChar ColSeparator = {read=FColSeparator, write=FColSeparator, nodefault};
	__property System::WideChar RowSeparator = {read=FRowSeparator, write=FRowSeparator, nodefault};
	__property Xc12filedata5::TXc12FileData* FileData = {read=FFileData};
	__property Xc12datastylesheet5::TXc12DataStyleSheet* StyleSheet = {read=FStyleSheet};
	__property Xc12datasst5::TXc12DataSST* SST = {read=FSST};
	__property Xc12dataworkbook5::TXc12DataWorkbook* Workbook = {read=FWorkbook};
	__property Xc12dataworksheet5::TXc12DataWorksheets* Worksheets = {read=FWorksheets};
	__property Xc12dataxlinks5::TXc12DataXLinks* XLinks = {read=FXLinks};
	__property Xc12graphics::TXc12GraphicManager* GrManager = {read=FGrManager};
	__property Biff_names5::TInternalNames* Names97 = {read=FNames97, write=FNames97};
	__property Biff_names5::TExternalNames* _ExtNames97 = {read=FExtNames97, write=FExtNames97};
	__property TXLSEventCell* EventCell = {read=FEventCell};
	__property bool Aborted = {read=FAborted, write=FAborted, nodefault};
	__property bool PaletteChanged = {read=FPaletteChanged, write=FPaletteChanged, nodefault};
	__property bool DirectRead = {read=FDirectRead, write=FDirectRead, nodefault};
	__property bool DirectWrite = {read=FDirectWrite, write=FDirectWrite, nodefault};
	__property Xc12utils5::TXc12PaperSize DefaultPaperSz = {read=FDefaultPaperSz, write=FDefaultPaperSz, nodefault};
	__property bool UseAlternateZip = {read=GetUseAlternateZip, write=SetUseAlternateZip, nodefault};
	__property System::UnicodeString StrSERIES = {read=FStrSERIES, write=FStrSERIES};
	__property TXc12DocProps* DocProps = {read=FDocProps};
	__property System::Contnrs::TObjectList* VirtualCells = {read=FVirtualCells};
	__property Xlsutils5::TStringEvent OnPassword = {read=FPasswordEvent, write=FPasswordEvent};
	__property TCellReadWriteEvent OnReadCell = {read=FCellReadEvent, write=FCellReadEvent};
	__property TCellReadWriteEvent OnWriteCell = {read=FCellWriteEvent, write=FCellWriteEvent};
	__property Xlsutils5::TXLSProgressEvent OnProgress = {read=FProgress, write=FProgress};
	__property System::Classes::TNotifyEvent OnXSSAfterRead = {read=FXSSAfterRead, write=FXSSAfterRead};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xc12manager5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XC12MANAGER5)
using namespace Xc12manager5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xc12manager5HPP
