// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_Names5.pas' rev: 35.00 (Windows)

#ifndef Biff_names5HPP
#define Biff_names5HPP

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
#include <BIFF_Utils5.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_Stream5.hpp>
#include <BIFF_EncodeFormulaII5.hpp>
#include <BIFF_DecodeFormula5.hpp>
#include <BIFF_ExcelFuncII5.hpp>
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>
#include <XLSFormulaTypes5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_names5
{
//-- forward type declarations -----------------------------------------------
struct TCRNValue;
class DELPHICLASS TCRNList;
class DELPHICLASS TSupBookSheet;
class DELPHICLASS TExtName;
class DELPHICLASS TExtNameName;
class DELPHICLASS TExtNameDDE;
class DELPHICLASS TExtNameOLE;
class DELPHICLASS TExtNameList;
class DELPHICLASS TSupBook;
class DELPHICLASS TSupBookList;
struct TExtSheetData;
class DELPHICLASS TExtSheetList;
class DELPHICLASS TExternalNames;
class DELPHICLASS TInternalName;
class DELPHICLASS TInternalNames;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TX97BuiltInName : unsigned char { xbnConsolidateArea, xbnAutoOpen, xbnAutoClose, xbnExtract, xbnDatabase, xbnCriteria, xbnPrintArea, xbnPrintTitles, xbnRecorder, xbnDataForm, xbnAutoActivate, xbnAutoDeactivate, xbnSheetTitle, xbnFilterDatabase, xbnNone };

typedef TCRNValue *PCRNValue;

struct DECLSPEC_DRECORD TCRNValue
{
public:
	System::Byte FirstCol;
	System::Byte LastCol;
	System::Word Row;
	System::Sysutils::TByteArray *Value;
	System::Word Size;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCRNList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	PCRNValue operator[](int Index) { return this->Items[Index]; }
	
private:
	PCRNValue __fastcall GetItems(int Index);
	
public:
	__fastcall virtual ~TCRNList();
	HIDESBASE void __fastcall Add(Biff_recsii5::PRecCRN Value, System::Word Size);
	void __fastcall WriteRecords(Biff_stream5::TXLSStream* Stream, int Index);
	__property PCRNValue Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TObject.Create */ inline __fastcall TCRNList() : System::Classes::TList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSupBookSheet : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::RawByteString FName;
	TCRNList* FCRN;
	bool FNegXCT;
	System::UnicodeString __fastcall GetName();
	void __fastcall SetName(const System::UnicodeString Value);
	
protected:
	__property System::RawByteString RawName = {read=FName};
	
public:
	__fastcall TSupBookSheet(System::Sysutils::PByteArray Name, int NameLen)/* overload */;
	__fastcall TSupBookSheet(System::UnicodeString Sheetname)/* overload */;
	__fastcall virtual ~TSupBookSheet();
	void __fastcall SetCRN(Biff_recsii5::PRecCRN P, System::Word Size);
	Biff_utils5::TFormulaValue __fastcall GetCachedValue(int Col, int Row);
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property TCRNList* CRN = {read=FCRN};
	__property bool NegXCT = {read=FNegXCT, write=FNegXCT, nodefault};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TExtNameType : unsigned char { entName, entDDE, entOLE };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TExtName : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Word FOptions;
	System::RawByteString FName;
	System::UnicodeString __fastcall GetName();
	
public:
	__fastcall TExtName(Biff_recsii5::PRecEXTERNNAME8 &P);
	virtual void __fastcall WriteRecords(Biff_stream5::TXLSStream* Stream) = 0 ;
	virtual TExtNameType __fastcall NameType() = 0 ;
	__property System::UnicodeString Name = {read=GetName};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TExtName() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TExtNameName : public TExtName
{
	typedef TExtName inherited;
	
private:
	Biff_utils5::TDynByteArray FNameDef;
	
public:
	__fastcall TExtNameName(Biff_recsii5::PRecEXTERNNAME8 P);
	__fastcall virtual ~TExtNameName();
	virtual void __fastcall WriteRecords(Biff_stream5::TXLSStream* Stream);
	virtual TExtNameType __fastcall NameType();
	__property Biff_utils5::TDynByteArray NameDef = {read=FNameDef};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TExtNameDDE : public TExtName
{
	typedef TExtName inherited;
	
private:
	System::Sysutils::TByteArray *FOPER;
	
public:
	__fastcall TExtNameDDE(Biff_recsii5::PRecEXTERNNAME8 P);
	__fastcall virtual ~TExtNameDDE();
	virtual void __fastcall WriteRecords(Biff_stream5::TXLSStream* Stream);
	virtual TExtNameType __fastcall NameType();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TExtNameOLE : public TExtName
{
	typedef TExtName inherited;
	
private:
	unsigned FOLE2Id;
	
public:
	__fastcall TExtNameOLE(Biff_recsii5::PRecEXTERNNAME8 P);
	virtual TExtNameType __fastcall NameType();
	virtual void __fastcall WriteRecords(Biff_stream5::TXLSStream* Stream);
	__property unsigned OLE2Id = {read=FOLE2Id, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TExtNameOLE() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TExtNameList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	TExtName* operator[](int Index) { return this->Items[Index]; }
	
private:
	TExtName* __fastcall GetItems(int Index);
	
public:
	__fastcall virtual ~TExtNameList();
	HIDESBASE void __fastcall Add(Biff_recsii5::PRecEXTERNNAME8 P);
	__property TExtName* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TObject.Create */ inline __fastcall TExtNameList() : System::Classes::TList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSupBook : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TSupBookSheet*> _TSupBook__1;
	
	
public:
	TSupBookSheet* operator[](int Index) { return this->Sheets[Index]; }
	
private:
	int FTabCount;
	System::Word FEncoded;
	System::RawByteString FFilename;
	_TSupBook__1 FSheets;
	TExtNameList* FExtNames;
	TSupBookSheet* __fastcall GetSheets(int Index);
	TExtName* __fastcall GetExtNames(int Index);
	System::UnicodeString __fastcall GetFilename();
	System::UnicodeString __fastcall GetCleanFilename();
	
public:
	__fastcall TSupBook(Biff_recsii5::PRecSUPBOOK P);
	__fastcall TSupBook(int Tabs, System::Word Code);
	__fastcall virtual ~TSupBook();
	void __fastcall WriteRecords(Biff_stream5::TXLSStream* Stream);
	int __fastcall Count();
	void __fastcall SetEXTERNNAME(Biff_recsii5::PRecEXTERNNAME8 P);
	void __fastcall AddSheet(System::UnicodeString Sheetname);
	__property System::UnicodeString Filename = {read=GetFilename};
	__property System::UnicodeString CleanFilename = {read=GetCleanFilename};
	__property TSupBookSheet* Sheets[int Index] = {read=GetSheets/*, default*/};
	__property TExtName* ExtNames[int Index] = {read=GetExtNames};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSupBookList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	TSupBook* operator[](int Index) { return this->Items[Index]; }
	
private:
	TSupBook* __fastcall GetItems(int Index);
	
public:
	__fastcall virtual ~TSupBookList();
	virtual void __fastcall Clear();
	HIDESBASE void __fastcall Add(Biff_recsii5::PRecSUPBOOK P)/* overload */;
	HIDESBASE void __fastcall Add(System::UnicodeString Path, System::UnicodeString Filename, System::UnicodeString SheetName)/* overload */;
	int __fastcall AddEncodec(int Tabs, System::Word Code);
	__property TSupBook* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TObject.Create */ inline __fastcall TSupBookList() : System::Classes::TList() { }
	
};

#pragma pack(pop)

typedef TExtSheetData *PExtSheetData;

struct DECLSPEC_DRECORD TExtSheetData
{
public:
	int SupBookIndex;
	System::Word FirstTab;
	System::Word LastTab;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TExtSheetList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	PExtSheetData operator[](int Index) { return this->Items[Index]; }
	
private:
	PExtSheetData __fastcall GetItems(int Index);
	
public:
	__fastcall virtual ~TExtSheetList();
	virtual void __fastcall Clear();
	HIDESBASE void __fastcall Add(int Index, int First, int Last);
	void __fastcall WriteRecords(Biff_stream5::TXLSStream* Stream);
	__property PExtSheetData Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TObject.Create */ inline __fastcall TExtSheetList() : System::Classes::TList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TExternalNames : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TExtSheetList* FExtSheets;
	TSupBookList* FSupBooks;
	System::UnicodeString FFilePath;
	System::UnicodeString __fastcall GetAsString(int SheetIndex, int NameIndex);
	
public:
	__fastcall TExternalNames();
	__fastcall virtual ~TExternalNames();
	void __fastcall Clear();
	void __fastcall UpdateIntSupbooks(int TabCount);
	int __fastcall IsSelf(int ExtSheetIndex);
	int __fastcall AddSelf(int SheetIndex, int TabCount);
	int __fastcall FindIndex(int SheetIndex);
	bool __fastcall AddRef(System::UnicodeString Path, System::UnicodeString Filename, System::UnicodeString SheetName, int &Index, int &NameIndex);
	bool __fastcall RefIndexByName(System::UnicodeString Path, System::UnicodeString Filename, System::UnicodeString Name, int &Index, int &NameIndex);
	bool __fastcall NameIndexByName(System::UnicodeString Path, System::UnicodeString Filename, System::UnicodeString Name, int &Index, int &NameIndex);
	Biff_utils5::TFormulaValue __fastcall GetNameValue(int SheetIndex, int NameIndex);
	Biff_utils5::TFormulaValue __fastcall GetValue(int Index, int Col, int Row);
	void __fastcall DeleteSheet(int SheetIndex);
	void __fastcall InsertSheet(int SheetIndex);
	bool __fastcall Get3dSheets(const int AIndex, /* out */ int &ASheet1, /* out */ int &ASheet2);
	bool __fastcall HasSUPBOOK();
	bool __fastcall HasEXTERNSHEET();
	void __fastcall SetSUPBOOK(Biff_recsii5::PRecSUPBOOK P);
	void __fastcall SetEXTERNSHEET(System::Sysutils::PByteArray P);
	void __fastcall SetCRN(int SheetIndex, Biff_recsii5::PRecCRN P, System::Word Size);
	void __fastcall SetEXTERNNAME(Biff_recsii5::PRecEXTERNNAME8 P);
	void __fastcall WriteRecords(Biff_stream5::TXLSStream* Stream);
	__property System::UnicodeString AsString[int SheetIndex][int NameIndex] = {read=GetAsString};
	__property System::UnicodeString FilePath = {read=FFilePath, write=FFilePath};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TNameOption : unsigned char { noBuiltIn, noHidden, noFunction, noVBProcedure, noMacro, noXLM, noPublishToServer, noWorkbookParameter, noComplex, noBig };

typedef System::Set<TNameOption, TNameOption::noBuiltIn, TNameOption::noBig> TNameOptions;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TInternalName : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Contnrs::TObjectList* FParent;
	System::Byte FKeyShortcut;
	System::Word FUnused;
	System::Word FSheetIndex;
	System::RawByteString FName;
	Biff_utils5::TDynByteArray FNameDef;
	System::UnicodeString FNameDefStr;
	System::UnicodeString FCustomMenu;
	System::UnicodeString FDescription;
	System::UnicodeString FHelpTopic;
	System::UnicodeString FStatusBar;
	int FFormulaSize;
	bool FLoadedFormFile;
	System::UnicodeString FComment;
	TNameOptions FNameOptions;
	int FFuncGroupId;
	System::UnicodeString FShortcutKey;
	bool __fastcall GetIsVBProcedure();
	void __fastcall SetIsVBProcedure(const bool Value);
	void __fastcall IntSetDefinition(const System::UnicodeString Value);
	void __fastcall SetDefinition(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetDefinition();
	System::UnicodeString __fastcall GetName();
	void __fastcall SetName(const System::UnicodeString Value);
	TX97BuiltInName __fastcall GetBuiltInName();
	void __fastcall SetBuiltInName(const TX97BuiltInName Value);
	int __fastcall GetCol1();
	int __fastcall GetCol2();
	int __fastcall GetRow1();
	int __fastcall GetRow2();
	int __fastcall GetExtSheet();
	void __fastcall SetRow1(const int Value);
	void __fastcall SetRow2(const int Value);
	void __fastcall SetCol1(const int Value);
	void __fastcall SetCol2(const int Value);
	
public:
	__fastcall TInternalName(System::Contnrs::TObjectList* Parent);
	__fastcall virtual ~TInternalName();
	void __fastcall Set_NAME(Biff_recsii5::PRecNAME P);
	void __fastcall WriteRecords(Biff_stream5::TXLSStream* Stream);
	bool __fastcall NameIsCell();
	bool __fastcall NameIsArea(bool ListAccepted);
	void __fastcall SetError();
	__property Biff_utils5::TDynByteArray NameDef = {read=FNameDef, write=FNameDef};
	__property int NameDefLen = {read=FFormulaSize, nodefault};
	__property System::Byte KeyShortcut = {read=FKeyShortcut, write=FKeyShortcut, nodefault};
	__property System::Word SheetIndex = {read=FSheetIndex, write=FSheetIndex, nodefault};
	__property System::RawByteString NameName = {read=FName, write=FName};
	__property TNameOptions NameOptions = {read=FNameOptions, write=FNameOptions, nodefault};
	__property System::UnicodeString CustomMenu = {read=FCustomMenu, write=FCustomMenu};
	__property System::UnicodeString Description = {read=FDescription, write=FDescription};
	__property System::UnicodeString HelpTopic = {read=FHelpTopic, write=FHelpTopic};
	__property System::UnicodeString StatusBar = {read=FStatusBar, write=FStatusBar};
	__property System::UnicodeString Comment = {read=FComment, write=FComment};
	__property System::UnicodeString NameDefStr = {read=FNameDefStr, write=FNameDefStr};
	__property int FuncGroupId = {read=FFuncGroupId, write=FFuncGroupId, nodefault};
	__property System::UnicodeString ShortcutKey = {read=FShortcutKey, write=FShortcutKey};
	__property System::UnicodeString Name = {read=GetName, write=SetName, stored=false};
	__property System::UnicodeString Definition = {read=GetDefinition, write=SetDefinition, stored=false};
	__property TX97BuiltInName BuiltInName = {read=GetBuiltInName, write=SetBuiltInName, stored=false, nodefault};
	__property int Col1 = {read=GetCol1, write=SetCol1, nodefault};
	__property int Col2 = {read=GetCol2, write=SetCol2, nodefault};
	__property int Row1 = {read=GetRow1, write=SetRow1, nodefault};
	__property int Row2 = {read=GetRow2, write=SetRow2, nodefault};
	__property int ExtSheet = {read=GetExtSheet, nodefault};
	__property bool IsVBProcedure = {read=GetIsVBProcedure, write=SetIsVBProcedure, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TInternalNames : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TInternalName* operator[](int Index) { return this->Items[Index]; }
	
private:
	Biff_encodeformulaii5::TEncodeFormula* FEncoder;
	TInternalName* __fastcall GetItems(int Index);
	
protected:
	System::Classes::TPersistent* FOwner;
	Biff_decodeformula5::TGetNameEvent FGetNameMethod;
	Xlsutils5::TIntegerEvent FNameDeletedEvent;
	bool FIsUpdating;
	System::UnicodeString __fastcall FindUniqueName();
	void __fastcall IntDeleteBuiltIn(TX97BuiltInName BuiltInName, int SheetIndex, TInternalName* ExcludeItem);
	
public:
	__fastcall TInternalNames(System::Classes::TPersistent* AOwner, Biff_decodeformula5::TGetNameEvent GetNameMethod, Biff_encodeformulaii5::TEncodeFormula* Encoder);
	__fastcall virtual ~TInternalNames();
	HIDESBASE TInternalName* __fastcall Add()/* overload */;
	HIDESBASE TInternalName* __fastcall Add(System::UnicodeString AName, System::UnicodeString ADefinition)/* overload */;
	HIDESBASE void __fastcall Delete(int Index);
	int __fastcall FindName(System::UnicodeString AName);
	TInternalName* __fastcall FindBuiltInName(TX97BuiltInName BuiltInName, int SheetIndex);
	TInternalName* __fastcall AddBuiltInName(TX97BuiltInName ABuiltInName, bool AUnique, bool AHidden, System::UnicodeString ASheetName, int ASheetIndex, int C1, int R1, int C2, int R2);
	void __fastcall DeleteBuiltInName(TX97BuiltInName BuiltInName, int SheetIndex);
	void __fastcall SetNAME(Biff_recsii5::PRecNAME P);
	void __fastcall WriteRecords(Biff_stream5::TXLSStream* Stream);
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	__property TInternalName* Items[int Index] = {read=GetItems/*, default*/};
	__property Xlsutils5::TIntegerEvent OnNameDeleted = {read=FNameDeletedEvent, write=FNameDeletedEvent};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 CRN_NUM = System::Int8(0x1);
static const System::Int8 CRN_STR = System::Int8(0x2);
static const System::Int8 CRN_BOOL = System::Int8(0x4);
static const System::Int8 CRN_ERR = System::Int8(0x10);
}	/* namespace Biff_names5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_NAMES5)
using namespace Biff_names5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_names5HPP
