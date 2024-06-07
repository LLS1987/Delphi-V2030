// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSComment5.pas' rev: 35.00 (Windows)

#ifndef Xlscomment5HPP
#define Xlscomment5HPP

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
#include <Xc12Utils5.hpp>
#include <Xc12Manager5.hpp>
#include <Xc12DataComments5.hpp>
#include <Xc12DataStyleSheet5.hpp>
#include <XLSUtils5.hpp>
#include <XLSColumn5.hpp>
#include <XLSRow5.hpp>
#include <XLSTools5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlscomment5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSCommentFont;
class DELPHICLASS TXLSComment;
class DELPHICLASS TXLSComments;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSCommentFont : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::UnicodeString FName;
	int FSize;
	bool FBold;
	bool FItalic;
	
public:
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property int Size = {read=FSize, write=FSize, nodefault};
	__property bool Bold = {read=FBold, write=FBold, nodefault};
	__property bool Italic = {read=FItalic, write=FItalic, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXLSCommentFont() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSCommentFont() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSComment : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString __fastcall GetAuthor();
	int __fastcall GetCol();
	System::UnicodeString __fastcall GetPlainText();
	int __fastcall GetRow();
	void __fastcall SetAuthor(const System::UnicodeString Value);
	void __fastcall SetCol(const int Value);
	void __fastcall SetPlainText(const System::UnicodeString Value);
	void __fastcall SetRow(const int Value);
	bool __fastcall GetVisible();
	System::UnicodeString __fastcall GetPlainTextNoAuthor();
	
protected:
	bool FAutoVisible;
	TXLSComments* FOwner;
	Xc12datacomments5::TXc12Comment* FXc12Comment;
	
public:
	__fastcall TXLSComment(Xc12datacomments5::TXc12Comment* AXc12Comment, TXLSComments* AOwner);
	__fastcall virtual ~TXLSComment();
	__property int Col = {read=GetCol, write=SetCol, nodefault};
	__property int Row = {read=GetRow, write=SetRow, nodefault};
	__property System::UnicodeString Author = {read=GetAuthor, write=SetAuthor};
	__property System::UnicodeString PlainText = {read=GetPlainText, write=SetPlainText};
	__property System::UnicodeString PlainTextNoAuthor = {read=GetPlainTextNoAuthor};
	__property bool Visible = {read=GetVisible, nodefault};
	__property bool AutoVisible = {read=FAutoVisible, write=FAutoVisible, nodefault};
	__property Xc12datacomments5::TXc12Comment* Xc12Comment = {read=FXc12Comment};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSComments : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TXLSComment* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXLSComment* __fastcall GetItems(int Index);
	System::UnicodeString __fastcall GetAsPlainText(const int ACol, const int ARow);
	System::UnicodeString __fastcall GetAsSimpleTags(const int ACol, const int ARow);
	void __fastcall SetAsPlainText(const int ACol, const int ARow, const System::UnicodeString Value);
	void __fastcall SetAsSimpleTags(const int ACol, const int ARow, const System::UnicodeString Value);
	
protected:
	Xc12manager5::TXc12Manager* FManager;
	Xc12datastylesheet5::TXc12DataStyleSheet* FStyleSheet;
	System::UnicodeString FAuthor;
	System::Contnrs::TObjectList* FItems;
	Xc12datacomments5::TXc12Comments* FXc12Comments;
	TXLSCommentFont* FHeadingFont;
	TXLSCommentFont* FFont;
	TXLSComment* __fastcall Add(Xc12datacomments5::TXc12Comment* AXc12Comment)/* overload */;
	TXLSComment* __fastcall AddSimpleTags(const int ACol, const int ARow, const System::UnicodeString AText);
	
public:
	__fastcall TXLSComments(Xc12manager5::TXc12Manager* AManager, Xc12datacomments5::TXc12Comments* AXc12Comments);
	__fastcall virtual ~TXLSComments();
	void __fastcall Assign(TXLSComments* AComments);
	void __fastcall Clear();
	void __fastcall ColWidthChanged(const int ACol1, const int ACol2);
	TXLSComment* __fastcall Find(const int ACol, const int ARow);
	int __fastcall FindIndex(const int ACol, const int ARow);
	int __fastcall Count();
	TXLSComment* __fastcall Add()/* overload */;
	TXLSComment* __fastcall Add(const int ACol, const int ARow, const System::UnicodeString AText)/* overload */;
	TXLSComment* __fastcall Add(const int ACol, const int ARow, const System::UnicodeString AAuthor, const System::UnicodeString AText)/* overload */;
	void __fastcall Delete(const int AIndex)/* overload */;
	void __fastcall Delete(const int ACol, const int ARow)/* overload */;
	void __fastcall Delete(const int ACol1, const int ARow1, const int ACol2, const int ARow2)/* overload */;
	void __fastcall Font(const System::UnicodeString AName, int ASize, bool ABold, bool AItalic);
	void __fastcall HeadingFont(const System::UnicodeString AName, int ASize, bool ABold, bool AItalic);
	void __fastcall ClearFont();
	void __fastcall ClearHeadingFont();
	__property TXLSComment* Items[int Index] = {read=GetItems/*, default*/};
	__property System::UnicodeString DefaultAuthor = {read=FAuthor, write=FAuthor};
	__property System::UnicodeString AsPlainText[const int ACol][const int ARow] = {read=GetAsPlainText, write=SetAsPlainText};
	__property System::UnicodeString AsSimpleTags[const int ACol][const int ARow] = {read=GetAsSimpleTags, write=SetAsSimpleTags};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xlscomment5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSCOMMENT5)
using namespace Xlscomment5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlscomment5HPP
