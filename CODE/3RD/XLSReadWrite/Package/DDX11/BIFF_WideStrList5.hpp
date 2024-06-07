// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_WideStrList5.pas' rev: 35.00 (Windows)

#ifndef Biff_widestrlist5HPP
#define Biff_widestrlist5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_widestrlist5
{
//-- forward type declarations -----------------------------------------------
struct TWSRec;
class DELPHICLASS TXLSWideStringList;
class DELPHICLASS TXLSValueWideStringList;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TWSRec
{
public:
	System::UnicodeString WS;
	System::TObject* Obj;
};


class PASCALIMPLEMENTATION TXLSWideStringList : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::UnicodeString operator[](int Index) { return this->Strings[Index]; }
	
private:
	System::Classes::TList* FStrings;
	System::Classes::TNotifyEvent FChangeEvent;
	bool FIsUpdating;
	System::UnicodeString __fastcall GetText();
	void __fastcall SetText(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetStrings(int Index);
	void __fastcall SetStrings(int Index, const System::UnicodeString Value);
	System::TObject* __fastcall GetObjects(int Index);
	void __fastcall SetObjects(int Index, System::TObject* const Value);
	System::UnicodeString __fastcall GetStr();
	
protected:
	void __fastcall SetStrAtPos(int Index, const System::UnicodeString S);
	
public:
	__fastcall TXLSWideStringList();
	__fastcall virtual ~TXLSWideStringList();
	int __fastcall Count();
	void __fastcall Clear();
	int __fastcall Add(const System::UnicodeString S);
	int __fastcall AddObject(const System::UnicodeString S, System::TObject* AObject);
	int __fastcall IndexOf(const System::UnicodeString S);
	void __fastcall Insert(int Index, const System::UnicodeString S);
	void __fastcall Delete(int Index);
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	void __fastcall Sort();
	__property System::UnicodeString Strings[int Index] = {read=GetStrings, write=SetStrings/*, default*/};
	__property System::TObject* Objects[int Index] = {read=GetObjects, write=SetObjects};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property System::UnicodeString Str = {read=GetStr};
	__property System::Classes::TNotifyEvent OnChange = {read=FChangeEvent, write=FChangeEvent};
};


class PASCALIMPLEMENTATION TXLSValueWideStringList : public TXLSWideStringList
{
	typedef TXLSWideStringList inherited;
	
private:
	System::UnicodeString __fastcall GetValue(int Index);
	System::UnicodeString __fastcall GetValueName(int Index);
	void __fastcall SetValue(int Index, const System::UnicodeString Value);
	void __fastcall SetValueName(int Index, const System::UnicodeString Value);
	
protected:
	System::WideChar FSepChar;
	
public:
	__fastcall TXLSValueWideStringList();
	int __fastcall AddSkipFirstWord(const System::UnicodeString S);
	System::UnicodeString __fastcall PrefixText(System::UnicodeString Prefix);
	__property System::WideChar SeparatorChar = {read=FSepChar, write=FSepChar, nodefault};
	__property System::UnicodeString ValueName[int Index] = {read=GetValueName, write=SetValueName};
	__property System::UnicodeString Value[int Index] = {read=GetValue, write=SetValue};
public:
	/* TXLSWideStringList.Destroy */ inline __fastcall virtual ~TXLSValueWideStringList() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Biff_widestrlist5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_WIDESTRLIST5)
using namespace Biff_widestrlist5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_widestrlist5HPP
