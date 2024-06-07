// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSEvaluateFmla5.pas' rev: 35.00 (Windows)

#ifndef Xlsevaluatefmla5HPP
#define Xlsevaluatefmla5HPP

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
#include <System.Masks.hpp>
#include <System.DateUtils.hpp>
#include <System.StrUtils.hpp>
#include <BIFF_Utils5.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Manager5.hpp>
#include <Xc12DataXLinks5.hpp>
#include <Xc12DataWorkbook5.hpp>
#include <Xc12DataWorksheet5.hpp>
#include <XLSUtils5.hpp>
#include <XLSFormulaTypes5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSCellAreas5.hpp>
#include <XLSMask5.hpp>
#include <XLSEvaluate5.hpp>
#include <XLSMatrix5.hpp>
#include <XLSMath5.hpp>
#include <XLSMathData5.hpp>
#include <XLSFmlaDebugData5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsevaluatefmla5
{
//-- forward type declarations -----------------------------------------------
struct TLinEstData;
struct TCriteriaData;
struct TFVIterateData;
class DELPHICLASS TXLSUserFuncData;
class DELPHICLASS TValStackIterator;
class DELPHICLASS TValueStack;
class DELPHICLASS TXLSFormulaEvaluator;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TAxGDIFormulaValueEvent)(System::TObject* AValue, /* out */ double &AResult);

enum DECLSPEC_DENUM TXLSDateDiffMethod : unsigned char { xddmUS30_360, xddmActaul, xddm360, xddm365, xddmEU30_360 };

struct DECLSPEC_DRECORD TLinEstData
{
public:
	double B0;
	double B1;
	double seB0;
	double seB1;
	double R2;
	double sigma;
	double SSr;
	double SSe;
	double F0;
	int df;
};


struct DECLSPEC_DRECORD TCriteriaData
{
public:
	Xlsevaluate5::TXLSVarValue CritVal;
	Xlsevaluate5::TXLSDbCondOperator Op;
};


typedef System::DynamicArray<TCriteriaData> TDynCriteriaDataArray;

struct DECLSPEC_DRECORD TFVIterateData
{
public:
	System::TObject* Source;
	Xlsevaluate5::TXLSFormulaValue FV;
	int Col;
	int Row;
	int Index;
	Xlsevaluate5::TXLSFormulaValue Result;
	bool Done;
};


class PASCALIMPLEMENTATION TXLSUserFuncData : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<Xlsevaluate5::TXLSFormulaValue> _TXLSUserFuncData__1;
	
	
private:
	double __fastcall GetAsFloat(int Index);
	int __fastcall GetCols(int Index);
	Xlsevaluate5::TXLSFormulaRefType __fastcall GetRefType(int Index);
	int __fastcall GetRows(int Index);
	double __fastcall GetAreaAsFloat(int Index, int ACol, int ARow);
	void __fastcall SetResultAsFloat(const double Value);
	bool __fastcall GetAreaAsBoolean(int Index, int ACol, int ARow);
	Xc12utils5::TXc12CellError __fastcall GetAreaAsError(int Index, int ACol, int ARow);
	System::UnicodeString __fastcall GetAreaAsString(int Index, int ACol, int ARow);
	bool __fastcall GetAsBoolean(int Index);
	Xc12utils5::TXc12CellError __fastcall GetAsError(int Index);
	System::UnicodeString __fastcall GetAsString(int Index);
	void __fastcall SetResultAsBoolean(const bool Value);
	void __fastcall SetResultAsError(const Xc12utils5::TXc12CellError Value);
	void __fastcall SetResultAsString(const System::UnicodeString Value);
	Xlsevaluate5::TXLSFormulaValueType __fastcall GetArgType(int Index);
	
protected:
	_TXLSUserFuncData__1 FArgs;
	Xlsevaluate5::TXLSFormulaValue FResult;
	
public:
	int __fastcall ArgCount();
	void __fastcall Dimensions(const int AIndex, /* out */ int &ACol1, /* out */ int &ARow1, /* out */ int &ACol2, /* out */ int &ARow2);
	__property Xlsevaluate5::TXLSFormulaRefType RefType[int Index] = {read=GetRefType};
	__property Xlsevaluate5::TXLSFormulaValueType ArgType[int Index] = {read=GetArgType};
	__property int Cols[int Index] = {read=GetCols};
	__property int Rows[int Index] = {read=GetRows};
	__property bool AsBoolean[int Index] = {read=GetAsBoolean};
	__property double AsFloat[int Index] = {read=GetAsFloat};
	__property System::UnicodeString AsString[int Index] = {read=GetAsString};
	__property Xc12utils5::TXc12CellError AsError[int Index] = {read=GetAsError};
	__property bool AreaAsBoolean[int Index][int ACol][int ARow] = {read=GetAreaAsBoolean};
	__property double AreaAsFloat[int Index][int ACol][int ARow] = {read=GetAreaAsFloat};
	__property System::UnicodeString AreaAsString[int Index][int ACol][int ARow] = {read=GetAreaAsString};
	__property Xc12utils5::TXc12CellError AreaAsError[int Index][int ACol][int ARow] = {read=GetAreaAsError};
	__property bool ResultAsBoolean = {write=SetResultAsBoolean, nodefault};
	__property double ResultAsFloat = {write=SetResultAsFloat};
	__property System::UnicodeString ResultAsString = {write=SetResultAsString};
	__property Xc12utils5::TXc12CellError ResultAsError = {write=SetResultAsError, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXLSUserFuncData() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSUserFuncData() { }
	
};


typedef void __fastcall (__closure *TUserFunctionEvent)(const System::UnicodeString AName, TXLSUserFuncData* AData);

class PASCALIMPLEMENTATION TValStackIterator : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TValueStack* FOwner;
	Xc12utils5::TXLSCellArea *FDimension;
	bool FIgnoreHidden;
	bool FIgnoreError;
	System::TObject* FSource;
	Xlsevaluate5::TXLSFormulaValue FFV;
	int FCol;
	int FRow;
	int FIndex;
	bool FDone;
	bool FHaltOnError;
	TValStackIterator* FLinked;
	bool __fastcall DoNext();
	bool __fastcall ResIsFloat();
	bool __fastcall ResIsFloatA();
	bool __fastcall ResIsError(/* out */ Xc12utils5::TXc12CellError &AError);
	bool __fastcall ResIsNotEmpty();
	
public:
	Xlsevaluate5::TXLSFormulaValue _Result;
	__fastcall TValStackIterator(TValueStack* AOwner);
	__fastcall virtual ~TValStackIterator();
	void __fastcall BeginIterate(const Xlsevaluate5::TXLSFormulaValue &AValue, bool AHaltOnError)/* overload */;
	void __fastcall BeginIterate(const Xlsevaluate5::TXLSFormulaValue &AValue1, const Xlsevaluate5::TXLSFormulaValue &AValue2, bool AHaltOnError)/* overload */;
	bool __fastcall Next();
	bool __fastcall NextNotEmpty();
	bool __fastcall NextFloat();
	bool __fastcall NextFloatA();
	double __fastcall AsFloatA();
	void __fastcall AddLinked();
	void __fastcall Clear();
	__property TValStackIterator* Linked = {read=FLinked};
	__property bool IgnoreHidden = {read=FIgnoreHidden, write=FIgnoreHidden, nodefault};
	__property bool IgnoreError = {read=FIgnoreError, write=FIgnoreError, nodefault};
	__property int Col = {read=FCol, nodefault};
	__property int Row = {read=FRow, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TValueStack : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<Xlsevaluate5::TXLSFormulaValue> _TValueStack__1;
	
	
private:
	int FStackPtr;
	int FResultPtr;
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	bool FIsArrayRes;
	int FCol;
	int FRow;
	Xlscellmmu5::TXLSCellMMU* FCells;
	int FSheetIndex;
	System::Contnrs::TObjectList* FGarbage;
	_TValueStack__1 FStack;
	TValStackIterator* FIterator;
	void __fastcall IncStackPtr();
	void __fastcall DecStackPtr();
	bool __fastcall HandleError(Xc12utils5::TXc12CellError AError);
	int __fastcall AreaCellCount(Xlsevaluate5::PXLSFormulaValue FV);
	bool __fastcall AreasEqualSize(Xlsevaluate5::PXLSFormulaValue FV1, Xlsevaluate5::PXLSFormulaValue FV2);
	bool __fastcall IsVector(Xlsevaluate5::PXLSFormulaValue AFormulaVal);
	void __fastcall MakeVector(Xlsevaluate5::PXLSFormulaValue AFormulaVal, bool ALeftTop);
	void __fastcall GetCellValue(Xlscellmmu5::TXLSCellMMU* Cells, int ACol, int ARow, Xlsevaluate5::PXLSFormulaValue AFormulaVal);
	bool __fastcall GetCellBlank(Xlscellmmu5::TXLSCellMMU* Cells, int ACol, int ARow);
	Xlsevaluate5::TXLSFormulaValueType __fastcall GetCellType(Xlscellmmu5::TXLSCellMMU* Cells, int ACol, int ARow);
	Xc12utils5::TXc12CellError __fastcall GetCellValueFloat(Xlscellmmu5::TXLSCellMMU* Cells, int ACol, int ARow, double &AResult, /* out */ bool &AEmptyCell)/* overload */;
	Xc12utils5::TXc12CellError __fastcall GetCellValueFloat(Xlscellmmu5::TXLSCellMMU* Cells, int ACol, int ARow, bool AAcceptText, double &Aresult, /* out */ bool &AEmptyCell)/* overload */;
	Xc12utils5::TXc12CellError __fastcall GetAsString(const Xlsevaluate5::TXLSFormulaValue &AValue, /* out */ System::UnicodeString &AResult);
	bool __fastcall GetAsString2(const Xlsevaluate5::TXLSFormulaValue &AValue, /* out */ System::UnicodeString &AResult);
	bool __fastcall GetAsFloat(const Xlsevaluate5::TXLSFormulaValue &AValue, /* out */ double &AResult, /* out */ Xc12utils5::TXc12CellError &AError);
	bool __fastcall GetAsFloatNum(const Xlsevaluate5::TXLSFormulaValue &AValue, /* out */ double &AResult, /* out */ Xc12utils5::TXc12CellError &AError);
	bool __fastcall GetAsFloatNumOnly(const Xlsevaluate5::TXLSFormulaValue &AValue, /* out */ double &AResult, /* out */ Xc12utils5::TXc12CellError &AError);
	Xc12utils5::TXc12CellError __fastcall GetAsBoolean(const Xlsevaluate5::TXLSFormulaValue &AValue, /* out */ bool &AResult);
	Xc12utils5::TXc12CellError __fastcall GetAsError(const Xlsevaluate5::TXLSFormulaValue &AValue);
	Xc12utils5::TXc12CellError __fastcall GetAsValueType(const Xlsevaluate5::TXLSFormulaValue &AValue, /* out */ Xlsevaluate5::TXLSFormulaValueType &AResult);
	void __fastcall FillArrayItem(Xlsevaluate5::TXLSArrayItem* AItem, const Xlsevaluate5::TXLSFormulaValue &AValue);
	void __fastcall FillArrayItemFloat(Xlsevaluate5::TXLSArrayItem* AItem, const Xlsevaluate5::TXLSFormulaValue &AValue);
	void __fastcall SetError(Xc12utils5::TXc12CellError AError);
	bool __fastcall Intersect(Xlsevaluate5::PXLSFormulaValue AValue, int &ACol, int &ARow);
	bool __fastcall MakeIntersect(Xlsevaluate5::PXLSFormulaValue AValue);
	int __fastcall CoupDaysYear(System::TDateTime ADate, TXLSDateDiffMethod ADateMethod);
	int __fastcall CoupDaysBetween(System::TDateTime ADateFrom, System::TDateTime ADateTo, TXLSDateDiffMethod ADateMethod);
	
public:
	__fastcall TValueStack(Xc12manager5::TXc12Manager* AManager);
	__fastcall virtual ~TValueStack();
	void __fastcall Clear(bool AIsArrayRes, int ASheetIndex, int ACol, int ARow);
	void __fastcall Push()/* overload */;
	void __fastcall Push(const Xlsevaluate5::TXLSFormulaValue &AValue)/* overload */;
	void __fastcall Push(const int AValue)/* overload */;
	void __fastcall Push(const double AValue)/* overload */;
	void __fastcall Push(const bool AValue)/* overload */;
	void __fastcall Push(const Xc12utils5::TXc12CellError AValue)/* overload */;
	void __fastcall Push(const Xc12utils5::TXc12CellError AValue, const Xlsevaluate5::TXLSFormulaValue &AFVValue)/* overload */;
	void __fastcall Push(const System::UnicodeString AValue)/* overload */;
	void __fastcall Push(const int ACol, const int ARow)/* overload */;
	void __fastcall Push(const int ACol1, const int ARow1, const int ACol2, const int ARow2)/* overload */;
	void __fastcall Push(const int ASheetIndex, const int ACol, const int ARow)/* overload */;
	void __fastcall Push(const int ASheetIndex, const int ACol1, const int ARow1, const int ACol2, const int ARow2)/* overload */;
	void __fastcall Push(const int ASheetIndex1, const int ASheetIndex2, const int ACol1, const int ARow1, const int ACol2, const int ARow2)/* overload */;
	void __fastcall Push(const int ASheetIndex, const Xc12utils5::TXc12CellError AError)/* overload */;
	void __fastcall Push(Xlscellmmu5::TXLSCellMMU* const ACells, const int ACol, const int ARow)/* overload */;
	void __fastcall Push(Xlscellmmu5::TXLSCellMMU* const ACells, const int ACol1, const int ARow1, const int ACol2, const int ARow2)/* overload */;
	void __fastcall Push(Xlsevaluate5::TXLSArrayItem* const AArray)/* overload */;
	void __fastcall Push(Xlsmatrix5::TXLSMatrix* const AMatrix)/* overload */;
	void __fastcall Push(const Xlsformulatypes5::TXLSTableSpecialSpecifier ATableSpecial, const int ACol1, const int ARow1, const int ACol2, const int ARow2)/* overload */;
	Xlsevaluate5::TXLSFormulaValue __fastcall Pop();
	bool __fastcall PopResult(/* out */ Xlsevaluate5::TXLSFormulaValue &AValue);
	void __fastcall PopArray(/* out */ Xlsevaluate5::TXLSArrayItem* &AArr, bool AFloat);
	void __fastcall PopArrays(/* out */ Xlsevaluate5::TXLSArrayItem* &AArr1, /* out */ Xlsevaluate5::TXLSArrayItem* &AArr2, bool AFloat);
	Xlsevaluate5::TXLSFormulaValue __fastcall Peek(int ALevel);
	bool __fastcall PeekFloat(int ALevel, /* out */ double &AValue);
	void __fastcall SetResult(const int ACount);
	Xlsevaluate5::TXLSFormulaValue __fastcall PopRes();
	bool __fastcall PopResFloat(/* out */ double &AValue);
	bool __fastcall PopResInt(/* out */ int &AValue);
	bool __fastcall PopResPosInt(/* out */ int &AValue, int AOkNum = 0x0);
	bool __fastcall PopResBoolean(/* out */ bool &AValue);
	bool __fastcall PopResStr(/* out */ System::UnicodeString &AValue, bool AEmptyOk = true);
	bool __fastcall PopResDateTime(/* out */ double &AValue);
	bool __fastcall PopResCellsSource(/* out */ Xlsevaluate5::TXLSCellsSource* &AValue);
	void __fastcall PopResArray(/* out */ Xlsevaluate5::TXLSArrayItem* &AArr, bool AFloat);
	void __fastcall PopResArrays(/* out */ Xlsevaluate5::TXLSArrayItem* &AArr1, /* out */ Xlsevaluate5::TXLSArrayItem* &AArr2, bool AFloat);
	Xlsevaluate5::TXLSFormulaValue __fastcall PeekRes(int ALevel);
	void __fastcall ClearStack();
	int __fastcall StackSize();
	void __fastcall OpFloat(int AOperator);
	void __fastcall OpBoolean(int AOperator);
	void __fastcall OpConcat();
	void __fastcall OpArea(int AOperator);
	void __fastcall OpUnary(int AOperator);
	void __fastcall OpArrayFloat(int AOperator);
	void __fastcall OpArrayBoolean(int AOperator);
	void __fastcall OpArrayConcat();
	void __fastcall OpArrayUnary(int AOperator);
	double __fastcall NPV(double ARate, Xlsutils5::TDynDoubleArray AValues);
	double __fastcall DDB(const double Cost, const double Salvage, const double Life, const double Period, const double Factor);
	double __fastcall VDB(const double Cost, const double Salvage, const double Life, const double StartPeriod, const double EndPeriod, const double Factor, bool NoSwitch);
	double __fastcall DB(double Cost, double Salvage, int Life, int Period, int Month);
	bool __fastcall PopulateMatrix(Xlsmatrix5::TXLSMatrix* AMatrix, Xlsevaluate5::PXLSFormulaValue AValue);
	void __fastcall WriteMatrix(Xlsmatrix5::TXLSMatrix* AMatrix, int ACol, int ARow);
	void __fastcall SetupIfs(int AArgCount, TDynCriteriaDataArray &AData);
	bool __fastcall DoCollectValues(Xlsutils5::TDynDoubleArray &AResult);
	bool __fastcall DoCollectValuesA(Xlsutils5::TDynDoubleArray &AResult);
	bool __fastcall DoCollectAllValues(int AArgCount, Xlsutils5::TDynDoubleArray &AResult);
	bool __fastcall DoCollectAllValuesA(int AArgCount, Xlsutils5::TDynDoubleArray &AResult);
	int __fastcall Sum2Arrays(const Xlsevaluate5::TXLSFormulaValue &AFV1, const Xlsevaluate5::TXLSFormulaValue &AFV2, /* out */ double &ASum1, /* out */ double &ASum2);
	bool __fastcall Percentile(double APercent, /* out */ double &AResult);
	double __fastcall TDist(double X, int DegreesFreedom, bool TwoTails);
	double __fastcall FDist(double x, int df1, int df2);
	double __fastcall TTest(Xlsutils5::TDynDoubleArray Arr1, Xlsutils5::TDynDoubleArray Arr2, int Tails, int Type_);
	double __fastcall TTest2(Xlsutils5::TDynDoubleArray Arr1, Xlsutils5::TDynDoubleArray Arr2, int Tails, int Type_);
	double __fastcall ZTest(Xlsutils5::TDynDoubleArray Arr, double x, double sigma);
	bool __fastcall LinEst(const Xlsutils5::TDynDoubleArray KnownY, const Xlsutils5::TDynDoubleArray KnownX, TLinEstData &LF, bool ErrorStats);
	void __fastcall LogEst(const Xlsutils5::TDynDoubleArray KnownY, const Xlsutils5::TDynDoubleArray KnownX, TLinEstData &LF, bool ErrorStats);
	double __fastcall ForecastExponential(double X, const Xlsutils5::TDynDoubleArray KnownY, const Xlsutils5::TDynDoubleArray KnownX);
	double __fastcall SolveFInvEvent(Xlsutils5::PDoubleArray AData, double AValue);
	double __fastcall SolveChiInvEvent(Xlsutils5::PDoubleArray AData, double AValue);
	void __fastcall DoSum(int AArgCount);
	void __fastcall DoAverage(int AArgCount);
	int __fastcall DoCount(int AArgCount);
	void __fastcall DoMin(int AArgCount);
	void __fastcall DoMax(int AArgCount);
	bool __fastcall DoNPV(int AArgCount, /* out */ double &AResult);
	void __fastcall DoStDev(int AArgCount);
	void __fastcall DoLookup(int AArgCount);
	void __fastcall DoIndex(int AArgCount);
	void __fastcall DoValue();
	void __fastcall DoAND(int AArgCount);
	void __fastcall DoOR(int AArgCount);
	void __fastcall DoDatabase(int AFuncId);
	void __fastcall DoVar(int AArgCount);
	void __fastcall DoLinest(int AArgCount);
	void __fastcall DoTrend(int AArgCount);
	void __fastcall DoLogEst(int AArgCount);
	void __fastcall DoGrowth(int AArgCount);
	void __fastcall DoText();
	void __fastcall DoAnnuity(int AFuncId, int AArgCount);
	void __fastcall DoMIRR();
	void __fastcall DoIRR(int AArgCount);
	void __fastcall DoMatch(int AArgCount);
	void __fastcall DoDate();
	void __fastcall DoTime();
	void __fastcall DoExtractDateTime(int AFuncId, int AArgCount);
	void __fastcall DoAreas();
	void __fastcall DoRowsColumns(int AFuncId);
	void __fastcall DoOffset(int AArgCount);
	void __fastcall DoSearch(int AArgCount, bool ACaseSensitive);
	void __fastcall DoTranspose();
	void __fastcall DoType();
	void __fastcall DoChoose(int AArgCount);
	void __fastcall DoHLookup(int AArgCount);
	void __fastcall DoVLookup(int AArgCount);
	void __fastcall DoReplace();
	void __fastcall DoSubstitute(int AArgCount);
	void __fastcall DoCell(int AArgCount);
	void __fastcall DoSLN();
	void __fastcall DoSYD();
	void __fastcall DoDDB(int AArgCount);
	void __fastcall DoClean();
	void __fastcall DoMDeterm();
	void __fastcall DoMInverse();
	void __fastcall DoMMult();
	void __fastcall DoIPMT(int AArgCount);
	void __fastcall DoPPMT(int AArgCount);
	void __fastcall DoCounta(int AArgCount);
	void __fastcall DoProduct(int AArgCount);
	void __fastcall DoFact();
	void __fastcall DoStdevp(int AArgCount);
	void __fastcall DoVarp(int AArgCount);
	void __fastcall DoTrunc(int AArgCount);
	void __fastcall DoQuotient();
	void __fastcall DoRoundUp();
	void __fastcall DoRank(int AArgCount);
	void __fastcall DoAddress(int AArgCount);
	void __fastcall DoDays360(int AArgCount);
	void __fastcall DoVDB(int AArgCount);
	void __fastcall DoMedian(int AArgCount);
	void __fastcall DoSumProduct(int AArgCount);
	void __fastcall DoInfo();
	void __fastcall DoDB(int AArgCount);
	void __fastcall DoFrequency();
	void __fastcall DoError_Type();
	void __fastcall DoAveDev(int AArgCount);
	void __fastcall DoGammaLn();
	void __fastcall DoBetaDist(int AArgCount, bool AVer2010);
	void __fastcall DoBetaInv(int AArgCount);
	void __fastcall DoBinomdist();
	void __fastcall DoChiDist();
	void __fastcall DoChiInv();
	void __fastcall DoCombin();
	void __fastcall DoConfidence();
	void __fastcall DoCritbinom();
	void __fastcall DoBinom_Inv();
	void __fastcall DoExpondist();
	void __fastcall DoFDist();
	void __fastcall DoFInv();
	void __fastcall DoF_Inv();
	void __fastcall DoF_Inv_RT();
	void __fastcall DoFisher();
	void __fastcall DoFisherInv();
	void __fastcall DoFloor();
	void __fastcall DoGammadist();
	void __fastcall DoGammaInv();
	void __fastcall DoGamma_Inv();
	void __fastcall DoCeiling();
	void __fastcall DoLognormdist();
	void __fastcall DoLognorm_dist();
	void __fastcall DoLognorm_Inv();
	void __fastcall DoLoginv();
	void __fastcall DoNegbinomdist();
	void __fastcall DoNormdist();
	void __fastcall DoNormsdist();
	void __fastcall DoNormInv();
	void __fastcall DoNorm_Inv();
	void __fastcall DoNormsInv();
	void __fastcall DoNorm_S_Inv();
	void __fastcall DoStandardize();
	void __fastcall DoOdd();
	void __fastcall DoPermut();
	void __fastcall DoPoisson();
	void __fastcall DoTDist();
	void __fastcall DoWeibull();
	void __fastcall DoSumXmY2();
	void __fastcall DoSumX2mY2();
	void __fastcall DoSumX2pY2();
	void __fastcall DoChiTest();
	void __fastcall DoCorrel();
	void __fastcall DoCovar();
	void __fastcall DoForecast();
	void __fastcall DoFTest();
	void __fastcall DoF_Test();
	void __fastcall DoIntercept();
	void __fastcall DoRsq();
	void __fastcall DoSteyx();
	void __fastcall DoSlope();
	void __fastcall DoTTest();
	void __fastcall DoLarge();
	void __fastcall DoSmall();
	void __fastcall DoQuartile();
	void __fastcall DoPercentile();
	void __fastcall DoTrimMean();
	void __fastcall DoTInv();
	void __fastcall DoPower();
	void __fastcall DoRadians();
	void __fastcall DoDegrees();
	void __fastcall DoCountif();
	void __fastcall DoCountblank();
	void __fastcall DoISPMT();
	void __fastcall DoPhonetic();
	void __fastcall DoT_Dist_2T();
	void __fastcall DoT_Dist_RT();
	void __fastcall DoT_Dist();
	void __fastcall DoT_Inv();
	void __fastcall DoT_Inv_2T();
	void __fastcall DoChiSq_Inv();
	void __fastcall DoChi_Inv_RT();
	void __fastcall DoErfc();
	void __fastcall DoErfc_Precise();
	void __fastcall DoAggregate(int AArgCount);
	void __fastcall DoStdev_S(int AArgCount);
	void __fastcall DoStdev_P(int AArgCount);
	void __fastcall DoVar_S(int AArgCount);
	void __fastcall DoVar_P(int AArgCount);
	void __fastcall DoMode_Sngl(int AArgCount);
	void __fastcall DoPercentile_Inc();
	void __fastcall DoQuartile_Inc();
	void __fastcall DoPercentile_Exc();
	void __fastcall DoQuartile_Exc();
	void __fastcall DoRoman(int AArgCount);
	void __fastcall DoProb(int AArgCount);
	void __fastcall DoDevSq(int AArgCount);
	void __fastcall DoGeomean(int AArgCount);
	void __fastcall DoHarmean(int AArgCount);
	void __fastcall DoSumsq(int AArgCount);
	void __fastcall DoKurt(int AArgCount);
	void __fastcall DoSkew(int AArgCount);
	void __fastcall DoZtest(int AArgCount);
	void __fastcall DoPercentRank(int AArgCount);
	void __fastcall DoMode(int AArgCount);
	void __fastcall DoConcatenate(int AArgCount);
	void __fastcall DoSubtotal(int AArgCount);
	void __fastcall DoSumif(int AArgCount);
	void __fastcall DoAveragea(int AArgCount);
	void __fastcall DoMaxa(int AArgCount);
	void __fastcall DoMina(int AArgCount);
	void __fastcall DoStdevpa(int AArgCount);
	void __fastcall DoVarpa(int AArgCount);
	void __fastcall DoStdeva(int AArgCount);
	void __fastcall DoVara(int AArgCount);
	void __fastcall DoHyperlink(int AArgCount);
	void __fastcall DoChisq_Dist();
	void __fastcall DoConfidence_T();
	void __fastcall DoCovariance_S();
	void __fastcall DoErf_Precise();
	void __fastcall DoF_Dist();
	void __fastcall DoGammaln_Precise();
	void __fastcall DoIferror();
	void __fastcall DoAverageIf(int AArgCount);
	void __fastcall DoAverageIfs(int AArgCount);
	void __fastcall DoCeiling_Precise(int AArgCount);
	void __fastcall DoCountIfs(int AArgCount);
	void __fastcall DoFloor_Precise(int AArgCount);
	void __fastcall DoIso_Ceiling(int AArgCount);
	void __fastcall DoMode_Mult(int AArgCount);
	void __fastcall DoNetWorkdays(int AArgCount);
	void __fastcall DoNetWorkdays_Intl(int AArgCount);
	void __fastcall DoPercentrank_Exc(int AArgCount);
	void __fastcall DoSumifs(int AArgCount);
	void __fastcall DoWorkday(int AArgCount);
	void __fastcall DoWorkday_Int(int AArgCount);
	void __fastcall DoBeta_Inv(int AArgCount);
	void __fastcall DoZ_Test(int AArgCount);
	void __fastcall DoBinom_Dist();
	void __fastcall DoChisq_Dist_rt();
	void __fastcall DoChisq_Test();
	void __fastcall DoConfidence_Norm();
	void __fastcall DoCovariance_P();
	void __fastcall DoExpon_Dist();
	void __fastcall DoF_dist_RT();
	void __fastcall DoGamma_Dist();
	void __fastcall DoHypgeom_Dist();
	void __fastcall DoNegbinom_Dist();
	void __fastcall DoNorm_Dist();
	void __fastcall DoNorm_S_Dist();
	void __fastcall DoPercentrank_Inc(int AArgCount);
	void __fastcall DoPoisson_Dist();
	void __fastcall DoRank_Eq(int AArgCount);
	void __fastcall DoT_Test();
	void __fastcall DoWeibull_Dist();
	void __fastcall DoEDate();
	void __fastcall DoEOMonth();
	void __fastcall DoYearfrac(int AArgCount);
	void __fastcall DoXIRR(int AArgCount);
	void __fastcall DoXNVP();
	void __fastcall DoHypGeomDist();
	void __fastcall DoAccrInt(int AArgCount);
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSFormulaEvaluator : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	int FSheetIndex;
	int FCol;
	int FRow;
	Xlscellmmu5::TXLSFormulaArea *FTargetArea;
	TUserFunctionEvent FUserFuncEvent;
	Xlsfmladebugdata5::TFmlaDebugItems* FDebugData;
	int FDebugSteps;
	TValueStack* FStack;
	bool FVolatile;
	bool FIsExcel97;
	TAxGDIFormulaValueEvent FEvGDIValue;
	void __fastcall FillTargetArea(const Xlsevaluate5::TXLSFormulaValue &FV, bool AHasParentFormula);
	void __fastcall DoArray(Xlsformulatypes5::PXLSPtgs APtgs);
	void __fastcall DoArray97(Xlsformulatypes5::PXLSPtgs &APtgs);
	Xlsevaluate5::TXLSFormulaValue __fastcall DoDataTableFormula(Xlsformulatypes5::PXLSPtgs APtgs, int APtgsSz, Xlsformulatypes5::PXLSPtgsRef AIdRef1, Xlsformulatypes5::PXLSPtgsRef AIdRef2, Xlsformulatypes5::PXLSPtgsRef ASrcRef1, Xlsformulatypes5::PXLSPtgsRef ASrcRef2);
	void __fastcall DoDataTable(Xlsformulatypes5::PXLSPtgsDataTableFmla APtgs);
	void __fastcall DoIndirect(int AArgCount);
	void __fastcall DoName(const System::UnicodeString AName, const int ASheetIndex);
	void __fastcall DoFunction(int AId)/* overload */;
	void __fastcall DoFunction(int AId, int AArgCount)/* overload */;
	void __fastcall DoFunction(const System::UnicodeString AName, int AArgCount)/* overload */;
	void __fastcall DoArrayFunction(Xlsformulatypes5::PXLSPtgs APtgs, Xlscellmmu5::PXLSFormulaArea ATargetArea);
	void __fastcall DoTable(Xlsformulatypes5::PXLSPtgsTable ATable);
	Xlsevaluate5::TXLSFormulaValue __fastcall DoEvaluate(Xlsformulatypes5::PXLSPtgs APtgs, int APtgsSize, Xlscellmmu5::PXLSFormulaArea ATargetArea, bool AIsName = false);
	
public:
	__fastcall TXLSFormulaEvaluator(Xc12manager5::TXc12Manager* AManager);
	__fastcall virtual ~TXLSFormulaEvaluator();
	Xlsevaluate5::TXLSFormulaValue __fastcall Evaluate(int ASheetIndex, int ACol, int ARow, Xlsformulatypes5::PXLSPtgs APtgs, int APtgsSize, Xlscellmmu5::PXLSFormulaArea ATargetArea);
	System::UnicodeString __fastcall EvaluateStr(int ASheetIndex, int ACol, int ARow, Xlsformulatypes5::PXLSPtgs APtgs, int APtgsSize, Xlscellmmu5::PXLSFormulaArea ATargetArea);
	void __fastcall DebugEvaluate(Xlsfmladebugdata5::TFmlaDebugItems* ADebugData, int ASheetIndex, int ACol, int ARow, Xlsformulatypes5::PXLSPtgs APtgs, int APtgsSize, Xlscellmmu5::PXLSFormulaArea ATargetArea);
	__property TValueStack* Stack = {read=FStack};
	__property bool Volatile = {read=FVolatile, nodefault};
	__property TUserFunctionEvent OnUserFunction = {read=FUserFuncEvent, write=FUserFuncEvent};
	__property TAxGDIFormulaValueEvent OnGDIValue = {read=FEvGDIValue, write=FEvGDIValue};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsevaluatefmla5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSEVALUATEFMLA5)
using namespace Xlsevaluatefmla5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsevaluatefmla5HPP
