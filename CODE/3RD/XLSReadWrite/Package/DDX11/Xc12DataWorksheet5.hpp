// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Xc12DataWorksheet5.pas' rev: 35.00 (Windows)

#ifndef Xc12dataworksheet5HPP
#define Xc12dataworksheet5HPP

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
#include <xpgParseDrawing.hpp>
#include <xpgParserPivot.hpp>
#include <xpgPUtils.hpp>
#include <xpgPSimpleDOM.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Common5.hpp>
#include <Xc12DataSST5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12DataComments5.hpp>
#include <Xc12DataAutofilter5.hpp>
#include <Xc12DataTable5.hpp>
#include <Xc12FileData5.hpp>
#include <XLSUtils5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSCellAreas5.hpp>
#include <XLSMoveCopy5.hpp>
#include <XLSClassFactory5.hpp>
#include <XLSFormulaTypes5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xc12dataworksheet5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXc12Colors;
class DELPHICLASS TXc12Cfvo;
class DELPHICLASS TXc12Cfvos;
class DELPHICLASS TXc12IconSet;
class DELPHICLASS TXc12DataBar;
class DELPHICLASS TXc12ColorScale;
class DELPHICLASS TXc12CfRule;
class DELPHICLASS TXc12CfRules;
class DELPHICLASS TXc12ConditionalFormatting;
class DELPHICLASS TXc12ConditionalFormattings;
class DELPHICLASS TXc12HeaderFooter;
class DELPHICLASS TXc12PageSetup;
class DELPHICLASS TXc12PrintOptions;
class DELPHICLASS TXc12PageMargins;
class DELPHICLASS TXc12Break;
class DELPHICLASS TXc12PageBreaks;
class DELPHICLASS TXc12Selection;
class DELPHICLASS TXc12Selections;
class DELPHICLASS TXc12Pane;
class DELPHICLASS TXc12PivotAreaReference;
class DELPHICLASS TXc12PivotAreaReferences;
class DELPHICLASS TXc12PivotArea;
class DELPHICLASS TXc12PivotSelection;
class DELPHICLASS TXc12PivotSelections;
class DELPHICLASS TXc12CustomSheetView;
class DELPHICLASS TXc12CustomSheetViews;
class DELPHICLASS TXc12SheetView;
class DELPHICLASS TXc12SheetViews;
class DELPHICLASS TXc12CellSmartTagPr;
class DELPHICLASS TXc12CellSmartTag;
class DELPHICLASS TXc12CellSmartTags;
class DELPHICLASS TXc12SmartTags;
class DELPHICLASS TXc12MergedCell;
class DELPHICLASS TXc12MergedCells;
class DELPHICLASS TXc12Hyperlink;
class DELPHICLASS TXc12Hyperlinks;
class DELPHICLASS TXc12Column;
class DELPHICLASS TXc12Columns;
class DELPHICLASS TXc12WebPublishItem;
class DELPHICLASS TXc12WebPublishItems;
class DELPHICLASS TXc12Control;
class DELPHICLASS TXc12Controls;
class DELPHICLASS TXc12OleObject;
class DELPHICLASS TXc12OleObjects;
class DELPHICLASS TXc12IgnoredError;
class DELPHICLASS TXc12IgnoredErrors;
class DELPHICLASS TXc12CustomProperty;
class DELPHICLASS TXc12CustomProperties;
class DELPHICLASS TXc12DataValidation;
class DELPHICLASS TXc12DataValidations;
class DELPHICLASS TXc12DataRef;
class DELPHICLASS TXc12DataRefs;
class DELPHICLASS TXc12InputCell;
class DELPHICLASS Tx12InputCells;
class DELPHICLASS TXc12Scenario;
class DELPHICLASS TXc12Scenarios;
class DELPHICLASS TXc12ProtectedRange;
class DELPHICLASS TXc12ProtectedRanges;
class DELPHICLASS TXc12OutlinePr;
class DELPHICLASS TXc12PageSetupPr;
class DELPHICLASS TXc12SheetPr;
class DELPHICLASS TXc12SheetFormatPr;
class DELPHICLASS TXc12SheetCalcPr;
class DELPHICLASS TXc12SheetProtection;
class DELPHICLASS TXc12DataConsolidate;
class DELPHICLASS TXc12PhoneticPr;
class DELPHICLASS TXc12DataWorksheet;
class DELPHICLASS TXc12DataWorksheets;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXc12CfType : unsigned char { x12ctExpression, x12ctCellIs, x12ctColorScale, x12ctDataBar, x12ctIconSet, x12ctTop10, x12ctUniqueValues, x12ctDuplicateValues, x12ctContainsText, x12ctNotContainsText, x12ctBeginsWith, x12ctEndsWith, x12ctContainsBlanks, x12ctNotContainsBlanks, x12ctContainsErrors, x12ctNotContainsErrors, x12ctTimePeriod, x12ctAboveAverage };

enum DECLSPEC_DENUM TXc12ConditionalFormattingOperator : unsigned char { x12cfoLessThan, x12cfoLessThanOrEqual, x12cfoEqual, x12cfoNotEqual, x12cfoGreaterThanOrEqual, x12cfoGreaterThan, x12cfoBetween, x12cfoNotBetween, x12cfoContainsText, x12cfoNotContains, x12cfoBeginsWith, x12cfoEndsWith };

enum DECLSPEC_DENUM TXc12TimePeriod : unsigned char { x12tpToday, x12tpYesterday, x12tpTomorrow, x12tpLast7Days, x12tpThisMonth, x12tpLastMonth, x12tpNextMonth, x12tpThisWeek, x12tpLastWeek, x12tpNextWeek };

enum DECLSPEC_DENUM TXc12CfvoType : unsigned char { x12ctNum, x12ctPercent, x12ctMax, x12ctMin, x12ctFormula, x12ctPercentile };

enum DECLSPEC_DENUM TXc12PageOrder : unsigned char { x12poDownThenOver, x12poOverThenDown };

enum DECLSPEC_DENUM TXc12Orientation : unsigned char { x12oDefault, x12oPortrait, x12oLandscape };

enum DECLSPEC_DENUM TXc12CellComments : unsigned char { x12ccNone, x12ccAsDisplayed, x12ccAtEnd };

enum DECLSPEC_DENUM TXc12PrintError : unsigned char { x12peDisplayed, x12peBlank, x12peDash, x12peNA };

enum DECLSPEC_DENUM TXc12SheetState : unsigned char { x12ssVisible, x12ssHidden, x12ssVeryHidden };

enum DECLSPEC_DENUM TXc12SheetViewType : unsigned char { x12svtNormal, x12svtPageBreakPreview, x12svtPageLayout };

enum DECLSPEC_DENUM TXc12PaneEnum : unsigned char { x12pBottomRight, x12pTopRight, x12pBottomLeft, x12pTopLeft };

enum DECLSPEC_DENUM TXc12PaneState : unsigned char { x12psSplit, x12psFrozen, x12psFrozenSplit };

enum DECLSPEC_DENUM TXc12Axis : unsigned char { x12aAxisRow, x12aAxisCol, x12aAxisPage, x12aAxisValues, x12aUnknown };

enum DECLSPEC_DENUM TXc12PivotAreaType : unsigned char { x12patNone, x12patNormal, x12patData, x12patAll, x12patOrigin, x12patButton, x12patTopRight };

enum DECLSPEC_DENUM TXc12DataValidationType : unsigned char { x12dvtNone, x12dvtWhole, x12dvtDecimal, x12dvtList, x12dvtDate, x12dvtTime, x12dvtTextLength, x12dvtCustom };

enum DECLSPEC_DENUM TXc12DataValidationErrorStyle : unsigned char { x12dvesStop, x12dvesWarning, x12dvesInformation };

enum DECLSPEC_DENUM TXc12DataValidationImeMode : unsigned char { x12dvimNoControl, x12dvimOff, x12dvimOn, x12dvimDisabled, x12dvimHiragana, x12dvimFullKatakana, x12dvimHalfKatakana, x12dvimFullAlpha, x12dvimHalfAlpha, x12dvimFullHangul, x12dvimHalfHangul };

enum DECLSPEC_DENUM TXc12DataValidationOperator : unsigned char { x12dvoBetween, x12dvoNotBetween, x12dvoEqual, x12dvoNotEqual, x12dvoLessThan, x12dvoLessThanOrEqual, x12dvoGreaterThan, x12dvoGreaterThanOrEqual };

enum DECLSPEC_DENUM TXc12WebSourceType : unsigned char { x12wstSheet, x12wstPrintArea, x12wstAutoFilter, x12wstRange, x12wstChart, x12wstPivotTable, x12wstQuery, x12wstLabel };

enum DECLSPEC_DENUM TXc12DvAspect : unsigned char { x12daDVASPECT_CONTENT, x12daDVASPECT_ICON };

enum DECLSPEC_DENUM TXc12OleUpdate : unsigned char { x12ouOLEUPDATE_ALWAYS, x12ouOLEUPDATE_ONCALL };

enum DECLSPEC_DENUM TXc12DataConsolidateFunction : unsigned char { x12dcfAverage, x12dcfCount, x12dcfCountNums, x12dcfMax, x12dcfMin, x12dcfProduct, x12dcfStdDev, x12dcfStdDevp, x12dcfSum, x12dcfVar, x12dcfVarp };

enum DECLSPEC_DENUM TXc12PhoneticType : unsigned char { x12ptHalfwidthKatakana, x12ptFullwidthKatakana, x12ptHiragana, x12ptNoConversion };

enum DECLSPEC_DENUM TXc12PhoneticAlignment : unsigned char { x12paNoControl, x12paLeft, x12paCenter, x12paDistributed };

enum DECLSPEC_DENUM TXc12ColumnOption : unsigned char { xcoHidden, xcoBestFit, xcoCustomWidth, xcoPhonetic, xcoCollapsed };

typedef System::Set<TXc12ColumnOption, TXc12ColumnOption::xcoHidden, TXc12ColumnOption::xcoCollapsed> TXc12ColumnOptions;

enum DECLSPEC_DENUM TXc12ColumnHit : unsigned char { xchLess, xchCol2, xchCol1Match, xchMatch, xchTargetInside, xchCol2Match, xchInside, xchCol1, xchGreater };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Colors : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	Xc12utils5::TXc12Color operator[](int Index) { return this->Items[Index]; }
	
private:
	Xc12utils5::TXc12Color __fastcall GetItems(int Index);
	
public:
	__fastcall virtual ~TXc12Colors();
	HIDESBASE void __fastcall Assign(TXc12Colors* AColors);
	HIDESBASE void __fastcall Add(const Xc12utils5::TXc12Color &AColor)/* overload */;
	HIDESBASE void __fastcall Add(unsigned ARGB)/* overload */;
	__property Xc12utils5::TXc12Color Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TObject.Create */ inline __fastcall TXc12Colors() : System::Classes::TList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Cfvo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	double __fastcall GetAsFloat();
	void __fastcall SetAsFloat(const double Value);
	double __fastcall GetAsPercent();
	
protected:
	TXc12CfvoType FType;
	System::UnicodeString FVal;
	bool FGte;
	Xlsformulatypes5::TXLSPtgs *FPtgs;
	int FPtgsSz;
	
public:
	__fastcall TXc12Cfvo();
	__fastcall virtual ~TXc12Cfvo();
	void __fastcall Assign(TXc12Cfvo* ACfvo);
	void __fastcall Clear()/* overload */;
	void __fastcall Clear(TXc12CfvoType AType, System::UnicodeString AVal, bool AGte = true)/* overload */;
	__property TXc12CfvoType Type_ = {read=FType, write=FType, nodefault};
	__property System::UnicodeString Val = {read=FVal, write=FVal};
	__property double AsFloat = {read=GetAsFloat, write=SetAsFloat};
	__property double AsPercent = {read=GetAsPercent};
	__property bool Gte = {read=FGte, write=FGte, nodefault};
	__property Xlsformulatypes5::PXLSPtgs Ptgs = {read=FPtgs, write=FPtgs};
	__property int PtgsSz = {read=FPtgsSz, write=FPtgsSz, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Cfvos : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12Cfvo* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12Cfvo* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12Cfvos();
	HIDESBASE void __fastcall Assign(TXc12Cfvos* ACfvos);
	HIDESBASE TXc12Cfvo* __fastcall Add()/* overload */;
	HIDESBASE TXc12Cfvo* __fastcall Add(TXc12CfvoType AType, const System::UnicodeString AVal, bool AGte = true)/* overload */;
	__property TXc12Cfvo* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12Cfvos() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12IconSet : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12dataautofilter5::TXc12IconSetType FIconSet;
	bool FShowValue;
	bool FPercent;
	bool FReverse;
	TXc12Cfvos* FCfvos;
	
public:
	__fastcall TXc12IconSet();
	__fastcall virtual ~TXc12IconSet();
	void __fastcall Assign(TXc12IconSet* AIconSet);
	void __fastcall Clear();
	__property Xc12dataautofilter5::TXc12IconSetType IconSet = {read=FIconSet, write=FIconSet, nodefault};
	__property bool ShowValue = {read=FShowValue, write=FShowValue, nodefault};
	__property bool Percent = {read=FPercent, write=FPercent, nodefault};
	__property bool Reverse = {read=FReverse, write=FReverse, nodefault};
	__property TXc12Cfvos* Cfvos = {read=FCfvos};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXc12DataBar : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FMinLength;
	int FMaxLength;
	bool FShowValue;
	Xc12utils5::TXc12Color FColor;
	TXc12Cfvo* FCfvo1;
	TXc12Cfvo* FCfvo2;
	
public:
	__fastcall TXc12DataBar();
	__fastcall virtual ~TXc12DataBar();
	void __fastcall Assign(TXc12DataBar* ADataBar);
	void __fastcall Clear();
	__property int MinLength = {read=FMinLength, write=FMinLength, nodefault};
	__property int MaxLength = {read=FMaxLength, write=FMaxLength, nodefault};
	__property bool ShowValue = {read=FShowValue, write=FShowValue, nodefault};
	__property Xc12utils5::TXc12Color Color = {read=FColor, write=FColor};
	__property TXc12Cfvo* Cfvo1 = {read=FCfvo1};
	__property TXc12Cfvo* Cfvo2 = {read=FCfvo2};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12ColorScale : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TXc12Cfvos* FCfvos;
	TXc12Colors* FColors;
	
public:
	__fastcall TXc12ColorScale();
	__fastcall virtual ~TXc12ColorScale();
	void __fastcall Assign(TXc12ColorScale* AColorScale);
	void __fastcall Clear();
	__property TXc12Cfvos* Cfvos = {read=FCfvos};
	__property TXc12Colors* Colors = {read=FColors};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXc12CfRule : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::StaticArray<System::UnicodeString, 3> _TXc12CfRule__1;
	
	
private:
	System::UnicodeString __fastcall GetFormulas(int Index);
	void __fastcall SerFormulas(int Index, const System::UnicodeString Value);
	Xlsformulatypes5::PXLSPtgs __fastcall GetPtgs(int Index);
	int __fastcall GetPtgsSz(int Index);
	void __fastcall SetPtgs(int Index, const Xlsformulatypes5::PXLSPtgs Value);
	void __fastcall SetPtgsSz(int Index, const int Value);
	double __fastcall GetValues(int Index);
	int __fastcall GetValuesCount();
	void __fastcall SetValues(int Index, const double Value);
	void __fastcall SetValuesCount(const int Value);
	
protected:
	_TXc12CfRule__1 FFormula;
	System::StaticArray<Xlsformulatypes5::PXLSPtgs, 3> FPtgs;
	System::StaticArray<int, 3> FPtgsSz;
	TXc12CfType FType_;
	Xc12datastylesheet5::TXc12DXF* FDXF;
	int FPriority;
	bool FStopIfTrue;
	bool FAboveAverage;
	bool FPercent;
	bool FBottom;
	TXc12ConditionalFormattingOperator FOperator;
	System::UnicodeString FText;
	TXc12TimePeriod FTimePeriod;
	int FRank;
	int FStdDev;
	bool FEqualAverage;
	TXc12ColorScale* FColorScale;
	TXc12DataBar* FDataBar;
	TXc12IconSet* FIconSet;
	double FValAverage;
	double FValMin;
	double FValMax;
	Xlsutils5::TDynDoubleArray FValues;
	
public:
	__fastcall TXc12CfRule();
	__fastcall virtual ~TXc12CfRule();
	void __fastcall Assign(TXc12CfRule* ARule);
	void __fastcall Clear();
	int __fastcall FormulaMaxCount();
	__property System::UnicodeString Formulas[int Index] = {read=GetFormulas, write=SerFormulas};
	__property Xlsformulatypes5::PXLSPtgs Ptgs[int Index] = {read=GetPtgs, write=SetPtgs};
	__property int PtgsSz[int Index] = {read=GetPtgsSz, write=SetPtgsSz};
	__property TXc12CfType Type_ = {read=FType_, write=FType_, nodefault};
	__property Xc12datastylesheet5::TXc12DXF* DXF = {read=FDXF, write=FDXF};
	__property int Priority = {read=FPriority, write=FPriority, nodefault};
	__property bool StopIfTrue = {read=FStopIfTrue, write=FStopIfTrue, nodefault};
	__property bool AboveAverage = {read=FAboveAverage, write=FAboveAverage, nodefault};
	__property bool Percent = {read=FPercent, write=FPercent, nodefault};
	__property bool Bottom = {read=FBottom, write=FBottom, nodefault};
	__property TXc12ConditionalFormattingOperator Operator_ = {read=FOperator, write=FOperator, nodefault};
	__property System::UnicodeString Text = {read=FText, write=FText};
	__property TXc12TimePeriod TimePeriod = {read=FTimePeriod, write=FTimePeriod, nodefault};
	__property int Rank = {read=FRank, write=FRank, nodefault};
	__property int StdDev = {read=FStdDev, write=FStdDev, nodefault};
	__property bool EqualAverage = {read=FEqualAverage, write=FEqualAverage, nodefault};
	__property TXc12ColorScale* ColorScale = {read=FColorScale};
	__property TXc12DataBar* DataBar = {read=FDataBar};
	__property TXc12IconSet* IconSet = {read=FIconSet};
	void __fastcall SortValues();
	__property double ValAverage = {read=FValAverage, write=FValAverage};
	__property double ValMin = {read=FValMin, write=FValMin};
	__property double ValMax = {read=FValMax, write=FValMax};
	__property int ValuesCount = {read=GetValuesCount, write=SetValuesCount, nodefault};
	__property double Values[int Index] = {read=GetValues, write=SetValues};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12CfRules : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12CfRule* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12CfRule* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12CfRules();
	HIDESBASE void __fastcall Assign(TXc12CfRules* ARules);
	HIDESBASE TXc12CfRule* __fastcall Add();
	__property TXc12CfRule* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12CfRules() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12ConditionalFormatting : public Xlsmovecopy5::TXLSMoveCopyItem
{
	typedef Xlsmovecopy5::TXLSMoveCopyItem inherited;
	
protected:
	bool FPivot;
	Xlscellareas5::TCellAreas* FSQRef;
	TXc12CfRules* FCfRules;
	
public:
	__fastcall TXc12ConditionalFormatting();
	__fastcall virtual ~TXc12ConditionalFormatting();
	HIDESBASE void __fastcall Assign(TXc12ConditionalFormatting* ACondFmt);
	void __fastcall Clear();
	__property bool Pivot = {read=FPivot, write=FPivot, nodefault};
	__property Xlscellareas5::TCellAreas* SQRef = {read=FSQRef};
	__property TXc12CfRules* CfRules = {read=FCfRules};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12ConditionalFormattings : public Xlsmovecopy5::TXLSMoveCopyList
{
	typedef Xlsmovecopy5::TXLSMoveCopyList inherited;
	
public:
	TXc12ConditionalFormatting* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TXc12ConditionalFormatting* __fastcall GetItems(int Index);
	
protected:
	Xlsclassfactory5::TXLSClassFactory* FClassFactory;
	System::TObject* FXc12Sheet;
	virtual TXc12ConditionalFormatting* __fastcall CreateMember() = 0 ;
	
public:
	__fastcall TXc12ConditionalFormattings(Xlsclassfactory5::TXLSClassFactory* AClassFactory);
	HIDESBASE void __fastcall Assign(TXc12ConditionalFormattings* ACondFmts);
	virtual Xlsmovecopy5::TXLSMoveCopyItem* __fastcall Add()/* overload */;
	TXc12ConditionalFormatting* __fastcall AddCF();
	__property System::TObject* Xc12Sheet = {read=FXc12Sheet, write=FXc12Sheet};
	__property TXc12ConditionalFormatting* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12ConditionalFormattings() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12HeaderFooter : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FDifferentOddEven;
	bool FDifferentFirst;
	bool FScaleWithDoc;
	bool FAlignWithMargins;
	System::UnicodeString FOddHeader;
	System::UnicodeString FOddFooter;
	System::UnicodeString FEvenHeader;
	System::UnicodeString FEvenFooter;
	System::UnicodeString FFirstHeader;
	System::UnicodeString FFirstFooter;
	
public:
	__fastcall TXc12HeaderFooter();
	void __fastcall Clear();
	__property bool DifferentOddEven = {read=FDifferentOddEven, write=FDifferentOddEven, nodefault};
	__property bool DifferentFirst = {read=FDifferentFirst, write=FDifferentFirst, nodefault};
	__property bool ScaleWithDoc = {read=FScaleWithDoc, write=FScaleWithDoc, nodefault};
	__property bool AlignWithMargins = {read=FAlignWithMargins, write=FAlignWithMargins, nodefault};
	__property System::UnicodeString OddHeader = {read=FOddHeader, write=FOddHeader};
	__property System::UnicodeString OddFooter = {read=FOddFooter, write=FOddFooter};
	__property System::UnicodeString EvenHeader = {read=FEvenHeader, write=FEvenHeader};
	__property System::UnicodeString EvenFooter = {read=FEvenFooter, write=FEvenFooter};
	__property System::UnicodeString FirstHeader = {read=FFirstHeader, write=FFirstHeader};
	__property System::UnicodeString FirstFooter = {read=FFirstFooter, write=FFirstFooter};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12HeaderFooter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12PageSetup : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall SetPrinterSettings(System::Classes::TStream* const Value);
	
protected:
	int FPaperSize;
	int FScale;
	int FFirstPageNumber;
	int FFitToWidth;
	int FFitToHeight;
	TXc12PageOrder FPageOrder;
	TXc12Orientation FOrientation;
	bool FUsePrinterDefaults;
	bool FBlackAndWhite;
	bool FDraft;
	TXc12CellComments FCellComments;
	bool FUseFirstPageNumber;
	TXc12PrintError FErrors;
	int FHorizontalDpi;
	int FVerticalDpi;
	int FCopies;
	System::Classes::TStream* FPrinterSettings;
	
public:
	__fastcall TXc12PageSetup();
	__fastcall virtual ~TXc12PageSetup();
	void __fastcall Clear();
	__property int PaperSize = {read=FPaperSize, write=FPaperSize, nodefault};
	__property int Scale = {read=FScale, write=FScale, nodefault};
	__property int FirstPageNumber = {read=FFirstPageNumber, write=FFirstPageNumber, nodefault};
	__property int FitToWidth = {read=FFitToWidth, write=FFitToWidth, nodefault};
	__property int FitToHeight = {read=FFitToHeight, write=FFitToHeight, nodefault};
	__property TXc12PageOrder PageOrder = {read=FPageOrder, write=FPageOrder, nodefault};
	__property TXc12Orientation Orientation = {read=FOrientation, write=FOrientation, nodefault};
	__property bool UsePrinterDefaults = {read=FUsePrinterDefaults, write=FUsePrinterDefaults, nodefault};
	__property bool BlackAndWhite = {read=FBlackAndWhite, write=FBlackAndWhite, nodefault};
	__property bool Draft = {read=FDraft, write=FDraft, nodefault};
	__property TXc12CellComments CellComments = {read=FCellComments, write=FCellComments, nodefault};
	__property bool UseFirstPageNumber = {read=FUseFirstPageNumber, write=FUseFirstPageNumber, nodefault};
	__property TXc12PrintError Errors = {read=FErrors, write=FErrors, nodefault};
	__property int HorizontalDpi = {read=FHorizontalDpi, write=FHorizontalDpi, nodefault};
	__property int VerticalDpi = {read=FVerticalDpi, write=FVerticalDpi, nodefault};
	__property int Copies = {read=FCopies, write=FCopies, nodefault};
	__property System::Classes::TStream* PrinterSettings = {read=FPrinterSettings, write=SetPrinterSettings};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12PrintOptions : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FHorizontalCentered;
	bool FVerticalCentered;
	bool FHeadings;
	bool FGridLines;
	bool FGridLinesSet;
	
public:
	__fastcall TXc12PrintOptions();
	void __fastcall Clear();
	__property bool HorizontalCentered = {read=FHorizontalCentered, write=FHorizontalCentered, nodefault};
	__property bool VerticalCentered = {read=FVerticalCentered, write=FVerticalCentered, nodefault};
	__property bool Headings = {read=FHeadings, write=FHeadings, nodefault};
	__property bool GridLines = {read=FGridLines, write=FGridLines, nodefault};
	__property bool GridLinesSet = {read=FGridLinesSet, write=FGridLinesSet, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12PrintOptions() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXc12PageMargins : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	double FLeft;
	double FRight;
	double FTop;
	double FBottom;
	double FHeader;
	double FFooter;
	
public:
	__fastcall TXc12PageMargins();
	void __fastcall Clear();
	__property double Left = {read=FLeft, write=FLeft};
	__property double Right = {read=FRight, write=FRight};
	__property double Top = {read=FTop, write=FTop};
	__property double Bottom = {read=FBottom, write=FBottom};
	__property double Header = {read=FHeader, write=FHeader};
	__property double Footer = {read=FFooter, write=FFooter};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12PageMargins() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Break : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FId;
	int FMin;
	int FMax;
	bool FMan;
	bool FPt;
	
public:
	__fastcall TXc12Break();
	void __fastcall Clear();
	__property int Id = {read=FId, write=FId, nodefault};
	__property int Min = {read=FMin, write=FMin, nodefault};
	__property int Max = {read=FMax, write=FMax, nodefault};
	__property bool Man = {read=FMan, write=FMan, nodefault};
	__property bool Pt = {read=FPt, write=FPt, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12Break() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12PageBreaks : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12Break* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12Break* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12PageBreaks();
	virtual void __fastcall Clear();
	HIDESBASE TXc12Break* __fastcall Add();
	int __fastcall Find(const int AId);
	int __fastcall Hits(const int AId);
	__property TXc12Break* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12PageBreaks() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Selection : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TXc12PaneEnum FPane;
	Xc12utils5::TXLSCellArea FActiveCell;
	int FActiveCellId;
	Xlscellareas5::TCellAreas* FSQRef;
	
public:
	__fastcall TXc12Selection();
	__fastcall virtual ~TXc12Selection();
	void __fastcall Clear();
	__property TXc12PaneEnum Pane = {read=FPane, write=FPane, nodefault};
	__property Xc12utils5::TXLSCellArea ActiveCell = {read=FActiveCell, write=FActiveCell};
	__property int ActiveCellId = {read=FActiveCellId, write=FActiveCellId, nodefault};
	__property Xlscellareas5::TCellAreas* SQRef = {read=FSQRef};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Selections : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12Selection* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12Selection* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12Selections();
	HIDESBASE TXc12Selection* __fastcall Add();
	__property TXc12Selection* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12Selections() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXc12Pane : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	double FXSplit;
	double FYSplit;
	Xc12utils5::TXLSCellArea FTopLeftCell;
	TXc12PaneEnum FActivePane;
	TXc12PaneState FState;
	bool FExcel97;
	
public:
	__fastcall TXc12Pane();
	void __fastcall Clear();
	__property double XSplit = {read=FXSplit, write=FXSplit};
	__property double YSplit = {read=FYSplit, write=FYSplit};
	__property Xc12utils5::TXLSCellArea TopLeftCell = {read=FTopLeftCell, write=FTopLeftCell};
	__property TXc12PaneEnum ActivePane = {read=FActivePane, write=FActivePane, nodefault};
	__property TXc12PaneState State = {read=FState, write=FState, nodefault};
	__property bool Excel97 = {read=FExcel97, write=FExcel97, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12Pane() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12PivotAreaReference : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FField;
	bool FSelected;
	bool FByPosition;
	bool FRelative;
	bool FDefaultSubtotal;
	bool FSumSubtotal;
	bool FCountASubtotal;
	bool FAvgSubtotal;
	bool FMaxSubtotal;
	bool FMinSubtotal;
	bool FProductSubtotal;
	bool FCountSubtotal;
	bool FStdDevSubtotal;
	bool FStdDevPSubtotal;
	bool FVarSubtotal;
	bool FVarPSubtotal;
	Xlsutils5::TIntegerList* FValues;
	
public:
	__fastcall TXc12PivotAreaReference();
	__fastcall virtual ~TXc12PivotAreaReference();
	void __fastcall Clear();
	__property int Field = {read=FField, write=FField, nodefault};
	__property bool Selected = {read=FSelected, write=FSelected, nodefault};
	__property bool ByPosition = {read=FByPosition, write=FByPosition, nodefault};
	__property bool Relative = {read=FRelative, write=FRelative, nodefault};
	__property bool DefaultSubtotal = {read=FDefaultSubtotal, write=FDefaultSubtotal, nodefault};
	__property bool SumSubtotal = {read=FSumSubtotal, write=FSumSubtotal, nodefault};
	__property bool CountASubtotal = {read=FCountASubtotal, write=FCountASubtotal, nodefault};
	__property bool AvgSubtotal = {read=FAvgSubtotal, write=FAvgSubtotal, nodefault};
	__property bool MaxSubtotal = {read=FMaxSubtotal, write=FMaxSubtotal, nodefault};
	__property bool MinSubtotal = {read=FMinSubtotal, write=FMinSubtotal, nodefault};
	__property bool ProductSubtotal = {read=FProductSubtotal, write=FProductSubtotal, nodefault};
	__property bool CountSubtotal = {read=FCountSubtotal, write=FCountSubtotal, nodefault};
	__property bool StdDevSubtotal = {read=FStdDevSubtotal, write=FStdDevSubtotal, nodefault};
	__property bool StdDevPSubtotal = {read=FStdDevPSubtotal, write=FStdDevPSubtotal, nodefault};
	__property bool VarSubtotal = {read=FVarSubtotal, write=FVarSubtotal, nodefault};
	__property bool VarPSubtotal = {read=FVarPSubtotal, write=FVarPSubtotal, nodefault};
	__property Xlsutils5::TIntegerList* Values = {read=FValues};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12PivotAreaReferences : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12PivotAreaReference* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12PivotAreaReference* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12PivotAreaReferences();
	HIDESBASE TXc12PivotAreaReference* __fastcall Add();
	__property TXc12PivotAreaReference* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12PivotAreaReferences() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12PivotArea : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FField;
	TXc12PivotAreaType FType_;
	bool FDataOnly;
	bool FLabelOnly;
	bool FGrandRow;
	bool FGrandCol;
	bool FCacheIndex;
	bool FOutline;
	Xc12utils5::TXLSCellArea FOffset;
	bool FCollapsedLevelsAreSubtotals;
	TXc12Axis FAxis;
	int FFieldPosition;
	TXc12PivotAreaReferences* FReferences;
	
public:
	__fastcall TXc12PivotArea();
	__fastcall virtual ~TXc12PivotArea();
	void __fastcall Clear();
	__property int Field = {read=FField, write=FField, nodefault};
	__property TXc12PivotAreaType Type_ = {read=FType_, write=FType_, nodefault};
	__property bool DataOnly = {read=FDataOnly, write=FDataOnly, nodefault};
	__property bool LabelOnly = {read=FLabelOnly, write=FLabelOnly, nodefault};
	__property bool GrandRow = {read=FGrandRow, write=FGrandRow, nodefault};
	__property bool GrandCol = {read=FGrandCol, write=FGrandCol, nodefault};
	__property bool CacheIndex = {read=FCacheIndex, write=FCacheIndex, nodefault};
	__property bool Outline = {read=FOutline, write=FOutline, nodefault};
	__property Xc12utils5::TXLSCellArea Offset = {read=FOffset, write=FOffset};
	__property bool CollapsedLevelsAreSubtotals = {read=FCollapsedLevelsAreSubtotals, write=FCollapsedLevelsAreSubtotals, nodefault};
	__property TXc12Axis Axis = {read=FAxis, write=FAxis, nodefault};
	__property int FieldPosition = {read=FFieldPosition, write=FFieldPosition, nodefault};
	__property TXc12PivotAreaReferences* References = {read=FReferences};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12PivotSelection : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TXc12PaneEnum FPane;
	bool FShowHeader;
	bool FLabel_;
	bool FData;
	bool FExtendable;
	int FCount;
	TXc12Axis FAxis;
	int FDimension;
	int FStart;
	int FMin;
	int FMax;
	int FActiveRow;
	int FActiveCol;
	int FPreviousRow;
	int FPreviousCol;
	int FClick;
	System::UnicodeString FRId;
	TXc12PivotArea* FPivotArea;
	
public:
	__fastcall TXc12PivotSelection();
	__fastcall virtual ~TXc12PivotSelection();
	void __fastcall Clear();
	__property TXc12PaneEnum Pane = {read=FPane, write=FPane, nodefault};
	__property bool ShowHeader = {read=FShowHeader, write=FShowHeader, nodefault};
	__property bool Label_ = {read=FLabel_, write=FLabel_, nodefault};
	__property bool Data = {read=FData, write=FData, nodefault};
	__property bool Extendable = {read=FExtendable, write=FExtendable, nodefault};
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TXc12Axis Axis = {read=FAxis, write=FAxis, nodefault};
	__property int Dimension = {read=FDimension, write=FDimension, nodefault};
	__property int Start = {read=FStart, write=FStart, nodefault};
	__property int Min = {read=FMin, write=FMin, nodefault};
	__property int Max = {read=FMax, write=FMax, nodefault};
	__property int ActiveRow = {read=FActiveRow, write=FActiveRow, nodefault};
	__property int ActiveCol = {read=FActiveCol, write=FActiveCol, nodefault};
	__property int PreviousRow = {read=FPreviousRow, write=FPreviousRow, nodefault};
	__property int PreviousCol = {read=FPreviousCol, write=FPreviousCol, nodefault};
	__property int Click = {read=FClick, write=FClick, nodefault};
	__property System::UnicodeString RId = {read=FRId, write=FRId};
	__property TXc12PivotArea* PivotArea = {read=FPivotArea};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12PivotSelections : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12PivotSelection* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12PivotSelection* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12PivotSelections();
	__fastcall virtual ~TXc12PivotSelections();
	HIDESBASE TXc12PivotSelection* __fastcall Add();
	__property TXc12PivotSelection* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12CustomSheetView : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xlsclassfactory5::TXLSClassFactory* FClassFactory;
	System::UnicodeString FGUID;
	int FScale;
	int FColorId;
	bool FShowPageBreaks;
	bool FShowFormulas;
	bool FShowGridLines;
	bool FShowRowCol;
	bool FOutlineSymbols;
	bool FZeroValues;
	bool FFitToPage;
	bool FPrintArea;
	bool FFilter;
	bool FShowAutoFilter;
	bool FHiddenRows;
	bool FHiddenColumns;
	TXc12SheetState FState;
	bool FFilterUnique;
	TXc12SheetViewType FView;
	bool FShowRuler;
	Xc12utils5::TXLSCellArea FTopLeftCell;
	TXc12Pane* FPane;
	TXc12Selection* FSelection;
	TXc12PageBreaks* FRowBreaks;
	TXc12PageBreaks* FColBreaks;
	TXc12PageMargins* FPageMargins;
	TXc12PrintOptions* FPrintOptions;
	TXc12PageSetup* FPageSetup;
	TXc12HeaderFooter* FHeaderFooter;
	Xc12dataautofilter5::TXc12AutoFilter* FAutoFilter;
	
public:
	__fastcall TXc12CustomSheetView(Xlsclassfactory5::TXLSClassFactory* AClassFactory);
	__fastcall virtual ~TXc12CustomSheetView();
	void __fastcall Clear();
	__property System::UnicodeString GUID = {read=FGUID, write=FGUID};
	__property int Scale = {read=FScale, write=FScale, nodefault};
	__property int ColorId = {read=FColorId, write=FColorId, nodefault};
	__property bool ShowPageBreaks = {read=FShowPageBreaks, write=FShowPageBreaks, nodefault};
	__property bool ShowFormulas = {read=FShowFormulas, write=FShowFormulas, nodefault};
	__property bool ShowGridLines = {read=FShowGridLines, write=FShowGridLines, nodefault};
	__property bool ShowRowCol = {read=FShowRowCol, write=FShowRowCol, nodefault};
	__property bool OutlineSymbols = {read=FOutlineSymbols, write=FOutlineSymbols, nodefault};
	__property bool ZeroValues = {read=FZeroValues, write=FZeroValues, nodefault};
	__property bool FitToPage = {read=FFitToPage, write=FFitToPage, nodefault};
	__property bool PrintArea = {read=FPrintArea, write=FPrintArea, nodefault};
	__property bool Filter = {read=FFilter, write=FFilter, nodefault};
	__property bool ShowAutoFilter = {read=FShowAutoFilter, write=FShowAutoFilter, nodefault};
	__property bool HiddenRows = {read=FHiddenRows, write=FHiddenRows, nodefault};
	__property bool HiddenColumns = {read=FHiddenColumns, write=FHiddenColumns, nodefault};
	__property TXc12SheetState State = {read=FState, write=FState, nodefault};
	__property bool FilterUnique = {read=FFilterUnique, write=FFilterUnique, nodefault};
	__property TXc12SheetViewType View = {read=FView, write=FView, nodefault};
	__property bool ShowRuler = {read=FShowRuler, write=FShowRuler, nodefault};
	__property Xc12utils5::TXLSCellArea TopLeftCell = {read=FTopLeftCell, write=FTopLeftCell};
	__property TXc12Pane* Pane = {read=FPane};
	__property TXc12Selection* Selection = {read=FSelection};
	__property TXc12PageBreaks* RowBreaks = {read=FRowBreaks};
	__property TXc12PageBreaks* ColBreaks = {read=FColBreaks};
	__property TXc12PageMargins* PageMargins = {read=FPageMargins};
	__property TXc12PrintOptions* PrintOptions = {read=FPrintOptions};
	__property TXc12PageSetup* PageSetup = {read=FPageSetup};
	__property TXc12HeaderFooter* HeaderFooter = {read=FHeaderFooter};
	__property Xc12dataautofilter5::TXc12AutoFilter* AutoFilter = {read=FAutoFilter};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12CustomSheetViews : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12CustomSheetView* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12CustomSheetView* __fastcall GetItems(int Index);
	
protected:
	Xlsclassfactory5::TXLSClassFactory* FClassFactory;
	
public:
	__fastcall TXc12CustomSheetViews(Xlsclassfactory5::TXLSClassFactory* AClassFactory);
	HIDESBASE TXc12CustomSheetView* __fastcall Add();
	__property TXc12CustomSheetView* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12CustomSheetViews() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12SheetView : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FWindowProtection;
	bool FShowFormulas;
	bool FShowGridLines;
	bool FShowRowColHeaders;
	bool FShowZeros;
	bool FRightToLeft;
	bool FTabSelected;
	bool FShowRuler;
	bool FShowOutlineSymbols;
	bool FDefaultGridColor;
	bool FShowWhiteSpace;
	TXc12SheetViewType FView;
	Xc12utils5::TXLSCellArea FTopLeftCell;
	int FColorId;
	int FZoomScale;
	int FZoomScaleNormal;
	int FZoomScaleSheetLayoutView;
	int FZoomScalePageLayoutView;
	int FWorkbookViewId;
	TXc12Pane* FPane;
	TXc12Selections* FSelection;
	TXc12PivotSelections* FPivotSelection;
	bool FZoomToFit;
	
public:
	__fastcall TXc12SheetView();
	__fastcall virtual ~TXc12SheetView();
	void __fastcall Clear();
	__property bool WindowProtection = {read=FWindowProtection, write=FWindowProtection, nodefault};
	__property bool ShowFormulas = {read=FShowFormulas, write=FShowFormulas, nodefault};
	__property bool ShowGridLines = {read=FShowGridLines, write=FShowGridLines, nodefault};
	__property bool ShowRowColHeaders = {read=FShowRowColHeaders, write=FShowRowColHeaders, nodefault};
	__property bool ShowZeros = {read=FShowZeros, write=FShowZeros, nodefault};
	__property bool RightToLeft = {read=FRightToLeft, write=FRightToLeft, nodefault};
	__property bool TabSelected = {read=FTabSelected, write=FTabSelected, nodefault};
	__property bool ShowRuler = {read=FShowRuler, write=FShowRuler, nodefault};
	__property bool ShowOutlineSymbols = {read=FShowOutlineSymbols, write=FShowOutlineSymbols, nodefault};
	__property bool DefaultGridColor = {read=FDefaultGridColor, write=FDefaultGridColor, nodefault};
	__property bool ShowWhiteSpace = {read=FShowWhiteSpace, write=FShowWhiteSpace, nodefault};
	__property TXc12SheetViewType View = {read=FView, write=FView, nodefault};
	__property Xc12utils5::TXLSCellArea TopLeftCell = {read=FTopLeftCell, write=FTopLeftCell};
	__property int ColorId = {read=FColorId, write=FColorId, nodefault};
	__property int ZoomScale = {read=FZoomScale, write=FZoomScale, nodefault};
	__property int ZoomScaleNormal = {read=FZoomScaleNormal, write=FZoomScaleNormal, nodefault};
	__property int ZoomScaleSheetLayoutView = {read=FZoomScaleSheetLayoutView, write=FZoomScaleSheetLayoutView, nodefault};
	__property int ZoomScalePageLayoutView = {read=FZoomScalePageLayoutView, write=FZoomScalePageLayoutView, nodefault};
	__property int WorkbookViewId = {read=FWorkbookViewId, write=FWorkbookViewId, nodefault};
	__property TXc12Pane* Pane = {read=FPane};
	__property TXc12Selections* Selection = {read=FSelection};
	__property TXc12PivotSelections* PivotSelection = {read=FPivotSelection};
	__property bool ZoomToFit = {read=FZoomToFit, write=FZoomToFit, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12SheetViews : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12SheetView* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12SheetView* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12SheetViews();
	HIDESBASE TXc12SheetView* __fastcall Add();
	__property TXc12SheetView* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12SheetViews() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12CellSmartTagPr : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FKey;
	System::UnicodeString FVal;
	
public:
	__fastcall TXc12CellSmartTagPr();
	void __fastcall Clear();
	__property System::UnicodeString Key = {read=FKey, write=FKey};
	__property System::UnicodeString Val = {read=FVal, write=FVal};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12CellSmartTagPr() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12CellSmartTag : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12CellSmartTagPr* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12CellSmartTagPr* __fastcall GetItems(int Index);
	
protected:
	int FType_;
	bool FDeleted;
	bool FXmlBased;
	
public:
	__fastcall TXc12CellSmartTag();
	HIDESBASE TXc12CellSmartTagPr* __fastcall Add();
	virtual void __fastcall Clear();
	__property int Type_ = {read=FType_, write=FType_, nodefault};
	__property bool Deleted = {read=FDeleted, write=FDeleted, nodefault};
	__property bool XmlBased = {read=FXmlBased, write=FXmlBased, nodefault};
	__property TXc12CellSmartTagPr* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12CellSmartTag() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12CellSmartTags : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
private:
	TXc12CellSmartTag* __fastcall GetItems(int Index);
	
protected:
	Xlscellareas5::TCellRef* FRef;
	
public:
	__fastcall TXc12CellSmartTags();
	__fastcall virtual ~TXc12CellSmartTags();
	HIDESBASE TXc12CellSmartTag* __fastcall Add();
	virtual void __fastcall Clear();
	__property Xlscellareas5::TCellRef* Ref = {read=FRef, write=FRef};
	__property TXc12CellSmartTag* Items[int Index] = {read=GetItems};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12SmartTags : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12CellSmartTags* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12CellSmartTags* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12SmartTags();
	HIDESBASE TXc12CellSmartTags* __fastcall Add();
	__property TXc12CellSmartTags* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12SmartTags() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12MergedCell : public Xlscellareas5::TCellArea
{
	typedef Xlscellareas5::TCellArea inherited;
	
protected:
	Xc12utils5::TXLSCellArea FRef;
	virtual int __fastcall GetCol1();
	virtual int __fastcall GetRow1();
	virtual int __fastcall GetCol2();
	virtual int __fastcall GetRow2();
	virtual void __fastcall SetCol1(const int AValue);
	virtual void __fastcall SetRow1(const int AValue);
	virtual void __fastcall SetCol2(const int AValue);
	virtual void __fastcall SetRow2(const int AValue);
	
public:
	HIDESBASE void __fastcall Assign(TXc12MergedCell* const AItem);
	__property Xc12utils5::TXLSCellArea Ref = {read=FRef, write=FRef};
public:
	/* TObject.Create */ inline __fastcall TXc12MergedCell() : Xlscellareas5::TCellArea() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12MergedCell() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12MergedCells : public Xlscellareas5::TSolidCellAreas
{
	typedef Xlscellareas5::TSolidCellAreas inherited;
	
public:
	TXc12MergedCell* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TXc12MergedCell* __fastcall GetItems(int Index);
	
protected:
	Xlsclassfactory5::TXLSClassFactory* FClassFactory;
	virtual Xlscellareas5::TCellArea* __fastcall CreateObject();
	TXc12MergedCell* __fastcall CreateMember();
	
public:
	__fastcall TXc12MergedCells(Xlsclassfactory5::TXLSClassFactory* AClassFactory);
	HIDESBASE TXc12MergedCell* __fastcall Add(const Xc12utils5::TXLSCellArea &ARef)/* overload */;
	__property TXc12MergedCell* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12MergedCells() { }
	
	/* Hoisted overloads: */
	
public:
	inline Xlscellareas5::TCellArea* __fastcall  Add(){ return Xlscellareas5::TBaseCellAreas::Add(); }
	inline Xlscellareas5::TCellArea* __fastcall  Add(const System::UnicodeString ARef){ return Xlscellareas5::TBaseCellAreas::Add(ARef); }
	inline Xlscellareas5::TCellArea* __fastcall  Add(const Xc12utils5::PXLSCellArea AArea){ return Xlscellareas5::TBaseCellAreas::Add(AArea); }
	inline Xlscellareas5::TCellArea* __fastcall  Add(const int C, const int R){ return Xlscellareas5::TBaseCellAreas::Add(C, R); }
	inline Xlscellareas5::TCellArea* __fastcall  Add(const int C1, const int R1, const int C2, const int R2){ return Xlscellareas5::TBaseCellAreas::Add(C1, R1, C2, R2); }
	inline void __fastcall  Add(const int C1, const int R1, const int C2, const int R2, Xlscellareas5::TBaseCellAreas* AAreas){ Xlscellareas5::TBaseCellAreas::Add(C1, R1, C2, R2, AAreas); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Hyperlink : public Xlscellareas5::TCellArea
{
	typedef Xlscellareas5::TCellArea inherited;
	
private:
	void __fastcall SetRawAddress(const System::UnicodeString Value);
	
protected:
	Xc12utils5::TXLSHyperlinkType FHyperlinkType;
	System::UnicodeString FDisplay;
	System::UnicodeString FAddress;
	System::UnicodeString FLocation;
	Xc12utils5::TXLSCellArea FRef;
	System::UnicodeString FTooltip;
	System::UnicodeString FTargetFrame;
	System::UnicodeString FScreenTip;
	Xc12utils5::TXLSHyperlinkType FHyperlinkEnc;
	virtual void __fastcall Parse();
	
public:
	__fastcall TXc12Hyperlink();
	HIDESBASE void __fastcall Assign(TXc12Hyperlink* AHLink);
	void __fastcall Clear();
	__property Xc12utils5::TXLSHyperlinkType HyperlinkType = {read=FHyperlinkType, write=FHyperlinkType, nodefault};
	__property System::UnicodeString Display = {read=FDisplay, write=FDisplay};
	__property System::UnicodeString RawAddress = {read=FAddress, write=SetRawAddress};
	__property System::UnicodeString Location = {read=FLocation, write=FLocation};
	__property Xc12utils5::TXLSCellArea Ref = {read=FRef, write=FRef};
	__property System::UnicodeString Tooltip = {read=FTooltip, write=FTooltip};
	__property System::UnicodeString TargetFrame = {read=FTargetFrame, write=FTargetFrame};
	__property System::UnicodeString ScreenTip = {read=FScreenTip, write=FScreenTip};
	__property Xc12utils5::TXLSHyperlinkType HyperlinkEnc = {read=FHyperlinkEnc, write=FHyperlinkEnc, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12Hyperlink() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Hyperlinks : public Xlscellareas5::TCellAreas
{
	typedef Xlscellareas5::TCellAreas inherited;
	
public:
	TXc12Hyperlink* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TXc12Hyperlink* __fastcall GetItems(int Index);
	
protected:
	Xlsclassfactory5::TXLSClassFactory* FClassFactory;
	TXc12Hyperlink* __fastcall CreateMember();
	
public:
	__fastcall TXc12Hyperlinks(Xlsclassfactory5::TXLSClassFactory* AClassFactory);
	HIDESBASE void __fastcall Assign(TXc12Hyperlinks* AHLinks);
	HIDESBASE TXc12Hyperlink* __fastcall Add();
	__property TXc12Hyperlink* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12Hyperlinks() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXc12Column : public Xc12common5::TXc12Data
{
	typedef Xc12common5::TXc12Data inherited;
	
protected:
	int FMin;
	int FMax;
	double FWidth;
	Xc12datastylesheet5::TXc12XF* FStyle;
	int FOutlineLevel;
	TXc12ColumnOptions FOptions;
	
public:
	__fastcall TXc12Column();
	__fastcall virtual ~TXc12Column();
	void __fastcall Clear();
	void __fastcall Assign(TXc12Column* ASource);
	bool __fastcall Equal(TXc12Column* ACol);
	bool __fastcall EqualProps(TXc12Column* ACol);
	TXc12ColumnHit __fastcall Hit(int ACol)/* overload */;
	TXc12ColumnHit __fastcall Hit(int ACol1, int ACol2)/* overload */;
	__property int Min = {read=FMin, write=FMin, nodefault};
	__property int Max = {read=FMax, write=FMax, nodefault};
	__property double Width = {read=FWidth, write=FWidth};
	__property Xc12datastylesheet5::TXc12XF* Style = {read=FStyle, write=FStyle};
	__property int OutlineLevel = {read=FOutlineLevel, write=FOutlineLevel, nodefault};
	__property TXc12ColumnOptions Options = {read=FOptions, write=FOptions, nodefault};
};


class PASCALIMPLEMENTATION TXc12Columns : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12Column* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12Column* __fastcall GetItems(int Index);
	
protected:
	double FDefColWidth;
	
public:
	__fastcall TXc12Columns();
	HIDESBASE TXc12Column* __fastcall Add()/* overload */;
	HIDESBASE TXc12Column* __fastcall Add(Xc12datastylesheet5::TXc12XF* AStyle)/* overload */;
	HIDESBASE void __fastcall Add(TXc12Column* ACol, Xc12datastylesheet5::TXc12XF* AStyle)/* overload */;
	void __fastcall NilAndDelete(int AIndex);
	__property double DefColWidth = {read=FDefColWidth, write=FDefColWidth};
	__property TXc12Column* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12Columns() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12WebPublishItem : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FId;
	System::UnicodeString FDivId;
	TXc12WebSourceType FSourceType;
	Xlscellareas5::TCellRef* FSourceRef;
	System::UnicodeString FSourceObject;
	System::UnicodeString FDestinationFile;
	System::UnicodeString FTitle;
	bool FAutoRepublish;
	
public:
	__fastcall TXc12WebPublishItem();
	__fastcall virtual ~TXc12WebPublishItem();
	void __fastcall Clear();
	__property int Id = {read=FId, write=FId, nodefault};
	__property System::UnicodeString DivId = {read=FDivId, write=FDivId};
	__property TXc12WebSourceType SourceType = {read=FSourceType, write=FSourceType, nodefault};
	__property Xlscellareas5::TCellRef* SourceRef = {read=FSourceRef, write=FSourceRef};
	__property System::UnicodeString SourceObject = {read=FSourceObject, write=FSourceObject};
	__property System::UnicodeString DestinationFile = {read=FDestinationFile, write=FDestinationFile};
	__property System::UnicodeString Title = {read=FTitle, write=FTitle};
	__property bool AutoRepublish = {read=FAutoRepublish, write=FAutoRepublish, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12WebPublishItems : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12WebPublishItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12WebPublishItem* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12WebPublishItems();
	HIDESBASE TXc12WebPublishItem* __fastcall Add();
	__property TXc12WebPublishItem* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12WebPublishItems() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Control : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FShapeId;
	System::UnicodeString FRId;
	System::UnicodeString FName;
	
public:
	__fastcall TXc12Control();
	void __fastcall Clear();
	__property int ShapeId = {read=FShapeId, write=FShapeId, nodefault};
	__property System::UnicodeString RId = {read=FRId, write=FRId};
	__property System::UnicodeString Name = {read=FName, write=FName};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12Control() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Controls : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12Control* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12Control* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12Controls();
	HIDESBASE TXc12Control* __fastcall Add();
	__property TXc12Control* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12Controls() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12OleObject : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FProgId;
	TXc12DvAspect FDvAspect;
	System::UnicodeString FLink;
	TXc12OleUpdate FOleUpdate;
	bool FAutoLoad;
	int FShapeId;
	System::UnicodeString FRId;
	
public:
	__fastcall TXc12OleObject();
	void __fastcall Clear();
	__property System::UnicodeString ProgId = {read=FProgId, write=FProgId};
	__property TXc12DvAspect DvAspect = {read=FDvAspect, write=FDvAspect, nodefault};
	__property System::UnicodeString Link = {read=FLink, write=FLink};
	__property TXc12OleUpdate OleUpdate = {read=FOleUpdate, write=FOleUpdate, nodefault};
	__property bool AutoLoad = {read=FAutoLoad, write=FAutoLoad, nodefault};
	__property int ShapeId = {read=FShapeId, write=FShapeId, nodefault};
	__property System::UnicodeString RId = {read=FRId, write=FRId};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12OleObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12OleObjects : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12OleObject* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12OleObject* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12OleObjects();
	HIDESBASE TXc12OleObject* __fastcall Add();
	__property TXc12OleObject* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12OleObjects() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12IgnoredError : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xlscellareas5::TCellAreas* FSqref;
	bool FEvalError;
	bool FTwoDigitTextYear;
	bool FNumberStoredAsText;
	bool FFormula;
	bool FFormulaRange;
	bool FUnlockedFormula;
	bool FEmptyCellReference;
	bool FListDataValidation;
	bool FCalculatedColumn;
	
public:
	__fastcall TXc12IgnoredError();
	__fastcall virtual ~TXc12IgnoredError();
	void __fastcall Clear();
	__property Xlscellareas5::TCellAreas* Sqref = {read=FSqref};
	__property bool EvalError = {read=FEvalError, write=FEvalError, nodefault};
	__property bool TwoDigitTextYear = {read=FTwoDigitTextYear, write=FTwoDigitTextYear, nodefault};
	__property bool NumberStoredAsText = {read=FNumberStoredAsText, write=FNumberStoredAsText, nodefault};
	__property bool Formula = {read=FFormula, write=FFormula, nodefault};
	__property bool FormulaRange = {read=FFormulaRange, write=FFormulaRange, nodefault};
	__property bool UnlockedFormula = {read=FUnlockedFormula, write=FUnlockedFormula, nodefault};
	__property bool EmptyCellReference = {read=FEmptyCellReference, write=FEmptyCellReference, nodefault};
	__property bool ListDataValidation = {read=FListDataValidation, write=FListDataValidation, nodefault};
	__property bool CalculatedColumn = {read=FCalculatedColumn, write=FCalculatedColumn, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12IgnoredErrors : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12IgnoredError* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12IgnoredError* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12IgnoredErrors();
	HIDESBASE TXc12IgnoredError* __fastcall Add();
	__property TXc12IgnoredError* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12IgnoredErrors() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12CustomProperty : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FName;
	System::UnicodeString FRId;
	
public:
	__fastcall TXc12CustomProperty();
	void __fastcall Clear();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString RId = {read=FRId, write=FRId};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12CustomProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12CustomProperties : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12CustomProperty* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12CustomProperty* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12CustomProperties();
	HIDESBASE TXc12CustomProperty* __fastcall Add();
	__property TXc12CustomProperty* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12CustomProperties() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DataValidation : public Xlsmovecopy5::TXLSMoveCopyItem
{
	typedef Xlsmovecopy5::TXLSMoveCopyItem inherited;
	
protected:
	TXc12DataValidationType FType_;
	TXc12DataValidationErrorStyle FErrorStyle;
	TXc12DataValidationImeMode FImeMode;
	TXc12DataValidationOperator FOperator_;
	bool FAllowBlank;
	bool FShowDropDown;
	bool FShowInputMessage;
	bool FShowErrorMessage;
	System::UnicodeString FErrorTitle;
	System::UnicodeString FError;
	System::UnicodeString FPromptTitle;
	System::UnicodeString FPrompt;
	Xlscellareas5::TCellAreas* FSqref;
	System::UnicodeString FFormula1;
	System::UnicodeString FFormula2;
	
public:
	__fastcall TXc12DataValidation();
	__fastcall virtual ~TXc12DataValidation();
	HIDESBASE void __fastcall Assign(TXc12DataValidation* AValidation);
	void __fastcall Clear();
	__property TXc12DataValidationType Type_ = {read=FType_, write=FType_, nodefault};
	__property TXc12DataValidationErrorStyle ErrorStyle = {read=FErrorStyle, write=FErrorStyle, nodefault};
	__property TXc12DataValidationImeMode ImeMode = {read=FImeMode, write=FImeMode, nodefault};
	__property TXc12DataValidationOperator Operator_ = {read=FOperator_, write=FOperator_, nodefault};
	__property bool AllowBlank = {read=FAllowBlank, write=FAllowBlank, nodefault};
	__property bool ShowDropDown = {read=FShowDropDown, write=FShowDropDown, nodefault};
	__property bool ShowInputMessage = {read=FShowInputMessage, write=FShowInputMessage, nodefault};
	__property bool ShowErrorMessage = {read=FShowErrorMessage, write=FShowErrorMessage, nodefault};
	__property System::UnicodeString ErrorTitle = {read=FErrorTitle, write=FErrorTitle};
	__property System::UnicodeString Error = {read=FError, write=FError};
	__property System::UnicodeString PromptTitle = {read=FPromptTitle, write=FPromptTitle};
	__property System::UnicodeString Prompt = {read=FPrompt, write=FPrompt};
	__property Xlscellareas5::TCellAreas* Sqref = {read=FSqref, write=FSqref};
	__property System::UnicodeString Formula1 = {read=FFormula1, write=FFormula1};
	__property System::UnicodeString Formula2 = {read=FFormula2, write=FFormula2};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DataValidations : public Xlsmovecopy5::TXLSMoveCopyList
{
	typedef Xlsmovecopy5::TXLSMoveCopyList inherited;
	
public:
	TXc12DataValidation* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TXc12DataValidation* __fastcall GetItems(int Index);
	
protected:
	Xlsclassfactory5::TXLSClassFactory* FClassFactory;
	bool FDisablePrompts;
	int FXWindow;
	int FYWindow;
	TXc12DataValidation* __fastcall CreateMember();
	
public:
	__fastcall TXc12DataValidations(Xlsclassfactory5::TXLSClassFactory* AClassFactory);
	HIDESBASE void __fastcall Assign(TXc12DataValidations* AValidations);
	virtual void __fastcall Clear();
	virtual Xlsmovecopy5::TXLSMoveCopyItem* __fastcall Add()/* overload */;
	TXc12DataValidation* __fastcall AddDV();
	__property bool DisablePrompts = {read=FDisablePrompts, write=FDisablePrompts, nodefault};
	__property int XWindow = {read=FXWindow, write=FXWindow, nodefault};
	__property int YWindow = {read=FYWindow, write=FYWindow, nodefault};
	__property TXc12DataValidation* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12DataValidations() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DataRef : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12utils5::TXLSCellArea FRef;
	System::UnicodeString FName;
	System::UnicodeString FSheet;
	System::UnicodeString FRId;
	
public:
	__fastcall TXc12DataRef();
	void __fastcall Clear();
	__property Xc12utils5::TXLSCellArea Ref = {read=FRef, write=FRef};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString Sheet = {read=FSheet, write=FSheet};
	__property System::UnicodeString RId = {read=FRId, write=FRId};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12DataRef() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DataRefs : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12DataRef* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12DataRef* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12DataRefs();
	HIDESBASE TXc12DataRef* __fastcall Add();
	__property TXc12DataRef* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12DataRefs() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12InputCell : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FRow;
	int FCol;
	bool FDeleted;
	bool FUndone;
	System::UnicodeString FVal;
	int FNumFmtId;
	
public:
	__fastcall TXc12InputCell();
	void __fastcall Clear();
	__property int Row = {read=FRow, write=FRow, nodefault};
	__property int Col = {read=FCol, write=FCol, nodefault};
	__property bool Deleted = {read=FDeleted, write=FDeleted, nodefault};
	__property bool Undone = {read=FUndone, write=FUndone, nodefault};
	__property System::UnicodeString Val = {read=FVal, write=FVal};
	__property int NumFmtId = {read=FNumFmtId, write=FNumFmtId, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12InputCell() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION Tx12InputCells : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12InputCell* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12InputCell* __fastcall GetItems(int Index);
	
public:
	__fastcall Tx12InputCells();
	HIDESBASE TXc12InputCell* __fastcall Add()/* overload */;
	HIDESBASE TXc12InputCell* __fastcall Add(System::UnicodeString ACellRef)/* overload */;
	__property TXc12InputCell* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~Tx12InputCells() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Scenario : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FName;
	bool FLocked;
	bool FHidden;
	int FCount;
	System::UnicodeString FUser;
	System::UnicodeString FComment;
	Tx12InputCells* FInputCells;
	
public:
	__fastcall TXc12Scenario();
	__fastcall virtual ~TXc12Scenario();
	void __fastcall Clear();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property bool Locked = {read=FLocked, write=FLocked, nodefault};
	__property bool Hidden = {read=FHidden, write=FHidden, nodefault};
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property System::UnicodeString User = {read=FUser, write=FUser};
	__property System::UnicodeString Comment = {read=FComment, write=FComment};
	__property Tx12InputCells* InputCells = {read=FInputCells};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Scenarios : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12Scenario* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12Scenario* __fastcall GetItems(int Index);
	
protected:
	int FCurrent;
	int FShow;
	Xlscellareas5::TCellAreas* FSqref;
	
public:
	__fastcall TXc12Scenarios();
	__fastcall virtual ~TXc12Scenarios();
	virtual void __fastcall Clear();
	HIDESBASE TXc12Scenario* __fastcall Add();
	__property TXc12Scenario* Items[int Index] = {read=GetItems/*, default*/};
	__property int Current = {read=FCurrent, write=FCurrent, nodefault};
	__property int Show = {read=FShow, write=FShow, nodefault};
	__property Xlscellareas5::TCellAreas* _Sqref = {read=FSqref};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12ProtectedRange : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FPassword;
	Xlscellareas5::TCellAreas* FSqref;
	System::UnicodeString FName;
	System::UnicodeString FSecurityDescriptor;
	
public:
	__fastcall TXc12ProtectedRange();
	__fastcall virtual ~TXc12ProtectedRange();
	void __fastcall Clear();
	__property int Password = {read=FPassword, write=FPassword, nodefault};
	__property Xlscellareas5::TCellAreas* Sqref = {read=FSqref, write=FSqref};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString SecurityDescriptor = {read=FSecurityDescriptor, write=FSecurityDescriptor};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12ProtectedRanges : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12ProtectedRange* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12ProtectedRange* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12ProtectedRanges();
	HIDESBASE TXc12ProtectedRange* __fastcall Add();
	__property TXc12ProtectedRange* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12ProtectedRanges() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12OutlinePr : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FApplyStyles;
	bool FSummaryBelow;
	bool FSummaryRight;
	bool FShowOutlineSymbols;
	
public:
	__fastcall TXc12OutlinePr();
	void __fastcall Clear();
	__property bool ApplyStyles = {read=FApplyStyles, write=FApplyStyles, nodefault};
	__property bool SummaryBelow = {read=FSummaryBelow, write=FSummaryBelow, nodefault};
	__property bool SummaryRight = {read=FSummaryRight, write=FSummaryRight, nodefault};
	__property bool ShowOutlineSymbols = {read=FShowOutlineSymbols, write=FShowOutlineSymbols, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12OutlinePr() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12PageSetupPr : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FAutoPageBreaks;
	bool FFitToPage;
	
public:
	__fastcall TXc12PageSetupPr();
	void __fastcall Clear();
	__property bool AutoPageBreaks = {read=FAutoPageBreaks, write=FAutoPageBreaks, nodefault};
	__property bool FitToPage = {read=FFitToPage, write=FFitToPage, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12PageSetupPr() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXc12SheetPr : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FSyncHorizontal;
	bool FSyncVertical;
	Xc12utils5::TXLSCellArea FSyncRef;
	bool FTransitionEvaluation;
	bool FTransitionEntry;
	bool FPublished_;
	System::UnicodeString FCodeName;
	bool FFilterMode;
	bool FEnableFormatConditionsCalculation;
	Xc12utils5::TXc12Color FTabColor;
	TXc12OutlinePr* FOutlinePr;
	TXc12PageSetupPr* FPageSetupPr;
	
public:
	__fastcall TXc12SheetPr();
	__fastcall virtual ~TXc12SheetPr();
	void __fastcall Clear();
	__property bool SyncHorizontal = {read=FSyncHorizontal, write=FSyncHorizontal, nodefault};
	__property bool SyncVertical = {read=FSyncVertical, write=FSyncVertical, nodefault};
	__property Xc12utils5::TXLSCellArea SyncRef = {read=FSyncRef, write=FSyncRef};
	__property bool TransitionEvaluation = {read=FTransitionEvaluation, write=FTransitionEvaluation, nodefault};
	__property bool TransitionEntry = {read=FTransitionEntry, write=FTransitionEntry, nodefault};
	__property bool Published_ = {read=FPublished_, write=FPublished_, nodefault};
	__property System::UnicodeString CodeName = {read=FCodeName, write=FCodeName};
	__property bool FilterMode = {read=FFilterMode, write=FFilterMode, nodefault};
	__property bool EnableFormatConditionsCalculation = {read=FEnableFormatConditionsCalculation, write=FEnableFormatConditionsCalculation, nodefault};
	__property Xc12utils5::TXc12Color TabColor = {read=FTabColor, write=FTabColor};
	__property TXc12OutlinePr* OutlinePr = {read=FOutlinePr};
	__property TXc12PageSetupPr* PageSetupPr = {read=FPageSetupPr};
};


class PASCALIMPLEMENTATION TXc12SheetFormatPr : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FBaseColWidth;
	double FDefaultColWidth;
	double FDefaultRowHeight;
	bool FCustomHeight;
	bool FZeroHeight;
	bool FThickTop;
	bool FThickBottom;
	int FOutlineLevelRow;
	int FOutlineLevelCol;
	
public:
	__fastcall TXc12SheetFormatPr();
	void __fastcall Clear();
	void __fastcall Assign(TXc12SheetFormatPr* ASrc);
	__property int BaseColWidth = {read=FBaseColWidth, write=FBaseColWidth, nodefault};
	__property double DefaultColWidth = {read=FDefaultColWidth, write=FDefaultColWidth};
	__property double DefaultRowHeight = {read=FDefaultRowHeight, write=FDefaultRowHeight};
	__property bool CustomHeight = {read=FCustomHeight, write=FCustomHeight, nodefault};
	__property bool ZeroHeight = {read=FZeroHeight, write=FZeroHeight, nodefault};
	__property bool ThickTop = {read=FThickTop, write=FThickTop, nodefault};
	__property bool ThickBottom = {read=FThickBottom, write=FThickBottom, nodefault};
	__property int OutlineLevelRow = {read=FOutlineLevelRow, write=FOutlineLevelRow, nodefault};
	__property int OutlineLevelCol = {read=FOutlineLevelCol, write=FOutlineLevelCol, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12SheetFormatPr() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12SheetCalcPr : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FFullCalcOnLoad;
	
public:
	__fastcall TXc12SheetCalcPr();
	void __fastcall Clear();
	__property bool FullCalcOnLoad = {read=FFullCalcOnLoad, write=FFullCalcOnLoad, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12SheetCalcPr() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12SheetProtection : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString __fastcall GetPasswordAsString();
	void __fastcall SetPasswordAsString(const System::UnicodeString Value);
	
protected:
	System::Word FPassword;
	bool FSheet;
	bool FObjects;
	bool FScenarios;
	bool FFormatCells;
	bool FFormatColumns;
	bool FFormatRows;
	bool FInsertColumns;
	bool FInsertRows;
	bool FInsertHyperlinks;
	bool FDeleteColumns;
	bool FDeleteRows;
	bool FSelectLockedCells;
	bool FSort;
	bool FAutoFilter;
	bool FPivotTables;
	bool FSelectUnlockedCells;
	
public:
	__fastcall TXc12SheetProtection();
	void __fastcall Clear();
	__property System::Word Password = {read=FPassword, write=FPassword, nodefault};
	__property System::UnicodeString PasswordAsString = {read=GetPasswordAsString, write=SetPasswordAsString};
	__property bool Sheet = {read=FSheet, write=FSheet, nodefault};
	__property bool Objects = {read=FObjects, write=FObjects, nodefault};
	__property bool Scenarios = {read=FScenarios, write=FScenarios, nodefault};
	__property bool FormatCells = {read=FFormatCells, write=FFormatCells, nodefault};
	__property bool FormatColumns = {read=FFormatColumns, write=FFormatColumns, nodefault};
	__property bool FormatRows = {read=FFormatRows, write=FFormatRows, nodefault};
	__property bool InsertColumns = {read=FInsertColumns, write=FInsertColumns, nodefault};
	__property bool InsertRows = {read=FInsertRows, write=FInsertRows, nodefault};
	__property bool InsertHyperlinks = {read=FInsertHyperlinks, write=FInsertHyperlinks, nodefault};
	__property bool DeleteColumns = {read=FDeleteColumns, write=FDeleteColumns, nodefault};
	__property bool DeleteRows = {read=FDeleteRows, write=FDeleteRows, nodefault};
	__property bool SelectLockedCells = {read=FSelectLockedCells, write=FSelectLockedCells, nodefault};
	__property bool Sort = {read=FSort, write=FSort, nodefault};
	__property bool AutoFilter = {read=FAutoFilter, write=FAutoFilter, nodefault};
	__property bool PivotTables = {read=FPivotTables, write=FPivotTables, nodefault};
	__property bool SelectUnlockedCells = {read=FSelectUnlockedCells, write=FSelectUnlockedCells, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12SheetProtection() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DataConsolidate : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TXc12DataConsolidateFunction FFunction;
	bool FLeftLabels;
	bool FTopLabels;
	bool FLink;
	TXc12DataRefs* FDataRefs;
	
public:
	__fastcall TXc12DataConsolidate();
	__fastcall virtual ~TXc12DataConsolidate();
	void __fastcall Clear();
	__property TXc12DataConsolidateFunction Function_ = {read=FFunction, write=FFunction, nodefault};
	__property bool LeftLabels = {read=FLeftLabels, write=FLeftLabels, nodefault};
	__property bool TopLabels = {read=FTopLabels, write=FTopLabels, nodefault};
	__property bool Link = {read=FLink, write=FLink, nodefault};
	__property TXc12DataRefs* DataRefs = {read=FDataRefs};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12PhoneticPr : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FFontId;
	TXc12PhoneticType FType;
	TXc12PhoneticAlignment FAlignment;
	
public:
	__fastcall TXc12PhoneticPr();
	void __fastcall Clear();
	__property int FontId = {read=FFontId, write=FFontId, nodefault};
	__property TXc12PhoneticType Type_ = {read=FType, write=FType, nodefault};
	__property TXc12PhoneticAlignment Alignment = {read=FAlignment, write=FAlignment, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12PhoneticPr() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DataWorksheet : public Xlsutils5::TIndexObject
{
	typedef Xlsutils5::TIndexObject inherited;
	
private:
	Xc12utils5::TXLSCellArea __fastcall GetDimension();
	void __fastcall SetDimension(const Xc12utils5::TXLSCellArea &Value);
	System::UnicodeString __fastcall GetQuotedName();
	
protected:
	Xlsclassfactory5::TXLSClassFactory* FClassFactory;
	Xc12datasst5::TXc12DataSST* FSST;
	Xc12datastylesheet5::TXc12DataStyleSheet* FStyles;
	Xlscellmmu5::TXLSCellMMU* FCells;
	TXc12Columns* FColumns;
	Xc12datacomments5::TXc12Comments* FComments;
	TXc12Hyperlinks* FHyperlinks;
	TXc12MergedCells* FMergedCells;
	Xc12dataautofilter5::TXc12AutoFilter* FAutofilter;
	TXc12CustomSheetViews* FCustomSheetViews;
	TXc12SheetViews* FSheetViews;
	Xpgparserpivot::TCT_pivotTableDefinitions* FPivotTables;
	TXc12SheetPr* FSheetPr;
	TXc12SheetFormatPr* FSheetFormatPr;
	TXc12SheetCalcPr* FSheetCalcPr;
	TXc12SheetProtection* FSheetProtection;
	TXc12ProtectedRanges* FProtectedRanges;
	TXc12Scenarios* FScenarios;
	Xc12dataautofilter5::TXc12SortState* FSortState;
	TXc12DataConsolidate* FDataConsolidate;
	TXc12PhoneticPr* FPhoneticPr;
	TXc12ConditionalFormattings* FConditionalFormatting;
	TXc12DataValidations* FDataValidations;
	TXc12PrintOptions* FPrintOptions;
	TXc12PageMargins* FPageMargins;
	TXc12PageSetup* FPageSetup;
	TXc12HeaderFooter* FHeaderFooter;
	TXc12PageBreaks* FRowBreaks;
	TXc12PageBreaks* FColBreaks;
	TXc12CustomProperties* FCustomProperties;
	Xlscellareas5::TCellRefs* FCellWatches;
	TXc12IgnoredErrors* FIgnoredErrors;
	TXc12SmartTags* FSmartTags;
	TXc12OleObjects* FOleObjects;
	TXc12Controls* FControls;
	TXc12WebPublishItems* FWebPublishItems;
	Xc12datatable5::TXc12Tables* FTables;
	Xpgparsedrawing::TXPGDocXLSXDrawing* FDrawing;
	Xpgpsimpledom::TXpgSimpleDOM* FVmlDrawing;
	System::Classes::TStringList* FVmlDrawingRels;
	System::UnicodeString FName;
	int FSheetId;
	Xc12utils5::TXc12Visibility FState;
	System::UnicodeString FRId;
	bool FIsChartSheet;
	
public:
	__fastcall TXc12DataWorksheet(Xlsclassfactory5::TXLSClassFactory* AClassFactory, int AIndex, Xc12datasst5::TXc12DataSST* ASST, Xc12datastylesheet5::TXc12DataStyleSheet* AStyles);
	__fastcall virtual ~TXc12DataWorksheet();
	void __fastcall SetDefaultValues();
	void __fastcall Clear();
	__property Xlscellmmu5::TXLSCellMMU* Cells = {read=FCells};
	__property TXc12Columns* Columns = {read=FColumns};
	__property Xc12datacomments5::TXc12Comments* Comments = {read=FComments};
	__property Xc12datatable5::TXc12Tables* Tables = {read=FTables};
	__property TXc12Hyperlinks* Hyperlinks = {read=FHyperlinks};
	__property TXc12MergedCells* MergedCells = {read=FMergedCells};
	__property Xc12dataautofilter5::TXc12AutoFilter* Autofilter = {read=FAutofilter};
	__property TXc12CustomSheetViews* CustomSheetViews = {read=FCustomSheetViews};
	__property TXc12SheetViews* SheetViews = {read=FSheetViews};
	__property Xpgparserpivot::TCT_pivotTableDefinitions* PivotTables = {read=FPivotTables};
	__property TXc12SheetPr* SheetPr = {read=FSheetPr};
	__property Xc12utils5::TXLSCellArea Dimension = {read=GetDimension, write=SetDimension};
	__property TXc12SheetFormatPr* SheetFormatPr = {read=FSheetFormatPr};
	__property TXc12SheetCalcPr* SheetCalcPr = {read=FSheetCalcPr};
	__property TXc12SheetProtection* SheetProtection = {read=FSheetProtection};
	__property TXc12ProtectedRanges* ProtectedRanges = {read=FProtectedRanges};
	__property TXc12Scenarios* Scenarios = {read=FScenarios};
	__property Xc12dataautofilter5::TXc12SortState* SortState = {read=FSortState};
	__property TXc12DataConsolidate* DataConsolidate = {read=FDataConsolidate};
	__property TXc12PhoneticPr* PhoneticPr = {read=FPhoneticPr};
	__property TXc12ConditionalFormattings* ConditionalFormatting = {read=FConditionalFormatting};
	__property TXc12DataValidations* DataValidations = {read=FDataValidations};
	__property TXc12PrintOptions* PrintOptions = {read=FPrintOptions};
	__property TXc12PageMargins* PageMargins = {read=FPageMargins};
	__property TXc12PageSetup* PageSetup = {read=FPageSetup};
	__property TXc12HeaderFooter* HeaderFooter = {read=FHeaderFooter};
	__property TXc12PageBreaks* RowBreaks = {read=FRowBreaks};
	__property TXc12PageBreaks* ColBreaks = {read=FColBreaks};
	__property TXc12CustomProperties* CustomProperties = {read=FCustomProperties};
	__property Xlscellareas5::TCellRefs* CellWatches = {read=FCellWatches};
	__property TXc12IgnoredErrors* IgnoredErrors = {read=FIgnoredErrors};
	__property TXc12SmartTags* SmartTags = {read=FSmartTags};
	__property TXc12OleObjects* OleObjects = {read=FOleObjects};
	__property TXc12Controls* Controls = {read=FControls};
	__property TXc12WebPublishItems* WebPublishItems = {read=FWebPublishItems};
	__property Xpgparsedrawing::TXPGDocXLSXDrawing* Drawing = {read=FDrawing};
	__property Xpgpsimpledom::TXpgSimpleDOM* VmlDrawing = {read=FVmlDrawing};
	__property System::Classes::TStringList* VmlDrawingRels = {read=FVmlDrawingRels};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString QuotedName = {read=GetQuotedName};
	__property int _SheetId = {read=FSheetId, write=FSheetId, nodefault};
	__property Xc12utils5::TXc12Visibility State = {read=FState, write=FState, nodefault};
	__property System::UnicodeString RId = {read=FRId, write=FRId};
	__property bool IsChartSheet = {read=FIsChartSheet, write=FIsChartSheet, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DataWorksheets : public Xlsutils5::TIndexObjectList
{
	typedef Xlsutils5::TIndexObjectList inherited;
	
public:
	TXc12DataWorksheet* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12DataWorksheet* __fastcall GetItems(int Index);
	
protected:
	Xlsclassfactory5::TXLSClassFactory* FClassFactory;
	Xc12datasst5::TXc12DataSST* FSST;
	Xc12datastylesheet5::TXc12DataStyleSheet* FStyles;
	
public:
	__fastcall TXc12DataWorksheets(Xlsclassfactory5::TXLSClassFactory* AClassFactory, Xc12datasst5::TXc12DataSST* ASST, Xc12datastylesheet5::TXc12DataStyleSheet* AStyles);
	__fastcall virtual ~TXc12DataWorksheets();
	HIDESBASE void __fastcall Clear();
	HIDESBASE TXc12DataWorksheet* __fastcall Add(const int ASheetId);
	HIDESBASE TXc12DataWorksheet* __fastcall Insert(const int AIndex);
	int __fastcall Find(const System::UnicodeString AName);
	TXc12DataWorksheet* __fastcall FindSheetFromCells(Xlscellmmu5::TXLSCellMMU* const ACells);
	__property TXc12DataWorksheet* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xc12dataworksheet5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XC12DATAWORKSHEET5)
using namespace Xc12dataworksheet5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xc12dataworksheet5HPP
