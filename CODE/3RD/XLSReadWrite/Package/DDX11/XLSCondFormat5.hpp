// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSCondFormat5.pas' rev: 35.00 (Windows)

#ifndef Xlscondformat5HPP
#define Xlscondformat5HPP

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
#include <System.Math.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12DataWorksheet5.hpp>
#include <Xc12Manager5.hpp>
#include <Xc12DataAutofilter5.hpp>
#include <XLSUtils5.hpp>
#include <XLSClassFactory5.hpp>
#include <XLSCellAreas5.hpp>
#include <XLSMoveCopy5.hpp>
#include <XLSFormula5.hpp>
#include <XLSFormulaTypes5.hpp>
#include <XLSEvaluate5.hpp>
#include <XLSCellMMU5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlscondformat5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSCFRule;
class DELPHICLASS TXLSConditionalFormat;
class DELPHICLASS TXLSConditionalFormats;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXSSCondFmtResultType : unsigned char { xcfrtNone, xcfrtDXF, xcfrtColor, xcfrtDataBar, xcfrtDataBarNoText, xcfrtIcon, xcfrtIconNoText };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCFRule : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool __fastcall GetAboveAverage();
	bool __fastcall GetBottom();
	Xc12dataworksheet5::TXc12ColorScale* __fastcall GetColorScale();
	Xc12dataworksheet5::TXc12DataBar* __fastcall GetDataBar();
	Xc12datastylesheet5::TXc12DXF* __fastcall GetDXF();
	bool __fastcall GetEqualAverage();
	System::UnicodeString __fastcall GetFormulas(int Index);
	Xc12dataworksheet5::TXc12IconSet* __fastcall GetIconSet();
	Xc12dataworksheet5::TXc12ConditionalFormattingOperator __fastcall GetOperator();
	bool __fastcall GetPercent();
	int __fastcall GetPriority();
	int __fastcall GetRank();
	int __fastcall GetStdDev();
	bool __fastcall GetStopIfTrue();
	System::UnicodeString __fastcall GetText();
	Xc12dataworksheet5::TXc12TimePeriod __fastcall GetTimePeriod();
	Xc12dataworksheet5::TXc12CfType __fastcall GetType();
	void __fastcall SerFormulas(int Index, const System::UnicodeString Value);
	void __fastcall SetAboveAverage(const bool Value);
	void __fastcall SetBottom(const bool Value);
	void __fastcall SetEqualAverage(const bool Value);
	void __fastcall SetOperator(const Xc12dataworksheet5::TXc12ConditionalFormattingOperator Value);
	void __fastcall SetPercent(const bool Value);
	void __fastcall SetPriority(const int Value);
	void __fastcall SetRank(const int Value);
	void __fastcall SetStdDev(const int Value);
	void __fastcall SetStopIfTrue(const bool Value);
	void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetTimePeriod(const Xc12dataworksheet5::TXc12TimePeriod Value);
	void __fastcall SetType(const Xc12dataworksheet5::TXc12CfType Value);
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	Xc12dataworksheet5::TXc12CfRule* FData;
	
public:
	__fastcall TXLSCFRule(Xc12manager5::TXc12Manager* AManager, Xc12dataworksheet5::TXc12CfRule* AData);
	__property System::UnicodeString Formulas[int Index] = {read=GetFormulas, write=SerFormulas};
	__property Xc12dataworksheet5::TXc12CfType RuleType = {read=GetType, write=SetType, nodefault};
	__property Xc12datastylesheet5::TXc12DXF* Style = {read=GetDXF};
	__property int Priority = {read=GetPriority, write=SetPriority, nodefault};
	__property bool StopIfTrue = {read=GetStopIfTrue, write=SetStopIfTrue, nodefault};
	__property bool AboveAverage = {read=GetAboveAverage, write=SetAboveAverage, nodefault};
	__property bool Percent = {read=GetPercent, write=SetPercent, nodefault};
	__property bool Bottom = {read=GetBottom, write=SetBottom, nodefault};
	__property Xc12dataworksheet5::TXc12ConditionalFormattingOperator Operator_ = {read=GetOperator, write=SetOperator, nodefault};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property Xc12dataworksheet5::TXc12TimePeriod TimePeriod = {read=GetTimePeriod, write=SetTimePeriod, nodefault};
	__property int Rank = {read=GetRank, write=SetRank, nodefault};
	__property int StdDev = {read=GetStdDev, write=SetStdDev, nodefault};
	__property bool EqualAverage = {read=GetEqualAverage, write=SetEqualAverage, nodefault};
	__property Xc12dataworksheet5::TXc12ColorScale* ColorScale = {read=GetColorScale};
	__property Xc12dataworksheet5::TXc12DataBar* DataBar = {read=GetDataBar};
	__property Xc12dataworksheet5::TXc12IconSet* IconSet = {read=GetIconSet};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSCFRule() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSConditionalFormat : public Xc12dataworksheet5::TXc12ConditionalFormatting
{
	typedef Xc12dataworksheet5::TXc12ConditionalFormatting inherited;
	
private:
	Xlscellareas5::TCellAreas* __fastcall GetAreas();
	bool __fastcall GetPivot();
	void __fastcall SetPivot(const bool Value);
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	Xlsformula5::TXLSFormulaHandler* FFormulas;
	Xc12dataworksheet5::TXc12DataWorksheet* FXc12Sheet;
	Xlscellareas5::TCellArea* FCurrArea;
	unsigned FResColor;
	Xc12datastylesheet5::TXc12DXF* FResDXF;
	double FResPercent;
	int FResIconIndex;
	Xc12dataautofilter5::TXc12IconSetType FResIconStyle;
	void __fastcall PrepareAboveAverage(Xc12dataworksheet5::TXc12CfRule* ARule);
	void __fastcall PrepareMinMax(Xc12dataworksheet5::TXc12CfRule* ARule);
	void __fastcall PrepareTop10(Xc12dataworksheet5::TXc12CfRule* ARule);
	double __fastcall GetColorScaleCfvoVal(Xc12dataworksheet5::TXc12CfRule* ARule, Xc12dataworksheet5::TXc12Cfvo* ACfvo);
	double __fastcall GetIconSetCfvoVal(Xc12dataworksheet5::TXc12CfRule* ARule, Xc12dataworksheet5::TXc12Cfvo* ACfvo);
	double __fastcall CompileCfvoFormula(Xc12dataworksheet5::TXc12Cfvo* ACfvo);
	void __fastcall CompileFormulas(Xc12dataworksheet5::TXc12CfRule* ARule);
	double __fastcall FormulaValAsFloat(Xc12dataworksheet5::TXc12CfRule* ARule, const int AFormula);
	TXSSCondFmtResultType __fastcall DoExpression(Xc12dataworksheet5::TXc12CfRule* ARule, const int ACol, const int ARow);
	TXSSCondFmtResultType __fastcall DoCellIs(Xc12dataworksheet5::TXc12CfRule* ARule, const int ACol, const int ARow);
	TXSSCondFmtResultType __fastcall DoAboveAverage(Xc12dataworksheet5::TXc12CfRule* ARule, const int ACol, const int ARow);
	TXSSCondFmtResultType __fastcall DoColorScale(Xc12dataworksheet5::TXc12CfRule* ARule, const int ACol, const int ARow);
	TXSSCondFmtResultType __fastcall DoDuplicates(Xc12dataworksheet5::TXc12CfRule* ARule, const int ACol, const int ARow, const bool ADoUnique);
	TXSSCondFmtResultType __fastcall DoDataBar(Xc12dataworksheet5::TXc12CfRule* ARule, const int ACol, const int ARow);
	TXSSCondFmtResultType __fastcall DoIconSet(Xc12dataworksheet5::TXc12CfRule* ARule, const int ACol, const int ARow);
	TXSSCondFmtResultType __fastcall DoTop10(Xc12dataworksheet5::TXc12CfRule* ARule, const int ACol, const int ARow);
	
public:
	__fastcall TXLSConditionalFormat(Xc12manager5::TXc12Manager* AManager, Xlsformula5::TXLSFormulaHandler* AFormulas);
	__fastcall virtual ~TXLSConditionalFormat();
	void __fastcall SetStyle(Xc12dataworksheet5::TXc12CfRule* ARule, Xc12datastylesheet5::TXc12FontStyles AFontStyle, const Xc12utils5::TXc12Color &AFill);
	void __fastcall BeginExecute(const int ASqRefIndex);
	TXSSCondFmtResultType __fastcall Execute(const int ACol, const int ARow);
	virtual bool __fastcall Intersect(int Col1, int Row1, int Col2, int Row2);
	virtual void __fastcall Copy(int Col1, int Row1, int Col2, int Row2, int DeltaCol, int DeltaRow);
	virtual void __fastcall Delete(int Col1, int Row1, int Col2, int Row2);
	virtual void __fastcall Include(int Col1, int Row1, int Col2, int Row2);
	virtual void __fastcall Move(int DeltaCol, int DeltaRow)/* overload */;
	virtual void __fastcall Move(int Col1, int Row1, int Col2, int Row2, int DeltaCol, int DeltaRow)/* overload */;
	__property bool Pivot = {read=GetPivot, write=SetPivot, nodefault};
	__property Xlscellareas5::TCellAreas* Areas = {read=GetAreas};
	__property Xc12datastylesheet5::TXc12DXF* ResultDXF = {read=FResDXF};
	__property unsigned ResultColor = {read=FResColor, nodefault};
	__property double ResPercent = {read=FResPercent};
	__property int ResIconIndex = {read=FResIconIndex, nodefault};
	__property Xc12dataautofilter5::TXc12IconSetType ResIconStyle = {read=FResIconStyle, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSConditionalFormats : public Xc12dataworksheet5::TXc12ConditionalFormattings
{
	typedef Xc12dataworksheet5::TXc12ConditionalFormattings inherited;
	
private:
	HIDESBASE TXLSConditionalFormat* __fastcall GetItems(int Index);
	
protected:
	virtual Xc12dataworksheet5::TXc12ConditionalFormatting* __fastcall CreateMember();
	
public:
	__fastcall TXLSConditionalFormats(Xlsclassfactory5::TXLSClassFactory* AClassFactory);
	HIDESBASE TXLSConditionalFormat* __fastcall AddCF();
	TXLSConditionalFormat* __fastcall Find(int ACol, int ARow);
	void __fastcall FillHitList(const int Col1, const int Row1, const int Col2, const int Row2, Xlscellareas5::TBaseCellAreas* AList);
	__property TXLSConditionalFormat* Items[int Index] = {read=GetItems};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXLSConditionalFormats() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlscondformat5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSCONDFORMAT5)
using namespace Xlscondformat5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlscondformat5HPP
