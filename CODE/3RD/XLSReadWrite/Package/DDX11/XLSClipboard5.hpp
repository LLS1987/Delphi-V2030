// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSClipboard5.pas' rev: 35.00 (Windows)

#ifndef Xlsclipboard5HPP
#define Xlsclipboard5HPP

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
#include <Xc12Utils5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <Xc12Manager5.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_Stream5.hpp>
#include <BIFF_Utils5.hpp>
#include <BIFF12_Recs5.hpp>
#include <XLSUtils5.hpp>
#include <XLSFormulaTypes5.hpp>
#include <XLSMMU5.hpp>
#include <XLSCellMMU5.hpp>
#include <XLSReadWriteOPC5.hpp>
#include <XLSFormula5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsclipboard5
{
//-- forward type declarations -----------------------------------------------
struct TDataRSTRING;
class DELPHICLASS TXLSTextClipboard;
class DELPHICLASS TXLSBIFF8Clipboard;
class DELPHICLASS TXLSBIFF12Clipboard;
class DELPHICLASS TXLSXMLClipboard;
class DELPHICLASS TXLSClipboard;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXLSClipboardFormat : unsigned char { xcfNone, xcfText, xcfSYLK, xcfBIFF8, xcfBIFF12 };

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
class PASCALIMPLEMENTATION TXLSTextClipboard : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	System::Classes::TStrings* FList;
	int FSheet;
	int FCol;
	int FRow;
	bool FHasQuoteChar;
	System::WideChar FSepChar;
	Xlsformula5::TXLSFormulaHandler* FFormulas;
	int __fastcall CPosSkipQuote(System::WideChar C, System::UnicodeString S);
	System::UnicodeString __fastcall StrTokenSkipQuote(System::UnicodeString &S, System::WideChar Token);
	
public:
	__fastcall TXLSTextClipboard(Xc12manager5::TXc12Manager* AManager, const int ASheet, const int ACol, const int ARow);
	__fastcall virtual ~TXLSTextClipboard();
	void __fastcall Read(System::Classes::TStrings* AList);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSBIFF8Clipboard : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	Biff_stream5::TXLSStream* FStream;
	int FSheet;
	int FCol;
	int FRow;
	Biff_recsii5::TBIFFHeader FHeader;
	System::Sysutils::TByteArray *FBuf;
	int FBufSz;
	System::UnicodeString __fastcall BufAsString(const System::Sysutils::PByteArray AData, const int ALen);
	
public:
	__fastcall TXLSBIFF8Clipboard(Xc12manager5::TXc12Manager* AManager, const int ASheet, const int ACol, const int ARow);
	__fastcall virtual ~TXLSBIFF8Clipboard();
	void __fastcall Read(System::Classes::TStream* AStream);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSBIFF12Clipboard : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	System::Classes::TStream* FStream;
	int FSheet;
	int FCol;
	int FRow;
	int FRecId;
	int FRecSz;
	System::Sysutils::TByteArray *FBuf;
	int FBufSz;
	bool __fastcall ReadHeader();
	System::UnicodeString __fastcall BIFFString(const int ALength, System::Sysutils::PWordArray AString);
	
public:
	__fastcall TXLSBIFF12Clipboard(Xc12manager5::TXc12Manager* AManager, const int ASheet, const int ACol, const int ARow);
	__fastcall virtual ~TXLSBIFF12Clipboard();
	void __fastcall Read(System::Classes::TStream* AStream);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSXMLClipboard : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	System::Classes::TStream* FStream;
	int FSheet;
	int FCol;
	int FRow;
	
public:
	__fastcall TXLSXMLClipboard(Xc12manager5::TXc12Manager* AManager, const int ASheet, const int ACol, const int ARow);
	__fastcall virtual ~TXLSXMLClipboard();
	void __fastcall Read(System::Classes::TStream* AStream);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSClipboard : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	int FWinCF;
	bool __fastcall WantThis(const TXLSClipboardFormat AFormat, const TXLSClipboardFormat *AFormats, const int AFormats_High);
	void __fastcall Open();
	TXLSClipboardFormat __fastcall Available(const TXLSClipboardFormat *AFormats, const int AFormats_High);
	bool __fastcall ReadAsStream(System::Classes::TStream* AStream);
	bool __fastcall ReadAsStrings(System::Classes::TStrings* AList);
	void __fastcall Close();
	void __fastcall DoPasteText(const int ASheet, const int ACol, const int ARow);
	void __fastcall DoPasteBIFF8(const int ASheet, const int ACol, const int ARow);
	void __fastcall DoPasteBIFF12(const int ASheet, const int ACol, const int ARow);
	void __fastcall DoPasteXML(const int ASheet, const int ACol, const int ARow);
	
public:
	__fastcall TXLSClipboard(Xc12manager5::TXc12Manager* AManager);
	__fastcall virtual ~TXLSClipboard();
	void __fastcall PasteFromClipboard(const int ASheet, const int ACol, const int ARow);
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::StaticArray<System::WideChar, 4> TextSepChars;
}	/* namespace Xlsclipboard5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSCLIPBOARD5)
using namespace Xlsclipboard5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsclipboard5HPP
