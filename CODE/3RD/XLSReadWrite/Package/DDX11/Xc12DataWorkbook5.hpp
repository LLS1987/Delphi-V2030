// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Xc12DataWorkbook5.pas' rev: 35.00 (Windows)

#ifndef Xc12dataworkbook5HPP
#define Xc12dataworkbook5HPP

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
#include <System.IniFiles.hpp>
#include <xpgPSimpleDOM.hpp>
#include <xpgParserPivot.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Common5.hpp>
#include <Xc12FileData5.hpp>
#include <XLSUtils5.hpp>
#include <XLSFormulaTypes5.hpp>
#include <XLSClassFactory5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xc12dataworkbook5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXc12FileVersion;
class DELPHICLASS TXc12FileSharing;
class DELPHICLASS TXc12WorkbookPr;
class DELPHICLASS TXc12WorkbookProtection;
class DELPHICLASS TXc12BookView;
class DELPHICLASS TXc12BookViews;
class DELPHICLASS TXc12Sheet;
class DELPHICLASS TXc12Sheets;
class DELPHICLASS TXc12FunctionGroups;
class DELPHICLASS TXc12DefinedName;
class DELPHICLASS TXc12DefinedNames;
class DELPHICLASS TXc12CalcPr;
class DELPHICLASS TXc12CustomWorkbookView;
class DELPHICLASS TXc12CustomWorkbookViews;
class DELPHICLASS TXc12SmartTagPr;
class DELPHICLASS TXc12SmartTagType;
class DELPHICLASS TXc12SmartTagTypes;
class DELPHICLASS TXc12WebPublishing;
class DELPHICLASS TXc12FileRecoveryPr;
class DELPHICLASS TXc12FileRecoveryPrs;
class DELPHICLASS TXc12WebPublishObject;
class DELPHICLASS TXc12WebPublishObjects;
class DELPHICLASS TXc12DataWorkbook;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXc12UpdateLinks : unsigned char { x12ulUserSet, x12ulNever, x12ulAlways };

enum DECLSPEC_DENUM TXc12CalcMode : unsigned char { cmManual, cmAutomatic, cmAutoExTables };

enum DECLSPEC_DENUM TXc12RefMode : unsigned char { x12rmA1, x12rmR1C1 };

enum DECLSPEC_DENUM TXc12Comments_ : unsigned char { x12cCommNone, x12cCommIndicator, x12cCommIndAndComment };

enum DECLSPEC_DENUM TXc12Objects : unsigned char { x12oAll, x12oPlaceholders, x12oNone };

enum DECLSPEC_DENUM TXc12SmartTagShow : unsigned char { x12smtAll, x12smtNone, x12smtNoIndicator };

enum DECLSPEC_DENUM TXc12TargetScreenSize : unsigned char { x12tss544x376, x12tss640x480, x12tss720x512, x12tss800x600, x12tss1024x768, x12tss1152x882, x12tss1152x900, x12tss1280x1024, x12tss1600x1200, x12tss1800x1440, x12tss1920x1200 };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12FileVersion : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall SetAppName(const System::UnicodeString Value);
	void __fastcall SetCodeName(const System::UnicodeString Value);
	void __fastcall SetLastEdited(const System::UnicodeString Value);
	void __fastcall SetLowestEdited(const System::UnicodeString Value);
	void __fastcall SetRupBuild(const System::UnicodeString Value);
	
protected:
	System::UnicodeString FAppName;
	System::UnicodeString FLastEdited;
	System::UnicodeString FLowestEdited;
	System::UnicodeString FRupBuild;
	System::UnicodeString FCodeName;
	
public:
	__fastcall TXc12FileVersion();
	void __fastcall Clear();
	__property System::UnicodeString AppName = {read=FAppName, write=SetAppName};
	__property System::UnicodeString LastEdited = {read=FLastEdited, write=SetLastEdited};
	__property System::UnicodeString LowestEdited = {read=FLowestEdited, write=SetLowestEdited};
	__property System::UnicodeString RupBuild = {read=FRupBuild, write=SetRupBuild};
	__property System::UnicodeString CodeName = {read=FCodeName, write=SetCodeName};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12FileVersion() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12FileSharing : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FReadOnlyReccomended;
	System::UnicodeString FUsername;
	int FReservationPassword;
	
public:
	__fastcall TXc12FileSharing();
	void __fastcall Clear();
	__property bool ReadOnlyReccomended = {read=FReadOnlyReccomended, write=FReadOnlyReccomended, nodefault};
	__property System::UnicodeString Username = {read=FUsername, write=FUsername};
	__property int ReservationPassword = {read=FReservationPassword, write=FReservationPassword, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12FileSharing() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12WorkbookPr : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FDate1904;
	TXc12Objects FShowObjects;
	bool FShowBorderUnselectedTables;
	bool FFilterPrivacy;
	bool FPromptedSolutions;
	bool FShowInkAnnotation;
	bool FBackupFile;
	bool FSaveExternalLinkValues;
	TXc12UpdateLinks FUpdateLinks;
	System::UnicodeString FCodeName;
	bool FHidePivotFieldList;
	bool FShowPivotChartFilter;
	bool FAllowRefreshQuery;
	bool FPublishItems;
	bool FCheckCompatibility;
	bool FAutoCompressPictures;
	bool FRefreshAllConnections;
	int FDefaultThemeVersion;
	
public:
	__fastcall TXc12WorkbookPr();
	void __fastcall Clear();
	__property bool Date1904 = {read=FDate1904, write=FDate1904, nodefault};
	__property TXc12Objects ShowObjects = {read=FShowObjects, write=FShowObjects, nodefault};
	__property bool ShowBorderUnselectedTables = {read=FShowBorderUnselectedTables, write=FShowBorderUnselectedTables, nodefault};
	__property bool FilterPrivacy = {read=FFilterPrivacy, write=FFilterPrivacy, nodefault};
	__property bool PromptedSolutions = {read=FPromptedSolutions, write=FPromptedSolutions, nodefault};
	__property bool ShowInkAnnotation = {read=FShowInkAnnotation, write=FShowInkAnnotation, nodefault};
	__property bool BackupFile = {read=FBackupFile, write=FBackupFile, nodefault};
	__property bool SaveExternalLinkValues = {read=FSaveExternalLinkValues, write=FSaveExternalLinkValues, nodefault};
	__property TXc12UpdateLinks UpdateLinks = {read=FUpdateLinks, write=FUpdateLinks, nodefault};
	__property System::UnicodeString CodeName = {read=FCodeName, write=FCodeName};
	__property bool HidePivotFieldList = {read=FHidePivotFieldList, write=FHidePivotFieldList, nodefault};
	__property bool ShowPivotChartFilter = {read=FShowPivotChartFilter, write=FShowPivotChartFilter, nodefault};
	__property bool AllowRefreshQuery = {read=FAllowRefreshQuery, write=FAllowRefreshQuery, nodefault};
	__property bool PublishItems = {read=FPublishItems, write=FPublishItems, nodefault};
	__property bool CheckCompatibility = {read=FCheckCompatibility, write=FCheckCompatibility, nodefault};
	__property bool AutoCompressPictures = {read=FAutoCompressPictures, write=FAutoCompressPictures, nodefault};
	__property bool RefreshAllConnections = {read=FRefreshAllConnections, write=FRefreshAllConnections, nodefault};
	__property int DefaultThemeVersion = {read=FDefaultThemeVersion, write=FDefaultThemeVersion, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12WorkbookPr() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12WorkbookProtection : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FWorkbookPassword;
	int FRevisionPassword;
	bool FLockStructure;
	bool FLockWindows;
	bool FLockRevision;
	
public:
	__fastcall TXc12WorkbookProtection();
	void __fastcall Clear();
	__property int WorkbookPassword = {read=FWorkbookPassword, write=FWorkbookPassword, nodefault};
	__property int RevisionPassword = {read=FRevisionPassword, write=FRevisionPassword, nodefault};
	__property bool LockStructure = {read=FLockStructure, write=FLockStructure, nodefault};
	__property bool LockWindows = {read=FLockWindows, write=FLockWindows, nodefault};
	__property bool LockRevision = {read=FLockRevision, write=FLockRevision, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12WorkbookProtection() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12BookView : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12utils5::TXc12Visibility FVisibility;
	bool FMinimized;
	bool FShowHorizontalScroll;
	bool FShowVerticalScroll;
	bool FShowSheetTabs;
	int FXWindow;
	int FYWindow;
	int FWindowWidth;
	int FWindowHeight;
	int FTabRatio;
	int FFirstSheet;
	int FActiveTab;
	bool FAutoFilterDateGrouping;
	
public:
	__fastcall TXc12BookView();
	void __fastcall Clear();
	__property Xc12utils5::TXc12Visibility Visibility = {read=FVisibility, write=FVisibility, nodefault};
	__property bool Minimized = {read=FMinimized, write=FMinimized, nodefault};
	__property bool ShowHorizontalScroll = {read=FShowHorizontalScroll, write=FShowHorizontalScroll, nodefault};
	__property bool ShowVerticalScroll = {read=FShowVerticalScroll, write=FShowVerticalScroll, nodefault};
	__property bool ShowSheetTabs = {read=FShowSheetTabs, write=FShowSheetTabs, nodefault};
	__property int XWindow = {read=FXWindow, write=FXWindow, nodefault};
	__property int YWindow = {read=FYWindow, write=FYWindow, nodefault};
	__property int WindowWidth = {read=FWindowWidth, write=FWindowWidth, nodefault};
	__property int WindowHeight = {read=FWindowHeight, write=FWindowHeight, nodefault};
	__property int TabRatio = {read=FTabRatio, write=FTabRatio, nodefault};
	__property int FirstSheet = {read=FFirstSheet, write=FFirstSheet, nodefault};
	__property int ActiveTab = {read=FActiveTab, write=FActiveTab, nodefault};
	__property bool AutoFilterDateGrouping = {read=FAutoFilterDateGrouping, write=FAutoFilterDateGrouping, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12BookView() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12BookViews : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12BookView* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12BookView* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12BookViews();
	HIDESBASE void __fastcall Clear(bool AAddDefault);
	HIDESBASE TXc12BookView* __fastcall Add();
	HIDESBASE TXc12BookView* __fastcall Last();
	__property TXc12BookView* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12BookViews() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Sheet : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FName;
	int FSheetId;
	Xc12utils5::TXc12Visibility FState;
	System::UnicodeString FRId;
	
public:
	__fastcall TXc12Sheet();
	void __fastcall Clear();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property int SheetId = {read=FSheetId, write=FSheetId, nodefault};
	__property Xc12utils5::TXc12Visibility State = {read=FState, write=FState, nodefault};
	__property System::UnicodeString RId = {read=FRId, write=FRId};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12Sheet() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Sheets : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12Sheet* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12Sheet* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12Sheets();
	HIDESBASE TXc12Sheet* __fastcall Add();
	__property TXc12Sheet* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12Sheets() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12FunctionGroups : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::UnicodeString operator[](int Index) { return this->Items[Index]; }
	
private:
	System::UnicodeString __fastcall GetItems(int Index);
	
protected:
	System::Classes::TStringList* FItems;
	int FBuiltInGroupCount;
	
public:
	__fastcall TXc12FunctionGroups();
	__fastcall virtual ~TXc12FunctionGroups();
	void __fastcall Add(System::UnicodeString AName);
	int __fastcall Count();
	void __fastcall Clear();
	__property int BuiltInGroupCount = {read=FBuiltInGroupCount, write=FBuiltInGroupCount, nodefault};
	__property System::UnicodeString Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DefinedName : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int __fastcall GetCol1();
	int __fastcall GetCol2();
	int __fastcall GetRow1();
	int __fastcall GetRow2();
	int __fastcall GetSheetIndex();
	
protected:
	System::UnicodeString FName;
	System::UnicodeString FComment;
	System::UnicodeString FCustomMenu;
	System::UnicodeString FDescription;
	System::UnicodeString FHelp;
	System::UnicodeString FStatusBar;
	int FLocalSheetId;
	bool FHidden;
	bool FFunction;
	bool FVbProcedure;
	bool FXlm;
	int FFunctionGroupId;
	System::UnicodeString FShortcutKey;
	bool FPublishToServer;
	bool FWorkbookParameter;
	Xc12utils5::TXc12BuiltInName FBuiltIn;
	System::UnicodeString FContent;
	Xc12utils5::TXc12SimpleNameType FSimpleName;
	Xc12utils5::TXLS3dCellArea FArea;
	Xlsformulatypes5::TXLSPtgs *FPtgs;
	int FPtgsSz;
	bool FDeleted;
	System::Byte FUnused97;
	void __fastcall SetName(const System::UnicodeString Value);
	virtual System::UnicodeString __fastcall GetContent();
	void __fastcall SetContent(const System::UnicodeString Value);
	
public:
	__fastcall TXc12DefinedName();
	__fastcall virtual ~TXc12DefinedName();
	void __fastcall Clear();
	void __fastcall Assign(TXc12DefinedName* AName);
	__property System::UnicodeString Name = {read=FName, write=SetName};
	__property System::UnicodeString Comment = {read=FComment, write=FComment};
	__property System::UnicodeString CustomMenu = {read=FCustomMenu, write=FCustomMenu};
	__property System::UnicodeString Description = {read=FDescription, write=FDescription};
	__property System::UnicodeString Help = {read=FHelp, write=FHelp};
	__property System::UnicodeString StatusBar = {read=FStatusBar, write=FStatusBar};
	__property int LocalSheetId = {read=FLocalSheetId, write=FLocalSheetId, nodefault};
	__property bool Hidden = {read=FHidden, write=FHidden, nodefault};
	__property bool Function_ = {read=FFunction, write=FFunction, nodefault};
	__property bool VbProcedure = {read=FVbProcedure, write=FVbProcedure, nodefault};
	__property bool Xlm = {read=FXlm, write=FXlm, nodefault};
	__property int FunctionGroupId = {read=FFunctionGroupId, write=FFunctionGroupId, nodefault};
	__property System::UnicodeString ShortcutKey = {read=FShortcutKey, write=FShortcutKey};
	__property bool PublishToServer = {read=FPublishToServer, write=FPublishToServer, nodefault};
	__property bool WorkbookParameter = {read=FWorkbookParameter, write=FWorkbookParameter, nodefault};
	__property Xlsformulatypes5::PXLSPtgs Ptgs = {read=FPtgs, write=FPtgs};
	__property int PtgsSz = {read=FPtgsSz, write=FPtgsSz, nodefault};
	__property Xc12utils5::TXc12BuiltInName BuiltIn = {read=FBuiltIn, write=FBuiltIn, nodefault};
	__property System::UnicodeString Content = {read=GetContent, write=SetContent};
	__property System::UnicodeString OrigContent = {read=FContent};
	__property Xc12utils5::TXc12SimpleNameType SimpleName = {read=FSimpleName, nodefault};
	__property Xc12utils5::TXLS3dCellArea SimpleArea = {read=FArea};
	__property int SheetIndex = {read=GetSheetIndex, nodefault};
	__property int Col1 = {read=GetCol1, nodefault};
	__property int Row1 = {read=GetRow1, nodefault};
	__property int Col2 = {read=GetCol2, nodefault};
	__property int Row2 = {read=GetRow2, nodefault};
	__property bool Deleted = {read=FDeleted, write=FDeleted, nodefault};
	__property System::Byte Unused97 = {read=FUnused97, write=FUnused97, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DefinedNames : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12DefinedName* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Inifiles::THashedStringList* FHash;
	TXc12DefinedName* __fastcall GetItems(int Index);
	
protected:
	Xlsclassfactory5::TXLSClassFactory* FClassFactory;
	bool FHashValid;
	TXc12DefinedName* __fastcall AddOrGetFree();
	void __fastcall DoDelete(int AIndex);
	void __fastcall BuildHash();
	
public:
	__fastcall TXc12DefinedNames(Xlsclassfactory5::TXLSClassFactory* AClassFactory);
	__fastcall virtual ~TXc12DefinedNames();
	HIDESBASE void __fastcall Assign(TXc12DefinedNames* ANames);
	HIDESBASE TXc12DefinedName* __fastcall Add(const Xc12utils5::TXc12BuiltInName ABuiltIn, const int ALocalSheetId)/* overload */;
	HIDESBASE TXc12DefinedName* __fastcall Add(const System::UnicodeString AName, const int ALocalSheetId)/* overload */;
	int __fastcall FindId(const System::UnicodeString AName, const int ASheetId)/* overload */;
	TXc12DefinedName* __fastcall FindBuiltIn(const Xc12utils5::TXc12BuiltInName AId, const int ASheetId);
	int __fastcall FindIdInSheet(const System::UnicodeString AName, const int ASheetId);
	HIDESBASE void __fastcall Delete(const System::UnicodeString AName)/* overload */;
	HIDESBASE void __fastcall Delete(const System::UnicodeString AName, const int ALocalSheetId)/* overload */;
	HIDESBASE void __fastcall Delete(const Xc12utils5::TXc12BuiltInName AId, const int ALocalSheetId)/* overload */;
	__property TXc12DefinedName* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXc12CalcPr : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FCalcId;
	TXc12CalcMode FCalcMode;
	bool FFullCalcOnLoad;
	TXc12RefMode FRefMode;
	bool FIterate;
	int FIterateCount;
	double FIterateDelta;
	bool FFullPrecision;
	bool FCalcCompleted;
	bool FCalcOnSave;
	bool FConcurrentCalc;
	int FConcurrentManualCount;
	bool FForceFullCalc;
	
public:
	__fastcall TXc12CalcPr();
	void __fastcall Clear();
	__property int CalcId = {read=FCalcId, write=FCalcId, nodefault};
	__property TXc12CalcMode CalcMode = {read=FCalcMode, write=FCalcMode, nodefault};
	__property bool FullCalcOnLoad = {read=FFullCalcOnLoad, write=FFullCalcOnLoad, nodefault};
	__property TXc12RefMode RefMode = {read=FRefMode, write=FRefMode, nodefault};
	__property bool Iterate = {read=FIterate, write=FIterate, nodefault};
	__property int IterateCount = {read=FIterateCount, write=FIterateCount, nodefault};
	__property double IterateDelta = {read=FIterateDelta, write=FIterateDelta};
	__property bool FullPrecision = {read=FFullPrecision, write=FFullPrecision, nodefault};
	__property bool CalcCompleted = {read=FCalcCompleted, write=FCalcCompleted, nodefault};
	__property bool CalcOnSave = {read=FCalcOnSave, write=FCalcOnSave, nodefault};
	__property bool ConcurrentCalc = {read=FConcurrentCalc, write=FConcurrentCalc, nodefault};
	__property int ConcurrentManualCount = {read=FConcurrentManualCount, write=FConcurrentManualCount, nodefault};
	__property bool ForceFullCalc = {read=FForceFullCalc, write=FForceFullCalc, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12CalcPr() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12CustomWorkbookView : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FName;
	System::UnicodeString FGuid;
	bool FAutoUpdate;
	int FMergeInterval;
	bool FChangesSavedWin;
	bool FOnlySync;
	bool FPersonalView;
	bool FIncludePrintSettings;
	bool FIncludeHiddenRowCol;
	bool FMaximized;
	bool FMinimized;
	bool FShowHorizontalScroll;
	bool FShowVerticalScroll;
	bool FShowSheetTabs;
	int FXWindow;
	int FYWindow;
	int FWindowWidth;
	int FWindowHeight;
	int FTabRatio;
	int FActiveSheetId;
	bool FShowFormulaBar;
	bool FShowStatusbar;
	TXc12Comments_ FShowComments;
	TXc12Objects FShowObjects;
	
public:
	__fastcall TXc12CustomWorkbookView();
	void __fastcall Clear();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString Guid = {read=FGuid, write=FGuid};
	__property bool AutoUpdate = {read=FAutoUpdate, write=FAutoUpdate, nodefault};
	__property int MergeInterval = {read=FMergeInterval, write=FMergeInterval, nodefault};
	__property bool ChangesSavedWin = {read=FChangesSavedWin, write=FChangesSavedWin, nodefault};
	__property bool OnlySync = {read=FOnlySync, write=FOnlySync, nodefault};
	__property bool PersonalView = {read=FPersonalView, write=FPersonalView, nodefault};
	__property bool IncludePrintSettings = {read=FIncludePrintSettings, write=FIncludePrintSettings, nodefault};
	__property bool IncludeHiddenRowCol = {read=FIncludeHiddenRowCol, write=FIncludeHiddenRowCol, nodefault};
	__property bool Maximized = {read=FMaximized, write=FMaximized, nodefault};
	__property bool Minimized = {read=FMinimized, write=FMinimized, nodefault};
	__property bool ShowHorizontalScroll = {read=FShowHorizontalScroll, write=FShowHorizontalScroll, nodefault};
	__property bool ShowVerticalScroll = {read=FShowVerticalScroll, write=FShowVerticalScroll, nodefault};
	__property bool ShowSheetTabs = {read=FShowSheetTabs, write=FShowSheetTabs, nodefault};
	__property int XWindow = {read=FXWindow, write=FXWindow, nodefault};
	__property int YWindow = {read=FYWindow, write=FYWindow, nodefault};
	__property int WindowWidth = {read=FWindowWidth, write=FWindowWidth, nodefault};
	__property int WindowHeight = {read=FWindowHeight, write=FWindowHeight, nodefault};
	__property int TabRatio = {read=FTabRatio, write=FTabRatio, nodefault};
	__property int ActiveSheetId = {read=FActiveSheetId, write=FActiveSheetId, nodefault};
	__property bool ShowFormulaBar = {read=FShowFormulaBar, write=FShowFormulaBar, nodefault};
	__property bool ShowStatusbar = {read=FShowStatusbar, write=FShowStatusbar, nodefault};
	__property TXc12Comments_ ShowComments = {read=FShowComments, write=FShowComments, nodefault};
	__property TXc12Objects ShowObjects = {read=FShowObjects, write=FShowObjects, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12CustomWorkbookView() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12CustomWorkbookViews : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12CustomWorkbookView* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12CustomWorkbookView* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TXc12CustomWorkbookView* __fastcall Add();
	__property TXc12CustomWorkbookView* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TObjectList.Create */ inline __fastcall TXc12CustomWorkbookViews()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TXc12CustomWorkbookViews(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12CustomWorkbookViews() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12SmartTagPr : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FEmbed;
	TXc12SmartTagShow FShow;
	
public:
	__fastcall TXc12SmartTagPr();
	void __fastcall Clear();
	__property bool Embed = {read=FEmbed, write=FEmbed, nodefault};
	__property TXc12SmartTagShow Show = {read=FShow, write=FShow, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12SmartTagPr() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12SmartTagType : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FNamespaceUri;
	System::UnicodeString FName;
	System::UnicodeString FUrl;
	
public:
	__fastcall TXc12SmartTagType();
	void __fastcall Clear();
	__property System::UnicodeString NamespaceUri = {read=FNamespaceUri, write=FNamespaceUri};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString Url = {read=FUrl, write=FUrl};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12SmartTagType() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12SmartTagTypes : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12SmartTagType* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12SmartTagType* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TXc12SmartTagType* __fastcall Add();
	__property TXc12SmartTagType* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TObjectList.Create */ inline __fastcall TXc12SmartTagTypes()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TXc12SmartTagTypes(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12SmartTagTypes() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12WebPublishing : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FCss;
	bool FThicket;
	bool FLongFileNames;
	bool FVml;
	bool FAllowPng;
	TXc12TargetScreenSize FTargetScreenSize;
	int FDpi;
	int FCodePage;
	
public:
	__fastcall TXc12WebPublishing();
	void __fastcall Clear();
	__property bool Css = {read=FCss, write=FCss, nodefault};
	__property bool Thicket = {read=FThicket, write=FThicket, nodefault};
	__property bool LongFileNames = {read=FLongFileNames, write=FLongFileNames, nodefault};
	__property bool Vml = {read=FVml, write=FVml, nodefault};
	__property bool AllowPng = {read=FAllowPng, write=FAllowPng, nodefault};
	__property TXc12TargetScreenSize TargetScreenSize = {read=FTargetScreenSize, write=FTargetScreenSize, nodefault};
	__property int Dpi = {read=FDpi, write=FDpi, nodefault};
	__property int CodePage = {read=FCodePage, write=FCodePage, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12WebPublishing() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12FileRecoveryPr : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FAutoRecover;
	bool FCrashSave;
	bool FDataExtractLoad;
	bool FRepairLoad;
	
public:
	__fastcall TXc12FileRecoveryPr();
	void __fastcall Clear();
	__property bool AutoRecover = {read=FAutoRecover, write=FAutoRecover, nodefault};
	__property bool CrashSave = {read=FCrashSave, write=FCrashSave, nodefault};
	__property bool DataExtractLoad = {read=FDataExtractLoad, write=FDataExtractLoad, nodefault};
	__property bool RepairLoad = {read=FRepairLoad, write=FRepairLoad, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12FileRecoveryPr() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12FileRecoveryPrs : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12FileRecoveryPr* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12FileRecoveryPr* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12FileRecoveryPrs();
	HIDESBASE TXc12FileRecoveryPr* __fastcall Add();
	__property TXc12FileRecoveryPr* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12FileRecoveryPrs() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12WebPublishObject : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FId;
	System::UnicodeString FDivId;
	System::UnicodeString FSourceObject;
	System::UnicodeString FDestinationFile;
	System::UnicodeString FTitle;
	bool FAutoRepublish;
	
public:
	__fastcall TXc12WebPublishObject();
	void __fastcall Clear();
	__property int Id = {read=FId, write=FId, nodefault};
	__property System::UnicodeString DivId = {read=FDivId, write=FDivId};
	__property System::UnicodeString SourceObject = {read=FSourceObject, write=FSourceObject};
	__property System::UnicodeString DestinationFile = {read=FDestinationFile, write=FDestinationFile};
	__property System::UnicodeString Title = {read=FTitle, write=FTitle};
	__property bool AutoRepublish = {read=FAutoRepublish, write=FAutoRepublish, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12WebPublishObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12WebPublishObjects : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12WebPublishObject* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12WebPublishObject* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TXc12WebPublishObject* __fastcall Add();
	__property TXc12WebPublishObject* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TObjectList.Create */ inline __fastcall TXc12WebPublishObjects()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TXc12WebPublishObjects(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12WebPublishObjects() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DataWorkbook : public Xc12common5::TXc12Data
{
	typedef Xc12common5::TXc12Data inherited;
	
protected:
	TXc12FileVersion* FFileVersion;
	TXc12FileSharing* FFileSharing;
	TXc12WorkbookPr* FWorkbookPr;
	TXc12WorkbookProtection* FWorkbookProtection;
	TXc12BookViews* FBookViews;
	TXc12Sheets* FSheets;
	TXc12FunctionGroups* FFunctionGroups;
	TXc12DefinedNames* FDefinedNames;
	TXc12CalcPr* FCalcPr;
	Xc12utils5::TXLSCellArea FOleSize;
	TXc12CustomWorkbookViews* FCustomWorkbookViews;
	Xpgparserpivot::TCT_PivotCacheDefinitions* FPivotCaches;
	TXc12SmartTagPr* FSmartTagPr;
	TXc12SmartTagTypes* FSmartTagTypes;
	TXc12WebPublishing* FWebPublishing;
	TXc12FileRecoveryPrs* FFileRecoveryPrs;
	TXc12WebPublishObjects* FWebPublishObjects;
	Xpgpsimpledom::TXpgSimpleDOM* FConnections;
	System::UnicodeString FUserName;
	Xlsclassfactory5::TXLSClassFactory* FClassFactory;
	
public:
	__fastcall TXc12DataWorkbook(Xlsclassfactory5::TXLSClassFactory* AClassFactory);
	__fastcall virtual ~TXc12DataWorkbook();
	void __fastcall Clear();
	__property System::UnicodeString UserName = {read=FUserName, write=FUserName};
	__property TXc12FileVersion* FileVersion = {read=FFileVersion};
	__property TXc12FileSharing* FileSharing = {read=FFileSharing};
	__property TXc12WorkbookPr* WorkbookPr = {read=FWorkbookPr};
	__property TXc12WorkbookProtection* WorkbookProtection = {read=FWorkbookProtection};
	__property TXc12BookViews* BookViews = {read=FBookViews};
	__property TXc12Sheets* Sheets = {read=FSheets};
	__property TXc12FunctionGroups* FunctionGroups = {read=FFunctionGroups};
	__property TXc12DefinedNames* DefinedNames = {read=FDefinedNames};
	__property TXc12CalcPr* CalcPr = {read=FCalcPr};
	__property Xc12utils5::TXLSCellArea OleSize = {read=FOleSize, write=FOleSize};
	__property TXc12CustomWorkbookViews* CustomWorkbookViews = {read=FCustomWorkbookViews};
	__property Xpgparserpivot::TCT_PivotCacheDefinitions* PivotCaches = {read=FPivotCaches};
	__property TXc12SmartTagPr* SmartTagPr = {read=FSmartTagPr};
	__property TXc12SmartTagTypes* SmartTagTypes = {read=FSmartTagTypes};
	__property TXc12WebPublishing* WebPublishing = {read=FWebPublishing};
	__property TXc12FileRecoveryPrs* FileRecoveryPrs = {read=FFileRecoveryPrs};
	__property TXc12WebPublishObjects* WebPublishObjects = {read=FWebPublishObjects};
	__property Xpgpsimpledom::TXpgSimpleDOM* Connections = {read=FConnections};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xc12dataworkbook5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XC12DATAWORKBOOK5)
using namespace Xc12dataworkbook5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xc12dataworkbook5HPP
