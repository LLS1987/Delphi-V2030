// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSExport5.pas' rev: 35.00 (Windows)

#ifndef Xlsexport5HPP
#define Xlsexport5HPP

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
#include <XLSUtils5.hpp>
#include <XLSReadWriteII5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsexport5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSExport5;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXLSExportOption : unsigned char { xeoIncludeEmptyLeftCols, xeoIncludeEmptyTopRows, xeoSeparateFiles };

typedef System::Set<TXLSExportOption, TXLSExportOption::xeoIncludeEmptyLeftCols, TXLSExportOption::xeoSeparateFiles> TXLSExportOptions;

class PASCALIMPLEMENTATION TXLSExport5 : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
	
private:
	typedef System::DynamicArray<int> _TXLSExport5__1;
	
	
private:
	void __fastcall SetFilename(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetDirectory();
	void __fastcall SetDirectory(const System::UnicodeString Value);
	
protected:
	TXLSExportOptions FOptions;
	System::UnicodeString FFilename;
	System::UnicodeString FFileExtension;
	System::UnicodeString FCurrFilename;
	int FCurrMultiSheet;
	System::UnicodeString FDirectory;
	Xlsreadwriteii5::TXLSReadWriteII5* FXLS;
	int FCurrSheetIndex;
	int FFirstRow;
	int FFirstCol;
	int FCol1;
	int FCol2;
	int FRow1;
	int FRow2;
	_TXLSExport5__1 FSheets;
	virtual bool __fastcall ExportImages();
	virtual void __fastcall OpenFile();
	virtual void __fastcall WriteFilePrefix();
	virtual void __fastcall WritePagePrefix();
	virtual void __fastcall WriteRowPrefix(const int ARow);
	virtual void __fastcall WriteCell(const int Col, const int Row, const bool IsFirstCol, const bool IsFirstRow);
	virtual void __fastcall WriteRowSuffix();
	virtual void __fastcall WritePageSuffix();
	virtual void __fastcall WriteFileSuffix();
	virtual void __fastcall CloseFile();
	virtual void __fastcall WriteData();
	void __fastcall DoWriteSingle(const System::UnicodeString AFilename);
	void __fastcall DoWriteMulti();
	bool __fastcall CheckWriteSheet(const int AIndex);
	
public:
	__fastcall virtual TXLSExport5(System::Classes::TComponent* AOwner);
	void __fastcall Write();
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToFile(const System::UnicodeString AFilename);
	void __fastcall Sheets(const int *ASheetIndexes, const int ASheetIndexes_High);
	
__published:
	__property TXLSExportOptions Options = {read=FOptions, write=FOptions, nodefault};
	__property int Col1 = {read=FCol1, write=FCol1, nodefault};
	__property int Col2 = {read=FCol2, write=FCol2, nodefault};
	__property System::UnicodeString Filename = {read=FFilename, write=SetFilename};
	__property System::UnicodeString FileExtension = {read=FFileExtension, write=FFileExtension};
	__property System::UnicodeString Directory = {read=GetDirectory, write=SetDirectory};
	__property int Row1 = {read=FRow1, write=FRow1, nodefault};
	__property int Row2 = {read=FRow2, write=FRow2, nodefault};
	__property Xlsreadwriteii5::TXLSReadWriteII5* XLS = {read=FXLS, write=FXLS};
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TXLSExport5() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlsexport5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSEXPORT5)
using namespace Xlsexport5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsexport5HPP
