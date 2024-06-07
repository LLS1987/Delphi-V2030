// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XSSIELogPhyPosition.pas' rev: 35.00 (Windows)

#ifndef XssielogphypositionHPP
#define XssielogphypositionHPP

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
#include <XSSIEUtils.hpp>
#include <XSSIEDocProps.hpp>
#include <XSSIECharRun.hpp>
#include <XSSIELogParas.hpp>
#include <XSSIEPhyRow.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xssielogphyposition
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAXWLogPhyPosition;
class DELPHICLASS TAXWEventLogPhyPosition;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWLogPhyPosition : public Xssielogparas::TAXWLogPosition
{
	typedef Xssielogparas::TAXWLogPosition inherited;
	
protected:
	bool FParaChanged;
	int FRowIndex;
	Xssiephyrow::TAXWPhyRow* FRow;
	int __fastcall FindRow(int P);
	int __fastcall BOLPos(int R)/* overload */;
	int __fastcall EOLPos(int R)/* overload */;
	int __fastcall EOLPlusPos(int R)/* overload */;
	virtual void __fastcall SetPos(const int Value);
	void __fastcall SetRowFromPos();
	
public:
	__fastcall TAXWLogPhyPosition();
	HIDESBASE void __fastcall Clear();
	void __fastcall SyncRow();
	bool __fastcall Valid();
	void __fastcall MakeValid();
	virtual void __fastcall Reset(Xssielogparas::TAXWLogPara* Para);
	bool __fastcall EqualRow(TAXWLogPhyPosition* LPP);
	bool __fastcall GreaterRow(TAXWLogPhyPosition* LPP);
	bool __fastcall LessRow(TAXWLogPhyPosition* LPP);
	HIDESBASE void __fastcall Assign(TAXWLogPhyPosition* LPP)/* overload */;
	HIDESBASE void __fastcall Assign(Xssielogparas::TAXWLogPara* APara, int ARowIndex)/* overload */;
	virtual void __fastcall Update();
	int __fastcall RelativePos();
	int __fastcall BOLPos()/* overload */;
	int __fastcall EOLPos()/* overload */;
	int __fastcall EOLPlusPos()/* overload */;
	bool __fastcall RowIsAtBeginningOfPara();
	bool __fastcall RowIsAtEndOfPara();
	bool __fastcall RowIsAtEndOfDoc();
	bool __fastcall RowIsAtBeginningOfDoc();
	bool __fastcall HaveNextRow();
	bool __fastcall HavePrevRow();
	virtual void __fastcall MovePosNext();
	virtual void __fastcall MovePosPrev();
	virtual bool __fastcall MoveRowNext();
	virtual bool __fastcall MoveRowPrev();
	virtual void __fastcall MoveParaNext();
	virtual void __fastcall MoveParaPrev();
	virtual void __fastcall MoveToBOL();
	virtual void __fastcall MoveToEOLPlus();
	virtual void __fastcall MoveToEndOfPara();
	virtual void __fastcall MoveToBeginningOfPara();
	virtual void __fastcall MoveToEndOfDoc();
	virtual void __fastcall MoveToBeginningOfDoc();
	virtual void __fastcall MoveToPos(TAXWLogPhyPosition* Pos)/* overload */;
	virtual void __fastcall MoveToPos(Xssielogparas::TAXWLogPosition* Pos)/* overload */;
	__property Xssiephyrow::TAXWPhyRow* Row = {read=FRow};
	__property int RowIndex = {read=FRowIndex, nodefault};
	__property bool ParaChanged = {read=FParaChanged, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWLogPhyPosition() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Assign(Xssielogparas::TAXWLogPosition* LPP){ Xssielogparas::TAXWLogPosition::Assign(LPP); }
	inline void __fastcall  Assign(Xssielogparas::TAXWLogPara* APara){ Xssielogparas::TAXWLogPosition::Assign(APara); }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAXWEventLogPhyPosition : public TAXWLogPhyPosition
{
	typedef TAXWLogPhyPosition inherited;
	
private:
	void __fastcall SetPosChangeEvent(const System::Classes::TNotifyEvent Value);
	
protected:
	System::Classes::TNotifyEvent FBeforePosChangeEvent;
	System::Classes::TNotifyEvent FPosChangeEvent;
	Xssielogparas::TAXWLogPara* FOldPara;
	int FOldRowIndex;
	int FOldPos;
	
public:
	__fastcall TAXWEventLogPhyPosition();
	virtual void __fastcall Reset(Xssielogparas::TAXWLogPara* Para);
	void __fastcall UpdatePosRelative(int RelativePos);
	void __fastcall BeforeMove();
	void __fastcall AfterMove();
	void __fastcall AfterMoveKeepPos();
	virtual void __fastcall MovePosNext();
	virtual void __fastcall MovePosPrev();
	virtual bool __fastcall MoveRowNext();
	virtual bool __fastcall MoveRowPrev();
	virtual void __fastcall MoveParaNext();
	virtual void __fastcall MoveParaPrev();
	virtual void __fastcall MoveToBOL();
	virtual void __fastcall MoveToEOLPlus();
	virtual void __fastcall MoveToEndOfPara();
	virtual void __fastcall MoveToBeginningOfPara();
	virtual void __fastcall MoveToEndOfDoc();
	virtual void __fastcall MoveToBeginningOfDoc();
	virtual void __fastcall MoveToPos(TAXWLogPhyPosition* Pos)/* overload */;
	virtual void __fastcall MoveToPos(Xssielogparas::TAXWLogPosition* Pos)/* overload */;
	__property int OldPos = {read=FOldPos, nodefault};
	__property System::Classes::TNotifyEvent OnPosChange = {read=FPosChangeEvent, write=SetPosChangeEvent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWEventLogPhyPosition() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xssielogphyposition */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XSSIELOGPHYPOSITION)
using namespace Xssielogphyposition;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XssielogphypositionHPP
