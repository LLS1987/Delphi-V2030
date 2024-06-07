// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XSSIECharRun.pas' rev: 35.00 (Windows)

#ifndef XssiecharrunHPP
#define XssiecharrunHPP

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
#include <XSSIEDefs.hpp>
#include <XSSIEUtils.hpp>
#include <XSSIEDocProps.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xssiecharrun
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAXWCharRun;
class DELPHICLASS TAXWCharRuns;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TAXWCharRunFlag : unsigned char { acrfPartOfNext, acrfPartOfPrev, acrfNoWhitespace };

typedef System::Set<TAXWCharRunFlag, TAXWCharRunFlag::acrfPartOfNext, TAXWCharRunFlag::acrfNoWhitespace> TAXWCharRunFlags;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWCharRun : public Xssieutils::TAXWIndexObject
{
	typedef Xssieutils::TAXWIndexObject inherited;
	
private:
	System::WideChar __fastcall CPGetChar(int Position);
	void __fastcall SetText(System::UnicodeString Value);
	int __fastcall GetEndPos();
	TAXWCharRuns* __fastcall GetParent();
	
protected:
	int FStartPos;
	TAXWCharRunFlags FFlags;
	Xssiedocprops::TAXWCHPX* FCHPX;
	System::UnicodeString FText;
	int FFieldStart;
	int FFieldEnd;
	
public:
	__fastcall TAXWCharRun(TAXWCharRuns* AParent, Xssiedocprops::TAXWCHPX* List);
	__fastcall virtual ~TAXWCharRun();
	virtual TAXWCharRun* __fastcall Clone();
	void __fastcall Assign(TAXWCharRun* CR);
	void __fastcall DeleteChars(const int AIndex, const int ACount);
	virtual int __fastcall Len();
	void __fastcall Append(System::UnicodeString S);
	System::WideChar __fastcall FirstChar();
	System::WideChar __fastcall LastChar();
	TAXWCharRun* __fastcall Next();
	TAXWCharRun* __fastcall Prev();
	TAXWCharRun* __fastcall First();
	TAXWCharRun* __fastcall Last();
	Xssiedocprops::TAXWCHPX* __fastcall AddCHPX();
	bool __fastcall ScanCharNext(int &P);
	void __fastcall DeleteCHPX();
	void __fastcall DeleteCHPXIfEmpty();
	void __fastcall CheckPartOfNext();
	__property TAXWCharRuns* Parent = {read=GetParent};
	__property System::UnicodeString Text = {read=FText, write=SetText};
	__property int StartPos = {read=FStartPos, write=FStartPos, nodefault};
	__property int EndPos = {read=GetEndPos, nodefault};
	__property TAXWCharRunFlags Flags = {read=FFlags, write=FFlags, nodefault};
	__property Xssiedocprops::TAXWCHPX* CHPX = {read=FCHPX};
	__property System::WideChar CPChar[int Position] = {read=CPGetChar};
	__property int FieldStart = {read=FFieldStart, write=FFieldStart, nodefault};
	__property int FieldEnd = {read=FFieldEnd, write=FFieldEnd, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAXWCharRuns : public Xssieutils::TAXWIndexObjectList
{
	typedef Xssieutils::TAXWIndexObjectList inherited;
	
public:
	TAXWCharRun* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TAXWCharRun* __fastcall GetItems(int Index);
	
protected:
	Xssiedocprops::TAXWCHP* FCHP;
	System::Classes::TNotifyEvent FDeleteCREvent;
	
public:
	__fastcall TAXWCharRuns(Xssieutils::TAXWIndexObject* AOwner, Xssiedocprops::TAXWCHP* ACHP);
	HIDESBASE TAXWCharRun* __fastcall Add(Xssiedocprops::TAXWCHPX* List);
	HIDESBASE TAXWCharRun* __fastcall Insert(const int AIndex, Xssiedocprops::TAXWCHPX* AList);
	TAXWCharRun* __fastcall Next(TAXWCharRun* CR);
	TAXWCharRun* __fastcall Prev(TAXWCharRun* CR);
	HIDESBASE TAXWCharRun* __fastcall First();
	HIDESBASE TAXWCharRun* __fastcall Last();
	TAXWCharRun* __fastcall Split(TAXWCharRun* CR, int P);
	void __fastcall Append(TAXWCharRuns* CRS);
	void __fastcall Combine()/* overload */;
	void __fastcall Combine(TAXWCharRun* CR1, TAXWCharRun* CR2)/* overload */;
	bool __fastcall IsEqualCHPX(TAXWCharRun* CR1, TAXWCharRun* CR2);
	bool __fastcall IsSplitWordPrev(TAXWCharRun* CR);
	bool __fastcall IsSplitWordNext(TAXWCharRun* CR);
	TAXWCharRun* __fastcall Find(int CP);
	TAXWCharRun* __fastcall FindBeginningOfWord(int &P, TAXWCharRun* CR);
	TAXWCharRun* __fastcall FindEndOfWord(int &P, TAXWCharRun* CR);
	bool __fastcall PrevChar(TAXWCharRun* &CR, int &P, System::WideChar &C);
	bool __fastcall NextChar(TAXWCharRun* &CR, int &P, System::WideChar &C);
	int __fastcall EndOfParaPos();
	__property System::Classes::TNotifyEvent OnDeleteCR = {read=FDeleteCREvent, write=FDeleteCREvent};
	__property TAXWCharRun* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TAXWCharRuns() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xssiecharrun */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XSSIECHARRUN)
using namespace Xssiecharrun;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XssiecharrunHPP
