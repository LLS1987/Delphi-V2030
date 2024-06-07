// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_Escher5.pas' rev: 35.00 (Windows)

#ifndef Biff_escher5HPP
#define Biff_escher5HPP

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
#include <Vcl.Graphics.hpp>
#include <System.Math.hpp>
#include <System.Contnrs.hpp>
#include <BIFF_Utils5.hpp>
#include <BIFF_Stream5.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_RecordStorage5.hpp>
#include <BIFF_EscherTypes5.hpp>
#include <BIFF_MD4Hash_5.hpp>
#include <BIFF_ExcelFuncII5.hpp>
#include <BIFF_Names5.hpp>
#include <BIFF_RecordStorageChart5.hpp>
#include <BIFF_EscherCtrlObj5.hpp>
#include <BIFF_EscherFileObjs5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XLSUtils5.hpp>
#include <XLSZlibPas5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_escher5
{
//-- forward type declarations -----------------------------------------------
struct TOPTData;
struct TMSORecord;
class DELPHICLASS TMSORecords;
class DELPHICLASS TOPT;
class DELPHICLASS TShapeOutsideMsoChart;
class DELPHICLASS TMSOShape;
class DELPHICLASS TShapeClientAnchor;
class DELPHICLASS TShapeChildAnchor;
class DELPHICLASS TShapeGroup;
class DELPHICLASS TShapeGroupClientAnchor;
class DELPHICLASS TShapeGroupChildAnchor;
class DELPHICLASS TEscherDrawing;
class DELPHICLASS TDGGData;
class DELPHICLASS TDGG;
class DELPHICLASS TMSOPicture;
class DELPHICLASS TEscherGroup;
class DELPHICLASS TMSOPictures;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TBasicShapeType : unsigned char { bstLine, bstArrow, bstEllipse, bstRectangle };

enum DECLSPEC_DENUM TAutoShapeType : unsigned char { astSun, astMoon, astLeftArrow, astDownArrow, astUpArrow, astLeftRightArrow, astUpDownArrow, astQuadArrow, astLeftArrowCallout, astRightArrowCallout, astUpArrowCallout, astDownArrowCallout, astLeftRightArrowCallout, astUpDownArrowCallout, astQuadArrowCallout };

enum DECLSPEC_DENUM TOptValType : unsigned char { ovtLongword, ovtString, ovtPointer };

typedef TOPTData *POPTData;

struct DECLSPEC_DRECORD TOPTData
{
public:
	System::Word Options;
	unsigned Value;
	System::Sysutils::TByteArray *Extra;
};


typedef TMSORecord *PMSORecord;

struct DECLSPEC_DRECORD TMSORecord
{
public:
	System::Word VerInst;
	System::Word FBT;
	unsigned Length;
	System::StaticArray<System::Byte, 1073741824> Data;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TMSORecords : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	PMSORecord operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Sysutils::PByteArray __fastcall GetData(int Index);
	System::Word __fastcall GetFBT(int Index);
	System::Word __fastcall GetInstance(int Index);
	unsigned __fastcall GetLength(int Index);
	System::Byte __fastcall GetVersion(int Index);
	PMSORecord __fastcall GetItems(int Index);
	
public:
	__fastcall virtual ~TMSORecords();
	virtual void __fastcall Clear();
	HIDESBASE void __fastcall Add(const Biff_eschertypes5::TMSOHeader &Header, System::Sysutils::PByteArray Data);
	void __fastcall Write(Biff_stream5::TXLSStream* Stream);
	int __fastcall Size();
	HIDESBASE void __fastcall Assign(TMSORecords* Records);
	__property PMSORecord Items[int Index] = {read=GetItems/*, default*/};
	__property System::Byte Version[int Index] = {read=GetVersion};
	__property System::Word Instance[int Index] = {read=GetInstance};
	__property System::Word FBT[int Index] = {read=GetFBT};
	__property unsigned Length[int Index] = {read=GetLength};
	__property System::Sysutils::PByteArray Data[int Index] = {read=GetData};
public:
	/* TObject.Create */ inline __fastcall TMSORecords() : System::Classes::TList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TOPT : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
public:
	System::Word operator[](int Index) { return this->Id[Index]; }
	
private:
	int FItemCount;
	System::Word __fastcall GetId(int Index);
	bool __fastcall GetComplex(int Index);
	unsigned __fastcall GetValue(int Index);
	void __fastcall SetValue(int Index, const unsigned Value);
	System::Sysutils::PByteArray __fastcall GetExtra(int Index);
	
public:
	__fastcall virtual ~TOPT();
	virtual void __fastcall Clear();
	HIDESBASE void __fastcall Assign(TOPT* OPT);
	void __fastcall AddValue(System::Word Id, unsigned Value, bool IsBlip = false);
	void __fastcall AddString(System::Word Id, System::UnicodeString Value);
	void __fastcall AddExtra(System::Word Id, int Value, bool IsBlip = false);
	void __fastcall LoadFromStream(Biff_stream5::TXLSStream* Stream, int Length, System::Sysutils::PByteArray PBuf, int ItemCount);
	void __fastcall LoadFromBuffer(int Length, System::Sysutils::PByteArray PBuf, int ItemCount);
	void __fastcall WriteToStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	void __fastcall WriteToBuffer(System::Sysutils::PByteArray PBuf, bool IncludeHeader = true);
	int __fastcall Size();
	unsigned __fastcall TxId();
	int __fastcall BlipId();
	void __fastcall SetBlipId(int Id);
	int __fastcall Find(int Id);
	unsigned __fastcall FindValue(int Id)/* overload */;
	unsigned __fastcall FindValue(int Id, unsigned Default)/* overload */;
	System::UnicodeString __fastcall FindString(int Id);
	void __fastcall UpdateValue(int Id, unsigned Value);
	void __fastcall UpdateString(int Id, System::UnicodeString Value);
	void __fastcall UpdateExtra(int Id, int Size);
	void __fastcall SetItemCount();
	__property System::Word Id[int Index] = {read=GetId/*, default*/};
	__property unsigned Value[int Index] = {read=GetValue, write=SetValue};
	__property bool Complex[int Index] = {read=GetComplex};
	__property System::Sysutils::PByteArray Extra[int Index] = {read=GetExtra};
public:
	/* TObject.Create */ inline __fastcall TOPT() : System::Classes::TList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShapeOutsideMsoChart : public Biff_escherctrlobj5::TShapeOutsideMso
{
	typedef Biff_escherctrlobj5::TShapeOutsideMso inherited;
	
protected:
	Biff_recordstoragechart5::TChartRecordUpdate* FRecords;
	TEscherDrawing* FDrawing;
	TEscherGroup* FDrawingGroup;
	Xc12datastylesheet5::TXc12Fonts* FFonts;
	
public:
	__fastcall TShapeOutsideMsoChart(int ObjId, TEscherGroup* DrawingGroup, Xc12datastylesheet5::TXc12Fonts* Fonts);
	__fastcall virtual ~TShapeOutsideMsoChart();
	virtual void __fastcall Assign(Biff_escherctrlobj5::TShapeOutsideMso* Shape);
	virtual void __fastcall Read(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	virtual void __fastcall Write(Biff_stream5::TXLSStream* Stream);
	__property Biff_recordstoragechart5::TChartRecordUpdate* Records = {read=FRecords};
	__property TEscherDrawing* Drawing = {read=FDrawing, write=FDrawing};
	__property TEscherGroup* DrawingGroup = {read=FDrawingGroup};
	__property Xc12datastylesheet5::TXc12Fonts* Fonts = {read=FFonts};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMSOShape : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall SetShapeType(const int Value);
	bool __fastcall GetFlipHorizontal();
	bool __fastcall GetFlipVertical();
	void __fastcall SetFlipHorizontal(const bool Value);
	void __fastcall SetFlipVertical(const bool Value);
	
protected:
	unsigned FSpId;
	int FShapeType;
	unsigned FOptions;
	TOPT* FOPT;
	TOPT* FFOPT;
	TMSORecords* FUnknown;
	Biff_recordstorage5::TBaseRecordStorage* FOBJ;
	Biff_escherctrlobj5::TShapeOutsideMso* FInterface;
	
public:
	__fastcall TMSOShape();
	__fastcall virtual ~TMSOShape();
	virtual int __fastcall Size();
	virtual void __fastcall WriteToStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf, bool WriteMSODRAWING);
	virtual void __fastcall Assign(TMSOShape* Shape);
	void __fastcall MakeMacro();
	__property unsigned SpId = {read=FSpId, nodefault};
	__property int ShapeType = {read=FShapeType, write=SetShapeType, nodefault};
	__property unsigned Options = {read=FOptions, nodefault};
	__property TOPT* OPT = {read=FOPT};
	__property Biff_recordstorage5::TBaseRecordStorage* OBJ = {read=FOBJ};
	__property Biff_escherctrlobj5::TShapeOutsideMso* ExShape = {read=FInterface, write=FInterface};
	__property bool FlipHorizontal = {read=GetFlipHorizontal, write=SetFlipHorizontal, nodefault};
	__property bool FlipVertical = {read=GetFlipVertical, write=SetFlipVertical, nodefault};
	__property Biff_escherctrlobj5::TShapeOutsideMso* ShpInterface = {read=FInterface};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShapeClientAnchor : public TMSOShape
{
	typedef TMSOShape inherited;
	
private:
	bool FVisible;
	
protected:
	Biff_escherfileobjs5::TMSOObjCLIENTANCHOR* FAnchor;
	
public:
	__fastcall TShapeClientAnchor();
	__fastcall virtual ~TShapeClientAnchor();
	virtual int __fastcall Size();
	virtual void __fastcall Assign(TMSOShape* Shape);
	void __fastcall GetPos(int &C1, int &C1Offs, int &R1, int &R1Offs, int &C2, int &C2Offs, int &R2, int &R2Offs);
	__property Biff_escherfileobjs5::TMSOObjCLIENTANCHOR* Anchor = {read=FAnchor};
	__property bool Visible = {read=FVisible, write=FVisible, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShapeChildAnchor : public TMSOShape
{
	typedef TMSOShape inherited;
	
protected:
	Biff_eschertypes5::TMSORecCHILDANCHOR FCHILDANCHOR;
	
public:
	virtual int __fastcall Size();
	virtual void __fastcall Assign(TMSOShape* Shape);
	__property unsigned X1 = {read=FCHILDANCHOR.X1, write=FCHILDANCHOR.X1, nodefault};
	__property unsigned Y1 = {read=FCHILDANCHOR.Y1, write=FCHILDANCHOR.Y1, nodefault};
	__property unsigned X2 = {read=FCHILDANCHOR.X2, write=FCHILDANCHOR.X2, nodefault};
	__property unsigned Y2 = {read=FCHILDANCHOR.Y2, write=FCHILDANCHOR.Y2, nodefault};
public:
	/* TMSOShape.Create */ inline __fastcall TShapeChildAnchor() : TMSOShape() { }
	/* TMSOShape.Destroy */ inline __fastcall virtual ~TShapeChildAnchor() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShapeGroup : public TMSOShape
{
	typedef TMSOShape inherited;
	
public:
	TMSOShape* operator[](int Index) { return this->Items[Index]; }
	
private:
	TEscherDrawing* FDrawing;
	System::Classes::TList* FList;
	Biff_eschertypes5::TMSORecSPGR FSPGR;
	TMSOShape* __fastcall GetItems(int Index);
	
public:
	__fastcall TShapeGroup(TEscherDrawing* Drawing);
	__fastcall virtual ~TShapeGroup();
	void __fastcall Clear();
	virtual void __fastcall Assign(TMSOShape* Shape);
	virtual int __fastcall PrivateSize() = 0 ;
	void __fastcall Add(TMSOShape* Shape);
	void __fastcall Delete(int Index);
	void __fastcall DeleteBySpId(int SpId);
	int __fastcall Count();
	__property TMSOShape* Items[int Index] = {read=GetItems/*, default*/};
	__property Biff_eschertypes5::TMSORecSPGR SPGR = {read=FSPGR};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShapeGroupClientAnchor : public TShapeGroup
{
	typedef TShapeGroup inherited;
	
private:
	Biff_escherfileobjs5::TMSOObjCLIENTANCHOR* FAnchor;
	
public:
	__fastcall TShapeGroupClientAnchor(TEscherDrawing* Drawing);
	__fastcall virtual ~TShapeGroupClientAnchor();
	virtual void __fastcall Assign(TMSOShape* Shape);
	void __fastcall GetPos(int &C1, int &C1Offs, int &R1, int &R1Offs, int &C2, int &C2Offs, int &R2, int &R2Offs);
	virtual int __fastcall Size();
	virtual int __fastcall PrivateSize();
	virtual void __fastcall WriteToStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf, bool WriteMSODRAWING);
	__property Biff_escherfileobjs5::TMSOObjCLIENTANCHOR* Anchor = {read=FAnchor};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShapeGroupChildAnchor : public TShapeGroup
{
	typedef TShapeGroup inherited;
	
private:
	Biff_eschertypes5::TMSORecCHILDANCHOR FCHILDANCHOR;
	
public:
	virtual void __fastcall Assign(TMSOShape* Shape);
	virtual int __fastcall Size();
	virtual int __fastcall PrivateSize();
	virtual void __fastcall WriteToStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf, bool WriteMSODRAWING);
public:
	/* TShapeGroup.Create */ inline __fastcall TShapeGroupChildAnchor(TEscherDrawing* Drawing) : TShapeGroup(Drawing) { }
	/* TShapeGroup.Destroy */ inline __fastcall virtual ~TShapeGroupChildAnchor() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TFileReadShapeEvent)(System::TObject* Sender, TMSOShape* Shape);

class PASCALIMPLEMENTATION TEscherDrawing : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<Biff_eschertypes5::TMSOFileReGroupItem> _TEscherDrawing__1;
	
	
private:
	TEscherGroup* FParent;
	TShapeGroup* FGroup;
	System::Word FDgId;
	Biff_eschertypes5::TMSORecDG FDG;
	_TEscherDrawing__1 FFileReGroupItems;
	TMSORecords* FSolverContainer;
	TFileReadShapeEvent FFileReadShapeEvent;
	Xc12datastylesheet5::TXc12Fonts* FFonts;
	Biff_names5::TInternalNames* FInternalNames;
	int FMaxObjId;
	
protected:
	int __fastcall ReadRoot(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	void __fastcall ReadOBJ(TMSOShape* Shape, Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	int __fastcall GetSpId();
	int __fastcall MaxSpId();
	int __fastcall GetObjId();
	void __fastcall SetRootData();
	
public:
	__fastcall TEscherDrawing(TEscherGroup* Parent, Xc12datastylesheet5::TXc12Fonts* Fonts, Biff_names5::TInternalNames* InternalNames);
	__fastcall virtual ~TEscherDrawing();
	void __fastcall Clear();
	int __fastcall ShapeCount();
	void __fastcall LoadFromStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	void __fastcall SaveToStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	void __fastcall SetNoteData(System::Word Col, System::Word Row, System::Word Options, System::Word ObjId, System::UnicodeString Author);
	void __fastcall AssignBlipIds(System::Classes::TList* Blips);
	void __fastcall SetBlipRefCount();
	void __fastcall AddEmpty();
	void __fastcall Copy(int Index, System::Word DestCol, System::Word DestRow)/* overload */;
	void __fastcall Copy(System::Word Col1, System::Word Row1, System::Word Col2, System::Word Row2, System::Word DestCol, System::Word DestRow)/* overload */;
	void __fastcall CopyList(System::Classes::TList* List, int Col1, int Row1, int Col2, int Row2);
	void __fastcall InsertList(System::Classes::TList* List, int DestCol, int DestRow);
	void __fastcall DeleteList(System::Classes::TList* List);
	void __fastcall Move(int Index, unsigned DestCol, unsigned DestRow)/* overload */;
	void __fastcall Move(unsigned Col1, unsigned Row1, unsigned Col2, unsigned Row2, unsigned DestCol, unsigned DestRow)/* overload */;
	void __fastcall Delete(unsigned Col1, unsigned Row1, unsigned Col2, unsigned Row2);
	void __fastcall DeleteShape(int SpId);
	TShapeClientAnchor* __fastcall AddTextBox();
	TShapeClientAnchor* __fastcall AddNote();
	TShapeClientAnchor* __fastcall AddBasic();
	TShapeClientAnchor* __fastcall AddAutoShape();
	TShapeClientAnchor* __fastcall AddPicture();
	TShapeClientAnchor* __fastcall AddChart();
	TShapeClientAnchor* __fastcall AddListComboBox();
	TShapeClientAnchor* __fastcall AddListBox();
	TShapeClientAnchor* __fastcall AddComboBox();
	TShapeClientAnchor* __fastcall AddComboBoxAutoFilter();
	TShapeClientAnchor* __fastcall AddButton();
	TShapeClientAnchor* __fastcall AddCheckBox();
	TShapeClientAnchor* __fastcall AddRadioButton();
	__property TShapeGroup* Group = {read=FGroup};
	__property TEscherGroup* EscherGroup = {read=FParent};
	__property System::Word DgId = {read=FDgId, nodefault};
	__property TFileReadShapeEvent OnReadShape = {read=FFileReadShapeEvent, write=FFileReadShapeEvent};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TDGGData : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Biff_eschertypes5::TDGGRecFIDCL FFIDCL;
	TEscherDrawing* FDrawing;
	bool FNewDrawing;
	void __fastcall SetDrawing(TEscherDrawing* const Value);
	
public:
	void __fastcall LoadFromStream(Biff_stream5::TXLSStream* Stream);
	void __fastcall WriteToStream(Biff_stream5::TXLSStream* Stream);
	__property Biff_eschertypes5::TDGGRecFIDCL FIDCL = {read=FFIDCL};
	__property TEscherDrawing* Drawing = {read=FDrawing, write=SetDrawing};
	__property bool NewDrawing = {read=FNewDrawing, write=FNewDrawing, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDGGData() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDGGData() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDGG : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
private:
	unsigned FMaxSpId;
	unsigned FSavedShapes;
	unsigned FSavedDrawings;
	TDGGData* __fastcall GetItems(int Index);
	
public:
	__fastcall virtual ~TDGG();
	virtual void __fastcall Clear();
	HIDESBASE int __fastcall Add(void * Item);
	void __fastcall LoadFromStream(Biff_stream5::TXLSStream* Stream, int &Length, System::Sysutils::PByteArray PBuf);
	void __fastcall WriteToStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	__property TDGGData* Items[int Index] = {read=GetItems};
public:
	/* TObject.Create */ inline __fastcall TDGG() : System::Classes::TList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMSOPicture : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TMSOPictures* FOwner;
	void *FPicture;
	void *FCompressedPicture;
	int FPictSize;
	Biff_eschertypes5::TMSOBlipType FPictType;
	int FRefCount;
	System::UnicodeString FBlipName;
	int FCompressedSize;
	System::StaticArray<System::Byte, 16> FHash;
	int FFileBlipId;
	System::UnicodeString FName;
	void __fastcall SetFilename(const System::UnicodeString Value);
	
protected:
	bool __fastcall LoadFromStream(Biff_stream5::TXLSStream* Stream, int &Length, System::Sysutils::PByteArray PBuf)/* overload */;
	void __fastcall WriteToStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	void __fastcall MakeHash();
	void __fastcall CompressPict();
	void __fastcall FreeCompressedPict();
	__property void * Picture = {read=FPicture};
	__property int PictSize = {read=FPictSize, nodefault};
	__property int RefCount = {read=FRefCount, write=FRefCount, nodefault};
	__property System::UnicodeString BlipName = {read=FBlipName, write=FBlipName};
	
public:
	__fastcall TMSOPicture(TMSOPictures* AOwner);
	__fastcall virtual ~TMSOPicture();
	void __fastcall LoadFromStream(System::Classes::TStream* Stream, System::UnicodeString Name, Biff_eschertypes5::TMSOBlipType PictType)/* overload */;
	void __fastcall LoadFromFile(System::UnicodeString Filename);
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall SaveToFile(System::UnicodeString Filename);
	bool __fastcall CopyToBitmap(Vcl::Graphics::TBitmap* Bitmap);
	bool __fastcall IsRaster();
	__property Biff_eschertypes5::TMSOBlipType PictType = {read=FPictType, nodefault};
	__property int PictureSize = {read=FPictSize, nodefault};
	__property void * PictureBuf = {read=FPicture};
	__property int FileBlipId = {read=FFileBlipId, write=FFileBlipId, nodefault};
	__property System::UnicodeString Filename = {read=FBlipName, write=SetFilename};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEscherGroup : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
	
private:
	typedef System::DynamicArray<tagRGBQUAD> _TEscherGroup__1;
	
	typedef System::DynamicArray<tagRGBQUAD> _TEscherGroup__2;
	
	
public:
	TMSOPicture* operator[](int Index) { return this->Items[Index]; }
	
private:
	TMSOPicture* __fastcall GetMSOPicture(int Index);
	
protected:
	TDGG* FDGG;
	TOPT* FOPT;
	_TEscherGroup__1 FSplitMenuColors;
	_TEscherGroup__2 FColorMRU;
	TMSORecords* FUnknown;
	int FCurrSpIdBlock;
	void __fastcall ReadPictures(Biff_stream5::TXLSStream* Stream, int Length, System::Sysutils::PByteArray PBuf);
	int __fastcall GetSpIdBlock();
	void __fastcall AssignDrawing(TEscherDrawing* Drawing);
	void __fastcall UpdateDrawing(int DgId);
	void __fastcall DeleteDrawing(int DgId);
	
public:
	__fastcall TEscherGroup();
	__fastcall virtual ~TEscherGroup();
	virtual void __fastcall Clear();
	void __fastcall AddDrawing(TEscherDrawing* Drawing, System::Word &DgId, unsigned &SpIdBlock);
	void __fastcall LoadFromStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	void __fastcall WriteToStream(Biff_stream5::TXLSStream* Stream, System::Sysutils::PByteArray PBuf);
	bool __fastcall HasData();
	__property TMSOPicture* Items[int Index] = {read=GetMSOPicture/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMSOPictures : public TEscherGroup
{
	typedef TEscherGroup inherited;
	
public:
	HIDESBASE TMSOPicture* __fastcall Add();
	void __fastcall GetBlipIds(System::Classes::TList* List);
	void __fastcall ResetBlipRefCount();
public:
	/* TEscherGroup.Create */ inline __fastcall TMSOPictures() : TEscherGroup() { }
	/* TEscherGroup.Destroy */ inline __fastcall virtual ~TMSOPictures() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Biff_eschertypes5::TMSOBlipType __fastcall BlipFromExt(System::UnicodeString Filename);
}	/* namespace Biff_escher5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_ESCHER5)
using namespace Biff_escher5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_escher5HPP
