// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XSSIERenderTextIE.pas' rev: 35.00 (Windows)

#ifndef XssierendertextieHPP
#define XssierendertextieHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <XBookPaintGDI2.hpp>
#include <XSSIEUtils.hpp>
#include <XSSIELogPhyPosition.hpp>
#include <XSSIEGDIText.hpp>
#include <XSSIEDocProps.hpp>
#include <XSSIELogParas.hpp>
#include <XSSIELogEditor.hpp>
#include <XSSIEPhyRow.hpp>
#include <XSSIECaretRow.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xssierendertextie
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAXWTextRender;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TAXWTextRender : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xbookpaintgdi2::TAXWGDI* FGDI;
	Xssielogeditor::TAXWLogDocEditor* FDoc;
	Xssieutils::TAXWClientArea* FArea;
	Xssiedocprops::TAXWDOP* FDOP;
	Xssiegditext::TAXWTextPrint* FTextPrint;
	Xssiecaretrow::TAXWCaretRowEditor* FCaretRow;
	Xssieutils::TAXWVertAlign FVertAlign;
	void __fastcall SetupText();
	int __fastcall ParasHeight();
	
public:
	__fastcall TAXWTextRender(Xbookpaintgdi2::TAXWGDI* AGDI, Xssielogeditor::TAXWLogDocEditor* ADoc, Xssiecaretrow::TAXWCaretRowEditor* ACaretRow, Xssieutils::TAXWClientArea* AArea);
	__fastcall virtual ~TAXWTextRender();
	int __fastcall CalcOriginY();
	void __fastcall Render();
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xssierendertextie */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XSSIERENDERTEXTIE)
using namespace Xssierendertextie;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XssierendertextieHPP
