// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSMath5.pas' rev: 35.00 (Windows)

#ifndef Xlsmath5HPP
#define Xlsmath5HPP

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
#include <XLSUtils5.hpp>
#include <XLSMathData5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsmath5
{
//-- forward type declarations -----------------------------------------------
struct TFloatPair;
struct TFloatTriple;
class DELPHICLASS TIterateFunc;
class DELPHICLASS TIterateFuncTriple;
class DELPHICLASS TIterateFuncPair;
class DELPHICLASS TIBetaSeriesIter;
class DELPHICLASS TLowerIncompleteGammaSeriesIter;
class DELPHICLASS TSmallGamma2SeriesIter;
class DELPHICLASS TErfAsymptSeriesIter;
class DELPHICLASS DistributionQuantileIter;
class DELPHICLASS TIBetaFraction2Iter;
class DELPHICLASS TUpperIncompleteGammaFractIter;
class DELPHICLASS TTemmeRootFinderIter;
class DELPHICLASS TGammaPInverseIter;
class DELPHICLASS TIBetaRootsIter;
class DELPHICLASS TXLSLanczos;
class DELPHICLASS TXLSLanczos13m53;
//-- type declarations -------------------------------------------------------
typedef bool __fastcall (*TFunc2DoubleBool)(double a, double b);

struct DECLSPEC_DRECORD TFloatPair
{
public:
	double a;
	double b;
};


struct DECLSPEC_DRECORD TFloatTriple
{
public:
	double a;
	double b;
	double c;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIterateFunc : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual double __fastcall Iterate()/* overload */;
	virtual double __fastcall Iterate(double x)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TIterateFunc() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIterateFunc() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIterateFuncTriple : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual TFloatTriple __fastcall Iterate(double AValue);
public:
	/* TObject.Create */ inline __fastcall TIterateFuncTriple() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIterateFuncTriple() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIterateFuncPair : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual TFloatPair __fastcall Iterate()/* overload */;
	virtual TFloatPair __fastcall Iterate(double x)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TIterateFuncPair() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIterateFuncPair() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TIBetaSeriesIter : public TIterateFunc
{
	typedef TIterateFunc inherited;
	
protected:
	double FRes;
	double Fx;
	double Fapn;
	double Fpoch;
	int Fn;
	
public:
	__fastcall TIBetaSeriesIter(double a, double b, double x, double mult);
	virtual double __fastcall Iterate()/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIBetaSeriesIter() { }
	
	/* Hoisted overloads: */
	
public:
	inline double __fastcall  Iterate(double x){ return TIterateFunc::Iterate(x); }
	
};


class PASCALIMPLEMENTATION TLowerIncompleteGammaSeriesIter : public TIterateFunc
{
	typedef TIterateFunc inherited;
	
protected:
	double Fa;
	double Fz;
	double FRes;
	
public:
	__fastcall TLowerIncompleteGammaSeriesIter(double a, double z);
	virtual double __fastcall Iterate()/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TLowerIncompleteGammaSeriesIter() { }
	
	/* Hoisted overloads: */
	
public:
	inline double __fastcall  Iterate(double x){ return TIterateFunc::Iterate(x); }
	
};


class PASCALIMPLEMENTATION TSmallGamma2SeriesIter : public TIterateFunc
{
	typedef TIterateFunc inherited;
	
protected:
	double Fa;
	double Fx;
	double Fapn;
	int Fn;
	double FRes;
	
public:
	__fastcall TSmallGamma2SeriesIter(double a, double x);
	virtual double __fastcall Iterate()/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSmallGamma2SeriesIter() { }
	
	/* Hoisted overloads: */
	
public:
	inline double __fastcall  Iterate(double x){ return TIterateFunc::Iterate(x); }
	
};


class PASCALIMPLEMENTATION TErfAsymptSeriesIter : public TIterateFunc
{
	typedef TIterateFunc inherited;
	
protected:
	double FRes;
	double Fxx;
	int Ftk;
	
public:
	__fastcall TErfAsymptSeriesIter(double z);
	virtual double __fastcall Iterate()/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TErfAsymptSeriesIter() { }
	
	/* Hoisted overloads: */
	
public:
	inline double __fastcall  Iterate(double x){ return TIterateFunc::Iterate(x); }
	
};


class PASCALIMPLEMENTATION DistributionQuantileIter : public TIterateFunc
{
	typedef TIterateFunc inherited;
	
protected:
	bool FComp;
	double FTarget;
	double Fn;
	double Fsuccess_fraction;
	
public:
	__fastcall DistributionQuantileIter(unsigned n, double success_fraction, double p, double q);
	virtual double __fastcall Iterate(double x)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~DistributionQuantileIter() { }
	
	/* Hoisted overloads: */
	
public:
	inline double __fastcall  Iterate(){ return TIterateFunc::Iterate(); }
	
};


class PASCALIMPLEMENTATION TIBetaFraction2Iter : public TIterateFuncPair
{
	typedef TIterateFuncPair inherited;
	
protected:
	double Fa;
	double Fb;
	double Fx;
	int Fm;
	
public:
	__fastcall TIBetaFraction2Iter(double a, double b, double x);
	virtual TFloatPair __fastcall Iterate()/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIBetaFraction2Iter() { }
	
	/* Hoisted overloads: */
	
public:
	inline TFloatPair __fastcall  Iterate(double x){ return TIterateFuncPair::Iterate(x); }
	
};


class PASCALIMPLEMENTATION TUpperIncompleteGammaFractIter : public TIterateFuncPair
{
	typedef TIterateFuncPair inherited;
	
protected:
	double Fa;
	double Fz;
	int Fk;
	
public:
	__fastcall TUpperIncompleteGammaFractIter(double a, double z);
	virtual TFloatPair __fastcall Iterate()/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TUpperIncompleteGammaFractIter() { }
	
	/* Hoisted overloads: */
	
public:
	inline TFloatPair __fastcall  Iterate(double x){ return TIterateFuncPair::Iterate(x); }
	
};


class PASCALIMPLEMENTATION TTemmeRootFinderIter : public TIterateFuncPair
{
	typedef TIterateFuncPair inherited;
	
protected:
	double Ft;
	double Fa;
	
public:
	__fastcall TTemmeRootFinderIter(double At, double Aa);
	virtual TFloatPair __fastcall Iterate(double x)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TTemmeRootFinderIter() { }
	
	/* Hoisted overloads: */
	
public:
	inline TFloatPair __fastcall  Iterate(){ return TIterateFuncPair::Iterate(); }
	
};


class PASCALIMPLEMENTATION TGammaPInverseIter : public TIterateFuncTriple
{
	typedef TIterateFuncTriple inherited;
	
protected:
	double Fa;
	double Fp;
	bool FInv;
	
public:
	__fastcall TGammaPInverseIter(double Aa, double Ap, bool AInv);
	virtual TFloatTriple __fastcall Iterate(double x);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TGammaPInverseIter() { }
	
};


class PASCALIMPLEMENTATION TIBetaRootsIter : public TIterateFuncTriple
{
	typedef TIterateFuncTriple inherited;
	
protected:
	double Fa;
	double Fb;
	double FTarget;
	bool FInvert;
	
public:
	__fastcall TIBetaRootsIter(double Aa, double Ab, double At, bool AInverse);
	virtual TFloatTriple __fastcall Iterate(double x);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIBetaRootsIter() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSLanczos : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual double __fastcall g() = 0 ;
	virtual double __fastcall Sum(double z) = 0 ;
	virtual double __fastcall SumExpGScaled(double Z) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TXLSLanczos() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSLanczos() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSLanczos13m53 : public TXLSLanczos
{
	typedef TXLSLanczos inherited;
	
public:
	virtual double __fastcall g();
	virtual double __fastcall Sum(double z);
	virtual double __fastcall SumExpGScaled(double z);
public:
	/* TObject.Create */ inline __fastcall TXLSLanczos13m53() : TXLSLanczos() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSLanczos13m53() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE double __fastcall sinpx(double z);
extern DELPHI_PACKAGE double __fastcall EvaluateRational(double *Num, const int Num_High, unsigned *Denom, const int Denom_High, int Count, double z);
extern DELPHI_PACKAGE double __fastcall SumSeries(TIterateFunc* Func, int Bits, int MaxTerms, double InitValue);
extern DELPHI_PACKAGE double __fastcall Beta(double A, double B);
extern DELPHI_PACKAGE double __fastcall IBetaSeries(double a, double b, double x, double s0, TXLSLanczos* Lanczos, bool Normalized, System::PDouble Derivative, double y);
extern DELPHI_PACKAGE double __fastcall log1pmx(double x);
extern DELPHI_PACKAGE double __fastcall RegularisedGammaPrefix(double a, double z, TXLSLanczos* Lanczos);
extern DELPHI_PACKAGE double __fastcall TGammaDeltaRatioImpLanczos(double z, double delta, TXLSLanczos* Lanczos);
extern DELPHI_PACKAGE double __fastcall TGammaDeltaRatioImp(double z, double delta);
extern DELPHI_PACKAGE double __fastcall FiniteGammaQ(double a, double x);
extern DELPHI_PACKAGE double __fastcall GammaImp(double z, TXLSLanczos* Lanczos);
extern DELPHI_PACKAGE double __fastcall FiniteHalfGammaQ(double a, double x, System::PDouble Derivative);
extern DELPHI_PACKAGE double __fastcall FullIGammaPrefix(double a, double z);
extern DELPHI_PACKAGE double __fastcall LowerGammaSeries(double a, double z);
extern DELPHI_PACKAGE double __fastcall TGamma(double z);
extern DELPHI_PACKAGE double __fastcall LGammaSmallImp(double z, double zm1, double zm2);
extern DELPHI_PACKAGE double __fastcall TGammap1m1Imp(double dz);
extern DELPHI_PACKAGE double __fastcall TGamma1pm1(double z);
extern DELPHI_PACKAGE double __fastcall TGammaSmallUpperPart(double a, double x);
extern DELPHI_PACKAGE double __fastcall ContinuedFractionA(TIterateFuncPair* g, int bits);
extern DELPHI_PACKAGE double __fastcall ErfImp(double z, bool Invert);
extern DELPHI_PACKAGE double __fastcall Erfc(double z);
extern DELPHI_PACKAGE double __fastcall IGammaTemmeLarge(double a, double x);
extern DELPHI_PACKAGE double __fastcall GammaIncompleteImp(double a, double x, bool normalized, bool invert, System::PDouble Derivative);
extern DELPHI_PACKAGE double __fastcall Gamma_Q(double a, double z);
extern DELPHI_PACKAGE double __fastcall Gamma_P(double a, double z);
extern DELPHI_PACKAGE double __fastcall BetaSmallBLargeASeries(double a, double b, double x, double y, double s0, double mult, bool Normalized);
extern DELPHI_PACKAGE double __fastcall RisingFactorialRatio(double A, double B, double _P1);
extern DELPHI_PACKAGE double __fastcall BinomialCCDF(double n, double k, double x, double y);
extern DELPHI_PACKAGE double __fastcall SecantInterpolate(double a, double b, double fa, double fb);
extern DELPHI_PACKAGE void __fastcall Bracket(TIterateFunc* Iter, double &a, double &b, double &c, double &fa, double &fb, double &d, double &fd);
extern DELPHI_PACKAGE double __fastcall CubicInterpolate(double a, double b, double d, double e, double fa, double fb, double fd, double fe);
extern DELPHI_PACKAGE TFloatPair __fastcall Toms748Solve(TIterateFunc* Iter, double ax, double bx, double fax, double fbx, TFunc2DoubleBool TolFunc, int &max_iter);
extern DELPHI_PACKAGE double __fastcall DoInverseDiscreteQuantile(unsigned n, double k, double p, double q, double guess, double multiplier, double adder, TFunc2DoubleBool TolFunc, int &max_iter, int min_bound, int max_bound);
extern DELPHI_PACKAGE double __fastcall InverseDiscreteQuantile(unsigned n, double success_fraction, double p, double q, double guess, double multiplier, double adder, int max_iter);
extern DELPHI_PACKAGE double __fastcall BinomialQuantileImp(int trials, double success_fraction, double p, double q);
extern DELPHI_PACKAGE double __fastcall ContinuedFractionB(TIterateFuncPair* g, int bits);
extern DELPHI_PACKAGE double __fastcall IBetaFraction2(double a, double b, double x, double y, bool Normalized, System::PDouble Derivative);
extern DELPHI_PACKAGE double __fastcall IBetaPowerTerms(double a, double b, double x, double y, TXLSLanczos* Lcz, bool Normalized);
extern DELPHI_PACKAGE double __fastcall IbetaAStep(double a, double b, double x, double y, int k, bool Normalized, System::PDouble Derivative);
extern DELPHI_PACKAGE double __fastcall IBetaImp(double a, double b, double x, bool Inv, bool Normalized, System::PDouble Derivative);
extern DELPHI_PACKAGE double __fastcall FindIBetaInvFromTDist(double a, double p, double q, System::PDouble py);
extern DELPHI_PACKAGE double __fastcall TemmeMethod1IbetaInverse(double a, double b, double z);
extern DELPHI_PACKAGE double __fastcall NewtonRaphsonIterate(TIterateFuncPair* Iter, double guess, double min, double max, int digits, int &max_iter);
extern DELPHI_PACKAGE double __fastcall InverseBinomialCornishFisher(double n, double sf, double p, double q);
extern DELPHI_PACKAGE double __fastcall TemmeMethod2IBetaInverse(double a, double b, double z, double r, double theta);
extern DELPHI_PACKAGE double __fastcall TemmeMethod3IBetaInverse(double a, double b, double p, double q);
extern DELPHI_PACKAGE double __fastcall IBetaInvImp(double a, double b, double p, double q, System::PDouble py);
extern DELPHI_PACKAGE double __fastcall IBetaInv(double a, double b, double p);
extern DELPHI_PACKAGE double __fastcall IBetaC(double a, double b, double x);
extern DELPHI_PACKAGE double __fastcall IBeta(double a, double b, double x);
extern DELPHI_PACKAGE double __fastcall IBetaDerivativeImp(double a, double b, double x);
extern DELPHI_PACKAGE double __fastcall GammaPDerivativeImp(double a, double x);
extern DELPHI_PACKAGE double __fastcall erf_inv_imp(double p, double q);
extern DELPHI_PACKAGE double __fastcall erfc_inv(double z);
extern DELPHI_PACKAGE double __fastcall InverseStudentsTTailSeries(double df, double v);
extern DELPHI_PACKAGE double __fastcall InverseStudentsTBodySeries(double df, double u);
extern DELPHI_PACKAGE void __fastcall HandleZeroDerivative2(TIterateFuncPair* Iter, double &last_f0, double &f0, double &delta, double &res, double &guess, double &min, double &max);
extern DELPHI_PACKAGE void __fastcall HandleZeroDerivative3(TIterateFuncTriple* Iter, double &last_f0, double &f0, double &delta, double &res, double &guess, double &min, double &max);
extern DELPHI_PACKAGE double __fastcall HalleyIterate(TIterateFuncTriple* Iter, double guess, double min_, double max_, int digits, int &max_iter);
extern DELPHI_PACKAGE double __fastcall InverseStudentsTHill(double ndf, double u);
extern DELPHI_PACKAGE double __fastcall FindInverseS(double p, double q);
extern DELPHI_PACKAGE double __fastcall DiDonato_SN(double a, double x, unsigned N, double tolerance = 0.000000E+00);
extern DELPHI_PACKAGE double __fastcall LGammaImp(double z, TXLSLanczos* Lanczos, System::PInteger sign = (System::PInteger)(0x0));
extern DELPHI_PACKAGE double __fastcall FindInverseGamma(double a, double p, double q, System::PBoolean has_10_digits);
extern DELPHI_PACKAGE double __fastcall GammaPInvImp(double a, double p);
extern DELPHI_PACKAGE double __fastcall BetaCDF(double a, double b, double x, bool Inverse = false);
extern DELPHI_PACKAGE double __fastcall BetaPDF(double a, double b, double x);
extern DELPHI_PACKAGE double __fastcall BetaInvCDF(double a, double b, double x);
extern DELPHI_PACKAGE double __fastcall HypergeometricPdfFactorialImp(unsigned x, unsigned r, unsigned n, unsigned N_);
extern DELPHI_PACKAGE double __fastcall HypergeometricPdfPrimeImp(unsigned x, unsigned r, unsigned n, unsigned N_);
extern DELPHI_PACKAGE double __fastcall HypergeometricPdfLanczosImp(unsigned x, unsigned r, unsigned n, unsigned N_);
extern DELPHI_PACKAGE double __fastcall HypergeometricDistCDF(unsigned x, unsigned r, unsigned n, unsigned N_);
extern DELPHI_PACKAGE double __fastcall HypergeometricDistPDF(unsigned x, unsigned r, unsigned n, unsigned N_);
extern DELPHI_PACKAGE double __fastcall HypergeometricDistCDFImp(unsigned x, unsigned r, unsigned n, unsigned N_, bool invert);
extern DELPHI_PACKAGE double __fastcall HypergeometricDistPDFImp(unsigned x, unsigned r, unsigned n, unsigned N_);
extern DELPHI_PACKAGE double __fastcall BinomialCDF(unsigned k, unsigned n, double p);
extern DELPHI_PACKAGE double __fastcall BinomialCDF2(unsigned k, unsigned n, double p);
extern DELPHI_PACKAGE double __fastcall BinomialPDF(unsigned k, unsigned n, double p);
extern DELPHI_PACKAGE double __fastcall BinomialQuantile(int n, double p, double p2);
extern DELPHI_PACKAGE double __fastcall ChiSquaredDistributionCDF(double DegreesOfFreedom, double ChiSquare);
extern DELPHI_PACKAGE double __fastcall ChiSquaredDistributionPDF(double DegreesOfFreedom, double ChiSquare);
extern DELPHI_PACKAGE double __fastcall ChiSquaredDistributionInvPDF(double df, double x);
extern DELPHI_PACKAGE double __fastcall GaussInvPDF(double x, double mean);
extern DELPHI_PACKAGE double __fastcall ExponentialDistCDF(double x, double lambda);
extern DELPHI_PACKAGE double __fastcall ExponentialDistPDF(double x, double lambda);
extern DELPHI_PACKAGE double __fastcall GammaCDF(double x, double shape, double scale);
extern DELPHI_PACKAGE double __fastcall GammaPDF(double x, double shape, double scale);
extern DELPHI_PACKAGE double __fastcall GammaDistributionQuantile(double a, double b, double p);
extern DELPHI_PACKAGE double __fastcall NormalCDF(double x, double mean, double stdev);
extern DELPHI_PACKAGE double __fastcall NormalPDF(double x, double mean, double stdev);
extern DELPHI_PACKAGE double __fastcall LogNormalCDF(double x, double mean, double stdev);
extern DELPHI_PACKAGE double __fastcall NormalQuantile(double p, double mean, double stdev);
extern DELPHI_PACKAGE double __fastcall LogNormalPDF(double x, double mean, double stdev);
extern DELPHI_PACKAGE double __fastcall LogNormalCDFInv(double x, double mean, double stdev);
extern DELPHI_PACKAGE double __fastcall LogNormalQuantile(double p, double mean, double stdev);
extern DELPHI_PACKAGE double __fastcall NegBinomialCDF(double k, double r, double p);
extern DELPHI_PACKAGE double __fastcall NegBinomialPDF(double k, double r, double p);
extern DELPHI_PACKAGE double __fastcall PoissonCDF(double k, double mean);
extern DELPHI_PACKAGE double __fastcall PoissonPDF(double k, double mean);
extern DELPHI_PACKAGE double __fastcall StudentTDistCDF(double t, double DegreesOfFreedom);
extern DELPHI_PACKAGE double __fastcall StudentTDistPDF(double t, double DegreesOfFreedom);
extern DELPHI_PACKAGE double __fastcall WeibullCDF(double x, double shape, double scale);
extern DELPHI_PACKAGE double __fastcall WeibullPDF(double x, double shape, double scale);
extern DELPHI_PACKAGE double __fastcall InverseStudentsT(double df, double u, double v, System::PBoolean pexact = (System::PBoolean)(0x0));
extern DELPHI_PACKAGE double __fastcall ChiSquaredQuantile(double DegreesOfFreedom, double p);
extern DELPHI_PACKAGE double __fastcall FisherFDistCDF(double x, double df1, double df2);
extern DELPHI_PACKAGE double __fastcall FisherFDistPDF(double x, double df1, double df2);
extern DELPHI_PACKAGE double __fastcall FisherFDistQuantile(double p, double df1, double df2);
}	/* namespace Xlsmath5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSMATH5)
using namespace Xlsmath5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsmath5HPP
