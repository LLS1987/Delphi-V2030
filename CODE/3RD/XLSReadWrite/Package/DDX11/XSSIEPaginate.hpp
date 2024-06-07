// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XSSIEPaginate.pas' rev: 35.00 (Windows)

#ifndef XssiepaginateHPP
#define XssiepaginateHPP

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
#include <XSSIEDefs.hpp>
#include <XSSIEUtils.hpp>
#include <XSSIEDocProps.hpp>
#include <XSSIECharRun.hpp>
#include <XSSIEPhyRow.hpp>
#include <XSSIELogParas.hpp>
#include <XSSIEGDIText.hpp>
#include <XBookPaintGDI2.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xssiepaginate
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAXWParaObjSize;
class DELPHICLASS TAXWParaObjSizes;
class DELPHICLASS TAXWWordData;
class DELPHICLASS TAXWRowPaginateStack;
class DELPHICLASS TAXWPaginator;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TAXWWordDataNewCharRunEvent)(int &CRIndex, Xssiecharrun::TAXWCharRun* &CR);

class PASCALIMPLEMENTATION TAXWParaObjSize : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	double FWidth;
	double FHeight;
	double FCurrHeight;
	bool FAlignRight;
	
public:
	__property double Width = {read=FWidth, write=FWidth};
	__property double Height = {read=FHeight, write=FHeight};
	__property double CurrHeight = {read=FCurrHeight, write=FCurrHeight};
	__property bool AlignRigth = {read=FAlignRight, write=FAlignRight, nodefault};
public:
	/* TObject.Create */ inline __fastcall TAXWParaObjSize() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWParaObjSize() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWParaObjSizes : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
private:
	TAXWParaObjSize* __fastcall GetItems(int Index);
	double __fastcall GetWidth();
	double __fastcall GetXOffset();
	
public:
	HIDESBASE void __fastcall Add(const int AWidth, const int AHeight, bool AAlignRigth);
	void __fastcall Dec(const double AHeight);
	__property double Width = {read=GetWidth};
	__property double XOffset = {read=GetXOffset};
	__property TAXWParaObjSize* Items[int Index] = {read=GetItems};
public:
	/* TObjectList.Create */ inline __fastcall TAXWParaObjSizes()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TAXWParaObjSizes(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWParaObjSizes() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAXWWordData : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<Xssieutils::TBreakCharData> _TAXWWordData__1;
	
	
private:
	void __fastcall SetBreakChar(const System::WideChar Value);
	
protected:
	Xssielogparas::TAXWLogPara* FPara;
	Xssieutils::TAXWClientArea* FArea;
	Xssiegditext::TAXWTextPrint* FPrint;
	Xssiecharrun::TAXWCharRun* FCR1;
	Xssiecharrun::TAXWCharRun* FCR2;
	int FCRPos1;
	int FCRPos2;
	int FLeadingSpaceCount;
	double FLeadingSpaceWidth;
	int FCharCount;
	double FWidth;
	int FTrailingSpaceCount;
	double FTrailingSpaceWidth;
	bool FHasLineBreak;
	bool FCollectBreakChar;
	System::WideChar FBreakChar;
	double FBreakCharWidth;
	_TAXWWordData__1 FLeadingBreakChars;
	_TAXWWordData__1 FTrailingBreakChars;
	int FLeadingBreakCharsCount;
	int FTrailingBreakCharsCount;
	TAXWWordDataNewCharRunEvent FNewCharRunEvent;
	Xssiedocprops::TAXWTabStop* FTabStop;
	double __fastcall TextWidth(const System::UnicodeString AText);
	void __fastcall AddLeadingBC();
	void __fastcall AddTrailingBC();
	bool __fastcall CharIsWhitespaceLeading(System::WideChar C);
	bool __fastcall CharIsWhitespaceTrailing(System::WideChar C);
	
public:
	__fastcall TAXWWordData(Xssiegditext::TAXWTextPrint* Print, Xssieutils::TAXWClientArea* Area);
	void __fastcall Clear(int ACRPos);
	double __fastcall TotWidth();
	double __fastcall WidthBeginning();
	double __fastcall WidthEnd();
	int __fastcall TotCharCount();
	bool __fastcall NextWord(Xssiecharrun::TAXWCharRun* &CR, System::UnicodeString &Source, int &CRIndex);
	__property Xssielogparas::TAXWLogPara* Para = {read=FPara, write=FPara};
	__property Xssiecharrun::TAXWCharRun* CR1 = {read=FCR1};
	__property Xssiecharrun::TAXWCharRun* CR2 = {read=FCR2};
	__property int CRPos1 = {read=FCRPos1, nodefault};
	__property int CRPos2 = {read=FCRPos2, nodefault};
	__property int LeadingSpaceCount = {read=FLeadingSpaceCount, nodefault};
	__property double LeadingSpaceWidth = {read=FLeadingSpaceWidth};
	__property int CharCount = {read=FCharCount, nodefault};
	__property double Width = {read=FWidth};
	__property int TrailingSpaceCount = {read=FTrailingSpaceCount, nodefault};
	__property double TrailingSpaceWidth = {read=FTrailingSpaceWidth};
	__property bool HasLineBreak = {read=FHasLineBreak, nodefault};
	__property bool CollectBreakChar = {read=FCollectBreakChar, write=FCollectBreakChar, nodefault};
	__property System::WideChar BreakChar = {read=FBreakChar, write=SetBreakChar, nodefault};
	__property int LeadingBreakCharsCount = {read=FLeadingBreakCharsCount, nodefault};
	__property int TrailingBreakCharsCount = {read=FTrailingBreakCharsCount, nodefault};
	__property TAXWWordDataNewCharRunEvent OnNewCharRun = {read=FNewCharRunEvent, write=FNewCharRunEvent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWWordData() { }
	
};


class PASCALIMPLEMENTATION TAXWRowPaginateStack : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<Xssieutils::TBreakCharData> _TAXWRowPaginateStack__1;
	
	
protected:
	Xbookpaintgdi2::TAXWGDI* FGDI;
	Xssieutils::TAXWClientArea* FArea;
	TAXWWordData* FWordData;
	Xssielogparas::TAXWLogPara* FPara;
	Xssiephyrow::TAXWPhyRow* FRow;
	double FRowWidth;
	int FRowIndex;
	int FLogPos;
	int FDeltaChars;
	double FMaxAscent;
	double FMaxDescent;
	_TAXWRowPaginateStack__1 FBreakChars;
	int FBreakCharsCount;
	double FLastTrailingWidth;
	int FLastTrailingBreakCharsCount;
	bool FKeepTrailingSpaces;
	TAXWParaObjSizes* FParaWidth;
	void __fastcall AddBreakChars(Xssieutils::TBreakCharData *Chars, const int Chars_High, int CharCount);
	
public:
	__fastcall TAXWRowPaginateStack(Xssiegditext::TAXWTextPrint* Print, Xssieutils::TAXWClientArea* Area);
	__fastcall virtual ~TAXWRowPaginateStack();
	void __fastcall Clear(Xssielogparas::TAXWLogPara* Para);
	void __fastcall Push();
	void __fastcall BeginRow(Xssiecharrun::TAXWCharRun* CR, int CRPos, bool ANewPara = false);
	void __fastcall UpdateRow(Xssiecharrun::TAXWCharRun* CR, int CRPos);
	void __fastcall EndRow()/* overload */;
	void __fastcall EndRow(Xssiecharrun::TAXWCharRun* CR, int CRPos)/* overload */;
	void __fastcall NewCharRun();
	void __fastcall Cleanup();
	__property Xssielogparas::TAXWLogPara* Para = {read=FPara};
	__property Xssiephyrow::TAXWPhyRow* Row = {read=FRow};
	__property TAXWWordData* Curr = {read=FWordData};
	__property double MaxAscent = {read=FMaxAscent, write=FMaxAscent};
	__property double MaxDescent = {read=FMaxDescent, write=FMaxDescent};
	__property int DeltaChars = {read=FDeltaChars, write=FDeltaChars, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWPaginator : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<int> _TAXWPaginator__1;
	
	
private:
	bool __fastcall GetKeepTrailingSpaces();
	void __fastcall SetKeepTrailingSpaces(const bool Value);
	
protected:
	Xssiegditext::TAXWTextPrint* FPrint;
	Xssieutils::TAXWClientArea* FArea;
	System::UnicodeString FText;
	TAXWRowPaginateStack* FRowStack;
	_TAXWPaginator__1 FSpaceWidths;
	int FSpaceWidthsCount;
	Xssiecharrun::TAXWCharRun* __fastcall BeginCharRun(int Index);
	void __fastcall Cleanup();
	void __fastcall WordDataNewCharRun(int &CRIndex, Xssiecharrun::TAXWCharRun* &CR);
	
public:
	__fastcall TAXWPaginator(Xssiegditext::TAXWTextPrint* Print, Xssieutils::TAXWClientArea* Area);
	__fastcall virtual ~TAXWPaginator();
	void __fastcall Clear();
	void __fastcall Paginate(Xssielogparas::TAXWLogPara* Para);
	__property bool KeepTrailingSpaces = {read=GetKeepTrailingSpaces, write=SetKeepTrailingSpaces, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xssiepaginate */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XSSIEPAGINATE)
using namespace Xssiepaginate;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XssiepaginateHPP
