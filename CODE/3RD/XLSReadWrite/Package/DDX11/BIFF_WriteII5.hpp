// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_WriteII5.pas' rev: 35.00 (Windows)

#ifndef Biff_writeii5HPP
#define Biff_writeii5HPP

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
#include <Winapi.Windows.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_SheetData5.hpp>
#include <BIFF_Stream5.hpp>
#include <BIFF_Utils5.hpp>
#include <BIFF5.hpp>
#include <BIFF_RecordStorage5.hpp>
#include <BIFF_EncodeFormulaII5.hpp>
#include <BIFF_ExcelFuncII5.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Manager5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12DataWorkbook5.hpp>
#include <Xc12DataWorksheet5.hpp>
#include <Xc12DataSST5.hpp>
#include <XLSUtils5.hpp>
#include <XLSMMU5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSFormulaTypes5.hpp>
#include <XLSDecodeFmla5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_writeii5
{
//-- forward type declarations -----------------------------------------------
struct TRKData;
struct TMulblankData;
class DELPHICLASS TBoundsheetData;
class DELPHICLASS TBoundsheetList;
class DELPHICLASS TXLSWriteII;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TBoundsheetType : unsigned char { btSheet, btChart, btVBModule, btExcel4Macro };

struct DECLSPEC_DRECORD TRKData
{
public:
	System::StaticArray<Biff_recsii5::TMULRK, 256> Cache;
	int CachePtr;
	int FirstCol;
	int LastCol;
};


struct DECLSPEC_DRECORD TMulblankData
{
public:
	System::StaticArray<System::Word, 256> Cache;
	int CachePtr;
	int FirstCol;
	int LastCol;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TBoundsheetData : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TBoundsheetType FBoundsheetType;
	int FIndex;
	int FFilePos;
	System::UnicodeString FName;
	Biff_sheetdata5::THiddenState FHidden;
	
public:
	void __fastcall WritePos(Biff_stream5::TXLSStream* Stream);
	__property TBoundsheetType BoundsheetType = {read=FBoundsheetType, write=FBoundsheetType, nodefault};
	__property int Index = {read=FIndex, write=FIndex, nodefault};
	__property int FilePos = {read=FFilePos, write=FFilePos, nodefault};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property Biff_sheetdata5::THiddenState Hidden = {read=FHidden, write=FHidden, nodefault};
public:
	/* TObject.Create */ inline __fastcall TBoundsheetData() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TBoundsheetData() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBoundsheetList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TBoundsheetData* operator[](int Index) { return this->Items[Index]; }
	
private:
	TBoundsheetData* __fastcall GetCharts(int Index);
	TBoundsheetData* __fastcall GetItems(int Index);
	TBoundsheetData* __fastcall GetSheets(int Index);
	
public:
	int __fastcall Find(System::UnicodeString AName);
	void __fastcall AddSheet(int Index, System::UnicodeString Name, Biff_sheetdata5::THiddenState Hidden, Biff_sheetdata5::TWorksheetType WorksheetType);
	void __fastcall AddChart(int Index, System::UnicodeString Name);
	__property TBoundsheetData* Items[int Index] = {read=GetItems/*, default*/};
	__property TBoundsheetData* Sheets[int Index] = {read=GetSheets};
	__property TBoundsheetData* Charts[int Index] = {read=GetCharts};
public:
	/* TObjectList.Create */ inline __fastcall TBoundsheetList()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TBoundsheetList(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TBoundsheetList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSWriteII : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	Biff5::TBIFF5* FXLS;
	Xc12utils5::TExcelVersion FVersion;
	System::Sysutils::TByteArray *PBuf;
	int FCurrSheet;
	Xc12dataworksheet5::TXc12DataWorksheet* FCurrXc12Sheet;
	Biff_stream5::TXLSStream* FXLSStream;
	TBoundsheetList* FBoundsheetList;
	TRKData FRKData;
	TMulblankData FMulblankData;
	bool FExternalNamesWritten;
	bool FVBAWritten;
	void __fastcall WriteRecId(System::Word RecId);
	void __fastcall WriteWord(System::Word RecId, System::Word Value);
	void __fastcall WriteBoolean(System::Word RecId, bool Value);
	void __fastcall WriteBuf(System::Word RecId, System::Word Size)/* overload */;
	void __fastcall WriteBuf(System::Word RecId, System::Word Size, void * P)/* overload */;
	void __fastcall WritePointer(System::Word RecId, void * P, System::Word Size);
	void __fastcall WREC_BOF(Biff_recsii5::TSubStreamType SubStreamType);
	void __fastcall WREC_WRITEACCESS();
	void __fastcall WREC_CODEPAGE();
	void __fastcall WREC_DSF();
	void __fastcall WREC_EXCEL9FILE();
	void __fastcall WREC_OBPROJ();
	void __fastcall WREC_WINDOWPROTECT();
	void __fastcall WREC_PASSWORD();
	void __fastcall WREC_WINDOW1();
	void __fastcall WREC_BACKUP();
	void __fastcall WREC_HIDEOBJ();
	void __fastcall WREC_1904();
	void __fastcall WREC_PRECISION();
	void __fastcall WREC_REFRESHALL();
	void __fastcall WREC_BOOKBOOL();
	void __fastcall WREC_FONT();
	void __fastcall WREC_FORMAT();
	void __fastcall WREC_XF();
	void __fastcall WREC_STYLE();
	void __fastcall WREC_PALETTE();
	void __fastcall WREC_USESELFS();
	void __fastcall WREC_BOUNDSHEET(int Index);
	void __fastcall WREC_COUNTRY();
	void __fastcall WREC_SST();
	void __fastcall WREC_SUPBOOK();
	void __fastcall WREC_EXTERNSHEET();
	void __fastcall WREC_NAME();
	void __fastcall WREC_EOF();
	void __fastcall WREC_CALCMODE();
	void __fastcall WREC_CALCCOUNT();
	void __fastcall WREC_REFMODE();
	void __fastcall WREC_ITERATION();
	void __fastcall WREC_DELTA();
	void __fastcall WREC_SAVERECALC();
	void __fastcall WREC_PRINTHEADERS();
	void __fastcall WREC_PRINTGRIDLINES();
	void __fastcall WREC_GUTS();
	void __fastcall WREC_GRIDSET();
	void __fastcall WREC_DEFAULTROWHEIGHT();
	void __fastcall WREC_WSBOOL();
	void __fastcall WREC_HORIZONTALPAGEBREAKS();
	void __fastcall WREC_VERTICALPAGEBREAKS();
	void __fastcall WREC_HEADER();
	void __fastcall WREC_FOOTER();
	void __fastcall WREC_HCENTER();
	void __fastcall WREC_VCENTER();
	void __fastcall WREC_MARGINS();
	void __fastcall WREC_DEFCOLWIDTH();
	void __fastcall WREC_SETUP();
	void __fastcall WREC_COLINFO();
	void __fastcall WREC_DIMENSIONS();
	void __fastcall WREC_ROW();
	void __fastcall WREC_MSODRAWING();
	void __fastcall WREC_NOTE();
	void __fastcall WREC_WINDOW2();
	void __fastcall WREC_SCL();
	void __fastcall WREC_PANE();
	void __fastcall WREC_SELECTION();
	void __fastcall WREC_FEATHEADR();
	void __fastcall WREC_MERGECELLS();
	void __fastcall WREC_CONDFMT();
	void __fastcall WREC_HLINK();
	void __fastcall WREC_DVAL();
	void __fastcall Write50FormatBlock();
	int __fastcall CheckDeafultXF(const int AXFIndex);
	bool __fastcall RkEncode(const double Value, unsigned &RK);
	void __fastcall RkFlushCache(const int ACurrRow);
	bool __fastcall RkAdd(const unsigned RK, int XF, int Col);
	bool __fastcall MulblankAdd(const int XF, const int Col);
	void __fastcall MulblankFlushCache(const int ACurrRow);
	void __fastcall WriteSTRING(const System::UnicodeString AStr);
	void __fastcall WriteCells();
	
public:
	__fastcall TXLSWriteII(Biff5::TBIFF5* AXLS);
	__fastcall virtual ~TXLSWriteII();
	void __fastcall WriteToStream(System::Classes::TStream* Stream);
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Biff_writeii5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_WRITEII5)
using namespace Biff_writeii5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_writeii5HPP
