// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_RecordStorageChart5.pas' rev: 35.00 (Windows)

#ifndef Biff_recordstoragechart5HPP
#define Biff_recordstoragechart5HPP

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
#include <BIFF_RecordStorage5.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_Stream5.hpp>
#include <BIFF_EscherTypes5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_recordstoragechart5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFontIdListData;
class DELPHICLASS TFontIdList;
struct TDefaultRecord;
class DELPHICLASS TChartRecord;
class DELPHICLASS TChartRecordUpdate;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TDefaultRecordData : unsigned char { drdAll, drdLegend, drdSerie, drdDataformat, drdStyleArea, drdStyleBarColumn, drdStyleLine, drdStylePie, drdStyleRadar, drdStyleScatter, drdStyleSurface };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TFontIdListData : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FFontIndex;
	int FFBIIndex;
	
public:
	__property int FontIndex = {read=FFontIndex, write=FFontIndex, nodefault};
	__property int FBIIndex = {read=FFBIIndex, write=FFBIIndex, nodefault};
public:
	/* TObject.Create */ inline __fastcall TFontIdListData() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TFontIdListData() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TFontIdList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
private:
	TFontIdListData* __fastcall GetItems(int Index);
	
protected:
	int FCurrent;
	
public:
	void __fastcall AddFont(int Index);
	void __fastcall Reset();
	int __fastcall GetNext(int FBI);
	int __fastcall FindFBI(int Id);
	__property TFontIdListData* Items[int Index] = {read=GetItems};
public:
	/* TObjectList.Create */ inline __fastcall TFontIdList()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TFontIdList(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TFontIdList() { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TDefaultRecord
{
public:
	System::Word Id;
	System::AnsiString Data;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TChartRecord : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TChartRecord* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Word FRecId;
	System::Word FLength;
	System::Sysutils::TByteArray *FData;
	TChartRecord* FParent;
	TChartRecord* __fastcall GetItems(int Index);
	void __fastcall ReadDefault(TDefaultRecord *DefRecs, const int DefRecs_High, int &Index, Xc12datastylesheet5::TXc12Fonts* Fonts);
	Xc12datastylesheet5::TXc12Font* __fastcall FindFBIFont(int Id);
	void __fastcall FixupFBI();
	void __fastcall ReadFromStream(Biff_stream5::TXLSStream* Stream, Xc12datastylesheet5::TXc12Fonts* Fonts);
	
public:
	__fastcall TChartRecord(TChartRecord* Parent, Biff_recsii5::TBIFFHeader Header, System::Sysutils::PByteArray D)/* overload */;
	__fastcall TChartRecord(TChartRecord* Parent, System::Word RecId, System::Word Length)/* overload */;
	__fastcall TChartRecord(TChartRecord* Parent, System::Word RecId, System::TObject* Obj)/* overload */;
	__fastcall virtual ~TChartRecord();
	void __fastcall Write(Biff_stream5::TXLSStream* Stream);
	void __fastcall WriteToFile(System::UnicodeString Filename, Xc12datastylesheet5::TXc12Fonts* Fonts, bool AsText);
	void __fastcall ReadFromFile(System::UnicodeString Filename, Xc12datastylesheet5::TXc12Fonts* Fonts);
	void __fastcall ReadFromBuffer(System::Sysutils::PByteArray Buf, int BufSize, Xc12datastylesheet5::TXc12Fonts* Fonts);
	void __fastcall Resize(int Delta);
	void __fastcall Read(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf, Xc12datastylesheet5::TXc12Fonts* Fonts);
	void __fastcall ReadDefaultRecords(TDefaultRecordData RecData);
	TChartRecord* __fastcall LastRec();
	TChartRecord* __fastcall InsertRecord(int Index, System::Word RecId, System::Word Length, bool IsUpdate = false);
	int __fastcall FindRecord(int Id);
	bool __fastcall FindRecordChilds(int Id);
	bool __fastcall RemoveRecord(int Id);
	TChartRecord* __fastcall Root();
	__property TChartRecord* Items[int Index] = {read=GetItems/*, default*/};
	__property TChartRecord* Parent = {read=FParent};
	__property System::Word RecId = {read=FRecId, nodefault};
	__property System::Word Length = {read=FLength, nodefault};
	__property System::Sysutils::PByteArray Data = {read=FData};
public:
	/* TObjectList.Create */ inline __fastcall TChartRecord()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TChartRecord(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TChartRecordUpdate : public TChartRecord
{
	typedef TChartRecord inherited;
	
private:
	System::Classes::TNotifyEvent FUpdateEvent;
	
public:
	__property System::Classes::TNotifyEvent OnUpdate = {read=FUpdateEvent, write=FUpdateEvent};
public:
	/* TChartRecord.Create */ inline __fastcall TChartRecordUpdate(TChartRecord* Parent, Biff_recsii5::TBIFFHeader Header, System::Sysutils::PByteArray D)/* overload */ : TChartRecord(Parent, Header, D) { }
	/* TChartRecord.Create */ inline __fastcall TChartRecordUpdate(TChartRecord* Parent, System::Word RecId, System::Word Length)/* overload */ : TChartRecord(Parent, RecId, Length) { }
	/* TChartRecord.Create */ inline __fastcall TChartRecordUpdate(TChartRecord* Parent, System::Word RecId, System::TObject* Obj)/* overload */ : TChartRecord(Parent, RecId, Obj) { }
	/* TChartRecord.Destroy */ inline __fastcall virtual ~TChartRecordUpdate() { }
	
public:
	/* TObjectList.Create */ inline __fastcall TChartRecordUpdate()/* overload */ : TChartRecord() { }
	/* TObjectList.Create */ inline __fastcall TChartRecordUpdate(bool AOwnsObjects)/* overload */ : TChartRecord(AOwnsObjects) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word ID_CHARTRECORDROOT = System::Word(0xfffa);
static const System::Word ID_CHARTRECORD_DEFAULTLEGEND = System::Word(0xf001);
}	/* namespace Biff_recordstoragechart5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_RECORDSTORAGECHART5)
using namespace Biff_recordstoragechart5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_recordstoragechart5HPP
