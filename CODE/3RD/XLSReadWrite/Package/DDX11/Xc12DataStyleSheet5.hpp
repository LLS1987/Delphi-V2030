// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Xc12DataStyleSheet5.pas' rev: 35.00 (Windows)

#ifndef Xc12datastylesheet5HPP
#define Xc12datastylesheet5HPP

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
#include <Vcl.Graphics.hpp>
#include <Winapi.Windows.hpp>
#include <System.UITypes.hpp>
#include <xpgPUtils.hpp>
#include <xpgParseDrawingCommon.hpp>
#include <XLSUtils5.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Common5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xc12datastylesheet5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXc12BorderPr;
class DELPHICLASS TXc12ColorObj;
class DELPHICLASS TXc12ColorObjs;
class DELPHICLASS TXc12IndexColorObj;
class DELPHICLASS TXc12IndexColorObjs;
class DELPHICLASS TXc12GradientStop;
class DELPHICLASS TXc12GradientStopList;
class DELPHICLASS TXc12GradientFill;
class DELPHICLASS TXc12Fill;
class DELPHICLASS TXc12Fills;
class DELPHICLASS TXc12Border;
class DELPHICLASS TXc12Borders;
class DELPHICLASS TXc12CellAlignment;
class DELPHICLASS TXc12NumberFormat;
class DELPHICLASS TXc12NumberFormats;
class DELPHICLASS TXc12Font;
class DELPHICLASS TXc12Fonts;
struct TXc12FontRun;
struct TXc12PhoneticRun;
class DELPHICLASS TXc12XF;
class DELPHICLASS TXc12XFs;
class DELPHICLASS TXc12DXF;
class DELPHICLASS TXc12DXFs;
class DELPHICLASS TXc12CellStyle;
class DELPHICLASS TXc12CellStyles;
class DELPHICLASS TXc12TableStyleElement;
class DELPHICLASS TXc12TableStyleElements;
class DELPHICLASS TXc12TableStyle;
class DELPHICLASS TXc12TableStyles;
class DELPHICLASS TXc12XFEditor;
class DELPHICLASS TXc12DataStyleSheet;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TDiagLines : unsigned char { dlNone, dlUp, dlDown, dlBoth };

enum DECLSPEC_DENUM TXc12CellBorderStyle : unsigned char { cbsNone, cbsThin, cbsMedium, cbsDashed, cbsDotted, cbsThick, cbsDouble, cbsHair, cbsMediumDashed, cbsDashDot, cbsMediumDashDot, cbsDashDotDot, cbsMediumDashDotDot, cbsSlantedDashDot };

enum DECLSPEC_DENUM TXc12CellBorderOption : unsigned char { ecboDiagonalDown, ecboDiagonalUp, ecboOutline };

typedef System::Set<TXc12CellBorderOption, TXc12CellBorderOption::ecboDiagonalDown, TXc12CellBorderOption::ecboOutline> TXc12CellBorderOptions;

enum DECLSPEC_DENUM TXc12FillPattern : unsigned char { efpNone, efpSolid, efpMediumGray, efpDarkGray, efpLightGray, efpDarkHorizontal, efpDarkVertical, efpDarkDown, efpDarkUp, efpDarkGrid, efpDarkTrellis, efpLightHorizontal, efpLightVertical, efpLightDown, efpLightUp, efpLightGrid, efpLightTrellis, efpGray125, efpGray0625 };

enum DECLSPEC_DENUM TXc12GradientFillType : unsigned char { gftLinear, gftPath };

enum DECLSPEC_DENUM TXc12GradientFillCorners : unsigned char { gfcLeft, gfcRight, gfcTop, gfcBottom };

enum DECLSPEC_DENUM TXc12HorizAlignment : unsigned char { chaGeneral, chaLeft, chaCenter, chaRight, chaFill, chaJustify, chaCenterContinuous, chaDistributed };

enum DECLSPEC_DENUM TXc12VertAlignment : unsigned char { cvaTop, cvaCenter, cvaBottom, cvaJustify, cvaDistributed };

enum DECLSPEC_DENUM TXc12AlignmentOption : unsigned char { foWrapText, foShrinkToFit, foJustifyLastLine };

typedef System::Set<TXc12AlignmentOption, TXc12AlignmentOption::foWrapText, TXc12AlignmentOption::foJustifyLastLine> TXc12AlignmentOptions;

enum DECLSPEC_DENUM TXc12ReadOrder : unsigned char { xroContextDependent, xroLeftToRight, xroRightToLeft };

enum DECLSPEC_DENUM TXc12FontStyle : unsigned char { xfsBold, xfsItalic, xfsStrikeOut, xfsOutline, xfsShadow, xfsCondense, xfsExtend };

typedef System::Set<TXc12FontStyle, TXc12FontStyle::xfsBold, TXc12FontStyle::xfsExtend> TXc12FontStyles;

enum DECLSPEC_DENUM TXc12SubSuperscript : unsigned char { xssNone, xssSuperscript, xssSubscript };

enum DECLSPEC_DENUM TXc12Underline : unsigned char { xulNone, xulSingle, xulDouble, xulSingleAccount, xulDoubleAccount };

enum DECLSPEC_DENUM TXc12FontScheme : unsigned char { efsNone, efsMajor, efsMinor };

enum DECLSPEC_DENUM TXc12CellProtection : unsigned char { cpLocked, cpHidden };

typedef System::Set<TXc12CellProtection, TXc12CellProtection::cpLocked, TXc12CellProtection::cpHidden> TXc12CellProtections;

enum DECLSPEC_DENUM TXc12ApplyFormat : unsigned char { eafNumberFormat, eafFont, eafFill, eafBorder, eafAlignment, eafProtection };

typedef System::Set<TXc12ApplyFormat, TXc12ApplyFormat::eafNumberFormat, TXc12ApplyFormat::eafProtection> TXc12ApplyFormats;

enum DECLSPEC_DENUM TXc12TableStyleType : unsigned char { sttstUnknown };

typedef System::StaticArray<System::UnicodeString, 50> Xc12datastylesheet5__1;

typedef System::StaticArray<System::UnicodeString, 34> Xc12datastylesheet5__2;

typedef void __fastcall (__closure *TXLSPPIEvent)(/* out */ int &APPIX, /* out */ int &APPYY);

class PASCALIMPLEMENTATION TXc12BorderPr : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	unsigned __fastcall GetColorRGB();
	void __fastcall SetColorRGB(const unsigned Value);
	
protected:
	Xc12utils5::TXc12Color FColor;
	TXc12CellBorderStyle FStyle;
	
public:
	void __fastcall Clear();
	void __fastcall Assign(TXc12BorderPr* ABorderPr);
	bool __fastcall Equal(TXc12BorderPr* ABorderPr);
	unsigned __fastcall CalcHash();
	__property Xc12utils5::TXc12Color Color = {read=FColor, write=FColor};
	__property unsigned ColorRGB = {read=GetColorRGB, write=SetColorRGB, nodefault};
	__property TXc12CellBorderStyle Style = {read=FStyle, write=FStyle, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXc12BorderPr() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12BorderPr() { }
	
};


class PASCALIMPLEMENTATION TXc12ColorObj : public Xc12common5::TXLSStyleObject
{
	typedef Xc12common5::TXLSStyleObject inherited;
	
private:
	Xc12utils5::TXc12Color __fastcall GetColor();
	
protected:
	Xc12utils5::TXc12Color FColor;
	virtual void __fastcall CalcHash();
	
public:
	virtual bool __fastcall Equal(Xc12common5::TXLSStyleObject* AItem);
	void __fastcall Assign(TXc12ColorObj* AItem);
	__property Xc12utils5::TXc12Color Color = {read=GetColor};
public:
	/* TXLSStyleObject.Create */ inline __fastcall TXc12ColorObj(Xc12common5::TXLSStyleObjectList* AOwner) : Xc12common5::TXLSStyleObject(AOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12ColorObj() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12ColorObjs : public Xc12common5::TXLSStyleObjectList
{
	typedef Xc12common5::TXLSStyleObjectList inherited;
	
public:
	TXc12ColorObj* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TXc12ColorObj* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12ColorObjs();
	virtual void __fastcall SetIsDefault();
	HIDESBASE void __fastcall Clear();
	void __fastcall FixupColors();
	HIDESBASE TXc12ColorObj* __fastcall Add()/* overload */;
	HIDESBASE TXc12ColorObj* __fastcall Add(const Xc12utils5::TXc12Color &AColor)/* overload */;
	__property TXc12ColorObj* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXLSStyleObjectList.Destroy */ inline __fastcall virtual ~TXc12ColorObjs() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12IndexColorObj : public Xc12common5::TXLSStyleObject
{
	typedef Xc12common5::TXLSStyleObject inherited;
	
private:
	unsigned __fastcall GetRGB();
	void __fastcall SetRGB(const unsigned Value);
	
protected:
	unsigned FRGB;
	virtual void __fastcall CalcHash();
	
public:
	virtual bool __fastcall Equal(Xc12common5::TXLSStyleObject* AItem);
	void __fastcall Assign(TXc12IndexColorObj* AItem);
	__property unsigned RGB = {read=GetRGB, write=SetRGB, nodefault};
public:
	/* TXLSStyleObject.Create */ inline __fastcall TXc12IndexColorObj(Xc12common5::TXLSStyleObjectList* AOwner) : Xc12common5::TXLSStyleObject(AOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12IndexColorObj() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12IndexColorObjs : public Xc12common5::TXLSStyleObjectList
{
	typedef Xc12common5::TXLSStyleObjectList inherited;
	
public:
	TXc12IndexColorObj* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TXc12IndexColorObj* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12IndexColorObjs();
	virtual void __fastcall SetIsDefault();
	HIDESBASE void __fastcall Clear();
	HIDESBASE TXc12IndexColorObj* __fastcall Add()/* overload */;
	HIDESBASE TXc12IndexColorObj* __fastcall Add(int ARGB)/* overload */;
	__property TXc12IndexColorObj* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXLSStyleObjectList.Destroy */ inline __fastcall virtual ~TXc12IndexColorObjs() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXc12GradientStop : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Xc12utils5::TXc12Color __fastcall GetColor();
	double __fastcall GetPosition();
	void __fastcall SetColor(const Xc12utils5::TXc12Color &Value);
	void __fastcall SetPosition(const double Value);
	
protected:
	Xc12utils5::TXc12Color FColor;
	double FPosition;
	unsigned __fastcall CalcHash();
	
public:
	__property Xc12utils5::TXc12Color Color = {read=GetColor, write=SetColor};
	__property double Position = {read=GetPosition, write=SetPosition};
public:
	/* TObject.Create */ inline __fastcall TXc12GradientStop() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12GradientStop() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12GradientStopList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12GradientStop* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12GradientStop* __fastcall GetItems(int Index);
	
protected:
	unsigned __fastcall CalcHash();
	
public:
	bool __fastcall Equal(TXc12GradientStopList* AList);
	HIDESBASE TXc12GradientStop* __fastcall Add()/* overload */;
	HIDESBASE TXc12GradientStop* __fastcall Add(const Xc12utils5::TXc12Color &AColor, double APosition)/* overload */;
	__property TXc12GradientStop* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TObjectList.Create */ inline __fastcall TXc12GradientStopList()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TXc12GradientStopList(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12GradientStopList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXc12GradientFill : public Xc12common5::TXLSStyleObject
{
	typedef Xc12common5::TXLSStyleObject inherited;
	
private:
	TXc12GradientStopList* FStops;
	TXc12GradientFillType FGradientType;
	double FDegree;
	double FLeft;
	double FRight;
	double FTop;
	double FBottom;
	System::StaticArray<bool, 4> FCorners;
	void __fastcall SetBottom(const double Value);
	void __fastcall SetLeft(const double Value);
	void __fastcall SetRight(const double Value);
	void __fastcall SetTop(const double Value);
	bool __fastcall GetCorners(TXc12GradientFillCorners Index);
	void __fastcall SetCorners(TXc12GradientFillCorners Index, const bool Value);
	double __fastcall GetBottom();
	double __fastcall GetDegree();
	TXc12GradientFillType __fastcall GetGradientType();
	double __fastcall GetLeft();
	double __fastcall GetRight();
	TXc12GradientStopList* __fastcall GetStops();
	double __fastcall GetTop();
	void __fastcall SetDegree(const double Value);
	void __fastcall SetGradientType(const TXc12GradientFillType Value);
	
protected:
	virtual void __fastcall CalcHash();
	
public:
	__fastcall TXc12GradientFill();
	__fastcall virtual ~TXc12GradientFill();
	void __fastcall Clear();
	virtual bool __fastcall Equal(Xc12common5::TXLSStyleObject* AItem);
	void __fastcall Assign(TXc12GradientFill* AItem);
	__property TXc12GradientStopList* Stops = {read=GetStops};
	__property TXc12GradientFillType GradientType = {read=GetGradientType, write=SetGradientType, nodefault};
	__property double Degree = {read=GetDegree, write=SetDegree};
	__property double Left = {read=GetLeft, write=SetLeft};
	__property double Right = {read=GetRight, write=SetRight};
	__property double Top = {read=GetTop, write=SetTop};
	__property double Bottom = {read=GetBottom, write=SetBottom};
	__property bool Corners[TXc12GradientFillCorners Index] = {read=GetCorners, write=SetCorners};
};


class PASCALIMPLEMENTATION TXc12Fill : public Xc12common5::TXLSStyleObject
{
	typedef Xc12common5::TXLSStyleObject inherited;
	
private:
	bool __fastcall GetIsGradientFill();
	void __fastcall SetIsGradientFill(const bool Value);
	Xc12utils5::TXc12Color __fastcall GetBgColor();
	Xc12utils5::TXc12Color __fastcall GetFgColor();
	TXc12GradientFill* __fastcall GetGradientFill();
	TXc12FillPattern __fastcall GetPatternType();
	void __fastcall SetBgColor(const Xc12utils5::TXc12Color &Value);
	void __fastcall SetFgColor(const Xc12utils5::TXc12Color &Value);
	void __fastcall SetPatternType(const TXc12FillPattern Value);
	Xc12utils5::PXc12Color __fastcall GetPBgColor();
	Xc12utils5::PXc12Color __fastcall GetPFgColor();
	
protected:
	TXc12GradientFill* FGradientFill;
	TXc12FillPattern FPatternType;
	Xc12utils5::TXc12Color FFgColor;
	Xc12utils5::TXc12Color FBgColor;
	virtual void __fastcall CalcHash();
	
public:
	__fastcall virtual ~TXc12Fill();
	virtual System::UnicodeString __fastcall AsString(const int AIndent = 0x0);
	void __fastcall Clear();
	virtual bool __fastcall Equal(Xc12common5::TXLSStyleObject* AItem);
	void __fastcall Assign(TXc12Fill* AItem);
	__property bool IsGradientFill = {read=GetIsGradientFill, write=SetIsGradientFill, nodefault};
	__property TXc12GradientFill* GradientFill = {read=GetGradientFill};
	__property TXc12FillPattern PatternType = {read=GetPatternType, write=SetPatternType, nodefault};
	__property Xc12utils5::TXc12Color FgColor = {read=GetFgColor, write=SetFgColor};
	__property Xc12utils5::TXc12Color BgColor = {read=GetBgColor, write=SetBgColor};
	__property Xc12utils5::PXc12Color PFgColor = {read=GetPFgColor};
	__property Xc12utils5::PXc12Color PBgColor = {read=GetPBgColor};
public:
	/* TXLSStyleObject.Create */ inline __fastcall TXc12Fill(Xc12common5::TXLSStyleObjectList* AOwner) : Xc12common5::TXLSStyleObject(AOwner) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Fills : public Xc12common5::TXLSStyleObjectList
{
	typedef Xc12common5::TXLSStyleObjectList inherited;
	
public:
	TXc12Fill* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TXc12Fill* __fastcall GetItems(int Index);
	
public:
	virtual void __fastcall SetIsDefault();
	HIDESBASE void __fastcall Clear();
	TXc12Fill* __fastcall DefaultFill();
	HIDESBASE TXc12Fill* __fastcall Find(TXc12Fill* AFill);
	HIDESBASE TXc12Fill* __fastcall Add()/* overload */;
	HIDESBASE void __fastcall Add(TXc12Fill* const AFill)/* overload */;
	void __fastcall FixupColors();
	__property TXc12Fill* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXLSStyleObjectList.Create */ inline __fastcall TXc12Fills(const int AHashSize) : Xc12common5::TXLSStyleObjectList(AHashSize) { }
	/* TXLSStyleObjectList.Destroy */ inline __fastcall virtual ~TXc12Fills() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Border : public Xc12common5::TXLSStyleObject
{
	typedef Xc12common5::TXLSStyleObject inherited;
	
private:
	TXc12CellBorderOptions __fastcall GetOptions();
	void __fastcall SetOptions(const TXc12CellBorderOptions Value);
	
protected:
	TXc12CellBorderOptions FOptions;
	TXc12BorderPr* FLeft;
	TXc12BorderPr* FTop;
	TXc12BorderPr* FRight;
	TXc12BorderPr* FBottom;
	TXc12BorderPr* FDiagonal;
	TXc12BorderPr* FHorizontal;
	TXc12BorderPr* FVertical;
	virtual void __fastcall CalcHash();
	System::UnicodeString __fastcall AsStringBorder(const int AIndent, TXc12BorderPr* const ABorder);
	
public:
	__fastcall TXc12Border(Xc12common5::TXLSStyleObjectList* AOwner);
	__fastcall virtual ~TXc12Border();
	virtual System::UnicodeString __fastcall AsString(const int AIndent = 0x0);
	void __fastcall Clear();
	virtual bool __fastcall Equal(Xc12common5::TXLSStyleObject* AItem);
	void __fastcall Assign(TXc12Border* AItem);
	__property TXc12CellBorderOptions Options = {read=GetOptions, write=SetOptions, nodefault};
	__property TXc12BorderPr* Left = {read=FLeft};
	__property TXc12BorderPr* Top = {read=FTop};
	__property TXc12BorderPr* Right = {read=FRight};
	__property TXc12BorderPr* Bottom = {read=FBottom};
	__property TXc12BorderPr* Diagonal = {read=FDiagonal};
	__property TXc12BorderPr* Horizontal = {read=FHorizontal};
	__property TXc12BorderPr* Vertical = {read=FVertical};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Borders : public Xc12common5::TXLSStyleObjectList
{
	typedef Xc12common5::TXLSStyleObjectList inherited;
	
public:
	TXc12Border* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TXc12Border* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12Borders();
	virtual void __fastcall SetIsDefault();
	HIDESBASE void __fastcall Clear();
	TXc12Border* __fastcall DefaultBorder();
	HIDESBASE TXc12Border* __fastcall Find(TXc12Border* ABorder);
	HIDESBASE TXc12Border* __fastcall Add()/* overload */;
	__property TXc12Border* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXLSStyleObjectList.Destroy */ inline __fastcall virtual ~TXc12Borders() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12CellAlignment : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TXc12HorizAlignment __fastcall GetHorizAlignment();
	int __fastcall GetIndent();
	TXc12AlignmentOptions __fastcall GetOptions();
	TXc12ReadOrder __fastcall GetReadingOrder();
	int __fastcall GetRelativeIndent();
	int __fastcall GetRotation();
	TXc12VertAlignment __fastcall GetVertAlignment();
	void __fastcall SetHorizAlignment(const TXc12HorizAlignment Value);
	void __fastcall SetIndent(const int Value);
	void __fastcall SetOptions(const TXc12AlignmentOptions Value);
	void __fastcall SetReadingOrder(const TXc12ReadOrder Value);
	void __fastcall SetRelativeIndent(const int Value);
	void __fastcall SetRotation(const int Value);
	void __fastcall SetVertAlignment(const TXc12VertAlignment Value);
	
protected:
	TXc12HorizAlignment FHorizAlignment;
	TXc12VertAlignment FVertAlignment;
	int FRotation;
	TXc12AlignmentOptions FOptions;
	int FIndent;
	int FRelativeIndent;
	TXc12ReadOrder FReadingOrder;
	unsigned FHash;
	bool FHashValid;
	void __fastcall CalcHash();
	
public:
	__fastcall TXc12CellAlignment();
	System::UnicodeString __fastcall AsString();
	bool __fastcall Equal(TXc12CellAlignment* AObject);
	void __fastcall Assign(TXc12CellAlignment* AObject);
	bool __fastcall IsWrapText();
	unsigned __fastcall HashKey();
	__property TXc12HorizAlignment HorizAlignment = {read=GetHorizAlignment, write=SetHorizAlignment, nodefault};
	__property TXc12VertAlignment VertAlignment = {read=GetVertAlignment, write=SetVertAlignment, nodefault};
	__property int Rotation = {read=GetRotation, write=SetRotation, nodefault};
	__property TXc12AlignmentOptions Options = {read=GetOptions, write=SetOptions, nodefault};
	__property int Indent = {read=GetIndent, write=SetIndent, nodefault};
	__property int RelativeIndent = {read=GetRelativeIndent, write=SetRelativeIndent, nodefault};
	__property TXc12ReadOrder ReadingOrder = {read=GetReadingOrder, write=SetReadingOrder, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12CellAlignment() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12NumberFormat : public Xc12common5::TXLSStyleObject
{
	typedef Xc12common5::TXLSStyleObject inherited;
	
private:
	void __fastcall SetValue(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetValue();
	
protected:
	System::UnicodeString FValue;
	bool FIsDateTime;
	bool FStdRedefined;
	virtual void __fastcall CalcHash();
	
public:
	virtual System::UnicodeString __fastcall AsString(const int AIndent = 0x0);
	virtual bool __fastcall Equal(Xc12common5::TXLSStyleObject* AItem);
	void __fastcall Assign(TXc12NumberFormat* AItem);
	bool __fastcall Assigned();
	bool __fastcall IsDateTime();
	bool __fastcall IsDate();
	bool __fastcall IsTime();
	__property System::UnicodeString Value = {read=GetValue, write=SetValue};
	__property bool StdRedefined = {read=FStdRedefined, write=FStdRedefined, nodefault};
public:
	/* TXLSStyleObject.Create */ inline __fastcall TXc12NumberFormat(Xc12common5::TXLSStyleObjectList* AOwner) : Xc12common5::TXLSStyleObject(AOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12NumberFormat() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12NumberFormats : public Xc12common5::TXLSStyleObjectList
{
	typedef Xc12common5::TXLSStyleObjectList inherited;
	
public:
	TXc12NumberFormat* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TXc12NumberFormat* __fastcall GetItems(int Index);
	
protected:
	void __fastcall AddDefault(System::UnicodeString AValue, bool ALocked);
	
public:
	__fastcall TXc12NumberFormats();
	HIDESBASE TXc12NumberFormat* __fastcall Find(TXc12NumberFormat* ANumFmt);
	HIDESBASE void __fastcall Clear();
	virtual void __fastcall SetIsDefault();
	TXc12NumberFormat* __fastcall DefaultNumFmt();
	HIDESBASE TXc12NumberFormat* __fastcall Add()/* overload */;
	HIDESBASE TXc12NumberFormat* __fastcall Add(System::UnicodeString AValue, int AIndex)/* overload */;
	int __fastcall BuiltInCount();
	__property TXc12NumberFormat* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXLSStyleObjectList.Destroy */ inline __fastcall virtual ~TXc12NumberFormats() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXc12Font : public Xc12common5::TXLSStyleObject
{
	typedef Xc12common5::TXLSStyleObject inherited;
	
private:
	int __fastcall GetCharset();
	Xc12utils5::TXc12Color __fastcall GetColor();
	int __fastcall GetFamily();
	System::UnicodeString __fastcall GetName();
	TXc12FontScheme __fastcall GetScheme();
	double __fastcall GetSize();
	TXc12FontStyles __fastcall GetStyle();
	TXc12SubSuperscript __fastcall GetSubSuperscript();
	TXc12Underline __fastcall GetUnderline();
	void __fastcall SetCharset(const int Value);
	void __fastcall SetColor(const Xc12utils5::TXc12Color &Value);
	void __fastcall SetFamily(const int Value);
	void __fastcall SetName(const System::UnicodeString Value);
	void __fastcall SetScheme(const TXc12FontScheme Value);
	void __fastcall SetSize(const double Value);
	void __fastcall SetStyle(const TXc12FontStyles Value);
	void __fastcall SetSubSuperscript(const TXc12SubSuperscript Value);
	void __fastcall SetUnderline(const TXc12Underline Value);
	Xc12utils5::PXc12Color __fastcall GetPColor();
	
protected:
	System::UnicodeString FName;
	int FCharset;
	int FFamily;
	TXc12FontStyles FStyle;
	TXc12Underline FUnderline;
	TXc12SubSuperscript FSubSuperscript;
	Xc12utils5::TXc12Color FColor;
	double FSize;
	TXc12FontScheme FScheme;
	unsigned FHandle;
	tagLOGFONTW FLF;
	virtual void __fastcall CalcHash();
	
public:
	__fastcall virtual ~TXc12Font();
	virtual System::UnicodeString __fastcall AsString(const int AIndent = 0x0);
	void __fastcall Clear();
	void __fastcall Use();
	virtual bool __fastcall Equal(Xc12common5::TXLSStyleObject* AItem)/* overload */;
	bool __fastcall EqualTFont(Vcl::Graphics::TFont* AItem);
	void __fastcall Assign(TXc12Font* AItem)/* overload */;
	void __fastcall Assign(Vcl::Graphics::TFont* AItem)/* overload */;
	void __fastcall Assign(Xpgparsedrawingcommon::TCT_TextCharacterProperties* ARPr)/* overload */;
	void __fastcall CopyToTFont(Vcl::Graphics::TFont* ADest);
	System::UnicodeString __fastcall AsCSS(const bool AWriteSelector = true);
	System::UnicodeString __fastcall CSSSelector();
	int __fastcall Width();
	void __fastcall CopyToLOGFONT(tagLOGFONTW &Dest, unsigned &FontColor);
	int __fastcall GetHandle(int APixelsPerInch);
	void __fastcall DeleteHandle();
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property int Charset = {read=GetCharset, write=SetCharset, nodefault};
	__property int Family = {read=GetFamily, write=SetFamily, nodefault};
	__property TXc12FontStyles Style = {read=GetStyle, write=SetStyle, nodefault};
	__property TXc12Underline Underline = {read=GetUnderline, write=SetUnderline, nodefault};
	__property TXc12SubSuperscript SubSuperscript = {read=GetSubSuperscript, write=SetSubSuperscript, nodefault};
	__property Xc12utils5::TXc12Color Color = {read=GetColor, write=SetColor};
	__property Xc12utils5::PXc12Color PColor = {read=GetPColor};
	__property double Size = {read=GetSize, write=SetSize};
	__property TXc12FontScheme Scheme = {read=GetScheme, write=SetScheme, nodefault};
public:
	/* TXLSStyleObject.Create */ inline __fastcall TXc12Font(Xc12common5::TXLSStyleObjectList* AOwner) : Xc12common5::TXLSStyleObject(AOwner) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Fonts : public Xc12common5::TXLSStyleObjectList
{
	typedef Xc12common5::TXLSStyleObjectList inherited;
	
public:
	TXc12Font* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TXc12Font* __fastcall GetItems(int Index);
	TXc12Font* __fastcall GetDefaultFont();
	
protected:
	int FStdFontWidth;
	int FStdFontHeight;
	void __fastcall CalcStdFontWidthHeight();
	
public:
	__fastcall TXc12Fonts();
	__fastcall virtual ~TXc12Fonts();
	void __fastcall FixupColors();
	virtual void __fastcall SetIsDefault();
	HIDESBASE void __fastcall Clear();
	void __fastcall DeleteHandles();
	TXc12Font* __fastcall MakeCommentFont(const bool ABold)/* overload */;
	TXc12Font* __fastcall MakeCommentFont(const System::UnicodeString AName, int ASize, bool ABold, bool AItalic)/* overload */;
	HIDESBASE TXc12Font* __fastcall Find(Vcl::Graphics::TFont* AFont)/* overload */;
	HIDESBASE TXc12Font* __fastcall Find(TXc12Font* AFont)/* overload */;
	HIDESBASE TXc12Font* __fastcall Add()/* overload */;
	HIDESBASE void __fastcall Add(TXc12Font* AFont)/* overload */;
	__property TXc12Font* Items[int Index] = {read=GetItems/*, default*/};
	__property TXc12Font* DefaultFont = {read=GetDefaultFont};
};

#pragma pack(pop)

typedef TXc12FontRun *PXc12FontRun;

struct DECLSPEC_DRECORD TXc12FontRun
{
public:
	int Index;
	TXc12Font* Font;
};


typedef System::DynamicArray<TXc12FontRun> TXc12DynFontRunArray;

typedef System::StaticArray<TXc12FontRun, 65536> TXc12FontRunArray;

typedef TXc12FontRunArray *PXc12FontRunArray;

struct DECLSPEC_DRECORD TXc12PhoneticRun
{
public:
	int Sb;
	int Eb;
	System::UnicodeString Text;
};


typedef System::DynamicArray<TXc12PhoneticRun> TXc12DynPhoneticRunArray;

typedef System::StaticArray<TXc12PhoneticRun, 65536> TXc12PhoneticRunArray;

typedef TXc12PhoneticRunArray *PXc12PhoneticRunArray;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12XF : public Xc12common5::TXLSStyleObject
{
	typedef Xc12common5::TXLSStyleObject inherited;
	
private:
	void __fastcall SetBorder(TXc12Border* const Value);
	void __fastcall SetFill(TXc12Fill* const Value);
	void __fastcall SetFont(TXc12Font* const Value);
	void __fastcall SetNumFmt(TXc12NumberFormat* const Value);
	void __fastcall SetXF(TXc12XF* const Value);
	TXc12CellAlignment* __fastcall GetAlignment();
	TXc12ApplyFormats __fastcall GetApply();
	TXc12Border* __fastcall GetBorder();
	TXc12Fill* __fastcall GetFill();
	TXc12Font* __fastcall GetFont();
	bool __fastcall GetPivotButton();
	TXc12CellProtections __fastcall GetProtection();
	bool __fastcall GetQuotePrefix();
	TXc12XF* __fastcall GetXF();
	void __fastcall SetApply(const TXc12ApplyFormats Value);
	void __fastcall SetPivotButton(const bool Value);
	void __fastcall SetProtection(const TXc12CellProtections Value);
	void __fastcall SetQuotePrefix(const bool Value);
	TXc12NumberFormat* __fastcall GetNumFmt();
	
protected:
	TXc12CellAlignment* FAlignment;
	TXc12CellProtections FProtection;
	TXc12NumberFormat* FNumFmt;
	TXc12Font* FFont;
	TXc12Border* FBorder;
	TXc12Fill* FFill;
	TXc12XF* FXF;
	TXc12ApplyFormats FApply;
	bool FQuotePrefix;
	bool FPivotButton;
	System::Word FE97XfData1;
	System::UnicodeString __fastcall GetCSSBorder(TXc12BorderPr* const ABorder);
	virtual void __fastcall CalcHash();
	
public:
	__fastcall TXc12XF(Xc12common5::TXLSStyleObjectList* AOwner);
	__fastcall virtual ~TXc12XF();
	virtual System::UnicodeString __fastcall AsString(const int AIndent = 0x0);
	bool __fastcall IsDefault();
	System::UnicodeString __fastcall AsCSS();
	System::UnicodeString __fastcall BordersAsCSS();
	System::UnicodeString __fastcall CSSSelector();
	virtual bool __fastcall Equal(Xc12common5::TXLSStyleObject* AItem);
	void __fastcall Assign(TXc12XF* const AStyle);
	void __fastcall AssignProps(TXc12XF* const AStyle);
	__property TXc12CellAlignment* Alignment = {read=GetAlignment};
	__property TXc12CellProtections Protection = {read=GetProtection, write=SetProtection, nodefault};
	__property TXc12NumberFormat* NumFmt = {read=GetNumFmt, write=SetNumFmt};
	__property TXc12Font* Font = {read=GetFont, write=SetFont};
	__property TXc12Fill* Fill = {read=GetFill, write=SetFill};
	__property TXc12Border* Border = {read=GetBorder, write=SetBorder};
	__property TXc12XF* XF = {read=GetXF, write=SetXF};
	__property TXc12ApplyFormats Apply = {read=GetApply, write=SetApply, nodefault};
	__property System::Word E97XfData1 = {read=FE97XfData1, write=FE97XfData1, nodefault};
	__property bool QuotePrefix = {read=GetQuotePrefix, write=SetQuotePrefix, nodefault};
	__property bool PivotButton = {read=GetPivotButton, write=SetPivotButton, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12XFs : public Xc12common5::TXLSStyleObjectList
{
	typedef Xc12common5::TXLSStyleObjectList inherited;
	
public:
	TXc12XF* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TXc12XF* __fastcall GetItems(int Index);
	
protected:
	TXc12DataStyleSheet* FOwner;
	
public:
	__fastcall TXc12XFs(TXc12DataStyleSheet* AOwner);
	__fastcall virtual ~TXc12XFs();
	TXc12XF* __fastcall DefaultXF();
	virtual void __fastcall SetIsDefault();
	HIDESBASE void __fastcall Clear(TXc12DataStyleSheet* AOwner)/* overload */;
	TXc12XF* __fastcall AddOrGetFree();
	void __fastcall FreeAndNil(TXc12XF* AXF);
	HIDESBASE TXc12XF* __fastcall Add()/* overload */;
	HIDESBASE int __fastcall Add(TXc12XF* AStyle)/* overload */;
	TXc12XF* __fastcall CopyAndAdd(TXc12XF* AStyle);
	HIDESBASE TXc12XF* __fastcall Find(TXc12XF* AStyle);
	TXc12XF* __fastcall AddExtern(TXc12XF* const AStyle);
	__property TXc12XF* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DXF : public Xc12common5::TXLSStyleObject
{
	typedef Xc12common5::TXLSStyleObject inherited;
	
private:
	TXc12CellAlignment* __fastcall GetAlignment();
	TXc12Border* __fastcall GetBorder();
	TXc12Fill* __fastcall GetFill();
	TXc12Font* __fastcall GetFont();
	TXc12NumberFormat* __fastcall GetNumFmt();
	TXc12CellProtections __fastcall GetProtection();
	
protected:
	TXc12Font* FFont;
	TXc12NumberFormat* FNumFmt;
	TXc12Fill* FFill;
	TXc12Border* FBorder;
	TXc12CellAlignment* FAlignment;
	TXc12CellProtections FProtection;
	virtual void __fastcall CalcHash();
	
public:
	__fastcall virtual ~TXc12DXF();
	virtual bool __fastcall Equal(Xc12common5::TXLSStyleObject* AItem);
	void __fastcall Assign(TXc12DXF* AItem);
	TXc12Font* __fastcall AddFont();
	TXc12NumberFormat* __fastcall AddNumFmt();
	TXc12Fill* __fastcall AddFill();
	TXc12CellAlignment* __fastcall AddAlignment();
	TXc12Border* __fastcall AddBorder();
	__property TXc12Font* Font = {read=GetFont};
	__property TXc12NumberFormat* NumFmt = {read=GetNumFmt};
	__property TXc12Fill* Fill = {read=GetFill};
	__property TXc12CellAlignment* Alignment = {read=GetAlignment};
	__property TXc12Border* Border = {read=GetBorder};
	__property TXc12CellProtections Protection = {read=GetProtection, write=FProtection, nodefault};
public:
	/* TXLSStyleObject.Create */ inline __fastcall TXc12DXF(Xc12common5::TXLSStyleObjectList* AOwner) : Xc12common5::TXLSStyleObject(AOwner) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12DXFs : public Xc12common5::TXLSStyleObjectList
{
	typedef Xc12common5::TXLSStyleObjectList inherited;
	
public:
	TXc12DXF* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TXc12DXF* __fastcall GetItems(int Index);
	
protected:
	TXc12DataStyleSheet* FOwner;
	
public:
	__fastcall TXc12DXFs(TXc12DataStyleSheet* AOwner);
	virtual void __fastcall SetIsDefault();
	HIDESBASE void __fastcall Clear();
	HIDESBASE TXc12DXF* __fastcall Find(TXc12DXF* ADXF);
	HIDESBASE TXc12DXF* __fastcall Add()/* overload */;
	HIDESBASE int __fastcall Add(TXc12DXF* const AStyle)/* overload */;
	__property TXc12DataStyleSheet* Owner = {read=FOwner};
	__property TXc12DXF* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXLSStyleObjectList.Destroy */ inline __fastcall virtual ~TXc12DXFs() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12CellStyle : public Xc12common5::TXLSStyleObject
{
	typedef Xc12common5::TXLSStyleObject inherited;
	
private:
	int __fastcall GetBuiltInId();
	bool __fastcall GetCustomBuiltIn();
	bool __fastcall GetHidden();
	int __fastcall GetLevel();
	System::UnicodeString __fastcall GetName();
	TXc12XF* __fastcall GetXF();
	void __fastcall SetBuiltInId(const int Value);
	void __fastcall SetCustomBuiltIn(const bool Value);
	void __fastcall SetHidden(const bool Value);
	void __fastcall SetLevel(const int Value);
	void __fastcall SetName(const System::UnicodeString Value);
	void __fastcall SetXF(TXc12XF* const Value);
	
protected:
	int FBuiltInId;
	bool FCustomBuiltIn;
	bool FHidden;
	int FLevel;
	System::UnicodeString FName;
	TXc12XF* FXF;
	virtual void __fastcall CalcHash();
	
public:
	virtual bool __fastcall Equal(Xc12common5::TXLSStyleObject* AItem);
	void __fastcall Assign(TXc12CellStyle* AItem);
	__property int BuiltInId = {read=GetBuiltInId, write=SetBuiltInId, nodefault};
	__property bool CustomBuiltIn = {read=GetCustomBuiltIn, write=SetCustomBuiltIn, nodefault};
	__property bool Hidden = {read=GetHidden, write=SetHidden, nodefault};
	__property int Level = {read=GetLevel, write=SetLevel, nodefault};
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property TXc12XF* XF = {read=GetXF, write=SetXF};
public:
	/* TXLSStyleObject.Create */ inline __fastcall TXc12CellStyle(Xc12common5::TXLSStyleObjectList* AOwner) : Xc12common5::TXLSStyleObject(AOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12CellStyle() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12CellStyles : public Xc12common5::TXLSStyleObjectList
{
	typedef Xc12common5::TXLSStyleObjectList inherited;
	
public:
	TXc12CellStyle* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TXc12CellStyle* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12CellStyles();
	virtual void __fastcall SetIsDefault();
	HIDESBASE void __fastcall Clear();
	HIDESBASE TXc12CellStyle* __fastcall Find(System::UnicodeString AName);
	HIDESBASE TXc12CellStyle* __fastcall Add();
	TXc12CellStyle* __fastcall AddOrGet(System::UnicodeString AName);
	__property TXc12CellStyle* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXLSStyleObjectList.Destroy */ inline __fastcall virtual ~TXc12CellStyles() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12TableStyleElement : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TXc12DXF* __fastcall GetDXF();
	int __fastcall GetSize();
	TXc12TableStyleType __fastcall GetType();
	void __fastcall SetDXf(TXc12DXF* const Value);
	void __fastcall SetSize(const int Value);
	void __fastcall SetType(const TXc12TableStyleType Value);
	
protected:
	TXc12TableStyleType FType;
	int FSize;
	TXc12DXF* FDXF;
	
public:
	__fastcall TXc12TableStyleElement();
	void __fastcall Clear();
	bool __fastcall Equal(TXc12TableStyleElement* AItem);
	void __fastcall Assign(TXc12TableStyleElement* AItem);
	__property TXc12TableStyleType Type_ = {read=GetType, write=SetType, nodefault};
	__property int Size = {read=GetSize, write=SetSize, nodefault};
	__property TXc12DXF* DXF = {read=GetDXF, write=SetDXf};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12TableStyleElement() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12TableStyleElements : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12TableStyleElement* operator[](int Index) { return this->Items[Index]; }
	
protected:
	TXc12TableStyleElement* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12TableStyleElements();
	HIDESBASE TXc12TableStyleElement* __fastcall Add();
	__property TXc12TableStyleElement* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12TableStyleElements() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12TableStyle : public Xc12common5::TXLSStyleObject
{
	typedef Xc12common5::TXLSStyleObject inherited;
	
private:
	System::UnicodeString __fastcall GetName();
	bool __fastcall GetPivot();
	bool __fastcall GetTable();
	void __fastcall SetName(const System::UnicodeString Value);
	void __fastcall SetPivot(const bool Value);
	void __fastcall SetTable(const bool Value);
	TXc12TableStyleElements* __fastcall GetTableStyleElements();
	
protected:
	System::UnicodeString FName;
	bool FPivot;
	bool FTable;
	TXc12TableStyleElements* FTableStyleElements;
	virtual void __fastcall CalcHash();
	
public:
	__fastcall TXc12TableStyle();
	__fastcall virtual ~TXc12TableStyle();
	void __fastcall Clear();
	void __fastcall Assign(TXc12TableStyle* AItem);
	virtual bool __fastcall Equal(Xc12common5::TXLSStyleObject* AItem);
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property bool Pivot = {read=GetPivot, write=SetPivot, nodefault};
	__property bool Table = {read=GetTable, write=SetTable, nodefault};
	__property TXc12TableStyleElements* TableStyleElements = {read=GetTableStyleElements};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12TableStyles : public Xc12common5::TXLSStyleObjectList
{
	typedef Xc12common5::TXLSStyleObjectList inherited;
	
public:
	TXc12TableStyle* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TXc12TableStyle* __fastcall GetItems(int Index);
	
protected:
	System::UnicodeString FDefaultTableStyle;
	System::UnicodeString FDefaultPivotStyle;
	
public:
	__fastcall TXc12TableStyles();
	HIDESBASE void __fastcall Clear();
	virtual void __fastcall SetIsDefault();
	HIDESBASE TXc12TableStyle* __fastcall Add();
	__property System::UnicodeString DefaultTableStyle = {read=FDefaultTableStyle, write=FDefaultTableStyle};
	__property System::UnicodeString DefaultPivotStyle = {read=FDefaultPivotStyle, write=FDefaultPivotStyle};
	__property TXc12TableStyle* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXLSStyleObjectList.Destroy */ inline __fastcall virtual ~TXc12TableStyles() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12XFEditor : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall SetFontSize(const double Value);
	void __fastcall SetFontCharset(const System::Uitypes::TFontCharset Value);
	void __fastcall SetFontColorRGB(const unsigned Value);
	void __fastcall SetFontFamily(const int Value);
	void __fastcall SetFontName(const System::UnicodeString Value);
	void __fastcall SetFontStyle(const TXc12FontStyles Value);
	void __fastcall SetFontSubSuperScript(const TXc12SubSuperscript Value);
	void __fastcall SetFontUnderline(const TXc12Underline Value);
	void __fastcall SetFillColorRGB(const unsigned Value);
	void __fastcall SetFillBgColorRGB(const unsigned Value);
	void __fastcall SetFillColor(const Xc12utils5::TXc12Color &Value);
	void __fastcall SetFillBgColor(const Xc12utils5::TXc12Color &Value);
	void __fastcall SetFillPattern(const TXc12FillPattern Value);
	void __fastcall SetNumberFormat(const System::UnicodeString Value);
	void __fastcall SetBorderBottomColor(const Xc12utils5::TXc12Color &Value);
	void __fastcall SetBorderBottomColorRGB(const unsigned Value);
	void __fastcall SetBorderBottomStyle(const TXc12CellBorderStyle Value);
	void __fastcall SetBorderDiagColor(const Xc12utils5::TXc12Color &Value);
	void __fastcall SetBorderDiagColorRGB(const unsigned Value);
	void __fastcall SetBorderDiagStyle(const TXc12CellBorderStyle Value);
	void __fastcall SetBorderLeftColor(const Xc12utils5::TXc12Color &Value);
	void __fastcall SetBorderLeftColorRGB(const unsigned Value);
	void __fastcall SetBorderLeftStyle(const TXc12CellBorderStyle Value);
	void __fastcall SetBorderRightColor(const Xc12utils5::TXc12Color &Value);
	void __fastcall SetBorderRightColorRGB(const unsigned Value);
	void __fastcall SetBorderRightStyle(const TXc12CellBorderStyle Value);
	void __fastcall SetBorderTopColor(const Xc12utils5::TXc12Color &Value);
	void __fastcall SetBorderTopColorRGB(const unsigned Value);
	void __fastcall SetBorderTopStyle(const TXc12CellBorderStyle Value);
	void __fastcall SetProtectionHidden(const bool Value);
	void __fastcall SetProtectionLocked(const bool Value);
	void __fastcall SetAlignHoriz(const TXc12HorizAlignment Value);
	void __fastcall SetAlignIndent(const int Value);
	void __fastcall SetAlignOptions(const TXc12AlignmentOptions Value);
	void __fastcall SetAlignReadingOrder(const TXc12ReadOrder Value);
	void __fastcall SetAlignRelativeIndent(const int Value);
	void __fastcall SetAlignRotation(const int Value);
	void __fastcall SetAlignVert(const TXc12VertAlignment Value);
	
protected:
	TXc12DataStyleSheet* FStyles;
	TXc12XF* FXF;
	TXc12XF* FOrigXF;
	TXc12XF* FCmpXF;
	TXc12NumberFormat* FCmpNumFmt;
	TXc12Font* FCmpFont;
	TXc12Fill* FCmpFill;
	TXc12Border* FCmpBorder;
	bool FProtectChanged;
	bool FAlignChanged;
	bool FNumFmtChanged;
	bool FFontChanged;
	bool FFillChanged;
	bool FBorderChanged;
	int FCompactCount;
	void __fastcall DoFontChanged();
	void __fastcall DoFillChanged();
	void __fastcall DoBorderChanged();
	void __fastcall DoAlignChanged();
	void __fastcall DoCompactStyles(Xc12common5::TXLSStyleObjectList* AStyles);
	void __fastcall DoLockStyles(Xc12common5::TXLSStyleObjectList* AStyles);
	
public:
	__fastcall TXc12XFEditor(TXc12DataStyleSheet* AStyleSheet);
	__fastcall virtual ~TXc12XFEditor();
	TXc12XF* __fastcall UseDefault();
	void __fastcall UseStyle(const int AIndex)/* overload */;
	void __fastcall UseStyle(TXc12XF* AXF)/* overload */;
	void __fastcall FreeStyle(const int AIndex)/* overload */;
	void __fastcall FreeStyle(TXc12XF* AXF)/* overload */;
	void __fastcall DecStyle(const int AIndex);
	void __fastcall UseFont(TXc12Font* AFont);
	void __fastcall UseFonts(TXc12DynFontRunArray AFonts);
	TXc12Font* __fastcall UseRequiredFont(TXc12Font* AFont);
	void __fastcall FreeFont(TXc12Font* AFont);
	void __fastcall FreeFonts(TXc12DynFontRunArray AFonts)/* overload */;
	void __fastcall FreeFonts(PXc12FontRunArray AFonts, const int ACount)/* overload */;
	void __fastcall UseStyleStyle(const int AIndex);
	void __fastcall BeginEdit(TXc12XF* AXF);
	TXc12XF* __fastcall EndEdit();
	void __fastcall CompactStyles();
	void __fastcall LockAll();
	__property System::UnicodeString FontName = {write=SetFontName};
	__property System::Uitypes::TFontCharset FontCharset = {write=SetFontCharset, nodefault};
	__property int FontFamily = {write=SetFontFamily, nodefault};
	__property unsigned FontColorRGB = {write=SetFontColorRGB, nodefault};
	__property double FontSize = {write=SetFontSize};
	__property TXc12FontStyles FontStyle = {write=SetFontStyle, nodefault};
	__property TXc12SubSuperscript FontSubSuperScript = {write=SetFontSubSuperScript, nodefault};
	__property TXc12Underline FontUnderline = {write=SetFontUnderline, nodefault};
	__property Xc12utils5::TXc12Color FillColor = {write=SetFillColor};
	__property Xc12utils5::TXc12Color FillBgColor = {write=SetFillBgColor};
	__property unsigned FillColorRGB = {write=SetFillColorRGB, nodefault};
	__property unsigned FillBgColorRGB = {write=SetFillBgColorRGB, nodefault};
	__property TXc12FillPattern FillPattern = {write=SetFillPattern, nodefault};
	__property System::UnicodeString NumberFormat = {write=SetNumberFormat};
	__property Xc12utils5::TXc12Color BorderLeftColor = {write=SetBorderLeftColor};
	__property unsigned BorderLeftColorRGB = {write=SetBorderLeftColorRGB, nodefault};
	__property TXc12CellBorderStyle BorderLeftStyle = {write=SetBorderLeftStyle, nodefault};
	__property Xc12utils5::TXc12Color BorderTopColor = {write=SetBorderTopColor};
	__property unsigned BorderTopColorRGB = {write=SetBorderTopColorRGB, nodefault};
	__property TXc12CellBorderStyle BorderTopStyle = {write=SetBorderTopStyle, nodefault};
	__property Xc12utils5::TXc12Color BorderRightColor = {write=SetBorderRightColor};
	__property unsigned BorderRightColorRGB = {write=SetBorderRightColorRGB, nodefault};
	__property TXc12CellBorderStyle BorderRightStyle = {write=SetBorderRightStyle, nodefault};
	__property Xc12utils5::TXc12Color BorderBottomColor = {write=SetBorderBottomColor};
	__property unsigned BorderBottomColorRGB = {write=SetBorderBottomColorRGB, nodefault};
	__property TXc12CellBorderStyle BorderBottomStyle = {write=SetBorderBottomStyle, nodefault};
	__property Xc12utils5::TXc12Color BorderDiagColor = {write=SetBorderDiagColor};
	__property unsigned BorderDiagColorRGB = {write=SetBorderDiagColorRGB, nodefault};
	__property TXc12CellBorderStyle BorderDiagStyle = {write=SetBorderDiagStyle, nodefault};
	__property bool ProtectionLocked = {write=SetProtectionLocked, nodefault};
	__property bool ProtectionHidden = {write=SetProtectionHidden, nodefault};
	__property TXc12HorizAlignment AlignHoriz = {write=SetAlignHoriz, nodefault};
	__property TXc12VertAlignment AlignVert = {write=SetAlignVert, nodefault};
	__property int AlignRotation = {write=SetAlignRotation, nodefault};
	__property TXc12AlignmentOptions AlignOptions = {write=SetAlignOptions, nodefault};
	__property int AlignIndent = {write=SetAlignIndent, nodefault};
	__property int AlignRelIndent = {write=SetAlignRelativeIndent, nodefault};
	__property TXc12ReadOrder AlignReadingOrder = {write=SetAlignReadingOrder, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXc12DataStyleSheet : public Xc12common5::TXc12Data
{
	typedef Xc12common5::TXc12Data inherited;
	
private:
	int __fastcall GetStdFontWidth();
	int __fastcall GetStdFontHeight();
	
protected:
	TXc12XFs* FXFs;
	TXc12DXFs* FDXFs;
	TXc12XFs* FStyleXFs;
	TXc12NumberFormats* FNumFmts;
	TXc12Fonts* FFonts;
	TXc12Fills* FFills;
	TXc12Borders* FBorders;
	TXc12CellStyles* FStyles;
	TXc12TableStyles* FTableStyles;
	TXc12ColorObjs* FMruColors;
	TXc12IndexColorObjs* FInxColors;
	TXc12XFEditor* FXFEditor;
	TXLSPPIEvent FPPIEvent;
	TXc12XF* __fastcall FindEqualStyle(const int AStyle)/* overload */;
	TXc12XF* __fastcall FindEqualStyle(TXc12XF* const AStyle)/* overload */;
	
public:
	__fastcall TXc12DataStyleSheet();
	__fastcall virtual ~TXc12DataStyleSheet();
	void __fastcall Clear();
	void __fastcall PixelsPerInchXY(/* out */ int &AX, /* out */ int &AY);
	void __fastcall SetXFDefaultValues(TXc12XF* AXF);
	void __fastcall AfterRead();
	void __fastcall BeforeWrite();
	__property TXc12XFs* XFs = {read=FXFs};
	__property TXc12DXFs* DXFs = {read=FDXFs};
	__property TXc12XFs* StyleXFs = {read=FStyleXFs};
	__property TXc12NumberFormats* NumFmts = {read=FNumFmts};
	__property TXc12Fonts* Fonts = {read=FFonts};
	__property TXc12Fills* Fills = {read=FFills};
	__property TXc12Borders* Borders = {read=FBorders};
	__property TXc12CellStyles* Styles = {read=FStyles};
	__property TXc12TableStyles* TableStyles = {read=FTableStyles};
	__property TXc12ColorObjs* MruColors = {read=FMruColors};
	__property TXc12IndexColorObjs* InxColors = {read=FInxColors};
	__property TXc12XFEditor* XFEditor = {read=FXFEditor};
	__property int StdFontWidth = {read=GetStdFontWidth, nodefault};
	__property int StdFontHeight = {read=GetStdFontHeight, nodefault};
	__property TXLSPPIEvent OnPixelsPerInch = {read=FPPIEvent, write=FPPIEvent};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 XC12_STYLES_COMPACT_CNT = System::Int8(0x19);
static const System::Int8 XLS_NUMFMT_STD_DATE = System::Int8(0xe);
static const System::Int8 XLS_NUMFMT_STD_TIME = System::Int8(0x14);
static const System::Int8 XLS_NUMFMT_STD_DATETIME = System::Int8(0x16);
extern DELPHI_PACKAGE Xc12datastylesheet5__1 ExcelStandardNumFormats;
extern DELPHI_PACKAGE Xc12datastylesheet5__2 Excel40StandardNumFormats;
}	/* namespace Xc12datastylesheet5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XC12DATASTYLESHEET5)
using namespace Xc12datastylesheet5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xc12datastylesheet5HPP
