// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSValidate5.pas' rev: 35.00 (Windows)

#ifndef Xlsvalidate5HPP
#define Xlsvalidate5HPP

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
#include <Xc12DataWorksheet5.hpp>
#include <XLSUtils5.hpp>
#include <XLSCellAreas5.hpp>
#include <XLSMoveCopy5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsvalidate5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSDataValidation;
class DELPHICLASS TXLSDataValidations;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXLSValidationOption : unsigned char { voAllowEmptyCells, voSupressDropDown, voShowPromptBox, voShowErrorBox };

typedef System::Set<TXLSValidationOption, TXLSValidationOption::voAllowEmptyCells, TXLSValidationOption::voShowErrorBox> TXLSValidationOptions;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDataValidation : public Xc12dataworksheet5::TXc12DataValidation
{
	typedef Xc12dataworksheet5::TXc12DataValidation inherited;
	
private:
	Xlscellareas5::TCellAreas* __fastcall GetSqref();
	
protected:
	Xc12dataworksheet5::TXc12DataValidation* FData;
	virtual bool __fastcall Intersect(int Col1, int Row1, int Col2, int Row2);
	virtual void __fastcall Copy(int Col1, int Row1, int Col2, int Row2, int DeltaCol, int DeltaRow);
	virtual void __fastcall Delete(int Col1, int Row1, int Col2, int Row2);
	virtual void __fastcall Include(int Col1, int Row1, int Col2, int Row2);
	virtual void __fastcall Move(int DeltaCol, int DeltaRow)/* overload */;
	virtual void __fastcall Move(int Col1, int Row1, int Col2, int Row2, int DeltaCol, int DeltaRow)/* overload */;
	
public:
	__property Xlscellareas5::TCellAreas* Areas = {read=GetSqref};
public:
	/* TXc12DataValidation.Create */ inline __fastcall TXLSDataValidation() : Xc12dataworksheet5::TXc12DataValidation() { }
	/* TXc12DataValidation.Destroy */ inline __fastcall virtual ~TXLSDataValidation() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDataValidations : public Xc12dataworksheet5::TXc12DataValidations
{
	typedef Xc12dataworksheet5::TXc12DataValidations inherited;
	
private:
	HIDESBASE TXLSDataValidation* __fastcall GetItems(int Index);
	
public:
	__fastcall virtual ~TXLSDataValidations();
	HIDESBASE TXLSDataValidation* __fastcall Add();
	__property TXLSDataValidation* Items[int Index] = {read=GetItems};
public:
	/* TXc12DataValidations.Create */ inline __fastcall TXLSDataValidations(Xlsclassfactory5::TXLSClassFactory* AClassFactory) : Xc12dataworksheet5::TXc12DataValidations(AClassFactory) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsvalidate5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSVALIDATE5)
using namespace Xlsvalidate5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsvalidate5HPP
