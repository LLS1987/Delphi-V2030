// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Xc12DataComments5.pas' rev: 35.00 (Windows)

#ifndef Xc12datacomments5HPP
#define Xc12datacomments5HPP

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
#include <xpgPSimpleDOM.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Common5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XLSUtils5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xc12datacomments5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXc12Author;
class DELPHICLASS TXc12Authors;
class DELPHICLASS TXc12Comment;
class DELPHICLASS TXc12Comments;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Author : public Xc12common5::TXLSStyleObject
{
	typedef Xc12common5::TXLSStyleObject inherited;
	
protected:
	System::UnicodeString FName;
	System::UnicodeString __fastcall GetName();
	void __fastcall SetName(const System::UnicodeString Value);
	int __fastcall GetIndex();
	virtual void __fastcall CalcHash();
	
public:
	virtual bool __fastcall Equal(Xc12common5::TXLSStyleObject* AItem);
	void __fastcall Assign(TXc12Author* AItem);
	TXc12Author* __fastcall Copy();
	__property System::UnicodeString Name = {read=GetName, write=SetName};
public:
	/* TXLSStyleObject.Create */ inline __fastcall TXc12Author(Xc12common5::TXLSStyleObjectList* AOwner) : Xc12common5::TXLSStyleObject(AOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXc12Author() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Authors : public Xc12common5::TXLSStyleObjectList
{
	typedef Xc12common5::TXLSStyleObjectList inherited;
	
public:
	TXc12Author* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TXc12Author* __fastcall GetItems(int Index);
	
public:
	__fastcall TXc12Authors();
	virtual void __fastcall SetIsDefault();
	HIDESBASE TXc12Author* __fastcall Find(const System::UnicodeString AName);
	HIDESBASE TXc12Author* __fastcall Add()/* overload */;
	HIDESBASE TXc12Author* __fastcall Add(System::UnicodeString AName)/* overload */;
	__property TXc12Author* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXLSStyleObjectList.Destroy */ inline __fastcall virtual ~TXc12Authors() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Comment : public Xc12common5::TXc12Data
{
	typedef Xc12common5::TXc12Data inherited;
	
public:
	Xc12datastylesheet5::TXc12FontRun operator[](int Index) { return this->Items[Index]; }
	
private:
	void __fastcall SetAuthor(TXc12Author* const Value);
	int __fastcall GetTempAuthorId();
	void __fastcall SetTempAuthorId(const int Value);
	Xc12datastylesheet5::TXc12FontRun __fastcall GetItems(int Index);
	Xc12utils5::TXLSCellArea __fastcall GetRef();
	void __fastcall SetCol(const int Value);
	void __fastcall SetRow(const int Value);
	
protected:
	TXc12Comments* FOwner;
	int FCol;
	int FRow;
	int FOrigCol;
	int FOrigRow;
	System::UnicodeString FText;
	Xc12datastylesheet5::TXc12DynFontRunArray FFontRuns;
	Xc12datastylesheet5::TXc12DynPhoneticRunArray FPhoneticRuns;
	TXc12Author* FAuthor;
	System::UnicodeString FGUID;
	Xpgpsimpledom::TXpgDOMNode* FVML;
	int FAuthorId;
	int FCol1;
	int FCol1Offs;
	int FRow1;
	int FRow1Offs;
	int FCol2;
	int FCol2Offs;
	int FRow2;
	int FRow2Offs;
	unsigned FColor;
	
public:
	__fastcall TXc12Comment(TXc12Comments* AOwner);
	__fastcall virtual ~TXc12Comment();
	void __fastcall Assign(TXc12Comment* AComment);
	int __fastcall Count();
	void __fastcall ClearFontRuns();
	Xc12datastylesheet5::PXc12FontRun __fastcall AddFontRun();
	void __fastcall AssignFontRuns(const Xc12datastylesheet5::TXc12DynFontRunArray ARuns);
	void __fastcall SetDefault();
	void __fastcall UpdateVML();
	__property int Col = {read=FCol, write=SetCol, nodefault};
	__property int Row = {read=FRow, write=SetRow, nodefault};
	__property Xc12utils5::TXLSCellArea Ref = {read=GetRef};
	__property System::UnicodeString Text = {read=FText, write=FText};
	__property Xc12datastylesheet5::TXc12DynFontRunArray FontRuns = {read=FFontRuns, write=FFontRuns};
	__property Xc12datastylesheet5::TXc12DynPhoneticRunArray PhoneticRuns = {read=FPhoneticRuns, write=FPhoneticRuns};
	__property TXc12Author* Author = {read=FAuthor, write=SetAuthor};
	__property int AuthorId = {read=FAuthorId, write=FAuthorId, nodefault};
	__property int TempAuthorId = {read=GetTempAuthorId, write=SetTempAuthorId, nodefault};
	__property System::UnicodeString GUID = {read=FGUID, write=FGUID};
	__property Xpgpsimpledom::TXpgDOMNode* VML = {read=FVML, write=FVML};
	__property int Col1 = {read=FCol1, write=FCol1, nodefault};
	__property int Col1Offs = {read=FCol1Offs, write=FCol1Offs, nodefault};
	__property int Row1 = {read=FRow1, write=FRow1, nodefault};
	__property int Row1Offs = {read=FRow1Offs, write=FRow1Offs, nodefault};
	__property int Col2 = {read=FCol2, write=FCol2, nodefault};
	__property int Col2Offs = {read=FCol2Offs, write=FCol2Offs, nodefault};
	__property int Row2 = {read=FRow2, write=FRow2, nodefault};
	__property int Row2Offs = {read=FRow2Offs, write=FRow2Offs, nodefault};
	__property unsigned Color = {read=FColor, write=FColor, nodefault};
	__property Xc12datastylesheet5::TXc12FontRun Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12Comments : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXc12Comment* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12Comment* __fastcall GetItems(int Index);
	
protected:
	Xc12datastylesheet5::TXc12DataStyleSheet* FStyles;
	TXc12Authors* FAuthors;
	
public:
	__fastcall TXc12Comments(Xc12datastylesheet5::TXc12DataStyleSheet* AStyleSheet);
	__fastcall virtual ~TXc12Comments();
	HIDESBASE void __fastcall Assign(TXc12Comments* AComments);
	virtual void __fastcall Clear();
	TXc12Comment* __fastcall Find(const int ACol, const int ARow);
	HIDESBASE TXc12Comment* __fastcall Add();
	__property TXc12Authors* Authors = {read=FAuthors};
	__property TXc12Comment* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xc12datacomments5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XC12DATACOMMENTS5)
using namespace Xc12datacomments5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xc12datacomments5HPP
