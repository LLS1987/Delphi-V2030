// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XBook_System_2.pas' rev: 35.00 (Windows)

#ifndef Xbook_system_2HPP
#define Xbook_system_2HPP

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
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xbook_system_2
{
//-- forward type declarations -----------------------------------------------
struct TXSSCaret;
class DELPHICLASS TXSSTimerObject;
class DELPHICLASS TXSSTimerObjects;
class DELPHICLASS TXSSSystem;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TXSSTimerEvent)(System::TObject* ASender, void * AData);

struct DECLSPEC_DRECORD TXSSCaret
{
public:
	int Width;
	int Height;
	int X;
	int Y;
	bool Visible;
	bool Enabled;
};


class PASCALIMPLEMENTATION TXSSTimerObject : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::TObject* FOwner;
	TXSSTimerEvent FEvent;
	int FId;
	void *FData;
	
public:
	__fastcall TXSSTimerObject(System::TObject* AOwner, TXSSTimerEvent AEvent, void * AData);
	__property System::TObject* Owner = {read=FOwner};
	__property TXSSTimerEvent Event = {read=FEvent};
	__property int Id = {read=FId, nodefault};
	__property void * Data = {read=FData};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXSSTimerObject() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSTimerObjects : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXSSTimerObject* operator[](const int Index) { return this->Items[Index]; }
	
private:
	int FCurrTimerId;
	TXSSTimerObject* __fastcall GetItems(const int Index);
	
public:
	__fastcall TXSSTimerObjects();
	HIDESBASE TXSSTimerObject* __fastcall Add(System::TObject* AOwner, TXSSTimerEvent AEvent, void * AData);
	TXSSTimerObject* __fastcall Find(System::TObject* AObject)/* overload */;
	TXSSTimerObject* __fastcall Find(const int AId)/* overload */;
	int __fastcall FindIndex(System::TObject* AObject)/* overload */;
	int __fastcall FindIndex(int AId)/* overload */;
	__property TXSSTimerObject* Items[const int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXSSTimerObjects() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXSSSystem : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	NativeUInt FHandle;
	TXSSTimerObjects* FTimers;
	TXSSCaret FCaret;
	
public:
	__fastcall TXSSSystem(const NativeUInt AHandle);
	__fastcall virtual ~TXSSSystem();
	unsigned __fastcall WinMessage(const int AMsg, unsigned ALParam, System::Word AWParam);
	int __fastcall StartTimer(System::TObject* AOwner, TXSSTimerEvent AEvent, const int ATimeout, void * AData);
	void __fastcall StopTimer(System::TObject* AOwner)/* overload */;
	void __fastcall StopTimer(int AId)/* overload */;
	void __fastcall StopAllTimers();
	void __fastcall CreateCaret();
	void __fastcall DestroyCaret();
	void __fastcall HideCaret();
	void __fastcall ShowCaret()/* overload */;
	void __fastcall ShowCaret(const int AWidth, const int AHeight, const int AX, const int AY)/* overload */;
	void __fastcall ProcessRequests();
	__property NativeUInt Handle = {read=FHandle, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const int XSS_SYS_COLOR_WHITE = int(0xffffff);
static const System::Int8 XSS_SYS_COLOR_BLACK = System::Int8(0x0);
static const int XSS_SYS_COLOR_GRAY = int(0xc0c0c0);
static const System::Int8 XSS_SYS_MINTIMERID = System::Int8(0x2);
static const System::Word XSS_SYS_MAXTIMERID = System::Word(0xffff);
static const System::Word XSS_SYS_CARET_BLINK = System::Word(0x12c);
}	/* namespace Xbook_system_2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XBOOK_SYSTEM_2)
using namespace Xbook_system_2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xbook_system_2HPP
