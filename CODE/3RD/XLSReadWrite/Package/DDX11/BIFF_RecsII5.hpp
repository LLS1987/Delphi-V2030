// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_RecsII5.pas' rev: 35.00 (Windows)

#ifndef Biff_recsii5HPP
#define Biff_recsii5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_recsii5
{
//-- forward type declarations -----------------------------------------------
struct TRecPtgsExp;
struct T2ByteWord;
struct TRecCellAreaI;
struct TRecCellArea;
struct TRec32CellArea;
struct TRecCellAreaShort;
struct TRecCellRef;
struct TPageBreak;
struct TRecTXORUN;
struct TObjCMO;
struct TObjSBS;
struct TObjLBS;
struct TFormatRun;
struct TBIFFHeader;
struct TRec2INTEGER;
struct TRec2NUMBER;
struct TRec2LABEL;
struct TRec2FORMULA;
struct TRec2STRING;
struct TRecARRAY;
struct TRecBLANK;
struct TRecBOF8;
struct TRecBOF7;
struct TRecBOF4;
struct TRecBOOLERR;
struct TRecBOUNDSHEET7;
struct TRecBOUNDSHEET8;
struct TRecCODEPAGE;
struct TRecCOLWIDTH;
struct TRecCOLINFO;
struct TRecCOUNTRY;
struct TOPERNum;
struct TOPERStr;
struct TOPERBool;
struct TOPERErr;
struct TRecCRN;
struct TCFFont;
struct TCFBorder;
struct TCFPattern;
struct TRecCF;
struct TRecCONDFMT;
struct TRecDEFAULTROWHEIGHT;
struct TRecDBCELL;
struct TRecDIMENSIONS2;
struct TRecDIMENSIONS7;
struct TRecDIMENSIONS8;
struct TRecDVAL;
struct TRecISSTINF;
struct TRecEXTSST;
struct TRecEXTERNNAME8;
struct TRecEXTERNNAME5;
struct TRecEXTERNNAME3;
struct TRecEXTERNSHEET7;
struct TXTI;
struct TRecEXTERNSHEET8;
struct TRecFILEPASS;
struct TRecFONT4;
struct TRecFONT;
struct TRecFORMAT4;
struct TRecFORMAT7;
struct TRecFORMAT8;
struct TRecFORMAT2;
struct TRecFORMULA;
struct TRecFORMULA_;
struct TRecFORMULA3;
struct TRecGUTS;
struct TRecHLINK;
struct TRecHLINKTOOLTIP;
struct TRecHORIZONTALPAGEBREAKS;
struct TRecINDEX7;
struct TRecINDEX8;
struct TRecLABELSST;
struct TRecLABEL;
struct TRecMARGIN;
struct TRecMERGEDCELLS;
struct TRecMULBLANK;
struct TMULRK;
struct TRecMULRK;
struct TRecNUMBER;
struct TRecNAME;
struct TRecNAME3;
struct TRecNOTE;
struct TRecOBJ;
struct TRecPALETTE;
struct TRecPANE;
struct TRecRECALCID;
struct TRecROW;
struct TRK;
struct TRecRK;
struct TRecRSTRING;
struct TRecSCL;
struct TRecSELECTION;
struct TRecSELECTION_2;
struct TRecSETUP;
struct TRecSHEETEXT;
struct TRecFEATHEADR;
struct TRecSHRFMLA;
struct TRecSST;
struct TRecSTRING;
struct TRecSTRING1Byte;
struct TRecSTYLE;
struct TRecSTYLE_USER;
struct TRecSUPBOOK;
struct TRecTXO;
struct TRecVERTICALPAGEBREAKS;
struct TRecWINDOW1;
struct TRecWINDOW2_7;
struct TRecWINDOW2_8;
struct TRecWINDOW2_3;
struct TRecXCT;
struct TRecXF3;
struct TRecXF4;
struct TRecXF7;
struct TRecXF8;
struct TCRec3D;
struct TCRecAI;
struct TCRecAREA;
struct TCRecAREAFORMAT;
struct TCRecATTACHEDLABEL;
struct TCRecAXCEXT;
struct TCRecAXESUSED;
struct TCRecAXISLINEFORMAT;
struct TCRecAXISPARENT;
struct TCRecAXIS;
struct TCRecBAR;
struct TCRecCATSERRANGE;
struct TCRecCHART;
struct TCRecCHARTFORMAT;
struct TCRecDATAFORMAT;
struct TCRecDEFAULTTEXT;
struct TCRecFBI;
struct TCRecFBI_Font;
struct TCRecFONTX;
struct TCRecFRAME;
struct TCRecGEOMETRY;
struct TCRecLEGEND_;
struct TCRecLINE;
struct TCRecLINEFORMAT;
struct TCRecMARKERFORMAT;
struct TCRecOBJECTLINK;
struct TCRecPLOTGROWTH;
struct TCRecPICF;
struct TCRecPIE;
struct TCRecPIEFORMAT;
struct TCRecPOS;
struct TCRecRADAR;
struct TCRecRADARAREA;
struct TCRecSCATTER;
struct TCRecSERIES;
struct TCRecSERIESTEXT;
struct TCRecSERTOCRT;
struct TCRecSHTPROPS;
struct TCRecSIINDEX;
struct TCRecSURFACE;
struct TCRecTEXT;
struct TCRecTICK;
struct TCRecVALUERANGE;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TCalculateOption : unsigned char { coNotCalcDependent, coExternalSeek };

typedef System::Set<TCalculateOption, TCalculateOption::coNotCalcDependent, TCalculateOption::coExternalSeek> TCalculateOptions;

enum DECLSPEC_DENUM TFormulaVersion : unsigned char { fvExcel95, fvExcel97 };

typedef TRecPtgsExp *PRecPtgsExp;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecPtgsExp
{
public:
	System::Byte Id;
	System::Word Row;
	System::Word Col;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TSubStreamType : unsigned char { stGlobals, stVBModule, stWorksheet, stChart, stExcel4Macro, stWorkspace };

enum DECLSPEC_DENUM TWordBit : unsigned char { b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15 };

typedef System::Set<TWordBit, TWordBit::b0, TWordBit::b15> TWordBits;

#pragma pack(push,1)
struct DECLSPEC_DRECORD T2ByteWord
{
	
public:
	union
	{
		struct 
		{
			System::StaticArray<System::Byte, 2> B;
		};
		struct 
		{
			System::Word W;
		};
		
	};
};
#pragma pack(pop)


struct DECLSPEC_DRECORD TRecCellAreaI
{
public:
	int Row1;
	int Row2;
	int Col1;
	int Col2;
};


typedef TRecCellArea *PRecCellArea;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecCellArea
{
public:
	System::Word Row1;
	System::Word Row2;
	System::Word Col1;
	System::Word Col2;
};
#pragma pack(pop)


typedef TRecCellArea *PRec32CellArea;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRec32CellArea
{
public:
	unsigned Row1;
	unsigned Row2;
	unsigned Col1;
	unsigned Col2;
};
#pragma pack(pop)


typedef TRecCellAreaShort *PRecCellAreaShort;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecCellAreaShort
{
public:
	System::Word Row1;
	System::Word Row2;
	System::Byte Col1;
	System::Byte Col2;
};
#pragma pack(pop)


typedef TRecCellRef *PRecCellRef;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecCellRef
{
public:
	System::Word Row;
	System::Word Col;
};
#pragma pack(pop)


typedef System::DynamicArray<TRecCellRef> TCellRefArray;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TPageBreak
{
public:
	System::Word Val1;
	System::Word Val2;
	System::Word Val3;
};
#pragma pack(pop)


typedef TRecTXORUN *PRecTXORUN;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecTXORUN
{
public:
	System::Word CharIndex;
	System::Word FontIndex;
	unsigned Reserved;
};
#pragma pack(pop)


typedef System::DynamicArray<TRecTXORUN> TDynTXORUNArray;

typedef TObjCMO *PObjCMO;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TObjCMO
{
public:
	System::Word ObjType;
	System::Word ObjId;
	System::Word Options;
	System::StaticArray<System::Byte, 12> Reserved;
};
#pragma pack(pop)


typedef TObjSBS *PObjSBS;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TObjSBS
{
public:
	System::StaticArray<System::Byte, 4> Reserved;
	System::Word ScrollPos;
	System::Word MinimumValue;
	System::Word MaximumValue;
	System::Word ScrollWhenArrowClicked;
	System::Word ScrollWhenBarClicked;
	System::Word Horizontal;
	System::Word Width;
	System::Word Options;
};
#pragma pack(pop)


typedef TObjLBS *PObjLBS;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TObjLBS
{
public:
	System::Byte Reserved3;
	System::Word Elements;
	System::Word Selected;
	System::Word Options;
};
#pragma pack(pop)


typedef TFormatRun *PFormatRun;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TFormatRun
{
public:
	System::Word Index;
	System::Word FontIndex;
};
#pragma pack(pop)


typedef TBIFFHeader *PBIFFHeader;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TBIFFHeader
{
public:
	System::Word RecID;
	System::Word Length;
};
#pragma pack(pop)


typedef TRec2INTEGER *PRec2INTEGER;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRec2INTEGER
{
public:
	System::Word Row;
	System::Byte Col;
	System::Byte Res;
	System::StaticArray<System::Byte, 3> Attribute;
	System::Word Value;
};
#pragma pack(pop)


typedef TRec2NUMBER *PRec2NUMBER;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRec2NUMBER
{
public:
	System::Word Row;
	System::Byte Col;
	System::Byte Res;
	System::StaticArray<System::Byte, 3> Attribute;
	double Value;
};
#pragma pack(pop)


typedef TRec2LABEL *PRec2LABEL;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRec2LABEL
{
public:
	System::Word Row;
	System::Byte Col;
	System::Byte Res;
	System::StaticArray<System::Byte, 3> Attribute;
	System::Byte Len;
	System::StaticArray<System::Byte, 256> Data;
};
#pragma pack(pop)


typedef TRec2FORMULA *PRec2FORMULA;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRec2FORMULA
{
public:
	System::Word Row;
	System::Byte Col;
	System::Byte Res;
	System::StaticArray<System::Byte, 3> Attribute;
	double Value;
	System::Byte Options;
	System::Byte ParseLen;
	System::StaticArray<System::Byte, 256> Data;
};
#pragma pack(pop)


typedef TRec2STRING *PRec2STRING;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRec2STRING
{
public:
	System::Byte Len;
	System::StaticArray<System::Byte, 256> Data;
};
#pragma pack(pop)


typedef TRecARRAY *PRecARRAY;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecARRAY
{
	
private:
	struct DECLSPEC_DRECORD _TRecARRAY__1
	{
	};
	
	
	
public:
	System::Word Row1;
	System::Word Row2;
	System::Byte Col1;
	System::Byte Col2;
	System::Word Options;
	unsigned Unused;
	System::Word DataSize;
	_TRecARRAY__1 Data;
};
#pragma pack(pop)


typedef TRecBLANK *PRecBLANK;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecBLANK
{
public:
	System::Word Row;
	System::Word Col;
	System::Word FormatIndex;
};
#pragma pack(pop)


typedef TRecBOF8 *PRecBOF8;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecBOF8
{
public:
	System::Word VersionNumber;
	System::Word SubstreamType;
	System::Word BuildIdentifier;
	System::Word BuildYear;
	int FileHistoryFlags;
	int LowBIFF;
};
#pragma pack(pop)


typedef TRecBOF7 *PRecBOF7;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecBOF7
{
public:
	System::Word VersionNumber;
	System::Word SubstreamType;
	System::Word BuildIdentifier;
	System::Word BuildYear;
};
#pragma pack(pop)


typedef TRecBOF4 *PRecBOF4;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecBOF4
{
public:
	System::Word A;
	System::Word B;
	System::Word C;
};
#pragma pack(pop)


typedef TRecBOOLERR *PRecBOOLERR;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecBOOLERR
{
public:
	System::Word Row;
	System::Word Col;
	System::Word FormatIndex;
	System::Byte BoolErr;
	System::Byte Error;
};
#pragma pack(pop)


typedef TRecBOUNDSHEET7 *PRecBOUNDSHEET7;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecBOUNDSHEET7
{
public:
	int BOFPos;
	System::Word Options;
	System::Byte NameLen;
	System::StaticArray<System::Byte, 256> Name;
};
#pragma pack(pop)


typedef TRecBOUNDSHEET8 *PRecBOUNDSHEET8;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecBOUNDSHEET8
{
public:
	int BOFPos;
	System::Word Options;
	System::Byte NameLen;
	System::StaticArray<System::Byte, 65536> Name;
};
#pragma pack(pop)


typedef TRecCODEPAGE *PRecCODEPAGE;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecCODEPAGE
{
public:
	System::Word Codepage;
};
#pragma pack(pop)


typedef TRecCOLWIDTH *PRecCOLWIDTH;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecCOLWIDTH
{
public:
	System::Byte Col1;
	System::Byte Col2;
	System::Word Width;
};
#pragma pack(pop)


typedef TRecCOLINFO *PRecCOLINFO;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecCOLINFO
{
public:
	System::Word Col1;
	System::Word Col2;
	System::Word Width;
	System::Word FormatIndex;
	System::Word Options;
	System::Word Reserved;
};
#pragma pack(pop)


typedef TRecCOUNTRY *PRecCOUNTRY;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecCOUNTRY
{
public:
	System::Word DefaultCountryIndex;
	System::Word WinIniCountry;
};
#pragma pack(pop)


typedef TOPERNum *POPERNum;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TOPERNum
{
public:
	System::Byte OperType;
	double Value;
};
#pragma pack(pop)


typedef TOPERStr *POPERStr;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TOPERStr
{
public:
	System::Byte OperType;
	System::Byte StrLen;
	System::StaticArray<System::WideChar, 1024> Value;
};
#pragma pack(pop)


typedef TOPERBool *POPERBool;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TOPERBool
{
public:
	System::Byte OperType;
	System::Word Value;
	System::StaticArray<System::Byte, 6> Unused;
};
#pragma pack(pop)


typedef TOPERErr *POPERErr;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TOPERErr
{
public:
	System::Byte OperType;
	System::Word Value;
	System::StaticArray<System::Byte, 6> Unused;
};
#pragma pack(pop)


typedef TRecCRN *PRecCRN;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecCRN
{
public:
	System::Byte LastCol;
	System::Byte FirstCol;
	System::Word Row;
	System::StaticArray<TOPERNum, 1024> OPER;
};
#pragma pack(pop)


typedef TCFFont *PCFFont;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCFFont
{
public:
	System::StaticArray<System::Byte, 64> Reserved1;
	unsigned Height;
	unsigned Options;
	System::Word Weight;
	System::Word Escapement;
	System::Byte Underline;
	System::StaticArray<System::Byte, 3> Reserved2;
	unsigned ColorIndex;
	System::StaticArray<System::Byte, 4> Reserved3;
	unsigned ModifiedFlags;
	unsigned EscapementModified;
	unsigned UnderlineModified;
	System::StaticArray<System::Byte, 16> Reserved4;
	System::Word Is0001;
};
#pragma pack(pop)


typedef TCFBorder *PCFBorder;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCFBorder
{
public:
	System::Word Linestyle;
	unsigned ColorIndex;
	System::Word Reserved;
};
#pragma pack(pop)


typedef TCFPattern *PCFPattern;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCFPattern
{
public:
	System::Word PatternStyle;
	System::Word ColorIndex;
};
#pragma pack(pop)


typedef TRecCF *PRecCF;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecCF
{
	
private:
	struct DECLSPEC_DRECORD _TRecCF__1
	{
	};
	
	
	
public:
	System::Byte CFType;
	System::Byte Operator_;
	System::Word Formula1Size;
	System::Word Formula2Size;
	unsigned Flags;
	System::Word Reserved;
	_TRecCF__1 VarData;
};
#pragma pack(pop)


typedef TRecCONDFMT *PRecCONDFMT;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecCONDFMT
{
public:
	System::Word CFCount;
	System::Word Flags;
	TRecCellArea AreaExt;
	System::Word AreaCount;
	System::StaticArray<TRecCellArea, 1> Areas;
};
#pragma pack(pop)


typedef TRecDEFAULTROWHEIGHT *PRecDEFAULTROWHEIGHT;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecDEFAULTROWHEIGHT
{
public:
	System::Word Options;
	System::Word Height;
};
#pragma pack(pop)


typedef TRecDBCELL *PRecDBCELL;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecDBCELL
{
public:
	int RowOffset;
	System::StaticArray<short, 32769> Offsets;
};
#pragma pack(pop)


typedef TRecDIMENSIONS2 *PRecDIMENSIONS2;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecDIMENSIONS2
{
public:
	System::Word FirstRow;
	System::Word LastRow;
	System::Word FirstCol;
	System::Word LastCol;
};
#pragma pack(pop)


typedef TRecDIMENSIONS7 *PRecDIMENSIONS7;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecDIMENSIONS7
{
public:
	System::Word FirstRow;
	System::Word LastRow;
	System::Word FirstCol;
	System::Word LastCol;
	System::Word Reserved;
};
#pragma pack(pop)


typedef TRecDIMENSIONS8 *PRecDIMENSIONS8;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecDIMENSIONS8
{
public:
	int FirstRow;
	int LastRow;
	System::Word FirstCol;
	System::Word LastCol;
	System::Word Reserved;
};
#pragma pack(pop)


typedef TRecDVAL *PRecDVAL;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecDVAL
{
public:
	System::Word Options;
	unsigned X;
	unsigned Y;
	unsigned DropDownId;
	unsigned DVCount;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecISSTINF
{
public:
	int Pos;
	System::Word Offset;
	System::Word Reserved;
};
#pragma pack(pop)


typedef TRecEXTSST *PRecEXTSST;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecEXTSST
{
	
private:
	struct DECLSPEC_DRECORD _TRecEXTSST__1
	{
	};
	
	
	
public:
	System::Word BucketSize;
	_TRecEXTSST__1 ISSTINF;
};
#pragma pack(pop)


typedef TRecEXTERNNAME8 *PRecEXTERNNAME8;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecEXTERNNAME8
{
public:
	System::Word Options;
	int Reserved;
	System::Byte LenName;
	System::StaticArray<System::Byte, 65536> Data;
};
#pragma pack(pop)


typedef TRecEXTERNNAME5 *PRecEXTERNNAME5;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecEXTERNNAME5
{
public:
	System::Word Options;
	int Reserved;
	System::Byte NameLen;
	System::StaticArray<System::Byte, 256> Name;
};
#pragma pack(pop)


typedef TRecEXTERNNAME3 *PRecEXTERNNAME3;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecEXTERNNAME3
{
public:
	System::Word Options;
	System::Byte NameLen;
	System::StaticArray<System::Byte, 256> Name;
};
#pragma pack(pop)


typedef TRecEXTERNSHEET7 *PRecEXTERNSHEET7;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecEXTERNSHEET7
{
public:
	System::Byte Len;
	System::StaticArray<System::Byte, 256> Data;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TXTI
{
public:
	System::Word SupBook;
	System::Word FirstTab;
	System::Word LastTab;
};
#pragma pack(pop)


typedef TRecEXTERNSHEET8 *PRecEXTERNSHEET8;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecEXTERNSHEET8
{
public:
	System::Word XTICount;
	System::StaticArray<TXTI, 256> XTI;
};
#pragma pack(pop)


typedef TRecFILEPASS *PRecFILEPASS;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecFILEPASS
{
public:
	System::Word Options;
	System::StaticArray<System::Byte, 4> SillyPassword;
	System::StaticArray<System::Byte, 16> DocId;
	System::StaticArray<System::Byte, 16> Salt;
	System::StaticArray<System::Byte, 16> HashedSalt;
};
#pragma pack(pop)


typedef TRecFONT4 *PRecFONT4;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecFONT4
{
public:
	System::Word Height;
	System::Word Attributes;
	System::Word Color;
	System::Byte NameLen;
	System::StaticArray<System::Byte, 256> Name;
};
#pragma pack(pop)


typedef TRecFONT *PRecFONT;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecFONT
{
public:
	System::Word Height;
	System::Word Attributes;
	System::Word ColorIndex;
	System::Word Bold;
	System::Word SubSuperScript;
	System::Byte Underline;
	System::Byte Family;
	System::Byte CharSet;
	System::Byte Reserved;
	System::Byte NameLen;
	System::StaticArray<System::Byte, 256> Name;
};
#pragma pack(pop)


typedef TRecFORMAT4 *PRecFORMAT4;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecFORMAT4
{
public:
	System::Word Unused;
	System::Byte Len;
	System::StaticArray<System::Byte, 256> Data;
};
#pragma pack(pop)


typedef TRecFORMAT7 *PRecFORMAT7;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecFORMAT7
{
	
private:
	struct DECLSPEC_DRECORD _TRecFORMAT7__1
	{
	};
	
	
	
public:
	System::Word Index;
	System::Byte Len;
	_TRecFORMAT7__1 Data;
};
#pragma pack(pop)


typedef TRecFORMAT8 *PRecFORMAT8;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecFORMAT8
{
	
private:
	struct DECLSPEC_DRECORD _TRecFORMAT8__1
	{
	};
	
	
	
public:
	System::Word Index;
	System::Word Len;
	_TRecFORMAT8__1 Data;
};
#pragma pack(pop)


typedef TRecFORMAT2 *PRecFORMAT2;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecFORMAT2
{
	
private:
	struct DECLSPEC_DRECORD _TRecFORMAT2__1
	{
	};
	
	
	
public:
	System::Byte Len;
	_TRecFORMAT2__1 Data;
};
#pragma pack(pop)


typedef TRecFORMULA *PRecFORMULA;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecFORMULA
{
public:
	System::Word Row;
	System::Word Col;
	System::Word FormatIndex;
	double Value;
	System::Word Options;
	int Reserved;
	System::Word ParseLen;
	System::StaticArray<System::Byte, 65536> Data;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecFORMULA_
{
public:
	System::Word Row;
	System::Word Col;
	System::Word FormatIndex;
	double Value;
	System::Word Options;
	int Reserved;
	System::Word ParseLen;
};
#pragma pack(pop)


typedef TRecFORMULA3 *PRecFORMULA3;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecFORMULA3
{
public:
	System::Word Row;
	System::Word Col;
	System::Word FormatIndex;
	double Value;
	System::Word Options;
	System::Word ParseLen;
	System::StaticArray<System::Byte, 65536> Data;
};
#pragma pack(pop)


typedef TRecGUTS *PRecGUTS;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecGUTS
{
public:
	System::Word SizeRow;
	System::Word SizeCol;
	System::Word LevelRow;
	System::Word LevelCol;
};
#pragma pack(pop)


typedef TRecHLINK *PRecHLINK;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecHLINK
{
public:
	System::Word Row1;
	System::Word Row2;
	System::Word Col1;
	System::Word Col2;
	System::StaticArray<System::Byte, 16> GUID;
	unsigned Reserved;
	unsigned Options;
};
#pragma pack(pop)


typedef TRecHLINKTOOLTIP *PRecHLINKTOOLTIP;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecHLINKTOOLTIP
{
	
private:
	struct DECLSPEC_DRECORD _TRecHLINKTOOLTIP__1
	{
	};
	
	
	
public:
	System::Word RecId;
	System::Word Row1;
	System::Word Row2;
	System::Word Col1;
	System::Word Col2;
	_TRecHLINKTOOLTIP__1 Text;
};
#pragma pack(pop)


typedef TRecHORIZONTALPAGEBREAKS *PRecHORIZONTALPAGEBREAKS;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecHORIZONTALPAGEBREAKS
{
public:
	System::Word Count;
	System::StaticArray<TPageBreak, 1025> Breaks;
};
#pragma pack(pop)


typedef TRecINDEX7 *PRecINDEX7;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecINDEX7
{
public:
	int Reserved1;
	System::Word Row1;
	System::Word Row2;
	int Reserved2;
	System::StaticArray<int, 536870908> Offsets;
};
#pragma pack(pop)


typedef TRecINDEX8 *PRecINDEX8;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecINDEX8
{
public:
	int Reserved1;
	int Row1;
	int Row2;
	int Reserved2;
	System::StaticArray<int, 536870872> Offsets;
};
#pragma pack(pop)


typedef TRecLABELSST *PRecLABELSST;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecLABELSST
{
public:
	System::Word Row;
	System::Word Col;
	System::Word FormatIndex;
	int SSTIndex;
};
#pragma pack(pop)


typedef TRecLABEL *PRecLABEL;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecLABEL
{
public:
	System::Word Row;
	System::Word Col;
	System::Word FormatIndex;
	System::Word Len;
	System::StaticArray<System::Byte, 256> Data;
};
#pragma pack(pop)


typedef TRecMARGIN *PRecMARGIN;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecMARGIN
{
public:
	double Value;
};
#pragma pack(pop)


typedef TRecMERGEDCELLS *PRecMERGEDCELLS;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecMERGEDCELLS
{
public:
	System::Word Count;
	System::StaticArray<TRecCellArea, 8192> Cells;
};
#pragma pack(pop)


typedef TRecMULBLANK *PRecMULBLANK;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecMULBLANK
{
public:
	System::Word Row;
	System::Word Col1;
	System::StaticArray<System::Word, 65536> FormatIndexes;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TMULRK
{
public:
	System::Word XF;
	int RK;
};
#pragma pack(pop)


typedef TRecMULRK *PRecMULRK;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecMULRK
{
public:
	System::Word Row;
	System::Word Col1;
	System::StaticArray<TMULRK, 65536> RKs;
};
#pragma pack(pop)


typedef TRecNUMBER *PRecNUMBER;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecNUMBER
{
public:
	System::Word Row;
	System::Word Col;
	System::Word FormatIndex;
	double Value;
};
#pragma pack(pop)


typedef TRecNAME *PRecNAME;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecNAME
{
	
private:
	struct DECLSPEC_DRECORD _TRecNAME__1
	{
	};
	
	
	
public:
	System::Word Options;
	System::Byte KeyShortcut;
	System::Byte LenName;
	System::Word LenNameDef;
	System::Word Unused;
	System::Word LocalSheetIndex;
	System::Byte LenCustMenu;
	System::Byte LenDescText;
	System::Byte LenHelpText;
	System::Byte LenStatusText;
	_TRecNAME__1 Data;
};
#pragma pack(pop)


typedef TRecNAME3 *PRecNAME3;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecNAME3
{
public:
	System::Word Options;
	System::Byte Res1;
	System::Byte LenName;
	System::Word Res2;
	System::StaticArray<System::Byte, 256> Data;
};
#pragma pack(pop)


typedef TRecNOTE *PRecNOTE;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecNOTE
{
public:
	System::Word Row;
	System::Word Col;
	System::Word Options;
	System::Word ObjId;
	System::Word AuthorNameLen;
	System::StaticArray<System::Byte, 32768> AuthorName;
};
#pragma pack(pop)


typedef TRecOBJ *PRecOBJ;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecOBJ
{
public:
	System::Word RecId;
	System::Word Length;
	System::Word ObjType;
	System::Word ObjId;
	System::Word Options;
	System::StaticArray<System::Byte, 12> Reserved;
};
#pragma pack(pop)


typedef TRecPALETTE *PRecPALETTE;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecPALETTE
{
public:
	System::Word Count;
	System::StaticArray<int, 65536> Color;
};
#pragma pack(pop)


typedef TRecPANE *PRecPANE;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecPANE
{
public:
	System::Word X;
	System::Word Y;
	System::Word TopRow;
	System::Word LeftCol;
	System::Word PaneNumber;
};
#pragma pack(pop)


typedef TRecRECALCID *PRecRECALCID;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecRECALCID
{
public:
	System::Word RecordIdRepeated;
	System::Word Reserved;
	unsigned RecalcEngineId;
};
#pragma pack(pop)


typedef TRecROW *PRecROW;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecROW
{
public:
	System::Word Row;
	System::Word Col1;
	System::Word Col2;
	System::Word Height;
	System::Word Reserved1;
	System::Word Reserved2;
	System::Word Options;
	System::Word FormatIndex;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TRK
{
	
public:
	union
	{
		struct 
		{
			System::StaticArray<int, 2> DW;
		};
		struct 
		{
			double V;
		};
		
	};
};
#pragma pack(pop)


typedef TRecRK *PRecRK;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecRK
{
public:
	System::Word Row;
	System::Word Col;
	System::Word FormatIndex;
	unsigned Value;
};
#pragma pack(pop)


typedef TRecRSTRING *PRecRSTRING;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecRSTRING
{
public:
	System::Word Row;
	System::Word Col;
	System::Word FormatIndex;
	System::Word Len;
	System::StaticArray<System::Byte, 65536> Data;
};
#pragma pack(pop)


typedef TRecSCL *PRecSCL;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecSCL
{
public:
	System::Word Numerator;
	System::Word Denominator;
};
#pragma pack(pop)


typedef TRecSELECTION *PRecSELECTION;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecSELECTION
{
public:
	System::Byte Pane;
	System::Word ActiveRow;
	System::Word ActiveCol;
	System::Word ActiveRef;
	System::Word Refs;
	System::Word Row1;
	System::Word Row2;
	System::Byte Col1;
	System::Byte Col2;
};
#pragma pack(pop)


typedef TRecSELECTION_2 *PRecSELECTION_2;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecSELECTION_2
{
	
private:
	struct DECLSPEC_DRECORD _TRecSELECTION_2__1
	{
	};
	
	
	
public:
	System::Byte Pane;
	System::Word ActiveRow;
	System::Word ActiveCol;
	System::Word ActiveRef;
	System::Word RefCount;
	_TRecSELECTION_2__1 Refs;
};
#pragma pack(pop)


typedef TRecSETUP *PRecSETUP;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecSETUP
{
public:
	System::Word PaperSize;
	System::Word Scale;
	System::Word PageStart;
	System::Word FitWidth;
	System::Word FitHeight;
	System::Word Options;
	System::Word Resolution;
	System::Word VertResolution;
	double HeaderMargin;
	double FooterMargin;
	System::Word Copies;
};
#pragma pack(pop)


typedef TRecSHEETEXT *PRecSHEETEXT;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecSHEETEXT
{
public:
	System::Word Frt;
	System::Word Flags;
	unsigned Unused1;
	unsigned Unused2;
	unsigned RecSizeMinus4;
	unsigned TabColor;
};
#pragma pack(pop)


typedef TRecFEATHEADR *PRecFEATHEADR;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecFEATHEADR
{
public:
	System::Word Frt;
	System::Word Flags;
	System::StaticArray<System::Byte, 8> Unused1;
	System::Word SharedFeatureType;
	System::Byte Hdr;
	unsigned HdrDataSz;
	unsigned Protections;
};
#pragma pack(pop)


typedef TRecSHRFMLA *PRecSHRFMLA;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecSHRFMLA
{
public:
	System::Word Row1;
	System::Word Row2;
	System::Byte Col1;
	System::Byte Col2;
	System::Word Reserved;
	System::Word ParseLen;
	System::StaticArray<System::Byte, 65536> Data;
};
#pragma pack(pop)


typedef TRecSST *PRecSST;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecSST
{
public:
	unsigned Total;
	unsigned Unique;
	System::StaticArray<System::Byte, 1073741824> Data;
};
#pragma pack(pop)


typedef TRecSTRING *PRecSTRING;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecSTRING
{
public:
	System::Word Len;
	System::StaticArray<System::Byte, 65536> Data;
};
#pragma pack(pop)


typedef TRecSTRING1Byte *PRecSTRING1Byte;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecSTRING1Byte
{
public:
	System::Byte Len;
	System::StaticArray<System::Byte, 256> Data;
};
#pragma pack(pop)


typedef TRecSTYLE *PRecSTYLE;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecSTYLE
{
public:
	System::Word FormatIndex;
	System::Byte BuiltInStyle;
	System::Byte Level;
};
#pragma pack(pop)


typedef TRecSTYLE_USER *PRecSTYLE_USER;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecSTYLE_USER
{
	
private:
	struct DECLSPEC_DRECORD _TRecSTYLE_USER__1
	{
	};
	
	
	
public:
	System::Word FormatIndex;
	System::Word Len;
	_TRecSTYLE_USER__1 Data;
};
#pragma pack(pop)


typedef TRecSUPBOOK *PRecSUPBOOK;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecSUPBOOK
{
public:
	System::Word Tabs;
	System::StaticArray<System::Byte, 65536> Data;
};
#pragma pack(pop)


typedef TRecTXO *PRecTXO;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecTXO
{
	
private:
	struct DECLSPEC_DRECORD _TRecTXO__1
	{
	};
	
	
	
public:
	System::Word Options;
	System::Word Orientation;
	System::StaticArray<System::Byte, 6> Reserved;
	System::Word TextLen;
	System::Word FormatLen;
	System::Word Reserved2a;
	System::Word ExSize;
	_TRecTXO__1 ExData;
};
#pragma pack(pop)


typedef TRecVERTICALPAGEBREAKS *PRecVERTICALPAGEBREAKS;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecVERTICALPAGEBREAKS
{
public:
	System::Word Count;
	System::StaticArray<TPageBreak, 1025> Breaks;
};
#pragma pack(pop)


typedef TRecWINDOW1 *PRecWINDOW1;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecWINDOW1
{
public:
	System::Word Left;
	System::Word Top;
	System::Word Width;
	System::Word Height;
	System::Word Options;
	System::Word SelectedTabIndex;
	System::Word FirstDispTabIndex;
	System::Word SelectedTabs;
	System::Word TabRatio;
};
#pragma pack(pop)


typedef TRecWINDOW2_7 *PRecWINDOW2_7;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecWINDOW2_7
{
public:
	System::Word Options;
	System::Word TopRow;
	System::Word LeftCol;
	int HeaderColorIndex;
};
#pragma pack(pop)


typedef TRecWINDOW2_8 *PRecWINDOW2_8;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecWINDOW2_8
{
public:
	System::Word Options;
	System::Word TopRow;
	System::Word LeftCol;
	int HeaderColorIndex;
	System::Word ZoomPreview;
	System::Word Zoom;
	int Reserved;
};
#pragma pack(pop)


typedef TRecWINDOW2_3 *PRecWINDOW2_3;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecWINDOW2_3
{
public:
	System::Word Options;
	System::Word TopRow;
	System::Word LeftCol;
	int Unknown;
};
#pragma pack(pop)


typedef TRecXCT *PRecXCT;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecXCT
{
public:
	System::Word CRNCount;
	System::Word SheetIndex;
};
#pragma pack(pop)


typedef TRecXF3 *PRecXF3;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecXF3
{
public:
	System::Byte FontIndex;
	System::StaticArray<System::Byte, 11> Data;
};
#pragma pack(pop)


typedef TRecXF4 *PRecXF4;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecXF4
{
public:
	System::Byte FontIndex;
	System::Byte FormatIndex;
	System::Word Data1;
	System::Byte Alignment;
	System::Byte UsedAttributes;
	System::Word CellColor;
	System::Byte TopBorder;
	System::Byte LeftBorder;
	System::Byte BottomBorder;
	System::Byte RightBorder;
};
#pragma pack(pop)


typedef TRecXF7 *PRecXF7;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecXF7
{
public:
	System::Word FontIndex;
	System::Word FormatIndex;
	System::Word Data1;
	System::Word Data2;
	System::Word Data3;
	System::Word Data4;
	System::Word Data5;
	System::Word Data6;
};
#pragma pack(pop)


typedef TRecXF8 *PRecXF8;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRecXF8
{
public:
	System::Word FontIndex;
	System::Word NumFmtIndex;
	System::Word Data1;
	System::Word Data2;
	System::Word Data3;
	System::Word Data4;
	System::Word Data5;
	unsigned Data6;
	System::Word Data7;
};
#pragma pack(pop)


typedef TCRec3D *PCRec3D;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRec3D
{
public:
	System::Word Rotation;
	System::Word Elevation;
	System::Word Distance;
	System::Word PlotHeight;
	System::Word Depth;
	System::Word Space;
	System::Word Flags;
};
#pragma pack(pop)


typedef TCRecAI *PCRecAI;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecAI
{
	
private:
	struct DECLSPEC_DRECORD _TCRecAI__1
	{
	};
	
	
	
public:
	System::Byte LinkType;
	System::Byte ReferenceType;
	System::Word Flags;
	System::Word FormatIndex;
	System::Word FormulaSize;
	_TCRecAI__1 Formula;
};
#pragma pack(pop)


typedef TCRecAREA *PCRecAREA;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecAREA
{
public:
	System::Word Flags;
};
#pragma pack(pop)


typedef TCRecAREAFORMAT *PCRecAREAFORMAT;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecAREAFORMAT
{
public:
	unsigned ColorFgRGB;
	unsigned ColorBgRGB;
	System::Word Pattern;
	System::Word Format;
	System::Word ColorFgIndex;
	System::Word ColorBgIndex;
};
#pragma pack(pop)


typedef TCRecATTACHEDLABEL *PCRecATTACHEDLABEL;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecATTACHEDLABEL
{
public:
	System::Word Flags;
};
#pragma pack(pop)


typedef TCRecAXCEXT *PCRecAXCEXT;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecAXCEXT
{
public:
	System::Word MinCategory;
	System::Word MaxCategory;
	System::Word ValueMajor;
	System::Word UnitsMajor;
	System::Word ValueMinor;
	System::Word UnitsMinor;
	System::Word BaseUnit;
	System::Word CrossingPoint;
	System::Word Flags;
};
#pragma pack(pop)


typedef TCRecAXESUSED *PCRecAXESUSED;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecAXESUSED
{
public:
	System::Word AxesSets;
};
#pragma pack(pop)


typedef TCRecAXISLINEFORMAT *PCRecAXISLINEFORMAT;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecAXISLINEFORMAT
{
public:
	System::Word LineId;
};
#pragma pack(pop)


typedef TCRecAXISPARENT *PCRecAXISPARENT;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecAXISPARENT
{
public:
	System::Word AxixIndex;
	unsigned Top;
	unsigned Left;
	unsigned Width;
	unsigned Height;
};
#pragma pack(pop)


typedef TCRecAXIS *PCRecAXIS;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecAXIS
{
public:
	System::Word AxisType;
	System::StaticArray<System::Byte, 16> Reserved;
};
#pragma pack(pop)


typedef TCRecBAR *PCRecBAR;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecBAR
{
public:
	System::Word SpaceBars;
	System::Word SpaceCategories;
	System::Word Flags;
};
#pragma pack(pop)


typedef TCRecCATSERRANGE *PCRecCATSERRANGE;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecCATSERRANGE
{
public:
	System::Word CrossingPoint;
	System::Word FreqLabels;
	System::Word FreqMarks;
	System::Word Flags;
};
#pragma pack(pop)


typedef TCRecCHART *PCRecCHART;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecCHART
{
public:
	System::StaticArray<System::Word, 2> Top;
	System::StaticArray<System::Word, 2> Left;
	System::StaticArray<System::Word, 2> Width;
	System::StaticArray<System::Word, 2> Height;
};
#pragma pack(pop)


typedef TCRecCHARTFORMAT *PCRecCHARTFORMAT;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecCHARTFORMAT
{
public:
	System::StaticArray<System::Byte, 16> Reserved;
	System::Word Flags;
	System::Word DrawingOrder;
};
#pragma pack(pop)


typedef TCRecDATAFORMAT *PCRecDATAFORMAT;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecDATAFORMAT
{
public:
	System::Word PointNumber;
	System::Word SeriesIndex;
	System::Word SeriesNumber;
	System::Word Flags;
};
#pragma pack(pop)


typedef TCRecDEFAULTTEXT *PCRecDEFAULTTEXT;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecDEFAULTTEXT
{
public:
	System::Word Id;
};
#pragma pack(pop)


typedef TCRecFBI *PCRecFBI;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecFBI
{
public:
	System::Word Width;
	System::Word Height;
	System::Word HeightApplied;
	System::Word Scale;
	System::Word Index;
};
#pragma pack(pop)


typedef TCRecFBI_Font *PCRecFBI_Font;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecFBI_Font
{
public:
	System::Word Width;
	System::Word Height;
	System::Word HeightApplied;
	System::Word Scale;
	System::Word Index;
	System::TObject* Xc12Font;
};
#pragma pack(pop)


typedef TCRecFONTX *PCRecFONTX;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecFONTX
{
public:
	System::Word FontIndex;
};
#pragma pack(pop)


typedef TCRecFRAME *PCRecFRAME;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecFRAME
{
public:
	System::Word FrameType;
	System::Word Flags;
};
#pragma pack(pop)


typedef TCRecGEOMETRY *PCRecGEOMETRY;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecGEOMETRY
{
public:
	System::Word ItemType;
};
#pragma pack(pop)


typedef TCRecLEGEND_ *PCRecLEGEND_;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecLEGEND_
{
public:
	unsigned Top;
	unsigned Left;
	unsigned Width;
	unsigned Height;
	System::Byte LegendType;
	System::Byte Spacing;
	System::Word Flags;
};
#pragma pack(pop)


typedef TCRecLINE *PCRecLINE;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecLINE
{
public:
	System::Word Flags;
};
#pragma pack(pop)


typedef TCRecLINEFORMAT *PCRecLINEFORMAT;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecLINEFORMAT
{
public:
	unsigned ColorRGB;
	System::Word Pattern;
	System::Word Weight;
	System::Word Format;
	System::Word ColorIndex;
};
#pragma pack(pop)


typedef TCRecMARKERFORMAT *PCRecMARKERFORMAT;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecMARKERFORMAT
{
public:
	unsigned ColorFgRGB;
	unsigned ColorBgRGB;
	System::Word TypeOfMarker;
	System::Word Format;
	System::Word ColorFgIndex;
	System::Word ColorBgIndex;
	unsigned Size;
};
#pragma pack(pop)


typedef TCRecOBJECTLINK *PCRecOBJECTLINK;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecOBJECTLINK
{
public:
	System::Word LinkedTo;
	System::Word IndexSeries;
	System::Word IndexData;
};
#pragma pack(pop)


typedef TCRecPLOTGROWTH *PCRecPLOTGROWTH;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecPLOTGROWTH
{
public:
	System::StaticArray<System::Word, 2> Horizontal;
	System::StaticArray<System::Word, 2> Vertical;
};
#pragma pack(pop)


typedef TCRecPICF *PCRecPICF;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecPICF
{
public:
	System::Word PaintMode;
	System::Word ImageFormat;
	System::Byte Environment;
	System::Byte Flags;
	double Scaling;
};
#pragma pack(pop)


typedef TCRecPIE *PCRecPIE;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecPIE
{
public:
	System::Word Angle;
	System::Word Donut;
	System::Word Flags;
};
#pragma pack(pop)


typedef TCRecPIEFORMAT *PCRecPIEFORMAT;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecPIEFORMAT
{
public:
	System::Word Percent;
};
#pragma pack(pop)


typedef TCRecPOS *PCRecPOS;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecPOS
{
public:
	System::Word TopLt;
	System::Word TopRt;
	unsigned X1;
	unsigned Y1;
	unsigned X2;
	unsigned Y2;
};
#pragma pack(pop)


typedef TCRecRADAR *PCRecRADAR;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecRADAR
{
public:
	System::Word Flags;
};
#pragma pack(pop)


typedef TCRecRADARAREA *PCRecRADARAREA;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecRADARAREA
{
public:
	System::Word Flags;
};
#pragma pack(pop)


typedef TCRecSCATTER *PCRecSCATTER;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecSCATTER
{
public:
	System::Word BubblePercent;
	System::Word BubbleSizeIs;
	System::Word Flags;
};
#pragma pack(pop)


typedef TCRecSERIES *PCRecSERIES;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecSERIES
{
public:
	System::Word CategoriesType;
	System::Word ValuesType;
	System::Word CategoriesCount;
	System::Word ValuesCount;
	System::Word BubbleType;
	System::Word BubbleCount;
};
#pragma pack(pop)


typedef TCRecSERIESTEXT *PCRecSERIESTEXT;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecSERIESTEXT
{
	
private:
	struct DECLSPEC_DRECORD _TCRecSERIESTEXT__1
	{
	};
	
	
	
public:
	System::Word TextId;
	System::Byte Length;
	_TCRecSERIESTEXT__1 Text;
};
#pragma pack(pop)


typedef TCRecSERTOCRT *PCRecSERTOCRT;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecSERTOCRT
{
public:
	System::Word ChartGroupIndex;
};
#pragma pack(pop)


typedef TCRecSHTPROPS *PCRecSHTPROPS;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecSHTPROPS
{
public:
	System::Word Flags;
	System::Byte BlanksAs;
	System::Byte Unknown;
};
#pragma pack(pop)


typedef TCRecSIINDEX *PCRecSIINDEX;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecSIINDEX
{
public:
	System::Word Index;
};
#pragma pack(pop)


typedef TCRecSURFACE *PCRecSURFACE;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecSURFACE
{
public:
	System::Word Flags;
};
#pragma pack(pop)


typedef TCRecTEXT *PCRecTEXT;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecTEXT
{
public:
	System::Byte HorizAlignment;
	System::Byte VertAlignment;
	System::Word BkgMode;
	unsigned ColorRGB;
	unsigned Left;
	unsigned Top;
	unsigned Width;
	unsigned Height;
	System::Word Options1;
	System::Word ColorIndex;
	System::Word Options2;
	System::Word Rotation;
};
#pragma pack(pop)


typedef TCRecTICK *PCRecTICK;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecTICK
{
public:
	System::Byte MajorMark;
	System::Byte MinorMark;
	System::Byte LabelPos;
	System::Byte BkgMode;
	unsigned ColorRGB;
	System::StaticArray<System::Byte, 16> Reserved1;
	System::Word Flags;
	System::Word ColorIndex;
	System::Word Rotation;
};
#pragma pack(pop)


typedef TCRecVALUERANGE *PCRecVALUERANGE;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TCRecVALUERANGE
{
public:
	double MinValue;
	double MaxValue;
	double MajorInc;
	double MinorInc;
	double AxisCrosses;
	System::Word Flags;
};
#pragma pack(pop)


//-- var, const, procedure ---------------------------------------------------
static const System::Byte MAXCOL_97 = System::Byte(0xff);
static const System::Word MAXROW_97 = System::Word(0xffff);
static const System::Byte MAXSHEET = System::Byte(0xff);
static const System::Byte MAXCOL = System::Byte(0xff);
static const System::Word MAXROW = System::Word(0xffff);
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 16> GUID_HLINK_STDLINK;
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 16> GUID_HLINK_URL;
extern DELPHI_PACKAGE System::StaticArray<System::Byte, 16> GUID_HLINK_FILE;
static const System::Word MAXSELROW = System::Word(0x3fff);
static const System::Word MAXRECSZ_40 = System::Word(0x820);
static const System::Word MAXRECSZ_97 = System::Word(0x2020);
static const System::Word MAX_EXCEL_STRSZ = System::Word(0x7fff);
static const System::Int8 DEFAULT_FORMATS_COUNT_50 = System::Int8(0x10);
static const System::Int8 DEFAULT_FORMATS_COUNT_97 = System::Int8(0x15);
static const System::Int8 DEFAULT_FORMAT40 = System::Int8(0x14);
static const System::Int8 DEFAULT_FONT_97 = System::Int8(0x0);
static const System::Int8 DEFAULT_FONTS_COUNT_97 = System::Int8(0x5);
static const System::Int8 BIFFRECID_INTEGER_20 = System::Int8(0x2);
static const System::Int8 BIFFRECID_NUMBER_20 = System::Int8(0x3);
static const System::Int8 BIFFRECID_LABEL_20 = System::Int8(0x4);
static const System::Int8 BIFFRECID_STRING_20 = System::Int8(0x7);
static const System::Byte BIFFRECID_00EF = System::Byte(0xef);
static const System::Int8 BIFFRECID_1904 = System::Int8(0x22);
static const System::Word BIFFRECID_ARRAY = System::Word(0x221);
static const System::Byte BIFFRECID_AUTOFILTER = System::Byte(0x9e);
static const System::Byte BIFFRECID_AUTOFILTERINFO = System::Byte(0x9d);
static const System::Int8 BIFFRECID_BACKUP = System::Int8(0x40);
static const System::Word BIFFRECID_BLANK = System::Word(0x201);
static const System::Int8 BIFFRECID_BOF = System::Int8(0x9);
static const System::Word BIFFRECID_BOF4 = System::Word(0x409);
static const System::Word BIFFRECID_BOF8 = System::Word(0x809);
static const System::Byte BIFFRECID_BOOKBOOL = System::Byte(0xda);
static const System::Word BIFFRECID_BOOLERR = System::Word(0x205);
static const System::Int8 BIFFRECID_BOTTOMMARGIN = System::Int8(0x29);
static const System::Byte BIFFRECID_BOUNDSHEET = System::Byte(0x85);
static const System::Int8 BIFFRECID_CALCMODE = System::Int8(0xd);
static const System::Int8 BIFFRECID_CALCCOUNT = System::Int8(0xc);
static const System::Word BIFFRECID_CODENAME = System::Word(0x1ba);
static const System::Int8 BIFFRECID_CODENAME_VBE = System::Int8(0x42);
static const System::Int8 BIFFRECID_CODEPAGE = System::Int8(0x42);
static const System::Int8 BIFFRECID_COLINFO = System::Int8(0x7d);
static const System::Int8 BIFFRECID_COLWIDTH = System::Int8(0x24);
static const System::Int8 BIFFRECID_CONTINUE = System::Int8(0x3c);
static const System::Word BIFFRECID_CONDFMT = System::Word(0x1b0);
static const System::Word BIFFRECID_CF = System::Word(0x1b1);
static const System::Byte BIFFRECID_COUNTRY = System::Byte(0x8c);
static const System::Int8 BIFFRECID_CRN = System::Int8(0x5a);
static const System::Byte BIFFRECID_DBCELL = System::Byte(0xd7);
static const System::Int8 BIFFRECID_DCONREF = System::Int8(0x51);
static const System::Word BIFFRECID_DEFAULTROWHEIGHT = System::Word(0x225);
static const System::Int8 BIFFRECID_DEFCOLWIDTH = System::Int8(0x55);
static const System::Int8 BIFFRECID_DELTA = System::Int8(0x10);
static const System::Int8 BIFFRECID_DIMENSIONS_20 = System::Int8(0x0);
static const System::Word BIFFRECID_DIMENSIONS = System::Word(0x200);
static const System::Word BIFFRECID_DSF = System::Word(0x161);
static const System::Word BIFFRECID_DV = System::Word(0x1be);
static const System::Word BIFFRECID_DVAL = System::Word(0x1b2);
static const System::Int8 BIFFRECID_EOF = System::Int8(0xa);
static const System::Word BIFFRECID_EXCEL9FILE = System::Word(0x1c0);
static const System::Int8 BIFFRECID_EXTERNCOUNT = System::Int8(0x16);
static const System::Int8 BIFFRECID_EXTERNNAME = System::Int8(0x23);
static const System::Int8 BIFFRECID_EXTERNSHEET = System::Int8(0x17);
static const System::Int8 BIFFRECID_FILEPASS = System::Int8(0x2f);
static const System::Int8 BIFFRECID_FILESHAREING = System::Int8(0x5b);
static const System::Byte BIFFRECID_FILTERMODE = System::Byte(0x9b);
static const System::Byte BIFFRECID_EXTSST = System::Byte(0xff);
static const System::Int8 BIFFRECID_FILESHARING = System::Int8(0x5b);
static const System::Byte BIFFRECID_FNGROUPCOUNT = System::Byte(0x9c);
static const System::Int8 BIFFRECID_FONT = System::Int8(0x31);
static const System::Word BIFFRECID_FONT_40 = System::Word(0x231);
static const System::Int8 BIFFRECID_FOOTER = System::Int8(0x15);
static const System::Word BIFFRECID_FORMAT = System::Word(0x41e);
static const System::Int8 BIFFRECID_FORMULA = System::Int8(0x6);
static const System::Word BIFFRECID_FORMULA_30 = System::Word(0x206);
static const System::Word BIFFRECID_FORMULA_40 = System::Word(0x406);
static const System::Byte BIFFRECID_GRIDSET = System::Byte(0x82);
static const System::Byte BIFFRECID_GUTS = System::Byte(0x80);
static const System::Byte BIFFRECID_HCENTER = System::Byte(0x83);
static const System::Int8 BIFFRECID_HEADER = System::Int8(0x14);
static const System::Byte BIFFRECID_HIDEOBJ = System::Byte(0x8d);
static const System::Word BIFFRECID_HLINK = System::Word(0x1b8);
static const System::Word BIFFRECID_HLINKTOOLTIP = System::Word(0x800);
static const System::Int8 BIFFRECID_HORIZONTALPAGEBREAKS = System::Int8(0x1b);
static const System::Int8 BIFFRECID_IMDATA = System::Int8(0x7f);
static const System::Word BIFFRECID_INDEX = System::Word(0x20b);
static const System::Byte BIFFRECID_INTERFACEHDR = System::Byte(0xe1);
static const System::Byte BIFFRECID_INTERFACEEND = System::Byte(0xe2);
static const System::Int8 BIFFRECID_ITERATION = System::Int8(0x11);
static const System::Word BIFFRECID_LABEL = System::Word(0x204);
static const System::Byte BIFFRECID_LABELSST = System::Byte(0xfd);
static const System::Int8 BIFFRECID_LEFTMARGIN = System::Int8(0x26);
static const System::Byte BIFFRECID_MERGEDCELLS = System::Byte(0xe5);
static const System::Byte BIFFRECID_MMSADDMENUDELMENU = System::Byte(0xc1);
static const System::Word BIFFRECID_MSO_0866 = System::Word(0x866);
static const System::Byte BIFFRECID_MSODRAWING = System::Byte(0xec);
static const System::Byte BIFFRECID_MSODRAWINGGROUP = System::Byte(0xeb);
static const System::Byte BIFFRECID_MSODRAWINGSELECTION = System::Byte(0xed);
static const System::Byte BIFFRECID_MULRK = System::Byte(0xbd);
static const System::Byte BIFFRECID_MULBLANK = System::Byte(0xbe);
static const System::Int8 BIFFRECID_NAME = System::Int8(0x18);
static const System::Int8 BIFFRECID_NOTE = System::Int8(0x1c);
static const System::Word BIFFRECID_NUMBER = System::Word(0x203);
static const System::Int8 BIFFRECID_OBJ = System::Int8(0x5d);
static const System::Int8 BIFFRECID_OBJPROTECT = System::Int8(0x63);
static const System::Byte BIFFRECID_OBPROJ = System::Byte(0xd3);
static const System::Byte BIFFRECID_PALETTE = System::Byte(0x92);
static const System::Int8 BIFFRECID_PANE = System::Int8(0x41);
static const System::Int8 BIFFRECID_PASSWORD = System::Int8(0x13);
static const System::Int8 BIFFRECID_PRECISION = System::Int8(0xe);
static const System::Int8 BIFFRECID_PRINTGRIDLINES = System::Int8(0x2b);
static const System::Int8 BIFFRECID_PRINTHEADERS = System::Int8(0x2a);
static const System::Word BIFFRECID_PROT4REV = System::Word(0x1af);
static const System::Word BIFFRECID_PROT4REVPASS = System::Word(0x1bc);
static const System::Int8 BIFFRECID_PROTECT = System::Int8(0x12);
static const System::Word BIFFRECID_QSI = System::Word(0x1ad);
static const System::Word BIFFRECID_RECALCID = System::Word(0x1c1);
static const System::Word BIFFRECID_REFRESHALL = System::Word(0x1b7);
static const System::Int8 BIFFRECID_REFMODE = System::Int8(0xf);
static const System::Int8 BIFFRECID_RIGHTMARGIN = System::Int8(0x27);
static const System::Int8 BIFFRECID_RK = System::Int8(0x7e);
static const System::Word BIFFRECID_RK7 = System::Word(0x27e);
static const System::Int8 BIFFRECID_PLS = System::Int8(0x4d);
static const System::Word BIFFRECID_ROW = System::Word(0x208);
static const System::Byte BIFFRECID_RSTRING = System::Byte(0xd6);
static const System::Int8 BIFFRECID_SAVERECALC = System::Int8(0x5f);
static const System::Byte BIFFRECID_SCL = System::Byte(0xa0);
static const System::Byte BIFFRECID_SCENPROTECT = System::Byte(0xdd);
static const System::Int8 BIFFRECID_SELECTION = System::Int8(0x1d);
static const System::Byte BIFFRECID_SETUP = System::Byte(0xa1);
static const System::Word BIFFRECID_SHEETEXT = System::Word(0x862);
static const System::Word BIFFRECID_FEATHEADR = System::Word(0x867);
static const System::Byte BIFFRECID_SHRFMLA = System::Byte(0xbc);
static const System::Word BIFFRECID_SHRFMLA_20 = System::Word(0x4bc);
static const System::Byte BIFFRECID_SST = System::Byte(0xfc);
static const System::Word BIFFRECID_STRING = System::Word(0x207);
static const System::Word BIFFRECID_STYLE = System::Word(0x293);
static const System::Word BIFFRECID_SUPBOOK = System::Word(0x1ae);
static const System::Byte BIFFRECID_SXIDSTM = System::Byte(0xd5);
static const System::Byte BIFFRECID_SXVS = System::Byte(0xe3);
static const System::Word BIFFRECID_TABID = System::Word(0x13d);
static const System::Int8 BIFFRECID_TOPMARGIN = System::Int8(0x28);
static const System::Word BIFFRECID_TXO = System::Word(0x1b6);
static const System::Int8 BIFFRECID_UNCALCED = System::Int8(0x5e);
static const System::Word BIFFRECID_USERBVIEW = System::Word(0x1a9);
static const System::Word BIFFRECID_USERSVIEWBEGIN = System::Word(0x1aa);
static const System::Word BIFFRECID_USERSVIEWEND = System::Word(0x1ab);
static const System::Word BIFFRECID_USESELFS = System::Word(0x160);
static const System::Byte BIFFRECID_VCENTER = System::Byte(0x84);
static const System::Int8 BIFFRECID_VERTICALPAGEBREAKS = System::Int8(0x1a);
static const System::Int8 BIFFRECID_WINDOW1 = System::Int8(0x3d);
static const System::Word BIFFRECID_WINDOW2 = System::Word(0x23e);
static const System::Int8 BIFFRECID_WINDOWPROTECT = System::Int8(0x19);
static const System::Int8 BIFFRECID_WRITEACCESS = System::Int8(0x5c);
static const System::Byte BIFFRECID_WSBOOL = System::Byte(0x81);
static const System::Int8 BIFFRECID_XCT = System::Int8(0x59);
static const System::Byte BIFFRECID_XF = System::Byte(0xe0);
static const System::Word BIFFRECID_XF_30 = System::Word(0x243);
static const System::Word BIFFRECID_XF_40 = System::Word(0x443);
static const System::Word XBIFFRECID_CHART = System::Word(0x851);
static const System::Word CHARTRECID_3D = System::Word(0x103a);
static const System::Word CHARTRECID_AI = System::Word(0x1051);
static const System::Word CHARTRECID_ALRUNS = System::Word(0x1050);
static const System::Word CHARTRECID_AREA = System::Word(0x101a);
static const System::Word CHARTRECID_AREAFORMAT = System::Word(0x100a);
static const System::Word CHARTRECID_ATTACHEDLABEL = System::Word(0x100c);
static const System::Word CHARTRECID_AXCEXT = System::Word(0x1062);
static const System::Word CHARTRECID_AXESUSED = System::Word(0x1046);
static const System::Word CHARTRECID_AXIS = System::Word(0x101d);
static const System::Word CHARTRECID_AXISLINEFORMAT = System::Word(0x1021);
static const System::Word CHARTRECID_AXISPARENT = System::Word(0x1041);
static const System::Word CHARTRECID_BAR = System::Word(0x1017);
static const System::Word CHARTRECID_BEGIN = System::Word(0x1033);
static const System::Word CHARTRECID_BOPPOP = System::Word(0x1061);
static const System::Word CHARTRECID_BOPPOPCUSTOM = System::Word(0x1067);
static const System::Word CHARTRECID_CATSERRANGE = System::Word(0x1020);
static const System::Word CHARTRECID_CHART = System::Word(0x1002);
static const System::Word CHARTRECID_CHARTFORMAT = System::Word(0x1014);
static const System::Word CHARTRECID_CHARTFORMATLINK = System::Word(0x1022);
static const System::Word CHARTRECID_CHARTLINE = System::Word(0x101c);
static const System::Word CHARTRECID_DAT = System::Word(0x1063);
static const System::Word CHARTRECID_DATAFORMAT = System::Word(0x1006);
static const System::Word CHARTRECID_DEFAULTTEXT = System::Word(0x1024);
static const System::Word CHARTRECID_DROPBAR = System::Word(0x103d);
static const System::Word CHARTRECID_END = System::Word(0x1034);
static const System::Word CHARTRECID_FBI = System::Word(0x1060);
static const System::Word CHARTRECID_FONTX = System::Word(0x1026);
static const System::Word CHARTRECID_FRAME = System::Word(0x1032);
static const System::Word CHARTRECID_GELFRAME = System::Word(0x1066);
static const System::Word CHARTRECID_GEOMETRY = System::Word(0x105f);
static const System::Word CHARTRECID_IFMT = System::Word(0x104e);
static const System::Word CHARTRECID_LEGEND = System::Word(0x1015);
static const System::Word CHARTRECID_LEGENDXN = System::Word(0x1043);
static const System::Word CHARTRECID_LINE = System::Word(0x1018);
static const System::Word CHARTRECID_LINEFORMAT = System::Word(0x1007);
static const System::Word CHARTRECID_MARKERFORMAT = System::Word(0x1009);
static const System::Word CHARTRECID_OBJECTLINK = System::Word(0x1027);
static const System::Word CHARTRECID_PICF = System::Word(0x103c);
static const System::Word CHARTRECID_PIE = System::Word(0x1019);
static const System::Word CHARTRECID_PIEFORMAT = System::Word(0x100b);
static const System::Word CHARTRECID_PLOTAREA = System::Word(0x1035);
static const System::Word CHARTRECID_PLOTGROWTH = System::Word(0x1064);
static const System::Word CHARTRECID_POS = System::Word(0x104f);
static const System::Word CHARTRECID_RADAR = System::Word(0x103e);
static const System::Word CHARTRECID_RADARAREA = System::Word(0x1040);
static const System::Word CHARTRECID_SBASEREF = System::Word(0x1048);
static const System::Word CHARTRECID_SCATTER = System::Word(0x101b);
static const System::Word CHARTRECID_SERAUXERRBAR = System::Word(0x105b);
static const System::Word CHARTRECID_SERAUXTREND = System::Word(0x104b);
static const System::Word CHARTRECID_SERFMT = System::Word(0x105d);
static const System::Word CHARTRECID_SERIES = System::Word(0x1003);
static const System::Word CHARTRECID_SERIESLIST = System::Word(0x1016);
static const System::Word CHARTRECID_SERIESTEXT = System::Word(0x100d);
static const System::Word CHARTRECID_SERPARENT = System::Word(0x104a);
static const System::Word CHARTRECID_SERTOCRT = System::Word(0x1045);
static const System::Word CHARTRECID_SHTPROPS = System::Word(0x1044);
static const System::Word CHARTRECID_SIINDEX = System::Word(0x1065);
static const System::Word CHARTRECID_SURFACE = System::Word(0x103f);
static const System::Word CHARTRECID_TEXT = System::Word(0x1025);
static const System::Word CHARTRECID_TICK = System::Word(0x101e);
static const System::Word CHARTRECID_UNITS = System::Word(0x1001);
static const System::Word CHARTRECID_VALUERANGE = System::Word(0x101f);
static const System::Int8 OBJREC_END = System::Int8(0x0);
static const System::Int8 OBJREC_MACRO = System::Int8(0x4);
static const System::Int8 OBJREC_BUTTON = System::Int8(0x5);
static const System::Int8 OBJREC_GMO = System::Int8(0x6);
static const System::Int8 OBJREC_CF = System::Int8(0x7);
static const System::Int8 OBJREC_PIOGRBIT = System::Int8(0x8);
static const System::Int8 OBJREC_PICTFMLA = System::Int8(0x9);
static const System::Int8 OBJREC_CBLS = System::Int8(0xa);
static const System::Int8 OBJREC_RBO = System::Int8(0xb);
static const System::Int8 OBJREC_SBS = System::Int8(0xc);
static const System::Int8 OBJREC_NTS = System::Int8(0xd);
static const System::Int8 OBJREC_SBSFMLA = System::Int8(0xe);
static const System::Int8 OBJREC_GBODATA = System::Int8(0xf);
static const System::Int8 OBJREC_EDODATA = System::Int8(0x10);
static const System::Int8 OBJREC_RBODATA = System::Int8(0x11);
static const System::Int8 OBJREC_CBLSDATA = System::Int8(0x12);
static const System::Int8 OBJREC_LBSDATA = System::Int8(0x13);
static const System::Int8 OBJREC_CBLSFMLA = System::Int8(0x14);
static const System::Int8 OBJREC_CMO = System::Int8(0x15);
static const System::Int8 OBJTYPE_GROUP = System::Int8(0x0);
static const System::Int8 OBJTYPE_LINE = System::Int8(0x1);
static const System::Int8 OBJTYPE_RECTANGLE = System::Int8(0x2);
static const System::Int8 OBJTYPE_OVAL = System::Int8(0x3);
static const System::Int8 OBJTYPE_ARC = System::Int8(0x4);
static const System::Int8 OBJTYPE_CHART = System::Int8(0x5);
static const System::Int8 OBJTYPE_TEXT = System::Int8(0x6);
static const System::Int8 OBJTYPE_BUTTON = System::Int8(0x7);
static const System::Int8 OBJTYPE_PICTURE = System::Int8(0x8);
static const System::Int8 OBJTYPE_POLYGON = System::Int8(0x9);
static const System::Int8 OBJTYPE_RESERVED1 = System::Int8(0xa);
static const System::Int8 OBJTYPE_CHECK_BOX = System::Int8(0xb);
static const System::Int8 OBJTYPE_OPTION_BUTTON = System::Int8(0xc);
static const System::Int8 OBJTYPE_EDIT_BOX = System::Int8(0xd);
static const System::Int8 OBJTYPE_LABEL = System::Int8(0xe);
static const System::Int8 OBJTYPE_DIALOG_BOX = System::Int8(0xf);
static const System::Int8 OBJTYPE_SPINNER = System::Int8(0x10);
static const System::Int8 OBJTYPE_SCROLL_BAR = System::Int8(0x11);
static const System::Int8 OBJTYPE_LIST_BOX = System::Int8(0x12);
static const System::Int8 OBJTYPE_GROUP_BOX = System::Int8(0x13);
static const System::Int8 OBJTYPE_COMBO_BOX = System::Int8(0x14);
static const System::Int8 OBJTYPE_RESERVED2 = System::Int8(0x15);
static const System::Int8 OBJTYPE_RESERVED3 = System::Int8(0x16);
static const System::Int8 OBJTYPE_RESERVED4 = System::Int8(0x17);
static const System::Int8 OBJTYPE_RESERVED5 = System::Int8(0x18);
static const System::Int8 OBJTYPE_COMMENT = System::Int8(0x19);
static const System::Int8 OBJTYPE_RESERVED6 = System::Int8(0x1a);
static const System::Int8 OBJTYPE_RESERVED7 = System::Int8(0x1b);
static const System::Int8 OBJTYPE_RESERVED8 = System::Int8(0x1c);
static const System::Int8 OBJTYPE_RESERVED9 = System::Int8(0x1d);
static const System::Int8 OBJTYPE_MICROSOFT_OFFICE_DRAWING = System::Int8(0x1e);
static const System::Int8 ptgArea_NAC = System::Int8(0x5);
static const System::Int8 ptgAreaN_NAC = System::Int8(0xd);
static const System::Int8 ptgAreaErr_NAC = System::Int8(0xb);
static const System::Int8 ptgArea3d_NAC = System::Int8(0x1b);
static const System::Int8 ptgAreaErr3d_NAC = System::Int8(0x1d);
static const System::Int8 ptgArray_NAC = System::Int8(0x0);
static const System::Int8 ptgFunc_NAC = System::Int8(0x1);
static const System::Int8 ptgFuncCEV_NAC = System::Int8(0x18);
static const System::Int8 ptgFuncVar_NAC = System::Int8(0x2);
static const System::Int8 ptgMemArea_NAC = System::Int8(0x6);
static const System::Int8 ptgMemAreaN_NAC = System::Int8(0xe);
static const System::Int8 ptgMemErr_NAC = System::Int8(0x7);
static const System::Int8 ptgMemFunc_NAC = System::Int8(0x9);
static const System::Int8 ptgMemNoMem_NAC = System::Int8(0x8);
static const System::Int8 ptgMemNoMemN_NAC = System::Int8(0xf);
static const System::Int8 ptgName_NAC = System::Int8(0x3);
static const System::Int8 ptgNameX_NAC = System::Int8(0x19);
static const System::Int8 ptgRef_NAC = System::Int8(0x4);
static const System::Int8 ptgRefN_NAC = System::Int8(0xc);
static const System::Int8 ptgRef3d_NAC = System::Int8(0x1a);
static const System::Int8 ptgRefErr_NAC = System::Int8(0xa);
static const System::Int8 ptgRefErr3d_NAC = System::Int8(0x1c);
static const System::Int8 eptgElfLel = System::Int8(0x1);
static const System::Int8 eptgElfRw = System::Int8(0x2);
static const System::Int8 eptgElfCol = System::Int8(0x3);
static const System::Int8 eptgElfRwV = System::Int8(0x6);
static const System::Int8 eptgElfColV = System::Int8(0x7);
static const System::Int8 eptgElfRadical = System::Int8(0xa);
static const System::Int8 eptgElfRadicalS = System::Int8(0xb);
static const System::Int8 eptgElfRwS = System::Int8(0xc);
static const System::Int8 eptgElfColS = System::Int8(0xd);
static const System::Int8 eptgElfRwSV = System::Int8(0xe);
static const System::Int8 eptgElfColSV = System::Int8(0xf);
static const System::Int8 eptgElfRadicalLel = System::Int8(0x10);
static const System::Int8 eptgSxName = System::Int8(0x1d);
static const System::Int8 ERR_NULL = System::Int8(0x1);
static const System::Int8 ERR_DIV = System::Int8(0x2);
static const System::Int8 ERR_VALUE = System::Int8(0x3);
static const System::Int8 ERR_REF = System::Int8(0x4);
static const System::Int8 ERR_NAME = System::Int8(0x5);
static const System::Int8 ERR_NUM = System::Int8(0x6);
static const System::Int8 ERR_NA = System::Int8(0x7);
static const System::Word FONT_COLOR_SYS_WINTEXT = System::Word(0x7fff);
static const System::Int8 TRecNOTE_FIXEDLEN = System::Int8(0x8);
}	/* namespace Biff_recsii5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_RECSII5)
using namespace Biff_recsii5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_recsii5HPP
