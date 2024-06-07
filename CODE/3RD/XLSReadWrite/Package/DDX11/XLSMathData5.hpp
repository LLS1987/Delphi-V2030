// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSMathData5.pas' rev: 35.00 (Windows)

#ifndef Xlsmathdata5HPP
#define Xlsmathdata5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Math.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsmathdata5
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
static const System::Byte MAX_QUICKFACTORIAL = System::Byte(0xaa);
static const System::Extended const_e = 2.718282E+00;
static const System::Extended const_epsilon = 2.465190E-32;
static const int MaxSeriesIterations = int(0x186a0);
static const System::Int8 ResNumDigits = System::Int8(0x35);
static const System::Word LogMaxValue = System::Word(0x2c5);
static const short LogMinValue = short(-707);
static const System::Int8 NiceArraySize = System::Int8(0x1e);
static const bool IsSpecialized = true;
extern DELPHI_PACKAGE double __fastcall QuickFactorial(int AValue);
extern DELPHI_PACKAGE double __fastcall EvaluatePolynomial3(const double *a, const int a_High, const double x);
extern DELPHI_PACKAGE double __fastcall EvaluatePolynomial4(const double *a, const int a_High, const double x);
extern DELPHI_PACKAGE double __fastcall EvaluatePolynomial5(const double *a, const int a_High, const double x);
extern DELPHI_PACKAGE double __fastcall EvaluatePolynomial6(const double *a, const int a_High, const double x);
extern DELPHI_PACKAGE double __fastcall EvaluatePolynomial7(const double *a, const int a_High, const double x);
extern DELPHI_PACKAGE double __fastcall EvaluatePolynomial8(const double *a, const int a_High, const double x);
extern DELPHI_PACKAGE double __fastcall EvaluatePolynomial9(const double *a, const int a_High, const double x);
extern DELPHI_PACKAGE double __fastcall EvaluatePolynomial10(const double *a, const int a_High, const double x);
extern DELPHI_PACKAGE double __fastcall EvaluatePolynomial11(const double *a, const int a_High, const double x);
extern DELPHI_PACKAGE double __fastcall EvaluateEvenPolynomial3(const double *a, const int a_High, const double x);
extern DELPHI_PACKAGE double __fastcall EvaluateEvenPolynomial4(const double *a, const int a_High, const double x);
extern DELPHI_PACKAGE double __fastcall EvaluateEvenPolynomial5(const double *a, const int a_High, const double x);
extern DELPHI_PACKAGE double __fastcall EvaluateEvenPolynomial6(const double *a, const int a_High, const double x);
extern DELPHI_PACKAGE double __fastcall EvaluateEvenPolynomial7(const double *a, const int a_High, const double x);
extern DELPHI_PACKAGE double __fastcall EvaluateEvenPolynomial8(const double *a, const int a_High, const double x);
extern DELPHI_PACKAGE double __fastcall EvaluateOddPolynomial11(double *poly, const int poly_High, double z);
extern DELPHI_PACKAGE double __fastcall ErfImp_1(double z, bool invert);
extern DELPHI_PACKAGE double __fastcall erfc(double z);
extern DELPHI_PACKAGE double __fastcall expm1(double x);
extern DELPHI_PACKAGE double __fastcall log1p(double x);
extern DELPHI_PACKAGE double __fastcall powm1(double a, double z);
extern DELPHI_PACKAGE int __fastcall itrunc(double V);
}	/* namespace Xlsmathdata5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSMATHDATA5)
using namespace Xlsmathdata5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsmathdata5HPP
