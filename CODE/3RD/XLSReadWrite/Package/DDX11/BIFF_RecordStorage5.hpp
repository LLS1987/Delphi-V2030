// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_RecordStorage5.pas' rev: 35.00 (Windows)

#ifndef Biff_recordstorage5HPP
#define Biff_recordstorage5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_Stream5.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_recordstorage5
{
//-- forward type declarations -----------------------------------------------
struct TRecordData;
class DELPHICLASS TBaseRecordStorage;
class DELPHICLASS TRecordStorage;
class DELPHICLASS TRecordStorageEx2007Unknown;
class DELPHICLASS TRecordStorageDefault;
class DELPHICLASS TRecordStorageGlobals;
class DELPHICLASS TRecordStorageSheet;
//-- type declarations -------------------------------------------------------
typedef TRecordData *PRecordData;

struct DECLSPEC_DRECORD TRecordData
{
	
private:
	struct DECLSPEC_DRECORD _TRecordData__1
	{
	};
	
	
	
public:
	System::Word RecId;
	System::Word Length;
	_TRecordData__1 Data;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TBaseRecordStorage : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	PRecordData operator[](int Index) { return this->Items[Index]; }
	
private:
	PRecordData __fastcall GetItems(int Index);
	void __fastcall SetItems(int Index, const PRecordData Value);
	
public:
	__fastcall virtual ~TBaseRecordStorage();
	virtual void __fastcall Clear();
	PRecordData __fastcall AddRec(Biff_recsii5::TBIFFHeader Header, System::Sysutils::PByteArray Data);
	PRecordData __fastcall UpdateRec(int Index, int Len, System::Sysutils::PByteArray Data);
	void __fastcall ReadUntilEOF(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	virtual void __fastcall WriteAllRecs(Biff_stream5::TXLSStream* Stream);
	void __fastcall WriteRec(int Index, Biff_stream5::TXLSStream* Stream);
	int __fastcall Size();
	int __fastcall FindRecord(System::Word RecId);
	HIDESBASE void __fastcall Assign(TBaseRecordStorage* Records);
	__property PRecordData Items[int Index] = {read=GetItems, write=SetItems/*, default*/};
public:
	/* TObject.Create */ inline __fastcall TBaseRecordStorage() : System::Classes::TList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRecordStorage : public TBaseRecordStorage
{
	typedef TBaseRecordStorage inherited;
	
public:
	virtual void __fastcall SetDefaultData() = 0 ;
	virtual int __fastcall PostCheck() = 0 ;
	virtual void __fastcall UpdateDefault(Biff_recsii5::TBIFFHeader Header, System::Sysutils::PByteArray Data) = 0 ;
	virtual void __fastcall UpdateInternal(System::Word Id) = 0 ;
public:
	/* TBaseRecordStorage.Destroy */ inline __fastcall virtual ~TRecordStorage() { }
	
public:
	/* TObject.Create */ inline __fastcall TRecordStorage() : TBaseRecordStorage() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRecordStorageEx2007Unknown : public TBaseRecordStorage
{
	typedef TBaseRecordStorage inherited;
	
public:
	virtual void __fastcall WriteAllRecs(Biff_stream5::TXLSStream* Stream);
public:
	/* TBaseRecordStorage.Destroy */ inline __fastcall virtual ~TRecordStorageEx2007Unknown() { }
	
public:
	/* TObject.Create */ inline __fastcall TRecordStorageEx2007Unknown() : TBaseRecordStorage() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRecordStorageDefault : public TRecordStorage
{
	typedef TRecordStorage inherited;
	
protected:
	TBaseRecordStorage* FDefault;
	PRecordData __fastcall AddDefRecWord(int Id, System::Word Data);
	PRecordData __fastcall AddDefRec(int Id, int Length);
	
public:
	__fastcall TRecordStorageDefault();
	__fastcall virtual ~TRecordStorageDefault();
	virtual void __fastcall Clear();
	virtual void __fastcall MoveDefault(PRecordData Rec, PRecordData NewRec) = 0 ;
	HIDESBASE void __fastcall UpdateRec(PRecordData &Rec, Biff_recsii5::TBIFFHeader Header, System::Sysutils::PByteArray Data);
	void __fastcall MoveAllDefault();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRecordStorageGlobals : public TRecordStorageDefault
{
	typedef TRecordStorageDefault inherited;
	
private:
	TRecordData *P_INT_FORMATS;
	TRecordData *P_INT_BOUNDSHEETS;
	TRecordData *P_INT_NAMES;
	TRecordData *P_INT_MSODRWGRP;
	TRecordData *P_INT_SST;
	TRecordData *PBOF;
	TRecordData *PWRITEACCESS;
	TRecordData *PCODEPAGE;
	TRecordData *PDSF;
	TRecordData *PTABID;
	TRecordData *PFNGROUPCOUNT;
	TRecordData *PWINDOWPROTECT;
	TRecordData *PPROTECT;
	TRecordData *PPASSWORD;
	TRecordData *PPROT4REV;
	TRecordData *PWINDOW1;
	TRecordData *PBACKUP;
	TRecordData *PHIDEOBJ;
	TRecordData *P1904;
	TRecordData *PPRECISION;
	TRecordData *PREFRESHALL;
	TRecordData *PBOOKBOOL;
	TRecordData *PCOUNTRY;
	TRecordData *PRECALCID;
	TRecordData *PEOF;
	System::Word __fastcall GetCODEPAGE();
	Biff_recsii5::PRecWINDOW1 __fastcall GetWINDOW1();
	bool __fastcall GetWINDOWPROTECT();
	System::UnicodeString __fastcall GetWRITEACCESS();
	void __fastcall SetCODEPAGE(const System::Word Value);
	void __fastcall SetWINDOWPROTECT(const bool Value);
	void __fastcall SetWRITEACCESS(const System::UnicodeString Value);
	bool __fastcall GetBACKUP();
	void __fastcall SetBACKUP(const bool Value);
	System::Word __fastcall GetHIDEOBJ();
	void __fastcall SetHIDEOBJ(const System::Word Value);
	bool __fastcall GetPRECISION();
	void __fastcall SetRECISION(const bool Value);
	bool __fastcall GetREFRESHALL();
	void __fastcall SetREFRESHALL(const bool Value);
	bool __fastcall GetBOOKBOOL();
	void __fastcall SetBOOKBOOL(const bool Value);
	Biff_recsii5::PRecCOUNTRY __fastcall GetCOUNTRY();
	Biff_recsii5::PRecRECALCID __fastcall GetRECALCID();
	Biff_recsii5::PRecBOF8 __fastcall GetBOF();
	bool __fastcall GetDATE1904();
	System::Word __fastcall GetPASSWORD();
	
public:
	__fastcall TRecordStorageGlobals();
	virtual void __fastcall Clear();
	virtual void __fastcall SetDefaultData();
	virtual int __fastcall PostCheck();
	virtual void __fastcall MoveDefault(PRecordData Rec, PRecordData NewRec);
	virtual void __fastcall UpdateDefault(Biff_recsii5::TBIFFHeader Header, System::Sysutils::PByteArray Data);
	virtual void __fastcall UpdateInternal(System::Word Id);
	__property Biff_recsii5::PRecBOF8 BOF = {read=GetBOF};
	__property System::Word CODEPAGE = {read=GetCODEPAGE, write=SetCODEPAGE, nodefault};
	__property System::UnicodeString WRITEACCESS = {read=GetWRITEACCESS, write=SetWRITEACCESS};
	__property bool WINDOWPROTECT = {read=GetWINDOWPROTECT, write=SetWINDOWPROTECT, nodefault};
	__property Biff_recsii5::PRecWINDOW1 WINDOW1 = {read=GetWINDOW1};
	__property bool BACKUP = {read=GetBACKUP, write=SetBACKUP, nodefault};
	__property System::Word HIDEOBJ = {read=GetHIDEOBJ, write=SetHIDEOBJ, nodefault};
	__property bool PRECISION = {read=GetPRECISION, write=SetRECISION, nodefault};
	__property bool REFRESHALL = {read=GetREFRESHALL, write=SetREFRESHALL, nodefault};
	__property bool BOOKBOOL = {read=GetBOOKBOOL, write=SetBOOKBOOL, nodefault};
	__property Biff_recsii5::PRecCOUNTRY COUNTRY = {read=GetCOUNTRY};
	__property Biff_recsii5::PRecRECALCID RECALCID = {read=GetRECALCID};
	__property bool DATE1904 = {read=GetDATE1904, nodefault};
	__property System::Word PASSWORD = {read=GetPASSWORD, nodefault};
public:
	/* TRecordStorageDefault.Destroy */ inline __fastcall virtual ~TRecordStorageGlobals() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRecordStorageSheet : public TRecordStorageDefault
{
	typedef TRecordStorageDefault inherited;
	
private:
	TRecordData *P_INT_PAGEBREAKES;
	TRecordData *P_INT_HEADER;
	TRecordData *P_INT_MARGINS;
	TRecordData *P_INT_COLINFO;
	TRecordData *P_INT_CELLDATA;
	TRecordData *P_INT_SUFFIXDATA;
	TRecordData *PBOF;
	TRecordData *PCALCMODE;
	TRecordData *PCALCCOUNT;
	TRecordData *PDELTA;
	TRecordData *PREFMODE;
	TRecordData *PITERATION;
	TRecordData *PSAVERECALC;
	TRecordData *PPRINTHEADERS;
	TRecordData *PPRINTGRIDLINES;
	TRecordData *PGRIDSET;
	TRecordData *PGUTS;
	TRecordData *PDEFAULTROWHEIGHT;
	TRecordData *PWSBOOL;
	TRecordData *PHCENTER;
	TRecordData *PVCENTER;
	TRecordData *PSETUP;
	TRecordData *PPROTECT;
	TRecordData *PDEFCOLWIDTH;
	TRecordData *PDIMENSIONS;
	TRecordData *PWINDOW2;
	TRecordData *PEOF;
	System::Word __fastcall GetCALCMODE();
	void __fastcall SetCALCMODE(const System::Word Value);
	double __fastcall GetDELTA();
	void __fastcall SetDELTA(const double Value);
	System::Word __fastcall GetCALCCOUNT();
	void __fastcall SetCALCCOUNT(const System::Word Value);
	bool __fastcall GetITERATION();
	System::Word __fastcall GetREFMODE();
	bool __fastcall GetSAVERECALC();
	void __fastcall SetITERATION(const bool Value);
	void __fastcall SetREFMODE(const System::Word Value);
	void __fastcall SetSAVERECALC(const bool Value);
	bool __fastcall GetPRINTGRIDLINES();
	bool __fastcall GetPRINTHEADERS();
	void __fastcall SetPRINTGRIDLINES(const bool Value);
	void __fastcall SetPRINTHEADERS(const bool Value);
	System::Word __fastcall GetGRIDSET();
	void __fastcall SetGRIDSET(const System::Word Value);
	Biff_recsii5::PRecGUTS __fastcall GetGUTS();
	Biff_recsii5::PRecDEFAULTROWHEIGHT __fastcall GetDEFAULTROWHEIGHT();
	System::Word __fastcall GetWSBOOL();
	void __fastcall SetWSBOOL(const System::Word Value);
	bool __fastcall GetHCENTER();
	void __fastcall SetHCENTER(const bool Value);
	bool __fastcall GetVCENTER();
	void __fastcall SetVCENTER(const bool Value);
	Biff_recsii5::PRecSETUP __fastcall GetSETUP();
	System::Word __fastcall GetDEFCOLWIDTH();
	void __fastcall SetDEFCOLWIDTH(const System::Word Value);
	Biff_recsii5::PRecDIMENSIONS8 __fastcall GetDIMENSIONS();
	Biff_recsii5::PRecWINDOW2_8 __fastcall GetWINDOW2();
	Biff_recsii5::PRecBOF8 __fastcall GetBOF();
	void __fastcall SetPROTECT(const System::Word Value);
	System::Word __fastcall GetPROTECT();
	
public:
	__fastcall TRecordStorageSheet();
	virtual void __fastcall Clear();
	virtual void __fastcall SetDefaultData();
	virtual int __fastcall PostCheck();
	virtual void __fastcall MoveDefault(PRecordData Rec, PRecordData NewRec);
	virtual void __fastcall UpdateDefault(Biff_recsii5::TBIFFHeader Header, System::Sysutils::PByteArray Data);
	virtual void __fastcall UpdateInternal(System::Word Id);
	__property Biff_recsii5::PRecBOF8 BOF = {read=GetBOF};
	__property System::Word CALCMODE = {read=GetCALCMODE, write=SetCALCMODE, nodefault};
	__property System::Word CALCCOUNT = {read=GetCALCCOUNT, write=SetCALCCOUNT, nodefault};
	__property double DELTA = {read=GetDELTA, write=SetDELTA};
	__property System::Word REFMODE = {read=GetREFMODE, write=SetREFMODE, nodefault};
	__property bool ITERATION = {read=GetITERATION, write=SetITERATION, nodefault};
	__property bool SAVERECALC = {read=GetSAVERECALC, write=SetSAVERECALC, nodefault};
	__property bool PRINTHEADERS = {read=GetPRINTHEADERS, write=SetPRINTHEADERS, nodefault};
	__property bool PRINTGRIDLINES = {read=GetPRINTGRIDLINES, write=SetPRINTGRIDLINES, nodefault};
	__property System::Word GRIDSET = {read=GetGRIDSET, write=SetGRIDSET, nodefault};
	__property Biff_recsii5::PRecGUTS GUTS = {read=GetGUTS};
	__property Biff_recsii5::PRecDEFAULTROWHEIGHT DEFAULTROWHEIGHT = {read=GetDEFAULTROWHEIGHT};
	__property System::Word WSBOOL = {read=GetWSBOOL, write=SetWSBOOL, nodefault};
	__property bool HCENTER = {read=GetHCENTER, write=SetHCENTER, nodefault};
	__property bool VCENTER = {read=GetVCENTER, write=SetVCENTER, nodefault};
	__property Biff_recsii5::PRecSETUP SETUP = {read=GetSETUP};
	__property System::Word DEFCOLWIDTH = {read=GetDEFCOLWIDTH, write=SetDEFCOLWIDTH, nodefault};
	__property Biff_recsii5::PRecDIMENSIONS8 DIMENSIONS = {read=GetDIMENSIONS};
	__property Biff_recsii5::PRecWINDOW2_8 WINDOW2 = {read=GetWINDOW2};
	__property System::Word PROTECT = {read=GetPROTECT, write=SetPROTECT, nodefault};
public:
	/* TRecordStorageDefault.Destroy */ inline __fastcall virtual ~TRecordStorageSheet() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Word INTERNAL_PLACEHOLDER = System::Word(0x8000);
static const System::Word INTERNAL_FORMATS = System::Word(0x8001);
static const System::Word INTERNAL_BOUNDSHEETS = System::Word(0x8002);
static const System::Word INTERNAL_NAMES = System::Word(0x8003);
static const System::Word INTERNAL_MSODRWGRP = System::Word(0x8004);
static const System::Word INTERNAL_SST = System::Word(0x8005);
static const System::Word INTERNAL_PAGEBREAKES = System::Word(0x8101);
static const System::Word INTERNAL_HEADER = System::Word(0x8102);
static const System::Word INTERNAL_MARGINS = System::Word(0x8103);
static const System::Word INTERNAL_COLINFO = System::Word(0x8104);
static const System::Word INTERNAL_CELLDATA = System::Word(0x8105);
static const System::Word INTERNAL_SUFFIXDATA = System::Word(0x8106);
}	/* namespace Biff_recordstorage5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_RECORDSTORAGE5)
using namespace Biff_recordstorage5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_recordstorage5HPP
