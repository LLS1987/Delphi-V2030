// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSReadWriteII5.pas' rev: 35.00 (Windows)

#ifndef Xlsreadwriteii5HPP
#define Xlsreadwriteii5HPP

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
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Win.ComObj.hpp>
#include <BIFF_VBA5.hpp>
#include <System.UITypes.hpp>
#include <xpgParseDrawing.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Manager5.hpp>
#include <Xc12DataWorkbook5.hpp>
#include <Xc12DefaultData5.hpp>
#include <Xc12Graphics.hpp>
#include <BIFF5.hpp>
#include <BIFF_Utils5.hpp>
#include <BIFF_ReadII5.hpp>
#include <BIFF_Escher5.hpp>
#include <BIFF_EscherTypes5.hpp>
#include <BIFF_DrawingObj5.hpp>
#include <BIFF_SheetData5.hpp>
#include <XLSEncryption5.hpp>
#include <XLSZip5.hpp>
#include <XLSUtils5.hpp>
#include <XLSReadXLSX5.hpp>
#include <XLSWriteXLSX5.hpp>
#include <XLSSheetData5.hpp>
#include <XLSFormula5.hpp>
#include <XLSNames5.hpp>
#include <XLSMergedCells5.hpp>
#include <XLSHyperlinks5.hpp>
#include <XLSValidate5.hpp>
#include <XLSAutofilter5.hpp>
#include <XLSCondFormat5.hpp>
#include <XLSClassFactory5.hpp>
#include <XLSEvaluateFmla5.hpp>
#include <XLSDrawing5.hpp>
#include <XLSRelCells5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsreadwriteii5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSClassFactoryImpl;
class DELPHICLASS TXLSReadWriteII5;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSClassFactoryImpl : public Xlsclassfactory5::TXLSClassFactory
{
	typedef Xlsclassfactory5::TXLSClassFactory inherited;
	
protected:
	TXLSReadWriteII5* FOwner;
	
public:
	__fastcall TXLSClassFactoryImpl(TXLSReadWriteII5* AOwner);
	virtual System::TObject* __fastcall CreateAClass(Xlsclassfactory5::TXLSClassFactoryType AClassType, System::TObject* AClassOwner = (System::TObject*)(0x0));
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSClassFactoryImpl() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TXLSReadWriteII5 : public Xlssheetdata5::TXLSWorkbook
{
	typedef Xlssheetdata5::TXLSWorkbook inherited;
	
private:
	System::UnicodeString __fastcall GetFilename();
	void __fastcall SetFilename(const System::UnicodeString Value);
	Xlsutils5::TXLSProgressEvent __fastcall GetProgressEvent();
	void __fastcall SetProgressEvent(const Xlsutils5::TXLSProgressEvent Value);
	System::UnicodeString __fastcall GetVersionNumber();
	void __fastcall SetVerionNumber(const System::UnicodeString Value);
	Xc12utils5::TExcelVersion __fastcall GetVersion();
	void __fastcall SetVersion(const Xc12utils5::TExcelVersion Value);
	System::UnicodeString __fastcall GetStrTRUE();
	void __fastcall SetStrTRUE(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetStrFALSE();
	void __fastcall SetStrFALSE(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetPassword();
	void __fastcall SetPassword(const System::UnicodeString Value);
	bool __fastcall GetDirectRead();
	bool __fastcall GetDirectWrite();
	void __fastcall SetDirectRead(const bool Value);
	void __fastcall SetDirectWrite(const bool Value);
	Xc12manager5::TCellReadWriteEvent __fastcall GetCellReadEvent();
	Xc12manager5::TCellReadWriteEvent __fastcall GetCellWriteEvent();
	void __fastcall SetCellReadEvent(const Xc12manager5::TCellReadWriteEvent Value);
	void __fastcall SetCellWriteEvent(const Xc12manager5::TCellReadWriteEvent Value);
	bool __fastcall GetUseAlternateZip();
	void __fastcall SetUseAlternateZip(const bool Value);
	Xlsevaluatefmla5::TUserFunctionEvent __fastcall GetUserFunctionEvent();
	void __fastcall SetUserFunctionEvent(const Xlsevaluatefmla5::TUserFunctionEvent Value);
	Xc12manager5::TXc12Manager* __fastcall GetManager();
	bool __fastcall GetCompressStrings();
	void __fastcall SetCompressStrings(const bool Value);
	bool __fastcall GetMonitorFile();
	void __fastcall SetMonitorFile(const bool Value);
	Biff5::TBIFF5* __fastcall GetBIFF();
	Biff_utils5::TFunctionEvent __fastcall GetFunctionEvent();
	void __fastcall SetFunctionEvent(const Biff_utils5::TFunctionEvent Value);
	
protected:
	Xlsutils5::TXLSErrorManager* FErrors;
	TXLSClassFactoryImpl* FClassFactory;
	bool FSkipExcel97Drw;
	Xlsutils5::TXLSPasswordEvent FPasswordEvent;
	NativeUInt FHMonitorObj;
	NativeUInt FHMonitorFile;
	bool FReadVBA;
	Biff_vba5::TXLSVBA* FVBA;
	Vcl::Extctrls::TTimer* FMonitorFileTimer;
	System::Classes::TNotifyEvent FMonitorFileEvent;
	bool FDoNotReadSheets;
	bool FNagMsgShown;
	virtual bool __fastcall AddImage97(Xpgparsedrawing::TCT_TwoCellAnchor* AAnchor, const int ASheetIndex);
	void __fastcall BeforeRead();
	HIDESBASE virtual void __fastcall AfterRead();
	HIDESBASE void __fastcall BeforeWrite();
	void __fastcall AddBIFFImages();
	void __fastcall AddBIFFComments();
	void __fastcall SaveBIFFComments();
	void __fastcall FixupRelativelCells();
	void __fastcall DoVBA(System::Classes::TStream* AStream);
	void __fastcall DoEndFileMonitor();
	void __fastcall DoMonitorFileEvent(System::TObject* ASender);
	
public:
	__fastcall virtual TXLSReadWriteII5(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TXLSReadWriteII5();
	HIDESBASE void __fastcall Clear(int ADefaulSheetsCount = 0x1);
	void __fastcall Read();
	void __fastcall LoadFromFile(System::UnicodeString AFilename);
	void __fastcall LoadFromStream(System::Classes::TStream* AStream, const bool AAutoDetect = true);
	void __fastcall LoadFromStream97(System::Classes::TStream* AStream);
	void __fastcall Write();
	void __fastcall SaveToFile(System::UnicodeString AFilename)/* overload */;
	void __fastcall SaveToFile(System::UnicodeString AFilename, Xc12utils5::TExcelVersion AVersion)/* overload */;
	void __fastcall SaveToStream(System::Classes::TStream* AStream, Xc12utils5::TExcelVersion AVersion = (Xc12utils5::TExcelVersion)(0x0));
	int __fastcall GetSheetNames(const System::UnicodeString AFilename, System::Classes::TStrings* AList);
	void __fastcall SetDirectWriteArea(const int ASheetIndex, const int ACol1, const int ARow1, const int ACol2, const int ARow2);
	bool __fastcall DoBeginFileMonitor();
	__property Biff5::TBIFF5* BIFF = {read=GetBIFF};
	__property bool ReadVBA = {read=FReadVBA, write=FReadVBA, nodefault};
	__property bool SkipExcel97Drawing = {read=FSkipExcel97Drw, write=FSkipExcel97Drw, nodefault};
	__property System::UnicodeString StrTRUE = {read=GetStrTRUE, write=SetStrTRUE};
	__property System::UnicodeString StrFALSE = {read=GetStrFALSE, write=SetStrFALSE};
	__property System::UnicodeString Password = {read=GetPassword, write=SetPassword};
	__property bool UseAlternateZip = {read=GetUseAlternateZip, write=SetUseAlternateZip, nodefault};
	__property bool CompressStrings = {read=GetCompressStrings, write=SetCompressStrings, nodefault};
	__property bool MonitorFile = {read=GetMonitorFile, write=SetMonitorFile, nodefault};
	__property Xc12manager5::TXc12Manager* Manager = {read=GetManager};
	
__published:
	__property System::UnicodeString ComponentVersion = {read=GetVersionNumber, write=SetVerionNumber};
	__property Xc12utils5::TExcelVersion Version = {read=GetVersion, write=SetVersion, nodefault};
	__property System::UnicodeString Filename = {read=GetFilename, write=SetFilename};
	__property bool DirectRead = {read=GetDirectRead, write=SetDirectRead, nodefault};
	__property bool DirectWrite = {read=GetDirectWrite, write=SetDirectWrite, nodefault};
	__property Xlsutils5::TXLSErrorManager* Errors = {read=FErrors};
	__property bool DoNotReadSheets = {read=FDoNotReadSheets, write=FDoNotReadSheets, nodefault};
	__property Xc12manager5::TCellReadWriteEvent OnReadCell = {read=GetCellReadEvent, write=SetCellReadEvent};
	__property Xc12manager5::TCellReadWriteEvent OnWriteCell = {read=GetCellWriteEvent, write=SetCellWriteEvent};
	__property Biff_utils5::TFunctionEvent OnFunction = {read=GetFunctionEvent, write=SetFunctionEvent};
	__property Xlsutils5::TXLSPasswordEvent OnPassword = {read=FPasswordEvent, write=FPasswordEvent};
	__property Xlsutils5::TXLSProgressEvent OnProgress = {read=GetProgressEvent, write=SetProgressEvent};
	__property Xlsevaluatefmla5::TUserFunctionEvent OnUserFunction = {read=GetUserFunctionEvent, write=SetUserFunctionEvent};
	__property Biff_vba5::TXLSVBA* VBA = {read=FVBA};
	__property System::Classes::TNotifyEvent OnMonitorFile = {read=FMonitorFileEvent, write=FMonitorFileEvent};
};


//-- var, const, procedure ---------------------------------------------------
#define XLSExcelFilesFilter L"Excel files|*.xls;*.xlt;*.xlsx;*.xlsm;*.xlst|All files|*.*"
#define XLSPictureFilesFilter L"Picture files|*.bmp;*.jpg;*.jpeg;*.png|All files|*.*"
}	/* namespace Xlsreadwriteii5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSREADWRITEII5)
using namespace Xlsreadwriteii5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsreadwriteii5HPP
