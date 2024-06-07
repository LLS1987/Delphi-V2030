// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_FormulaHandler5.pas' rev: 35.00 (Windows)

#ifndef Biff_formulahandler5HPP
#define Biff_formulahandler5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_Utils5.hpp>
#include <BIFF_DecodeFormula5.hpp>
#include <BIFF_EncodeFormulaII5.hpp>
#include <BIFF_Names5.hpp>
#include <BIFF_ExcelFuncII5.hpp>
#include <BIFF_WideStrList5.hpp>
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>
#include <XLSFormulaTypes5.hpp>
#include <XLSMask5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_formulahandler5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFormulaHandler;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TSheetDataType : unsigned char { sdtName, sdtCell };

typedef void __fastcall (__closure *TSheetNameEvent)(System::UnicodeString Name, int &Index, int &TabCount);

typedef System::UnicodeString __fastcall (__closure *TSheetDataEvent)(TSheetDataType DataType, int SheetIndex, int Col, int Row);

class PASCALIMPLEMENTATION TFormulaHandler : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TPersistent* FOwner;
	TSheetNameEvent FSheetNameEvent;
	TSheetDataEvent FSheetDataEvent;
	Biff_encodeformulaii5::TEncodeFormula* FFormulaEncoder;
	Biff_names5::TExternalNames* FExternalNames;
	Biff_names5::TInternalNames* FInternalNames;
	void __fastcall FormulaUnknownFunction(System::UnicodeString Name, int &ID);
	void __fastcall FormulaExternName(System::UnicodeString Path, System::UnicodeString Filename, System::UnicodeString SheetName, System::UnicodeString Name, bool IsRef, int &ExtIndex, int &NameIndex);
	Biff_encodeformulaii5::TUnknownNameEvent __fastcall GetNameEvent();
	void __fastcall SetNameEvent(const Biff_encodeformulaii5::TUnknownNameEvent Value);
	
public:
	__fastcall TFormulaHandler(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TFormulaHandler();
	void __fastcall Clear();
	System::UnicodeString __fastcall DecodeFormula(System::Sysutils::PByteArray Buf, int Len);
	System::UnicodeString __fastcall DecodeFormulaRel(System::Sysutils::PByteArray Buf, int Len, int SheetIndex, int Col, int Row);
	int __fastcall EncodeFormula(System::UnicodeString Formula, System::Byte ReturnClass, System::Sysutils::PByteArray &Buf, int BufSz);
	System::UnicodeString __fastcall GetName(Biff_utils5::TFormulaNameType NameType, int SheetIndex, int NameIndex, int Col, int Row);
	void __fastcall GetNameRef(System::UnicodeString AName, /* out */ int &ASheetIndex, /* out */ int &Col1, /* out */ int &Row1, /* out */ int &Col2, /* out */ int &Row2, bool AcceptArea = false);
	void __fastcall DeleteSheet(int SheetIndex);
	void __fastcall InsertSheet(int SheetIndex);
	void __fastcall DeleteRows(int SheetIndex, int Row1, int Row2);
	void __fastcall InsertRows(int SheetIndex, int Row, int Count);
	void __fastcall DeleteColumns(int SheetIndex, int Col1, int Col2);
	void __fastcall InsertColumns(int SheetIndex, int Col, int Count);
	__property Biff_names5::TInternalNames* InternalNames = {read=FInternalNames, write=FInternalNames};
	__property Biff_names5::TExternalNames* ExternalNames = {read=FExternalNames, write=FExternalNames};
	__property Biff_encodeformulaii5::TUnknownNameEvent _OnName = {read=GetNameEvent, write=SetNameEvent};
	__property TSheetNameEvent OnSheetName = {read=FSheetNameEvent, write=FSheetNameEvent};
	__property TSheetDataEvent OnSheetData = {read=FSheetDataEvent, write=FSheetDataEvent};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Biff_formulahandler5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_FORMULAHANDLER5)
using namespace Biff_formulahandler5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_formulahandler5HPP
