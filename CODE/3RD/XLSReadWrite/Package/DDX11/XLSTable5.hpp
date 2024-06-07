// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSTable5.pas' rev: 35.00 (Windows)

#ifndef Xlstable5HPP
#define Xlstable5HPP

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
#include <xpgPUtils.hpp>
#include <xpgPXMLUtils.hpp>
#include <xpgParserXLSX.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataWorksheet5.hpp>
#include <Xc12DataWorkbook5.hpp>
#include <XLSUtils5.hpp>
#include <XLSFormulaTypes5.hpp>
#include <XLSFormula5.hpp>
#include <XLSReadXLSX5.hpp>
#include <XLSReadWriteII5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlstable5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSTable;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSTable : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xlsreadwriteii5::TXLSReadWriteII5* FXLS;
	Xlsformula5::TXLSFormulaHandler* FFormulas;
	Xlsreadxlsx5::TXLSReadXLSX* FRead;
	System::Classes::TStream* FZStream;
	System::Classes::TStream* FStream;
	Xpgparserxlsx::TXPGDocXLSX* FXML;
	int FSheetIndex;
	Xc12dataworkbook5::TXc12Sheet* FCurrSheet;
	Xlsreadxlsx5::TXLSSharedFormulaList* FSharedFormulas;
	bool FRowRead;
	int FRowCount;
	void __fastcall OnCellDirect(System::TObject* ASender);
	bool __fastcall ReadRow();
	void __fastcall ClearRow();
	
public:
	__fastcall TXLSTable(Xlsreadwriteii5::TXLSReadWriteII5* AXLS);
	__fastcall virtual ~TXLSTable();
	void __fastcall Open(int ASheetIndex);
	void __fastcall Close();
	bool __fastcall FindFirst();
	bool __fastcall FindNext();
	__property int RowCount = {read=FRowCount, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlstable5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSTABLE5)
using namespace Xlstable5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlstable5HPP
