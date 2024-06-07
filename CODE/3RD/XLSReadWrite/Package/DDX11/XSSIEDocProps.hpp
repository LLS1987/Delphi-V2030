// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XSSIEDocProps.pas' rev: 35.00 (Windows)

#ifndef XssiedocpropsHPP
#define XssiedocpropsHPP

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
#include <Vcl.Graphics.hpp>
#include <System.UITypes.hpp>
#include <XLSUtils5.hpp>
#include <XSSIEDefs.hpp>
#include <XSSIEUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xssiedocprops
{
//-- forward type declarations -----------------------------------------------
struct TAXWPropItem;
class DELPHICLASS TAXWTabStop;
class DELPHICLASS TAXWTabStops;
class DELPHICLASS TAXWPropList;
class DELPHICLASS TAXWCHPX;
class DELPHICLASS TAXWCHP;
class DELPHICLASS TAXWPAP;
class DELPHICLASS TAXWPAPX;
class DELPHICLASS TAXWDOP;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TAXWChpId : unsigned char { axciBooleanStart, axciBold, axciItalic, axciStrikeTrough, axciBooleanEnd, axciIntegerStart, axciColor, axciUnderline, axciSubSuperscript, axciIntegerEnd, axciFloatStart, axciSize, axciFloatEnd, axciComplexStart, axciFontName, axciComplexEnd };

enum DECLSPEC_DENUM TAXWPapId : unsigned char { axpiBooleanStart, axpiBooleanEnd, axpiIntegerStart, axpiFlags, axpiAlignment, axpiColor, axpiIntegerEnd, axpiFloatStart, axpiIndent, axpiIndentRight, axpiIndentFirstLine, axpiIndentHanging, axpiLineSpaceing, axpiSpaceing, axpiFloatEnd, axpiComplexStart, axpiComplexEnd };

enum DECLSPEC_DENUM TAXWPropIdType : unsigned char { axcitUnknown, axcitBoolean, axcitInteger, axcitFloat, axcitComplex };

enum DECLSPEC_DENUM TAXWChpUnderline : unsigned char { axcuNone, axcuSingle, axcuDouble };

enum DECLSPEC_DENUM TAXWChpSubSuperscript : unsigned char { axcssNone, axcssSubscript, axcssSuperscript };

enum DECLSPEC_DENUM TAXWPapTextAlign : unsigned char { axptaLeft, axptaCenter, axptaRight, axptaJustify };

enum DECLSPEC_DENUM TAXWPapFlag : unsigned char { axpfReadOnly };

typedef System::Set<TAXWPapFlag, TAXWPapFlag::axpfReadOnly, TAXWPapFlag::axpfReadOnly> TAXWPapFlags;

typedef TAXWPropItem *PAXWPropItem;

struct DECLSPEC_DRECORD TAXWPropItem
{
public:
	int Id;
	System::Sysutils::TByteArray *PData;
	
public:
	union
	{
		struct 
		{
			double ValFloat;
		};
		struct 
		{
			bool ValBool;
		};
		struct 
		{
			int ValInt;
		};
		
	};
};


enum DECLSPEC_DENUM TAXWTabStopAlignment : unsigned char { atsaClear, atsaLeft, atsaCenter, atsaRight, atsaDecimal, atsaNum };

enum DECLSPEC_DENUM TAXWTabStopLeader : unsigned char { atslNone, atslDot, atslHyphen, atslUnderscore, atslHeavy, atslMiddleDot };

class PASCALIMPLEMENTATION TAXWTabStop : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	double FPosition;
	TAXWTabStopAlignment FAlignment;
	TAXWTabStopLeader FLeader;
	
public:
	__property double Position = {read=FPosition, write=FPosition};
	__property TAXWTabStopAlignment Alignment = {read=FAlignment, write=FAlignment, nodefault};
	__property TAXWTabStopLeader Leader = {read=FLeader, write=FLeader, nodefault};
public:
	/* TObject.Create */ inline __fastcall TAXWTabStop() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWTabStop() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWTabStops : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TAXWTabStop* operator[](int Index) { return this->Items[Index]; }
	
private:
	TAXWTabStop* __fastcall GetItems(int Index);
	
public:
	__fastcall TAXWTabStops();
	HIDESBASE TAXWTabStop* __fastcall Add(const double APosition);
	__property TAXWTabStop* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWTabStops() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWPropList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	PAXWPropItem operator[](int Index) { return this->Items[Index]; }
	
protected:
	PAXWPropItem __fastcall GetItems(int Index);
	System::UnicodeString __fastcall GetComplex(int Index);
	TAXWPropIdType __fastcall GetValueType(int Index);
	bool __fastcall GetAsBoolean(int Id);
	int __fastcall GetAsInteger(int Id);
	double __fastcall GetAsFloat(int Id);
	double __fastcall GetFloatVal(int Index);
	void __fastcall SetAsBoolean(int Id, const bool Value);
	void __fastcall SetAsInteger(int Id, const int Value);
	void __fastcall SetAsFloat(int Id, const double Value);
	void __fastcall SetFloatVal(int Index, const double Value);
	void __fastcall SetComplex(int Index, const System::UnicodeString Value);
	virtual bool __fastcall IsBoolean(int Id) = 0 ;
	virtual bool __fastcall IsComplex(int Id) = 0 ;
	virtual bool __fastcall IsInteger(int Id) = 0 ;
	virtual bool __fastcall IsFloat(int Id) = 0 ;
	bool __fastcall GetValue(int AId, /* out */ int &AValue)/* overload */;
	bool __fastcall GetValue(int AId, /* out */ unsigned &AValue)/* overload */;
	bool __fastcall GetValue(int AId, /* out */ double &AValue)/* overload */;
	bool __fastcall GetValue(int AId, /* out */ bool &AValue)/* overload */;
	bool __fastcall GetValue(int AId, /* out */ System::UnicodeString &AValue)/* overload */;
	virtual void __fastcall Notify(void * Ptr, System::Classes::TListNotification Action);
	int __fastcall Find(int Id);
	__property PAXWPropItem Items[int Index] = {read=GetItems/*, default*/};
	__property TAXWPropIdType ValueType[int Index] = {read=GetValueType};
	__property System::UnicodeString Complex[int Index] = {read=GetComplex, write=SetComplex};
	__property double FloatVal[int Index] = {read=GetFloatVal, write=SetFloatVal};
	
public:
	virtual void __fastcall Clear();
	void __fastcall Toggle(int Id);
	HIDESBASE void __fastcall Assign(TAXWPropList* List);
	bool __fastcall Equal(TAXWPropList* List);
	void __fastcall Merge(TAXWPropList* List);
	virtual void __fastcall GetDebugList(System::Classes::TStrings* List) = 0 ;
	void __fastcall AddInteger(int Id, int Value);
	void __fastcall AddFloat(int Id, double Value);
	void __fastcall AddBoolean(int Id, bool Value);
	void __fastcall AddComplex(int Id, System::UnicodeString Value);
	__property bool AsBoolean[int Id] = {read=GetAsBoolean, write=SetAsBoolean};
	__property int AsInteger[int Id] = {read=GetAsInteger, write=SetAsInteger};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWPropList() { }
	
public:
	/* TObject.Create */ inline __fastcall TAXWPropList() : System::Classes::TList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWCHPX : public TAXWPropList
{
	typedef TAXWPropList inherited;
	
private:
	TAXWChpUnderline __fastcall GetUnderline();
	System::UnicodeString __fastcall GetFontName();
	bool __fastcall GetBold();
	unsigned __fastcall GetColor();
	bool __fastcall GetItalic();
	double __fastcall GetSize();
	bool __fastcall GetStrikeTrough();
	TAXWChpSubSuperscript __fastcall GetSubSuperscript();
	void __fastcall SetUnderline(const TAXWChpUnderline Value);
	void __fastcall SetFontName(const System::UnicodeString Value);
	void __fastcall SetBold(const bool Value);
	void __fastcall SetColor(const unsigned Value);
	void __fastcall SetItalic(const bool Value);
	void __fastcall SetSize(const double Value);
	void __fastcall SetStrikeTrough(const bool Value);
	void __fastcall SetSubSuperscript(const TAXWChpSubSuperscript Value);
	
protected:
	TAXWCHP* FCHP;
	virtual bool __fastcall IsBoolean(int Id);
	virtual bool __fastcall IsComplex(int Id);
	virtual bool __fastcall IsInteger(int Id);
	virtual bool __fastcall IsFloat(int Id);
	
public:
	__fastcall TAXWCHPX(TAXWCHP* ACHP);
	virtual void __fastcall GetDebugList(System::Classes::TStrings* List);
	__property bool Bold = {read=GetBold, write=SetBold, nodefault};
	__property bool Italic = {read=GetItalic, write=SetItalic, nodefault};
	__property System::UnicodeString FontName = {read=GetFontName, write=SetFontName};
	__property TAXWChpUnderline Underline = {read=GetUnderline, write=SetUnderline, nodefault};
	__property double Size = {read=GetSize, write=SetSize};
	__property unsigned Color = {read=GetColor, write=SetColor, nodefault};
	__property bool StrikeTrough = {read=GetStrikeTrough, write=SetStrikeTrough, nodefault};
	__property TAXWChpSubSuperscript SubSuperscript = {read=GetSubSuperscript, write=SetSubSuperscript, nodefault};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWCHPX() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAXWCHP : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TAXWCHP* FParentCHP;
	TAXWChpUnderline FUnderline;
	unsigned FColor;
	System::UnicodeString FFontName;
	double FSize;
	bool FItalic;
	bool FBold;
	bool FStrikeTrough;
	TAXWChpSubSuperscript FSubSuperscript;
	
public:
	__fastcall TAXWCHP(TAXWCHP* ParentCHP);
	void __fastcall Clear();
	void __fastcall Assign(TAXWCHP* CHP)/* overload */;
	void __fastcall Assign(TAXWCHPX* List)/* overload */;
	void __fastcall AssignTFont(Vcl::Graphics::TFont* Font);
	void __fastcall CopyToCHPX(TAXWCHPX* List);
	bool __fastcall IsEmptyCHPX(TAXWCHPX* List);
	void __fastcall CompactCHPX(TAXWCHPX* List);
	bool __fastcall Equal(TAXWCHP* ACHP);
	__property TAXWCHP* ParentCHP = {read=FParentCHP, write=FParentCHP};
	__property bool Bold = {read=FBold, write=FBold, nodefault};
	__property bool Italic = {read=FItalic, write=FItalic, nodefault};
	__property TAXWChpUnderline Underline = {read=FUnderline, write=FUnderline, nodefault};
	__property System::UnicodeString FontName = {read=FFontName, write=FFontName};
	__property double Size = {read=FSize, write=FSize};
	__property unsigned Color = {read=FColor, write=FColor, nodefault};
	__property bool StrikeTrough = {read=FStrikeTrough, write=FStrikeTrough, nodefault};
	__property TAXWChpSubSuperscript SubSuperscript = {read=FSubSuperscript, write=FSubSuperscript, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWCHP() { }
	
};


class PASCALIMPLEMENTATION TAXWPAP : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	double FIndent;
	double FIndentRight;
	double FIndentFirstLine;
	double FIndentHanging;
	double FLineSpacing;
	double FSpacing;
	TAXWPapTextAlign FAlignment;
	TAXWPapFlag FFlags;
	unsigned FColor;
	TAXWPAP* FParentPAP;
	
public:
	__fastcall TAXWPAP(TAXWPAP* ParentPAP);
	void __fastcall Clear();
	void __fastcall Assign(TAXWPAP* PAP)/* overload */;
	void __fastcall Assign(TAXWPAPX* List)/* overload */;
	void __fastcall CopyToPAPX(TAXWPAPX* List);
	bool __fastcall IsEmptyPAPX(TAXWPAPX* List);
	void __fastcall CompactPAPX(TAXWPAPX* List);
	__property TAXWPapTextAlign Alignment = {read=FAlignment, write=FAlignment, nodefault};
	__property double Indent = {read=FIndent, write=FIndent};
	__property double IndentRight = {read=FIndentRight, write=FIndentRight};
	__property double IndentFirstLine = {read=FIndentFirstLine, write=FIndentFirstLine};
	__property double IndentHanging = {read=FIndentHanging, write=FIndentHanging};
	__property double LineSpacing = {read=FLineSpacing, write=FLineSpacing};
	__property double Spacing = {read=FSpacing, write=FSpacing};
	__property unsigned Color = {read=FColor, write=FColor, nodefault};
	__property TAXWPapFlag Flags = {read=FFlags, write=FFlags, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWPAP() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWPAPX : public TAXWPropList
{
	typedef TAXWPropList inherited;
	
private:
	TAXWPapTextAlign __fastcall GetAlignment();
	unsigned __fastcall GetColor();
	void __fastcall SetColor(const unsigned Value);
	double __fastcall GetIndent();
	void __fastcall SetIndent(const double Value);
	double __fastcall GetIndentFirstLine();
	double __fastcall GetIndentHanging();
	double __fastcall GetIndentRight();
	void __fastcall SetIndentFirstLine(const double Value);
	void __fastcall SetIndentHanging(const double Value);
	void __fastcall SetIndentRight(const double Value);
	
protected:
	TAXWPAP* FPAP;
	virtual bool __fastcall IsBoolean(int Id);
	virtual bool __fastcall IsComplex(int Id);
	virtual bool __fastcall IsInteger(int Id);
	virtual bool __fastcall IsFloat(int Id);
	
public:
	__fastcall TAXWPAPX(TAXWPAP* APAP);
	virtual void __fastcall GetDebugList(System::Classes::TStrings* List);
	__property TAXWPapTextAlign Alignment = {read=GetAlignment, nodefault};
	__property double Indent = {read=GetIndent, write=SetIndent};
	__property double IndentRight = {read=GetIndentRight, write=SetIndentRight};
	__property double IndentFirstLine = {read=GetIndentFirstLine, write=SetIndentFirstLine};
	__property double IndentHanging = {read=GetIndentHanging, write=SetIndentHanging};
	__property unsigned Color = {read=GetColor, write=SetColor, nodefault};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWPAPX() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAXWDOP : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	unsigned FColor;
	double FTabWidth;
	TAXWTabStop* FDefTab;
	
public:
	__fastcall TAXWDOP();
	__fastcall virtual ~TAXWDOP();
	__property unsigned Color = {read=FColor, write=FColor, nodefault};
	__property double TabWidth = {read=FTabWidth, write=FTabWidth};
	__property TAXWTabStop* DefTab = {read=FDefTab};
};


//-- var, const, procedure ---------------------------------------------------
static const unsigned AXW_COLOR_AUTOMATIC = unsigned(0xff000000);
static const int AXW_COLOR_WHITE = int(0xffffff);
}	/* namespace Xssiedocprops */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XSSIEDOCPROPS)
using namespace Xssiedocprops;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XssiedocpropsHPP
