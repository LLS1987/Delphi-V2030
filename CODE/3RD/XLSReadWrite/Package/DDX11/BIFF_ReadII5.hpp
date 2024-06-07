// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_ReadII5.pas' rev: 35.00 (Windows)

#ifndef Biff_readii5HPP
#define Biff_readii5HPP

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
#include <Winapi.Windows.hpp>
#include <Vcl.Clipbrd.hpp>
#include <BIFF_Utils5.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_SheetData5.hpp>
#include <BIFF_Stream5.hpp>
#include <BIFF5.hpp>
#include <BIFF_DecodeFormula5.hpp>
#include <BIFF_RecordStorage5.hpp>
#include <BIFF_Escher5.hpp>
#include <BIFF_MergedCells5.hpp>
#include <BIFF_WideStrList5.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Manager5.hpp>
#include <Xc12DataWorkbook5.hpp>
#include <Xc12DataWorksheet5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12Common5.hpp>
#include <XLSUtils5.hpp>
#include <XLSMMU5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSFormulaTypes5.hpp>
#include <XLSCellAreas5.hpp>
#include <XLSHyperlinks5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_readii5
{
//-- forward type declarations -----------------------------------------------
struct TSharedFormula;
class DELPHICLASS TXLSReadII;
struct TRecCellXF;
struct TXFData;
struct TDataRSTRING;
class DELPHICLASS TXLSReadClipboard;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TSharedFormula
{
public:
	System::Word Row1;
	System::Word Row2;
	System::Byte Col1;
	System::Byte Col2;
	System::Word Len;
	System::Sysutils::TByteArray *Formula;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSReadII : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TSharedFormula> _TXLSReadII__1;
	
	typedef System::DynamicArray<System::UnicodeString> _TXLSReadII__2;
	
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	System::Sysutils::TByteArray *PBuf;
	Biff5::TBIFF5* FXLS;
	int FCurrSheet;
	Biff_stream5::TXLSStream* FXLSStream;
	System::Classes::TStringList* FBoundsheets;
	int FBoundsheetIndex;
	Biff_recsii5::TBIFFHeader Header;
	_TXLSReadII__1 FSharedFormulas;
	unsigned FBIFFVer;
	System::Sysutils::TByteArray *FLastARRAY;
	int FLastARRAYSize;
	int FMaxFormat;
	int FFormatCnt;
	_TXLSReadII__2 FEx40NumFmts;
	bool FEx40NumFmtsSaved;
	Biff_recordstorage5::TRecordStorage* CurrRecs;
	bool InsertRecord;
	int FCnt;
	Xc12dataworksheet5::TXc12DataWorksheet* FCurrXc12Sheet;
	bool FSkipMSO;
	void __fastcall RREC_FILEPASS();
	void __fastcall RREC_WRITEACCESS();
	void __fastcall RREC_FILESHAREING();
	void __fastcall RREC_CODEPAGE();
	void __fastcall RREC_DSF();
	void __fastcall RREC_FNGROUPCOUNT();
	void __fastcall RREC_WINDOWPROTECT();
	void __fastcall RREC_PROTECT();
	void __fastcall RREC_SCENPROTECT();
	void __fastcall RREC_OBJPROTECT();
	void __fastcall RREC_PASSWORD();
	void __fastcall RREC_PROT4REV();
	void __fastcall RREC_PROT4REVPASS();
	void __fastcall RREC_WINDOW1();
	void __fastcall RREC_BACKUP();
	void __fastcall RREC_HIDEOBJ();
	void __fastcall RREC_1904();
	void __fastcall RREC_PRECISION();
	void __fastcall RREC_REFRESHALL();
	void __fastcall RREC_BOOKBOOL();
	void __fastcall RREC_PALETTE();
	void __fastcall RREC_FONT();
	void __fastcall RRec_FONT_40();
	void __fastcall RREC_FORMAT();
	void __fastcall RREC_FORMAT_40();
	void __fastcall RREC_XF();
	void __fastcall RREC_XF_40();
	void __fastcall RREC_STYLE();
	void __fastcall RREC_NAME();
	void __fastcall RREC_SUPBOOK();
	void __fastcall RREC_EXTERNNAME();
	void __fastcall RREC_XCT();
	void __fastcall RREC_EXTERNCOUNT();
	void __fastcall RREC_EXTERNSHEET();
	void __fastcall RREC_BOUNDSHEET();
	void __fastcall RREC_COUNTRY();
	void __fastcall RREC_RECALCID();
	void __fastcall RREC_MSODRAWINGGROUP();
	void __fastcall RREC_MSO_0866();
	void __fastcall RREC_SST();
	void __fastcall RREC_EXTSST();
	void __fastcall RREC_EOF();
	void __fastcall RREC_CALCMODE();
	void __fastcall RREC_CALCCOUNT();
	void __fastcall RREC_REFMODE();
	void __fastcall RREC_ITERATION();
	void __fastcall RREC_DELTA();
	void __fastcall RREC_SAVERECALC();
	void __fastcall RREC_PRINTHEADERS();
	void __fastcall RREC_PRINTGRIDLINES();
	void __fastcall RREC_GRIDSET();
	void __fastcall RREC_GUTS();
	void __fastcall RREC_DEFAULTROWHEIGHT();
	void __fastcall RREC_WSBOOL();
	void __fastcall RREC_HORIZONTALPAGEBREAKS();
	void __fastcall RREC_VERTICALPAGEBREAKS();
	void __fastcall RREC_HEADER();
	void __fastcall RREC_FOOTER();
	void __fastcall RREC_HCENTER();
	void __fastcall RREC_VCENTER();
	void __fastcall RREC_SETUP();
	void __fastcall RREC_LEFTMARGIN();
	void __fastcall RREC_RIGHTMARGIN();
	void __fastcall RREC_TOPMARGIN();
	void __fastcall RREC_BOTTOMMARGIN();
	void __fastcall RREC_DEFCOLWIDTH();
	void __fastcall RREC_FILTERMODE();
	void __fastcall RREC_AUTOFILTERINFO();
	void __fastcall RREC_COLWIDTH();
	void __fastcall RREC_COLINFO();
	void __fastcall RREC_DIMENSIONS();
	void __fastcall RREC_INTEGER_20();
	void __fastcall RREC_NUMBER_20();
	void __fastcall RREC_LABEL_20();
	void __fastcall RREC_ROW();
	void __fastcall RREC_BLANK();
	void __fastcall RREC_BOOLERR();
	void __fastcall RREC_FORMULA();
	void __fastcall RREC_NUMBER();
	void __fastcall RREC_RK();
	void __fastcall RREC_MULRK();
	void __fastcall RREC_MULBLANK();
	void __fastcall RREC_LABELSST();
	void __fastcall RREC_LABEL();
	void __fastcall RREC_LABEL_X();
	void __fastcall RREC_RSTRING();
	void __fastcall RREC_NOTE();
	void __fastcall READ_SHRFMLA();
	void __fastcall RREC_MSODRAWING();
	void __fastcall RREC_MSODRAWINGSELECTION();
	void __fastcall RREC_WINDOW2();
	void __fastcall RREC_SCL();
	void __fastcall RREC_PANE();
	void __fastcall RREC_SELECTION();
	void __fastcall RREC_SHEETEXT();
	void __fastcall RREC_FEATHEADR();
	void __fastcall RREC_DVAL();
	void __fastcall RREC_MERGEDCELLS();
	void __fastcall RREC_CONDFMT();
	void __fastcall RREC_HLINK();
	System::UnicodeString __fastcall CheckFmlaStrVal(System::UnicodeString AVal);
	void __fastcall Clear();
	void __fastcall ClearSharedFmla();
	void __fastcall ReadFormulaVal(int Col, int Row, int FormatIndex, double Value, System::Sysutils::PByteArray Formula, int Len, int DataSz);
	void __fastcall FixupSharedFormula(int LeftCol, int TopRow, int ACol, int ARow, bool FirstFormula);
	System::Word __fastcall SSTReadCONTINUE();
	System::Sysutils::PByteArray __fastcall SSTReadString(System::Word &RecSize);
	void __fastcall ReadSST(System::Word ARecSize);
	System::UnicodeString __fastcall GetNAMEString(System::Sysutils::PByteArray &P, int Len);
	void __fastcall ReadExcel40();
	void __fastcall CacheMSODrawing();
	void __fastcall SkipChart();
	void __fastcall DoDirectRead(const int ACol, const int ARow, double AValue)/* overload */;
	void __fastcall DoDirectRead(const int ACol, const int ARow, bool AValue)/* overload */;
	void __fastcall DoDirectRead(const int ACol, const int ARow, Xc12utils5::TXc12CellError AValue)/* overload */;
	void __fastcall DoDirectRead(const int ACol, const int ARow, System::UnicodeString AValue)/* overload */;
	
public:
	__fastcall TXLSReadII(Biff5::TBIFF5* AXLS);
	__fastcall virtual ~TXLSReadII();
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	void __fastcall LoadSheetNamesFromStream(System::Classes::TStream* Stream, System::Classes::TStrings* AList);
	__property bool SkipMSO = {read=FSkipMSO, write=FSkipMSO, nodefault};
};

#pragma pack(pop)

typedef TRecCellXF *PRecCellXF;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecCellXF
{
public:
	System::Word Row;
	System::Word Col;
	System::Word FormatIndex;
};
#pragma pack(pop)


struct DECLSPEC_DRECORD TXFData
{
public:
	int XF;
	int Font;
	int NumFmt;
};


typedef TDataRSTRING *PDataRSTRING;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TDataRSTRING
{
	
private:
	struct DECLSPEC_DRECORD _TDataRSTRING__1
	{
	};
	
	
	
public:
	System::Word Row;
	System::Word Col;
	System::Word FormatIndex;
	System::Word Len;
	System::Byte Options;
	_TDataRSTRING__1 Data;
};
#pragma pack(pop)


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSReadClipboard : public TXLSReadII
{
	typedef TXLSReadII inherited;
	
	
private:
	typedef System::DynamicArray<int> _TXLSReadClipboard__1;
	
	typedef System::DynamicArray<TXFData> _TXLSReadClipboard__2;
	
	
private:
	void __fastcall IncXF(int Index);
	void __fastcall DoRSTRING();
	void __fastcall SaveRSTRING();
	void __fastcall AdjustCell();
	
protected:
	Xc12utils5::TExcelVersion FVersion;
	_TXLSReadClipboard__1 FFONTUsage;
	_TXLSReadClipboard__1 FFORMATUsage;
	_TXLSReadClipboard__2 FXFUsage;
	int FXFCount;
	int FFONTCount;
	int FFORMATMax;
	Biff_recsii5::TRecCellAreaI FSrcArea;
	int FDestSheet;
	int FDestCol;
	int FDestRow;
	bool __fastcall ReadPass1();
	bool __fastcall ReadPass2();
	
public:
	bool __fastcall Read(System::Classes::TStream* AStream, const int ADestSheet, const int ADestCol, const int ADestRow);
public:
	/* TXLSReadII.Create */ inline __fastcall TXLSReadClipboard(Biff5::TBIFF5* AXLS) : TXLSReadII(AXLS) { }
	/* TXLSReadII.Destroy */ inline __fastcall virtual ~TXLSReadClipboard() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Biff_readii5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_READII5)
using namespace Biff_readii5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_readii5HPP
