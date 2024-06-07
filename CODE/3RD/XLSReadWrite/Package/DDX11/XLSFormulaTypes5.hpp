// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSFormulaTypes5.pas' rev: 35.00 (Windows)

#ifndef Xlsformulatypes5HPP
#define Xlsformulatypes5HPP

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
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsformulatypes5
{
//-- forward type declarations -----------------------------------------------
struct TXLSPtgs;
struct TXLSPtgsErr;
struct TXLSPtgsBool;
struct TXLSPtgsWS;
struct TXLSPtgsISect;
struct TXLSPtgsRef;
struct TXLSPtgsArea;
struct TXLSPtgsRef1d;
struct TXLSPtgsRef1dError;
struct TXLSPtgsRef3d;
struct TXLSPtgsRef3dError;
struct TXLSPtgsXRef1d;
struct TXLSPtgsXRef3d;
struct TXLSPtgsArea1d;
struct TXLSPtgsArea1dError;
struct TXLSPtgsArea3d;
struct TXLSPtgsArea3dError;
struct TXLSPtgsXArea1d;
struct TXLSPtgsXArea3d;
struct TXLSPtgsNum;
struct TXLSPtgsInt;
struct TXLSPtgsStr;
struct TXLSPtgsName;
struct TXLSPtgsObject;
struct TXLSPtgsArray;
struct TXLSPtgsFunc;
struct TXLSPtgsFuncVar;
struct TXLSPtgsUserFunc;
struct TXLSPtgsArrayChildFmla;
struct TXLSPtgsArrayChildFmla97;
struct TXLSPtgsDataTableFmla;
struct TXLSPtgsDataTableChildFmla;
struct TXLSPtgsTable;
struct TXLSPtgsTableCol;
struct TXLSPtgsTableSpecial;
struct TPTGArray97;
struct TArrayFloat97;
struct TArrayString97;
struct TXLSPtgsRef97;
struct TXLSPtgsArea97;
struct TXLSPtgsArea3d97;
struct TXLSPtgsRef3d97;
struct TXLSPtgsInt97;
struct TXLSPtgsName97;
struct TXLSPtgsNameX97;
struct TXLSExcelFuncArgs;
struct TXc12FuncData;
class DELPHICLASS TXLSExcelFuncNames;
//-- type declarations -------------------------------------------------------
typedef TXLSPtgs *PXLSPtgs;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgs
{
public:
	System::Byte Id;
};
#pragma pack(pop)


typedef System::StaticArray<PXLSPtgs, 65536> TXLSArrayPtgs;

typedef TXLSArrayPtgs *PXLSArrayPtgs;

typedef TXLSPtgsErr *PXLSPtgsErr;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsErr
{
public:
	System::Byte Id;
	System::Byte Value;
};
#pragma pack(pop)


typedef TXLSPtgsBool *PXLSPtgsBool;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsBool
{
public:
	System::Byte Id;
	System::Byte Value;
};
#pragma pack(pop)


typedef TXLSPtgsWS *PXLSPtgsWS;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsWS
{
public:
	System::Byte Id;
	System::Byte Count;
};
#pragma pack(pop)


typedef TXLSPtgsISect *PXLSPtgsISect;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsISect
{
public:
	System::Byte Id;
	System::Byte SpacesCount;
};
#pragma pack(pop)


typedef TXLSPtgsRef *PXLSPtgsRef;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsRef
{
public:
	System::Byte Id;
	unsigned Row;
	System::Word Col;
};
#pragma pack(pop)


typedef TXLSPtgsArea *PXLSPtgsArea;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsArea
{
public:
	System::Byte Id;
	unsigned Row1;
	unsigned Row2;
	System::Word Col1;
	System::Word Col2;
};
#pragma pack(pop)


typedef TXLSPtgsRef1d *PXLSPtgsRef1d;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsRef1d
{
public:
	System::Byte Id;
	unsigned Row;
	System::Word Col;
	System::Byte Sheet;
};
#pragma pack(pop)


typedef TXLSPtgsRef1dError *PXLSPtgsRef1dError;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsRef1dError
{
public:
	System::Byte Id;
	unsigned Row;
	System::Word Col;
	System::Byte Error;
};
#pragma pack(pop)


typedef TXLSPtgsRef3d *PXLSPtgsRef3d;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsRef3d
{
public:
	System::Byte Id;
	unsigned Row;
	System::Word Col;
	System::Byte Sheet1;
	System::Byte Sheet2;
};
#pragma pack(pop)


typedef TXLSPtgsRef3dError *PXLSPtgsRef3dError;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsRef3dError
{
public:
	System::Byte Id;
	unsigned Row;
	System::Word Col;
	System::Byte Error1;
	System::Byte Error2;
};
#pragma pack(pop)


typedef TXLSPtgsXRef1d *PXLSPtgsXRef1d;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsXRef1d
{
public:
	System::Byte Id;
	unsigned Row;
	System::Word Col;
	System::Word XBook;
	System::Byte Sheet;
};
#pragma pack(pop)


typedef TXLSPtgsXRef3d *PXLSPtgsXRef3d;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsXRef3d
{
public:
	System::Byte Id;
	unsigned Row;
	System::Word Col;
	System::Word XBook;
	System::Byte Sheet1;
	System::Byte Sheet2;
};
#pragma pack(pop)


typedef TXLSPtgsArea1d *PXLSPtgsArea1d;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsArea1d
{
public:
	System::Byte Id;
	unsigned Row1;
	unsigned Row2;
	System::Word Col1;
	System::Word Col2;
	System::Byte Sheet;
};
#pragma pack(pop)


typedef TXLSPtgsArea1dError *PXLSPtgsArea1dError;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsArea1dError
{
public:
	System::Byte Id;
	unsigned Row1;
	unsigned Row2;
	System::Word Col1;
	System::Word Col2;
	System::Byte Error;
};
#pragma pack(pop)


typedef TXLSPtgsArea3d *PXLSPtgsArea3d;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsArea3d
{
public:
	System::Byte Id;
	unsigned Row1;
	unsigned Row2;
	System::Word Col1;
	System::Word Col2;
	System::Byte Sheet1;
	System::Byte Sheet2;
};
#pragma pack(pop)


typedef TXLSPtgsArea3dError *PXLSPtgsArea3dError;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsArea3dError
{
public:
	System::Byte Id;
	unsigned Row1;
	unsigned Row2;
	System::Word Col1;
	System::Word Col2;
	System::Byte Error1;
	System::Byte Error2;
};
#pragma pack(pop)


typedef TXLSPtgsXArea1d *PXLSPtgsXArea1d;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsXArea1d
{
public:
	System::Byte Id;
	unsigned Row1;
	unsigned Row2;
	System::Word Col1;
	System::Word Col2;
	System::Word XBook;
	System::Byte Sheet;
};
#pragma pack(pop)


typedef TXLSPtgsXArea3d *PXLSPtgsXArea3d;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsXArea3d
{
public:
	System::Byte Id;
	unsigned Row1;
	unsigned Row2;
	System::Word Col1;
	System::Word Col2;
	System::Word XBook;
	System::Byte Sheet1;
	System::Byte Sheet2;
};
#pragma pack(pop)


typedef TXLSPtgsNum *PXLSPtgsNum;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsNum
{
public:
	System::Byte Id;
	double Value;
};
#pragma pack(pop)


typedef TXLSPtgsInt *PXLSPtgsInt;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsInt
{
public:
	System::Byte Id;
	int Value;
};
#pragma pack(pop)


typedef TXLSPtgsStr *PXLSPtgsStr;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsStr
{
public:
	System::Byte Id;
	System::Word Len;
	System::StaticArray<System::WideChar, 32768> Str;
};
#pragma pack(pop)


typedef TXLSPtgsName *PXLSPtgsName;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsName
{
public:
	System::Byte Id;
	System::Word NameId;
};
#pragma pack(pop)


typedef TXLSPtgsObject *PXLSPtgsObject;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsObject
{
public:
	System::Byte Id;
	System::TObject* Obj;
};
#pragma pack(pop)


typedef TXLSPtgsArray *PXLSPtgsArray;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsArray
{
public:
	System::Byte Id;
	System::Word Cols;
	unsigned Rows;
};
#pragma pack(pop)


typedef TXLSPtgsFunc *PXLSPtgsFunc;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsFunc
{
public:
	System::Byte Id;
	System::Word FuncId;
};
#pragma pack(pop)


typedef TXLSPtgsFuncVar *PXLSPtgsFuncVar;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsFuncVar
{
public:
	System::Byte Id;
	System::Byte ArgCount;
	System::Word FuncId;
};
#pragma pack(pop)


typedef TXLSPtgsUserFunc *PXLSPtgsUserFunc;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsUserFunc
{
public:
	System::Byte Id;
	System::Byte ArgCount;
	System::Word Len;
	System::StaticArray<System::WideChar, 32768> Name;
};
#pragma pack(pop)


typedef TXLSPtgsArrayChildFmla *PXLSPtgsArrayChildFmla;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsArrayChildFmla
{
public:
	System::Byte Id;
	System::Word ParentCol;
	unsigned ParentRow;
};
#pragma pack(pop)


typedef TXLSPtgsArrayChildFmla97 *PXLSPtgsArrayChildFmla97;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsArrayChildFmla97
{
public:
	System::Byte Id;
	System::Word ParentCol;
	unsigned ParentRow;
};
#pragma pack(pop)


typedef TXLSPtgsDataTableFmla *PXLSPtgsDataTableFmla;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsDataTableFmla
{
public:
	System::Byte Id;
	System::Byte Options;
	System::Word R1Col;
	unsigned R1Row;
	System::Word R2Col;
	unsigned R2Row;
};
#pragma pack(pop)


typedef TXLSPtgsDataTableChildFmla *PXLSPtgsDataTableChildFmla;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsDataTableChildFmla
{
public:
	System::Byte Id;
	System::Word ParentCol;
	unsigned ParentRow;
};
#pragma pack(pop)


typedef TXLSPtgsTable *PXLSPtgsTable;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsTable
{
public:
	System::Byte Id;
	System::Word TableId;
	System::Word Sheet;
	System::Byte ArgCount;
	System::Byte AreaPtg;
	unsigned Row1;
	unsigned Row2;
	System::Word Col1;
	System::Word Col2;
};
#pragma pack(pop)


typedef TXLSPtgsTableCol *PXLSPtgsTableCol;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsTableCol
{
public:
	System::Byte Id;
	System::Word TableId;
	System::Word ColId;
	System::Byte AreaPtg;
	unsigned Row1;
	unsigned Row2;
	System::Word Col1;
	System::Word Col2;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TXLSTableSpecialSpecifier : unsigned char { xtssNone, xtssAll, xtssData, xtssHeaders, xtssTotals, xtssThisRow };

typedef TXLSPtgsTableSpecial *PXLSPtgsTableSpecial;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsTableSpecial
{
public:
	System::Byte Id;
	System::Byte SpecialId;
	System::Byte Error;
	System::Byte AreaId;
	unsigned Row1;
	unsigned Row2;
	System::Word Col1;
	System::Word Col2;
};
#pragma pack(pop)


typedef TPTGArray97 *PPTGArray97;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPTGArray97
{
	
private:
	struct DECLSPEC_DRECORD _TPTGArray97__1
	{
	};
	
	
	
public:
	System::Byte Cols;
	System::Word Rows;
	_TPTGArray97__1 Data;
};
#pragma pack(pop)


typedef TArrayFloat97 *PArrayFloat97;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TArrayFloat97
{
public:
	System::Byte ID;
	double Value;
};
#pragma pack(pop)


typedef TArrayString97 *PArrayString97;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TArrayString97
{
	
private:
	struct DECLSPEC_DRECORD _TArrayString97__1
	{
	};
	
	
	
public:
	System::Byte ID;
	System::Word Len;
	_TArrayString97__1 Data;
};
#pragma pack(pop)


typedef TXLSPtgsRef97 *PXLSPtgsRef97;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsRef97
{
public:
	System::Byte Id;
	System::Word Row;
	System::Word Col;
};
#pragma pack(pop)


typedef TXLSPtgsArea97 *PXLSPtgsArea97;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsArea97
{
public:
	System::Byte Id;
	System::Word Row1;
	System::Word Row2;
	System::Word Col1;
	System::Word Col2;
};
#pragma pack(pop)


typedef TXLSPtgsArea3d97 *PXLSPtgsArea3d97;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsArea3d97
{
public:
	System::Byte Id;
	System::Word ExtSheetIndex;
	System::Word Row1;
	System::Word Row2;
	System::Word Col1;
	System::Word Col2;
};
#pragma pack(pop)


typedef TXLSPtgsRef3d97 *PXLSPtgsRef3d97;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsRef3d97
{
public:
	System::Byte Id;
	System::Word ExtSheetIndex;
	System::Word Row;
	System::Word Col;
};
#pragma pack(pop)


typedef TXLSPtgsInt97 *PXLSPtgsInt97;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsInt97
{
public:
	System::Byte Id;
	System::Word Value;
};
#pragma pack(pop)


typedef TXLSPtgsName97 *PXLSPtgsName97;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsName97
{
public:
	System::Byte Id;
	System::Word NameId;
	System::Word Unused;
};
#pragma pack(pop)


typedef TXLSPtgsNameX97 *PXLSPtgsNameX97;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TXLSPtgsNameX97
{
public:
	System::Byte Id;
	System::Word ExtSheetIndex;
	System::Word NameIndex;
	System::Word Unused;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TXLSExcelFuncType : unsigned char { xeftNormal, xeftArray };

enum DECLSPEC_DENUM TXLSExcelFuncArgType : unsigned char { xefatNone, xefatRef, xefatArea, xefatRange, xefatValue };

typedef TXLSExcelFuncArgs *PXLSExcelFuncArgs;

struct DECLSPEC_DRECORD TXLSExcelFuncArgs
{
public:
	int FuncId;
	int ArgCount;
	TXLSExcelFuncArgType Result;
	System::StaticArray<TXLSExcelFuncArgType, 10> Args;
};


typedef TXc12FuncData *PXc12FuncData;

struct DECLSPEC_DRECORD TXc12FuncData
{
public:
	TXLSExcelFuncType Type_;
	TXLSExcelFuncArgs *Args;
	int Id;
	int Min;
	int Max;
	System::UnicodeString Name;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSExcelFuncNames : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	PXc12FuncData operator[](int Index) { return this->Items[Index]; }
	
private:
	PXc12FuncData __fastcall GetItems(int Index);
	
protected:
	System::Inifiles::THashedStringList* FList;
	
public:
	__fastcall TXLSExcelFuncNames();
	__fastcall virtual ~TXLSExcelFuncNames();
	int __fastcall Count();
	int __fastcall FindId(const System::UnicodeString AName);
	System::UnicodeString __fastcall FindName(int AId);
	bool __fastcall ArgCount(int AId, /* out */ int &AMin, /* out */ int &AMax)/* overload */;
	int __fastcall ArgCount(int AId)/* overload */;
	bool __fastcall FixedArgs(int AId);
	__property PXc12FuncData Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const int XLSFMLA_MAXDATE = int(0x2d2481);
static const System::Int8 xptgNone = System::Int8(0x0);
static const System::Int8 xptgOpAdd = System::Int8(0x3);
static const System::Int8 xptgOpSub = System::Int8(0x4);
static const System::Int8 xptgOpMult = System::Int8(0x5);
static const System::Int8 xptgOpDiv = System::Int8(0x6);
static const System::Int8 xptgOpPower = System::Int8(0x7);
static const System::Int8 xptgOpConcat = System::Int8(0x8);
static const System::Int8 xptgOpLT = System::Int8(0x9);
static const System::Int8 xptgOpLE = System::Int8(0xa);
static const System::Int8 xptgOpEQ = System::Int8(0xb);
static const System::Int8 xptgOpGE = System::Int8(0xc);
static const System::Int8 xptgOpGT = System::Int8(0xd);
static const System::Int8 xptgOpNE = System::Int8(0xe);
static const System::Int8 xptgOpIsect = System::Int8(0xf);
static const System::Int8 xptgOpUnion = System::Int8(0x10);
static const System::Int8 xptgOpRange = System::Int8(0x11);
static const System::Int8 xptgOpUPlus = System::Int8(0x12);
static const System::Int8 xptgOpUMinus = System::Int8(0x13);
static const System::Int8 xptgOpPercent = System::Int8(0x14);
static const System::Int8 xptgLPar = System::Int8(0x15);
static const System::Int8 xptgErr = System::Int8(0x1c);
static const System::Int8 xptgBool = System::Int8(0x1d);
static const System::Int8 xptgNum = System::Int8(0x1f);
static const System::Int8 xptgExp97 = System::Int8(0x1);
static const System::Int8 xptgStr97 = System::Int8(0x17);
static const System::Int8 xptgAttr97 = System::Int8(0x19);
static const System::Int8 xptgInt97 = System::Int8(0x1e);
static const System::Int8 xptgMissArg97 = System::Int8(0x16);
static const System::Int8 xptgExtend97 = System::Int8(0x18);
static const System::Int8 xptgArray97 = System::Int8(0x20);
static const System::Int8 xptgArrayV97 = System::Int8(0x40);
static const System::Int8 xptgArrayA97 = System::Int8(0x60);
static const System::Int8 xptgName97 = System::Int8(0x23);
static const System::Int8 xptgNameV97 = System::Int8(0x43);
static const System::Int8 xptgNameA97 = System::Int8(0x63);
static const System::Int8 xptgRef97 = System::Int8(0x24);
static const System::Int8 xptgRefV97 = System::Int8(0x44);
static const System::Int8 xptgRefA97 = System::Int8(0x64);
static const System::Int8 xptgRefN97 = System::Int8(0x2c);
static const System::Int8 xptgRefNV97 = System::Int8(0x4c);
static const System::Int8 xptgRefNA97 = System::Int8(0x6c);
static const System::Int8 xptgArea97 = System::Int8(0x25);
static const System::Int8 xptgAreaV97 = System::Int8(0x45);
static const System::Int8 xptgAreaA97 = System::Int8(0x65);
static const System::Int8 xptgRef3d97 = System::Int8(0x3a);
static const System::Int8 xptgRef3dV97 = System::Int8(0x5a);
static const System::Int8 xptgRef3dA97 = System::Int8(0x7a);
static const System::Int8 xptgRefErr3d97 = System::Int8(0x3c);
static const System::Int8 xptgRefErr3dV97 = System::Int8(0x5c);
static const System::Int8 xptgRefErr3dA97 = System::Int8(0x7c);
static const System::Int8 xptgArea3d97 = System::Int8(0x3b);
static const System::Int8 xptgArea3dV97 = System::Int8(0x5b);
static const System::Int8 xptgArea3dA97 = System::Int8(0x7b);
static const System::Int8 xptgAreaErr3d97 = System::Int8(0x3d);
static const System::Int8 xptgAreaErr3dV97 = System::Int8(0x5d);
static const System::Int8 xptgAreaErr3dA97 = System::Int8(0x7d);
static const System::Int8 xptgAreaN97 = System::Int8(0x2d);
static const System::Int8 xptgAreaNV97 = System::Int8(0x4d);
static const System::Int8 xptgAreaNA97 = System::Int8(0x6d);
static const System::Int8 xptgRefErr97 = System::Int8(0x2a);
static const System::Int8 xptgRefErrV97 = System::Int8(0x4a);
static const System::Int8 xptgRefErrA97 = System::Int8(0x6a);
static const System::Int8 xptgAreaErr97 = System::Int8(0x2b);
static const System::Int8 xptgAreaErrV97 = System::Int8(0x4b);
static const System::Int8 xptgAreaErrA97 = System::Int8(0x6b);
static const System::Int8 xptgFunc97 = System::Int8(0x21);
static const System::Int8 xptgFuncV97 = System::Int8(0x41);
static const System::Int8 xptgFuncA97 = System::Int8(0x61);
static const System::Int8 xptgFuncVar97 = System::Int8(0x22);
static const System::Int8 xptgFuncVarV97 = System::Int8(0x42);
static const System::Int8 xptgFuncVarA97 = System::Int8(0x62);
static const System::Int8 xptgNameX97 = System::Int8(0x39);
static const System::Int8 xptgNameXV97 = System::Int8(0x59);
static const System::Int8 xptgNameXA97 = System::Int8(0x79);
static const System::Int8 xptgMemFunc97 = System::Int8(0x29);
static const System::Int8 xptgMemFuncV97 = System::Int8(0x49);
static const System::Int8 xptgMemFuncA97 = System::Int8(0x69);
static const System::Int8 xptgMemArea97 = System::Int8(0x26);
static const System::Int8 xptgMemAreaV97 = System::Int8(0x46);
static const System::Int8 xptgMemAreaA97 = System::Int8(0x66);
static const System::Int8 xptgMemErr97 = System::Int8(0x27);
static const System::Int8 xptgMemErrV97 = System::Int8(0x47);
static const System::Int8 xptgMemErrA97 = System::Int8(0x67);
static const System::Byte xptgArray = System::Byte(0x80);
static const System::Byte xptgFunc = System::Byte(0x81);
static const System::Byte xptgFuncVar = System::Byte(0x82);
static const System::Byte xptgName = System::Byte(0x83);
static const System::Byte xptgRef = System::Byte(0x84);
static const System::Byte xptgArea = System::Byte(0x86);
static const System::Byte xptgRefErr = System::Byte(0x87);
static const System::Byte xptgAreaErr = System::Byte(0x88);
static const System::Byte xptgInt = System::Byte(0x89);
static const System::Byte xptgStr = System::Byte(0x8a);
static const System::Byte xptgWS = System::Byte(0xa0);
static const System::Byte xptgRPar = System::Byte(0xa1);
static const System::Byte xptgRef1d = System::Byte(0xa2);
static const System::Byte xptgRef3d = System::Byte(0xa3);
static const System::Byte xptgXRef1d = System::Byte(0xa4);
static const System::Byte xptgXRef3d = System::Byte(0xa5);
static const System::Byte xptgArea1d = System::Byte(0xa6);
static const System::Byte xptgArea3d = System::Byte(0xa7);
static const System::Byte xptgXArea1d = System::Byte(0xa8);
static const System::Byte xptgXArea3d = System::Byte(0xa9);
static const System::Byte xptgRef1dErr = System::Byte(0xb0);
static const System::Byte xptgRef3dErr = System::Byte(0xb1);
static const System::Byte xptgArea1dErr = System::Byte(0xb2);
static const System::Byte xptgArea3dErr = System::Byte(0xb3);
static const System::Byte xptgArrayFmlaChild = System::Byte(0xb8);
static const System::Byte xptgArrayFmlaChild97 = System::Byte(0xb9);
static const System::Byte xptgDataTableFmla = System::Byte(0xba);
static const System::Byte xptgDataTableFmlaChild = System::Byte(0xbb);
static const System::Byte xptgTable = System::Byte(0xbc);
static const System::Byte xptgTableCol = System::Byte(0xbd);
static const System::Byte xptgTableSpecial = System::Byte(0xbe);
static const System::Byte xptgFuncArg = System::Byte(0xf0);
static const System::Byte xptgMissingArg = System::Byte(0xf1);
static const System::Byte xptgUserFunc = System::Byte(0xf2);
static const System::Byte xptg_EXCEL_97 = System::Byte(0xff);
static const System::Byte xptg_ARRAYCONSTS_97 = System::Byte(0xfe);
static const System::Byte xptg_OBJECT = System::Byte(0xfd);
#define XPtgsLParType (System::Set<System::Byte, 0, 255>() << 0x15 << 0x80 << 0x81 << 0x82 << 0xf2 )
#define XPtgsRefAreaType (System::Set<System::Byte, 0, 255>() << 0x84 << 0x86 << 0x87 << 0x88 << 0xa2 << 0xa3 << 0xa4 << 0xa5 << 0xa6 << 0xa7 << 0xa8 << 0xa9 << 0xb0 << 0xb1 << 0xb2 << 0xb3 )
#define XPtgsFuncType (System::Set<System::Byte, 0, 255>() << 0x81 << 0x82 << 0xf2 )
#define XPtgsVarFuncType (System::Set<System::Byte, 0, 255>() << 0x82 << 0xf2 )
static const System::Int8 FixedSzPtgsStr = System::Int8(0x3);
static const System::Word XLS_NAME_UNKNOWN = System::Word(0xffff);
static const System::Int8 FixedSzPtgsUserFunc = System::Int8(0x4);
static const System::Int8 XLSFUNCID_LOOKUP = System::Int8(0x1c);
static const System::Int8 XLSFUNCID_HLOOKUP = System::Int8(0x65);
static const System::Int8 XLSFUNCID_VLOOKUP = System::Int8(0x66);
extern DELPHI_PACKAGE TXLSExcelFuncNames* G_XLSExcelFuncNames;
extern DELPHI_PACKAGE System::StaticArray<int, 256> G_XLSPtgsSize;
}	/* namespace Xlsformulatypes5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSFORMULATYPES5)
using namespace Xlsformulatypes5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsformulatypes5HPP
