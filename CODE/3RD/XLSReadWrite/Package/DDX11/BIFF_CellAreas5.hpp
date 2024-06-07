// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_CellAreas5.pas' rev: 35.00 (Windows)

#ifndef Biff_cellareas5HPP
#define Biff_cellareas5HPP

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
#include <Winapi.Windows.hpp>
#include <BIFF_RecsII5.hpp>
#include <BIFF_Utils5.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_cellareas5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCellArea97;
class DELPHICLASS TBaseCellAreas97;
class DELPHICLASS TCellAreas97;
class DELPHICLASS TSolidCellAreas97;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TCellEdge : unsigned char { ceLeft, ceTop, ceRight, ceBottom };

typedef System::Set<TCellEdge, TCellEdge::ceLeft, TCellEdge::ceBottom> TCellEdges;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCellArea97 : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Biff_recsii5::TRecCellAreaI __fastcall GetAsRecArea();
	void __fastcall SetAsRecArea(const Biff_recsii5::TRecCellAreaI &Value);
	TCellEdges __fastcall GetEdges(int Col, int Row);
	
protected:
	int FId;
	int FCol1;
	int FRow1;
	int FCol2;
	int FRow2;
	bool __fastcall FullInside(int Col, int Row);
	
public:
	void __fastcall Normalize();
	void __fastcall Assign(TCellArea97* Source);
	void __fastcall SetSize(int C1, int R1, int C2, int R2);
	__property Biff_recsii5::TRecCellAreaI AsRecArea = {read=GetAsRecArea, write=SetAsRecArea};
	__property TCellEdges Edges[int Col][int Row] = {read=GetEdges};
	bool __fastcall CellInArea(int Col, int Row);
	bool __fastcall Equal(int C1, int R1, int C2, int R2);
	__property int Col1 = {read=FCol1, write=FCol1, nodefault};
	__property int Row1 = {read=FRow1, write=FRow1, nodefault};
	__property int Col2 = {read=FCol2, write=FCol2, nodefault};
	__property int Row2 = {read=FRow2, write=FRow2, nodefault};
	__property int Id = {read=FId, nodefault};
public:
	/* TObject.Create */ inline __fastcall TCellArea97() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCellArea97() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TBaseCellAreas97 : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TCellArea97* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCellArea97* __fastcall GetItems(int Index);
	
protected:
	int FIdCount;
	Xlsutils5::TIntegerEvent FFoundAreaEvent;
	bool __fastcall IntersectArea(const Biff_recsii5::TRecCellAreaI &Source1, const Biff_recsii5::TRecCellAreaI &Source2, Biff_recsii5::TRecCellAreaI &Dest);
	int __fastcall Split(int Index, const Biff_recsii5::TRecCellAreaI &Area, Biff_recsii5::TRecCellAreaI *SplitAreas, const int SplitAreas_High);
	int __fastcall NewId();
	
public:
	__fastcall TBaseCellAreas97();
	HIDESBASE void __fastcall Assign(TBaseCellAreas97* Areas);
	HIDESBASE TCellArea97* __fastcall Add()/* overload */;
	HIDESBASE TCellArea97* __fastcall Add(Biff_recsii5::PRecCellArea RecArea)/* overload */;
	HIDESBASE TCellArea97* __fastcall Add(int C1, int R1, int C2, int R2)/* overload */;
	Biff_recsii5::TRecCellAreaI __fastcall TotExtent();
	void __fastcall NormalizeAll();
	bool __fastcall AreaInAreas(int Col1, int Row1, int Col2, int Row2);
	int __fastcall FindArea(int Col1, int Row1, int Col2, int Row2);
	int __fastcall CellInAreas(int Col, int Row);
	void __fastcall SendAllInArea(int Col1, int Row1, int Col2, int Row2);
	virtual void __fastcall Copy(System::Word Col1, System::Word Row1, System::Word Col2, System::Word Row2, int DeltaCol, int DeltaRow);
	HIDESBASE virtual void __fastcall Delete(int Col1, int Row1, int Col2, int Row2) = 0 /* overload */;
	virtual void __fastcall Include(int Col1, int Row1, int Col2, int Row2) = 0 ;
	HIDESBASE virtual void __fastcall Move(int DeltaCol, int DeltaRow) = 0 /* overload */;
	HIDESBASE virtual void __fastcall Move(int Col1, int Row1, int Col2, int Row2, int DeltaCol, int DeltaRow) = 0 /* overload */;
	__property TCellArea97* Items[int Index] = {read=GetItems/*, default*/};
	__property Xlsutils5::TIntegerEvent OnFoundArea = {read=FFoundAreaEvent, write=FFoundAreaEvent};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TBaseCellAreas97() { }
	
};


class PASCALIMPLEMENTATION TCellAreas97 : public TBaseCellAreas97
{
	typedef TBaseCellAreas97 inherited;
	
protected:
	bool __fastcall Combine(System::Word C1, System::Word R1, System::Word C2, System::Word R2);
	
public:
	virtual void __fastcall Copy(System::Word Col1, System::Word Row1, System::Word Col2, System::Word Row2, int DeltaCol, int DeltaRow);
	virtual void __fastcall Delete(int Col1, int Row1, int Col2, int Row2)/* overload */;
	virtual void __fastcall Include(int Col1, int Row1, int Col2, int Row2);
	virtual void __fastcall Move(int DeltaCol, int DeltaRow)/* overload */;
	virtual void __fastcall Move(int Col1, int Row1, int Col2, int Row2, int DeltaCol, int DeltaRow)/* overload */;
public:
	/* TBaseCellAreas97.Create */ inline __fastcall TCellAreas97() : TBaseCellAreas97() { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCellAreas97() { }
	
};


class PASCALIMPLEMENTATION TSolidCellAreas97 : public TBaseCellAreas97
{
	typedef TBaseCellAreas97 inherited;
	
public:
	virtual void __fastcall Copy(System::Word Col1, System::Word Row1, System::Word Col2, System::Word Row2, int DeltaCol, int DeltaRow);
	virtual void __fastcall Delete(int Col1, int Row1, int Col2, int Row2)/* overload */;
	virtual void __fastcall Include(int Col1, int Row1, int Col2, int Row2);
	virtual void __fastcall Move(int DeltaCol, int DeltaRow)/* overload */;
	virtual void __fastcall Move(int Col1, int Row1, int Col2, int Row2, int DeltaCol, int DeltaRow)/* overload */;
public:
	/* TBaseCellAreas97.Create */ inline __fastcall TSolidCellAreas97() : TBaseCellAreas97() { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TSolidCellAreas97() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Biff_cellareas5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_CELLAREAS5)
using namespace Biff_cellareas5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_cellareas5HPP
