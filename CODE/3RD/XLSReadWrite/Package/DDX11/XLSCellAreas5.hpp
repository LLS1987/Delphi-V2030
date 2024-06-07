// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSCellAreas5.pas' rev: 35.00 (Windows)

#ifndef Xlscellareas5HPP
#define Xlscellareas5HPP

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
#include <System.Math.hpp>
#include <XLSUtils5.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Common5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlscellareas5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCellRef;
class DELPHICLASS TCellRefs;
class DELPHICLASS TCellArea;
class DELPHICLASS TCellAreaImpl;
class DELPHICLASS TBaseCellAreas;
class DELPHICLASS TCellAreas;
class DELPHICLASS TSolidCellAreas;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TCellEdge : unsigned char { ceLeft, ceTop, ceRight, ceBottom };

typedef System::Set<TCellEdge, TCellEdge::ceLeft, TCellEdge::ceBottom> TCellEdges;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCellRef : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString __fastcall GetAsString();
	void __fastcall SetAsString(const System::UnicodeString Value);
	
protected:
	int FCol;
	int FRow;
	
public:
	void __fastcall Clear();
	__property int Col = {read=FCol, write=FCol, nodefault};
	__property int Row = {read=FRow, write=FRow, nodefault};
	__property System::UnicodeString AsString = {read=GetAsString, write=SetAsString};
public:
	/* TObject.Create */ inline __fastcall TCellRef() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCellRef() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCellRefs : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
private:
	TCellRef* __fastcall GetItems(const int Index);
	
public:
	HIDESBASE void __fastcall Add(const System::UnicodeString ARef);
	__property TCellRef* Items[const int Index] = {read=GetItems};
public:
	/* TObjectList.Create */ inline __fastcall TCellRefs()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TCellRefs(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCellRefs() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCellArea : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Xc12utils5::TXLSCellArea __fastcall GetAsRecArea();
	void __fastcall SetAsRecArea(const Xc12utils5::TXLSCellArea &Value);
	System::UnicodeString __fastcall GetAsStringAbs();
	
protected:
	int FTag;
	System::TObject* FObject;
	TCellEdges __fastcall GetEdges(const int Col, const int Row);
	System::UnicodeString __fastcall GetAsString();
	virtual int __fastcall GetCol1() = 0 ;
	virtual int __fastcall GetRow1() = 0 ;
	virtual int __fastcall GetCol2() = 0 ;
	virtual int __fastcall GetRow2() = 0 ;
	virtual void __fastcall SetCol1(const int AValue) = 0 ;
	virtual void __fastcall SetRow1(const int AValue) = 0 ;
	virtual void __fastcall SetCol2(const int AValue) = 0 ;
	virtual void __fastcall SetRow2(const int AValue) = 0 ;
	bool __fastcall FullInside(const int Col, const int Row);
	
public:
	void __fastcall Normalize();
	void __fastcall Assign(TCellArea* Source);
	void __fastcall SetSize(const int C, const int R)/* overload */;
	void __fastcall SetSize(const int C1, const int R1, const int C2, const int R2)/* overload */;
	bool __fastcall InArea(const int C1, const int R1, const int C2, const int R2);
	bool __fastcall CornerInArea(const int C1, const int R1, const int C2, const int R2)/* overload */;
	bool __fastcall CornerInArea(TCellArea* AArea)/* overload */;
	int __fastcall CellCount();
	int __fastcall Width();
	int __fastcall Height();
	bool __fastcall IsColumn();
	bool __fastcall IsRow();
	__property Xc12utils5::TXLSCellArea AsRecArea = {read=GetAsRecArea, write=SetAsRecArea};
	__property TCellEdges Edges[const int Col][const int Row] = {read=GetEdges};
	bool __fastcall CellInArea(const int Col, const int Row);
	bool __fastcall Equal(const int C1, const int R1, const int C2, const int R2);
	__property int Col1 = {read=GetCol1, write=SetCol1, nodefault};
	__property int Row1 = {read=GetRow1, write=SetRow1, nodefault};
	__property int Col2 = {read=GetCol2, write=SetCol2, nodefault};
	__property int Row2 = {read=GetRow2, write=SetRow2, nodefault};
	__property System::UnicodeString AsString = {read=GetAsString};
	__property System::UnicodeString AsStringAbs = {read=GetAsStringAbs};
	__property int Tag = {read=FTag, write=FTag, nodefault};
	__property System::TObject* Obj = {read=FObject, write=FObject};
public:
	/* TObject.Create */ inline __fastcall TCellArea() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCellArea() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCellAreaImpl : public TCellArea
{
	typedef TCellArea inherited;
	
protected:
	int FCol1;
	int FRow1;
	int FCol2;
	int FRow2;
	virtual int __fastcall GetCol1();
	virtual int __fastcall GetRow1();
	virtual int __fastcall GetCol2();
	virtual int __fastcall GetRow2();
	virtual void __fastcall SetCol1(const int AValue);
	virtual void __fastcall SetRow1(const int AValue);
	virtual void __fastcall SetCol2(const int AValue);
	virtual void __fastcall SetRow2(const int AValue);
public:
	/* TObject.Create */ inline __fastcall TCellAreaImpl() : TCellArea() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCellAreaImpl() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBaseCellAreas : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TCellArea* operator[](const int Index) { return this->Items[Index]; }
	
private:
	System::UnicodeString __fastcall GetDelimitedText();
	void __fastcall SetDelimitedText(const System::UnicodeString Value);
	TCellArea* __fastcall GetItems(const int Index);
	
protected:
	int FTag;
	System::WideChar FDelimiter;
	bool __fastcall IntersectArea(const Xc12utils5::TXLSCellArea &Source1, const Xc12utils5::TXLSCellArea &Source2, Xc12utils5::TXLSCellArea &Dest);
	int __fastcall Split(const int Index, const Xc12utils5::TXLSCellArea &Area, Xc12utils5::TXLSCellArea *SplitAreas, const int SplitAreas_High);
	virtual TCellArea* __fastcall CreateObject();
	
public:
	__fastcall TBaseCellAreas();
	HIDESBASE void __fastcall Assign(TBaseCellAreas* Areas);
	HIDESBASE TCellArea* __fastcall Add()/* overload */;
	HIDESBASE TCellArea* __fastcall Add(const System::UnicodeString ARef)/* overload */;
	HIDESBASE TCellArea* __fastcall Add(const Xc12utils5::PXLSCellArea AArea)/* overload */;
	HIDESBASE TCellArea* __fastcall Add(const int C, const int R)/* overload */;
	HIDESBASE TCellArea* __fastcall Add(const int C1, const int R1, const int C2, const int R2)/* overload */;
	HIDESBASE void __fastcall Add(const int C1, const int R1, const int C2, const int R2, TBaseCellAreas* AAreas)/* overload */;
	int __fastcall CellCount();
	Xc12utils5::TXLSCellArea __fastcall TotExtent();
	void __fastcall NormalizeAll();
	int __fastcall MaxWidth();
	int __fastcall MaxHeight();
	bool __fastcall AreaInAreas(TCellArea* AArea)/* overload */;
	bool __fastcall AreaInAreas(const int Col1, const int Row1, const int Col2, const int Row2)/* overload */;
	bool __fastcall FillAndClipHitList(const int Col1, const int Row1, const int Col2, const int Row2, TBaseCellAreas* AList, System::TObject* AObject = (System::TObject*)(0x0))/* overload */;
	bool __fastcall FillAndClipHitList(const int Col1, const int Row1, const int Col2, const int Row2, const int ADestCol, const int ADestRow, TBaseCellAreas* AList)/* overload */;
	bool __fastcall FillHitList(const int Col1, const int Row1, const int Col2, const int Row2, TBaseCellAreas* AList);
	int __fastcall FindArea(const int Col1, const int Row1, const int Col2, const int Row2)/* overload */;
	int __fastcall FindArea(const int Col, const int Row)/* overload */;
	int __fastcall CellInAreas(const int Col, const int Row);
	virtual void __fastcall Copy(const int Col1, const int Row1, const int Col2, const int Row2, const int DeltaCol, const int DeltaRow);
	HIDESBASE virtual void __fastcall Delete(const int Col1, const int Row1, const int Col2, const int Row2) = 0 /* overload */;
	virtual void __fastcall DeleteAndAdjust(const int Col1, const int Row1, const int Col2, const int Row2) = 0 ;
	virtual TCellArea* __fastcall Include(const int Col1, const int Row1, const int Col2, const int Row2) = 0 ;
	HIDESBASE virtual void __fastcall Move(const int DeltaCol, const int DeltaRow) = 0 /* overload */;
	HIDESBASE virtual void __fastcall Move(const int Col1, const int Row1, const int Col2, const int Row2, const int DeltaCol, const int DeltaRow) = 0 /* overload */;
	__property TCellArea* Items[const int Index] = {read=GetItems/*, default*/};
	__property System::WideChar Delimiter = {read=FDelimiter, nodefault};
	__property System::UnicodeString DelimitedText = {read=GetDelimitedText, write=SetDelimitedText};
	__property int Tag = {read=FTag, write=FTag, nodefault};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TBaseCellAreas() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCellAreas : public TBaseCellAreas
{
	typedef TBaseCellAreas inherited;
	
protected:
	bool __fastcall CheckAndClip(int &C1, int &R1, int &C2, int &R2);
	bool __fastcall Combine(const int C1, const int R1, const int C2, const int R2);
	
public:
	HIDESBASE TCellArea* __fastcall Last();
	virtual void __fastcall Copy(const int Col1, const int Row1, const int Col2, const int Row2, const int DeltaCol, const int DeltaRow);
	virtual void __fastcall Delete(const int Col1, const int Row1, const int Col2, const int Row2)/* overload */;
	virtual void __fastcall DeleteAndAdjust(const int Col1, const int Row1, const int Col2, const int Row2);
	virtual TCellArea* __fastcall Include(const int Col1, const int Row1, const int Col2, const int Row2);
	virtual void __fastcall Move(const int DeltaCol, const int DeltaRow)/* overload */;
	virtual void __fastcall Move(const int Col1, const int Row1, const int Col2, const int Row2, const int DeltaCol, const int DeltaRow)/* overload */;
public:
	/* TBaseCellAreas.Create */ inline __fastcall TCellAreas() : TBaseCellAreas() { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCellAreas() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSolidCellAreas : public TBaseCellAreas
{
	typedef TBaseCellAreas inherited;
	
protected:
	bool FCopyFailed;
	
public:
	virtual void __fastcall Copy(const int Col1, const int Row1, const int Col2, const int Row2, const int DeltaCol, const int DeltaRow);
	virtual void __fastcall Delete(const int Col1, const int Row1, const int Col2, const int Row2)/* overload */;
	virtual void __fastcall DeleteAndAdjust(const int Col1, const int Row1, const int Col2, const int Row2);
	virtual TCellArea* __fastcall Include(const int Col1, const int Row1, const int Col2, const int Row2);
	virtual void __fastcall Move(const int DeltaCol, const int DeltaRow)/* overload */;
	virtual void __fastcall Move(const int Col1, const int Row1, const int Col2, const int Row2, const int DeltaCol, const int DeltaRow)/* overload */;
	__property bool CopyFailed = {read=FCopyFailed, nodefault};
public:
	/* TBaseCellAreas.Create */ inline __fastcall TSolidCellAreas() : TBaseCellAreas() { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TSolidCellAreas() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlscellareas5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSCELLAREAS5)
using namespace Xlscellareas5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlscellareas5HPP
