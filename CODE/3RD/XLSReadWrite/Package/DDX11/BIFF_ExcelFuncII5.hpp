// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_ExcelFuncII5.pas' rev: 35.00 (Windows)

#ifndef Biff_excelfuncii5HPP
#define Biff_excelfuncii5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_excelfuncii5
{
//-- forward type declarations -----------------------------------------------
struct TPTGName7;
struct TPTGName8;
struct TPTGNameX7;
struct TPTGNameX8;
struct TPTGTbl;
struct TPTGRef7;
struct TPTGRef8;
struct TPTGRef12;
struct TPTGRef3d8;
struct TPTGRef3d12;
struct TPTGArea3d8;
struct TPTGArea3d12;
struct TPTGRef3d7;
struct TPTGArea3d7;
struct TPTGArea7;
struct TPTGArea8;
struct TPTGArea12;
struct TExcelFunctions;
//-- type declarations -------------------------------------------------------
typedef TPTGName7 *PPTGName7;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPTGName7
{
public:
	System::Word NameIndex;
	System::StaticArray<System::Byte, 12> Reserved;
};
#pragma pack(pop)


typedef TPTGName8 *PPTGName8;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPTGName8
{
public:
	System::Word NameIndex;
	System::Word Reserved;
};
#pragma pack(pop)


typedef TPTGNameX7 *PPTGNameX7;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPTGNameX7
{
public:
	System::Word ExtSheet;
	System::StaticArray<System::Byte, 8> Reserved1;
	System::Word NameIndex;
	System::StaticArray<System::Byte, 12> Reserved2;
};
#pragma pack(pop)


typedef TPTGNameX8 *PPTGNameX8;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPTGNameX8
{
public:
	System::Word ExtSheet;
	System::Word NameIndex;
	System::Word Reserved;
};
#pragma pack(pop)


typedef TPTGTbl *PPTGTbl;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPTGTbl
{
public:
	System::Word Row;
	System::Word Col;
};
#pragma pack(pop)


typedef TPTGRef7 *PPTGRef7;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPTGRef7
{
public:
	System::Word Row;
	System::Byte Col;
};
#pragma pack(pop)


typedef TPTGRef8 *PPTGRef8;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPTGRef8
{
public:
	System::Word Row;
	System::Word Col;
};
#pragma pack(pop)


typedef TPTGRef12 *PPTGRef12;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPTGRef12
{
public:
	unsigned Row;
	System::Word Col;
};
#pragma pack(pop)


typedef TPTGRef3d8 *PPTGRef3d8;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPTGRef3d8
{
public:
	System::Word Index;
	System::Word Row;
	System::Word Col;
};
#pragma pack(pop)


typedef TPTGRef3d12 *PPTGRef3d12;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPTGRef3d12
{
public:
	System::Word Index;
	unsigned Row;
	System::Word Col;
};
#pragma pack(pop)


typedef TPTGArea3d8 *PPTGArea3d8;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPTGArea3d8
{
public:
	System::Word Index;
	System::Word Row1;
	System::Word Row2;
	System::Word Col1;
	System::Word Col2;
};
#pragma pack(pop)


typedef TPTGArea3d12 *PPTGArea3d12;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPTGArea3d12
{
public:
	System::Word Index;
	unsigned Row1;
	unsigned Row2;
	System::Word Col1;
	System::Word Col2;
};
#pragma pack(pop)


typedef TPTGRef3d7 *PPTGRef3d7;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPTGRef3d7
{
public:
	System::Word Index;
	System::StaticArray<System::Byte, 8> Res;
	System::Word IndexFirst;
	System::Word IndexLast;
	System::Word Row;
	System::Byte Col;
};
#pragma pack(pop)


typedef TPTGArea3d7 *PPTGArea3d7;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPTGArea3d7
{
public:
	System::Word SheetIndex;
	System::StaticArray<System::Byte, 8> Res;
	System::Word IndexFirst;
	System::Word IndexLast;
	System::Word Row1;
	System::Word Row2;
	System::Byte Col1;
	System::Byte Col2;
};
#pragma pack(pop)


typedef TPTGArea7 *PPTGArea7;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPTGArea7
{
public:
	System::Word Row1;
	System::Word Row2;
	System::Byte Col1;
	System::Byte Col2;
};
#pragma pack(pop)


typedef TPTGArea8 *PPTGArea8;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPTGArea8
{
public:
	System::Word Row1;
	System::Word Row2;
	System::Word Col1;
	System::Word Col2;
};
#pragma pack(pop)


typedef TPTGArea12 *PPTGArea12;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPTGArea12
{
public:
	unsigned Row1;
	unsigned Row2;
	System::Word Col1;
	System::Word Col2;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TFunctionId : unsigned short { fiCount, fiIf, fiIsNa, fiIsError, fiSum, fiAverage, fiMin, fiMax, fiRow, fiColumn, fiNA, fiNPV, fiSTDEV, fiDollar, fiFixed, fiSin, fiCos, fiTan, fiATan, fiPI, fiSqrt, fiExp, fiLN, fiLog10, fiAbs, fiInt, fiSign, fiRound, fiLookup, fiIndex, fiRept, fiMid, fiLen, fiValue, fiTrue, fiFalse, fiAnd, fiOr, fiNot, fiMod, fiDCount, fiDSum, fiDAverage, fiDMin, fiDMax, fiDStdev, fiVar, fiDVar, fiText, fiLinest, fiTrend, fiLogest, fiGrowth, fiInt1, fiInt2, fiInt3, fiPV, fiFV, fiNPER, fiPMT, fiRate, fiMirr, fiIrr, fiRand, fiMatch, fiDate, fiTime, fiDay, fiMonth, fiYear, fiWeekday, fiHour, fiMinute, fiSecond, fiNow, fiAreas, fiRows, fiColumns, fiOffset, fiInt4, fiInt5, fiInt6, fiSearch, fiTranspose, fiInt7, fiInt8, fiType, 
	fiInt9, fiInt10, fiInt11, fiInt12, fiInt13, fiInt14, fiInt15, fiInt16, fiInt17, fiInt18, fiATan2, fiASin, fiACos, fiChoose, fiHLookup, fiVLookup, fiInt19, fiInt20, fiIsref, fiInt21, fiInt22, fiInt23, fiLog, fiInt24, fiChar, fiLower, fiUpper, fiProper, fiLeft, fiRight, fiExact, fiTrim, fiReplace, fiSubstitute, fiCode, fiInt25, fiInt26, fiFind, fiCell, fiIsErr, fiIsText, fiIsNumber, fiIsblank, fiT, fiN, fiInt27, fiInt28, fiInt29, fiInt30, fiInt31, fiInt32, fiInt33, fiInt34, fiDatevalue, fiTimevalue, fiSln, fiSyd, fiDdb, fiInt35, fiInt36, fiInt37, fiIndirect, fiInt38, fiInt39, fiInt40, fiInt41, fiInt42, fiInt43, fiInt44, fiInt45, fiInt46, fiInt47, fiInt48, fiInt49, fiInt50, fiClean, fiMdeterm, fiMinverse, fiMmult, fiInt51, fiIpmt, fiPpmt, fiCounta, fiInt52, 
	fiInt53, fiInt54, fiInt55, fiInt56, fiInt57, fiInt58, fiInt59, fiInt60, fiInt61, fiInt62, fiInt63, fiInt64, fiProduct, fiFact, fiInt65, fiInt66, fiInt67, fiInt68, fiDproduct, fiIsnontext, fiInt69, fiInt70, fiStdevp, fiVarp, fiDstdevp, fiDvarp, fiTrunc, fiIslogical, fiDcounta, fiInt71, fiInt72, fiInt73, fiInt74, fiInt75, fiInt76, fiInt77, fiInt78, fiInt79, fiInt80, fiInt81, fiInt82, fiRoundup, fiRounddown, fiInt83, fiInt84, fiRank, fiInt85, fiInt86, fiAddress, fiDays360, fiToday, fiVdb, fiInt87, fiInt88, fiInt89, fiInt90, fiMedian, fiSumproduct, fiSinh, fiCosh, fiTanh, fiAsinh, fiAcosh, fiAtanh, fiDget, fiInt91, fiInt92, fiInt93, fiInt94, fiInt95, fiInt96, fiInt97, fiInt98, fiInt100, fiInt101, fiInt102, fiDb, fiInt103, fiInt104, fiInt105, fiInt106, 
	fiFrequency, fiInt107, fiInt108, fiInt109, fiInt110, fiInt111, fiInt112, fiInt113, fiInt114, fiInt115, fiInt116, fiInt117, fiInt118, fiInt119, fiInt120, fiInt121, fiInt122, fiAvedev, fiBetadist, fiGammaln, fiBetainv, fiBinomdist, fiChidist, fiChiinv, fiCombin, fiConfidence, fiCritbinom, fiEven, fiExpondist, fiFdist, fiFinv, fiFisher, fiFisherinv, fiFloor, fiGammadist, fiGammainv, fiCeiling, fiHypgeomdist, fiLognormdist, fiLoginv, fiNegbinomdist, fiNormdist, fiNormsdist, fiNorminv, fiNormsinv, fiStandardize, fiOdd, fiPermut, fiPoisson, fiTdist, fiWeibull, fiSumxmy2, fiSumx2my2, fiSumx2py2, fiChitest, fiCorrel, fiCovar, fiForecast, fiFtest, fiIntercept, fiPearson, fiRsq, fiSteyx, fiSlope, fiTtest, fiProb, fiDevsq, fiGeomean, fiHarmean, fiSumsq, fiKurt, fiSkew, 
	fiZtest, fiLarge, fiSmall, fiQuartile, fiPercentile, fiPercentrank, fiMode, fiTrimmean, fiTinv, fiInt123, fiInt124, fiInt125, fiConcatenate, fiPower, fiUserFunc };

#pragma pack(push,1)
struct DECLSPEC_DRECORD TExcelFunctions
{
public:
	System::Byte Min;
	System::Byte Max;
	System::UnicodeString Name;
	System::StaticArray<System::Byte, 6> ArgClass;
};
#pragma pack(pop)


typedef System::StaticArray<TExcelFunctions, 381> TExcelFunctionsArray;

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 TokenClassRef = System::Int8(0x20);
static const System::Int8 TokenClassValue = System::Int8(0x40);
static const System::Int8 TokenClassArray = System::Int8(0x60);
static const System::Int8 TokenClassDefault = System::Int8(0x40);
extern DELPHI_PACKAGE TExcelFunctionsArray ExcelFunctions;
}	/* namespace Biff_excelfuncii5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_EXCELFUNCII5)
using namespace Biff_excelfuncii5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_excelfuncii5HPP
