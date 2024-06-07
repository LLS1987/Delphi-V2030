// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSMask5.pas' rev: 35.00 (Windows)

#ifndef Xlsmask5HPP
#define Xlsmask5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Contnrs.hpp>
#include <System.Math.hpp>
#include <Vcl.Graphics.hpp>
#include <XLSUtils5.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsmask5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMaskData;
class DELPHICLASS TMaskDataList;
struct TFormatData;
class DELPHICLASS TExcelMask;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TMaskEntity : unsigned char { meNone, meLitteral, meString, mePlace, meSpace, meZero, meYear2, meYear4, meMonthDig1, meMonthDig2, meMonthShort, meMonthName, meMonthChar, meDayDig1, meDayDig2, meDayShort, meDayName, meHourDig1, meHourDig2, meHourDig1AmPm, meHourDig2AmPm, meHourElapsed, meMinuteDig1, meMinuteDig2, meMinuteElapsed, meSecondDig1, meSecondDig2, meSecondElapsed, meStrAmPmUpp, meStrAmPmLow, meStrap, meDecimalPos, mePercentPos, meFirstDigitPlace, meRightIndent };

enum DECLSPEC_DENUM TMaskFlag : unsigned char { mfGeneral, mfThousand, mfDecimals, mfPercent, mfScientific, mfIsDateTime, mfZero };

typedef System::Set<TMaskFlag, TMaskFlag::mfGeneral, TMaskFlag::mfZero> TMaskFlags;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMaskData : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TMaskEntity FEntity;
	System::UnicodeString FValue;
	System::WideChar FC;
	System::UnicodeString FS;
	
public:
	__property TMaskEntity Entity = {read=FEntity, write=FEntity, nodefault};
	__property System::UnicodeString Value = {read=FValue, write=FValue};
	__property System::WideChar C = {read=FC, write=FC, nodefault};
	__property System::UnicodeString S = {read=FS, write=FS};
public:
	/* TObject.Create */ inline __fastcall TMaskData() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TMaskData() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMaskDataList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TMaskData* operator[](int Index) { return this->Items[Index]; }
	
private:
	TMaskData* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TMaskData* __fastcall Add();
	HIDESBASE TMaskData* __fastcall Insert(int AIndex);
	__property TMaskData* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TObjectList.Create */ inline __fastcall TMaskDataList()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TMaskDataList(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TMaskDataList() { }
	
};

#pragma pack(pop)

typedef TFormatData *PFormatData;

struct DECLSPEC_DRECORD TFormatData
{
public:
	TMaskDataList* Data;
	unsigned Color;
	TMaskFlags Flags;
	int DataDecimalPos;
	int DecimalCount;
	int Div1000Cnt;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TExcelMask : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FMask;
	int FIndex;
	System::StaticArray<TFormatData, 4> Formats;
	unsigned FColor;
	void __fastcall SetMask(System::UnicodeString Value);
	void __fastcall AddMask(int Index, const System::UnicodeString Value);
	void __fastcall ClearData();
	TMaskData* __fastcall AddEntity(int Index, TMaskEntity E);
	
protected:
	System::UnicodeString __fastcall FormatNumberDateTime(const TFormatData &FD, double Value);
	System::UnicodeString __fastcall FormatNumberNumber(const TFormatData &FD, double Value);
	
public:
	__fastcall virtual ~TExcelMask();
	System::UnicodeString __fastcall FormatNumber(double Value);
	System::Uitypes::TColor __fastcall ValueColor(double Value);
	bool __fastcall IsDateTime();
	__property System::UnicodeString Mask = {read=FMask, write=SetMask};
	__property int Index = {read=FIndex, write=FIndex, nodefault};
	__property unsigned Color = {read=FColor, nodefault};
public:
	/* TObject.Create */ inline __fastcall TExcelMask() : System::TObject() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::UnicodeString __fastcall XLSGetCurrencyFormat(System::UnicodeString DecStr, System::UnicodeString ThStr);
}	/* namespace Xlsmask5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSMASK5)
using namespace Xlsmask5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsmask5HPP
