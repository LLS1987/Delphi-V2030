// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_CondFmt5.pas' rev: 35.00 (Windows)

#ifndef Biff_condfmt5HPP
#define Biff_condfmt5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_Names5.hpp>
#include <BIFF_CellAreas5.hpp>
#include <BIFF_Utils5.hpp>
#include <BIFF_FormulaHandler5.hpp>
#include <BIFF_Stream5.hpp>
#include <BIFF_MoveCopy5.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_condfmt5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCondFmtFont;
class DELPHICLASS TCondFmtBorder;
class DELPHICLASS TCondFmtPattern;
class DELPHICLASS TCondFmtData;
class DELPHICLASS TConditionalFormat;
class DELPHICLASS TConditionalFormats;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TConditionOperator : unsigned char { coNoComparision, coBetween, coNotBetween, coEqual, coNotEqual, coGreater, coLess, coGreateEqual, coLessEqual };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCondFmtFont : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Biff_recsii5::TCFFont FCFFont;
	bool FAssigned;
	Xc12utils5::TXc12IndexColor __fastcall GetColor();
	Xc12datastylesheet5::TXc12FontStyles __fastcall GetFontStyle();
	unsigned __fastcall GetHeight20();
	Xc12datastylesheet5::TXc12SubSuperscript __fastcall GetSubSuperscript();
	Xc12datastylesheet5::TXc12Underline __fastcall GetUnderline();
	void __fastcall SetColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetFontStyle(const Xc12datastylesheet5::TXc12FontStyles Value);
	void __fastcall SetHeight20(const unsigned Value);
	void __fastcall SetSubSuperscript(const Xc12datastylesheet5::TXc12SubSuperscript Value);
	void __fastcall SetUnderline(const Xc12datastylesheet5::TXc12Underline Value);
	void __fastcall SetRec(Biff_recsii5::PCFFont CFFont);
	
public:
	__fastcall TCondFmtFont();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property bool Assigned = {read=FAssigned, nodefault};
	
__published:
	__property unsigned Height20 = {read=GetHeight20, write=SetHeight20, nodefault};
	__property Xc12datastylesheet5::TXc12FontStyles FontStyle = {read=GetFontStyle, write=SetFontStyle, nodefault};
	__property Xc12datastylesheet5::TXc12SubSuperscript Escapment = {read=GetSubSuperscript, write=SetSubSuperscript, nodefault};
	__property Xc12datastylesheet5::TXc12Underline Underline = {read=GetUnderline, write=SetUnderline, nodefault};
	__property Xc12utils5::TXc12IndexColor Color = {read=GetColor, write=SetColor, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TCondFmtFont() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCondFmtBorder : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Biff_recsii5::TCFBorder FCFBorder;
	System::StaticArray<bool, 4> FAssigned;
	Xc12utils5::TXc12IndexColor __fastcall GetBottomColor();
	Xc12datastylesheet5::TXc12CellBorderStyle __fastcall GetBottomStyle();
	Xc12utils5::TXc12IndexColor __fastcall GetLeftColor();
	Xc12datastylesheet5::TXc12CellBorderStyle __fastcall GetLeftStyle();
	Xc12utils5::TXc12IndexColor __fastcall GetRightColor();
	Xc12datastylesheet5::TXc12CellBorderStyle __fastcall GetRightStyle();
	Xc12utils5::TXc12IndexColor __fastcall GetTopColor();
	Xc12datastylesheet5::TXc12CellBorderStyle __fastcall GetTopStyle();
	void __fastcall SetBottomColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetBottomStyle(const Xc12datastylesheet5::TXc12CellBorderStyle Value);
	void __fastcall SetLeftColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetLeftStyle(const Xc12datastylesheet5::TXc12CellBorderStyle Value);
	void __fastcall SetRightColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetRightStyle(const Xc12datastylesheet5::TXc12CellBorderStyle Value);
	void __fastcall SetTopColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetTopStyle(const Xc12datastylesheet5::TXc12CellBorderStyle Value);
	void __fastcall SetRec(Biff_recsii5::PCFBorder CFBorder, unsigned Flags);
	bool __fastcall GetAssigned();
	
public:
	__fastcall TCondFmtBorder();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	bool __fastcall AssignedLeft();
	bool __fastcall AssignedTop();
	bool __fastcall AssignedRight();
	bool __fastcall AssignedBottom();
	__property bool Assigned = {read=GetAssigned, nodefault};
	
__published:
	__property Xc12datastylesheet5::TXc12CellBorderStyle LeftStyle = {read=GetLeftStyle, write=SetLeftStyle, nodefault};
	__property Xc12datastylesheet5::TXc12CellBorderStyle RightStyle = {read=GetRightStyle, write=SetRightStyle, nodefault};
	__property Xc12datastylesheet5::TXc12CellBorderStyle TopStyle = {read=GetTopStyle, write=SetTopStyle, nodefault};
	__property Xc12datastylesheet5::TXc12CellBorderStyle BottomStyle = {read=GetBottomStyle, write=SetBottomStyle, nodefault};
	__property Xc12utils5::TXc12IndexColor LeftColor = {read=GetLeftColor, write=SetLeftColor, nodefault};
	__property Xc12utils5::TXc12IndexColor RightColor = {read=GetRightColor, write=SetRightColor, nodefault};
	__property Xc12utils5::TXc12IndexColor TopColor = {read=GetTopColor, write=SetTopColor, nodefault};
	__property Xc12utils5::TXc12IndexColor BottomColor = {read=GetBottomColor, write=SetBottomColor, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TCondFmtBorder() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCondFmtPattern : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Biff_recsii5::TCFPattern FCFPattern;
	System::StaticArray<bool, 3> FAssigned;
	Xc12utils5::TXc12IndexColor __fastcall GetBackColor();
	Xc12datastylesheet5::TXc12FillPattern __fastcall GetFillPattern();
	Xc12utils5::TXc12IndexColor __fastcall GetForeColor();
	void __fastcall SetBackColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetFillPattern(const Xc12datastylesheet5::TXc12FillPattern Value);
	void __fastcall SetForeColor(const Xc12utils5::TXc12IndexColor Value);
	void __fastcall SetRec(Biff_recsii5::PCFPattern CFPattern, unsigned Flags);
	bool __fastcall GetAssigned();
	
public:
	__fastcall TCondFmtPattern();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property bool Assigned = {read=GetAssigned, nodefault};
	
__published:
	__property Xc12datastylesheet5::TXc12FillPattern FillPattern = {read=GetFillPattern, write=SetFillPattern, nodefault};
	__property Xc12utils5::TXc12IndexColor ForeColor = {read=GetForeColor, write=SetForeColor, nodefault};
	__property Xc12utils5::TXc12IndexColor BackColor = {read=GetBackColor, write=SetBackColor, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TCondFmtPattern() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCondFmtData : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Biff_recsii5::TRecCF *FRecCF;
	Biff_utils5::TRecPTGS FFormula1;
	Biff_utils5::TRecPTGS FFormula2;
	TCondFmtFont* FFmtFont;
	TCondFmtBorder* FFmtBorder;
	TCondFmtPattern* FFmtPattern;
	Biff_formulahandler5::TFormulaHandler* FFormulaHandler;
	bool __fastcall GetCompareCell();
	TConditionOperator __fastcall GetCompOperator();
	System::UnicodeString __fastcall GetFormula1();
	System::UnicodeString __fastcall GetFormula2();
	void __fastcall SetCompareCell(const bool Value);
	void __fastcall SetCompOperator(const TConditionOperator Value);
	void __fastcall SetFormula1(const System::UnicodeString Value);
	void __fastcall SetFormula2(const System::UnicodeString Value);
	void __fastcall SetRec(Biff_recsii5::PRecCF RecCF);
	System::UnicodeString __fastcall GetFormulaRel1(int SheetIndex, int Col, int Row);
	System::UnicodeString __fastcall GetFormulaRel2(int SheetIndex, int Col, int Row);
	void __fastcall SetFormulaRel1(int SheetIndex, int Col, int Row, const System::UnicodeString Value);
	void __fastcall SetFormulaRel2(int SheetIndex, int Col, int Row, const System::UnicodeString Value);
	
protected:
	void __fastcall SaveToStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	
public:
	__fastcall TCondFmtData(Biff_formulahandler5::TFormulaHandler* FmlaHandler);
	__fastcall virtual ~TCondFmtData();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	bool __fastcall Assigned();
	__property System::UnicodeString FormulaRel1[int Col][int Row][int SheetIndex] = {read=GetFormulaRel1, write=SetFormulaRel1};
	__property System::UnicodeString FormulaRel2[int Col][int Row][int SheetIndex] = {read=GetFormulaRel2, write=SetFormulaRel2};
	
__published:
	__property bool CompareCell = {read=GetCompareCell, write=SetCompareCell, nodefault};
	__property TConditionOperator CompOperator = {read=GetCompOperator, write=SetCompOperator, nodefault};
	__property System::UnicodeString Formula1 = {read=GetFormula1, write=SetFormula1};
	__property System::UnicodeString Formula2 = {read=GetFormula2, write=SetFormula2};
	__property TCondFmtFont* FmtFont = {read=FFmtFont, write=FFmtFont};
	__property TCondFmtBorder* FmtBorder = {read=FFmtBorder, write=FFmtBorder};
	__property TCondFmtPattern* FmtPattern = {read=FFmtPattern, write=FFmtPattern};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TConditionalFormat : public Biff_movecopy5::TCollectionItemMoveCopy
{
	typedef Biff_movecopy5::TCollectionItemMoveCopy inherited;
	
private:
	TCondFmtData* FCond1;
	TCondFmtData* FCond2;
	TCondFmtData* FCond3;
	Biff_cellareas5::TCellAreas97* FAreas;
	
protected:
	int __fastcall Assigned();
	void __fastcall SaveToStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	virtual bool __fastcall Intersect(int Col1, int Row1, int Col2, int Row2);
	virtual void __fastcall Copy(int Col1, int Row1, int Col2, int Row2, int DeltaCol, int DeltaRow);
	virtual void __fastcall Delete(int Col1, int Row1, int Col2, int Row2);
	virtual void __fastcall Include(int Col1, int Row1, int Col2, int Row2);
	virtual void __fastcall Move(int DeltaCol, int DeltaRow)/* overload */;
	virtual void __fastcall Move(int Col1, int Row1, int Col2, int Row2, int DeltaCol, int DeltaRow)/* overload */;
	
public:
	__fastcall virtual TConditionalFormat(System::Classes::TCollection* Collection);
	__fastcall virtual ~TConditionalFormat();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property TCondFmtData* Condition1 = {read=FCond1, write=FCond1};
	__property TCondFmtData* Condition2 = {read=FCond2, write=FCond2};
	__property TCondFmtData* Condition3 = {read=FCond3, write=FCond3};
	__property Biff_cellareas5::TCellAreas97* Areas = {read=FAreas, write=FAreas};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TConditionalFormats : public Biff_movecopy5::TCollectionMoveCopy
{
	typedef Biff_movecopy5::TCollectionMoveCopy inherited;
	
public:
	TConditionalFormat* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TPersistent* FOwner;
	Biff_formulahandler5::TFormulaHandler* FFormulaHandler;
	HIDESBASE TConditionalFormat* __fastcall GetItems(int Index);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TConditionalFormats(System::Classes::TPersistent* AOwner, Biff_formulahandler5::TFormulaHandler* FmlaHandler);
	HIDESBASE TConditionalFormat* __fastcall Add();
	TConditionalFormat* __fastcall Find(int Col, int Row);
	void __fastcall LoadFromStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	void __fastcall SaveToStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	__property TConditionalFormat* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TConditionalFormats() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Biff_condfmt5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_CONDFMT5)
using namespace Biff_condfmt5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_condfmt5HPP
