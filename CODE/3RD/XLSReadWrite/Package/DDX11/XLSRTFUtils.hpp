// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSRTFUtils.pas' rev: 35.00 (Windows)

#ifndef XlsrtfutilsHPP
#define XlsrtfutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Common5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12DataWorksheet5.hpp>
#include <Xc12Manager5.hpp>
#include <XLSUtils5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSCmdFormat5.hpp>
#include <XLSColumn5.hpp>
#include <XLSRow5.hpp>
#include <XLSAXWEditor.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsrtfutils
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSDocConverter;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSDocConverter : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	Xlsutils5::TIndexObject* FSheetObj;
	Xc12dataworksheet5::TXc12DataWorksheet* FSheet;
	Xlscolumn5::TXLSColumns* FCols;
	Xlsrow5::TXLSRows* FRows;
	Xlsaxweditor::TAXWLogDocEditor* FDoc;
	Xlscmdformat5::TXLSCmdFormat* FCmdFormat;
	void __fastcall CHPXToFont(Xlsaxweditor::TAXWCHP* ACHPX, Xc12datastylesheet5::TXc12Font* AFont);
	void __fastcall ParaToDynFontRuns(Xlsaxweditor::TAXWLogPara* APara, /* out */ Xc12datastylesheet5::TXc12DynFontRunArray &ARuns);
	void __fastcall ParaToWorksheet(Xlsaxweditor::TAXWLogPara* APara, int &ACol, int &ARow, bool AInTable);
	void __fastcall TableToWorksheet(Xlsaxweditor::TAXWTable* ATable, int &ACol, int &ARow);
	void __fastcall ParasToWorksheet(Xlsaxweditor::TAXWLogParas* AParas, int &ACol, int &ARow, bool AInTable);
	
public:
	__fastcall TXLSDocConverter(Xc12manager5::TXc12Manager* AManager, Xlsutils5::TIndexObject* ASheet, Xlscolumn5::TXLSColumns* ACols, Xlsrow5::TXLSRows* ARows, Xlsaxweditor::TAXWLogDocEditor* ADoc);
	__fastcall virtual ~TXLSDocConverter();
	void __fastcall ToDynFontRuns(/* out */ Xc12datastylesheet5::TXc12DynFontRunArray &ARuns);
	void __fastcall ToDoc(System::UnicodeString AText, Xc12datastylesheet5::PXc12FontRunArray ARuns, int ACount);
	void __fastcall ToWorksheet(int &ACol, int &ARow);
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall AXWDocToDynFontRuns(Xc12manager5::TXc12Manager* AManager, Xlsaxweditor::TAXWLogDocEditor* ADoc, Xlsutils5::TIndexObject* ASheet, Xlscolumn5::TXLSColumns* ACols, Xlsrow5::TXLSRows* ARows, /* out */ Xc12datastylesheet5::TXc12DynFontRunArray &ARuns);
extern DELPHI_PACKAGE void __fastcall FontRunsToAXWDoc(Xc12manager5::TXc12Manager* AManager, Xlsutils5::TIndexObject* ASheet, Xlscolumn5::TXLSColumns* ACols, Xlsrow5::TXLSRows* ARows, System::UnicodeString AText, Xc12datastylesheet5::PXc12FontRunArray ARuns, int ACount, Xlsaxweditor::TAXWLogDocEditor* ADoc);
extern DELPHI_PACKAGE void __fastcall AXWDocToWorksheet(Xc12manager5::TXc12Manager* AManager, Xlsaxweditor::TAXWLogDocEditor* ADoc, Xlsutils5::TIndexObject* ASheet, Xlscolumn5::TXLSColumns* ACols, Xlsrow5::TXLSRows* ARows, int &ACol, int &ARow);
}	/* namespace Xlsrtfutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSRTFUTILS)
using namespace Xlsrtfutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XlsrtfutilsHPP
