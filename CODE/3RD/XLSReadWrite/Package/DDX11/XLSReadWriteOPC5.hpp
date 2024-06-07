// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSReadWriteOPC5.pas' rev: 35.00 (Windows)

#ifndef Xlsreadwriteopc5HPP
#define Xlsreadwriteopc5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.IniFiles.hpp>
#include <System.Contnrs.hpp>
#include <XLSUtils5.hpp>
#include <XLSReadWriteZIP5.hpp>
#include <xpgPUtils.hpp>
#include <xpgParseOPC.hpp>
#include <xpgParseContentType.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsreadwriteopc5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TOPC_ContentType;
class DELPHICLASS TOPC_ContentTypeOverride;
class DELPHICLASS TOPC_ContentTypeDefault;
class DELPHICLASS TOPC_ContentTypes;
class DELPHICLASS TOPCItem;
class DELPHICLASS TOPCItemList;
class DELPHICLASS TOPCContainer;
class DELPHICLASS TOPC_XLSX;
class DELPHICLASS TOPC_DOCX;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TOPCTargetMode : unsigned char { otmExternal, otmInternal };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TOPC_ContentType : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FContentType;
	
public:
	__property System::UnicodeString ContentType = {read=FContentType, write=FContentType};
public:
	/* TObject.Create */ inline __fastcall TOPC_ContentType() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TOPC_ContentType() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TOPC_ContentTypeOverride : public TOPC_ContentType
{
	typedef TOPC_ContentType inherited;
	
protected:
	System::UnicodeString FPartName;
	
public:
	__property System::UnicodeString PartName = {read=FPartName, write=FPartName};
public:
	/* TObject.Create */ inline __fastcall TOPC_ContentTypeOverride() : TOPC_ContentType() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TOPC_ContentTypeOverride() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TOPC_ContentTypeDefault : public TOPC_ContentType
{
	typedef TOPC_ContentType inherited;
	
protected:
	System::UnicodeString FExtension;
	
public:
	__property System::UnicodeString Extension = {read=FExtension, write=FExtension};
public:
	/* TObject.Create */ inline __fastcall TOPC_ContentTypeDefault() : TOPC_ContentType() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TOPC_ContentTypeDefault() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TOPC_ContentTypes : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TOPC_ContentType* operator[](int Index) { return this->Items[Index]; }
	
private:
	TOPC_ContentType* __fastcall GetItems(int Index);
	
protected:
	bool FXLSXMode;
	
public:
	__fastcall TOPC_ContentTypes();
	HIDESBASE void __fastcall Clear();
	void __fastcall SetDefault();
	int __fastcall FindOverride(System::UnicodeString APartName);
	int __fastcall FindDefault(System::UnicodeString AExtension);
	void __fastcall AddOverride(System::UnicodeString APartName, System::UnicodeString AContentType);
	void __fastcall AddDefault(System::UnicodeString AExtension, System::UnicodeString AContentType);
	__property bool XLSXMode = {read=FXLSXMode, write=FXLSXMode, nodefault};
	__property TOPC_ContentType* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TOPC_ContentTypes() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TOPCState : unsigned char { opcsClosed, opcsRead, opcsWrite };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TOPCItem : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TOPCItem* operator[](int Index) { return this->Childs[Index]; }
	
private:
	TOPCItem* __fastcall GetItems(int Index);
	System::UnicodeString __fastcall GetTarget();
	void __fastcall SetTarget(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetId();
	
protected:
	TOPCContainer* FOwner;
	TOPCItem* FParent;
	int FIndex;
	System::Inifiles::THashedStringList* FChilds;
	TOPCState FState;
	System::UnicodeString FPath;
	System::UnicodeString FName;
	System::UnicodeString FType;
	System::UnicodeString FTarget;
	TOPCTargetMode FTargetMode;
	System::UnicodeString FText;
	bool FCheckedOut;
	System::Classes::TStream* FData;
	System::UnicodeString FContent;
	int FDebugId;
	void __fastcall ReadChilds();
	void __fastcall WriteChilds();
	TOPCItem* __fastcall Add(Xpgparseopc::TCT_Relationship* ARelationship);
	System::UnicodeString __fastcall MakeFilename_rels();
	System::UnicodeString __fastcall MakeId();
	
public:
	__fastcall TOPCItem(TOPCContainer* AOwner, TOPCItem* AParent);
	__fastcall virtual ~TOPCItem();
	void __fastcall Clear();
	bool __fastcall IsRoot();
	int __fastcall Count();
	TOPCItem* __fastcall Find(System::UnicodeString AId);
	bool __fastcall FindByType(System::UnicodeString ATypeName, TOPCItemList* AList, bool AClearList = true)/* overload */;
	TOPCItem* __fastcall FindByType(System::UnicodeString ATypeName)/* overload */;
	TOPCItem* __fastcall FindByTarget(System::UnicodeString ATarget);
	System::UnicodeString __fastcall FindTarget(System::UnicodeString AId);
	void __fastcall Checkout();
	void __fastcall CheckoutAll();
	System::UnicodeString __fastcall AbsolutePath();
	System::UnicodeString __fastcall AbsoluteTarget();
	TOPCItem* __fastcall AddNew(System::UnicodeString AType, System::UnicodeString ATarget);
	TOPCItem* __fastcall AddNewExternal(System::UnicodeString AType, System::UnicodeString ATarget);
	void __fastcall Close();
	__property TOPCItem* Parent = {read=FParent};
	__property TOPCState State = {read=FState, nodefault};
	__property System::UnicodeString Path = {read=FPath, write=FPath};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString Type_ = {read=FType, write=FType};
	__property System::UnicodeString Target = {read=GetTarget, write=SetTarget};
	__property TOPCTargetMode TargetMode = {read=FTargetMode, write=FTargetMode, nodefault};
	__property System::UnicodeString Id = {read=GetId};
	__property System::UnicodeString Text = {read=FText, write=FText};
	__property bool CheckedOut = {read=FCheckedOut, nodefault};
	__property System::Classes::TStream* Data = {read=FData, write=FData};
	__property System::UnicodeString Content = {read=FContent, write=FContent};
	__property TOPCItem* Childs[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TOPCItemList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TOPCItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TOPCItem* __fastcall GetItems(int Index);
	
public:
	__fastcall TOPCItemList();
	__property TOPCItem* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TOPCItemList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TOPCContainer : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TOPCState FState;
	Xlsreadwritezip5::TXLSZipArchiveIntf* FZIP;
	bool FAutoCheckout;
	TOPCItem* FRoot;
	System::UnicodeString FXmlns;
	TOPC_ContentTypes* FContentTypes;
	void __fastcall DebugDump(System::UnicodeString AFileName);
	void __fastcall ReadContentTypes();
	void __fastcall WriteContentTypes();
	
public:
	__fastcall TOPCContainer();
	__fastcall virtual ~TOPCContainer();
	void __fastcall Clear();
	virtual void __fastcall OpenRead(System::Classes::TStream* AStream, const bool AUseAlternateZip);
	virtual void __fastcall OpenWrite(System::Classes::TStream* AStream, const bool AUseAlternateZip);
	virtual void __fastcall Close();
	System::Classes::TStream* __fastcall ReadContentType();
	void __fastcall SaveItemData(TOPCItem* AItem);
	void __fastcall CollectUnchecked(TOPCItemList* AList);
	void __fastcall SaveUnchecked(TOPCItemList* AList);
	TOPCItem* __fastcall ItemCreate(TOPCItem* AOwner, System::UnicodeString AType, System::UnicodeString ATarget, System::UnicodeString AContentType);
	TOPCItem* __fastcall ItemCreateExternal(TOPCItem* AOwner, System::UnicodeString AType, System::UnicodeString ATarget);
	TOPCItem* __fastcall ItemOpenRead(TOPCItem* AOwner, System::UnicodeString AType)/* overload */;
	TOPCItem* __fastcall ItemOpenRead(TOPCItem* AOwner, System::UnicodeString AType, System::UnicodeString AId)/* overload */;
	System::Classes::TStream* __fastcall ItemOpenStream(TOPCItem* AItem);
	void __fastcall ItemWrite(TOPCItem* AItem, System::Classes::TStream* AStream);
	void __fastcall ItemClose(TOPCItem* AItem);
	System::Classes::TStream* __fastcall ItemCreateStream(TOPCItem* AItem);
	void __fastcall ItemCloseStream(TOPCItem* AItem, System::Classes::TStream* AStream);
	__property TOPCState State = {read=FState, nodefault};
	__property bool AutoCheckout = {read=FAutoCheckout, write=FAutoCheckout, nodefault};
	__property TOPCItem* Root = {read=FRoot};
	__property System::UnicodeString Xmlns = {read=FXmlns, write=FXmlns};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TOPC_XLSX : public TOPCContainer
{
	typedef TOPCContainer inherited;
	
protected:
	TOPCItemList* FResultList;
	TOPCItem* FWorkbook;
	TOPCItem* FCurrSheet;
	TOPCItem* FCurrChart;
	TOPCItem* FCurrDrawing;
	TOPCItem* FCurrTable;
	int FPrinterSettingsCount;
	int FChartCount;
	int FTableCount;
	int FQueryTableCount;
	int FPivotTableCount;
	void __fastcall CheckWorkbookOpen();
	System::Classes::TStream* __fastcall ReadItemData(TOPCItem* AItem);
	
public:
	__fastcall TOPC_XLSX();
	__fastcall virtual ~TOPC_XLSX();
	HIDESBASE void __fastcall Clear();
	virtual void __fastcall OpenRead(System::Classes::TStream* AStream, const bool AUseAlternateZip);
	virtual void __fastcall OpenWrite(System::Classes::TStream* AStream, const bool AUseAlternateZip);
	virtual void __fastcall Close();
	TOPCItem* __fastcall FindSheet(int AIndex);
	TOPCItem* __fastcall FindSheetBin(int AIndex);
	System::UnicodeString __fastcall FindDrawingId(TOPCItem* AOPCSheet);
	System::UnicodeString __fastcall FindVmlDrawingId(TOPCItem* AOPCSheet);
	System::UnicodeString __fastcall FindPrinterSettingsId(TOPCItem* AOPCSheet);
	System::UnicodeString __fastcall FindPictureId(TOPCItem* AOPCSheet, int AIndex);
	System::UnicodeString __fastcall FindTableId(TOPCItem* AOPCSheet, System::UnicodeString ATarget);
	TOPCItem* __fastcall FindAndOpenChart(System::UnicodeString AId);
	System::Classes::TStream* __fastcall ReadDocPropsApp();
	System::Classes::TStream* __fastcall ReadDocPropsCore();
	System::Classes::TStream* __fastcall ReadStyles();
	System::Classes::TStream* __fastcall ReadSST();
	System::Classes::TStream* __fastcall ReadConnections();
	System::Classes::TStream* __fastcall ReadWorkbook();
	System::Classes::TStream* __fastcall ReadComments(System::UnicodeString ASheetId);
	System::Classes::TStream* __fastcall ReadVBA();
	System::Classes::TStream* __fastcall ReadTable(System::UnicodeString AId);
	System::Classes::TStream* __fastcall ReadQueryTable();
	void __fastcall CloseTable();
	System::Classes::TStream* __fastcall ReadXLink(System::UnicodeString AId);
	System::Classes::TStream* __fastcall ReadPrinterSettings(System::UnicodeString AId);
	System::Classes::TStream* __fastcall ReadChart(System::UnicodeString AId);
	System::Classes::TStream* __fastcall ReadChartStyle(TOPCItem* AChart, System::UnicodeString AId);
	System::Classes::TStream* __fastcall ReadChartColors(TOPCItem* AChart, System::UnicodeString AId);
	System::Classes::TStream* __fastcall ReadAny(TOPCItem* AItem);
	System::Classes::TStream* __fastcall ReadVmlDrawing(System::UnicodeString AId, System::Classes::TStrings* ARels);
	System::Classes::TStream* __fastcall ReadPivotCacheDefinition(System::UnicodeString AId);
	System::Classes::TStream* __fastcall ReadPivotCacheRecords(const System::UnicodeString AOwnerId, const System::UnicodeString AId);
	System::Classes::TStream* __fastcall ReadPivotTable(System::UnicodeString AId);
	System::Classes::TStream* __fastcall ReadTheme();
	System::Classes::TStream* __fastcall OpenAndReadDrawing(System::UnicodeString AId);
	System::Classes::TStream* __fastcall ReadDrawingMedia(System::UnicodeString AId, /* out */ System::UnicodeString &ATarget);
	bool __fastcall GetDrawingImages(System::Classes::TStrings* AList);
	void __fastcall CloseDrawing();
	bool __fastcall SheetIsChartSheet(System::UnicodeString AId);
	System::Classes::TStream* __fastcall OpenAndReadSheet(System::UnicodeString AId);
	System::Classes::TStream* __fastcall OpenAndReadChartSheet(System::UnicodeString AId);
	bool __fastcall GetSheetPivotTables(System::Classes::TStrings* AList);
	void __fastcall CloseSheet();
	TOPCItem* __fastcall AddDocPropsCore(System::Classes::TStream* AStream);
	TOPCItem* __fastcall AddDocPropsApp(System::Classes::TStream* AStream);
	TOPCItem* __fastcall AddTheme(System::Classes::TStream* AStream, int AIndex);
	TOPCItem* __fastcall CreateSST();
	TOPCItem* __fastcall CreateConnections();
	TOPCItem* __fastcall CreateStyles();
	TOPCItem* __fastcall CreateWorkbook(bool AMacroEnabled);
	TOPCItem* __fastcall CreateSheet(int AIndex);
	TOPCItem* __fastcall CreateChartSheet(int AIndex);
	TOPCItem* __fastcall CreateComment(TOPCItem* AOwner, int AIndex);
	TOPCItem* __fastcall CreateTable(TOPCItem* AOwner);
	TOPCItem* __fastcall CreateQueryTable(TOPCItem* AOwner);
	TOPCItem* __fastcall CreateDrawing(TOPCItem* AOwner, int AIndex);
	TOPCItem* __fastcall CreateImage(const int AIndex, const System::UnicodeString AImageExt);
	TOPCItem* __fastcall CreateChart();
	void __fastcall CloseChart(TOPCItem* AItem);
	TOPCItem* __fastcall CreateChartStyle(TOPCItem* AOwner);
	TOPCItem* __fastcall CreateChartColors(TOPCItem* AOwner);
	TOPCItem* __fastcall CreateChartUserShapes(TOPCItem* AOwner, int AIndex);
	TOPCItem* __fastcall CreateVmlDrawing(TOPCItem* AOwner, int AIndex);
	TOPCItem* __fastcall CreateXLink(int AIndex);
	TOPCItem* __fastcall CreateXLinkPath(TOPCItem* AOwner, System::UnicodeString AFilename);
	TOPCItem* __fastcall CreateHyperlink(TOPCItem* AOwner, System::UnicodeString ATarget);
	TOPCItem* __fastcall CreatePivotCacheDefinition(TOPCItem* AOwner, int AIndex);
	TOPCItem* __fastcall CreatePivotCacheRecords(TOPCItem* AOwner, int AIndex);
	TOPCItem* __fastcall CreatePivotTable();
	System::UnicodeString __fastcall WritePrinterSettings(TOPCItem* AOwner, System::Classes::TStream* AStream);
	System::UnicodeString __fastcall FindSheetItemTarget(System::UnicodeString ASheetId, System::UnicodeString AItemId);
	__property TOPCItem* Workbook = {read=FWorkbook};
	__property TOPCItem* CurrSheet = {read=FCurrSheet};
	__property TOPCItem* CurrDrawing = {read=FCurrDrawing};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TOPC_DOCX : public TOPCContainer
{
	typedef TOPCContainer inherited;
	
protected:
	TOPCItemList* FResultList;
	TOPCItem* FDocument;
	TOPCItem* FNumbering;
	TOPCItem* FStyles;
	
public:
	__fastcall TOPC_DOCX();
	__fastcall virtual ~TOPC_DOCX();
	virtual void __fastcall OpenRead(System::Classes::TStream* AStream, const bool AUseAlternateZip);
	virtual void __fastcall OpenWrite(System::Classes::TStream* AStream, const bool AUseAlternateZip);
	virtual void __fastcall Close();
	bool __fastcall FindHeaders();
	bool __fastcall FindFooters();
	System::Classes::TStream* __fastcall ReadDocument();
	System::Classes::TStream* __fastcall ReadNumbering();
	System::Classes::TStream* __fastcall ReadSettings();
	System::Classes::TStream* __fastcall ReadTheme();
	System::Classes::TStream* __fastcall ReadStyles();
	bool __fastcall ReadDocImages();
	bool __fastcall ReadNumberingImages();
	bool __fastcall ReadHeaderFooterImages();
	bool __fastcall ReadHyperlinks(System::Classes::TStrings* const AList);
	System::Classes::TStream* __fastcall ReadImage(const System::UnicodeString ArId, System::UnicodeString &AName);
	System::Classes::TStream* __fastcall ReadHeader(const System::UnicodeString ArId);
	System::Classes::TStream* __fastcall ReadFooter(const System::UnicodeString ArId);
	System::Classes::TStream* __fastcall ReadFootnotes();
	System::Classes::TStream* __fastcall ReadEndnotes();
	TOPCItem* __fastcall AddDocPropsCore(System::Classes::TStream* AStream);
	TOPCItem* __fastcall AddDocPropsApp(System::Classes::TStream* AStream);
	TOPCItem* __fastcall AddSettings(System::Classes::TStream* AStream);
	TOPCItem* __fastcall AddTheme(System::Classes::TStream* AStream);
	TOPCItem* __fastcall AddImage(int AIndex, System::UnicodeString AExt, System::Classes::TStream* AStream);
	TOPCItem* __fastcall CreateDocument();
	TOPCItem* __fastcall CreateStyles();
	TOPCItem* __fastcall CreateNumbering();
	TOPCItem* __fastcall CreateHeader(int AIndex);
	TOPCItem* __fastcall CreateFooter(int AIndex);
	TOPCItem* __fastcall CreateFootnotes();
	TOPCItem* __fastcall CreateEndnotes();
	__property TOPCItem* Document = {read=FDocument};
	__property TOPCItemList* ResultList = {read=FResultList};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
#define OPC_DIR_CONTENTTYPES L"[Content_Types].xml"
#define OOXML_URI_MARKUP_COMPATIBILITY L"http://schemas.openxmlformats.org/markup-compatibility/200"\
	L"6"
#define OOXML_URI_PACKAGE_CONTENTTYPES L"http://schemas.openxmlformats.org/package/2006/content-typ"\
	L"es"
#define OOXML_URI_PACKAGE_RELATIONSHIPS L"http://schemas.openxmlformats.org/package/2006/relationshi"\
	L"ps"
#define OOXML_URI_URN_SCHEMAS_MICROSOFT_OFFICE L"urn:schemas-microsoft-com:office:office"
#define OOXML_URI_URN_SCHEMAS_MICROSOFT_OFFICE_WORD L"urn:schemas-microsoft-com:office:word"
#define OOXML_URI_URN_SCHEMAS_MICROSOFT_OFFICE_WORDML L"http://schemas.microsoft.com/office/word/2006/wordml"
#define OOXML_URI_URN_SCHEMAS_MICROSOFT_VML L"urn:schemas-microsoft-com:vml"
#define OOXML_URI_OFFICEDOC_EXTENDED_PROPERIES L"http://schemas.openxmlformats.org/officeDocument/2006/exte"\
	L"nded-properties"
#define OOXML_URI_OFFICEDOC_EXTENDED_DOCPROPSVTYPES L"http://schemas.openxmlformats.org/officeDocument/2006/docP"\
	L"ropsVTypes"
#define OOXML_URI_OFFICEDOC_RELATIONSHIPS L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships"
#define OOXML_URI_OFFICEDOC_DRAWING L"http://schemas.openxmlformats.org/drawingml/2006/main"
#define OOXML_URI_OFFICEDOC_CHART L"http://schemas.openxmlformats.org/drawingml/2006/chart"
#define OOXML_URI_OFFICEDOC_CHARTDRAWING L"http://schemas.openxmlformats.org/drawingml/2006/chartDraw"\
	L"ing"
#define OOXML_URI_OFFICEDOC_MATH L"http://schemas.openxmlformats.org/officeDocument/2006/math"
#define OOXML_URI_OFFICEDOC_DRAWINGML_WPDRAWING L"http://schemas.openxmlformats.org/drawingml/2006/wordproce"\
	L"ssingDrawing"
#define OOXML_URI_SPREADSHEETML_MAIN L"http://schemas.openxmlformats.org/spreadsheetml/2006/main"
#define OOXML_URI_WORDPROCESSINGML_MAIN L"http://schemas.openxmlformats.org/wordprocessingml/2006/ma"\
	L"in"
#define OPC_ROOT L"__ROOT__"
#define OPC_XLSX_DOCPROPS_APP L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/extended-properties"
#define OPC_XLSX_DOCPROPS_CORE L"http://schemas.openxmlformats.org/package/2006/relationshi"\
	L"ps/metadata/core-properties"
#define OPC_XLSX_WORKBOOK L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/officeDocument"
#define OPC_XLSX_WORKSHEET L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/worksheet"
#define OPC_XLSX_CHARTSHEET L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/chartsheet"
#define OPC_XLSX_CALCCHAIN L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/calcChain"
#define OPC_XLSX_SST L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/sharedStrings"
#define OPC_XLSX_CONNECTIONS L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/connections"
#define OPC_XLSX_STYLES L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/styles"
#define OPC_XLSX_THEME L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/theme"
#define OPC_XLSX_HYPERLINK L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/hyperlink"
#define OPC_XLSX_COMMENTS L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/comments"
#define OPC_XLSX_DRAWING L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/drawing"
#define OPC_XLSX_VMLDRAWING L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/vmlDrawing"
#define OPC_XLSX_TABLE L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/table"
#define OPC_XLSX_QUERYTABLE L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/queryTable"
#define OPC_XLSX_XLINK L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/externalLink"
#define OPC_XLSX_XLINK_PATH L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/externalLinkPath"
#define OPC_XLSX_PRINTER_SETTINGS L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/printerSettings"
#define OPC_XLSX_IMAGE L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/image"
#define OPC_XLSX_CHART L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/chart"
#define OPC_XLSX_CHARTSTYLE L"http://schemas.microsoft.com/office/2011/relationships/cha"\
	L"rtStyle"
#define OPC_XLSX_CHARTCOLORS L"http://schemas.microsoft.com/office/2011/relationships/cha"\
	L"rtColorStyle"
#define OPC_XLSX_CHARTUSERSHAPES L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/chartUserShapes"
#define OPC_XLSX_PIVOTCACHEDEF L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/pivotCacheDefinition"
#define OPC_XLSX_PIVOTCACHERECS L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/pivotCacheRecords"
#define OPC_XLSX_PIVOTTABLE L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/pivotTable"
#define OPC_XLSX_VBAPROJECT L"http://schemas.microsoft.com/office/2006/relationships/vba"\
	L"Project"
#define OPC_XLSX_CUSTOMXML L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/customXml"
#define OPC_XLSX_CUSTOMXML_PROPS L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/customXmlProps"
#define OPC_XLSX_DOCPROPS_APP_TARGET L"docProps/app.xml"
#define OPC_XLSX_DOCPROPS_CORE_TARGET L"docProps/core.xml"
#define OPC_XLSX_WORKBOOK_TARGET L"xl/workbook.xml"
#define OPC_XLSX_WORKSHEET_TARGET L"worksheets/sheet%d.xml"
#define OPC_XLSX_WORKSHEET_TARGET_BIN L"worksheets/sheet%d.bin"
#define OPC_XLSX_CHARTSHEET_TARGET L"chartsheets/sheet%d.xml"
#define OPC_XLSX_CALCCHAIN_TARGET L"calcChain.xml"
#define OPC_XLSX_SST_TARGET L"sharedStrings.xml"
#define OPC_XLSX_CONNECTIONS_TARGET L"connections.xml"
#define OPC_XLSX_STYLES_TARGET L"styles.xml"
#define OPC_XLSX_THEME_TARGET L"theme/theme%d.xml"
#define OPC_XLSX_HYPERLINK_TARGET L""
#define OPC_XLSX_COMMENTS_TARGET L"../comments%d.xml"
#define OPC_XLSX_TABLE_TARGET L"../tables/table%d.xml"
#define OPC_XLSX_QUERYTABLE_TARGET L"../queryTables/queryTable%d.xml"
#define OPC_XLSX_VMLDRAWING_TARGET L"../drawings/vmlDrawing%d.vml"
#define OPC_XLSX_DRAWING_TARGET L"../drawings/drawing%d.xml"
#define OPC_XLSX_XLINK_TARGET L"externalLinks/externalLink%d.xml"
#define OPC_XLSX_PRINTER_SETTINGS_TARGET L"../printerSettings/printerSettings%d.bin"
#define OPC_XLSX_IMAGE_TARGET L"../media/image%d.%s"
#define OPC_XLSX_CHART_TARGET L"../charts/chart%d.xml"
#define OPC_XLSX_CHARTSTYLE_TARGET L"style%d.xml"
#define OPC_XLSX_CHARTCOLORS_TARGET L"colors%d.xml"
#define OPC_XLSX_PIVOTCACHEDEF_TARGET L"pivotCache/pivotCacheDefinition%d.xml"
#define OPC_XLSX_PIVOTCACHERECS_TARGET L"pivotCacheRecords%d.xml"
#define OPC_XLSX_PIVOTTABLE_TARGET L"../pivotTables/pivotTable%d.xml"
#define OPC_XLSX_VBAPROJECT_TARGET L"vbaProject.bin"
#define OPC_DOCX_DOCPROPS_APP L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/extended-properties"
#define OPC_DOCX_DOCPROPS_CORE L"http://schemas.openxmlformats.org/package/2006/relationshi"\
	L"ps/metadata/core-properties"
#define OPC_DOCX_DOCUMENT L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/officeDocument"
#define OPC_DOCX_SETTINGS L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/settings"
#define OPC_DOCX_STYLES L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/styles"
#define OPC_DOCX_THEME L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/theme"
#define OPC_DOCX_NUMBERING L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/numbering"
#define OPC_DOCX_IMAGE L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/image"
#define OPC_DOCX_HEADER L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/header"
#define OPC_DOCX_FOOTER L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/footer"
#define OPC_DOCX_FOOTNOTES L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/footnotes"
#define OPC_DOCX_ENDNOTES L"http://schemas.openxmlformats.org/officeDocument/2006/rela"\
	L"tionships/endnotes"
#define OPC_DOCX_DOCPROPS_APP_TARGET L"docProps/app.xml"
#define OPC_DOCX_DOCPROPS_CORE_TARGET L"docProps/core.xml"
#define OPC_DOCX_DOCUMENT_TARGET L"word/document.xml"
#define OPC_DOCX_SETTINGS_TARGET L"settings.xml"
#define OPC_DOCX_STYLES_TARGET L"styles.xml"
#define OPC_DOCX_THEME_TARGET L"theme/theme%d.xml"
#define OPC_DOCX_NUMBERING_TARGET L"numbering.xml"
#define OPC_DOCX_IMAGE_TARGET L"../media/image%d.%s"
#define OPC_DOCX_HEADER_TARGET L"header%d.xml"
#define OPC_DOCX_FOOTER_TARGET L"footer%d.xml"
#define OPC_DOCX_FOOTNOTES_TARGET L"footnotes.xml"
#define OPC_DOCX_ENDNOTES_TARGET L"endnotes.xml"
}	/* namespace Xlsreadwriteopc5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSREADWRITEOPC5)
using namespace Xlsreadwriteopc5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsreadwriteopc5HPP
