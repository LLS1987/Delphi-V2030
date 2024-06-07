// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'xpgParserXLSX.pas' rev: 35.00 (Windows)

#ifndef XpgparserxlsxHPP
#define XpgparserxlsxHPP

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
#include <System.Math.hpp>
#include <xpgPUtils.hpp>
#include <xpgPLists.hpp>
#include <xpgPXMLUtils.hpp>
#include <XLSUtils5.hpp>
#include <xpgPXML.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xpgparserxlsx
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXPGDocBase;
class DELPHICLASS TXPGBase;
class DELPHICLASS TXPGBaseObjectList;
class DELPHICLASS TXPGReader;
class DELPHICLASS TCT_Extension;
class DELPHICLASS TCT_ExtensionXpgList;
class DELPHICLASS TCT_Index;
class DELPHICLASS TCT_IndexXpgList;
class DELPHICLASS TCT_ExtensionList;
class DELPHICLASS TCT_FontName;
class DELPHICLASS TCT_FontNameXpgList;
class DELPHICLASS TCT_IntProperty;
class DELPHICLASS TCT_IntPropertyXpgList;
class DELPHICLASS TCT_BooleanProperty;
class DELPHICLASS TCT_Color;
class DELPHICLASS TCT_ColorXpgList;
class DELPHICLASS TCT_FontSize;
class DELPHICLASS TCT_FontSizeXpgList;
class DELPHICLASS TCT_UnderlineProperty;
class DELPHICLASS TCT_VerticalAlignFontProperty;
class DELPHICLASS TCT_FontScheme;
class DELPHICLASS TCT_FontSchemeXpgList;
class DELPHICLASS TCT_PivotAreaReference;
class DELPHICLASS TCT_PivotAreaReferenceXpgList;
class DELPHICLASS TCT_Filter;
class DELPHICLASS TCT_FilterXpgList;
class DELPHICLASS TCT_DateGroupItem;
class DELPHICLASS TCT_DateGroupItemXpgList;
class DELPHICLASS TCT_CustomFilter;
class DELPHICLASS TCT_CustomFilterXpgList;
class DELPHICLASS TCT_RPrElt;
class DELPHICLASS TCT_GradientStop;
class DELPHICLASS TCT_GradientStopXpgList;
class DELPHICLASS TCT_PivotAreaReferences;
class DELPHICLASS TCT_Filters;
class DELPHICLASS TCT_Top10;
class DELPHICLASS TCT_CustomFilters;
class DELPHICLASS TCT_DynamicFilter;
class DELPHICLASS TCT_ColorFilter;
class DELPHICLASS TCT_IconFilter;
class DELPHICLASS TCT_SortCondition;
class DELPHICLASS TCT_SortConditionXpgList;
class DELPHICLASS TCT_RElt;
class DELPHICLASS TCT_REltXpgList;
class DELPHICLASS TCT_PhoneticRun;
class DELPHICLASS TCT_PhoneticRunXpgList;
class DELPHICLASS TCT_PhoneticPr;
class DELPHICLASS TCT_PatternFill;
class DELPHICLASS TCT_GradientFill;
class DELPHICLASS TCT_BorderPr;
class DELPHICLASS TCT_PivotArea;
class DELPHICLASS TCT_Break;
class DELPHICLASS TCT_BreakXpgList;
class DELPHICLASS TCT_FilterColumn;
class DELPHICLASS TCT_FilterColumnXpgList;
class DELPHICLASS TCT_SortState;
class DELPHICLASS TCT_CellFormula;
class DELPHICLASS TCT_Rst;
class DELPHICLASS TCT_RstXpgList;
class DELPHICLASS TCT_Cfvo;
class DELPHICLASS TCT_CfvoXpgList;
class DELPHICLASS TCT_CellSmartTagPr;
class DELPHICLASS TCT_CellSmartTagPrXpgList;
class DELPHICLASS TCT_CellAlignment;
class DELPHICLASS TCT_CellProtection;
class DELPHICLASS TCT_Font;
class DELPHICLASS TCT_FontXpgList;
class DELPHICLASS TCT_NumFmt;
class DELPHICLASS TCT_NumFmtXpgList;
class DELPHICLASS TCT_Fill;
class DELPHICLASS TCT_FillXpgList;
class DELPHICLASS TCT_Border;
class DELPHICLASS TCT_BorderXpgList;
class DELPHICLASS TCT_TableStyleElement;
class DELPHICLASS TCT_TableStyleElementXpgList;
class DELPHICLASS TCT_RgbColor;
class DELPHICLASS TCT_RgbColorXpgList;
class DELPHICLASS TCT_PageMargins;
class DELPHICLASS TCT_CsPageSetup;
class DELPHICLASS TCT_HeaderFooter;
class DELPHICLASS TCT_Pane;
class DELPHICLASS TCT_Selection;
class DELPHICLASS TCT_SelectionXpgList;
class DELPHICLASS TCT_PivotSelection;
class DELPHICLASS TCT_PivotSelectionXpgList;
class DELPHICLASS TCT_PageBreak;
class DELPHICLASS TCT_PrintOptions;
class DELPHICLASS TCT_PageSetup;
class DELPHICLASS TCT_AutoFilter;
class DELPHICLASS TCT_Cell;
class DELPHICLASS TCT_CellXpgList;
class DELPHICLASS TCT_InputCells;
class DELPHICLASS TCT_InputCellsXpgList;
class DELPHICLASS TCT_DataRef;
class DELPHICLASS TCT_DataRefXpgList;
class DELPHICLASS TCT_ColorScale;
class DELPHICLASS TCT_DataBar;
class DELPHICLASS TCT_IconSet;
class DELPHICLASS TCT_CellSmartTag;
class DELPHICLASS TCT_CellSmartTagXpgList;
class DELPHICLASS TCT_Xf;
class DELPHICLASS TCT_XfXpgList;
class DELPHICLASS TCT_CellStyle;
class DELPHICLASS TCT_CellStyleXpgList;
class DELPHICLASS TCT_Dxf;
class DELPHICLASS TCT_DxfXpgList;
class DELPHICLASS TCT_TableStyle;
class DELPHICLASS TCT_TableStyleXpgList;
class DELPHICLASS TCT_IndexedColors;
class DELPHICLASS TCT_MRUColors;
class DELPHICLASS TCT_BookView;
class DELPHICLASS TCT_BookViewXpgList;
class DELPHICLASS TCT_Sheet;
class DELPHICLASS TCT_SheetXpgList;
class DELPHICLASS TCT_FunctionGroup;
class DELPHICLASS TCT_FunctionGroupXpgList;
class DELPHICLASS TCT_ExternalReference;
class DELPHICLASS TCT_ExternalReferenceXpgList;
class DELPHICLASS TCT_DefinedName;
class DELPHICLASS TCT_DefinedNameXpgList;
class DELPHICLASS TCT_CustomWorkbookView;
class DELPHICLASS TCT_CustomWorkbookViewXpgList;
class DELPHICLASS TCT_PivotCache;
class DELPHICLASS TCT_PivotCacheXpgList;
class DELPHICLASS TCT_SmartTagType;
class DELPHICLASS TCT_SmartTagTypeXpgList;
class DELPHICLASS TCT_WebPublishObject;
class DELPHICLASS TCT_WebPublishObjectXpgList;
class DELPHICLASS TCT_Comment;
class DELPHICLASS TCT_CommentXpgList;
class DELPHICLASS TCT_ChartsheetView;
class DELPHICLASS TCT_ChartsheetViewXpgList;
class DELPHICLASS TCT_CustomChartsheetView;
class DELPHICLASS TCT_CustomChartsheetViewXpgList;
class DELPHICLASS TCT_WebPublishItem;
class DELPHICLASS TCT_WebPublishItemXpgList;
class DELPHICLASS TCT_OutlinePr;
class DELPHICLASS TCT_PageSetUpPr;
class DELPHICLASS TCT_SheetView;
class DELPHICLASS TCT_SheetViewXpgList;
class DELPHICLASS TCT_CustomSheetView;
class DELPHICLASS TCT_CustomSheetViewXpgList;
class DELPHICLASS TCT_OleObject;
class DELPHICLASS TCT_OleObjectXpgList;
class DELPHICLASS TCT_Col;
class DELPHICLASS TCT_ColXpgList;
class DELPHICLASS TCT_Row;
class DELPHICLASS TCT_RowXpgList;
class DELPHICLASS TCT_ProtectedRange;
class DELPHICLASS TCT_ProtectedRangeXpgList;
class DELPHICLASS TCT_Scenario;
class DELPHICLASS TCT_ScenarioXpgList;
class DELPHICLASS TCT_DataRefs;
class DELPHICLASS TCT_MergeCell;
class DELPHICLASS TCT_MergeCellXpgList;
class DELPHICLASS TCT_CfRule;
class DELPHICLASS TCT_CfRuleXpgList;
class DELPHICLASS TCT_DataValidation;
class DELPHICLASS TCT_DataValidationXpgList;
class DELPHICLASS TCT_Hyperlink;
class DELPHICLASS TCT_HyperlinkXpgList;
class DELPHICLASS TCT_CustomProperty;
class DELPHICLASS TCT_CustomPropertyXpgList;
class DELPHICLASS TCT_CellWatch;
class DELPHICLASS TCT_CellWatchXpgList;
class DELPHICLASS TCT_IgnoredError;
class DELPHICLASS TCT_IgnoredErrorXpgList;
class DELPHICLASS TCT_CellSmartTags;
class DELPHICLASS TCT_CellSmartTagsXpgList;
class DELPHICLASS TCT_Control;
class DELPHICLASS TCT_ControlXpgList;
class DELPHICLASS TCT_TablePart;
class DELPHICLASS TCT_TablePartXpgList;
class DELPHICLASS TCT_NumFmts;
class DELPHICLASS TCT_Fonts;
class DELPHICLASS TCT_Fills;
class DELPHICLASS TCT_Borders;
class DELPHICLASS TCT_CellStyleXfs;
class DELPHICLASS TCT_CellXfs;
class DELPHICLASS TCT_CellStyles;
class DELPHICLASS TCT_Dxfs;
class DELPHICLASS TCT_TableStyles;
class DELPHICLASS TCT_Colors;
class DELPHICLASS TCT_FileVersion;
class DELPHICLASS TCT_FileSharing;
class DELPHICLASS TCT_WorkbookPr;
class DELPHICLASS TCT_WorkbookProtection;
class DELPHICLASS TCT_BookViews;
class DELPHICLASS TCT_Sheets;
class DELPHICLASS TCT_FunctionGroups;
class DELPHICLASS TCT_ExternalReferences;
class DELPHICLASS TCT_DefinedNames;
class DELPHICLASS TCT_CalcPr;
class DELPHICLASS TCT_OleSize;
class DELPHICLASS TCT_CustomWorkbookViews;
class DELPHICLASS TCT_PivotCaches;
class DELPHICLASS TCT_SmartTagPr;
class DELPHICLASS TCT_SmartTagTypes;
class DELPHICLASS TCT_WebPublishing;
class DELPHICLASS TCT_FileRecoveryPr;
class DELPHICLASS TCT_FileRecoveryPrXpgList;
class DELPHICLASS TCT_WebPublishObjects;
class DELPHICLASS TCT_Authors;
class DELPHICLASS TCT_CommentList;
class DELPHICLASS TCT_ChartsheetPr;
class DELPHICLASS TCT_ChartsheetViews;
class DELPHICLASS TCT_ChartsheetProtection;
class DELPHICLASS TCT_CustomChartsheetViews;
class DELPHICLASS TCT_Drawing;
class DELPHICLASS TCT_LegacyDrawing;
class DELPHICLASS TCT_SheetBackgroundPicture;
class DELPHICLASS TCT_WebPublishItems;
class DELPHICLASS TCT_SheetPr;
class DELPHICLASS TCT_SheetViews;
class DELPHICLASS TCT_SheetFormatPr;
class DELPHICLASS TCT_SheetProtection;
class DELPHICLASS TCT_CustomSheetViews;
class DELPHICLASS TCT_OleObjects;
class DELPHICLASS TCT_SheetDimension;
class DELPHICLASS TCT_Cols;
class DELPHICLASS TCT_ColsXpgList;
class DELPHICLASS TCT_SheetData;
class DELPHICLASS TCT_SheetCalcPr;
class DELPHICLASS TCT_ProtectedRanges;
class DELPHICLASS TCT_Scenarios;
class DELPHICLASS TCT_DataConsolidate;
class DELPHICLASS TCT_MergeCells;
class DELPHICLASS TCT_ConditionalFormatting;
class DELPHICLASS TCT_ConditionalFormattingXpgList;
class DELPHICLASS TCT_DataValidations;
class DELPHICLASS TCT_Hyperlinks;
class DELPHICLASS TCT_CustomProperties;
class DELPHICLASS TCT_CellWatches;
class DELPHICLASS TCT_IgnoredErrors;
class DELPHICLASS TCT_SmartTags;
class DELPHICLASS TCT_Controls;
class DELPHICLASS TCT_TableParts;
class DELPHICLASS TCT_Stylesheet;
class DELPHICLASS TCT_Sst;
class DELPHICLASS TCT_Workbook;
class DELPHICLASS TCT_Comments;
class DELPHICLASS TCT_Chartsheet;
class DELPHICLASS TCT_Dialogsheet;
class DELPHICLASS TCT_Worksheet;
class DELPHICLASS TCT_Macrosheet;
class DELPHICLASS TCT_TableStyleInfo;
class DELPHICLASS TCT_XmlColumnPr;
class DELPHICLASS TCT_TableFormula;
class DELPHICLASS TCT_TableColumn;
class DELPHICLASS TCT_TableColumnXpgList;
class DELPHICLASS TCT_TableColumns;
class DELPHICLASS TCT_Table;
class DELPHICLASS T__ROOT__;
class DELPHICLASS TCT_XStringElement;
class DELPHICLASS TXPGDocXLSX;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TST_UnderlineValues : unsigned char { stuvSingle, stuvDouble, stuvSingleAccounting, stuvDoubleAccounting, stuvNone };

typedef System::StaticArray<System::UnicodeString, 5> Xpgparserxlsx__1;

enum DECLSPEC_DENUM TST_VerticalAlignRun : unsigned char { stvarBaseline, stvarSuperscript, stvarSubscript };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparserxlsx__2;

enum DECLSPEC_DENUM TST_VerticalAlignment : unsigned char { stvaTop, stvaCenter, stvaBottom, stvaJustify, stvaDistributed };

typedef System::StaticArray<System::UnicodeString, 5> Xpgparserxlsx__3;

enum DECLSPEC_DENUM TST_BorderStyle : unsigned char { stbsNone, stbsThin, stbsMedium, stbsDashed, stbsDotted, stbsThick, stbsDouble, stbsHair, stbsMediumDashed, stbsDashDot, stbsMediumDashDot, stbsDashDotDot, stbsMediumDashDotDot, stbsSlantDashDot };

typedef System::StaticArray<System::UnicodeString, 14> Xpgparserxlsx__4;

enum DECLSPEC_DENUM TST_PatternType : unsigned char { stptNone, stptSolid, stptMediumGray, stptDarkGray, stptLightGray, stptDarkHorizontal, stptDarkVertical, stptDarkDown, stptDarkUp, stptDarkGrid, stptDarkTrellis, stptLightHorizontal, stptLightVertical, stptLightDown, stptLightUp, stptLightGrid, stptLightTrellis, stptGray125, stptGray0625 };

typedef System::StaticArray<System::UnicodeString, 19> Xpgparserxlsx__5;

enum DECLSPEC_DENUM TST_FontScheme : unsigned char { stfsNone, stfsMajor, stfsMinor };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparserxlsx__6;

enum DECLSPEC_DENUM TST_GradientType : unsigned char { stgtLinear, stgtPath };

typedef System::StaticArray<System::UnicodeString, 2> Xpgparserxlsx__7;

enum DECLSPEC_DENUM TST_TableStyleType : unsigned char { sttstWholeTable, sttstHeaderRow, sttstTotalRow, sttstFirstColumn, sttstLastColumn, sttstFirstRowStripe, sttstSecondRowStripe, sttstFirstColumnStripe, sttstSecondColumnStripe, sttstFirstHeaderCell, sttstLastHeaderCell, sttstFirstTotalCell, sttstLastTotalCell, sttstFirstSubtotalColumn, sttstSecondSubtotalColumn, sttstThirdSubtotalColumn, sttstFirstSubtotalRow, sttstSecondSubtotalRow, sttstThirdSubtotalRow, sttstBlankRow, sttstFirstColumnSubheading, sttstSecondColumnSubheading, sttstThirdColumnSubheading, sttstFirstRowSubheading, sttstSecondRowSubheading, sttstThirdRowSubheading, sttstPageFieldLabels, sttstPageFieldValues };

typedef System::StaticArray<System::UnicodeString, 28> Xpgparserxlsx__8;

enum DECLSPEC_DENUM TST_HorizontalAlignment : unsigned char { sthaGeneral, sthaLeft, sthaCenter, sthaRight, sthaFill, sthaJustify, sthaCenterContinuous, sthaDistributed };

typedef System::StaticArray<System::UnicodeString, 8> Xpgparserxlsx__9;

enum DECLSPEC_DENUM TST_PhoneticAlignment : unsigned char { stpaNoControl, stpaLeft, stpaCenter, stpaDistributed };

typedef System::StaticArray<System::UnicodeString, 4> Xpgparserxlsx__01;

enum DECLSPEC_DENUM TST_PhoneticType : unsigned char { stptHalfwidthKatakana, stptFullwidthKatakana, stptHiragana, stptNoConversion };

typedef System::StaticArray<System::UnicodeString, 4> Xpgparserxlsx__11;

enum DECLSPEC_DENUM TST_DateTimeGrouping : unsigned char { stdtgYear, stdtgMonth, stdtgDay, stdtgHour, stdtgMinute, stdtgSecond };

typedef System::StaticArray<System::UnicodeString, 6> Xpgparserxlsx__21;

enum DECLSPEC_DENUM TST_SortMethod : unsigned char { stsmStroke, stsmPinYin, stsmNone };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparserxlsx__31;

enum DECLSPEC_DENUM TST_CalendarType : unsigned char { stctNone, stctGregorian, stctGregorianUs, stctJapan, stctTaiwan, stctKorea, stctHijri, stctThai, stctHebrew, stctGregorianMeFrench, stctGregorianArabic, stctGregorianXlitEnglish, stctGregorianXlitFrench };

typedef System::StaticArray<System::UnicodeString, 13> Xpgparserxlsx__41;

enum DECLSPEC_DENUM TST_SortBy : unsigned char { stsbValue, stsbCellColor, stsbFontColor, stsbIcon };

typedef System::StaticArray<System::UnicodeString, 4> Xpgparserxlsx__51;

enum DECLSPEC_DENUM TST_IconSetType : unsigned char { stist3Arrows, stist3ArrowsGray, stist3Flags, stist3TrafficLights1, stist3TrafficLights2, stist3Signs, stist3Symbols, stist3Symbols2, stist4Arrows, stist4ArrowsGray, stist4RedToBlack, stist4Rating, stist4TrafficLights, stist5Arrows, stist5ArrowsGray, stist5Rating, stist5Quarters };

typedef System::StaticArray<System::UnicodeString, 17> Xpgparserxlsx__61;

enum DECLSPEC_DENUM TST_DynamicFilterType : unsigned char { stdftNull, stdftAboveAverage, stdftBelowAverage, stdftTomorrow, stdftToday, stdftYesterday, stdftNextWeek, stdftThisWeek, stdftLastWeek, stdftNextMonth, stdftThisMonth, stdftLastMonth, stdftNextQuarter, stdftThisQuarter, stdftLastQuarter, stdftNextYear, stdftThisYear, stdftLastYear, stdftYearToDate, stdftQ1, stdftQ2, stdftQ3, stdftQ4, stdftM1, stdftM2, stdftM3, stdftM4, stdftM5, stdftM6, stdftM7, stdftM8, stdftM9, stdftM10, stdftM11, stdftM12 };

typedef System::StaticArray<System::UnicodeString, 35> Xpgparserxlsx__71;

enum DECLSPEC_DENUM TST_FilterOperator : unsigned char { stfoEqual, stfoLessThan, stfoLessThanOrEqual, stfoNotEqual, stfoGreaterThanOrEqual, stfoGreaterThan };

typedef System::StaticArray<System::UnicodeString, 6> Xpgparserxlsx__81;

enum DECLSPEC_DENUM TST_Axis : unsigned char { staAxisRow, staAxisCol, staAxisPage, staAxisValues };

typedef System::StaticArray<System::UnicodeString, 4> Xpgparserxlsx__91;

enum DECLSPEC_DENUM TST_PivotAreaType : unsigned char { stpatNone, stpatNormal, stpatData, stpatAll, stpatOrigin, stpatButton, stpatTopRight };

typedef System::StaticArray<System::UnicodeString, 7> Xpgparserxlsx__02;

enum DECLSPEC_DENUM TST_Visibility : unsigned char { stvVisible, stvHidden, stvVeryHidden };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparserxlsx__12;

enum DECLSPEC_DENUM TST_CalcMode : unsigned char { stcmManual, stcmAuto, stcmAutoNoTable };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparserxlsx__22;

enum DECLSPEC_DENUM TST_UpdateLinks : unsigned char { stulUserSet, stulNever, stulAlways };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparserxlsx__32;

enum DECLSPEC_DENUM TST_TargetScreenSize : unsigned char { sttss544x376, sttss640x480, sttss720x512, sttss800x600, sttss1024x768, sttss1152x882, sttss1152x900, sttss1280x1024, sttss1600x1200, sttss1800x1440, sttss1920x1200 };

typedef System::StaticArray<System::UnicodeString, 11> Xpgparserxlsx__42;

enum DECLSPEC_DENUM TST_Comments : unsigned char { stcCommNone, stcCommIndicator, stcCommIndAndComment };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparserxlsx__52;

enum DECLSPEC_DENUM TST_Objects : unsigned char { stoAll, stoPlaceholders, stoNone };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparserxlsx__62;

enum DECLSPEC_DENUM TST_SmartTagShow : unsigned char { ststsAll, ststsNone, ststsNoIndicator };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparserxlsx__72;

enum DECLSPEC_DENUM TST_RefMode : unsigned char { strmA1, strmR1C1 };

typedef System::StaticArray<System::UnicodeString, 2> Xpgparserxlsx__82;

enum DECLSPEC_DENUM TST_SheetState : unsigned char { stssVisible, stssHidden, stssVeryHidden };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparserxlsx__92;

enum DECLSPEC_DENUM TST_DvAspect : unsigned char { stdaDVASPECT_CONTENT, stdaDVASPECT_ICON };

typedef System::StaticArray<System::UnicodeString, 2> Xpgparserxlsx__03;

enum DECLSPEC_DENUM TST_CfvoType : unsigned char { stctNum, stctPercent, stctMax, stctMin, stctFormula, stctPercentile };

typedef System::StaticArray<System::UnicodeString, 6> Xpgparserxlsx__13;

enum DECLSPEC_DENUM TST_PageOrder : unsigned char { stpoDownThenOver, stpoOverThenDown };

typedef System::StaticArray<System::UnicodeString, 2> Xpgparserxlsx__23;

enum DECLSPEC_DENUM TST_CellType : unsigned char { stctB, stctN, stctD, stctE, stctS, stctStr, stctInlineStr };

typedef System::StaticArray<System::UnicodeString, 7> Xpgparserxlsx__33;

enum DECLSPEC_DENUM TST_PaneState : unsigned char { stpsSplit, stpsFrozen, stpsFrozenSplit };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparserxlsx__43;

enum DECLSPEC_DENUM TST_CellFormulaType : unsigned char { stcftNormal, stcftArray, stcftDataTable, stcftShared };

typedef System::StaticArray<System::UnicodeString, 4> Xpgparserxlsx__53;

enum DECLSPEC_DENUM TST_CellComments : unsigned char { stccNone, stccAsDisplayed, stccAtEnd };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparserxlsx__63;

enum DECLSPEC_DENUM TST_DataValidationOperator : unsigned char { stdvoBetween, stdvoNotBetween, stdvoEqual, stdvoNotEqual, stdvoLessThan, stdvoLessThanOrEqual, stdvoGreaterThan, stdvoGreaterThanOrEqual };

typedef System::StaticArray<System::UnicodeString, 8> Xpgparserxlsx__73;

enum DECLSPEC_DENUM TST_CfType : unsigned char { stctExpression, stctCellIs, stctColorScale, stctDataBar, stctIconSet, stctTop10, stctUniqueValues, stctDuplicateValues, stctContainsText, stctNotContainsText, stctBeginsWith, stctEndsWith, stctContainsBlanks, stctNotContainsBlanks, stctContainsErrors, stctNotContainsErrors, stctTimePeriod, stctAboveAverage };

typedef System::StaticArray<System::UnicodeString, 18> Xpgparserxlsx__83;

enum DECLSPEC_DENUM TST_PrintError : unsigned char { stpeDisplayed, stpeBlank, stpeDash, stpeNA };

typedef System::StaticArray<System::UnicodeString, 4> Xpgparserxlsx__93;

enum DECLSPEC_DENUM TST_OleUpdate : unsigned char { stouOLEUPDATE_ALWAYS, stouOLEUPDATE_ONCALL };

typedef System::StaticArray<System::UnicodeString, 2> Xpgparserxlsx__04;

enum DECLSPEC_DENUM TST_WebSourceType : unsigned char { stwstSheet, stwstPrintArea, stwstAutoFilter, stwstRange, stwstChart, stwstPivotTable, stwstQuery, stwstLabel };

typedef System::StaticArray<System::UnicodeString, 8> Xpgparserxlsx__14;

enum DECLSPEC_DENUM TST_DataValidationErrorStyle : unsigned char { stdvesStop, stdvesWarning, stdvesInformation };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparserxlsx__24;

enum DECLSPEC_DENUM TST_TimePeriod : unsigned char { sttpToday, sttpYesterday, sttpTomorrow, sttpLast7Days, sttpThisMonth, sttpLastMonth, sttpNextMonth, sttpThisWeek, sttpLastWeek, sttpNextWeek };

typedef System::StaticArray<System::UnicodeString, 10> Xpgparserxlsx__34;

enum DECLSPEC_DENUM TST_Pane : unsigned char { stpBottomRight, stpTopRight, stpBottomLeft, stpTopLeft };

typedef System::StaticArray<System::UnicodeString, 4> Xpgparserxlsx__44;

enum DECLSPEC_DENUM TST_ConditionalFormattingOperator : unsigned char { stcfoLessThan, stcfoLessThanOrEqual, stcfoEqual, stcfoNotEqual, stcfoGreaterThanOrEqual, stcfoGreaterThan, stcfoBetween, stcfoNotBetween, stcfoContainsText, stcfoNotContains, stcfoBeginsWith, stcfoEndsWith };

typedef System::StaticArray<System::UnicodeString, 12> Xpgparserxlsx__54;

enum DECLSPEC_DENUM TST_DataValidationImeMode : unsigned char { stdvimNoControl, stdvimOff, stdvimOn, stdvimDisabled, stdvimHiragana, stdvimFullKatakana, stdvimHalfKatakana, stdvimFullAlpha, stdvimHalfAlpha, stdvimFullHangul, stdvimHalfHangul };

typedef System::StaticArray<System::UnicodeString, 11> Xpgparserxlsx__64;

enum DECLSPEC_DENUM TST_SheetViewType : unsigned char { stsvtNormal, stsvtPageBreakPreview, stsvtPageLayout };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparserxlsx__74;

enum DECLSPEC_DENUM TST_DataConsolidateFunction : unsigned char { stdcfAverage, stdcfCount, stdcfCountNums, stdcfMax, stdcfMin, stdcfProduct, stdcfStdDev, stdcfStdDevp, stdcfSum, stdcfVar, stdcfVarp };

typedef System::StaticArray<System::UnicodeString, 11> Xpgparserxlsx__84;

enum DECLSPEC_DENUM TST_DataValidationType : unsigned char { stdvtNone, stdvtWhole, stdvtDecimal, stdvtList, stdvtDate, stdvtTime, stdvtTextLength, stdvtCustom };

typedef System::StaticArray<System::UnicodeString, 8> Xpgparserxlsx__94;

enum DECLSPEC_DENUM TST_Orientation : unsigned char { stoDefault, stoPortrait, stoLandscape };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparserxlsx__05;

enum DECLSPEC_DENUM TST_TableType : unsigned char { stttWorksheet, stttXml, stttQueryTable };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparserxlsx__15;

enum DECLSPEC_DENUM TST_TotalsRowFunction : unsigned char { sttrfNone, sttrfSum, sttrfMin, sttrfMax, sttrfAverage, sttrfCount, sttrfCountNums, sttrfStdDev, sttrfVar, sttrfCustom };

typedef System::StaticArray<System::UnicodeString, 10> Xpgparserxlsx__25;

enum DECLSPEC_DENUM TST_XmlDataType : unsigned char { stxdtString, stxdtNormalizedString, stxdtToken, stxdtByte, stxdtUnsignedByte, stxdtBase64Binary, stxdtHexBinary, stxdtInteger, stxdtPositiveInteger, stxdtNegativeInteger, stxdtNonPositiveInteger, stxdtNonNegativeInteger, stxdtInt, stxdtUnsignedInt, stxdtLong, stxdtUnsignedLong, stxdtShort, stxdtUnsignedShort, stxdtDecimal, stxdtFloat, stxdtDouble, stxdtBoolean, stxdtTime, stxdtDateTime, stxdtDuration, stxdtDate, stxdtGMonth, stxdtGYear, stxdtGYearMonth, stxdtGDay, stxdtGMonthDay, stxdtName, stxdtQName, stxdtNCName, stxdtAnyURI, stxdtLanguage, stxdtID, stxdtIDREF, stxdtIDREFS, stxdtENTITY, stxdtENTITIES, stxdtNOTATION, stxdtNMTOKEN, stxdtNMTOKENS, stxdtAnyType };

typedef System::StaticArray<System::UnicodeString, 45> Xpgparserxlsx__35;

class PASCALIMPLEMENTATION TXPGDocBase : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xpgputils::TXpgPErrors* FErrors;
	System::Classes::TNotifyEvent FOnReadWorksheetColsCol;
	Xpgputils::TWriteElementEvent FOnWriteWorksheetColsCol;
	
public:
	__property Xpgputils::TXpgPErrors* Errors = {read=FErrors, write=FErrors};
	__property System::Classes::TNotifyEvent OnReadWorksheetColsCol = {read=FOnReadWorksheetColsCol, write=FOnReadWorksheetColsCol};
	__property Xpgputils::TWriteElementEvent OnWriteWorksheetColsCol = {read=FOnWriteWorksheetColsCol, write=FOnWriteWorksheetColsCol};
public:
	/* TObject.Create */ inline __fastcall TXPGDocBase() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXPGDocBase() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGBase : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TXPGDocBase* FOwner;
	int FElementCount;
	int FAttributeCount;
	Xpgpxmlutils::TXpgAssigneds FAssigneds;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	virtual void __fastcall AfterTag(TXPGReader* AReader);
	__classmethod int __fastcall StrToEnum(const System::UnicodeString AValue);
	__classmethod int __fastcall StrToEnumDef(const System::UnicodeString AValue, int ADefault);
	__classmethod bool __fastcall TryStrToEnum(const System::UnicodeString AValue, System::UnicodeString AText, System::UnicodeString *AEnumNames, const int AEnumNames_High, System::PInteger APtrInt);
	
public:
	__classmethod void __fastcall AddEnums();
	bool __fastcall Available();
	bool __fastcall Assigned();
	__property int ElementCount = {read=FElementCount, write=FElementCount, nodefault};
	__property int AttributeCount = {read=FAttributeCount, write=FAttributeCount, nodefault};
	__property Xpgpxmlutils::TXpgAssigneds Assigneds = {read=FAssigneds, write=FAssigneds, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXPGBase() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXPGBase() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGBaseObjectList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
protected:
	TXPGDocBase* FOwner;
	bool FAssigned;
	TXPGBase* __fastcall GetItems(int Index);
	
public:
	__fastcall TXPGBaseObjectList(TXPGDocBase* AOwner);
	__property TXPGBase* Items[int Index] = {read=GetItems};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXPGBaseObjectList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGReader : public Xpgpxml::TXpgReadXML
{
	typedef Xpgpxml::TXpgReadXML inherited;
	
protected:
	TXPGBase* FCurrent;
	System::Contnrs::TObjectStack* FStack;
	Xpgputils::TXpgPErrors* FErrors;
	bool FEof;
	
public:
	__fastcall TXPGReader(Xpgputils::TXpgPErrors* AErrors, TXPGBase* ARoot);
	__fastcall virtual ~TXPGReader();
	virtual void __fastcall BeginTag();
	virtual void __fastcall EndTag();
	__property bool Eof = {read=FEof, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Extension : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FUri;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Extension(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Extension();
	void __fastcall Clear();
	__property System::UnicodeString Uri = {read=FUri, write=FUri};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExtensionXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Extension* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Extension* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Extension* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Extension* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ExtensionXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ExtensionXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Index : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FV;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Index(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Index();
	void __fastcall Clear();
	__property int V = {read=FV, write=FV, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_IndexXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Index* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Index* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Index* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Index* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_IndexXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_IndexXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExtensionList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_ExtensionXpgList* FExtXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_ExtensionList(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ExtensionList();
	void __fastcall Clear();
	__property TCT_ExtensionXpgList* ExtXpgList = {read=FExtXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FontName : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FVal;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_FontName(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FontName();
	void __fastcall Clear();
	__property System::UnicodeString Val = {read=FVal, write=FVal};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FontNameXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_FontName* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_FontName* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_FontName* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_FontName* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_FontNameXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_FontNameXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_IntProperty : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FVal;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_IntProperty(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_IntProperty();
	void __fastcall Clear();
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_IntPropertyXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_IntProperty* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_IntProperty* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_IntProperty* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_IntProperty* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_IntPropertyXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_IntPropertyXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BooleanProperty : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FVal;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_BooleanProperty(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BooleanProperty();
	void __fastcall Clear();
	__property bool Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_Color : public TXPGBase
{
	typedef TXPGBase inherited;
	
private:
	void __fastcall SetRgb(const int Value);
	
protected:
	bool FAuto;
	int FIndexed;
	int FRgb;
	bool FRgbAssigned;
	int FTheme;
	double FTint;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Color(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Color();
	void __fastcall Clear();
	__property bool Auto = {read=FAuto, write=FAuto, nodefault};
	__property int Indexed = {read=FIndexed, write=FIndexed, nodefault};
	__property int Rgb = {read=FRgb, write=SetRgb, nodefault};
	__property int Theme = {read=FTheme, write=FTheme, nodefault};
	__property double Tint = {read=FTint, write=FTint};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ColorXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Color* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Color* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Color* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Color* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ColorXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ColorXpgList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_FontSize : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	double FVal;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_FontSize(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FontSize();
	void __fastcall Clear();
	__property double Val = {read=FVal, write=FVal};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FontSizeXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_FontSize* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_FontSize* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_FontSize* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_FontSize* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_FontSizeXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_FontSizeXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_UnderlineProperty : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_UnderlineValues FVal;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_UnderlineProperty(TXPGDocBase* AOwner);
	void __fastcall Clear();
	__property TST_UnderlineValues Val = {read=FVal, write=FVal, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCT_UnderlineProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_VerticalAlignFontProperty : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_VerticalAlignRun FVal;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_VerticalAlignFontProperty(TXPGDocBase* AOwner);
	void __fastcall Clear();
	__property TST_VerticalAlignRun Val = {read=FVal, write=FVal, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCT_VerticalAlignFontProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FontScheme : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_FontScheme FVal;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_FontScheme(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FontScheme();
	void __fastcall Clear();
	__property TST_FontScheme Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FontSchemeXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_FontScheme* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_FontScheme* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_FontScheme* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_FontScheme* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_FontSchemeXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_FontSchemeXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotAreaReference : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FField;
	int FCount;
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
	TCT_IndexXpgList* FXXpgList;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_PivotAreaReference(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotAreaReference();
	void __fastcall Clear();
	__property int Field = {read=FField, write=FField, nodefault};
	__property int Count_ = {read=FCount, write=FCount, nodefault};
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
	__property TCT_IndexXpgList* XXpgList = {read=FXXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotAreaReferenceXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_PivotAreaReference* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_PivotAreaReference* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_PivotAreaReference* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_PivotAreaReference* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PivotAreaReferenceXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PivotAreaReferenceXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Filter : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FVal;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Filter(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Filter();
	void __fastcall Clear();
	__property System::UnicodeString Val = {read=FVal, write=FVal};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FilterXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Filter* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Filter* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Filter* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Filter* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_FilterXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_FilterXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DateGroupItem : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FYear;
	int FMonth;
	int FDay;
	int FHour;
	int FMinute;
	int FSecond;
	TST_DateTimeGrouping FDateTimeGrouping;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_DateGroupItem(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DateGroupItem();
	void __fastcall Clear();
	__property int Year = {read=FYear, write=FYear, nodefault};
	__property int Month = {read=FMonth, write=FMonth, nodefault};
	__property int Day = {read=FDay, write=FDay, nodefault};
	__property int Hour = {read=FHour, write=FHour, nodefault};
	__property int Minute = {read=FMinute, write=FMinute, nodefault};
	__property int Second = {read=FSecond, write=FSecond, nodefault};
	__property TST_DateTimeGrouping DateTimeGrouping = {read=FDateTimeGrouping, write=FDateTimeGrouping, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DateGroupItemXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_DateGroupItem* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_DateGroupItem* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_DateGroupItem* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_DateGroupItem* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_DateGroupItemXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_DateGroupItemXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustomFilter : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_FilterOperator FOperator;
	System::UnicodeString FVal;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CustomFilter(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CustomFilter();
	void __fastcall Clear();
	__property TST_FilterOperator Operator_ = {read=FOperator, write=FOperator, nodefault};
	__property System::UnicodeString Val = {read=FVal, write=FVal};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustomFilterXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_CustomFilter* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_CustomFilter* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_CustomFilter* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_CustomFilter* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CustomFilterXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CustomFilterXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RPrElt : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_FontName* FRFont;
	TCT_IntProperty* FCharset;
	TCT_IntProperty* FFamily;
	TCT_BooleanProperty* FB;
	TCT_BooleanProperty* FI;
	TCT_BooleanProperty* FStrike;
	TCT_BooleanProperty* FOutline;
	TCT_BooleanProperty* FShadow;
	TCT_BooleanProperty* FCondense;
	TCT_BooleanProperty* FExtend;
	TCT_Color* FColor;
	TCT_FontSize* FSz;
	TCT_UnderlineProperty* FU;
	TCT_VerticalAlignFontProperty* FVertAlign;
	TCT_FontScheme* FScheme;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_RPrElt(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_RPrElt();
	void __fastcall Clear();
	__property TCT_FontName* RFont = {read=FRFont};
	__property TCT_IntProperty* Charset = {read=FCharset};
	__property TCT_IntProperty* Family = {read=FFamily};
	__property TCT_BooleanProperty* B = {read=FB};
	__property TCT_BooleanProperty* I = {read=FI};
	__property TCT_BooleanProperty* Strike = {read=FStrike};
	__property TCT_BooleanProperty* Outline = {read=FOutline};
	__property TCT_BooleanProperty* Shadow = {read=FShadow};
	__property TCT_BooleanProperty* Condense = {read=FCondense};
	__property TCT_BooleanProperty* Extend = {read=FExtend};
	__property TCT_Color* Color = {read=FColor};
	__property TCT_FontSize* Sz = {read=FSz};
	__property TCT_UnderlineProperty* U = {read=FU};
	__property TCT_VerticalAlignFontProperty* VertAlign = {read=FVertAlign};
	__property TCT_FontScheme* Scheme = {read=FScheme};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_GradientStop : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	double FPosition;
	TCT_Color* FColor;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_GradientStop(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GradientStop();
	void __fastcall Clear();
	__property double Position = {read=FPosition, write=FPosition};
	__property TCT_Color* Color = {read=FColor};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GradientStopXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_GradientStop* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_GradientStop* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_GradientStop* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_GradientStop* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_GradientStopXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_GradientStopXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotAreaReferences : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_PivotAreaReferenceXpgList* FReferenceXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_PivotAreaReferences(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotAreaReferences();
	void __fastcall Clear();
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property TCT_PivotAreaReferenceXpgList* ReferenceXpgList = {read=FReferenceXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Filters : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FBlank;
	TST_CalendarType FCalendarType;
	TCT_FilterXpgList* FFilterXpgList;
	TCT_DateGroupItemXpgList* FDateGroupItemXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Filters(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Filters();
	void __fastcall Clear();
	__property bool Blank = {read=FBlank, write=FBlank, nodefault};
	__property TST_CalendarType CalendarType = {read=FCalendarType, write=FCalendarType, nodefault};
	__property TCT_FilterXpgList* FilterXpgList = {read=FFilterXpgList};
	__property TCT_DateGroupItemXpgList* DateGroupItemXpgList = {read=FDateGroupItemXpgList};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_Top10 : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FTop;
	bool FPercent;
	double FVal;
	double FFilterVal;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Top10(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Top10();
	void __fastcall Clear();
	__property bool Top = {read=FTop, write=FTop, nodefault};
	__property bool Percent = {read=FPercent, write=FPercent, nodefault};
	__property double Val = {read=FVal, write=FVal};
	__property double FilterVal = {read=FFilterVal, write=FFilterVal};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustomFilters : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FAnd;
	TCT_CustomFilterXpgList* FCustomFilterXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CustomFilters(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CustomFilters();
	void __fastcall Clear();
	__property bool And_ = {read=FAnd, write=FAnd, nodefault};
	__property TCT_CustomFilterXpgList* CustomFilterXpgList = {read=FCustomFilterXpgList};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_DynamicFilter : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_DynamicFilterType FType;
	double FVal;
	double FMaxVal;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_DynamicFilter(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DynamicFilter();
	void __fastcall Clear();
	__property TST_DynamicFilterType Type_ = {read=FType, write=FType, nodefault};
	__property double Val = {read=FVal, write=FVal};
	__property double MaxVal = {read=FMaxVal, write=FMaxVal};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ColorFilter : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FDxfId;
	bool FCellColor;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_ColorFilter(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ColorFilter();
	void __fastcall Clear();
	__property int DxfId = {read=FDxfId, write=FDxfId, nodefault};
	__property bool CellColor = {read=FCellColor, write=FCellColor, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_IconFilter : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_IconSetType FIconSet;
	int FIconId;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_IconFilter(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_IconFilter();
	void __fastcall Clear();
	__property TST_IconSetType IconSet = {read=FIconSet, write=FIconSet, nodefault};
	__property int IconId = {read=FIconId, write=FIconId, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SortCondition : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FDescending;
	TST_SortBy FSortBy;
	System::UnicodeString FRef;
	System::UnicodeString FCustomList;
	int FDxfId;
	TST_IconSetType FIconSet;
	int FIconId;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_SortCondition(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SortCondition();
	void __fastcall Clear();
	__property bool Descending = {read=FDescending, write=FDescending, nodefault};
	__property TST_SortBy SortBy = {read=FSortBy, write=FSortBy, nodefault};
	__property System::UnicodeString Ref = {read=FRef, write=FRef};
	__property System::UnicodeString CustomList = {read=FCustomList, write=FCustomList};
	__property int DxfId = {read=FDxfId, write=FDxfId, nodefault};
	__property TST_IconSetType IconSet = {read=FIconSet, write=FIconSet, nodefault};
	__property int IconId = {read=FIconId, write=FIconId, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SortConditionXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_SortCondition* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_SortCondition* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_SortCondition* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_SortCondition* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_SortConditionXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_SortConditionXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RElt : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_RPrElt* FRPr;
	System::UnicodeString FT;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_RElt(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_RElt();
	void __fastcall Clear();
	__property TCT_RPrElt* RPr = {read=FRPr};
	__property System::UnicodeString T = {read=FT, write=FT};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_REltXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_RElt* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_RElt* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_RElt* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_RElt* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_REltXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_REltXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PhoneticRun : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FSb;
	int FEb;
	System::UnicodeString FT;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_PhoneticRun(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PhoneticRun();
	void __fastcall Clear();
	__property int Sb = {read=FSb, write=FSb, nodefault};
	__property int Eb = {read=FEb, write=FEb, nodefault};
	__property System::UnicodeString T = {read=FT, write=FT};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PhoneticRunXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_PhoneticRun* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_PhoneticRun* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_PhoneticRun* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_PhoneticRun* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PhoneticRunXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PhoneticRunXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PhoneticPr : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FFontId;
	TST_PhoneticType FType;
	TST_PhoneticAlignment FAlignment;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_PhoneticPr(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PhoneticPr();
	void __fastcall Clear();
	__property int FontId = {read=FFontId, write=FFontId, nodefault};
	__property TST_PhoneticType Type_ = {read=FType, write=FType, nodefault};
	__property TST_PhoneticAlignment Alignment = {read=FAlignment, write=FAlignment, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PatternFill : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_PatternType FPatternType;
	TCT_Color* FFgColor;
	TCT_Color* FBgColor;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_PatternFill(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PatternFill();
	void __fastcall Clear();
	__property TST_PatternType PatternType = {read=FPatternType, write=FPatternType, nodefault};
	__property TCT_Color* FgColor = {read=FFgColor};
	__property TCT_Color* BgColor = {read=FBgColor};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_GradientFill : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_GradientType FType;
	double FDegree;
	double FLeft;
	double FRight;
	double FTop;
	double FBottom;
	TCT_GradientStopXpgList* FStopXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_GradientFill(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GradientFill();
	void __fastcall Clear();
	__property TST_GradientType Type_ = {read=FType, write=FType, nodefault};
	__property double Degree = {read=FDegree, write=FDegree};
	__property double Left = {read=FLeft, write=FLeft};
	__property double Right = {read=FRight, write=FRight};
	__property double Top = {read=FTop, write=FTop};
	__property double Bottom = {read=FBottom, write=FBottom};
	__property TCT_GradientStopXpgList* StopXpgList = {read=FStopXpgList};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BorderPr : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_BorderStyle FStyle;
	TCT_Color* FColor;
	bool FIsRead;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_BorderPr(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BorderPr();
	void __fastcall Clear();
	__property TST_BorderStyle Style = {read=FStyle, write=FStyle, nodefault};
	__property TCT_Color* Color = {read=FColor};
	__property bool IsRead = {read=FIsRead, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotArea : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FField;
	TST_PivotAreaType FType;
	bool FDataOnly;
	bool FLabelOnly;
	bool FGrandRow;
	bool FGrandCol;
	bool FCacheIndex;
	bool FOutline;
	System::UnicodeString FOffset;
	bool FCollapsedLevelsAreSubtotals;
	TST_Axis FAxis;
	int FFieldPosition;
	TCT_PivotAreaReferences* FReferences;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_PivotArea(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotArea();
	void __fastcall Clear();
	__property int Field = {read=FField, write=FField, nodefault};
	__property TST_PivotAreaType Type_ = {read=FType, write=FType, nodefault};
	__property bool DataOnly = {read=FDataOnly, write=FDataOnly, nodefault};
	__property bool LabelOnly = {read=FLabelOnly, write=FLabelOnly, nodefault};
	__property bool GrandRow = {read=FGrandRow, write=FGrandRow, nodefault};
	__property bool GrandCol = {read=FGrandCol, write=FGrandCol, nodefault};
	__property bool CacheIndex = {read=FCacheIndex, write=FCacheIndex, nodefault};
	__property bool Outline = {read=FOutline, write=FOutline, nodefault};
	__property System::UnicodeString Offset = {read=FOffset, write=FOffset};
	__property bool CollapsedLevelsAreSubtotals = {read=FCollapsedLevelsAreSubtotals, write=FCollapsedLevelsAreSubtotals, nodefault};
	__property TST_Axis Axis = {read=FAxis, write=FAxis, nodefault};
	__property int FieldPosition = {read=FFieldPosition, write=FFieldPosition, nodefault};
	__property TCT_PivotAreaReferences* References = {read=FReferences};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Break : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FId;
	int FMin;
	int FMax;
	bool FMan;
	bool FPt;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Break(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Break();
	void __fastcall Clear();
	__property int Id = {read=FId, write=FId, nodefault};
	__property int Min = {read=FMin, write=FMin, nodefault};
	__property int Max = {read=FMax, write=FMax, nodefault};
	__property bool Man = {read=FMan, write=FMan, nodefault};
	__property bool Pt = {read=FPt, write=FPt, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BreakXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Break* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Break* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Break* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Break* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_BreakXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_BreakXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FilterColumn : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FColId;
	bool FHiddenButton;
	bool FShowButton;
	TCT_Filters* FFilters;
	TCT_Top10* FTop10;
	TCT_CustomFilters* FCustomFilters;
	TCT_DynamicFilter* FDynamicFilter;
	TCT_ColorFilter* FColorFilter;
	TCT_IconFilter* FIconFilter;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_FilterColumn(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FilterColumn();
	void __fastcall Clear();
	__property int ColId = {read=FColId, write=FColId, nodefault};
	__property bool HiddenButton = {read=FHiddenButton, write=FHiddenButton, nodefault};
	__property bool ShowButton = {read=FShowButton, write=FShowButton, nodefault};
	__property TCT_Filters* Filters = {read=FFilters};
	__property TCT_Top10* Top10 = {read=FTop10};
	__property TCT_CustomFilters* CustomFilters = {read=FCustomFilters};
	__property TCT_DynamicFilter* DynamicFilter = {read=FDynamicFilter};
	__property TCT_ColorFilter* ColorFilter = {read=FColorFilter};
	__property TCT_IconFilter* IconFilter = {read=FIconFilter};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FilterColumnXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_FilterColumn* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_FilterColumn* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_FilterColumn* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_FilterColumn* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_FilterColumnXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_FilterColumnXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SortState : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FColumnSort;
	bool FCaseSensitive;
	TST_SortMethod FSortMethod;
	System::UnicodeString FRef;
	TCT_SortConditionXpgList* FSortConditionXpgList;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_SortState(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SortState();
	void __fastcall Clear();
	__property bool ColumnSort = {read=FColumnSort, write=FColumnSort, nodefault};
	__property bool CaseSensitive = {read=FCaseSensitive, write=FCaseSensitive, nodefault};
	__property TST_SortMethod SortMethod = {read=FSortMethod, write=FSortMethod, nodefault};
	__property System::UnicodeString Ref = {read=FRef, write=FRef};
	__property TCT_SortConditionXpgList* SortConditionXpgList = {read=FSortConditionXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CellFormula : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_CellFormulaType FT;
	bool FAca;
	System::UnicodeString FRef;
	bool FDt2D;
	bool FDtr;
	bool FDel1;
	bool FDel2;
	System::UnicodeString FR1;
	System::UnicodeString FR2;
	bool FCa;
	int FSi;
	bool FBx;
	System::UnicodeString FContent;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CellFormula(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CellFormula();
	void __fastcall Clear();
	__property TST_CellFormulaType T = {read=FT, write=FT, nodefault};
	__property bool Aca = {read=FAca, write=FAca, nodefault};
	__property System::UnicodeString Ref = {read=FRef, write=FRef};
	__property bool Dt2D = {read=FDt2D, write=FDt2D, nodefault};
	__property bool Dtr = {read=FDtr, write=FDtr, nodefault};
	__property bool Del1 = {read=FDel1, write=FDel1, nodefault};
	__property bool Del2 = {read=FDel2, write=FDel2, nodefault};
	__property System::UnicodeString R1 = {read=FR1, write=FR1};
	__property System::UnicodeString R2 = {read=FR2, write=FR2};
	__property bool Ca = {read=FCa, write=FCa, nodefault};
	__property int Si = {read=FSi, write=FSi, nodefault};
	__property bool Bx = {read=FBx, write=FBx, nodefault};
	__property System::UnicodeString Content = {read=FContent, write=FContent};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Rst : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString _FT;
	TCT_REltXpgList* FRXpgList;
	TCT_PhoneticRunXpgList* FRPhXpgList;
	TCT_PhoneticPr* FPhoneticPr;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Rst(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Rst();
	void __fastcall Clear();
	__property System::UnicodeString T = {read=_FT, write=_FT};
	__property TCT_REltXpgList* RXpgList = {read=FRXpgList};
	__property TCT_PhoneticRunXpgList* RPhXpgList = {read=FRPhXpgList};
	__property TCT_PhoneticPr* PhoneticPr = {read=FPhoneticPr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RstXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Rst* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Rst* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Rst* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Rst* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_RstXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_RstXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Cfvo : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_CfvoType FType;
	System::UnicodeString FVal;
	bool FGte;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Cfvo(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Cfvo();
	void __fastcall Clear();
	__property TST_CfvoType Type_ = {read=FType, write=FType, nodefault};
	__property System::UnicodeString Val = {read=FVal, write=FVal};
	__property bool Gte = {read=FGte, write=FGte, nodefault};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CfvoXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Cfvo* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Cfvo* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Cfvo* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Cfvo* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CfvoXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CfvoXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CellSmartTagPr : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FKey;
	System::UnicodeString FVal;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CellSmartTagPr(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CellSmartTagPr();
	void __fastcall Clear();
	__property System::UnicodeString Key = {read=FKey, write=FKey};
	__property System::UnicodeString Val = {read=FVal, write=FVal};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CellSmartTagPrXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_CellSmartTagPr* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_CellSmartTagPr* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_CellSmartTagPr* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_CellSmartTagPr* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CellSmartTagPrXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CellSmartTagPrXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CellAlignment : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_HorizontalAlignment FHorizontal;
	TST_VerticalAlignment FVertical;
	int FTextRotation;
	bool FWrapText;
	int FIndent;
	int FRelativeIndent;
	bool FJustifyLastLine;
	bool FShrinkToFit;
	int FReadingOrder;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CellAlignment(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CellAlignment();
	void __fastcall Clear();
	__property TST_HorizontalAlignment Horizontal = {read=FHorizontal, write=FHorizontal, nodefault};
	__property TST_VerticalAlignment Vertical = {read=FVertical, write=FVertical, nodefault};
	__property int TextRotation = {read=FTextRotation, write=FTextRotation, nodefault};
	__property bool WrapText = {read=FWrapText, write=FWrapText, nodefault};
	__property int Indent = {read=FIndent, write=FIndent, nodefault};
	__property int RelativeIndent = {read=FRelativeIndent, write=FRelativeIndent, nodefault};
	__property bool JustifyLastLine = {read=FJustifyLastLine, write=FJustifyLastLine, nodefault};
	__property bool ShrinkToFit = {read=FShrinkToFit, write=FShrinkToFit, nodefault};
	__property int ReadingOrder = {read=FReadingOrder, write=FReadingOrder, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CellProtection : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FLocked;
	bool FHidden;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CellProtection(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CellProtection();
	void __fastcall Clear();
	__property bool Locked = {read=FLocked, write=FLocked, nodefault};
	__property bool Hidden = {read=FHidden, write=FHidden, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Font : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_FontName* FName;
	TCT_IntProperty* FCharset;
	TCT_IntProperty* FFamily;
	TCT_BooleanProperty* FB;
	TCT_BooleanProperty* FI;
	TCT_BooleanProperty* FStrike;
	TCT_BooleanProperty* FOutline;
	TCT_BooleanProperty* FShadow;
	TCT_BooleanProperty* FCondense;
	TCT_BooleanProperty* FExtend;
	TCT_Color* FColor;
	TCT_FontSize* FSz;
	TCT_UnderlineProperty* FU;
	TCT_VerticalAlignFontProperty* FVertAlign;
	TCT_FontScheme* FScheme;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Font(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Font();
	void __fastcall Clear();
	__property TCT_FontName* Name = {read=FName};
	__property TCT_IntProperty* Charset = {read=FCharset};
	__property TCT_IntProperty* Family = {read=FFamily};
	__property TCT_BooleanProperty* B = {read=FB};
	__property TCT_BooleanProperty* I = {read=FI};
	__property TCT_BooleanProperty* Strike = {read=FStrike};
	__property TCT_BooleanProperty* Outline = {read=FOutline};
	__property TCT_BooleanProperty* Shadow = {read=FShadow};
	__property TCT_BooleanProperty* Condense = {read=FCondense};
	__property TCT_BooleanProperty* Extend = {read=FExtend};
	__property TCT_Color* Color = {read=FColor};
	__property TCT_FontSize* Sz = {read=FSz};
	__property TCT_UnderlineProperty* U = {read=FU};
	__property TCT_VerticalAlignFontProperty* VertAlign = {read=FVertAlign};
	__property TCT_FontScheme* Scheme = {read=FScheme};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FontXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Font* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Font* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Font* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Font* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_FontXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_FontXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_NumFmt : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FNumFmtId;
	System::UnicodeString FFormatCode;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_NumFmt(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_NumFmt();
	void __fastcall Clear();
	__property int NumFmtId = {read=FNumFmtId, write=FNumFmtId, nodefault};
	__property System::UnicodeString FormatCode = {read=FFormatCode, write=FFormatCode};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_NumFmtXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_NumFmt* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_NumFmt* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_NumFmt* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_NumFmt* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_NumFmtXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_NumFmtXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Fill : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_PatternFill* FPatternFill;
	TCT_GradientFill* FGradientFill;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Fill(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Fill();
	void __fastcall Clear();
	__property TCT_PatternFill* PatternFill = {read=FPatternFill};
	__property TCT_GradientFill* GradientFill = {read=FGradientFill};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FillXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Fill* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Fill* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Fill* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Fill* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_FillXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_FillXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Border : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FDiagonalUp;
	bool FDiagonalDown;
	bool FOutline;
	TCT_BorderPr* FLeft;
	TCT_BorderPr* FRight;
	TCT_BorderPr* FTop;
	TCT_BorderPr* FBottom;
	TCT_BorderPr* FDiagonal;
	TCT_BorderPr* FVertical;
	TCT_BorderPr* FHorizontal;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Border(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Border();
	void __fastcall Clear();
	__property bool DiagonalUp = {read=FDiagonalUp, write=FDiagonalUp, nodefault};
	__property bool DiagonalDown = {read=FDiagonalDown, write=FDiagonalDown, nodefault};
	__property bool Outline = {read=FOutline, write=FOutline, nodefault};
	__property TCT_BorderPr* Left = {read=FLeft};
	__property TCT_BorderPr* Right = {read=FRight};
	__property TCT_BorderPr* Top = {read=FTop};
	__property TCT_BorderPr* Bottom = {read=FBottom};
	__property TCT_BorderPr* Diagonal = {read=FDiagonal};
	__property TCT_BorderPr* Vertical = {read=FVertical};
	__property TCT_BorderPr* Horizontal = {read=FHorizontal};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BorderXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Border* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Border* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Border* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Border* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_BorderXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_BorderXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TableStyleElement : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_TableStyleType FType;
	int FSize;
	int FDxfId;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_TableStyleElement(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TableStyleElement();
	void __fastcall Clear();
	__property TST_TableStyleType Type_ = {read=FType, write=FType, nodefault};
	__property int Size = {read=FSize, write=FSize, nodefault};
	__property int DxfId = {read=FDxfId, write=FDxfId, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TableStyleElementXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_TableStyleElement* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_TableStyleElement* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_TableStyleElement* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_TableStyleElement* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_TableStyleElementXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_TableStyleElementXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RgbColor : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FRgb;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_RgbColor(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_RgbColor();
	void __fastcall Clear();
	__property int Rgb = {read=FRgb, write=FRgb, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RgbColorXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_RgbColor* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_RgbColor* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_RgbColor* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_RgbColor* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_RgbColorXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_RgbColorXpgList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_PageMargins : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	double FLeft;
	double FRight;
	double FTop;
	double FBottom;
	double FHeader;
	double FFooter;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_PageMargins(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PageMargins();
	void __fastcall Clear();
	__property double Left = {read=FLeft, write=FLeft};
	__property double Right = {read=FRight, write=FRight};
	__property double Top = {read=FTop, write=FTop};
	__property double Bottom = {read=FBottom, write=FBottom};
	__property double Header = {read=FHeader, write=FHeader};
	__property double Footer = {read=FFooter, write=FFooter};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CsPageSetup : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FPaperSize;
	int FFirstPageNumber;
	TST_Orientation FOrientation;
	bool FUsePrinterDefaults;
	bool FBlackAndWhite;
	bool FDraft;
	bool FUseFirstPageNumber;
	int FHorizontalDpi;
	int FVerticalDpi;
	int FCopies;
	System::UnicodeString FR_Id;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CsPageSetup(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CsPageSetup();
	void __fastcall Clear();
	__property int PaperSize = {read=FPaperSize, write=FPaperSize, nodefault};
	__property int FirstPageNumber = {read=FFirstPageNumber, write=FFirstPageNumber, nodefault};
	__property TST_Orientation Orientation = {read=FOrientation, write=FOrientation, nodefault};
	__property bool UsePrinterDefaults = {read=FUsePrinterDefaults, write=FUsePrinterDefaults, nodefault};
	__property bool BlackAndWhite = {read=FBlackAndWhite, write=FBlackAndWhite, nodefault};
	__property bool Draft = {read=FDraft, write=FDraft, nodefault};
	__property bool UseFirstPageNumber = {read=FUseFirstPageNumber, write=FUseFirstPageNumber, nodefault};
	__property int HorizontalDpi = {read=FHorizontalDpi, write=FHorizontalDpi, nodefault};
	__property int VerticalDpi = {read=FVerticalDpi, write=FVerticalDpi, nodefault};
	__property int Copies = {read=FCopies, write=FCopies, nodefault};
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_HeaderFooter : public TXPGBase
{
	typedef TXPGBase inherited;
	
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
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_HeaderFooter(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_HeaderFooter();
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
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_Pane : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	double FXSplit;
	double FYSplit;
	System::UnicodeString FTopLeftCell;
	TST_Pane FActivePane;
	TST_PaneState FState;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Pane(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Pane();
	void __fastcall Clear();
	__property double XSplit = {read=FXSplit, write=FXSplit};
	__property double YSplit = {read=FYSplit, write=FYSplit};
	__property System::UnicodeString TopLeftCell = {read=FTopLeftCell, write=FTopLeftCell};
	__property TST_Pane ActivePane = {read=FActivePane, write=FActivePane, nodefault};
	__property TST_PaneState State = {read=FState, write=FState, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Selection : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_Pane FPane;
	System::UnicodeString FActiveCell;
	int FActiveCellId;
	Xpgplists::TStringXpgList* FSqrefXpgList;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Selection(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Selection();
	void __fastcall Clear();
	__property TST_Pane Pane = {read=FPane, write=FPane, nodefault};
	__property System::UnicodeString ActiveCell = {read=FActiveCell, write=FActiveCell};
	__property int ActiveCellId = {read=FActiveCellId, write=FActiveCellId, nodefault};
	__property Xpgplists::TStringXpgList* SqrefXpgList = {read=FSqrefXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SelectionXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Selection* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Selection* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Selection* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Selection* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_SelectionXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_SelectionXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotSelection : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_Pane FPane;
	bool FShowHeader;
	bool FLabel;
	bool FData;
	bool FExtendable;
	int FCount;
	TST_Axis FAxis;
	int FDimension;
	int FStart;
	int FMin;
	int FMax;
	int FActiveRow;
	int FActiveCol;
	int FPreviousRow;
	int FPreviousCol;
	int FClick;
	System::UnicodeString FR_Id;
	TCT_PivotArea* FPivotArea;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_PivotSelection(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotSelection();
	void __fastcall Clear();
	__property TST_Pane Pane = {read=FPane, write=FPane, nodefault};
	__property bool ShowHeader = {read=FShowHeader, write=FShowHeader, nodefault};
	__property bool Label_ = {read=FLabel, write=FLabel, nodefault};
	__property bool Data = {read=FData, write=FData, nodefault};
	__property bool Extendable = {read=FExtendable, write=FExtendable, nodefault};
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property TST_Axis Axis = {read=FAxis, write=FAxis, nodefault};
	__property int Dimension = {read=FDimension, write=FDimension, nodefault};
	__property int Start = {read=FStart, write=FStart, nodefault};
	__property int Min = {read=FMin, write=FMin, nodefault};
	__property int Max = {read=FMax, write=FMax, nodefault};
	__property int ActiveRow = {read=FActiveRow, write=FActiveRow, nodefault};
	__property int ActiveCol = {read=FActiveCol, write=FActiveCol, nodefault};
	__property int PreviousRow = {read=FPreviousRow, write=FPreviousRow, nodefault};
	__property int PreviousCol = {read=FPreviousCol, write=FPreviousCol, nodefault};
	__property int Click = {read=FClick, write=FClick, nodefault};
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
	__property TCT_PivotArea* PivotArea = {read=FPivotArea};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotSelectionXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_PivotSelection* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_PivotSelection* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_PivotSelection* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_PivotSelection* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PivotSelectionXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PivotSelectionXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PageBreak : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FManualBreakCount;
	TCT_BreakXpgList* FBrkXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_PageBreak(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PageBreak();
	void __fastcall Clear();
	__property int ManualBreakCount = {read=FManualBreakCount, write=FManualBreakCount, nodefault};
	__property TCT_BreakXpgList* BrkXpgList = {read=FBrkXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PrintOptions : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FHorizontalCentered;
	bool FVerticalCentered;
	bool FHeadings;
	bool FGridLines;
	bool FGridLinesSet;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_PrintOptions(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PrintOptions();
	void __fastcall Clear();
	__property bool HorizontalCentered = {read=FHorizontalCentered, write=FHorizontalCentered, nodefault};
	__property bool VerticalCentered = {read=FVerticalCentered, write=FVerticalCentered, nodefault};
	__property bool Headings = {read=FHeadings, write=FHeadings, nodefault};
	__property bool GridLines = {read=FGridLines, write=FGridLines, nodefault};
	__property bool GridLinesSet = {read=FGridLinesSet, write=FGridLinesSet, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PageSetup : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FPaperSize;
	int FScale;
	int FFirstPageNumber;
	int FFitToWidth;
	int FFitToHeight;
	TST_PageOrder FPageOrder;
	TST_Orientation FOrientation;
	bool FUsePrinterDefaults;
	bool FBlackAndWhite;
	bool FDraft;
	TST_CellComments FCellComments;
	bool FUseFirstPageNumber;
	TST_PrintError FErrors;
	int FHorizontalDpi;
	int FVerticalDpi;
	int FCopies;
	System::UnicodeString FR_Id;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_PageSetup(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PageSetup();
	void __fastcall Clear();
	__property int PaperSize = {read=FPaperSize, write=FPaperSize, nodefault};
	__property int Scale = {read=FScale, write=FScale, nodefault};
	__property int FirstPageNumber = {read=FFirstPageNumber, write=FFirstPageNumber, nodefault};
	__property int FitToWidth = {read=FFitToWidth, write=FFitToWidth, nodefault};
	__property int FitToHeight = {read=FFitToHeight, write=FFitToHeight, nodefault};
	__property TST_PageOrder PageOrder = {read=FPageOrder, write=FPageOrder, nodefault};
	__property TST_Orientation Orientation = {read=FOrientation, write=FOrientation, nodefault};
	__property bool UsePrinterDefaults = {read=FUsePrinterDefaults, write=FUsePrinterDefaults, nodefault};
	__property bool BlackAndWhite = {read=FBlackAndWhite, write=FBlackAndWhite, nodefault};
	__property bool Draft = {read=FDraft, write=FDraft, nodefault};
	__property TST_CellComments CellComments = {read=FCellComments, write=FCellComments, nodefault};
	__property bool UseFirstPageNumber = {read=FUseFirstPageNumber, write=FUseFirstPageNumber, nodefault};
	__property TST_PrintError Errors = {read=FErrors, write=FErrors, nodefault};
	__property int HorizontalDpi = {read=FHorizontalDpi, write=FHorizontalDpi, nodefault};
	__property int VerticalDpi = {read=FVerticalDpi, write=FVerticalDpi, nodefault};
	__property int Copies = {read=FCopies, write=FCopies, nodefault};
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AutoFilter : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FRef;
	TCT_FilterColumnXpgList* FFilterColumnXpgList;
	TCT_SortState* FSortState;
	TCT_ExtensionList* FExtLst;
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_AutoFilter(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_AutoFilter();
	void __fastcall Clear();
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__property System::UnicodeString Ref = {read=FRef, write=FRef};
	__property TCT_FilterColumnXpgList* FilterColumnXpgList = {read=FFilterColumnXpgList};
	__property TCT_SortState* SortState = {read=FSortState};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Cell : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FR;
	int FS;
	TST_CellType FT;
	int FCm;
	int FVm;
	bool FPh;
	TCT_CellFormula* FF;
	System::UnicodeString FV;
	TCT_Rst* FIs;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Cell(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Cell();
	void __fastcall Clear();
	__property System::UnicodeString R = {read=FR, write=FR};
	__property int S = {read=FS, write=FS, nodefault};
	__property TST_CellType T = {read=FT, write=FT, nodefault};
	__property int Cm = {read=FCm, write=FCm, nodefault};
	__property int Vm = {read=FVm, write=FVm, nodefault};
	__property bool Ph = {read=FPh, write=FPh, nodefault};
	__property TCT_CellFormula* F = {read=FF};
	__property System::UnicodeString V = {read=FV, write=FV};
	__property TCT_Rst* Is_ = {read=FIs};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CellXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Cell* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Cell* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Cell* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Cell* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CellXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CellXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_InputCells : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FR;
	bool FDeleted;
	bool FUndone;
	System::UnicodeString FVal;
	int FNumFmtId;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_InputCells(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_InputCells();
	void __fastcall Clear();
	__property System::UnicodeString R = {read=FR, write=FR};
	__property bool Deleted = {read=FDeleted, write=FDeleted, nodefault};
	__property bool Undone = {read=FUndone, write=FUndone, nodefault};
	__property System::UnicodeString Val = {read=FVal, write=FVal};
	__property int NumFmtId = {read=FNumFmtId, write=FNumFmtId, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_InputCellsXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_InputCells* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_InputCells* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_InputCells* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_InputCells* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_InputCellsXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_InputCellsXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DataRef : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FRef;
	System::UnicodeString FName;
	System::UnicodeString FSheet;
	System::UnicodeString FR_Id;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_DataRef(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DataRef();
	void __fastcall Clear();
	__property System::UnicodeString Ref = {read=FRef, write=FRef};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString Sheet = {read=FSheet, write=FSheet};
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DataRefXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_DataRef* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_DataRef* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_DataRef* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_DataRef* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_DataRefXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_DataRefXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ColorScale : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_CfvoXpgList* FCfvoXpgList;
	TCT_ColorXpgList* FColorXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_ColorScale(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ColorScale();
	void __fastcall Clear();
	__property TCT_CfvoXpgList* CfvoXpgList = {read=FCfvoXpgList};
	__property TCT_ColorXpgList* ColorXpgList = {read=FColorXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DataBar : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FMinLength;
	int FMaxLength;
	bool FShowValue;
	TCT_CfvoXpgList* FCfvoXpgList;
	TCT_Color* FColor;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_DataBar(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DataBar();
	void __fastcall Clear();
	__property int MinLength = {read=FMinLength, write=FMinLength, nodefault};
	__property int MaxLength = {read=FMaxLength, write=FMaxLength, nodefault};
	__property bool ShowValue = {read=FShowValue, write=FShowValue, nodefault};
	__property TCT_CfvoXpgList* CfvoXpgList = {read=FCfvoXpgList};
	__property TCT_Color* Color = {read=FColor};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_IconSet : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_IconSetType FIconSet;
	bool FShowValue;
	bool FPercent;
	bool FReverse;
	TCT_CfvoXpgList* FCfvoXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_IconSet(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_IconSet();
	void __fastcall Clear();
	__property TST_IconSetType IconSet = {read=FIconSet, write=FIconSet, nodefault};
	__property bool ShowValue = {read=FShowValue, write=FShowValue, nodefault};
	__property bool Percent = {read=FPercent, write=FPercent, nodefault};
	__property bool Reverse = {read=FReverse, write=FReverse, nodefault};
	__property TCT_CfvoXpgList* CfvoXpgList = {read=FCfvoXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CellSmartTag : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FType;
	bool FDeleted;
	bool FXmlBased;
	TCT_CellSmartTagPrXpgList* FCellSmartTagPrXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CellSmartTag(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CellSmartTag();
	void __fastcall Clear();
	__property int Type_ = {read=FType, write=FType, nodefault};
	__property bool Deleted = {read=FDeleted, write=FDeleted, nodefault};
	__property bool XmlBased = {read=FXmlBased, write=FXmlBased, nodefault};
	__property TCT_CellSmartTagPrXpgList* CellSmartTagPrXpgList = {read=FCellSmartTagPrXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CellSmartTagXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_CellSmartTag* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_CellSmartTag* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_CellSmartTag* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_CellSmartTag* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CellSmartTagXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CellSmartTagXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Xf : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FNumFmtId;
	int FFontId;
	int FFillId;
	int FBorderId;
	int FXfId;
	bool FQuotePrefix;
	bool FPivotButton;
	bool FApplyNumberFormat;
	bool FApplyFont;
	bool FApplyFill;
	bool FApplyBorder;
	bool FApplyAlignment;
	bool FApplyProtection;
	TCT_CellAlignment* FAlignment;
	TCT_CellProtection* FProtection;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Xf(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Xf();
	void __fastcall Clear();
	__property int NumFmtId = {read=FNumFmtId, write=FNumFmtId, nodefault};
	__property int FontId = {read=FFontId, write=FFontId, nodefault};
	__property int FillId = {read=FFillId, write=FFillId, nodefault};
	__property int BorderId = {read=FBorderId, write=FBorderId, nodefault};
	__property int XfId = {read=FXfId, write=FXfId, nodefault};
	__property bool QuotePrefix = {read=FQuotePrefix, write=FQuotePrefix, nodefault};
	__property bool PivotButton = {read=FPivotButton, write=FPivotButton, nodefault};
	__property bool ApplyNumberFormat = {read=FApplyNumberFormat, write=FApplyNumberFormat, nodefault};
	__property bool ApplyFont = {read=FApplyFont, write=FApplyFont, nodefault};
	__property bool ApplyFill = {read=FApplyFill, write=FApplyFill, nodefault};
	__property bool ApplyBorder = {read=FApplyBorder, write=FApplyBorder, nodefault};
	__property bool ApplyAlignment = {read=FApplyAlignment, write=FApplyAlignment, nodefault};
	__property bool ApplyProtection = {read=FApplyProtection, write=FApplyProtection, nodefault};
	__property TCT_CellAlignment* Alignment = {read=FAlignment};
	__property TCT_CellProtection* Protection = {read=FProtection};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_XfXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Xf* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Xf* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Xf* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Xf* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_XfXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_XfXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CellStyle : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	int FXfId;
	int FBuiltinId;
	int FILevel;
	bool FHidden;
	bool FCustomBuiltin;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CellStyle(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CellStyle();
	void __fastcall Clear();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property int XfId = {read=FXfId, write=FXfId, nodefault};
	__property int BuiltinId = {read=FBuiltinId, write=FBuiltinId, nodefault};
	__property int ILevel = {read=FILevel, write=FILevel, nodefault};
	__property bool Hidden = {read=FHidden, write=FHidden, nodefault};
	__property bool CustomBuiltin = {read=FCustomBuiltin, write=FCustomBuiltin, nodefault};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CellStyleXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_CellStyle* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_CellStyle* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_CellStyle* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_CellStyle* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CellStyleXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CellStyleXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Dxf : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_Font* FFont;
	TCT_NumFmt* FNumFmt;
	TCT_Fill* FFill;
	TCT_CellAlignment* FAlignment;
	TCT_Border* FBorder;
	TCT_CellProtection* FProtection;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Dxf(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Dxf();
	void __fastcall Clear();
	__property TCT_Font* Font = {read=FFont};
	__property TCT_NumFmt* NumFmt = {read=FNumFmt};
	__property TCT_Fill* Fill = {read=FFill};
	__property TCT_CellAlignment* Alignment = {read=FAlignment};
	__property TCT_Border* Border = {read=FBorder};
	__property TCT_CellProtection* Protection = {read=FProtection};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DxfXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Dxf* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Dxf* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Dxf* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Dxf* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_DxfXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_DxfXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TableStyle : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	bool FPivot;
	bool FTable;
	int FCount;
	TCT_TableStyleElementXpgList* FTableStyleElementXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_TableStyle(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TableStyle();
	void __fastcall Clear();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property bool Pivot = {read=FPivot, write=FPivot, nodefault};
	__property bool Table = {read=FTable, write=FTable, nodefault};
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property TCT_TableStyleElementXpgList* TableStyleElementXpgList = {read=FTableStyleElementXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TableStyleXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_TableStyle* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_TableStyle* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_TableStyle* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_TableStyle* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_TableStyleXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_TableStyleXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_IndexedColors : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_RgbColorXpgList* FRgbColorXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_IndexedColors(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_IndexedColors();
	void __fastcall Clear();
	__property TCT_RgbColorXpgList* RgbColorXpgList = {read=FRgbColorXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_MRUColors : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_ColorXpgList* FColorXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_MRUColors(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_MRUColors();
	void __fastcall Clear();
	__property TCT_ColorXpgList* ColorXpgList = {read=FColorXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BookView : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_Visibility FVisibility;
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
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_BookView(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BookView();
	void __fastcall Clear();
	__property TST_Visibility Visibility = {read=FVisibility, write=FVisibility, nodefault};
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
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BookViewXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_BookView* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_BookView* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_BookView* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_BookView* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_BookViewXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_BookViewXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Sheet : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	int FSheetId;
	TST_SheetState FState;
	System::UnicodeString FR_Id;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Sheet(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Sheet();
	void __fastcall Clear();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property int SheetId = {read=FSheetId, write=FSheetId, nodefault};
	__property TST_SheetState State = {read=FState, write=FState, nodefault};
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SheetXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Sheet* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Sheet* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Sheet* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Sheet* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_SheetXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_SheetXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FunctionGroup : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_FunctionGroup(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FunctionGroup();
	void __fastcall Clear();
	__property System::UnicodeString Name = {read=FName, write=FName};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FunctionGroupXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_FunctionGroup* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_FunctionGroup* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_FunctionGroup* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_FunctionGroup* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_FunctionGroupXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_FunctionGroupXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExternalReference : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FR_Id;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_ExternalReference(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ExternalReference();
	void __fastcall Clear();
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExternalReferenceXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_ExternalReference* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ExternalReference* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ExternalReference* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_ExternalReference* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ExternalReferenceXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ExternalReferenceXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DefinedName : public TXPGBase
{
	typedef TXPGBase inherited;
	
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
	System::UnicodeString FContent;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_DefinedName(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DefinedName();
	void __fastcall Clear();
	__property System::UnicodeString Name = {read=FName, write=FName};
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
	__property System::UnicodeString Content = {read=FContent, write=FContent};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DefinedNameXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_DefinedName* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_DefinedName* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_DefinedName* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_DefinedName* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_DefinedNameXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_DefinedNameXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustomWorkbookView : public TXPGBase
{
	typedef TXPGBase inherited;
	
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
	TST_Comments FShowComments;
	TST_Objects FShowObjects;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CustomWorkbookView(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CustomWorkbookView();
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
	__property TST_Comments ShowComments = {read=FShowComments, write=FShowComments, nodefault};
	__property TST_Objects ShowObjects = {read=FShowObjects, write=FShowObjects, nodefault};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustomWorkbookViewXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_CustomWorkbookView* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_CustomWorkbookView* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_CustomWorkbookView* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_CustomWorkbookView* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CustomWorkbookViewXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CustomWorkbookViewXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotCache : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCacheId;
	System::UnicodeString FR_Id;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_PivotCache(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotCache();
	void __fastcall Clear();
	__property int CacheId = {read=FCacheId, write=FCacheId, nodefault};
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotCacheXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_PivotCache* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_PivotCache* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_PivotCache* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_PivotCache* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PivotCacheXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PivotCacheXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SmartTagType : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FNamespaceUri;
	System::UnicodeString FName;
	System::UnicodeString FUrl;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_SmartTagType(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SmartTagType();
	void __fastcall Clear();
	__property System::UnicodeString NamespaceUri = {read=FNamespaceUri, write=FNamespaceUri};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString Url = {read=FUrl, write=FUrl};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SmartTagTypeXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_SmartTagType* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_SmartTagType* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_SmartTagType* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_SmartTagType* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_SmartTagTypeXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_SmartTagTypeXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_WebPublishObject : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FId;
	System::UnicodeString FDivId;
	System::UnicodeString FSourceObject;
	System::UnicodeString FDestinationFile;
	System::UnicodeString FTitle;
	bool FAutoRepublish;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_WebPublishObject(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_WebPublishObject();
	void __fastcall Clear();
	__property int Id = {read=FId, write=FId, nodefault};
	__property System::UnicodeString DivId = {read=FDivId, write=FDivId};
	__property System::UnicodeString SourceObject = {read=FSourceObject, write=FSourceObject};
	__property System::UnicodeString DestinationFile = {read=FDestinationFile, write=FDestinationFile};
	__property System::UnicodeString Title = {read=FTitle, write=FTitle};
	__property bool AutoRepublish = {read=FAutoRepublish, write=FAutoRepublish, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_WebPublishObjectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_WebPublishObject* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_WebPublishObject* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_WebPublishObject* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_WebPublishObject* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_WebPublishObjectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_WebPublishObjectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Comment : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FRef;
	int FAuthorId;
	System::UnicodeString FGuid;
	TCT_Rst* FText;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Comment(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Comment();
	void __fastcall Clear();
	__property System::UnicodeString Ref = {read=FRef, write=FRef};
	__property int AuthorId = {read=FAuthorId, write=FAuthorId, nodefault};
	__property System::UnicodeString Guid = {read=FGuid, write=FGuid};
	__property TCT_Rst* Text = {read=FText};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CommentXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Comment* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Comment* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Comment* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Comment* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CommentXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CommentXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ChartsheetView : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FTabSelected;
	int FZoomScale;
	int FWorkbookViewId;
	bool FZoomToFit;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_ChartsheetView(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ChartsheetView();
	void __fastcall Clear();
	__property bool TabSelected = {read=FTabSelected, write=FTabSelected, nodefault};
	__property int ZoomScale = {read=FZoomScale, write=FZoomScale, nodefault};
	__property int WorkbookViewId = {read=FWorkbookViewId, write=FWorkbookViewId, nodefault};
	__property bool ZoomToFit = {read=FZoomToFit, write=FZoomToFit, nodefault};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ChartsheetViewXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_ChartsheetView* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ChartsheetView* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ChartsheetView* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_ChartsheetView* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ChartsheetViewXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ChartsheetViewXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustomChartsheetView : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FGuid;
	int FScale;
	TST_SheetState FState;
	bool FZoomToFit;
	TCT_PageMargins* FPageMargins;
	TCT_CsPageSetup* FPageSetup;
	TCT_HeaderFooter* FHeaderFooter;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CustomChartsheetView(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CustomChartsheetView();
	void __fastcall Clear();
	__property System::UnicodeString Guid = {read=FGuid, write=FGuid};
	__property int Scale = {read=FScale, write=FScale, nodefault};
	__property TST_SheetState State = {read=FState, write=FState, nodefault};
	__property bool ZoomToFit = {read=FZoomToFit, write=FZoomToFit, nodefault};
	__property TCT_PageMargins* PageMargins = {read=FPageMargins};
	__property TCT_CsPageSetup* PageSetup = {read=FPageSetup};
	__property TCT_HeaderFooter* HeaderFooter = {read=FHeaderFooter};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustomChartsheetViewXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_CustomChartsheetView* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_CustomChartsheetView* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_CustomChartsheetView* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_CustomChartsheetView* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CustomChartsheetViewXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CustomChartsheetViewXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_WebPublishItem : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FId;
	System::UnicodeString FDivId;
	TST_WebSourceType FSourceType;
	System::UnicodeString FSourceRef;
	System::UnicodeString FSourceObject;
	System::UnicodeString FDestinationFile;
	System::UnicodeString FTitle;
	bool FAutoRepublish;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_WebPublishItem(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_WebPublishItem();
	void __fastcall Clear();
	__property int Id = {read=FId, write=FId, nodefault};
	__property System::UnicodeString DivId = {read=FDivId, write=FDivId};
	__property TST_WebSourceType SourceType = {read=FSourceType, write=FSourceType, nodefault};
	__property System::UnicodeString SourceRef = {read=FSourceRef, write=FSourceRef};
	__property System::UnicodeString SourceObject = {read=FSourceObject, write=FSourceObject};
	__property System::UnicodeString DestinationFile = {read=FDestinationFile, write=FDestinationFile};
	__property System::UnicodeString Title = {read=FTitle, write=FTitle};
	__property bool AutoRepublish = {read=FAutoRepublish, write=FAutoRepublish, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_WebPublishItemXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_WebPublishItem* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_WebPublishItem* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_WebPublishItem* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_WebPublishItem* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_WebPublishItemXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_WebPublishItemXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OutlinePr : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FApplyStyles;
	bool FSummaryBelow;
	bool FSummaryRight;
	bool FShowOutlineSymbols;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_OutlinePr(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_OutlinePr();
	void __fastcall Clear();
	__property bool ApplyStyles = {read=FApplyStyles, write=FApplyStyles, nodefault};
	__property bool SummaryBelow = {read=FSummaryBelow, write=FSummaryBelow, nodefault};
	__property bool SummaryRight = {read=FSummaryRight, write=FSummaryRight, nodefault};
	__property bool ShowOutlineSymbols = {read=FShowOutlineSymbols, write=FShowOutlineSymbols, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PageSetUpPr : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FAutoPageBreaks;
	bool FFitToPage;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_PageSetUpPr(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PageSetUpPr();
	void __fastcall Clear();
	__property bool AutoPageBreaks = {read=FAutoPageBreaks, write=FAutoPageBreaks, nodefault};
	__property bool FitToPage = {read=FFitToPage, write=FFitToPage, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SheetView : public TXPGBase
{
	typedef TXPGBase inherited;
	
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
	TST_SheetViewType FView;
	System::UnicodeString FTopLeftCell;
	int FColorId;
	int FZoomScale;
	int FZoomScaleNormal;
	int FZoomScaleSheetLayoutView;
	int FZoomScalePageLayoutView;
	int FWorkbookViewId;
	TCT_Pane* FPane;
	TCT_SelectionXpgList* FSelectionXpgList;
	TCT_PivotSelectionXpgList* FPivotSelectionXpgList;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_SheetView(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SheetView();
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
	__property TST_SheetViewType View = {read=FView, write=FView, nodefault};
	__property System::UnicodeString TopLeftCell = {read=FTopLeftCell, write=FTopLeftCell};
	__property int ColorId = {read=FColorId, write=FColorId, nodefault};
	__property int ZoomScale = {read=FZoomScale, write=FZoomScale, nodefault};
	__property int ZoomScaleNormal = {read=FZoomScaleNormal, write=FZoomScaleNormal, nodefault};
	__property int ZoomScaleSheetLayoutView = {read=FZoomScaleSheetLayoutView, write=FZoomScaleSheetLayoutView, nodefault};
	__property int ZoomScalePageLayoutView = {read=FZoomScalePageLayoutView, write=FZoomScalePageLayoutView, nodefault};
	__property int WorkbookViewId = {read=FWorkbookViewId, write=FWorkbookViewId, nodefault};
	__property TCT_Pane* Pane = {read=FPane};
	__property TCT_SelectionXpgList* SelectionXpgList = {read=FSelectionXpgList};
	__property TCT_PivotSelectionXpgList* PivotSelectionXpgList = {read=FPivotSelectionXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SheetViewXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_SheetView* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_SheetView* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_SheetView* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_SheetView* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_SheetViewXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_SheetViewXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustomSheetView : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FGuid;
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
	TST_SheetState FState;
	bool FFilterUnique;
	TST_SheetViewType FView;
	bool FShowRuler;
	System::UnicodeString FTopLeftCell;
	TCT_Pane* FPane;
	TCT_Selection* FSelection;
	TCT_PageBreak* FRowBreaks;
	TCT_PageBreak* FColBreaks;
	TCT_PageMargins* FPageMargins;
	TCT_PrintOptions* FPrintOptions;
	TCT_PageSetup* FPageSetup;
	TCT_HeaderFooter* FHeaderFooter;
	TCT_AutoFilter* FAutoFilter;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CustomSheetView(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CustomSheetView();
	void __fastcall Clear();
	__property System::UnicodeString Guid = {read=FGuid, write=FGuid};
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
	__property TST_SheetState State = {read=FState, write=FState, nodefault};
	__property bool FilterUnique = {read=FFilterUnique, write=FFilterUnique, nodefault};
	__property TST_SheetViewType View = {read=FView, write=FView, nodefault};
	__property bool ShowRuler = {read=FShowRuler, write=FShowRuler, nodefault};
	__property System::UnicodeString TopLeftCell = {read=FTopLeftCell, write=FTopLeftCell};
	__property TCT_Pane* Pane = {read=FPane};
	__property TCT_Selection* Selection = {read=FSelection};
	__property TCT_PageBreak* RowBreaks = {read=FRowBreaks};
	__property TCT_PageBreak* ColBreaks = {read=FColBreaks};
	__property TCT_PageMargins* PageMargins = {read=FPageMargins};
	__property TCT_PrintOptions* PrintOptions = {read=FPrintOptions};
	__property TCT_PageSetup* PageSetup = {read=FPageSetup};
	__property TCT_HeaderFooter* HeaderFooter = {read=FHeaderFooter};
	__property TCT_AutoFilter* AutoFilter = {read=FAutoFilter};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustomSheetViewXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_CustomSheetView* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_CustomSheetView* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_CustomSheetView* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_CustomSheetView* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CustomSheetViewXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CustomSheetViewXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OleObject : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FProgId;
	TST_DvAspect FDvAspect;
	System::UnicodeString FLink;
	TST_OleUpdate FOleUpdate;
	bool FAutoLoad;
	int FShapeId;
	System::UnicodeString FR_Id;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_OleObject(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_OleObject();
	void __fastcall Clear();
	__property System::UnicodeString ProgId = {read=FProgId, write=FProgId};
	__property TST_DvAspect DvAspect = {read=FDvAspect, write=FDvAspect, nodefault};
	__property System::UnicodeString Link = {read=FLink, write=FLink};
	__property TST_OleUpdate OleUpdate = {read=FOleUpdate, write=FOleUpdate, nodefault};
	__property bool AutoLoad = {read=FAutoLoad, write=FAutoLoad, nodefault};
	__property int ShapeId = {read=FShapeId, write=FShapeId, nodefault};
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OleObjectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_OleObject* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_OleObject* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_OleObject* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_OleObject* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_OleObjectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_OleObjectXpgList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_Col : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FMin;
	int FMax;
	double FWidth;
	int FStyle;
	bool FHidden;
	bool FBestFit;
	bool FCustomWidth;
	bool FPhonetic;
	int FOutlineLevel;
	bool FCollapsed;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Col(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Col();
	void __fastcall Clear();
	__property int Min = {read=FMin, write=FMin, nodefault};
	__property int Max = {read=FMax, write=FMax, nodefault};
	__property double Width = {read=FWidth, write=FWidth};
	__property int Style = {read=FStyle, write=FStyle, nodefault};
	__property bool Hidden = {read=FHidden, write=FHidden, nodefault};
	__property bool BestFit = {read=FBestFit, write=FBestFit, nodefault};
	__property bool CustomWidth = {read=FCustomWidth, write=FCustomWidth, nodefault};
	__property bool Phonetic = {read=FPhonetic, write=FPhonetic, nodefault};
	__property int OutlineLevel = {read=FOutlineLevel, write=FOutlineLevel, nodefault};
	__property bool Collapsed = {read=FCollapsed, write=FCollapsed, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ColXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Col* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Col* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Col* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Col* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ColXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ColXpgList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_Row : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FR;
	int FCurrR;
	Xpgplists::TStringXpgList* FSpansXpgList;
	int FS;
	bool FCustomFormat;
	double FHt;
	bool FHidden;
	bool FCustomHeight;
	int FOutlineLevel;
	bool FCollapsed;
	bool FThickTop;
	bool FThickBot;
	bool FPh;
	TCT_Cell* FC;
	System::Classes::TNotifyEvent FOnReadC;
	Xpgputils::TWriteElementEvent FOnWriteC;
	TCT_ExtensionList* FExtLst;
	bool FTableMode;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	virtual void __fastcall AfterTag(TXPGReader* AReader);
	
public:
	__fastcall TCT_Row(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Row();
	void __fastcall Clear();
	__property int R = {read=FR, write=FR, nodefault};
	__property Xpgplists::TStringXpgList* SpansXpgList = {read=FSpansXpgList};
	__property int S = {read=FS, write=FS, nodefault};
	__property bool CustomFormat = {read=FCustomFormat, write=FCustomFormat, nodefault};
	__property double Ht = {read=FHt, write=FHt};
	__property bool Hidden = {read=FHidden, write=FHidden, nodefault};
	__property bool CustomHeight = {read=FCustomHeight, write=FCustomHeight, nodefault};
	__property int OutlineLevel = {read=FOutlineLevel, write=FOutlineLevel, nodefault};
	__property bool Collapsed = {read=FCollapsed, write=FCollapsed, nodefault};
	__property bool ThickTop = {read=FThickTop, write=FThickTop, nodefault};
	__property bool ThickBot = {read=FThickBot, write=FThickBot, nodefault};
	__property bool Ph = {read=FPh, write=FPh, nodefault};
	__property TCT_Cell* _C = {read=FC};
	__property System::Classes::TNotifyEvent OnReadC = {read=FOnReadC, write=FOnReadC};
	__property Xpgputils::TWriteElementEvent OnWriteC = {read=FOnWriteC, write=FOnWriteC};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
	__property bool TableMode = {read=FTableMode, write=FTableMode, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RowXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Row* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Row* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Row* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Row* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_RowXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_RowXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ProtectedRange : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FPassword;
	Xpgplists::TStringXpgList* FSqrefXpgList;
	System::UnicodeString FName;
	System::UnicodeString FSecurityDescriptor;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_ProtectedRange(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ProtectedRange();
	void __fastcall Clear();
	__property int Password = {read=FPassword, write=FPassword, nodefault};
	__property Xpgplists::TStringXpgList* SqrefXpgList = {read=FSqrefXpgList};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString SecurityDescriptor = {read=FSecurityDescriptor, write=FSecurityDescriptor};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ProtectedRangeXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_ProtectedRange* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ProtectedRange* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ProtectedRange* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_ProtectedRange* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ProtectedRangeXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ProtectedRangeXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Scenario : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	bool FLocked;
	bool FHidden;
	int FCount;
	System::UnicodeString FUser;
	System::UnicodeString FComment;
	TCT_InputCellsXpgList* FInputCellsXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Scenario(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Scenario();
	void __fastcall Clear();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property bool Locked = {read=FLocked, write=FLocked, nodefault};
	__property bool Hidden = {read=FHidden, write=FHidden, nodefault};
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property System::UnicodeString User = {read=FUser, write=FUser};
	__property System::UnicodeString Comment = {read=FComment, write=FComment};
	__property TCT_InputCellsXpgList* InputCellsXpgList = {read=FInputCellsXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ScenarioXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Scenario* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Scenario* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Scenario* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Scenario* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ScenarioXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ScenarioXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DataRefs : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_DataRefXpgList* FDataRefXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_DataRefs(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DataRefs();
	void __fastcall Clear();
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property TCT_DataRefXpgList* DataRefXpgList = {read=FDataRefXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_MergeCell : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FRef;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_MergeCell(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_MergeCell();
	void __fastcall Clear();
	__property System::UnicodeString Ref = {read=FRef, write=FRef};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_MergeCellXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_MergeCell* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_MergeCell* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_MergeCell* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_MergeCell* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_MergeCellXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_MergeCellXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CfRule : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_CfType FType;
	int FDxfId;
	int FPriority;
	bool FStopIfTrue;
	bool FAboveAverage;
	bool FPercent;
	bool FBottom;
	TST_ConditionalFormattingOperator FOperator;
	System::UnicodeString FText;
	TST_TimePeriod FTimePeriod;
	int FRank;
	int FStdDev;
	bool FEqualAverage;
	Xpgplists::TStringXpgList* FFormulaXpgList;
	TCT_ColorScale* FColorScale;
	TCT_DataBar* FDataBar;
	TCT_IconSet* FIconSet;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CfRule(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CfRule();
	void __fastcall Clear();
	__property TST_CfType Type_ = {read=FType, write=FType, nodefault};
	__property int DxfId = {read=FDxfId, write=FDxfId, nodefault};
	__property int Priority = {read=FPriority, write=FPriority, nodefault};
	__property bool StopIfTrue = {read=FStopIfTrue, write=FStopIfTrue, nodefault};
	__property bool AboveAverage = {read=FAboveAverage, write=FAboveAverage, nodefault};
	__property bool Percent = {read=FPercent, write=FPercent, nodefault};
	__property bool Bottom = {read=FBottom, write=FBottom, nodefault};
	__property TST_ConditionalFormattingOperator Operator_ = {read=FOperator, write=FOperator, nodefault};
	__property System::UnicodeString Text = {read=FText, write=FText};
	__property TST_TimePeriod TimePeriod = {read=FTimePeriod, write=FTimePeriod, nodefault};
	__property int Rank = {read=FRank, write=FRank, nodefault};
	__property int StdDev = {read=FStdDev, write=FStdDev, nodefault};
	__property bool EqualAverage = {read=FEqualAverage, write=FEqualAverage, nodefault};
	__property Xpgplists::TStringXpgList* FormulaXpgList = {read=FFormulaXpgList};
	__property TCT_ColorScale* ColorScale = {read=FColorScale};
	__property TCT_DataBar* DataBar = {read=FDataBar};
	__property TCT_IconSet* IconSet = {read=FIconSet};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CfRuleXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_CfRule* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_CfRule* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_CfRule* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_CfRule* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CfRuleXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CfRuleXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DataValidation : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_DataValidationType FType;
	TST_DataValidationErrorStyle FErrorStyle;
	TST_DataValidationImeMode FImeMode;
	TST_DataValidationOperator FOperator;
	bool FAllowBlank;
	bool FShowDropDown;
	bool FShowInputMessage;
	bool FShowErrorMessage;
	System::UnicodeString FErrorTitle;
	System::UnicodeString FError;
	System::UnicodeString FPromptTitle;
	System::UnicodeString FPrompt;
	Xpgplists::TStringXpgList* FSqrefXpgList;
	System::UnicodeString FFormula1;
	System::UnicodeString FFormula2;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_DataValidation(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DataValidation();
	void __fastcall Clear();
	__property TST_DataValidationType Type_ = {read=FType, write=FType, nodefault};
	__property TST_DataValidationErrorStyle ErrorStyle = {read=FErrorStyle, write=FErrorStyle, nodefault};
	__property TST_DataValidationImeMode ImeMode = {read=FImeMode, write=FImeMode, nodefault};
	__property TST_DataValidationOperator Operator_ = {read=FOperator, write=FOperator, nodefault};
	__property bool AllowBlank = {read=FAllowBlank, write=FAllowBlank, nodefault};
	__property bool ShowDropDown = {read=FShowDropDown, write=FShowDropDown, nodefault};
	__property bool ShowInputMessage = {read=FShowInputMessage, write=FShowInputMessage, nodefault};
	__property bool ShowErrorMessage = {read=FShowErrorMessage, write=FShowErrorMessage, nodefault};
	__property System::UnicodeString ErrorTitle = {read=FErrorTitle, write=FErrorTitle};
	__property System::UnicodeString Error = {read=FError, write=FError};
	__property System::UnicodeString PromptTitle = {read=FPromptTitle, write=FPromptTitle};
	__property System::UnicodeString Prompt = {read=FPrompt, write=FPrompt};
	__property Xpgplists::TStringXpgList* SqrefXpgList = {read=FSqrefXpgList};
	__property System::UnicodeString Formula1 = {read=FFormula1, write=FFormula1};
	__property System::UnicodeString Formula2 = {read=FFormula2, write=FFormula2};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DataValidationXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_DataValidation* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_DataValidation* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_DataValidation* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_DataValidation* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_DataValidationXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_DataValidationXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Hyperlink : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FRef;
	System::UnicodeString FR_Id;
	System::UnicodeString FLocation;
	System::UnicodeString FTooltip;
	System::UnicodeString FDisplay;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Hyperlink(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Hyperlink();
	void __fastcall Clear();
	__property System::UnicodeString Ref = {read=FRef, write=FRef};
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
	__property System::UnicodeString Location = {read=FLocation, write=FLocation};
	__property System::UnicodeString Tooltip = {read=FTooltip, write=FTooltip};
	__property System::UnicodeString Display = {read=FDisplay, write=FDisplay};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_HyperlinkXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Hyperlink* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Hyperlink* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Hyperlink* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Hyperlink* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_HyperlinkXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_HyperlinkXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustomProperty : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	System::UnicodeString FR_Id;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CustomProperty(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CustomProperty();
	void __fastcall Clear();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustomPropertyXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_CustomProperty* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_CustomProperty* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_CustomProperty* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_CustomProperty* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CustomPropertyXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CustomPropertyXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CellWatch : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FR;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CellWatch(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CellWatch();
	void __fastcall Clear();
	__property System::UnicodeString R = {read=FR, write=FR};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CellWatchXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_CellWatch* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_CellWatch* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_CellWatch* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_CellWatch* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CellWatchXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CellWatchXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_IgnoredError : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	Xpgplists::TStringXpgList* FSqrefXpgList;
	bool FEvalError;
	bool FTwoDigitTextYear;
	bool FNumberStoredAsText;
	bool FFormula;
	bool FFormulaRange;
	bool FUnlockedFormula;
	bool FEmptyCellReference;
	bool FListDataValidation;
	bool FCalculatedColumn;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_IgnoredError(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_IgnoredError();
	void __fastcall Clear();
	__property Xpgplists::TStringXpgList* SqrefXpgList = {read=FSqrefXpgList};
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
class PASCALIMPLEMENTATION TCT_IgnoredErrorXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_IgnoredError* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_IgnoredError* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_IgnoredError* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_IgnoredError* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_IgnoredErrorXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_IgnoredErrorXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CellSmartTags : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FR;
	TCT_CellSmartTagXpgList* FCellSmartTagXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CellSmartTags(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CellSmartTags();
	void __fastcall Clear();
	__property System::UnicodeString R = {read=FR, write=FR};
	__property TCT_CellSmartTagXpgList* CellSmartTagXpgList = {read=FCellSmartTagXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CellSmartTagsXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_CellSmartTags* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_CellSmartTags* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_CellSmartTags* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_CellSmartTags* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CellSmartTagsXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CellSmartTagsXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Control : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FShapeId;
	System::UnicodeString FR_Id;
	System::UnicodeString FName;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Control(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Control();
	void __fastcall Clear();
	__property int ShapeId = {read=FShapeId, write=FShapeId, nodefault};
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
	__property System::UnicodeString Name = {read=FName, write=FName};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ControlXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Control* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Control* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Control* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Control* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ControlXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ControlXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TablePart : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FR_Id;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_TablePart(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TablePart();
	void __fastcall Clear();
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TablePartXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_TablePart* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_TablePart* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_TablePart* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_TablePart* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_TablePartXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_TablePartXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_NumFmts : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_NumFmtXpgList* FNumFmtXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_NumFmts(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_NumFmts();
	void __fastcall Clear();
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property TCT_NumFmtXpgList* NumFmtXpgList = {read=FNumFmtXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Fonts : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_FontXpgList* FFontXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Fonts(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Fonts();
	void __fastcall Clear();
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property TCT_FontXpgList* FontXpgList = {read=FFontXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Fills : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_FillXpgList* FFillXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Fills(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Fills();
	void __fastcall Clear();
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property TCT_FillXpgList* FillXpgList = {read=FFillXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Borders : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_BorderXpgList* FBorderXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Borders(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Borders();
	void __fastcall Clear();
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property TCT_BorderXpgList* BorderXpgList = {read=FBorderXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CellStyleXfs : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_XfXpgList* FXfXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CellStyleXfs(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CellStyleXfs();
	void __fastcall Clear();
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property TCT_XfXpgList* XfXpgList = {read=FXfXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CellXfs : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_XfXpgList* FXfXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CellXfs(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CellXfs();
	void __fastcall Clear();
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property TCT_XfXpgList* XfXpgList = {read=FXfXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CellStyles : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_CellStyleXpgList* FCellStyleXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CellStyles(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CellStyles();
	void __fastcall Clear();
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property TCT_CellStyleXpgList* CellStyleXpgList = {read=FCellStyleXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Dxfs : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_DxfXpgList* FDxfXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Dxfs(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Dxfs();
	void __fastcall Clear();
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property TCT_DxfXpgList* DxfXpgList = {read=FDxfXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TableStyles : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	System::UnicodeString FDefaultTableStyle;
	System::UnicodeString FDefaultPivotStyle;
	TCT_TableStyleXpgList* FTableStyleXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_TableStyles(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TableStyles();
	void __fastcall Clear();
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property System::UnicodeString DefaultTableStyle = {read=FDefaultTableStyle, write=FDefaultTableStyle};
	__property System::UnicodeString DefaultPivotStyle = {read=FDefaultPivotStyle, write=FDefaultPivotStyle};
	__property TCT_TableStyleXpgList* TableStyleXpgList = {read=FTableStyleXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Colors : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_IndexedColors* FIndexedColors;
	TCT_MRUColors* FMruColors;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Colors(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Colors();
	void __fastcall Clear();
	__property TCT_IndexedColors* IndexedColors = {read=FIndexedColors};
	__property TCT_MRUColors* MruColors = {read=FMruColors};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FileVersion : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FAppName;
	System::UnicodeString FLastEdited;
	System::UnicodeString FLowestEdited;
	System::UnicodeString FRupBuild;
	System::UnicodeString FCodeName;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_FileVersion(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FileVersion();
	void __fastcall Clear();
	__property System::UnicodeString AppName = {read=FAppName, write=FAppName};
	__property System::UnicodeString LastEdited = {read=FLastEdited, write=FLastEdited};
	__property System::UnicodeString LowestEdited = {read=FLowestEdited, write=FLowestEdited};
	__property System::UnicodeString RupBuild = {read=FRupBuild, write=FRupBuild};
	__property System::UnicodeString CodeName = {read=FCodeName, write=FCodeName};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FileSharing : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FReadOnlyRecommended;
	System::UnicodeString FUserName;
	int FReservationPassword;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_FileSharing(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FileSharing();
	void __fastcall Clear();
	__property bool ReadOnlyRecommended = {read=FReadOnlyRecommended, write=FReadOnlyRecommended, nodefault};
	__property System::UnicodeString UserName = {read=FUserName, write=FUserName};
	__property int ReservationPassword = {read=FReservationPassword, write=FReservationPassword, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_WorkbookPr : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FDate1904;
	TST_Objects FShowObjects;
	bool FShowBorderUnselectedTables;
	bool FFilterPrivacy;
	bool FPromptedSolutions;
	bool FShowInkAnnotation;
	bool FBackupFile;
	bool FSaveExternalLinkValues;
	TST_UpdateLinks FUpdateLinks;
	System::UnicodeString FCodeName;
	bool FHidePivotFieldList;
	bool FShowPivotChartFilter;
	bool FAllowRefreshQuery;
	bool FPublishItems;
	bool FCheckCompatibility;
	bool FAutoCompressPictures;
	bool FRefreshAllConnections;
	int FDefaultThemeVersion;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_WorkbookPr(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_WorkbookPr();
	void __fastcall Clear();
	__property bool Date1904 = {read=FDate1904, write=FDate1904, nodefault};
	__property TST_Objects ShowObjects = {read=FShowObjects, write=FShowObjects, nodefault};
	__property bool ShowBorderUnselectedTables = {read=FShowBorderUnselectedTables, write=FShowBorderUnselectedTables, nodefault};
	__property bool FilterPrivacy = {read=FFilterPrivacy, write=FFilterPrivacy, nodefault};
	__property bool PromptedSolutions = {read=FPromptedSolutions, write=FPromptedSolutions, nodefault};
	__property bool ShowInkAnnotation = {read=FShowInkAnnotation, write=FShowInkAnnotation, nodefault};
	__property bool BackupFile = {read=FBackupFile, write=FBackupFile, nodefault};
	__property bool SaveExternalLinkValues = {read=FSaveExternalLinkValues, write=FSaveExternalLinkValues, nodefault};
	__property TST_UpdateLinks UpdateLinks = {read=FUpdateLinks, write=FUpdateLinks, nodefault};
	__property System::UnicodeString CodeName = {read=FCodeName, write=FCodeName};
	__property bool HidePivotFieldList = {read=FHidePivotFieldList, write=FHidePivotFieldList, nodefault};
	__property bool ShowPivotChartFilter = {read=FShowPivotChartFilter, write=FShowPivotChartFilter, nodefault};
	__property bool AllowRefreshQuery = {read=FAllowRefreshQuery, write=FAllowRefreshQuery, nodefault};
	__property bool PublishItems = {read=FPublishItems, write=FPublishItems, nodefault};
	__property bool CheckCompatibility = {read=FCheckCompatibility, write=FCheckCompatibility, nodefault};
	__property bool AutoCompressPictures = {read=FAutoCompressPictures, write=FAutoCompressPictures, nodefault};
	__property bool RefreshAllConnections = {read=FRefreshAllConnections, write=FRefreshAllConnections, nodefault};
	__property int DefaultThemeVersion = {read=FDefaultThemeVersion, write=FDefaultThemeVersion, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_WorkbookProtection : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FWorkbookPassword;
	int FRevisionsPassword;
	bool FLockStructure;
	bool FLockWindows;
	bool FLockRevision;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_WorkbookProtection(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_WorkbookProtection();
	void __fastcall Clear();
	__property int WorkbookPassword = {read=FWorkbookPassword, write=FWorkbookPassword, nodefault};
	__property int RevisionsPassword = {read=FRevisionsPassword, write=FRevisionsPassword, nodefault};
	__property bool LockStructure = {read=FLockStructure, write=FLockStructure, nodefault};
	__property bool LockWindows = {read=FLockWindows, write=FLockWindows, nodefault};
	__property bool LockRevision = {read=FLockRevision, write=FLockRevision, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BookViews : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_BookViewXpgList* FWorkbookViewXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_BookViews(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BookViews();
	void __fastcall Clear();
	__property TCT_BookViewXpgList* WorkbookViewXpgList = {read=FWorkbookViewXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Sheets : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_SheetXpgList* FSheetXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Sheets(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Sheets();
	void __fastcall Clear();
	__property TCT_SheetXpgList* SheetXpgList = {read=FSheetXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FunctionGroups : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FBuiltInGroupCount;
	TCT_FunctionGroupXpgList* FFunctionGroupXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_FunctionGroups(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FunctionGroups();
	void __fastcall Clear();
	__property int BuiltInGroupCount = {read=FBuiltInGroupCount, write=FBuiltInGroupCount, nodefault};
	__property TCT_FunctionGroupXpgList* FunctionGroupXpgList = {read=FFunctionGroupXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ExternalReferences : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_ExternalReferenceXpgList* FExternalReferenceXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_ExternalReferences(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ExternalReferences();
	void __fastcall Clear();
	__property TCT_ExternalReferenceXpgList* ExternalReferenceXpgList = {read=FExternalReferenceXpgList};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_DefinedNames : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_DefinedName* FDefinedName;
	System::Classes::TNotifyEvent FOnReadDefinedName;
	Xpgputils::TWriteElementEvent FOnWriteDefinedName;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AfterTag(TXPGReader* AReader);
	
public:
	__fastcall TCT_DefinedNames(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DefinedNames();
	void __fastcall Clear();
	__property TCT_DefinedName* DefinedName = {read=FDefinedName};
	__property System::Classes::TNotifyEvent OnReadDefinedName = {read=FOnReadDefinedName, write=FOnReadDefinedName};
	__property Xpgputils::TWriteElementEvent OnWriteDefinedName = {read=FOnWriteDefinedName, write=FOnWriteDefinedName};
};


class PASCALIMPLEMENTATION TCT_CalcPr : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCalcId;
	TST_CalcMode FCalcMode;
	bool FFullCalcOnLoad;
	TST_RefMode FRefMode;
	bool FIterate;
	int FIterateCount;
	double FIterateDelta;
	bool FFullPrecision;
	bool FCalcCompleted;
	bool FCalcOnSave;
	bool FConcurrentCalc;
	int FConcurrentManualCount;
	bool FForceFullCalc;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_CalcPr(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CalcPr();
	void __fastcall Clear();
	__property int CalcId = {read=FCalcId, write=FCalcId, nodefault};
	__property TST_CalcMode CalcMode = {read=FCalcMode, write=FCalcMode, nodefault};
	__property bool FullCalcOnLoad = {read=FFullCalcOnLoad, write=FFullCalcOnLoad, nodefault};
	__property TST_RefMode RefMode = {read=FRefMode, write=FRefMode, nodefault};
	__property bool Iterate = {read=FIterate, write=FIterate, nodefault};
	__property int IterateCount = {read=FIterateCount, write=FIterateCount, nodefault};
	__property double IterateDelta = {read=FIterateDelta, write=FIterateDelta};
	__property bool FullPrecision = {read=FFullPrecision, write=FFullPrecision, nodefault};
	__property bool CalcCompleted = {read=FCalcCompleted, write=FCalcCompleted, nodefault};
	__property bool CalcOnSave = {read=FCalcOnSave, write=FCalcOnSave, nodefault};
	__property bool ConcurrentCalc = {read=FConcurrentCalc, write=FConcurrentCalc, nodefault};
	__property int ConcurrentManualCount = {read=FConcurrentManualCount, write=FConcurrentManualCount, nodefault};
	__property bool ForceFullCalc = {read=FForceFullCalc, write=FForceFullCalc, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OleSize : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FRef;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_OleSize(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_OleSize();
	void __fastcall Clear();
	__property System::UnicodeString Ref = {read=FRef, write=FRef};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustomWorkbookViews : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_CustomWorkbookViewXpgList* FCustomWorkbookViewXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_CustomWorkbookViews(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CustomWorkbookViews();
	void __fastcall Clear();
	__property TCT_CustomWorkbookViewXpgList* CustomWorkbookViewXpgList = {read=FCustomWorkbookViewXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PivotCaches : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_PivotCacheXpgList* FPivotCacheXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_PivotCaches(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PivotCaches();
	void __fastcall Clear();
	__property TCT_PivotCacheXpgList* PivotCacheXpgList = {read=FPivotCacheXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SmartTagPr : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FEmbed;
	TST_SmartTagShow FShow;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_SmartTagPr(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SmartTagPr();
	void __fastcall Clear();
	__property bool Embed = {read=FEmbed, write=FEmbed, nodefault};
	__property TST_SmartTagShow Show = {read=FShow, write=FShow, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SmartTagTypes : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_SmartTagTypeXpgList* FSmartTagTypeXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_SmartTagTypes(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SmartTagTypes();
	void __fastcall Clear();
	__property TCT_SmartTagTypeXpgList* SmartTagTypeXpgList = {read=FSmartTagTypeXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_WebPublishing : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FCss;
	bool FThicket;
	bool FLongFileNames;
	bool FVml;
	bool FAllowPng;
	TST_TargetScreenSize FTargetScreenSize;
	int FDpi;
	int FCodePage;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_WebPublishing(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_WebPublishing();
	void __fastcall Clear();
	__property bool Css = {read=FCss, write=FCss, nodefault};
	__property bool Thicket = {read=FThicket, write=FThicket, nodefault};
	__property bool LongFileNames = {read=FLongFileNames, write=FLongFileNames, nodefault};
	__property bool Vml = {read=FVml, write=FVml, nodefault};
	__property bool AllowPng = {read=FAllowPng, write=FAllowPng, nodefault};
	__property TST_TargetScreenSize TargetScreenSize = {read=FTargetScreenSize, write=FTargetScreenSize, nodefault};
	__property int Dpi = {read=FDpi, write=FDpi, nodefault};
	__property int CodePage = {read=FCodePage, write=FCodePage, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FileRecoveryPr : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FAutoRecover;
	bool FCrashSave;
	bool FDataExtractLoad;
	bool FRepairLoad;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_FileRecoveryPr(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FileRecoveryPr();
	void __fastcall Clear();
	__property bool AutoRecover = {read=FAutoRecover, write=FAutoRecover, nodefault};
	__property bool CrashSave = {read=FCrashSave, write=FCrashSave, nodefault};
	__property bool DataExtractLoad = {read=FDataExtractLoad, write=FDataExtractLoad, nodefault};
	__property bool RepairLoad = {read=FRepairLoad, write=FRepairLoad, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FileRecoveryPrXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_FileRecoveryPr* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_FileRecoveryPr* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_FileRecoveryPr* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_FileRecoveryPr* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_FileRecoveryPrXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_FileRecoveryPrXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_WebPublishObjects : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_WebPublishObjectXpgList* FWebPublishObjectXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_WebPublishObjects(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_WebPublishObjects();
	void __fastcall Clear();
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property TCT_WebPublishObjectXpgList* WebPublishObjectXpgList = {read=FWebPublishObjectXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Authors : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	Xpgplists::TStringXpgList* FAuthorXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Authors(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Authors();
	void __fastcall Clear();
	__property Xpgplists::TStringXpgList* AuthorXpgList = {read=FAuthorXpgList};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_CommentList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_Comment* FComment;
	System::Classes::TNotifyEvent FOnReadComment;
	Xpgputils::TWriteElementEvent FOnWriteComment;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AfterTag(TXPGReader* AReader);
	
public:
	__fastcall TCT_CommentList(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CommentList();
	void __fastcall Clear();
	__property TCT_Comment* Comment = {read=FComment};
	__property System::Classes::TNotifyEvent OnReadComment = {read=FOnReadComment, write=FOnReadComment};
	__property Xpgputils::TWriteElementEvent OnWriteComment = {read=FOnWriteComment, write=FOnWriteComment};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ChartsheetPr : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FPublished;
	System::UnicodeString FCodeName;
	TCT_Color* FTabColor;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_ChartsheetPr(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ChartsheetPr();
	void __fastcall Clear();
	__property bool Published_ = {read=FPublished, write=FPublished, nodefault};
	__property System::UnicodeString CodeName = {read=FCodeName, write=FCodeName};
	__property TCT_Color* TabColor = {read=FTabColor};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ChartsheetViews : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_ChartsheetViewXpgList* FSheetViewXpgList;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_ChartsheetViews(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ChartsheetViews();
	void __fastcall Clear();
	__property TCT_ChartsheetViewXpgList* SheetViewXpgList = {read=FSheetViewXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ChartsheetProtection : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FPassword;
	bool FContent;
	bool FObjects;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_ChartsheetProtection(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ChartsheetProtection();
	void __fastcall Clear();
	__property int Password = {read=FPassword, write=FPassword, nodefault};
	__property bool Content = {read=FContent, write=FContent, nodefault};
	__property bool Objects = {read=FObjects, write=FObjects, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustomChartsheetViews : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_CustomChartsheetViewXpgList* FCustomSheetViewXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_CustomChartsheetViews(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CustomChartsheetViews();
	void __fastcall Clear();
	__property TCT_CustomChartsheetViewXpgList* CustomSheetViewXpgList = {read=FCustomSheetViewXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Drawing : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FR_Id;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Drawing(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Drawing();
	void __fastcall Clear();
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LegacyDrawing : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FR_Id;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_LegacyDrawing(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LegacyDrawing();
	void __fastcall Clear();
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SheetBackgroundPicture : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FR_Id;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_SheetBackgroundPicture(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SheetBackgroundPicture();
	void __fastcall Clear();
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_WebPublishItems : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_WebPublishItemXpgList* FWebPublishItemXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_WebPublishItems(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_WebPublishItems();
	void __fastcall Clear();
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property TCT_WebPublishItemXpgList* WebPublishItemXpgList = {read=FWebPublishItemXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SheetPr : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FSyncHorizontal;
	bool FSyncVertical;
	System::UnicodeString FSyncRef;
	bool FTransitionEvaluation;
	bool FTransitionEntry;
	bool FPublished;
	System::UnicodeString FCodeName;
	bool FFilterMode;
	bool FEnableFormatConditionsCalculation;
	TCT_Color* FTabColor;
	TCT_OutlinePr* FOutlinePr;
	TCT_PageSetUpPr* FPageSetUpPr;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_SheetPr(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SheetPr();
	void __fastcall Clear();
	__property bool SyncHorizontal = {read=FSyncHorizontal, write=FSyncHorizontal, nodefault};
	__property bool SyncVertical = {read=FSyncVertical, write=FSyncVertical, nodefault};
	__property System::UnicodeString SyncRef = {read=FSyncRef, write=FSyncRef};
	__property bool TransitionEvaluation = {read=FTransitionEvaluation, write=FTransitionEvaluation, nodefault};
	__property bool TransitionEntry = {read=FTransitionEntry, write=FTransitionEntry, nodefault};
	__property bool Published_ = {read=FPublished, write=FPublished, nodefault};
	__property System::UnicodeString CodeName = {read=FCodeName, write=FCodeName};
	__property bool FilterMode = {read=FFilterMode, write=FFilterMode, nodefault};
	__property bool EnableFormatConditionsCalculation = {read=FEnableFormatConditionsCalculation, write=FEnableFormatConditionsCalculation, nodefault};
	__property TCT_Color* TabColor = {read=FTabColor};
	__property TCT_OutlinePr* OutlinePr = {read=FOutlinePr};
	__property TCT_PageSetUpPr* PageSetUpPr = {read=FPageSetUpPr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SheetViews : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_SheetViewXpgList* FSheetViewXpgList;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_SheetViews(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SheetViews();
	void __fastcall Clear();
	__property TCT_SheetViewXpgList* SheetViewXpgList = {read=FSheetViewXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_SheetFormatPr : public TXPGBase
{
	typedef TXPGBase inherited;
	
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
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_SheetFormatPr(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SheetFormatPr();
	void __fastcall Clear();
	__property int BaseColWidth = {read=FBaseColWidth, write=FBaseColWidth, nodefault};
	__property double DefaultColWidth = {read=FDefaultColWidth, write=FDefaultColWidth};
	__property double DefaultRowHeight = {read=FDefaultRowHeight, write=FDefaultRowHeight};
	__property bool CustomHeight = {read=FCustomHeight, write=FCustomHeight, nodefault};
	__property bool ZeroHeight = {read=FZeroHeight, write=FZeroHeight, nodefault};
	__property bool ThickTop = {read=FThickTop, write=FThickTop, nodefault};
	__property bool ThickBottom = {read=FThickBottom, write=FThickBottom, nodefault};
	__property int OutlineLevelRow = {read=FOutlineLevelRow, write=FOutlineLevelRow, nodefault};
	__property int OutlineLevelCol = {read=FOutlineLevelCol, write=FOutlineLevelCol, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SheetProtection : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FPassword;
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
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_SheetProtection(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SheetProtection();
	void __fastcall Clear();
	__property int Password = {read=FPassword, write=FPassword, nodefault};
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
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustomSheetViews : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_CustomSheetViewXpgList* FCustomSheetViewXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_CustomSheetViews(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CustomSheetViews();
	void __fastcall Clear();
	__property TCT_CustomSheetViewXpgList* CustomSheetViewXpgList = {read=FCustomSheetViewXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OleObjects : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_OleObjectXpgList* FOleObjectXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_OleObjects(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_OleObjects();
	void __fastcall Clear();
	__property TCT_OleObjectXpgList* OleObjectXpgList = {read=FOleObjectXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SheetDimension : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FRef;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_SheetDimension(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SheetDimension();
	void __fastcall Clear();
	__property System::UnicodeString Ref = {read=FRef, write=FRef};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Cols : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_Col* FCol;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AfterTag(TXPGReader* AReader);
	
public:
	__fastcall TCT_Cols(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Cols();
	void __fastcall Clear();
	__property TCT_Col* Col = {read=FCol};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ColsXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Cols* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Cols* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Cols* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_Cols* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ColsXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ColsXpgList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_SheetData : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_Row* FRow;
	System::Classes::TNotifyEvent FOnReadRow;
	Xpgputils::TWriteElementEvent FOnWriteRow;
	bool FTableMode;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AfterTag(TXPGReader* AReader);
	
public:
	__fastcall TCT_SheetData(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SheetData();
	void __fastcall Clear();
	__property TCT_Row* Row = {read=FRow};
	__property System::Classes::TNotifyEvent OnReadRow = {read=FOnReadRow, write=FOnReadRow};
	__property Xpgputils::TWriteElementEvent OnWriteRow = {read=FOnWriteRow, write=FOnWriteRow};
	__property bool TableMode = {read=FTableMode, write=FTableMode, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SheetCalcPr : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FFullCalcOnLoad;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_SheetCalcPr(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SheetCalcPr();
	void __fastcall Clear();
	__property bool FullCalcOnLoad = {read=FFullCalcOnLoad, write=FFullCalcOnLoad, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ProtectedRanges : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_ProtectedRangeXpgList* FProtectedRangeXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_ProtectedRanges(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ProtectedRanges();
	void __fastcall Clear();
	__property TCT_ProtectedRangeXpgList* ProtectedRangeXpgList = {read=FProtectedRangeXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Scenarios : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCurrent;
	int FShow;
	Xpgplists::TStringXpgList* FSqrefXpgList;
	TCT_ScenarioXpgList* FScenarioXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Scenarios(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Scenarios();
	void __fastcall Clear();
	__property int Current = {read=FCurrent, write=FCurrent, nodefault};
	__property int Show = {read=FShow, write=FShow, nodefault};
	__property Xpgplists::TStringXpgList* SqrefXpgList = {read=FSqrefXpgList};
	__property TCT_ScenarioXpgList* ScenarioXpgList = {read=FScenarioXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DataConsolidate : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_DataConsolidateFunction FFunction;
	bool FLeftLabels;
	bool FTopLabels;
	bool FLink;
	TCT_DataRefs* FDataRefs;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_DataConsolidate(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DataConsolidate();
	void __fastcall Clear();
	__property TST_DataConsolidateFunction Function_ = {read=FFunction, write=FFunction, nodefault};
	__property bool LeftLabels = {read=FLeftLabels, write=FLeftLabels, nodefault};
	__property bool TopLabels = {read=FTopLabels, write=FTopLabels, nodefault};
	__property bool Link = {read=FLink, write=FLink, nodefault};
	__property TCT_DataRefs* DataRefs = {read=FDataRefs};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_MergeCells : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_MergeCell* FMergeCell;
	System::Classes::TNotifyEvent FOnReadMergeCell;
	Xpgputils::TWriteElementEvent FOnWriteMergeCell;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	virtual void __fastcall AfterTag(TXPGReader* AReader);
	
public:
	__fastcall TCT_MergeCells(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_MergeCells();
	void __fastcall Clear();
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property TCT_MergeCell* MergeCell = {read=FMergeCell};
	__property System::Classes::TNotifyEvent OnReadMergeCell = {read=FOnReadMergeCell, write=FOnReadMergeCell};
	__property Xpgputils::TWriteElementEvent OnWriteMergeCell = {read=FOnWriteMergeCell, write=FOnWriteMergeCell};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ConditionalFormatting : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FPivot;
	Xpgplists::TStringXpgList* FSqrefXpgList;
	TCT_CfRuleXpgList* FCfRuleXpgList;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_ConditionalFormatting(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ConditionalFormatting();
	void __fastcall Clear();
	__property bool Pivot = {read=FPivot, write=FPivot, nodefault};
	__property Xpgplists::TStringXpgList* SqrefXpgList = {read=FSqrefXpgList};
	__property TCT_CfRuleXpgList* CfRuleXpgList = {read=FCfRuleXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ConditionalFormattingXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_ConditionalFormatting* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ConditionalFormatting* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ConditionalFormatting* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_ConditionalFormatting* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ConditionalFormattingXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ConditionalFormattingXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DataValidations : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FDisablePrompts;
	int FXWindow;
	int FYWindow;
	int FCount;
	TCT_DataValidationXpgList* FDataValidationXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_DataValidations(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DataValidations();
	void __fastcall Clear();
	__property bool DisablePrompts = {read=FDisablePrompts, write=FDisablePrompts, nodefault};
	__property int XWindow = {read=FXWindow, write=FXWindow, nodefault};
	__property int YWindow = {read=FYWindow, write=FYWindow, nodefault};
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property TCT_DataValidationXpgList* DataValidationXpgList = {read=FDataValidationXpgList};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_Hyperlinks : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_Hyperlink* FHyperlink;
	System::Classes::TNotifyEvent FOnReadHyperlink;
	Xpgputils::TWriteElementEvent FOnWriteHyperlink;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AfterTag(TXPGReader* AReader);
	
public:
	__fastcall TCT_Hyperlinks(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Hyperlinks();
	void __fastcall Clear();
	__property TCT_Hyperlink* Hyperlink = {read=FHyperlink};
	__property System::Classes::TNotifyEvent OnReadHyperlink = {read=FOnReadHyperlink, write=FOnReadHyperlink};
	__property Xpgputils::TWriteElementEvent OnWriteHyperlink = {read=FOnWriteHyperlink, write=FOnWriteHyperlink};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustomProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_CustomPropertyXpgList* FCustomPrXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_CustomProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CustomProperties();
	void __fastcall Clear();
	__property TCT_CustomPropertyXpgList* CustomPrXpgList = {read=FCustomPrXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CellWatches : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_CellWatchXpgList* FCellWatchXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_CellWatches(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CellWatches();
	void __fastcall Clear();
	__property TCT_CellWatchXpgList* CellWatchXpgList = {read=FCellWatchXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_IgnoredErrors : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_IgnoredErrorXpgList* FIgnoredErrorXpgList;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_IgnoredErrors(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_IgnoredErrors();
	void __fastcall Clear();
	__property TCT_IgnoredErrorXpgList* IgnoredErrorXpgList = {read=FIgnoredErrorXpgList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SmartTags : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_CellSmartTagsXpgList* FCellSmartTagsXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_SmartTags(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SmartTags();
	void __fastcall Clear();
	__property TCT_CellSmartTagsXpgList* CellSmartTagsXpgList = {read=FCellSmartTagsXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Controls : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_ControlXpgList* FControlXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Controls(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Controls();
	void __fastcall Clear();
	__property TCT_ControlXpgList* ControlXpgList = {read=FControlXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TableParts : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_TablePartXpgList* FTablePartXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_TableParts(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TableParts();
	void __fastcall Clear();
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property TCT_TablePartXpgList* TablePartXpgList = {read=FTablePartXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Stylesheet : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_NumFmts* FNumFmts;
	TCT_Fonts* FFonts;
	TCT_Fills* FFills;
	TCT_Borders* FBorders;
	TCT_CellStyleXfs* FCellStyleXfs;
	TCT_CellXfs* FCellXfs;
	TCT_CellStyles* FCellStyles;
	TCT_Dxfs* FDxfs;
	TCT_TableStyles* FTableStyles;
	TCT_Colors* FColors;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Stylesheet(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Stylesheet();
	void __fastcall Clear();
	__property TCT_NumFmts* NumFmts = {read=FNumFmts};
	__property TCT_Fonts* Fonts = {read=FFonts};
	__property TCT_Fills* Fills = {read=FFills};
	__property TCT_Borders* Borders = {read=FBorders};
	__property TCT_CellStyleXfs* CellStyleXfs = {read=FCellStyleXfs};
	__property TCT_CellXfs* CellXfs = {read=FCellXfs};
	__property TCT_CellStyles* CellStyles = {read=FCellStyles};
	__property TCT_Dxfs* Dxfs = {read=FDxfs};
	__property TCT_TableStyles* TableStyles = {read=FTableStyles};
	__property TCT_Colors* Colors = {read=FColors};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_Sst : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	int FUniqueCount;
	TCT_Rst* FSi;
	System::Classes::TNotifyEvent FOnReadSi;
	Xpgputils::TWriteElementEvent FOnWriteSi;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	virtual void __fastcall AfterTag(TXPGReader* AReader);
	
public:
	__fastcall TCT_Sst(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Sst();
	void __fastcall Clear();
	__property int Count_ = {read=FCount, write=FCount, nodefault};
	__property int UniqueCount = {read=FUniqueCount, write=FUniqueCount, nodefault};
	__property TCT_Rst* Si = {read=FSi};
	__property System::Classes::TNotifyEvent OnReadSi = {read=FOnReadSi, write=FOnReadSi};
	__property Xpgputils::TWriteElementEvent OnWriteSi = {read=FOnWriteSi, write=FOnWriteSi};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};


class PASCALIMPLEMENTATION TCT_Workbook : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_FileVersion* FFileVersion;
	TCT_FileSharing* FFileSharing;
	TCT_WorkbookPr* FWorkbookPr;
	TCT_WorkbookProtection* FWorkbookProtection;
	TCT_BookViews* FBookViews;
	TCT_Sheets* FSheets;
	TCT_FunctionGroups* FFunctionGroups;
	TCT_ExternalReferences* FExternalReferences;
	TCT_DefinedNames* FDefinedNames;
	System::Classes::TNotifyEvent FOnReadDefinedNames;
	Xpgputils::TWriteElementEvent FOnWriteDefinedNames;
	TCT_CalcPr* FCalcPr;
	TCT_OleSize* FOleSize;
	TCT_CustomWorkbookViews* FCustomWorkbookViews;
	TCT_PivotCaches* FPivotCaches;
	TCT_SmartTagPr* FSmartTagPr;
	TCT_SmartTagTypes* FSmartTagTypes;
	TCT_WebPublishing* FWebPublishing;
	TCT_FileRecoveryPrXpgList* FFileRecoveryPrXpgList;
	TCT_WebPublishObjects* FWebPublishObjects;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AfterTag(TXPGReader* AReader);
	
public:
	__fastcall TCT_Workbook(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Workbook();
	void __fastcall Clear();
	__property TCT_FileVersion* FileVersion = {read=FFileVersion};
	__property TCT_FileSharing* FileSharing = {read=FFileSharing};
	__property TCT_WorkbookPr* WorkbookPr = {read=FWorkbookPr};
	__property TCT_WorkbookProtection* WorkbookProtection = {read=FWorkbookProtection};
	__property TCT_BookViews* BookViews = {read=FBookViews};
	__property TCT_Sheets* Sheets = {read=FSheets};
	__property TCT_FunctionGroups* FunctionGroups = {read=FFunctionGroups};
	__property TCT_ExternalReferences* ExternalReferences = {read=FExternalReferences};
	__property TCT_DefinedNames* DefinedNames = {read=FDefinedNames};
	__property System::Classes::TNotifyEvent OnReadDefinedNames = {read=FOnReadDefinedNames, write=FOnReadDefinedNames};
	__property Xpgputils::TWriteElementEvent OnWriteDefinedNames = {read=FOnWriteDefinedNames, write=FOnWriteDefinedNames};
	__property TCT_CalcPr* CalcPr = {read=FCalcPr};
	__property TCT_OleSize* OleSize = {read=FOleSize};
	__property TCT_CustomWorkbookViews* CustomWorkbookViews = {read=FCustomWorkbookViews};
	__property TCT_PivotCaches* PivotCaches = {read=FPivotCaches};
	__property TCT_SmartTagPr* SmartTagPr = {read=FSmartTagPr};
	__property TCT_SmartTagTypes* SmartTagTypes = {read=FSmartTagTypes};
	__property TCT_WebPublishing* WebPublishing = {read=FWebPublishing};
	__property TCT_FileRecoveryPrXpgList* FileRecoveryPrXpgList = {read=FFileRecoveryPrXpgList};
	__property TCT_WebPublishObjects* WebPublishObjects = {read=FWebPublishObjects};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Comments : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_Authors* FAuthors;
	TCT_CommentList* FCommentList;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Comments(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Comments();
	void __fastcall Clear();
	__property TCT_Authors* Authors = {read=FAuthors};
	__property TCT_CommentList* CommentList = {read=FCommentList};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Chartsheet : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_ChartsheetPr* FSheetPr;
	TCT_ChartsheetViews* FSheetViews;
	TCT_ChartsheetProtection* FSheetProtection;
	TCT_CustomChartsheetViews* FCustomSheetViews;
	TCT_PageMargins* FPageMargins;
	TCT_CsPageSetup* FPageSetup;
	TCT_HeaderFooter* FHeaderFooter;
	TCT_Drawing* FDrawing;
	TCT_LegacyDrawing* FLegacyDrawing;
	TCT_LegacyDrawing* FLegacyDrawingHF;
	TCT_SheetBackgroundPicture* FPicture;
	TCT_WebPublishItems* FWebPublishItems;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Chartsheet(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Chartsheet();
	void __fastcall Clear();
	__property TCT_ChartsheetPr* SheetPr = {read=FSheetPr};
	__property TCT_ChartsheetViews* SheetViews = {read=FSheetViews};
	__property TCT_ChartsheetProtection* SheetProtection = {read=FSheetProtection};
	__property TCT_CustomChartsheetViews* CustomSheetViews = {read=FCustomSheetViews};
	__property TCT_PageMargins* PageMargins = {read=FPageMargins};
	__property TCT_CsPageSetup* PageSetup = {read=FPageSetup};
	__property TCT_HeaderFooter* HeaderFooter = {read=FHeaderFooter};
	__property TCT_Drawing* Drawing = {read=FDrawing};
	__property TCT_LegacyDrawing* LegacyDrawing = {read=FLegacyDrawing};
	__property TCT_LegacyDrawing* LegacyDrawingHF = {read=FLegacyDrawingHF};
	__property TCT_SheetBackgroundPicture* Picture = {read=FPicture};
	__property TCT_WebPublishItems* WebPublishItems = {read=FWebPublishItems};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Dialogsheet : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_SheetPr* FSheetPr;
	TCT_SheetViews* FSheetViews;
	TCT_SheetFormatPr* FSheetFormatPr;
	TCT_SheetProtection* FSheetProtection;
	TCT_CustomSheetViews* FCustomSheetViews;
	TCT_PrintOptions* FPrintOptions;
	TCT_PageMargins* FPageMargins;
	TCT_PageSetup* FPageSetup;
	TCT_HeaderFooter* FHeaderFooter;
	TCT_Drawing* FDrawing;
	TCT_LegacyDrawing* FLegacyDrawing;
	TCT_LegacyDrawing* FLegacyDrawingHF;
	TCT_OleObjects* FOleObjects;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Dialogsheet(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Dialogsheet();
	void __fastcall Clear();
	__property TCT_SheetPr* SheetPr = {read=FSheetPr};
	__property TCT_SheetViews* SheetViews = {read=FSheetViews};
	__property TCT_SheetFormatPr* SheetFormatPr = {read=FSheetFormatPr};
	__property TCT_SheetProtection* SheetProtection = {read=FSheetProtection};
	__property TCT_CustomSheetViews* CustomSheetViews = {read=FCustomSheetViews};
	__property TCT_PrintOptions* PrintOptions = {read=FPrintOptions};
	__property TCT_PageMargins* PageMargins = {read=FPageMargins};
	__property TCT_PageSetup* PageSetup = {read=FPageSetup};
	__property TCT_HeaderFooter* HeaderFooter = {read=FHeaderFooter};
	__property TCT_Drawing* Drawing = {read=FDrawing};
	__property TCT_LegacyDrawing* LegacyDrawing = {read=FLegacyDrawing};
	__property TCT_LegacyDrawing* LegacyDrawingHF = {read=FLegacyDrawingHF};
	__property TCT_OleObjects* OleObjects = {read=FOleObjects};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Worksheet : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_SheetPr* FSheetPr;
	TCT_SheetDimension* FDimension;
	TCT_SheetViews* FSheetViews;
	TCT_SheetFormatPr* FSheetFormatPr;
	TCT_ColsXpgList* FColsXpgList;
	TCT_SheetData* FSheetData;
	TCT_SheetCalcPr* FSheetCalcPr;
	TCT_SheetProtection* FSheetProtection;
	TCT_ProtectedRanges* FProtectedRanges;
	TCT_Scenarios* FScenarios;
	TCT_AutoFilter* FAutoFilter;
	TCT_SortState* FSortState;
	TCT_DataConsolidate* FDataConsolidate;
	TCT_CustomSheetViews* FCustomSheetViews;
	TCT_MergeCells* FMergeCells;
	TCT_PhoneticPr* FPhoneticPr;
	TCT_ConditionalFormattingXpgList* FConditionalFormattingXpgList;
	TCT_DataValidations* FDataValidations;
	TCT_Hyperlinks* FHyperlinks;
	TCT_PrintOptions* FPrintOptions;
	TCT_PageMargins* FPageMargins;
	TCT_PageSetup* FPageSetup;
	TCT_HeaderFooter* FHeaderFooter;
	TCT_PageBreak* FRowBreaks;
	TCT_PageBreak* FColBreaks;
	TCT_CustomProperties* FCustomProperties;
	TCT_CellWatches* FCellWatches;
	TCT_IgnoredErrors* FIgnoredErrors;
	TCT_SmartTags* FSmartTags;
	TCT_Drawing* FDrawing;
	TCT_LegacyDrawing* FLegacyDrawing;
	TCT_LegacyDrawing* FLegacyDrawingHF;
	TCT_SheetBackgroundPicture* FPicture;
	TCT_OleObjects* FOleObjects;
	TCT_Controls* FControls;
	TCT_WebPublishItems* FWebPublishItems;
	TCT_TableParts* FTableParts;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Worksheet(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Worksheet();
	void __fastcall Clear();
	__property TCT_SheetPr* SheetPr = {read=FSheetPr};
	__property TCT_SheetDimension* Dimension = {read=FDimension};
	__property TCT_SheetViews* SheetViews = {read=FSheetViews};
	__property TCT_SheetFormatPr* SheetFormatPr = {read=FSheetFormatPr};
	__property TCT_ColsXpgList* ColsXpgList = {read=FColsXpgList};
	__property TCT_SheetData* SheetData = {read=FSheetData};
	__property TCT_SheetCalcPr* SheetCalcPr = {read=FSheetCalcPr};
	__property TCT_SheetProtection* SheetProtection = {read=FSheetProtection};
	__property TCT_ProtectedRanges* ProtectedRanges = {read=FProtectedRanges};
	__property TCT_Scenarios* Scenarios = {read=FScenarios};
	__property TCT_AutoFilter* AutoFilter = {read=FAutoFilter};
	__property TCT_SortState* SortState = {read=FSortState};
	__property TCT_DataConsolidate* DataConsolidate = {read=FDataConsolidate};
	__property TCT_CustomSheetViews* CustomSheetViews = {read=FCustomSheetViews};
	__property TCT_MergeCells* MergeCells = {read=FMergeCells};
	__property TCT_PhoneticPr* PhoneticPr = {read=FPhoneticPr};
	__property TCT_ConditionalFormattingXpgList* ConditionalFormattingXpgList = {read=FConditionalFormattingXpgList};
	__property TCT_DataValidations* DataValidations = {read=FDataValidations};
	__property TCT_Hyperlinks* Hyperlinks = {read=FHyperlinks};
	__property TCT_PrintOptions* PrintOptions = {read=FPrintOptions};
	__property TCT_PageMargins* PageMargins = {read=FPageMargins};
	__property TCT_PageSetup* PageSetup = {read=FPageSetup};
	__property TCT_HeaderFooter* HeaderFooter = {read=FHeaderFooter};
	__property TCT_PageBreak* RowBreaks = {read=FRowBreaks};
	__property TCT_PageBreak* ColBreaks = {read=FColBreaks};
	__property TCT_CustomProperties* CustomProperties = {read=FCustomProperties};
	__property TCT_CellWatches* CellWatches = {read=FCellWatches};
	__property TCT_IgnoredErrors* IgnoredErrors = {read=FIgnoredErrors};
	__property TCT_SmartTags* SmartTags = {read=FSmartTags};
	__property TCT_Drawing* Drawing = {read=FDrawing};
	__property TCT_LegacyDrawing* LegacyDrawing = {read=FLegacyDrawing};
	__property TCT_LegacyDrawing* LegacyDrawingHF = {read=FLegacyDrawingHF};
	__property TCT_SheetBackgroundPicture* Picture = {read=FPicture};
	__property TCT_OleObjects* OleObjects = {read=FOleObjects};
	__property TCT_Controls* Controls = {read=FControls};
	__property TCT_WebPublishItems* WebPublishItems = {read=FWebPublishItems};
	__property TCT_TableParts* TableParts = {read=FTableParts};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Macrosheet : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_SheetPr* FSheetPr;
	TCT_SheetDimension* FDimension;
	TCT_SheetViews* FSheetViews;
	TCT_SheetFormatPr* FSheetFormatPr;
	TCT_ColsXpgList* FColsXpgList;
	TCT_SheetData* FSheetData;
	TCT_SheetProtection* FSheetProtection;
	TCT_AutoFilter* FAutoFilter;
	TCT_SortState* FSortState;
	TCT_DataConsolidate* FDataConsolidate;
	TCT_CustomSheetViews* FCustomSheetViews;
	TCT_PhoneticPr* FPhoneticPr;
	TCT_ConditionalFormattingXpgList* FConditionalFormattingXpgList;
	TCT_PrintOptions* FPrintOptions;
	TCT_PageMargins* FPageMargins;
	TCT_PageSetup* FPageSetup;
	TCT_HeaderFooter* FHeaderFooter;
	TCT_PageBreak* FRowBreaks;
	TCT_PageBreak* FColBreaks;
	TCT_CustomProperties* FCustomProperties;
	TCT_Drawing* FDrawing;
	TCT_LegacyDrawing* FLegacyDrawing;
	TCT_LegacyDrawing* FLegacyDrawingHF;
	TCT_SheetBackgroundPicture* FPicture;
	TCT_OleObjects* FOleObjects;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	
public:
	__fastcall TCT_Macrosheet(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Macrosheet();
	void __fastcall Clear();
	__property TCT_SheetPr* SheetPr = {read=FSheetPr};
	__property TCT_SheetDimension* Dimension = {read=FDimension};
	__property TCT_SheetViews* SheetViews = {read=FSheetViews};
	__property TCT_SheetFormatPr* SheetFormatPr = {read=FSheetFormatPr};
	__property TCT_ColsXpgList* ColsXpgList = {read=FColsXpgList};
	__property TCT_SheetData* SheetData = {read=FSheetData};
	__property TCT_SheetProtection* SheetProtection = {read=FSheetProtection};
	__property TCT_AutoFilter* AutoFilter = {read=FAutoFilter};
	__property TCT_SortState* SortState = {read=FSortState};
	__property TCT_DataConsolidate* DataConsolidate = {read=FDataConsolidate};
	__property TCT_CustomSheetViews* CustomSheetViews = {read=FCustomSheetViews};
	__property TCT_PhoneticPr* PhoneticPr = {read=FPhoneticPr};
	__property TCT_ConditionalFormattingXpgList* ConditionalFormattingXpgList = {read=FConditionalFormattingXpgList};
	__property TCT_PrintOptions* PrintOptions = {read=FPrintOptions};
	__property TCT_PageMargins* PageMargins = {read=FPageMargins};
	__property TCT_PageSetup* PageSetup = {read=FPageSetup};
	__property TCT_HeaderFooter* HeaderFooter = {read=FHeaderFooter};
	__property TCT_PageBreak* RowBreaks = {read=FRowBreaks};
	__property TCT_PageBreak* ColBreaks = {read=FColBreaks};
	__property TCT_CustomProperties* CustomProperties = {read=FCustomProperties};
	__property TCT_Drawing* Drawing = {read=FDrawing};
	__property TCT_LegacyDrawing* LegacyDrawing = {read=FLegacyDrawing};
	__property TCT_LegacyDrawing* LegacyDrawingHF = {read=FLegacyDrawingHF};
	__property TCT_SheetBackgroundPicture* Picture = {read=FPicture};
	__property TCT_OleObjects* OleObjects = {read=FOleObjects};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TableStyleInfo : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	bool FShowFirstColumn;
	bool FShowLastColumn;
	bool FShowRowStripes;
	bool FShowColumnStripes;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_TableStyleInfo(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TableStyleInfo();
	void __fastcall Clear();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property bool ShowFirstColumn = {read=FShowFirstColumn, write=FShowFirstColumn, nodefault};
	__property bool ShowLastColumn = {read=FShowLastColumn, write=FShowLastColumn, nodefault};
	__property bool ShowRowStripes = {read=FShowRowStripes, write=FShowRowStripes, nodefault};
	__property bool ShowColumnStripes = {read=FShowColumnStripes, write=FShowColumnStripes, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_XmlColumnPr : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FMapId;
	System::UnicodeString FXpath;
	bool FDenormalized;
	TST_XmlDataType FXmlDataType;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_XmlColumnPr(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_XmlColumnPr();
	void __fastcall Clear();
	__property int MapId = {read=FMapId, write=FMapId, nodefault};
	__property System::UnicodeString Xpath = {read=FXpath, write=FXpath};
	__property bool Denormalized = {read=FDenormalized, write=FDenormalized, nodefault};
	__property TST_XmlDataType XmlDataType = {read=FXmlDataType, write=FXmlDataType, nodefault};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TableFormula : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FArray;
	System::UnicodeString FContent;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_TableFormula(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TableFormula();
	void __fastcall Clear();
	__property bool Array_ = {read=FArray, write=FArray, nodefault};
	__property System::UnicodeString Content = {read=FContent, write=FContent};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TableColumn : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FId;
	System::UnicodeString FUniqueName;
	System::UnicodeString FName;
	TST_TotalsRowFunction FTotalsRowFunction;
	System::UnicodeString FTotalsRowLabel;
	int FQueryTableFieldId;
	System::UnicodeString FHeaderRowDxfId;
	System::UnicodeString FDataDxfId;
	System::UnicodeString FTotalsRowDxfId;
	System::UnicodeString FHeaderRowCellStyle;
	System::UnicodeString FDataCellStyle;
	System::UnicodeString FTotalsRowCellStyle;
	TCT_TableFormula* FCalculatedColumnFormula;
	TCT_TableFormula* FTotalsRowFormula;
	TCT_XmlColumnPr* FXmlColumnPr;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_TableColumn(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TableColumn();
	void __fastcall Clear();
	__property int Id = {read=FId, write=FId, nodefault};
	__property System::UnicodeString UniqueName = {read=FUniqueName, write=FUniqueName};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property TST_TotalsRowFunction TotalsRowFunction = {read=FTotalsRowFunction, write=FTotalsRowFunction, nodefault};
	__property System::UnicodeString TotalsRowLabel = {read=FTotalsRowLabel, write=FTotalsRowLabel};
	__property int QueryTableFieldId = {read=FQueryTableFieldId, write=FQueryTableFieldId, nodefault};
	__property System::UnicodeString HeaderRowDxfId = {read=FHeaderRowDxfId, write=FHeaderRowDxfId};
	__property System::UnicodeString DataDxfId = {read=FDataDxfId, write=FDataDxfId};
	__property System::UnicodeString TotalsRowDxfId = {read=FTotalsRowDxfId, write=FTotalsRowDxfId};
	__property System::UnicodeString HeaderRowCellStyle = {read=FHeaderRowCellStyle, write=FHeaderRowCellStyle};
	__property System::UnicodeString DataCellStyle = {read=FDataCellStyle, write=FDataCellStyle};
	__property System::UnicodeString TotalsRowCellStyle = {read=FTotalsRowCellStyle, write=FTotalsRowCellStyle};
	__property TCT_TableFormula* CalculatedColumnFormula = {read=FCalculatedColumnFormula};
	__property TCT_TableFormula* TotalsRowFormula = {read=FTotalsRowFormula};
	__property TCT_XmlColumnPr* XmlColumnPr = {read=FXmlColumnPr};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TableColumnXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_TableColumn* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_TableColumn* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_TableColumn* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_TableColumn* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_TableColumnXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_TableColumnXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TableColumns : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCount;
	TCT_TableColumnXpgList* FTableColumnXpgList;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_TableColumns(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TableColumns();
	void __fastcall Clear();
	__property int Count = {read=FCount, write=FCount, nodefault};
	__property TCT_TableColumnXpgList* TableColumnXpgList = {read=FTableColumnXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Table : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FId;
	System::UnicodeString FName;
	System::UnicodeString FDisplayName;
	System::UnicodeString FComment;
	System::UnicodeString FRef;
	TST_TableType FTableType;
	int FHeaderRowCount;
	bool FInsertRow;
	bool FInsertRowShift;
	int FTotalsRowCount;
	bool FTotalsRowShown;
	bool FPublished;
	System::UnicodeString FHeaderRowDxfId;
	System::UnicodeString FDataDxfId;
	System::UnicodeString FTotalsRowDxfId;
	System::UnicodeString FHeaderRowBorderDxfId;
	System::UnicodeString FTableBorderDxfId;
	System::UnicodeString FTotalsRowBorderDxfId;
	System::UnicodeString FHeaderRowCellStyle;
	System::UnicodeString FDataCellStyle;
	System::UnicodeString FTotalsRowCellStyle;
	int FConnectionId;
	TCT_AutoFilter* FAutoFilter;
	TCT_SortState* FSortState;
	TCT_TableColumns* FTableColumns;
	TCT_TableStyleInfo* FTableStyleInfo;
	TCT_ExtensionList* FExtLst;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_Table(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Table();
	void __fastcall Clear();
	__property int Id = {read=FId, write=FId, nodefault};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString DisplayName = {read=FDisplayName, write=FDisplayName};
	__property System::UnicodeString Comment = {read=FComment, write=FComment};
	__property System::UnicodeString Ref = {read=FRef, write=FRef};
	__property TST_TableType TableType = {read=FTableType, write=FTableType, nodefault};
	__property int HeaderRowCount = {read=FHeaderRowCount, write=FHeaderRowCount, nodefault};
	__property bool InsertRow = {read=FInsertRow, write=FInsertRow, nodefault};
	__property bool InsertRowShift = {read=FInsertRowShift, write=FInsertRowShift, nodefault};
	__property int TotalsRowCount = {read=FTotalsRowCount, write=FTotalsRowCount, nodefault};
	__property bool TotalsRowShown = {read=FTotalsRowShown, write=FTotalsRowShown, nodefault};
	__property bool Published_ = {read=FPublished, write=FPublished, nodefault};
	__property System::UnicodeString HeaderRowDxfId = {read=FHeaderRowDxfId, write=FHeaderRowDxfId};
	__property System::UnicodeString DataDxfId = {read=FDataDxfId, write=FDataDxfId};
	__property System::UnicodeString TotalsRowDxfId = {read=FTotalsRowDxfId, write=FTotalsRowDxfId};
	__property System::UnicodeString HeaderRowBorderDxfId = {read=FHeaderRowBorderDxfId, write=FHeaderRowBorderDxfId};
	__property System::UnicodeString TableBorderDxfId = {read=FTableBorderDxfId, write=FTableBorderDxfId};
	__property System::UnicodeString TotalsRowBorderDxfId = {read=FTotalsRowBorderDxfId, write=FTotalsRowBorderDxfId};
	__property System::UnicodeString HeaderRowCellStyle = {read=FHeaderRowCellStyle, write=FHeaderRowCellStyle};
	__property System::UnicodeString DataCellStyle = {read=FDataCellStyle, write=FDataCellStyle};
	__property System::UnicodeString TotalsRowCellStyle = {read=FTotalsRowCellStyle, write=FTotalsRowCellStyle};
	__property int ConnectionId = {read=FConnectionId, write=FConnectionId, nodefault};
	__property TCT_AutoFilter* AutoFilter = {read=FAutoFilter};
	__property TCT_SortState* SortState = {read=FSortState};
	__property TCT_TableColumns* TableColumns = {read=FTableColumns};
	__property TCT_TableStyleInfo* TableStyleInfo = {read=FTableStyleInfo};
	__property TCT_ExtensionList* ExtLst = {read=FExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION T__ROOT__ : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	Xpgplists::TStringXpgList* FRootAttributes;
	TCT_Stylesheet* FStyleSheet;
	TCT_Sst* FSst;
	TCT_Workbook* FWorkbook;
	TCT_Comments* FComments;
	TCT_Table* FTable;
	TCT_Chartsheet* FChartsheet;
	TCT_Dialogsheet* FDialogsheet;
	TCT_Worksheet* FWorksheet;
	System::TClass FCurrWriteClass;
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::TClass AClassToWrite);
	
public:
	__fastcall T__ROOT__(TXPGDocBase* AOwner);
	__fastcall virtual ~T__ROOT__();
	void __fastcall Clear();
	__property Xpgplists::TStringXpgList* RootAttributes = {read=FRootAttributes};
	__property TCT_Stylesheet* StyleSheet = {read=FStyleSheet};
	__property TCT_Sst* Sst = {read=FSst};
	__property TCT_Workbook* Workbook = {read=FWorkbook};
	__property TCT_Comments* Comments = {read=FComments};
	__property TCT_Table* Table = {read=FTable};
	__property TCT_Chartsheet* Chartsheet = {read=FChartsheet};
	__property TCT_Dialogsheet* Dialogsheet = {read=FDialogsheet};
	__property TCT_Worksheet* Worksheet = {read=FWorksheet};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_XStringElement : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FV;
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TCT_XStringElement(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_XStringElement();
	void __fastcall Clear();
	__property System::UnicodeString V = {read=FV, write=FV};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXPGDocXLSX : public TXPGDocBase
{
	typedef TXPGDocBase inherited;
	
protected:
	T__ROOT__* FRoot;
	TXPGReader* FReader;
	Xpgpxml::TXpgWriteXML* FWriter;
	TCT_Stylesheet* __fastcall GetStyleSheet();
	TCT_Sst* __fastcall GetSst();
	TCT_Workbook* __fastcall GetWorkbook();
	TCT_Comments* __fastcall GetComments();
	TCT_Table* __fastcall GetTable();
	TCT_Chartsheet* __fastcall GetChartsheet();
	TCT_Dialogsheet* __fastcall GetDialogsheet();
	TCT_Worksheet* __fastcall GetWorksheet();
	
public:
	__fastcall TXPGDocXLSX();
	__fastcall virtual ~TXPGDocXLSX();
	void __fastcall LoadFromFile(const System::UnicodeString AFilename);
	void __fastcall LoadFromStream(System::Classes::TStream* AStream, bool ARestore = false);
	void __fastcall SaveToFile(const System::UnicodeString AFilename);
	void __fastcall SaveToStream(System::Classes::TStream* AStream, System::TClass AClassToWrite);
	__property TXPGReader* Reader = {read=FReader};
	__property T__ROOT__* Root = {read=FRoot};
	__property TCT_Stylesheet* StyleSheet = {read=GetStyleSheet};
	__property TCT_Sst* Sst = {read=GetSst};
	__property TCT_Workbook* Workbook = {read=GetWorkbook};
	__property TCT_Comments* Comments = {read=GetComments};
	__property TCT_Table* Table = {read=GetTable};
	__property TCT_Chartsheet* Chartsheet = {read=GetChartsheet};
	__property TCT_Dialogsheet* Dialogsheet = {read=GetDialogsheet};
	__property TCT_Worksheet* Worksheet = {read=GetWorksheet};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Xpgparserxlsx__1 StrTST_UnderlineValues;
extern DELPHI_PACKAGE Xpgparserxlsx__2 StrTST_VerticalAlignRun;
extern DELPHI_PACKAGE Xpgparserxlsx__3 StrTST_VerticalAlignment;
extern DELPHI_PACKAGE Xpgparserxlsx__4 StrTST_BorderStyle;
extern DELPHI_PACKAGE Xpgparserxlsx__5 StrTST_PatternType;
extern DELPHI_PACKAGE Xpgparserxlsx__6 StrTST_FontScheme;
extern DELPHI_PACKAGE Xpgparserxlsx__7 StrTST_GradientType;
extern DELPHI_PACKAGE Xpgparserxlsx__8 StrTST_TableStyleType;
extern DELPHI_PACKAGE Xpgparserxlsx__9 StrTST_HorizontalAlignment;
extern DELPHI_PACKAGE Xpgparserxlsx__01 StrTST_PhoneticAlignment;
extern DELPHI_PACKAGE Xpgparserxlsx__11 StrTST_PhoneticType;
extern DELPHI_PACKAGE Xpgparserxlsx__21 StrTST_DateTimeGrouping;
extern DELPHI_PACKAGE Xpgparserxlsx__31 StrTST_SortMethod;
extern DELPHI_PACKAGE Xpgparserxlsx__41 StrTST_CalendarType;
extern DELPHI_PACKAGE Xpgparserxlsx__51 StrTST_SortBy;
extern DELPHI_PACKAGE Xpgparserxlsx__61 StrTST_IconSetType;
extern DELPHI_PACKAGE Xpgparserxlsx__71 StrTST_DynamicFilterType;
extern DELPHI_PACKAGE Xpgparserxlsx__81 StrTST_FilterOperator;
extern DELPHI_PACKAGE Xpgparserxlsx__91 StrTST_Axis;
extern DELPHI_PACKAGE Xpgparserxlsx__02 StrTST_PivotAreaType;
extern DELPHI_PACKAGE Xpgparserxlsx__12 StrTST_Visibility;
extern DELPHI_PACKAGE Xpgparserxlsx__22 StrTST_CalcMode;
extern DELPHI_PACKAGE Xpgparserxlsx__32 StrTST_UpdateLinks;
extern DELPHI_PACKAGE Xpgparserxlsx__42 StrTST_TargetScreenSize;
extern DELPHI_PACKAGE Xpgparserxlsx__52 StrTST_Comments;
extern DELPHI_PACKAGE Xpgparserxlsx__62 StrTST_Objects;
extern DELPHI_PACKAGE Xpgparserxlsx__72 StrTST_SmartTagShow;
extern DELPHI_PACKAGE Xpgparserxlsx__82 StrTST_RefMode;
extern DELPHI_PACKAGE Xpgparserxlsx__92 StrTST_SheetState;
extern DELPHI_PACKAGE Xpgparserxlsx__03 StrTST_DvAspect;
extern DELPHI_PACKAGE Xpgparserxlsx__13 StrTST_CfvoType;
extern DELPHI_PACKAGE Xpgparserxlsx__23 StrTST_PageOrder;
extern DELPHI_PACKAGE Xpgparserxlsx__33 StrTST_CellType;
extern DELPHI_PACKAGE Xpgparserxlsx__43 StrTST_PaneState;
extern DELPHI_PACKAGE Xpgparserxlsx__53 StrTST_CellFormulaType;
extern DELPHI_PACKAGE Xpgparserxlsx__63 StrTST_CellComments;
extern DELPHI_PACKAGE Xpgparserxlsx__73 StrTST_DataValidationOperator;
extern DELPHI_PACKAGE Xpgparserxlsx__83 StrTST_CfType;
extern DELPHI_PACKAGE Xpgparserxlsx__93 StrTST_PrintError;
extern DELPHI_PACKAGE Xpgparserxlsx__04 StrTST_OleUpdate;
extern DELPHI_PACKAGE Xpgparserxlsx__14 StrTST_WebSourceType;
extern DELPHI_PACKAGE Xpgparserxlsx__24 StrTST_DataValidationErrorStyle;
extern DELPHI_PACKAGE Xpgparserxlsx__34 StrTST_TimePeriod;
extern DELPHI_PACKAGE Xpgparserxlsx__44 StrTST_Pane;
extern DELPHI_PACKAGE Xpgparserxlsx__54 StrTST_ConditionalFormattingOperator;
extern DELPHI_PACKAGE Xpgparserxlsx__64 StrTST_DataValidationImeMode;
extern DELPHI_PACKAGE Xpgparserxlsx__74 StrTST_SheetViewType;
extern DELPHI_PACKAGE Xpgparserxlsx__84 StrTST_DataConsolidateFunction;
extern DELPHI_PACKAGE Xpgparserxlsx__94 StrTST_DataValidationType;
extern DELPHI_PACKAGE Xpgparserxlsx__05 StrTST_Orientation;
extern DELPHI_PACKAGE Xpgparserxlsx__15 StrTST_TableType;
extern DELPHI_PACKAGE Xpgparserxlsx__25 StrTST_TotalsRowFunction;
extern DELPHI_PACKAGE Xpgparserxlsx__35 StrTST_XmlDataType;
}	/* namespace Xpgparserxlsx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XPGPARSERXLSX)
using namespace Xpgparserxlsx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XpgparserxlsxHPP
