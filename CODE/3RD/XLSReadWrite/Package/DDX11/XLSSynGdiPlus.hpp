// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSSynGdiPlus.pas' rev: 35.00 (Windows)

#ifndef XlssyngdiplusHPP
#define XlssyngdiplusHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlssyngdiplus
{
//-- forward type declarations -----------------------------------------------
struct TGdipRect;
struct TGdipRectF;
struct TGdipPointF;
struct TGdipBitmapData;
class DELPHICLASS TSynLibrary;
class DELPHICLASS TGDIPlus;
class DELPHICLASS TSynPicture;
class DELPHICLASS TPngImage;
class DELPHICLASS TJpegImage;
class DELPHICLASS TGifImage;
class DELPHICLASS TTiffImage;
class DELPHICLASS TGDIPlusFull;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TSmoothingMode : unsigned int { smDefault, smHighSpeed, smHighQuality, smNone, smAntiAlias };

enum DECLSPEC_DENUM TTextRenderingHint : unsigned int { trhDefault, trhSingleBitPerPixelGridFit, trhSingleBitPerPixel, trhAntiAliasGridFit, trhAntiAlias, trhClearTypeGridFit };

enum DECLSPEC_DENUM TUnit : unsigned int { uWorld, uDisplay, uPixel, uPoint, uInch, uDocument, uMillimeter, uGdi };

enum DECLSPEC_DENUM TEmfType : unsigned int { etEmf0, etEmf1, etEmf2, etEmfOnly, etEmfPlusOnly, etEmfPlusDual };

enum DECLSPEC_DENUM TFillMode : unsigned int { fmAlternate, fmWinding };

enum DECLSPEC_DENUM TLockModeOption : unsigned int { lmRead, lmWrite, lmUserInputBuf };

typedef System::Set<TLockModeOption, TLockModeOption::lmRead, TLockModeOption::lmUserInputBuf> TLockModeOptions;

enum DECLSPEC_DENUM TGdipStatus : unsigned int { stOk, stGenericError, stInvalidParameter, stOutOfMemory, stObjectBusy, stInsufficientBuffer, stNotImplemented, stWin32Error, stWrongState, stAborted, stFileNotFound, stValueOverflow, stAccessDenied, stUnknownImageFormat, stFontFamilyNotFound, stFontStyleNotFound, stNotTrueTypeFont, stUnsupportedGdiplusVersion, stGdiplusNotInitialized, stPropertyNotFound, stPropertyNotSupported };

typedef TGdipRect *PGdipRect;

struct DECLSPEC_DRECORD TGdipRect
{
public:
	int X;
	int Y;
	int Width;
	int Height;
};


typedef TGdipRectF *PGdipRectF;

struct DECLSPEC_DRECORD TGdipRectF
{
public:
	float X;
	float Y;
	float Width;
	float Height;
};


typedef TGdipPointF *PGdipPointF;

struct DECLSPEC_DRECORD TGdipPointF
{
public:
	float X;
	float Y;
};


typedef System::StaticArray<TGdipPointF, 1001> TGdipPointFArray;

typedef TGdipPointFArray *PGdipPointFArray;

struct DECLSPEC_DRECORD TGdipBitmapData
{
public:
	unsigned Width;
	unsigned Height;
	int Stride;
	int PixelFormat;
	void *Scan0;
	unsigned Reserved;
};


typedef TGdipBitmapData *PGdipBitmapData;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSynLibrary : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	NativeUInt fHandle;
	__classmethod NativeUInt __fastcall Load(const System::Sysutils::TFileName aDllFileName, System::PPointer Addr, System::PPWideChar Names);
	void __fastcall UnLoad();
	
public:
	bool __fastcall Exists();
public:
	/* TObject.Create */ inline __fastcall TSynLibrary() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TSynLibrary() { }
	
};

#pragma pack(pop)

typedef int __stdcall (*TGDIPlusHookProc)(/* out */ NativeUInt &token);

typedef void __stdcall (*TGDIPlusUnhookProc)(NativeUInt token);

#pragma pack(push,1)
class PASCALIMPLEMENTATION TGDIPlus : public TSynLibrary
{
	typedef TSynLibrary inherited;
	
	
private:
	struct DECLSPEC_DRECORD _TGDIPlus__1
	{
	public:
		TGDIPlusHookProc Hook;
		TGDIPlusUnhookProc Unhook;
	};
	
	
	
protected:
	TGdipStatus __stdcall (*Startup)(NativeUInt &Token, void *Input, void *Output);
	void __stdcall (*Shutdown)(NativeUInt Token);
	TGdipStatus __stdcall (*DeleteGraphics)(NativeUInt graphics);
	TGdipStatus __stdcall (*CreateFromHDC)(HDC hdc, /* out */ NativeUInt &Graphics);
	TGdipStatus __stdcall (*LoadImageFromStream)(_di_IStream stream, /* out */ NativeUInt &image);
	TGdipStatus __stdcall (*LoadImageFromFile)(System::WideChar * filename, /* out */ NativeUInt &image);
	TGdipStatus __stdcall (*DrawImageRect)(NativeUInt graphics, NativeUInt image, int x, int y, int width, int height);
	TGdipStatus __stdcall (*DrawImageRectRect)(NativeUInt graphics, NativeUInt image, int xd, int yd, int wd, int hd, int xs, int ys, int ws, int hs, TUnit u/* = (TUnit)(0x2)*/, int imageAttributes/* = 0x0*/, void * callback/* = (void *)(0x0)*/, void * calldata/* = (void *)(0x0)*/);
	TGdipStatus __stdcall (*DisposeImage)(NativeUInt image);
	TGdipStatus __stdcall (*GetImageRawFormat)(NativeUInt image, GUID &format);
	TGdipStatus __stdcall (*GetImageWidth)(NativeUInt image, unsigned &width);
	TGdipStatus __stdcall (*GetImageHeight)(NativeUInt image, unsigned &height);
	TGdipStatus __stdcall (*SaveImageToStream)(NativeUInt image, _di_IStream stream, System::PGUID clsidEncoder, void * encoderParams);
	TGdipStatus __stdcall (*CreateBitmapFromHBITMAP)(HBITMAP hbm, HPALETTE hpal, /* out */ NativeUInt &bitmap);
	TGdipStatus __stdcall (*CreateBitmapFromGdiDib)(void * bmi, void * bits, /* out */ NativeUInt &bitmap);
	TGdipStatus __stdcall (*BitmapSetResolution)(NativeUInt bitmap, float XDPI, float YDPI);
	TGdipStatus __stdcall (*GetFrameCount)(NativeUInt image, System::PGUID dimensionID, unsigned &count);
	TGdipStatus __stdcall (*SelectActiveFrame)(NativeUInt image, System::PGUID dimensionID, unsigned frameIndex);
	NativeUInt fToken;
	_TGDIPlus__1 fStartupHook;
	NativeUInt fStartupHookToken;
	
public:
	__fastcall TGDIPlus(const System::Sysutils::TFileName aDllFileName);
	void __fastcall RegisterPictures();
	virtual void __fastcall DrawAntiAliased(Vcl::Graphics::TMetafile* Source, HDC Dest, const System::Types::TRect &R, TSmoothingMode aSmoothing = (TSmoothingMode)(0x4), TTextRenderingHint aTextRendering = (TTextRenderingHint)(0x5))/* overload */;
	Vcl::Graphics::TBitmap* __fastcall DrawAntiAliased(Vcl::Graphics::TMetafile* Source, int ScaleX = 0x64, int ScaleY = 0x64, TSmoothingMode aSmoothing = (TSmoothingMode)(0x4), TTextRenderingHint aTextRendering = (TTextRenderingHint)(0x5))/* overload */;
	__fastcall virtual ~TGDIPlus();
};

#pragma pack(pop)

enum DECLSPEC_DENUM TGDIPPictureType : unsigned int { gptGIF, gptPNG, gptJPG, gptBMP, gptTIF };

enum DECLSPEC_DENUM TGDIPPEncoderValue : unsigned int { evColorTypeCMYK, evColorTypeYCCK, evCompressionLZW, evCompressionCCITT3, evCompressionCCITT4, evCompressionRle, evCompressionNone, evScanMethodInterlaced, evScanMethodNonInterlaced, evVersionGif87, evVersionGif89, evRenderProgressive, evRenderNonProgressive, evTransformRotate90, evTransformRotate180, evTransformRotate270, evTransformFlipHorizontal, evTransformFlipVertical, evMultiFrame, evLastFrame, evFlush, evFrameDimensionTime, evFrameDimensionResolution, evFrameDimensionPage };

class PASCALIMPLEMENTATION TSynPicture : public Vcl::Graphics::TGraphic
{
	typedef Vcl::Graphics::TGraphic inherited;
	
protected:
	bool fHasContent;
	unsigned fHeight;
	unsigned fWidth;
	NativeUInt fImage;
	_di_IStream fStream;
	NativeUInt fGlobal;
	int fGlobalLen;
	bool fAssignedFromBitmap;
	virtual bool __fastcall GetEmpty();
	virtual int __fastcall GetHeight();
	virtual int __fastcall GetWidth();
	virtual void __fastcall SetHeight(int Value);
	virtual void __fastcall SetWidth(int Value);
	void __fastcall Clear();
	void __fastcall fImageSet();
	void __fastcall BitmapSetResolution(float DPI);
	
public:
	__fastcall TSynPicture(const System::UnicodeString FileName);
	__fastcall virtual ~TSynPicture();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &Rect);
	TGdipStatus __fastcall LoadFromIStream(_di_IStream Stream);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromFile(const System::UnicodeString FileName);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall SaveInternalToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromResourceName(NativeUInt Instance, const System::UnicodeString ResName);
	virtual void __fastcall LoadFromClipboardFormat(System::Word AFormat, NativeUInt AData, HPALETTE APalette);
	virtual void __fastcall SaveToClipboardFormat(System::Word &AFormat, NativeUInt &AData, HPALETTE &APalette);
	TGdipStatus __fastcall SaveAs(System::Classes::TStream* Stream, TGDIPPictureType Format, int CompressionQuality = 0x50, float IfBitmapSetResolution = 0.000000E+00f);
	Vcl::Graphics::TBitmap* __fastcall ToBitmap();
	TGDIPPictureType __fastcall GetImageFormat();
	__classmethod Vcl::Graphics::TGraphicClass __fastcall IsPicture(const System::Sysutils::TFileName FileName);
	System::Types::TRect __fastcall RectNotBiggerThan(int MaxPixelsForBiggestSide);
	__property NativeUInt NativeImage = {read=fImage, nodefault};
public:
	/* TGraphic.Create */ inline __fastcall virtual TSynPicture()/* overload */ : Vcl::Graphics::TGraphic() { }
	
};


class PASCALIMPLEMENTATION TPngImage : public TSynPicture
{
	typedef TSynPicture inherited;
	
public:
	/* TSynPicture.CreateFromFile */ inline __fastcall TPngImage(const System::UnicodeString FileName) : TSynPicture(FileName) { }
	/* TSynPicture.Destroy */ inline __fastcall virtual ~TPngImage() { }
	
public:
	/* TGraphic.Create */ inline __fastcall virtual TPngImage()/* overload */ : TSynPicture() { }
	
};


class PASCALIMPLEMENTATION TJpegImage : public TSynPicture
{
	typedef TSynPicture inherited;
	
protected:
	int fCompressionQuality;
	
public:
	__fastcall virtual TJpegImage()/* overload */;
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	__property int CompressionQuality = {read=fCompressionQuality, write=fCompressionQuality, nodefault};
public:
	/* TSynPicture.CreateFromFile */ inline __fastcall TJpegImage(const System::UnicodeString FileName) : TSynPicture(FileName) { }
	/* TSynPicture.Destroy */ inline __fastcall virtual ~TJpegImage() { }
	
};


class PASCALIMPLEMENTATION TGifImage : public TSynPicture
{
	typedef TSynPicture inherited;
	
public:
	/* TSynPicture.CreateFromFile */ inline __fastcall TGifImage(const System::UnicodeString FileName) : TSynPicture(FileName) { }
	/* TSynPicture.Destroy */ inline __fastcall virtual ~TGifImage() { }
	
public:
	/* TGraphic.Create */ inline __fastcall virtual TGifImage()/* overload */ : TSynPicture() { }
	
};


class PASCALIMPLEMENTATION TTiffImage : public TSynPicture
{
	typedef TSynPicture inherited;
	
protected:
	int fActivePage;
	void __fastcall SelectPage(int index);
	
public:
	void __fastcall ExtractPage(int index, Vcl::Graphics::TBitmap* wBMP);
	int __fastcall GetPageCount();
	__property int ActivePageIndex = {read=fActivePage, write=SelectPage, nodefault};
public:
	/* TSynPicture.CreateFromFile */ inline __fastcall TTiffImage(const System::UnicodeString FileName) : TSynPicture(FileName) { }
	/* TSynPicture.Destroy */ inline __fastcall virtual ~TTiffImage() { }
	
public:
	/* TGraphic.Create */ inline __fastcall virtual TTiffImage()/* overload */ : TSynPicture() { }
	
};


enum DECLSPEC_DENUM TGDIPCombineMode : unsigned int { cmReplace, cmIntersect, cmUnion, cmXor, cmExclude, cmComplement };

#pragma pack(push,1)
class PASCALIMPLEMENTATION TGDIPlusFull : public TGDIPlus
{
	typedef TGDIPlus inherited;
	
protected:
	TGdipStatus __stdcall (*DrawLine)(NativeUInt graphics, NativeUInt pen, int x1, int y1, int x2, int y2);
	TGdipStatus __stdcall (*CreatePen)(unsigned color, float width, TUnit units, /* out */ NativeUInt &pen);
	TGdipStatus __stdcall (*DeletePen)(NativeUInt pen);
	TGdipStatus __stdcall (*Flush)(NativeUInt graphics, int intention/* = 0x0*/);
	TGdipStatus __stdcall (*SetSmoothingMode)(NativeUInt graphics, TSmoothingMode mode);
	TGdipStatus __stdcall (*SetTextRenderingHint)(NativeUInt graphics, TTextRenderingHint mode);
	TGdipStatus __stdcall (*SetPenBrushFill)(NativeUInt Pen, NativeUInt Brush);
	TGdipStatus __stdcall (*SetPenColor)(NativeUInt Pen, unsigned Color);
	TGdipStatus __stdcall (*SetPenWidth)(NativeUInt Pen, float Width);
	TGdipStatus __stdcall (*DeleteBrush)(NativeUInt brush);
	TGdipStatus __stdcall (*CreateSolidFill)(unsigned color, NativeUInt &brush);
	TGdipStatus __stdcall (*FillRectangle)(NativeUInt graphics, NativeUInt brush, int x, int y, int width, int height);
	TGdipStatus __stdcall (*FillEllipse)(NativeUInt graphics, NativeUInt brush, int x, int y, int width, int height);
	TGdipStatus __stdcall (*DrawEllipse)(NativeUInt graphics, NativeUInt pen, int x, int y, int width, int height);
	TGdipStatus __stdcall (*DrawCurve)(NativeUInt graphics, NativeUInt pen, void * Points, int Count);
	TGdipStatus __stdcall (*GraphicsClear)(NativeUInt Graphics, unsigned Color);
	TGdipStatus __stdcall (*SetPageUnit)(NativeUInt Graphics, TUnit units);
	TGdipStatus __stdcall (*DrawRectangle)(NativeUInt Graphics, NativeUInt Pen, int X, int Y, int Width, int Height);
	TGdipStatus __stdcall (*SetPenDashStyle)(NativeUInt Pen, int dashStyle);
	TGdipStatus __stdcall (*DrawPolygon)(NativeUInt graphics, NativeUInt pen, void * points, int count);
	TGdipStatus __stdcall (*FillPolygon)(NativeUInt graphics, NativeUInt brush, void * points, int count, TFillMode fillMode);
	TGdipStatus __stdcall (*SetWorldTransform)(NativeUInt graphics, NativeUInt matrix);
	TGdipStatus __stdcall (*GetWorldTransform)(NativeUInt graphics, NativeUInt matrix);
	TGdipStatus __stdcall (*CreateMatrix)(/* out */ NativeUInt &matrix);
	TGdipStatus __stdcall (*CreateMatrix2)(float m11, float m12, float m21, float m22, float dx, float dy, /* out */ NativeUInt &matrix);
	TGdipStatus __stdcall (*DeleteMatrix)(NativeUInt matrix);
	TGdipStatus __stdcall (*SetMatrixElements)(NativeUInt matrix, float m11, float m12, float m21, float m22, float dx, float dy);
	TGdipStatus __stdcall (*MultiplyMatrix)(NativeUInt matrix, NativeUInt matrix2, int order/* = 0x0*/);
	TGdipStatus __stdcall (*ScaleMatrix)(NativeUInt matrix, float scaleX, float scaleY, int order/* = 0x0*/);
	TGdipStatus __stdcall (*TranslateMatrix)(NativeUInt matrix, float offsetX, float offsetY, int order/* = 0x0*/);
	TGdipStatus __stdcall (*DrawLines)(NativeUInt Graphics, NativeUInt Pen, void * Points, int Count);
	TGdipStatus __stdcall (*RecordMetafile)(HDC DC, TEmfType emfType, PGdipRect frameRect, TUnit frameUnit, System::WideChar * description, NativeUInt &out_metafile);
	TGdipStatus __stdcall (*RecordMetafileStream)(_di_IStream strm, HDC DC, TEmfType emfType, const TGdipRect &frameRect, TUnit frameUnit, System::WideChar * description, NativeUInt &out_metafile);
	TGdipStatus __stdcall (*PlayRecord)(NativeUInt metafile, unsigned RecType, unsigned flags, unsigned RecSize, void * Rec);
	TGdipStatus __stdcall (*EnumerateMetaFile)(NativeUInt graphics, NativeUInt metafile, PGdipRect Dest, void * callback, void * data, int imageAttributes/* = 0x0*/);
	TGdipStatus __stdcall (*ResetWorldTransform)(NativeUInt graphics);
	TGdipStatus __stdcall (*RotateTransform)(NativeUInt graphics, float angle, int order/* = 0x0*/);
	TGdipStatus __stdcall (*TranslateTransform)(NativeUInt graphics, float dx, float dy, int order/* = 0x0*/);
	TGdipStatus __stdcall (*CreateFromImage)(NativeUInt image, /* out */ NativeUInt &graphics);
	TGdipStatus __stdcall (*CreateFontFrom)(HDC aHDC, /* out */ NativeUInt &font);
	TGdipStatus __stdcall (*DeleteFont)(NativeUInt font);
	TGdipStatus __stdcall (*CreateFontFromLogfont)(HDC hdc, Winapi::Windows::PLogFontW logfont, /* out */ NativeUInt &font);
	TGdipStatus __stdcall (*DrawString)(NativeUInt graphics, System::WideChar * text, int length, NativeUInt font, PGdipRectF Dest, NativeUInt format, NativeUInt brush);
	TGdipStatus __stdcall (*MeasureString)(NativeUInt graphics, System::WideChar * text, int length, NativeUInt font, PGdipRectF Dest, NativeUInt format, PGdipRectF bound, System::PInteger codepointsFitted, System::PInteger linesFilled);
	TGdipStatus __stdcall (*DrawDriverString)(NativeUInt graphics, System::WideChar * text, int length, NativeUInt font, NativeUInt brush, PGdipPointFArray positions, int flag, NativeUInt matrix);
	TGdipStatus __stdcall (*CreatePath)(TFillMode brushmode, NativeUInt &path);
	TGdipStatus __stdcall (*DeletePath)(NativeUInt path);
	TGdipStatus __stdcall (*DrawPath)(NativeUInt graphics, NativeUInt pen, NativeUInt path);
	TGdipStatus __stdcall (*FillPath)(NativeUInt graphics, NativeUInt brush, NativeUInt path);
	TGdipStatus __stdcall (*AddPathLine)(NativeUInt path, int X1, int Y1, int X2, int Y2);
	TGdipStatus __stdcall (*AddPathLines)(NativeUInt path, void * Points, int Count);
	TGdipStatus __stdcall (*AddPathArc)(NativeUInt path, int X, int Y, int width, int height, float StartAndle, float SweepAngle);
	TGdipStatus __stdcall (*AddPathCurve)(NativeUInt path, void * Points, int Count);
	TGdipStatus __stdcall (*AddPathClosedCurve)(void);
	TGdipStatus __stdcall (*AddPathEllipse)(NativeUInt path, int X, int Y, int width, int height);
	TGdipStatus __stdcall (*AddPathPolygon)(NativeUInt path, void * Points, int Count);
	TGdipStatus __stdcall (*AddPathRectangle)(NativeUInt path, int X, int Y, int width, int height);
	TGdipStatus __stdcall (*ClosePath)(NativeUInt path);
	TGdipStatus __stdcall (*DrawArc)(NativeUInt graphics, NativeUInt pen, int X, int Y, int width, int height, float StartAndle, float SweepAngle);
	TGdipStatus __stdcall (*DrawBezier)(NativeUInt graphics, NativeUInt pen, int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4);
	TGdipStatus __stdcall (*DrawPie)(NativeUInt graphics, NativeUInt pen, int X, int Y, int width, int height, float StartAndle, float SweepAngle);
	TGdipStatus __stdcall (*CreateBitmapFromScan0)(int width, int height, int stride, int format, System::PByte scan0, /* out */ NativeUInt &bitmap);
	TGdipStatus __stdcall (*BitmapLockBits)(NativeUInt Bitmap, const PGdipRect Rect, TLockModeOptions Flags, int Format, /* out */ TGdipBitmapData &LockedBitmapData);
	TGdipStatus __stdcall (*BitmapUnlockBits)(NativeUInt Bitmap, const TGdipBitmapData &LockedBitmapData);
	TGdipStatus __stdcall (*GetClip)(NativeUInt graphics, NativeUInt Region);
	TGdipStatus __stdcall (*SetClipRegion)(NativeUInt graphics, NativeUInt region, TGDIPCombineMode CombineMode);
	TGdipStatus __stdcall (*SetClipRectI)(NativeUInt graphics, int X, int Y, int width, int height, TGDIPCombineMode CombineMode);
	TGdipStatus __stdcall (*ResetClip)(NativeUInt graphics);
	TGdipStatus __stdcall (*CreateRegion)(/* out */ NativeUInt &Region);
	TGdipStatus __stdcall (*DeleteRegion)(NativeUInt Region);
	TGdipStatus __stdcall (*fConvertToEmfPlus)(NativeUInt graphics, NativeUInt image, System::LongBool &flag, TEmfType emftype, System::WideChar * description, int &out_metafile);
	bool fConvertToEmfPlusTested;
	bool fForceInternalConvertToEmfPlus;
	bool fUseDrawString;
	bool __fastcall getNativeConvertToEmfPlus();
	
public:
	__fastcall TGDIPlusFull(System::Sysutils::TFileName aDllFileName);
	virtual void __fastcall DrawAntiAliased(Vcl::Graphics::TMetafile* Source, HDC Dest, const System::Types::TRect &R, TSmoothingMode aSmoothing = (TSmoothingMode)(0x4), TTextRenderingHint aTextRendering = (TTextRenderingHint)(0x5))/* overload */;
	NativeUInt __fastcall ConvertToEmfPlus(Vcl::Graphics::TMetafile* Source, HDC Dest, TSmoothingMode aSmoothing = (TSmoothingMode)(0x4), TTextRenderingHint aTextRendering = (TTextRenderingHint)(0x5));
	_di_IStream __fastcall MetaFileToStream(Vcl::Graphics::TMetafile* Source, /* out */ NativeUInt &hGlobal);
	__property bool NativeConvertToEmfPlus = {read=getNativeConvertToEmfPlus, nodefault};
	__property bool ForceInternalConvertToEmfPlus = {read=fForceInternalConvertToEmfPlus, write=fForceInternalConvertToEmfPlus, nodefault};
	__property bool ForceUseDrawString = {read=fUseDrawString, write=fUseDrawString, nodefault};
public:
	/* TGDIPlus.Destroy */ inline __fastcall virtual ~TGDIPlusFull() { }
	
	/* Hoisted overloads: */
	
public:
	inline Vcl::Graphics::TBitmap* __fastcall  DrawAntiAliased(Vcl::Graphics::TMetafile* Source, int ScaleX = 0x64, int ScaleY = 0x64, TSmoothingMode aSmoothing = (TSmoothingMode)(0x4), TTextRenderingHint aTextRendering = (TTextRenderingHint)(0x5)){ return TGDIPlus::DrawAntiAliased(Source, ScaleX, ScaleY, aSmoothing, aTextRendering); }
	
};

#pragma pack(pop)

typedef System::StaticArray<System::Sysutils::TFileName, 5> Xlssyngdiplus__9;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Xlssyngdiplus__9 GDIPPictureExt;
extern DELPHI_PACKAGE TGDIPlus* Gdip;
extern DELPHI_PACKAGE System::UnicodeString __fastcall PictureName(Vcl::Graphics::TGraphicClass Pic);
extern DELPHI_PACKAGE void __fastcall SaveAs(System::Classes::TPersistent* Graphic, System::Classes::TStream* Stream, TGDIPPictureType Format, int CompressionQuality = 0x50, unsigned MaxPixelsForBiggestSide = (unsigned)(0x0), float BitmapSetResolution = 0.000000E+00f)/* overload */;
extern DELPHI_PACKAGE void __fastcall SaveAs(System::Classes::TPersistent* Graphic, const System::Sysutils::TFileName FileName, TGDIPPictureType Format, int CompressionQuality = 0x50, unsigned MaxPixelsForBiggestSide = (unsigned)(0x0), float BitmapSetResolution = 0.000000E+00f)/* overload */;
extern DELPHI_PACKAGE void __fastcall SaveAsRawByteString(System::Classes::TPersistent* Graphic, /* out */ void *DataRawByteString, TGDIPPictureType Format, int CompressionQuality = 0x50, unsigned MaxPixelsForBiggestSide = (unsigned)(0x0), float BitmapSetResolution = 0.000000E+00f)/* overload */;
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall LoadFromRawByteString(const System::RawByteString Picture);
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall LoadFrom(const System::Sysutils::TFileName FileName)/* overload */;
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall LoadFrom(Vcl::Graphics::TMetafile* const MetaFile)/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawEmfGdip(HDC aHDC, Vcl::Graphics::TMetafile* Source, System::Types::TRect &R, bool ForceInternalAntiAliased, bool ForceInternalAntiAliasedFontFallBack = false);
extern DELPHI_PACKAGE void __fastcall GdipTest(const System::Sysutils::TFileName JpegFile);
}	/* namespace Xlssyngdiplus */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSSYNGDIPLUS)
using namespace Xlssyngdiplus;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XlssyngdiplusHPP
