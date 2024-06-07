// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSCmdFormatValues5.pas' rev: 35.00 (Windows)

#ifndef Xlscmdformatvalues5HPP
#define Xlscmdformatvalues5HPP

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
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlscmdformatvalues5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSCmdFormatValue;
class DELPHICLASS TXLSCmdFormatValueNone;
class DELPHICLASS TXLSCmdFormatValueBoolean;
class DELPHICLASS TXLSCmdFormatValueInteger;
class DELPHICLASS TXLSCmdFormatValueFloat;
class DELPHICLASS TXLSCmdFormatValueString;
class DELPHICLASS TXLSCmdFormatValues;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXLSCmdFormatValueType : unsigned char { xcfvtNone, xcfvtBoolean, xcfvtInteger, xcfvtFloat, xcfvtString };

enum DECLSPEC_DENUM TXLSCmdFormatCommand : unsigned char { xcfcCellColor, xcfcBorderBottomColor, xcfcFontSize, xcfcFontBold, xcfcFontItalic, xcfcIndent };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCmdFormatValue : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool __fastcall GetAsBoolean();
	double __fastcall GetAsFloat();
	int __fastcall GetAsInteger();
	System::UnicodeString __fastcall GetAsString();
	void __fastcall SetAsBoolean(const bool Value);
	void __fastcall SetAsFloat(const double Value);
	void __fastcall SetAsInteger(const int Value);
	void __fastcall SetAsString(const System::UnicodeString Value);
	
protected:
	TXLSCmdFormatCommand FCommand;
	
public:
	virtual TXLSCmdFormatValueType __fastcall Type_() = 0 ;
	__property bool AsBoolean = {read=GetAsBoolean, write=SetAsBoolean, nodefault};
	__property int AsInteger = {read=GetAsInteger, write=SetAsInteger, nodefault};
	__property double AsFloat = {read=GetAsFloat, write=SetAsFloat};
	__property System::UnicodeString AsString = {read=GetAsString, write=SetAsString};
	__property TXLSCmdFormatCommand Command = {read=FCommand, write=FCommand, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXLSCmdFormatValue() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSCmdFormatValue() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCmdFormatValueNone : public TXLSCmdFormatValue
{
	typedef TXLSCmdFormatValue inherited;
	
public:
	virtual TXLSCmdFormatValueType __fastcall Type_();
public:
	/* TObject.Create */ inline __fastcall TXLSCmdFormatValueNone() : TXLSCmdFormatValue() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSCmdFormatValueNone() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCmdFormatValueBoolean : public TXLSCmdFormatValue
{
	typedef TXLSCmdFormatValue inherited;
	
protected:
	bool FValue;
	
public:
	virtual TXLSCmdFormatValueType __fastcall Type_();
	__property bool Value = {read=FValue, write=FValue, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXLSCmdFormatValueBoolean() : TXLSCmdFormatValue() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSCmdFormatValueBoolean() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCmdFormatValueInteger : public TXLSCmdFormatValue
{
	typedef TXLSCmdFormatValue inherited;
	
protected:
	int FValue;
	
public:
	virtual TXLSCmdFormatValueType __fastcall Type_();
	__property int Value = {read=FValue, write=FValue, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXLSCmdFormatValueInteger() : TXLSCmdFormatValue() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSCmdFormatValueInteger() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSCmdFormatValueFloat : public TXLSCmdFormatValue
{
	typedef TXLSCmdFormatValue inherited;
	
protected:
	double FValue;
	
public:
	virtual TXLSCmdFormatValueType __fastcall Type_();
	__property double Value = {read=FValue, write=FValue};
public:
	/* TObject.Create */ inline __fastcall TXLSCmdFormatValueFloat() : TXLSCmdFormatValue() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSCmdFormatValueFloat() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCmdFormatValueString : public TXLSCmdFormatValue
{
	typedef TXLSCmdFormatValue inherited;
	
protected:
	System::UnicodeString FValue;
	
public:
	virtual TXLSCmdFormatValueType __fastcall Type_();
	__property System::UnicodeString Value = {read=FValue, write=FValue};
public:
	/* TObject.Create */ inline __fastcall TXLSCmdFormatValueString() : TXLSCmdFormatValue() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSCmdFormatValueString() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCmdFormatValues : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXLSCmdFormatValue* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSCmdFormatValue* __fastcall GetItems(int Index);
	
public:
	__fastcall TXLSCmdFormatValues();
	HIDESBASE void __fastcall Add(TXLSCmdFormatCommand ACommand)/* overload */;
	HIDESBASE void __fastcall Add(TXLSCmdFormatCommand ACommand, bool AValue)/* overload */;
	HIDESBASE void __fastcall Add(TXLSCmdFormatCommand ACommand, int AValue)/* overload */;
	HIDESBASE void __fastcall Add(TXLSCmdFormatCommand ACommand, double AValue)/* overload */;
	HIDESBASE void __fastcall Add(TXLSCmdFormatCommand ACommand, System::UnicodeString AValue)/* overload */;
	__property TXLSCmdFormatValue* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXLSCmdFormatValues() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlscmdformatvalues5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSCMDFORMATVALUES5)
using namespace Xlscmdformatvalues5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlscmdformatvalues5HPP
