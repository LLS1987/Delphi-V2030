// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XSSIELogParas.pas' rev: 35.00 (Windows)

#ifndef XssielogparasHPP
#define XssielogparasHPP

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
#include <System.Masks.hpp>
#include <XLSUtils5.hpp>
#include <XSSIEDefs.hpp>
#include <XSSIEUtils.hpp>
#include <XSSIEDocProps.hpp>
#include <XSSIECharRun.hpp>
#include <XSSIEPhyRow.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xssielogparas
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAXWLogPara;
class DELPHICLASS TAXWLogParas;
class DELPHICLASS TAXWLogPosition;
class DELPHICLASS TAXWLogSelection;
class DELPHICLASS TAXWLogSelections;
class DELPHICLASS TAXWFindTextData;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TAXWSelectionHit : unsigned char { axshNone, axshFirstOnRow, axshLastOnRow, axshBothOnRow, axshFullRow };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWLogPara : public Xssieutils::TAXWIndexObject
{
	typedef Xssieutils::TAXWIndexObject inherited;
	
public:
	Xssiecharrun::TAXWCharRun* operator[](int Index) { return this->Items[Index]; }
	
private:
	Xssiecharrun::TAXWCharRun* __fastcall GetItems(int Index);
	System::UnicodeString __fastcall GetText();
	TAXWLogParas* __fastcall GetParent();
	
protected:
	Xssiecharrun::TAXWCharRuns* FCharRuns;
	Xssiedocprops::TAXWCHP* FCHP;
	Xssiedocprops::TAXWPAPX* FPAPX;
	Xssiedocprops::TAXWTabStops* FTabs;
	System::UnicodeString FNumText;
	Xssiephyrow::TAXWPhyRows* FRows;
	Xssiecharrun::TAXWCharRun* __fastcall FindRun(int CP);
	void __fastcall Sync(Xssiecharrun::TAXWCharRun* StartCR);
	void __fastcall ApplyFormat(Xssiedocprops::TAXWCHPX* List, Xssiecharrun::TAXWCharRun* CR1, Xssiecharrun::TAXWCharRun* CR2)/* overload */;
	void __fastcall ApplyFormat(Xssiedocprops::TAXWCHPX* List, int CP1, int CP2, Xssiecharrun::TAXWCharRun* CR1, Xssiecharrun::TAXWCharRun* CR2)/* overload */;
	void __fastcall SetFormat(Xssiedocprops::TAXWCHPX* List, Xssiecharrun::TAXWCharRun* CR1, Xssiecharrun::TAXWCharRun* CR2)/* overload */;
	void __fastcall SetFormat(Xssiedocprops::TAXWCHPX* List, int CP1, int CP2, Xssiecharrun::TAXWCharRun* CR1, Xssiecharrun::TAXWCharRun* CR2)/* overload */;
	
public:
	__fastcall TAXWLogPara(TAXWLogParas* Parent, Xssiedocprops::TAXWCHP* CHP);
	__fastcall virtual ~TAXWLogPara();
	void __fastcall Clear();
	void __fastcall ClearDirty();
	int __fastcall Count();
	TAXWLogPara* __fastcall Next();
	TAXWLogPara* __fastcall Prev();
	TAXWLogPara* __fastcall First();
	TAXWLogPara* __fastcall Last();
	bool __fastcall Empty();
	virtual int __fastcall Len();
	Xssiecharrun::TAXWCharRun* __fastcall CRFirst();
	Xssiecharrun::TAXWCharRun* __fastcall CRLast();
	int __fastcall EndOfParaPos();
	bool __fastcall FindPrevWord(int &CP);
	bool __fastcall FindNextWord(int &CP);
	bool __fastcall WordAtPos(int CP, int &CP1, int &CP2)/* overload */;
	bool __fastcall WordAtPos(int CP, int &P1, int &P2, Xssiecharrun::TAXWCharRun* &CR1, Xssiecharrun::TAXWCharRun* &CR2)/* overload */;
	Xssiedocprops::TAXWCHPX* __fastcall CHPXAtPos(int CP);
	void __fastcall Append(TAXWLogPara* Para);
	Xssiecharrun::TAXWCharRun* __fastcall AppendRaw(const System::UnicodeString S);
	Xssiecharrun::TAXWCharRun* __fastcall FindCharRun(int CP);
	Xssiecharrun::TAXWCharRun* __fastcall SplitCharRun(Xssiecharrun::TAXWCharRun* CR, int CP1, int CP2)/* overload */;
	Xssiecharrun::TAXWCharRun* __fastcall SplitCharRun(Xssiecharrun::TAXWCharRun* CR, int CP)/* overload */;
	void __fastcall InsertText(System::UnicodeString S, int P, bool InCRLeft = false);
	void __fastcall DeleteText(int CP1, int CP2);
	void __fastcall DeleteTextToEnd(int CP);
	void __fastcall AppendText(Xssiedocprops::TAXWCHPX* List, const System::UnicodeString S);
	void __fastcall AppendTextUncond(Xssiedocprops::TAXWCHPX* List, const System::UnicodeString S);
	System::UnicodeString __fastcall AsPlainText(int CP1, int CP2);
	bool __fastcall FormatWord(Xssiedocprops::TAXWCHPX* List, int CP);
	void __fastcall FormatAll(Xssiedocprops::TAXWCHPX* List);
	void __fastcall FormatRange(Xssiedocprops::TAXWCHPX* List, int CP1, int CP2);
	void __fastcall FormatAllUncond(Xssiedocprops::TAXWCHPX* List);
	void __fastcall FormatRangeUncond(Xssiedocprops::TAXWCHPX* List, int CP1, int CP2);
	void __fastcall AddTabs();
	Xssiedocprops::TAXWTabStop* __fastcall MapTab(double &APixelPos, int AIndex);
	int __fastcall FindText(const System::UnicodeString AText);
	System::WideChar __fastcall GetChar(int P);
	void __fastcall SetDocPropsAtPos(int CP);
	__property TAXWLogParas* Parent = {read=GetParent};
	__property System::UnicodeString Text = {read=GetText};
	__property Xssiedocprops::TAXWPAPX* PAPX = {read=FPAPX};
	__property Xssiedocprops::TAXWCHP* CHP = {read=FCHP};
	__property Xssiephyrow::TAXWPhyRows* Rows = {read=FRows};
	__property Xssiecharrun::TAXWCharRuns* Runs = {read=FCharRuns};
	__property Xssiedocprops::TAXWTabStops* Tabs = {read=FTabs};
	__property System::UnicodeString NumText = {read=FNumText, write=FNumText};
	__property Xssiecharrun::TAXWCharRun* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWLogParas : public Xssieutils::TAXWIndexObjectList
{
	typedef Xssieutils::TAXWIndexObjectList inherited;
	
public:
	TAXWLogPara* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TAXWLogPara* __fastcall GetItems(int Index);
	
protected:
	int FPPIX;
	int FPPIY;
	Xssiedocprops::TAXWDOP* FDOP;
	Xssiedocprops::TAXWPAP* FMasterPAP;
	Xssiedocprops::TAXWCHP* FMasterCHP;
	Xssiedocprops::TAXWPAPX* FCaretPAPX;
	Xssiedocprops::TAXWCHPX* FCaretCHPX;
	
public:
	__fastcall TAXWLogParas(Xssiedocprops::TAXWDOP* ADOP, Xssiedocprops::TAXWPAP* AMasterPAP, Xssiedocprops::TAXWCHP* AMasterCHP);
	__fastcall virtual ~TAXWLogParas();
	int __fastcall CountCR();
	void __fastcall ClearRows();
	bool __fastcall Empty();
	HIDESBASE TAXWLogPara* __fastcall First();
	HIDESBASE TAXWLogPara* __fastcall Last();
	TAXWLogPara* __fastcall New();
	HIDESBASE TAXWLogPara* __fastcall Add()/* overload */;
	HIDESBASE void __fastcall Add(TAXWLogPara* Para)/* overload */;
	HIDESBASE TAXWLogPara* __fastcall Insert(int Index);
	void __fastcall MergeNext(int Index);
	void __fastcall AddRawText(System::UnicodeString S);
	void __fastcall Sync();
	void __fastcall ApplyFormat(Xssiedocprops::TAXWCHPX* CHPX, TAXWLogPosition* Pos1, TAXWLogPosition* Pos2);
	void __fastcall ApplyFormatUncond(Xssiedocprops::TAXWCHPX* CHPX, TAXWLogPosition* Pos1, TAXWLogPosition* Pos2);
	void __fastcall ToggleFormat(Xssiedocprops::TAXWChpId Id, TAXWLogPosition* Pos1, TAXWLogPosition* Pos2);
	void __fastcall ApplyParaFormat(Xssiedocprops::TAXWPAPX* PAPX, TAXWLogPara* Para1, TAXWLogPara* Para2);
	__property int PPIX = {read=FPPIX, write=FPPIX, nodefault};
	__property int PPIY = {read=FPPIY, write=FPPIY, nodefault};
	__property Xssiedocprops::TAXWDOP* DOP = {read=FDOP};
	__property Xssiedocprops::TAXWPAP* MasterPAP = {read=FMasterPAP};
	__property Xssiedocprops::TAXWCHP* MasterCHP = {read=FMasterCHP};
	__property Xssiedocprops::TAXWPAPX* CaretPAPX = {read=FCaretPAPX};
	__property Xssiedocprops::TAXWCHPX* CaretCHPX = {read=FCaretCHPX};
	__property TAXWLogPara* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWLogPosition : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TAXWLogPara* FPara;
	int FCharPos;
	bool FParaChanged;
	virtual void __fastcall SetPos(const int Value);
	void __fastcall IncPos();
	void __fastcall DecPos();
	
public:
	__fastcall TAXWLogPosition();
	void __fastcall Clear();
	bool __fastcall Equal(TAXWLogPosition* LPP);
	bool __fastcall Greater(TAXWLogPosition* LPP);
	bool __fastcall GreaterEqual(TAXWLogPosition* LPP);
	bool __fastcall Less(TAXWLogPosition* LPP);
	bool __fastcall LessEqual(TAXWLogPosition* LPP);
	bool __fastcall CPIsAtEOP();
	bool __fastcall CPIsAtBOP();
	void __fastcall Assign(TAXWLogPosition* LPP)/* overload */;
	void __fastcall Assign(TAXWLogPara* APara)/* overload */;
	void __fastcall SetWithinLimits();
	virtual void __fastcall Update();
	void __fastcall SetDocPropsAtPos();
	virtual int __fastcall EndOfParaPos();
	int __fastcall CharPosDec();
	virtual void __fastcall MovePosNext();
	virtual void __fastcall MovePosPrev();
	virtual void __fastcall MoveToEndOfPara();
	virtual void __fastcall MoveToBeginningOfPara();
	virtual void __fastcall MoveToEndOfDoc();
	virtual void __fastcall MoveToBeginningOfDoc();
	__property TAXWLogPara* Para = {read=FPara, write=FPara};
	__property int CharPos = {read=FCharPos, write=SetPos, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWLogPosition() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWLogSelection : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TAXWLogSelections* FParent;
	TAXWLogPosition* FFirst;
	TAXWLogPosition* FLast;
	
public:
	__fastcall TAXWLogSelection(TAXWLogSelections* Parent);
	__fastcall virtual ~TAXWLogSelection();
	TAXWSelectionHit __fastcall Hit(TAXWLogPara* Para, Xssiephyrow::TAXWPhyRow* Row);
	System::UnicodeString __fastcall AsPlainText();
	__property TAXWLogPosition* First = {read=FFirst};
	__property TAXWLogPosition* Last = {read=FLast};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWLogSelections : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TAXWLogSelection* operator[](int Index) { return this->Items[Index]; }
	
private:
	TAXWLogSelection* __fastcall GetItems(int Index);
	
protected:
	TAXWSelectionHit FHitResult;
	int FHitP1Offs;
	int FHitP2Offs;
	
public:
	__fastcall TAXWLogSelections();
	virtual void __fastcall Reset();
	HIDESBASE void __fastcall Add();
	TAXWSelectionHit __fastcall Hit(TAXWLogPara* Para, Xssiephyrow::TAXWPhyRow* Row);
	__property TAXWSelectionHit HitResult = {read=FHitResult, nodefault};
	__property int HitP1Offs = {read=FHitP1Offs, nodefault};
	__property int HitP2Offs = {read=FHitP2Offs, nodefault};
	__property TAXWLogSelection* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWLogSelections() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWFindTextData : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool __fastcall GetFound();
	
protected:
	int FCharPos;
	Xssiecharrun::TAXWCharRun* FCharRun;
	TAXWLogPara* FPara;
	Xssieutils::TAXWFindTextOption FOptions;
	System::UnicodeString FText;
	bool FAtEndOfDoc;
	
public:
	void __fastcall BeginFind(TAXWLogPara* Para);
	bool __fastcall FindNext();
	__property Xssieutils::TAXWFindTextOption Options = {read=FOptions, write=FOptions, nodefault};
	__property System::UnicodeString Text = {read=FText, write=FText};
	__property bool Found = {read=GetFound, nodefault};
public:
	/* TObject.Create */ inline __fastcall TAXWFindTextData() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAXWFindTextData() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xssielogparas */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XSSIELOGPARAS)
using namespace Xssielogparas;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XssielogparasHPP
