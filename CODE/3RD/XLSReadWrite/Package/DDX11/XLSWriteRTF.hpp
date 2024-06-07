// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSWriteRTF.pas' rev: 35.00 (Windows)

#ifndef XlswritertfHPP
#define XlswritertfHPP

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
#include <System.StrUtils.hpp>
#include <System.IniFiles.hpp>
#include <System.Math.hpp>
#include <XLSUtils5.hpp>
#include <XLSAXWEditor.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlswritertf
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAXWWriteRTF;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWWriteRTF : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xlsaxweditor::TAXWLogDocEditor* FDoc;
	System::Classes::TStream* FStream;
	System::Inifiles::THashedStringList* FFontTable;
	System::Classes::TList* FColorTable;
	System::Inifiles::THashedStringList* FStyles;
	bool FHasNumbering;
	void __fastcall WChar(char AChar);
	void __fastcall WStr(System::UnicodeString AString)/* overload */;
	void __fastcall WStr(System::AnsiString AString)/* overload */;
	void __fastcall WStrUC(System::UnicodeString AString);
	void __fastcall WStrCR(System::UnicodeString AString);
	void __fastcall WCR();
	void __fastcall WProp(System::UnicodeString AName)/* overload */;
	void __fastcall WProp(System::UnicodeString AName, int AValue)/* overload */;
	void __fastcall WProp(System::UnicodeString AName, System::UnicodeString AValue)/* overload */;
	void __fastcall WBeginGroup()/* overload */;
	void __fastcall WBeginGroup(System::UnicodeString AName)/* overload */;
	void __fastcall WBeginGroup(System::UnicodeString AName, System::UnicodeString AValue)/* overload */;
	void __fastcall WBeginGroup(System::UnicodeString AName, int AValue)/* overload */;
	void __fastcall WPropPt(System::UnicodeString AName, double AValue);
	void __fastcall WPropTwips(System::UnicodeString AName, double AValue);
	void __fastcall WPropTwipsNZ(System::UnicodeString AName, double AValue);
	void __fastcall WStream(System::Classes::TStream* AStream);
	void __fastcall WShpProp(System::UnicodeString AName, System::UnicodeString AValue)/* overload */;
	void __fastcall WShpProp(System::UnicodeString AName, int AValue)/* overload */;
	void __fastcall WShpPropNZ(System::UnicodeString AName, int AValue);
	void __fastcall WBeginShpProp(System::UnicodeString AName, System::UnicodeString AValue);
	void __fastcall WBeginField(System::UnicodeString AName, System::UnicodeString AValue);
	void __fastcall WEndGroup(int ACount = 0x1);
	int __fastcall ColorIndex(unsigned AColor);
	void __fastcall AddColor(unsigned AColor);
	void __fastcall CollectBorderData(Xlsaxweditor::TAXWDocPropBorder* ABorder);
	void __fastcall CollectTableData(Xlsaxweditor::TAXWTable* ATable);
	void __fastcall CollectStylesData();
	void __fastcall CollectPAPXData(Xlsaxweditor::TAXWPAP* APAPX);
	void __fastcall CollectCHPXData(Xlsaxweditor::TAXWCHP* ACHPX);
	void __fastcall CollectParasData(Xlsaxweditor::TAXWLogParas* AParas);
	void __fastcall CollectNumberingsData();
	void __fastcall DoMainDocument();
	void __fastcall DoHeader();
	void __fastcall DoFontTable();
	void __fastcall DoColorTable();
	void __fastcall DoStyles();
	void __fastcall DoDocument(Xlsaxweditor::TAXWLogDocEditor* ADoc);
	void __fastcall DoHeadersFooters();
	void __fastcall DoNumberings();
	void __fastcall DoParas(Xlsaxweditor::TAXWLogParas* AParas, bool AInTable = false);
	void __fastcall DoPara(Xlsaxweditor::TAXWLogPara* APara);
	void __fastcall DoCharRun(Xlsaxweditor::TAXWLogPara* APara, Xlsaxweditor::TAXWCharRun* &ACR);
	void __fastcall DoTable(Xlsaxweditor::TAXWTable* ATable);
	void __fastcall DoBorder(System::UnicodeString AName, Xlsaxweditor::TAXWDocPropBorder* ABorder);
	void __fastcall DoCellBorder(Xlsaxweditor::TAXWTAP* ATAPX, Xlsaxweditor::TAXWTableCellProps* ACellProps, Xlsaxweditor::TAXWTapId ABorder);
	void __fastcall DoCHPX(Xlsaxweditor::TAXWPAP* APAPX, Xlsaxweditor::TAXWCHP* ACHPX);
	void __fastcall DoPAPX(Xlsaxweditor::TAXWLogPara* APara);
	void __fastcall DoSEP(Xlsaxweditor::TAXWSEP* ASEP);
	
public:
	__fastcall TAXWWriteRTF(Xlsaxweditor::TAXWLogDocEditor* ADoc);
	__fastcall virtual ~TAXWWriteRTF();
	void __fastcall SaveToStream(System::Classes::TStream* AStream);
	void __fastcall SaveToFile(const System::UnicodeString AFilename);
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int __fastcall EMU(double AValue);
}	/* namespace Xlswritertf */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSWRITERTF)
using namespace Xlswritertf;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XlswritertfHPP
