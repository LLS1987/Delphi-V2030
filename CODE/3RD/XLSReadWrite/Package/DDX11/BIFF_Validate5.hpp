// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_Validate5.pas' rev: 35.00 (Windows)

#ifndef Biff_validate5HPP
#define Biff_validate5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <BIFF_Utils5.hpp>
#include <BIFF_FormulaHandler5.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_CellAreas5.hpp>
#include <BIFF_Stream5.hpp>
#include <BIFF_MoveCopy5.hpp>
#include <BIFF_ExcelFuncII5.hpp>
#include <XLSUtils5.hpp>
#include <XLSFormulaTypes5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_validate5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDataValidation;
class DELPHICLASS TDataValidations;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TValidationOperator : unsigned char { vopBetween, vopNotBetween, vopEqual, vopNotEqual, vopGreater, vopLess, vopGreateEqual, vopLessEqual };

enum DECLSPEC_DENUM TValidationType : unsigned char { vtAny, vtInteger, vtNumber, vtList, vtDate, vtTime, vtTextLength, vtCustom };

enum DECLSPEC_DENUM TValidationStyle : unsigned char { vsStop, vsWarning, vsInfo };

enum DECLSPEC_DENUM TValidationOption : unsigned char { voAllowEmptyCells, voSupressDropDown, voShowPromptBox, voShowErrorBox };

typedef System::Set<TValidationOption, TValidationOption::voAllowEmptyCells, TValidationOption::voShowErrorBox> TValidationOptions;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDataValidation : public Biff_movecopy5::TCollectionItemMoveCopy
{
	typedef Biff_movecopy5::TCollectionItemMoveCopy inherited;
	
private:
	bool FAssigned;
	unsigned FOptions;
	TValidationOptions FValidationOptions;
	System::UnicodeString FInputTitle;
	System::UnicodeString FErrorTitle;
	System::UnicodeString FInputMsg;
	System::UnicodeString FErrorMsg;
	Biff_utils5::TRecPTGS FFormula1;
	Biff_utils5::TRecPTGS FFormula2;
	TValidationType FValidationType;
	TValidationStyle FValidationStyle;
	TValidationOperator FValidationOperator;
	Biff_cellareas5::TCellAreas97* FAreas;
	void __fastcall ClearExpr1();
	void __fastcall ClearExpr2();
	System::UnicodeString __fastcall GetExpression1();
	System::UnicodeString __fastcall GetExpression2();
	void __fastcall SetExpression1(const System::UnicodeString Value);
	void __fastcall SetExpression2(const System::UnicodeString Value);
	void __fastcall SetValidationOperator(const TValidationOperator Value);
	void __fastcall SetValidationStyle(const TValidationStyle Value);
	void __fastcall SetValidationType(const TValidationType Value);
	void __fastcall SetValidationOptions(const TValidationOptions Value);
	
protected:
	void __fastcall LoadFromStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	void __fastcall SaveToStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	void __fastcall SetRawExpression1(System::Sysutils::PByteArray Value, int Len);
	void __fastcall SetRawExpression2(System::Sysutils::PByteArray Value, int Len);
	virtual bool __fastcall Intersect(int Col1, int Row1, int Col2, int Row2);
	virtual void __fastcall Copy(int Col1, int Row1, int Col2, int Row2, int DeltaCol, int DeltaRow);
	virtual void __fastcall Delete(int Col1, int Row1, int Col2, int Row2);
	virtual void __fastcall Include(int Col1, int Row1, int Col2, int Row2);
	virtual void __fastcall Move(int DeltaCol, int DeltaRow)/* overload */;
	virtual void __fastcall Move(int Col1, int Row1, int Col2, int Row2, int DeltaCol, int DeltaRow)/* overload */;
	
public:
	__fastcall virtual TDataValidation(System::Classes::TCollection* Collection);
	__fastcall virtual ~TDataValidation();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall SetList(System::UnicodeString *Values, const int Values_High);
	bool __fastcall GetList(System::UnicodeString *Values, const int Values_High);
	int __fastcall GetListSize();
	
__published:
	__property TValidationOptions Options = {read=FValidationOptions, write=SetValidationOptions, nodefault};
	__property Biff_cellareas5::TCellAreas97* Areas = {read=FAreas, write=FAreas};
	__property System::UnicodeString ErrorMsg = {read=FErrorMsg, write=FErrorMsg};
	__property System::UnicodeString ErrorTitle = {read=FErrorTitle, write=FErrorTitle};
	__property System::UnicodeString Expression1 = {read=GetExpression1, write=SetExpression1};
	__property System::UnicodeString Expression2 = {read=GetExpression2, write=SetExpression2};
	__property System::UnicodeString InputMsg = {read=FInputMsg, write=FInputMsg};
	__property System::UnicodeString InputTitle = {read=FInputTitle, write=FInputTitle};
	__property TValidationOperator ValidationOperator = {read=FValidationOperator, write=SetValidationOperator, nodefault};
	__property TValidationStyle ValidationStyle = {read=FValidationStyle, write=SetValidationStyle, nodefault};
	__property TValidationType ValidationType = {read=FValidationType, write=SetValidationType, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDataValidations : public Biff_movecopy5::TCollectionMoveCopy
{
	typedef Biff_movecopy5::TCollectionMoveCopy inherited;
	
public:
	TDataValidation* operator[](int Index) { return this->Items[Index]; }
	
private:
	Biff_recsii5::TRecDVAL FRecDVAL;
	TDataValidation* __fastcall GetDataValidation(int Index);
	
protected:
	System::Classes::TPersistent* FOwner;
	Biff_formulahandler5::TFormulaHandler* FFormulaHandler;
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TDataValidations(System::Classes::TPersistent* AOwner, Biff_formulahandler5::TFormulaHandler* FormulaHandler);
	HIDESBASE TDataValidation* __fastcall Add();
	void __fastcall LoadFromStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	void __fastcall SaveToStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	int __fastcall ComboBoxObjId();
	__property TDataValidation* Items[int Index] = {read=GetDataValidation/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDataValidations() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Biff_validate5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_VALIDATE5)
using namespace Biff_validate5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_validate5HPP
