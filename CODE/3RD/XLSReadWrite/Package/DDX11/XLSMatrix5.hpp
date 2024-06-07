// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSMatrix5.pas' rev: 35.00 (Windows)

#ifndef Xlsmatrix5HPP
#define Xlsmatrix5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Math.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsmatrix5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSMatrix;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSMatrix : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<double> _TXLSMatrix__1;
	
	typedef System::DynamicArray<System::DynamicArray<double> > _TXLSMatrix__2;
	
	
private:
	double __fastcall GetItems(int ACol, int ARow);
	void __fastcall SetItems(int ACol, int ARow, const double Value);
	
protected:
	int FCols;
	int FRows;
	_TXLSMatrix__2 FMatrix;
	void __fastcall Swap(int C1, int R1, int C2, int R2);
	
public:
	__fastcall TXLSMatrix(TXLSMatrix* AMatrix)/* overload */;
	__fastcall TXLSMatrix(int ACols, int ARows)/* overload */;
	bool __fastcall Determ(/* out */ double &ARes);
	TXLSMatrix* __fastcall Minor(int ACol, int ARow);
	TXLSMatrix* __fastcall Inverse();
	void __fastcall Mult(double AValue)/* overload */;
	TXLSMatrix* __fastcall Mult(TXLSMatrix* AValue)/* overload */;
	void __fastcall Zero();
	void __fastcall Diag();
	__property double Items[int ACol][int ARow] = {read=GetItems, write=SetItems/*, default*/};
	__property int Cols = {read=FCols, nodefault};
	__property int Rows = {read=FRows, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSMatrix() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsmatrix5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSMATRIX5)
using namespace Xlsmatrix5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsmatrix5HPP
