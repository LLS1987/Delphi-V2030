// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XSSIELogEditor.pas' rev: 35.00 (Windows)

#ifndef XssielogeditorHPP
#define XssielogeditorHPP

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
#include <Vcl.Clipbrd.hpp>
#include <Winapi.Windows.hpp>
#include <XLSUtils5.hpp>
#include <XSSIEDefs.hpp>
#include <XSSIEUtils.hpp>
#include <XSSIEDocProps.hpp>
#include <XSSIECharRun.hpp>
#include <XSSIELogParas.hpp>
#include <XSSIELogPhyPosition.hpp>
#include <XSSIEKeys.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xssielogeditor
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAXWLogDocument;
class DELPHICLASS TAXWUndoItem;
class DELPHICLASS TAXWUndo;
class DELPHICLASS TAXWSelections;
class DELPHICLASS TAXWLogDocEditor;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TAXWSelectionStatus : unsigned char { assNone, assUpdating };

enum DECLSPEC_DENUM TAXWPhyPosition : unsigned char { apsNone, apsTopRow, apsBottomRow, apsPageUp, apsPageDown };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWLogDocument : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool __fastcall GetDirty();
	
protected:
	Xssielogparas::TAXWLogParas* FLogParas;
	Xssiedocprops::TAXWDOP* FDOP;
	Xssiedocprops::TAXWPAP* FMasterPAP;
	Xssiedocprops::TAXWCHP* FMasterCHP;
	Xssiedocprops::TAXWCHPX* FTempCHPX;
	Xssiedocprops::TAXWPAPX* FTempPAPX;
	virtual void __fastcall Paginate() = 0 ;
	virtual void __fastcall PaginateCaretPara() = 0 ;
	void __fastcall ClearDirty();
	
public:
	__fastcall TAXWLogDocument();
	__fastcall virtual ~TAXWLogDocument();
	virtual void __fastcall Clear();
	void __fastcall AppendTextSimple(const System::UnicodeString AText);
	void __fastcall AppendText(const System::UnicodeString AText)/* overload */;
	void __fastcall AppendText(const System::UnicodeString AText, Xssiedocprops::TAXWCHPX* CHPX)/* overload */;
	Xssielogparas::TAXWLogPara* __fastcall AppendPara()/* overload */;
	void __fastcall AppendPara(System::UnicodeString S)/* overload */;
	void __fastcall AppendPara(System::UnicodeString S, Xssiedocprops::TAXWPAPX* PAPX)/* overload */;
	void __fastcall AppendTextFmt(System::UnicodeString S);
	System::UnicodeString __fastcall PlainText();
	__property Xssielogparas::TAXWLogParas* Paras = {read=FLogParas};
	__property Xssiedocprops::TAXWDOP* DOP = {read=FDOP};
	__property Xssiedocprops::TAXWCHP* MasterCHP = {read=FMasterCHP};
	__property Xssiedocprops::TAXWPAP* MasterPAP = {read=FMasterPAP};
	__property Xssiedocprops::TAXWCHPX* TempCHPX = {read=FTempCHPX};
	__property Xssiedocprops::TAXWPAPX* TempPAPX = {read=FTempPAPX};
	__property bool Dirty = {read=GetDirty, nodefault};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TAXWUndoRedoOp : unsigned char { uroInsertText, uroInsertPara, uroMove, uroDeleteText };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWUndoItem : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FValue;
	System::UnicodeString FBuffer;
	TAXWUndoRedoOp FOperation;
	
public:
	__property System::UnicodeString Buffer = {read=FBuffer, write=FBuffer};
	__property TAXWUndoRedoOp Operation = {read=FOperation, write=FOperation, nodefault};
	__property int Value = {read=FValue, write=FValue, nodefault};
public:
	/* TObject.Create */ inline __fastcall TAXWUndoItem() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWUndoItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWUndo : public System::Contnrs::TObjectStack
{
	typedef System::Contnrs::TObjectStack inherited;
	
public:
	__fastcall virtual ~TAXWUndo();
	void __fastcall AddInsert(System::UnicodeString Text);
	void __fastcall AddDelete(System::UnicodeString Text);
	void __fastcall AddMove(int Distance);
	HIDESBASE TAXWUndoItem* __fastcall Peek();
public:
	/* TOrderedList.Create */ inline __fastcall TAXWUndo() : System::Contnrs::TObjectStack() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWSelections : public Xssielogparas::TAXWLogSelections
{
	typedef Xssielogparas::TAXWLogSelections inherited;
	
private:
	Xssielogparas::TAXWLogPosition* __fastcall GetFirstPos();
	Xssielogparas::TAXWLogPosition* __fastcall GetLastPos();
	
protected:
	Xssielogparas::TAXWLogPosition* FAnchor;
	Xssielogparas::TAXWLogPosition* FCaretPos;
	Xssielogparas::TAXWLogPosition* FTempPos1;
	Xssielogparas::TAXWLogPosition* FTempPos2;
	TAXWSelectionStatus FStatus;
	int FSavedParaIndex;
	int FSavedCharPos;
	bool FSavedCharPosIsEOP;
	Xssielogparas::TAXWLogPara* FIteratePara;
	Xssiecharrun::TAXWCharRun* FIterateCR;
	Xssiecharrun::TAXWCharRun* FIterateCREnd;
	void __fastcall Normalize();
	void __fastcall BeginIterateCR();
	bool __fastcall NextCR();
	__property Xssiecharrun::TAXWCharRun* IterateCR = {read=FIterateCR, write=FIterateCR};
	
public:
	__fastcall TAXWSelections(Xssielogparas::TAXWLogPosition* Caret);
	__fastcall virtual ~TAXWSelections();
	virtual void __fastcall Reset();
	bool __fastcall HasSelection();
	bool __fastcall IsEntireDoc();
	bool __fastcall IsZeroLen();
	void __fastcall PushCaretPos();
	void __fastcall PushFirstPos();
	void __fastcall PopCaretPos(Xssielogparas::TAXWLogParas* Paras);
	void __fastcall DropAnchor();
	void __fastcall Update();
	void __fastcall SetToCaret();
	void __fastcall CopyToTemp();
	__property TAXWSelectionStatus Status = {read=FStatus, nodefault};
	__property Xssielogparas::TAXWLogPosition* Anchor = {read=FAnchor};
	__property Xssielogparas::TAXWLogPosition* FirstPos = {read=GetFirstPos};
	__property Xssielogparas::TAXWLogPosition* LastPos = {read=GetLastPos};
	__property Xssielogparas::TAXWLogPosition* TempPos1 = {read=FTempPos1};
	__property Xssielogparas::TAXWLogPosition* TempPos2 = {read=FTempPos2};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAXWLogDocEditor : public TAXWLogDocument
{
	typedef TAXWLogDocument inherited;
	
protected:
	Xssielogphyposition::TAXWEventLogPhyPosition* FCaretPos;
	TAXWSelections* FSelections;
	TAXWUndo* FUndo;
	bool FRepaint;
	System::Classes::TNotifyEvent FCaretPosEvent;
	void __fastcall DoMoveCaret(Xssiekeys::TAXWCommand Cmd)/* overload */;
	void __fastcall ClearSelection();
	void __fastcall ClearCHPFormatting();
	virtual Xssielogphyposition::TAXWLogPhyPosition* __fastcall GetPhyPosition(const TAXWPhyPosition APosition);
	
public:
	__fastcall TAXWLogDocEditor();
	__fastcall virtual ~TAXWLogDocEditor();
	void __fastcall ClearData();
	void __fastcall SetEmpty();
	bool __fastcall IsEmpty();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	void __fastcall AddPara();
	void __fastcall InsertText(System::UnicodeString S, bool InCRLeft = false);
	void __fastcall InsertPara(System::UnicodeString S);
	void __fastcall CmdControl(Xssiekeys::TAXWCommand Cmd);
	void __fastcall CmdMove(Xssiekeys::TAXWCommand Cmd);
	void __fastcall CmdClipboard(Xssiekeys::TAXWCommand Cmd);
	void __fastcall CmdSelect(Xssiekeys::TAXWCommand Cmd);
	void __fastcall CmdDelete(Xssiekeys::TAXWCommand Cmd);
	void __fastcall CmdFormat(Xssiekeys::TAXWCommand Cmd);
	void __fastcall Undo();
	void __fastcall ReadTextFile(System::UnicodeString Filename);
	void __fastcall ReadTextStream(System::Classes::TStream* Stream);
	void __fastcall UpdateSelection(Xssiekeys::TAXWCommand Direction);
	void __fastcall FormatRange(Xssiedocprops::TAXWCHPX* List, Xssielogparas::TAXWLogPosition* LPP1, Xssielogparas::TAXWLogPosition* LPP2);
	__property Xssielogphyposition::TAXWEventLogPhyPosition* CaretPos = {read=FCaretPos};
	__property TAXWSelections* Selections = {read=FSelections};
	__property System::Classes::TNotifyEvent OnCaretPos = {read=FCaretPosEvent, write=FCaretPosEvent};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xssielogeditor */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XSSIELOGEDITOR)
using namespace Xssielogeditor;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XssielogeditorHPP
