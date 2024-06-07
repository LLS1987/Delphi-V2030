// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSExportHTML5.pas' rev: 35.00 (Windows)

#ifndef Xlsexporthtml5HPP
#define Xlsexporthtml5HPP

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
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12DataWorksheet5.hpp>
#include <XLSUtils5.hpp>
#include <XLSTools5.hpp>
#include <XLSExport5.hpp>
#include <XLSMMU5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSSheetData5.hpp>
#include <XLSCellAreas5.hpp>
#include <XLSMergedCells5.hpp>
#include <XLSHyperlinks5.hpp>
#include <XLSDrawing5.hpp>
#include <XLSComment5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsexporthtml5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TTABLEProperties;
class DELPHICLASS TXLSExportHTML5;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXLSExportOptionHTML : unsigned char { xeohComments, xeohImages, xeohWriteImages, xeohHyperlinks };

typedef System::Set<TXLSExportOptionHTML, TXLSExportOptionHTML::xeohComments, TXLSExportOptionHTML::xeohHyperlinks> TXLSExportOptionsHTML;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TTABLEProperties : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FBordeWidth;
	int FCellPadding;
	int FCellSpacing;
	
__published:
	__property int BordeWidth = {read=FBordeWidth, write=FBordeWidth, nodefault};
	__property int CellPadding = {read=FCellPadding, write=FCellPadding, nodefault};
	__property int CellSpacing = {read=FCellSpacing, write=FCellSpacing, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TTABLEProperties() { }
	
public:
	/* TObject.Create */ inline __fastcall TTABLEProperties() : System::Classes::TPersistent() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSExportHTML5 : public Xlsexport5::TXLSExport5
{
	typedef Xlsexport5::TXLSExport5 inherited;
	
	
private:
	typedef System::DynamicArray<Xc12utils5::TXLSCellRef> _TXLSExportHTML5__1;
	
	
private:
	bool __fastcall GetWriteOnlyTables();
	void __fastcall SetWriteOnlyTables(const bool Value);
	System::UnicodeString __fastcall GetTitle();
	
protected:
	System::Classes::TStream* FStream;
	_TXLSExportHTML5__1 FLinkTargets;
	int FTargetCount;
	int FImageCount;
	int FCommentCount;
	System::UnicodeString FTitle;
	TTABLEProperties* FTABLE;
	bool FSimpleExport;
	TXLSExportOptionsHTML FHTMLOptions;
	void __fastcall WString(System::UnicodeString S);
	void __fastcall WStringCR(System::UnicodeString S);
	void __fastcall AddLinkTarget(const int ACol, const int ARow);
	bool __fastcall FindLinkTarget(const int ACol, const int ARow);
	void __fastcall WriteCSS();
	System::UnicodeString __fastcall GetCellHTML(Xlssheetdata5::TXLSWorksheet* Sheet, const Xlscellmmu5::TXLSCellItem &ACell);
	System::UnicodeString __fastcall GetImageHTML(Xlssheetdata5::TXLSWorksheet* Sheet, Xlsdrawing5::TXLSDrawingImage* AImage, const System::UnicodeString AImageName);
	virtual bool __fastcall ExportImages();
	virtual void __fastcall OpenFile();
	virtual void __fastcall WriteFilePrefix();
	virtual void __fastcall WritePagePrefix();
	virtual void __fastcall WriteRowPrefix(const int ARow);
	virtual void __fastcall WriteCell(const int Col, const int Row, const bool IsFirstCol, const bool IsFirstRow);
	void __fastcall WriteCellSimple(const int Col, const int Row, const bool IsFirstCol, const bool IsFirstRow);
	virtual void __fastcall WriteRowSuffix();
	virtual void __fastcall WritePageSuffix();
	virtual void __fastcall WriteFileSuffix();
	virtual void __fastcall CloseFile();
	
public:
	__fastcall virtual TXLSExportHTML5(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TXLSExportHTML5();
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	
__published:
	__property System::UnicodeString Title = {read=GetTitle, write=FTitle};
	__property bool WriteOnlyTables = {read=GetWriteOnlyTables, write=SetWriteOnlyTables, nodefault};
	__property bool SimpleExport = {read=FSimpleExport, write=FSimpleExport, nodefault};
	__property TXLSExportOptionsHTML HTMLOPtions = {read=FHTMLOptions, write=FHTMLOptions, nodefault};
	__property TTABLEProperties* TABLE = {read=FTABLE, write=FTABLE};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsexporthtml5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSEXPORTHTML5)
using namespace Xlsexporthtml5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsexporthtml5HPP
