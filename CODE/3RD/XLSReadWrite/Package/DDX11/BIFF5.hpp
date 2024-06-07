// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF5.pas' rev: 35.00 (Windows)

#ifndef Biff5HPP
#define Biff5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.WinSpool.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Printers.hpp>
#include <Vcl.Forms.hpp>
#include <BIFF_Utils5.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_SheetData5.hpp>
#include <BIFF_Stream5.hpp>
#include <BIFF_RecordStorage5.hpp>
#include <BIFF_VBA5.hpp>
#include <BIFF_Names5.hpp>
#include <BIFF_ExcelFuncII5.hpp>
#include <BIFF_Escher5.hpp>
#include <BIFF_FormulaHandler5.hpp>
#include <BIFF_DrawingObjChart5.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12Manager5.hpp>
#include <XLSUtils5.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TStyles;
class DELPHICLASS TBIFF5;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXLSInteractError : unsigned char { xieNone, xieCanNotChangeMerged };

enum DECLSPEC_DENUM TWorkbookOption : unsigned char { woHidden, woIconized, woHScroll, woVScroll, woTabs };

typedef System::Set<TWorkbookOption, TWorkbookOption::woHidden, TWorkbookOption::woTabs> TWorkbookOptions;

enum DECLSPEC_DENUM TCalcMode : unsigned char { cm97Manual, cm97Automatic, cm97AutoExTables };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TStyles : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	Biff_recsii5::PRecSTYLE operator[](int Index) { return this->Items[Index]; }
	
private:
	Biff_recsii5::PRecSTYLE __fastcall GetItems(int Index);
	
public:
	__fastcall virtual ~TStyles();
	virtual void __fastcall Clear();
	HIDESBASE void __fastcall Add(Biff_recsii5::PRecSTYLE Style);
	__property Biff_recsii5::PRecSTYLE Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TObject.Create */ inline __fastcall TStyles() : System::Classes::TList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TBIFF5 : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
	
private:
	typedef System::DynamicArray<System::Byte> _TBIFF5__1;
	
	
public:
	Biff_sheetdata5::TSheet* operator[](int Index) { return this->Sheet[Index]; }
	
private:
	Xc12manager5::TXc12Manager* FManager;
	System::UnicodeString FFilename;
	System::Classes::TStream* FTempStream;
	Xc12utils5::TExcelVersion FVersion;
	Xc12utils5::TExcelVersion FOrigVersion;
	Biff_sheetdata5::TSheets* FSheets;
	Xc12datastylesheet5::TXc12Fonts* FFonts;
	int FMaxBuffsize;
	bool FIsMac;
	bool FWriteDefaultData;
	int FDefaultCountryIndex;
	int FWinIniCountry;
	bool FShowFormulas;
	System::Classes::TNotifyEvent FAfterLoad;
	Biff_formulahandler5::TFormulaHandler* FFormulaHandler;
	Xlsutils5::TIntegerEvent FProgressEvent;
	Biff_utils5::TFunctionEvent FFunctionEvent;
	Xlsutils5::TXLSPasswordEvent FPasswordEvent;
	TStyles* FStyles;
	Biff_recordstorage5::TRecordStorageGlobals* FRecords;
	Biff_stream5::TExtraObjects* FExtraObjects;
	Biff_vba5::TXLSVBA* FVBA;
	Biff_escher5::TMSOPictures* FMSOPictures;
	Biff_drawingobjchart5::TSheetCharts* FSheetCharts;
	bool FPreserveMacros;
	System::UnicodeString FPassword;
	Xc12utils5::TXc12PaperSize FDefaultPaperSize;
	int FCellCount;
	int FProgressCount;
	_TBIFF5__1 FFILESHARING;
	bool FAborted;
	bool FSkipDrawing;
	bool FSaveFormulasAs2007;
	TXLSInteractError FInteractError;
	bool __fastcall GetRecomendReadOnly();
	void __fastcall SetRecomendReadOnly(const bool Value);
	void __fastcall SetVersion(Xc12utils5::TExcelVersion Value);
	void __fastcall SetCodepage(System::Word Value);
	void __fastcall FormulaHandlerSheetName(System::UnicodeString Name, int &Index, int &Count);
	System::UnicodeString __fastcall FormulaHandlerSheetData(Biff_formulahandler5::TSheetDataType DataType, int SheetIndex, int Col, int Row);
	System::Word __fastcall GetCodepage();
	System::UnicodeString __fastcall GetUserName();
	void __fastcall SetUserName(const System::UnicodeString Value);
	bool __fastcall GetBookProtected();
	void __fastcall SetBookProtected(const bool Value);
	bool __fastcall GetBackup();
	void __fastcall SetBackup(const bool Value);
	bool __fastcall GetRefreshAll();
	void __fastcall SetRefreshAll(const bool Value);
	System::UnicodeString __fastcall GetVersionNumber();
	void __fastcall SetVerionNumber(const System::UnicodeString Value);
	Biff_names5::TInternalNames* __fastcall GetInternalNames();
	void __fastcall SetInternalNames(Biff_names5::TInternalNames* const Value);
	void __fastcall SetStrFALSE(const System::UnicodeString Value);
	void __fastcall SetStrTRUE(const System::UnicodeString Value);
	System::Uitypes::TColor __fastcall GetPalette(int Index);
	void __fastcall SetPalette(int Index, const System::Uitypes::TColor Value);
	Biff_sheetdata5::TSheet* __fastcall GetSheet(int Index);
	void __fastcall SetFilename(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetStrFALSE();
	System::UnicodeString __fastcall GetStrTRUE();
	void __fastcall WritePrepare();
	bool __fastcall GetReadMacros();
	void __fastcall SetReadMacros(const bool Value);
	
protected:
	void __fastcall InternalNameDeleted(System::TObject* Sender, const int Delta);
	void __fastcall InternalName(System::UnicodeString Name, int &ID);
	
public:
	__fastcall TBIFF5(Xc12manager5::TXc12Manager* AManager);
	__fastcall virtual ~TBIFF5();
	void __fastcall ClearCells();
	void __fastcall Clear();
	void __fastcall Read();
	void __fastcall Write();
	void __fastcall WriteToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	System::UnicodeString __fastcall GetWeakPassword();
	int __fastcall MaxRowCount();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	void __fastcall Abort();
	bool __fastcall Aborted();
	__property Xc12utils5::TXc12PaperSize DefaultPaperSize = {read=FDefaultPaperSize, write=FDefaultPaperSize, nodefault};
	__property Xc12manager5::TXc12Manager* Manager = {read=FManager};
	__property bool WriteDefaultData = {read=FWriteDefaultData, write=FWriteDefaultData, nodefault};
	__property int MaxBuffSize = {read=FMaxBuffsize, nodefault};
	__property TStyles* Styles = {read=FStyles};
	__property System::Classes::TNotifyEvent OnAfterLoad = {read=FAfterLoad, write=FAfterLoad};
	__property Biff_recordstorage5::TRecordStorageGlobals* Records = {read=FRecords};
	__property Biff_stream5::TExtraObjects* ExtraObjects = {read=FExtraObjects};
	__property Xc12datastylesheet5::TXc12Fonts* Fonts = {read=FFonts, write=FFonts};
	Biff_utils5::TFormulaValue __fastcall GetExternNameValue(int NameIndex, int SheetIndex);
	void __fastcall SetFILESHARING(System::Sysutils::PByteArray PBuf, int Size);
	int __fastcall GetFILESHARING(System::Sysutils::PByteArray PBuf);
	__property Biff_names5::TInternalNames* InternalNames = {read=GetInternalNames, write=SetInternalNames};
	__property Biff_drawingobjchart5::TSheetCharts* SheetCharts = {read=FSheetCharts};
	__property int DefaultCountryIndex = {read=FDefaultCountryIndex, write=FDefaultCountryIndex, nodefault};
	__property int WinIniCountry = {read=FWinIniCountry, write=FWinIniCountry, nodefault};
	__property Biff_formulahandler5::TFormulaHandler* FormulaHandler = {read=FFormulaHandler};
	__property System::Word Codepage = {read=GetCodepage, write=SetCodepage, nodefault};
	__property System::Uitypes::TColor Palette[int Index] = {read=GetPalette, write=SetPalette};
	__property Biff_sheetdata5::TSheet* Sheet[int Index] = {read=GetSheet/*, default*/};
	__property TXLSInteractError InteractError = {read=FInteractError, write=FInteractError, nodefault};
	__property Biff_vba5::TXLSVBA* VBA = {read=FVBA};
	__property Xc12utils5::TExcelVersion Version = {read=FVersion, write=SetVersion, nodefault};
	__property Xc12utils5::TExcelVersion OrigVersion = {read=FOrigVersion, nodefault};
	__property Biff_sheetdata5::TSheets* Sheets = {read=FSheets, write=FSheets};
	__property System::UnicodeString UserName = {read=GetUserName, write=SetUserName};
	__property bool BookProtected = {read=GetBookProtected, write=SetBookProtected, nodefault};
	__property bool Backup = {read=GetBackup, write=SetBackup, nodefault};
	__property bool RefreshAll = {read=GetRefreshAll, write=SetRefreshAll, nodefault};
	__property System::UnicodeString StrTRUE = {read=GetStrTRUE, write=SetStrTRUE};
	__property System::UnicodeString StrFALSE = {read=GetStrFALSE, write=SetStrFALSE};
	__property bool ShowFormulas = {read=FShowFormulas, write=FShowFormulas, nodefault};
	__property System::UnicodeString Filename = {read=FFilename, write=SetFilename};
	__property bool IsMac = {read=FIsMac, write=FIsMac, nodefault};
	__property bool PreserveMacros = {read=FPreserveMacros, write=FPreserveMacros, nodefault};
	__property bool ReadMacros = {read=GetReadMacros, write=SetReadMacros, nodefault};
	__property System::UnicodeString ComponentVersion = {read=GetVersionNumber, write=SetVerionNumber};
	__property Biff_escher5::TMSOPictures* MSOPictures = {read=FMSOPictures, write=FMSOPictures};
	__property System::UnicodeString Password = {read=FPassword, write=FPassword};
	__property bool RecomendReadOnly = {read=GetRecomendReadOnly, write=SetRecomendReadOnly, nodefault};
	__property bool SkipDrawing = {read=FSkipDrawing, write=FSkipDrawing, nodefault};
	__property bool SaveFormulasAs2007 = {read=FSaveFormulasAs2007, write=FSaveFormulasAs2007, nodefault};
	__property Xlsutils5::TIntegerEvent OnProgress = {read=FProgressEvent, write=FProgressEvent};
	__property Biff_utils5::TFunctionEvent OnFunction = {read=FFunctionEvent, write=FFunctionEvent};
	__property Xlsutils5::TXLSPasswordEvent OnPassword = {read=FPasswordEvent, write=FPasswordEvent};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Biff5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF5)
using namespace Biff5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff5HPP
