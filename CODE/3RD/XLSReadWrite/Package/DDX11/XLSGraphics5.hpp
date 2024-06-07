// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'XLSGraphics5.pas' rev: 35.00 (Windows)

#ifndef Xlsgraphics5HPP
#define Xlsgraphics5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xlsgraphics5
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXLSPicture;
class DELPHICLASS TXLSGraphicNote;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TMSOShapeType : unsigned char { mstUnknown, mstCtrlLabel, mstCtrlButton, mstCtrlListBox, mstCtrlCheckBox, mstCtrlComboBox, mstCtrlRadioButton, mstCtrlGroupBox, mstCtrlScrollBar, mstTextBox, mstTextShape, mstNote, mstChart };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSPicture : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	bool __fastcall IsRaster();
	int __fastcall Id();
public:
	/* TObject.Create */ inline __fastcall TXLSPicture() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSPicture() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXLSGraphicNote : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool __fastcall GetAutoVisible();
	
protected:
	int FCol;
	int FRow;
	
public:
	__property int Col = {read=FCol, write=FCol, nodefault};
	__property int Row = {read=FRow, write=FRow, nodefault};
	__property bool AutoVisible = {read=GetAutoVisible, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXLSGraphicNote() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXLSGraphicNote() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 msosptMin = System::Int8(0x0);
static const System::Int8 msosptNotPrimitive = System::Int8(0x0);
static const System::Int8 msosptRectangle = System::Int8(0x1);
static const System::Int8 msosptRoundRectangle = System::Int8(0x2);
static const System::Int8 msosptEllipse = System::Int8(0x3);
static const System::Int8 msosptDiamond = System::Int8(0x4);
static const System::Int8 msosptIsocelesTriangle = System::Int8(0x5);
static const System::Int8 msosptRightTriangle = System::Int8(0x6);
static const System::Int8 msosptParallelogram = System::Int8(0x7);
static const System::Int8 msosptTrapezoid = System::Int8(0x8);
static const System::Int8 msosptHexagon = System::Int8(0x9);
static const System::Int8 msosptOctagon = System::Int8(0xa);
static const System::Int8 msosptPlus = System::Int8(0xb);
static const System::Int8 msosptStar = System::Int8(0xc);
static const System::Int8 msosptArrow = System::Int8(0xd);
static const System::Int8 msosptThickArrow = System::Int8(0xe);
static const System::Int8 msosptHomePlate = System::Int8(0xf);
static const System::Int8 msosptCube = System::Int8(0x10);
static const System::Int8 msosptBalloon = System::Int8(0x11);
static const System::Int8 msosptSeal = System::Int8(0x12);
static const System::Int8 msosptArc = System::Int8(0x13);
static const System::Int8 msosptLine = System::Int8(0x14);
static const System::Int8 msosptPlaque = System::Int8(0x15);
static const System::Int8 msosptCan = System::Int8(0x16);
static const System::Int8 msosptDonut = System::Int8(0x17);
static const System::Int8 msosptTextSimple = System::Int8(0x18);
static const System::Int8 msosptTextOctagon = System::Int8(0x19);
static const System::Int8 msosptTextHexagon = System::Int8(0x1a);
static const System::Int8 msosptTextCurve = System::Int8(0x1b);
static const System::Int8 msosptTextWave = System::Int8(0x1c);
static const System::Int8 msosptTextRing = System::Int8(0x1d);
static const System::Int8 msosptTextOnCurve = System::Int8(0x1e);
static const System::Int8 msosptTextOnRing = System::Int8(0x1f);
static const System::Int8 msosptStraightConnector1 = System::Int8(0x20);
static const System::Int8 msosptBentConnector2 = System::Int8(0x21);
static const System::Int8 msosptBentConnector3 = System::Int8(0x22);
static const System::Int8 msosptBentConnector4 = System::Int8(0x23);
static const System::Int8 msosptBentConnector5 = System::Int8(0x24);
static const System::Int8 msosptCurvedConnector2 = System::Int8(0x25);
static const System::Int8 msosptCurvedConnector3 = System::Int8(0x26);
static const System::Int8 msosptCurvedConnector4 = System::Int8(0x27);
static const System::Int8 msosptCurvedConnector5 = System::Int8(0x28);
static const System::Int8 msosptCallout1 = System::Int8(0x29);
static const System::Int8 msosptCallout2 = System::Int8(0x2a);
static const System::Int8 msosptCallout3 = System::Int8(0x2b);
static const System::Int8 msosptAccentCallout1 = System::Int8(0x2c);
static const System::Int8 msosptAccentCallout2 = System::Int8(0x2d);
static const System::Int8 msosptAccentCallout3 = System::Int8(0x2e);
static const System::Int8 msosptBorderCallout1 = System::Int8(0x2f);
static const System::Int8 msosptBorderCallout2 = System::Int8(0x30);
static const System::Int8 msosptBorderCallout3 = System::Int8(0x31);
static const System::Int8 msosptAccentBorderCallout1 = System::Int8(0x32);
static const System::Int8 msosptAccentBorderCallout2 = System::Int8(0x33);
static const System::Int8 msosptAccentBorderCallout3 = System::Int8(0x34);
static const System::Int8 msosptRibbon = System::Int8(0x35);
static const System::Int8 msosptRibbon2 = System::Int8(0x36);
static const System::Int8 msosptChevron = System::Int8(0x37);
static const System::Int8 msosptPentagon = System::Int8(0x38);
static const System::Int8 msosptNoSmoking = System::Int8(0x39);
static const System::Int8 msosptSeal8 = System::Int8(0x3a);
static const System::Int8 msosptSeal16 = System::Int8(0x3b);
static const System::Int8 msosptSeal32 = System::Int8(0x3c);
static const System::Int8 msosptWedgeRectCallout = System::Int8(0x3d);
static const System::Int8 msosptWedgeRRectCallout = System::Int8(0x3e);
static const System::Int8 msosptWedgeEllipseCallout = System::Int8(0x3f);
static const System::Int8 msosptWave = System::Int8(0x40);
static const System::Int8 msosptFoldedCorner = System::Int8(0x41);
static const System::Int8 msosptLeftArrow = System::Int8(0x42);
static const System::Int8 msosptDownArrow = System::Int8(0x43);
static const System::Int8 msosptUpArrow = System::Int8(0x44);
static const System::Int8 msosptLeftRightArrow = System::Int8(0x45);
static const System::Int8 msosptUpDownArrow = System::Int8(0x46);
static const System::Int8 msosptIrregularSeal1 = System::Int8(0x47);
static const System::Int8 msosptIrregularSeal2 = System::Int8(0x48);
static const System::Int8 msosptLightningBolt = System::Int8(0x49);
static const System::Int8 msosptHeart = System::Int8(0x4a);
static const System::Int8 msosptPictureFrame = System::Int8(0x4b);
static const System::Int8 msosptQuadArrow = System::Int8(0x4c);
static const System::Int8 msosptLeftArrowCallout = System::Int8(0x4d);
static const System::Int8 msosptRightArrowCallout = System::Int8(0x4e);
static const System::Int8 msosptUpArrowCallout = System::Int8(0x4f);
static const System::Int8 msosptDownArrowCallout = System::Int8(0x50);
static const System::Int8 msosptLeftRightArrowCallout = System::Int8(0x51);
static const System::Int8 msosptUpDownArrowCallout = System::Int8(0x52);
static const System::Int8 msosptQuadArrowCallout = System::Int8(0x53);
static const System::Int8 msosptBevel = System::Int8(0x54);
static const System::Int8 msosptLeftBracket = System::Int8(0x55);
static const System::Int8 msosptRightBracket = System::Int8(0x56);
static const System::Int8 msosptLeftBrace = System::Int8(0x57);
static const System::Int8 msosptRightBrace = System::Int8(0x58);
static const System::Int8 msosptLeftUpArrow = System::Int8(0x59);
static const System::Int8 msosptBentUpArrow = System::Int8(0x5a);
static const System::Int8 msosptBentArrow = System::Int8(0x5b);
static const System::Int8 msosptSeal24 = System::Int8(0x5c);
static const System::Int8 msosptStripedRightArrow = System::Int8(0x5d);
static const System::Int8 msosptNotchedRightArrow = System::Int8(0x5e);
static const System::Int8 msosptBlockArc = System::Int8(0x5f);
static const System::Int8 msosptSmileyFace = System::Int8(0x60);
static const System::Int8 msosptVerticalScroll = System::Int8(0x61);
static const System::Int8 msosptHorizontalScroll = System::Int8(0x62);
static const System::Int8 msosptCircularArrow = System::Int8(0x63);
static const System::Int8 msosptNotchedCircularArrow = System::Int8(0x64);
static const System::Int8 msosptUturnArrow = System::Int8(0x65);
static const System::Int8 msosptCurvedRightArrow = System::Int8(0x66);
static const System::Int8 msosptCurvedLeftArrow = System::Int8(0x67);
static const System::Int8 msosptCurvedUpArrow = System::Int8(0x68);
static const System::Int8 msosptCurvedDownArrow = System::Int8(0x69);
static const System::Int8 msosptCloudCallout = System::Int8(0x6a);
static const System::Int8 msosptEllipseRibbon = System::Int8(0x6b);
static const System::Int8 msosptEllipseRibbon2 = System::Int8(0x6c);
static const System::Int8 msosptFlowChartProcess = System::Int8(0x6d);
static const System::Int8 msosptFlowChartDecision = System::Int8(0x6e);
static const System::Int8 msosptFlowChartInputOutput = System::Int8(0x6f);
static const System::Int8 msosptFlowChartPredefinedProcess = System::Int8(0x70);
static const System::Int8 msosptFlowChartInternalStorage = System::Int8(0x71);
static const System::Int8 msosptFlowChartDocument = System::Int8(0x72);
static const System::Int8 msosptFlowChartMultidocument = System::Int8(0x73);
static const System::Int8 msosptFlowChartTerminator = System::Int8(0x74);
static const System::Int8 msosptFlowChartPreparation = System::Int8(0x75);
static const System::Int8 msosptFlowChartManualInput = System::Int8(0x76);
static const System::Int8 msosptFlowChartManualOperation = System::Int8(0x77);
static const System::Int8 msosptFlowChartConnector = System::Int8(0x78);
static const System::Int8 msosptFlowChartPunchedCard = System::Int8(0x79);
static const System::Int8 msosptFlowChartPunchedTape = System::Int8(0x7a);
static const System::Int8 msosptFlowChartSummingJunction = System::Int8(0x7b);
static const System::Int8 msosptFlowChartOr = System::Int8(0x7c);
static const System::Int8 msosptFlowChartCollate = System::Int8(0x7d);
static const System::Int8 msosptFlowChartSort = System::Int8(0x7e);
static const System::Int8 msosptFlowChartExtract = System::Int8(0x7f);
static const System::Byte msosptFlowChartMerge = System::Byte(0x80);
static const System::Byte msosptFlowChartOfflineStorage = System::Byte(0x81);
static const System::Byte msosptFlowChartOnlineStorage = System::Byte(0x82);
static const System::Byte msosptFlowChartMagneticTape = System::Byte(0x83);
static const System::Byte msosptFlowChartMagneticDisk = System::Byte(0x84);
static const System::Byte msosptFlowChartMagneticDrum = System::Byte(0x85);
static const System::Byte msosptFlowChartDisplay = System::Byte(0x86);
static const System::Byte msosptFlowChartDelay = System::Byte(0x87);
static const System::Byte msosptTextPlainText = System::Byte(0x88);
static const System::Byte msosptTextStop = System::Byte(0x89);
static const System::Byte msosptTextTriangle = System::Byte(0x8a);
static const System::Byte msosptTextTriangleInverted = System::Byte(0x8b);
static const System::Byte msosptTextChevron = System::Byte(0x8c);
static const System::Byte msosptTextChevronInverted = System::Byte(0x8d);
static const System::Byte msosptTextRingInside = System::Byte(0x8e);
static const System::Byte msosptTextRingOutside = System::Byte(0x8f);
static const System::Byte msosptTextArchUpCurve = System::Byte(0x90);
static const System::Byte msosptTextArchDownCurve = System::Byte(0x91);
static const System::Byte msosptTextCircleCurve = System::Byte(0x92);
static const System::Byte msosptTextButtonCurve = System::Byte(0x93);
static const System::Byte msosptTextArchUpPour = System::Byte(0x94);
static const System::Byte msosptTextArchDownPour = System::Byte(0x95);
static const System::Byte msosptTextCirclePour = System::Byte(0x96);
static const System::Byte msosptTextButtonPour = System::Byte(0x97);
static const System::Byte msosptTextCurveUp = System::Byte(0x98);
static const System::Byte msosptTextCurveDown = System::Byte(0x99);
static const System::Byte msosptTextCascadeUp = System::Byte(0x9a);
static const System::Byte msosptTextCascadeDown = System::Byte(0x9b);
static const System::Byte msosptTextWave1 = System::Byte(0x9c);
static const System::Byte msosptTextWave2 = System::Byte(0x9d);
static const System::Byte msosptTextWave3 = System::Byte(0x9e);
static const System::Byte msosptTextWave4 = System::Byte(0x9f);
static const System::Byte msosptTextInflate = System::Byte(0xa0);
static const System::Byte msosptTextDeflate = System::Byte(0xa1);
static const System::Byte msosptTextInflateBottom = System::Byte(0xa2);
static const System::Byte msosptTextDeflateBottom = System::Byte(0xa3);
static const System::Byte msosptTextInflateTop = System::Byte(0xa4);
static const System::Byte msosptTextDeflateTop = System::Byte(0xa5);
static const System::Byte msosptTextDeflateInflate = System::Byte(0xa6);
static const System::Byte msosptTextDeflateInflateDeflate = System::Byte(0xa7);
static const System::Byte msosptTextFadeRight = System::Byte(0xa8);
static const System::Byte msosptTextFadeLeft = System::Byte(0xa9);
static const System::Byte msosptTextFadeUp = System::Byte(0xaa);
static const System::Byte msosptTextFadeDown = System::Byte(0xab);
static const System::Byte msosptTextSlantUp = System::Byte(0xac);
static const System::Byte msosptTextSlantDown = System::Byte(0xad);
static const System::Byte msosptTextCanUp = System::Byte(0xae);
static const System::Byte msosptTextCanDown = System::Byte(0xaf);
static const System::Byte msosptFlowChartAlternateProcess = System::Byte(0xb0);
static const System::Byte msosptFlowChartOffpageConnector = System::Byte(0xb1);
static const System::Byte msosptCallout90 = System::Byte(0xb2);
static const System::Byte msosptAccentCallout90 = System::Byte(0xb3);
static const System::Byte msosptBorderCallout90 = System::Byte(0xb4);
static const System::Byte msosptAccentBorderCallout90 = System::Byte(0xb5);
static const System::Byte msosptLeftRightUpArrow = System::Byte(0xb6);
static const System::Byte msosptSun = System::Byte(0xb7);
static const System::Byte msosptMoon = System::Byte(0xb8);
static const System::Byte msosptBracketPair = System::Byte(0xb9);
static const System::Byte msosptBracePair = System::Byte(0xba);
static const System::Byte msosptSeal4 = System::Byte(0xbb);
static const System::Byte msosptDoubleWave = System::Byte(0xbc);
static const System::Byte msosptActionButtonBlank = System::Byte(0xbd);
static const System::Byte msosptActionButtonHome = System::Byte(0xbe);
static const System::Byte msosptActionButtonHelp = System::Byte(0xbf);
static const System::Byte msosptActionButtonInformation = System::Byte(0xc0);
static const System::Byte msosptActionButtonForwardNext = System::Byte(0xc1);
static const System::Byte msosptActionButtonBackPrevious = System::Byte(0xc2);
static const System::Byte msosptActionButtonEnd = System::Byte(0xc3);
static const System::Byte msosptActionButtonBeginning = System::Byte(0xc4);
static const System::Byte msosptActionButtonReturn = System::Byte(0xc5);
static const System::Byte msosptActionButtonDocument = System::Byte(0xc6);
static const System::Byte msosptActionButtonSound = System::Byte(0xc7);
static const System::Byte msosptActionButtonMovie = System::Byte(0xc8);
static const System::Byte msosptHostControl = System::Byte(0xc9);
static const System::Byte msosptTextBox = System::Byte(0xca);
}	/* namespace Xlsgraphics5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XLSGRAPHICS5)
using namespace Xlsgraphics5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Xlsgraphics5HPP
