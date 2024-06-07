// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Xc12Graphics.pas' rev: 35.00 (Windows)

#ifndef Xc12graphicsHPP
#define Xc12graphicsHPP

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
#include <Vcl.Graphics.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Xc12Utils5.hpp>
#include <XLSUtils5.hpp>
#include <XLSReadWriteOPC5.hpp>
#include <XLSRelCells5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xc12graphics
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXc12GraphicImage;
class DELPHICLASS TXc12GraphicImages;
class DELPHICLASS TXc12GraphicManager;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TXc12ImageType : unsigned char { x12itJPEG, x12itPNG, x12itEMF, x12itWMF, x12itGIF, x12itUnknown };

typedef System::StaticArray<System::UnicodeString, 6> Xc12graphics__1;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12GraphicImage : public Xlsutils5::TIndexObject
{
	typedef Xlsutils5::TIndexObject inherited;
	
protected:
	System::UnicodeString FDrawingRId;
	System::UnicodeString FRId;
	int FRefCount;
	TXc12ImageType FImageType;
	void *FImage;
	int FImageSize;
	System::UnicodeString FFileId;
	System::UnicodeString FDescr;
	bool FWritten;
	int FWidth;
	int FHeight;
	bool FWasLoadedFromStream;
	
public:
	__fastcall TXc12GraphicImage();
	__fastcall virtual ~TXc12GraphicImage();
	Vcl::Graphics::TBitmap* __fastcall CreateBitmap();
	void __fastcall IncRefCount();
	void __fastcall DecRefCount();
	System::UnicodeString __fastcall TypeExt();
	System::UnicodeString __fastcall UniqueName();
	__property System::UnicodeString DrawingRId = {read=FDrawingRId, write=FDrawingRId};
	__property System::UnicodeString RId = {read=FRId, write=FRId};
	__property TXc12ImageType ImageType = {read=FImageType, nodefault};
	__property void * Image = {read=FImage};
	__property int ImageSize = {read=FImageSize, nodefault};
	__property System::UnicodeString FileId = {read=FFileId};
	__property System::UnicodeString Descr = {read=FDescr, write=FDescr};
	__property int Width = {read=FWidth, write=FWidth, nodefault};
	__property int Heigh = {read=FHeight, write=FHeight, nodefault};
	__property bool Written = {read=FWritten, write=FWritten, nodefault};
	__property bool WasLoadedFromStream = {read=FWasLoadedFromStream, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12GraphicImages : public Xlsutils5::TIndexObjectList
{
	typedef Xlsutils5::TIndexObjectList inherited;
	
public:
	TXc12GraphicImage* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXc12GraphicImage* __fastcall GetItems(int Index);
	
protected:
	Xlsutils5::TXLSErrorManager* FErrors;
	bool __fastcall GetImageSize(System::Classes::TStream* AImage, TXc12ImageType AType, /* out */ int &AWidth, /* out */ int &AHeight);
	
public:
	__fastcall TXc12GraphicImages(Xlsutils5::TXLSErrorManager* AErrors);
	TXc12GraphicImage* __fastcall FindByRId(const System::UnicodeString ADrawingId, const System::UnicodeString AId);
	TXc12GraphicImage* __fastcall FindByFileId(const System::UnicodeString AId);
	TXc12GraphicImage* __fastcall FindByDescr(const System::UnicodeString ADescr);
	TXc12ImageType __fastcall TypeFromExt(System::UnicodeString AExt);
	System::UnicodeString __fastcall ExtFromType(TXc12ImageType AType);
	void __fastcall Xc12_Add(System::Classes::TStream* AStream, System::UnicodeString AImageExt, System::UnicodeString AFileId, System::UnicodeString ADrawingRId, System::UnicodeString ARId);
	HIDESBASE TXc12GraphicImage* __fastcall Add(System::Classes::TStream* AStream, TXc12ImageType AImageType)/* overload */;
	TXc12GraphicImage* __fastcall LoadFromFile(const System::UnicodeString AFilename);
	TXc12GraphicImage* __fastcall LoadFromStream(System::Classes::TStream* AStream, const System::UnicodeString AFilename);
	HIDESBASE void __fastcall Delete(TXc12GraphicImage* AImage);
	void __fastcall SetWritten(const bool AValue);
	__property TXc12GraphicImage* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXc12GraphicImages() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXc12GraphicManager : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xlsutils5::TXLSErrorManager* FErrors;
	TXc12GraphicImages* FImages;
	Xlsreadwriteopc5::TOPC_XLSX* FXLSOPC;
	
public:
	__fastcall TXc12GraphicManager(Xlsutils5::TXLSErrorManager* AErrors);
	__fastcall virtual ~TXc12GraphicManager();
	void __fastcall Clear();
	void __fastcall BeforeWrite();
	System::UnicodeString __fastcall SaveImageToOPC(TXc12GraphicImage* AImage);
	virtual Xlsrelcells5::TXLSRelCells* __fastcall CreateRelativeCells(System::UnicodeString ARef);
	__property TXc12GraphicImages* Images = {read=FImages};
	__property Xlsreadwriteopc5::TOPC_XLSX* XLSOPC = {read=FXLSOPC, write=FXLSOPC};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Xc12graphics__1 Xc12ImageTypeStr;
}	/* namespace Xc12graphics */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XC12GRAPHICS)
using namespace Xc12graphics;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xc12graphicsHPP
