// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSHTMLTypes5.pas' rev: 35.00 (Windows)

#ifndef Xlshtmltypes5HPP
#define Xlshtmltypes5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.IniFiles.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlshtmltypes5
{
//-- forward type declarations -----------------------------------------------
struct TElementAttribute;
struct THTMLElement;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM THTMLElementID : unsigned char { heTEXT, heDOCUMENT, heA, heABBR, heACRONYM, heADDRESS, heAPPLET, heAREA, heB, heBASE, heBASEFONT, heBDO, heBIG, heBLOCKQUOTE, heBODY, heBR, heBUTTON, heCAPTION, heCENTER, heCITE, heCODE, heCOL, heCOLGROUP, heDD, heDEL, heDFN, heDIR, heDIV, heDL, heDT, heEM, heFIELDSET, heFONT, heFORM, heFRAME, heFRAMESET, heH1, heH2, heH3, heH4, heH5, heH6, heHEAD, heHR, heHTML, heI, heIFRAME, heILAYER, heIMG, heINPUT, heINS, heISINDEX, heKBD, heLABEL, heLAYER, heLEGEND, heLI, heLINK, heMAP, heMENU, heMETA, heNOFRAMES, heNOLAYER, heNOSCRIPT, heOBJECT, heOL, heOPTGROUP, heOPTION, heP, hePARAM, hePRE, heQ, heS, heSAMP, heSCRIPT, heSELECT, heSMALL, heSPAN, heSTRIKE, heSTRONG, heSTYLE, heSUB, heSUP, heTABLE, heTBODY, heTD, 
	heTEXTAREA, heTFOOT, heTH, heTHEAD, heTITLE, heTR, heTT, heU, heUL, heVAR, heDOCTYPE, heUNKNOWN, heEOF, heBeginEndtags, heEndTEXT, heEndDOCUMENT, heEndA, heEndABBR, heEndACRONYM, heEndADDRESS, heEndAPPLET, heEndAREA, heEndB, heEndBASE, heEndBASEFONT, heEndBDO, heEndBIG, heEndBLOCKQUOTE, heEndBODY, heEndBR, heEndBUTTON, heEndCAPTION, heEndCENTER, heEndCITE, heEndCODE, heEndCOL, heEndCOLGROUP, heEndDD, heEndDEL, heEndDFN, heEndDIR, heEndDIV, heEndDL, heEndDT, heEndEM, heEndFIELDSET, heEndFONT, heEndFORM, heEndFRAME, heEndFRAMESET, heEndH1, heEndH2, heEndH3, heEndH4, heEndH5, heEndH6, heEndHEAD, heEndHR, heEndHTML, heEndI, heEndIFRAME, heEndILAYER, heEndIMG, heEndINPUT, heEndINS, heEndISINDEX, heEndKBD, heEndLABEL, heEndLAYER, heEndLEGEND, heEndLI, heEndLINK, 
	heEndMAP, heEndMENU, heEndMETA, heEndNOFRAMES, heEndNOLAYER, heEndNOSCRIPT, heEndOBJECT, heEndOL, heEndOPTGROUP, heEndOPTION, heEndP, heEndPARAM, heEndPRE, heEndQ, heEndS, heEndSAMP, heEndSCRIPT, heEndSELECT, heEndSMALL, heEndSPAN, heEndSTRIKE, heEndSTRONG, heEndSTYLE, heEndSUB, heEndSUP, heEndTABLE, heEndTBODY, heEndTD, heEndTEXTAREA, heEndTFOOT, heEndTH, heEndTHEAD, heEndTITLE, heEndTR, heEndTT, heEndU, heEndUL, heEndVAR, heEndDOCTYPE, heEndUNKNOWN, heEndEOF };

enum DECLSPEC_DENUM TElementAttributeID : unsigned char { eaAbbr, eaAcceptCharset, eaAccept, eaAccesskey, eaAction, eaAlign, eaAlt, eaArchive, eaAxis, eaBackground, eaBgcolor, eaBorder, eaCellpadding, eaChar, eaCharoff, eaCharset, eaChecked, eaCite, eaClass, eaClassid, eaClear, eaCode, eaCodebase, eaCodetype, eaColor, eaCols, eaColspan, eaCompact, eaContent, eaCoords, eaData, eaDatetime, eaDeclare, eaDefer, eaDir, eaDisabled, eaEnctype, eaFace, eaFor, eaFrame, eaFrameborder, eaHeaders, eaHeight, eaHref, eaHreflang, eaHspace, eaHttpEquiv, eaId, eaIsmap, eaLabel, eaLang, eaLanguage, eaLink, eaLeftmargin, eaLongdesc, eaMarginheight, eaMarginwidth, eaMaxlength, eaMedia, eaMethod, eaMultiple, eaName, eaNoHref, eaNoResize, eaNoShade, eaNoWrap, eaObject, eaOnBlur, 
	eaOnChange, eaOnClick, eaOnDblclick, eaOnFocus, eaOnKeydown, eaOnKeypress, eaOnKeyup, eaOnLoad, eaOnMousedown, eaOnMousemove, eaOnMouseout, eaOnMouseover, eaOnMouseup, eaOnReset, eaOnSelect, eaOnSubmit, eaOnUnload, eaProfile, eaPrompt, eaAdonl, eaRel, eaRev, eaRows, eaRowspan, eaRules, eaScheme, eaScope, eaScrolling, eaSelected, eaShape, eaSize, eaSpan, eaSrc, eaStandby, eaStart, eaStyle, eaSummary, eaTabindex, eaTarget, eaText, eaTitle, eaTopmargin, eaType, eaUsemap, eaValign, eaValue, eaValuetype, eaVersion, eaVlink, eaVspace, eaWidth, eaUnknown };

enum DECLSPEC_DENUM TAttrAlign : unsigned char { aaLeft, aaCenter, aaRight, aaJustify, aaChar, aaTop, aaMiddle, aaBottom };

enum DECLSPEC_DENUM TElementFlag : unsigned char { efEndtag };

typedef System::Set<TElementFlag, TElementFlag::efEndtag, TElementFlag::efEndtag> TElementFlags;

enum DECLSPEC_DENUM TAttributeType : unsigned char { atString, atNumber, atPercent, atColor, atAlign };

typedef TElementAttribute *PElementAttribute;

struct DECLSPEC_DRECORD TElementAttribute
{
public:
	TElementAttributeID ID;
	
public:
	TAttributeType AttType;
	union
	{
		struct 
		{
			TAttrAlign AlignVal;
		};
		struct 
		{
			unsigned ColorVal;
		};
		struct 
		{
			int PercentVal;
		};
		struct 
		{
			int NumVal;
		};
		struct 
		{
			System::WideChar *StrVal;
		};
		
	};
};


struct DECLSPEC_DRECORD THTMLElement
{
	
private:
	typedef System::DynamicArray<TElementAttribute> _THTMLElement__1;
	
	
public:
	THTMLElementID ID;
	_THTMLElement__1 Attributes;
};


typedef System::DynamicArray<THTMLElement> THTMLElementArray;

typedef THTMLElementArray *PHTMLElementArray;

typedef System::StaticArray<System::UnicodeString, 99> Xlshtmltypes5__1;

typedef System::StaticArray<System::UnicodeString, 120> Xlshtmltypes5__2;

enum DECLSPEC_DENUM THTMLAlign : unsigned char { haLeft, haCenter, haRight };

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Xlshtmltypes5__1 ElementNames;
extern DELPHI_PACKAGE Xlshtmltypes5__2 AttributeNames;
extern DELPHI_PACKAGE System::Inifiles::THashedStringList* HTMLColors;
extern DELPHI_PACKAGE System::Inifiles::THashedStringList* HTMLElements;
extern DELPHI_PACKAGE System::Inifiles::THashedStringList* HTMLAttributes;
}	/* namespace Xlshtmltypes5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSHTMLTYPES5)
using namespace Xlshtmltypes5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlshtmltypes5HPP
