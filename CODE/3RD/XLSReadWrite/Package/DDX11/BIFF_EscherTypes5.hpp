// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BIFF_EscherTypes5.pas' rev: 35.00 (Windows)

#ifndef Biff_eschertypes5HPP
#define Biff_eschertypes5HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Biff_eschertypes5
{
//-- forward type declarations -----------------------------------------------
struct TMSOOPTVertices;
struct TMSOHeader;
struct TMSOBSEMetafile;
struct TMSOFileReGroupItem;
struct TMSORecBSE;
struct TMSORecCHILDANCHOR;
struct TMSORecCLIENTANCHOR;
struct TDGGRecFIDCL;
struct TMSORecDG;
struct TMSORecDGG;
struct TMSORecOPTValue;
struct TMSORecSP;
struct TMSORecSPGR;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TMSOShapeType : unsigned char { mstUnknown, mstCtrlLabel, mstCtrlButton, mstCtrlListBox, mstCtrlCheckBox, mstCtrlComboBox, mstCtrlRadioButton, mstCtrlGroupBox, mstCtrlScrollBar, mstTextBox, mstTextShape, mstNote, mstChart };

typedef TMSOOPTVertices *PMSOOPTVertices;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TMSOOPTVertices
{
public:
	System::Word Unknown;
	System::Word VertCount;
	System::Word VertSize;
	System::StaticArray<System::Types::TPoint, 65536> Points;
};
#pragma pack(pop)


typedef TMSOHeader *PMSOHeader;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TMSOHeader
{
public:
	System::Word VerInst;
	System::Word FBT;
	unsigned Length;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TMSOBlipType : unsigned char { msoblipERROR, msoblipUNKNOWN, msoblipEMF, msoblipWMF, msoblipPICT, msoblipJPEG, msoblipPNG, msoblipDIB };

typedef System::StaticArray<System::UnicodeString, 8> Biff_eschertypes5__1;

typedef TMSOBSEMetafile *PMSOBSEMetafile;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TMSOBSEMetafile
{
public:
	int CacheSize;
	System::Types::TRect Rect;
	System::Types::TPoint PtSize;
	int Size;
	System::Byte Compressed;
	System::Byte Filter;
};
#pragma pack(pop)


typedef TMSOFileReGroupItem *PMSOFileReGroupItem;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TMSOFileReGroupItem
{
public:
	System::Word fridNew;
	System::Word fridOld;
};
#pragma pack(pop)


typedef TMSORecBSE *PMSORecBSE;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TMSORecBSE
{
public:
	TMSOBlipType WinType;
	TMSOBlipType MacType;
	System::StaticArray<System::Byte, 16> BlipId;
	System::Word Tag;
	unsigned Size;
	unsigned RefCount;
	unsigned DelayOffset;
	System::Byte Usage;
	System::Byte NameLen;
	System::Word Unused;
};
#pragma pack(pop)


typedef TMSORecCHILDANCHOR *PMSORecCHILDANCHOR;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TMSORecCHILDANCHOR
{
public:
	unsigned X1;
	unsigned Y1;
	unsigned X2;
	unsigned Y2;
};
#pragma pack(pop)


typedef TMSORecCLIENTANCHOR *PMSORecCLIENTANCHOR;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TMSORecCLIENTANCHOR
{
public:
	System::Word Options;
	System::Word Col1;
	System::Word Col1Offset;
	System::Word Row1;
	System::Word Row1Offset;
	System::Word Col2;
	System::Word Col2Offset;
	System::Word Row2;
	System::Word Row2Offset;
};
#pragma pack(pop)


typedef TDGGRecFIDCL *PDGGRecFIDCL;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TDGGRecFIDCL
{
public:
	unsigned DgId;
	unsigned SpIdUsed;
};
#pragma pack(pop)


typedef TMSORecDG *PMSORecDG;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TMSORecDG
{
public:
	unsigned ShapeCount_;
	unsigned CurSpId;
};
#pragma pack(pop)


typedef TMSORecDGG *PMSORecDGG;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TMSORecDGG
{
public:
	unsigned MaxSpId;
	unsigned IdClusterCount;
	unsigned SavedShapes;
	unsigned SavedDrawings;
};
#pragma pack(pop)


typedef TMSORecOPTValue *PMSORecOPTValue;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TMSORecOPTValue
{
public:
	System::Word Options;
	unsigned Value;
};
#pragma pack(pop)


typedef TMSORecSP *PMSORecSP;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TMSORecSP
{
public:
	unsigned SpId;
	unsigned Options;
};
#pragma pack(pop)


typedef TMSORecSPGR *PMSORecSPGR;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TMSORecSPGR
{
public:
	unsigned X1;
	unsigned Y1;
	unsigned X2;
	unsigned Y2;
};
#pragma pack(pop)


//-- var, const, procedure ---------------------------------------------------
static const System::Word MSO_ALIGNRULE = System::Word(0xf013);
static const System::Word MSO_ANCHOR = System::Word(0xf00e);
static const System::Word MSO_ARCRULE = System::Word(0xf014);
static const System::Word MSO_BLIPEND = System::Word(0xf117);
static const System::Word MSO_BLIPSTART = System::Word(0xf018);
static const System::Word MSO_BSE = System::Word(0xf007);
static const System::Word MSO_BSTORECONTAINER = System::Word(0xf001);
static const System::Word MSO_CALLOUTRULE = System::Word(0xf017);
static const System::Word MSO_CHILDANCHOR = System::Word(0xf00f);
static const System::Word MSO_CLIENTANCHOR = System::Word(0xf010);
static const System::Word MSO_CLIENTDATA = System::Word(0xf011);
static const System::Word MSO_CLIENTRULE = System::Word(0xf015);
static const System::Word MSO_CLIENTTEXTBOX = System::Word(0xf00d);
static const System::Word MSO_CLSID = System::Word(0xf016);
static const System::Word MSO_COLORSCHEME = System::Word(0xf120);
static const System::Word MSO_COLORMRU = System::Word(0xf11a);
static const System::Word MSO_CONNECTORRULE = System::Word(0xf012);
static const System::Word MSO_DELETEDPSPL = System::Word(0xf11d);
static const System::Word MSO_DG = System::Word(0xf008);
static const System::Word MSO_DGCONTAINER = System::Word(0xf002);
static const System::Word MSO_DGG = System::Word(0xf006);
static const System::Word MSO_DGGCONTAINER = System::Word(0xf000);
static const System::Word MSO_OLEOBJECT = System::Word(0xf11f);
static const System::Word MSO_OPT = System::Word(0xf00b);
static const System::Word MSO_REGROUPITEMS = System::Word(0xf118);
static const System::Word MSO_SELECTION = System::Word(0xf119);
static const System::Word MSO_SOLVERCONTAINER = System::Word(0xf005);
static const System::Word MSO_SP = System::Word(0xf00a);
static const System::Word MSO_SPCONTAINER = System::Word(0xf004);
static const System::Word MSO_SPGR = System::Word(0xf009);
static const System::Word MSO_SPGRCONTAINER = System::Word(0xf003);
static const System::Word MSO_SPLITMENUCOLORS = System::Word(0xf11e);
static const System::Word MSO_TEXTBOX = System::Word(0xf00c);
static const System::Word MSO_TERTIARY_FOPT = System::Word(0xf122);
static const System::Word BLIP_DIB = System::Word(0x7a8);
static const System::Word BLIP_JPEG = System::Word(0x46a);
static const System::Word BLIP_PNG = System::Word(0x6e0);
static const System::Word BLIP_EMF = System::Word(0x3d4);
static const System::Word BLIP_WMF = System::Word(0x216);
static const System::Word BLIP_PICT = System::Word(0x542);
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
static const System::Int8 SpOptGroup = System::Int8(0x1);
static const System::Int8 SpOptChild = System::Int8(0x2);
static const System::Int8 SpOptPatriarch = System::Int8(0x4);
static const System::Int8 SpOptDeleted = System::Int8(0x8);
static const System::Int8 SpOptOleShape = System::Int8(0x10);
static const System::Int8 SpOptHaveMaster = System::Int8(0x20);
static const System::Int8 SpOptFlipH = System::Int8(0x40);
static const System::Byte SpOptFlipV = System::Byte(0x80);
static const System::Word SpOptConnector = System::Word(0x100);
static const System::Word SpOptHaveAnchor = System::Word(0x200);
static const System::Word SpOptBackground = System::Word(0x400);
static const System::Word SpOptHaveSpt = System::Word(0x800);
static const System::Int8 msooptRotation = System::Int8(0x4);
static const System::Int8 msooptFLockRotation = System::Int8(0x77);
static const System::Int8 msooptFLockAspectRatio = System::Int8(0x78);
static const System::Int8 msooptFLockPosition = System::Int8(0x79);
static const System::Int8 msooptFLockAgainstSelect = System::Int8(0x7a);
static const System::Int8 msooptFLockCropping = System::Int8(0x7b);
static const System::Int8 msooptLockVertices = System::Int8(0x7c);
static const System::Int8 msooptFLockText = System::Int8(0x7d);
static const System::Int8 msooptFLockAdjustHandles = System::Int8(0x7e);
static const System::Int8 msooptFLockAgainstGrouping = System::Int8(0x7f);
static const System::Byte msooptLTxid = System::Byte(0x80);
static const System::Byte msooptDxTextLeft = System::Byte(0x81);
static const System::Byte msooptDyTextTop = System::Byte(0x82);
static const System::Byte msooptDxTextRight = System::Byte(0x83);
static const System::Byte msooptDyTextBottom = System::Byte(0x84);
static const System::Byte msooptWrapText = System::Byte(0x85);
static const System::Byte msooptScaleText = System::Byte(0x86);
static const System::Byte msooptAnchorText = System::Byte(0x87);
static const System::Byte msooptXflTextFlow = System::Byte(0x88);
static const System::Byte msooptCdirFont = System::Byte(0x89);
static const System::Byte msooptHspNext = System::Byte(0x8a);
static const System::Byte msooptTxdir = System::Byte(0x8b);
static const System::Byte msooptFSelectText = System::Byte(0xbb);
static const System::Byte msooptFAutoTextMargin = System::Byte(0xbc);
static const System::Byte msooptFRotateText = System::Byte(0xbd);
static const System::Byte msooptFFitShapeToText = System::Byte(0xbe);
static const System::Byte msooptFFitTextToShape = System::Byte(0xbf);
static const System::Byte msooptGtextUNICODE = System::Byte(0xc0);
static const System::Byte msooptTextRTF = System::Byte(0xc1);
static const System::Byte msooptGtextAlign = System::Byte(0xc2);
static const System::Byte msooptTextSize = System::Byte(0xc3);
static const System::Byte msooptGtextSpacing = System::Byte(0xc4);
static const System::Byte msooptGtextFont = System::Byte(0xc5);
static const System::Byte msooptGtextFReverseRows = System::Byte(0xf0);
static const System::Byte msooptFGtext = System::Byte(0xf1);
static const System::Byte msooptGtextFVertical = System::Byte(0xf2);
static const System::Byte msooptGtextFKern = System::Byte(0xf3);
static const System::Byte msooptGtextFTight = System::Byte(0xf4);
static const System::Byte msooptGtextFStretch = System::Byte(0xf5);
static const System::Byte msooptGtextFShrinkFit = System::Byte(0xf6);
static const System::Byte msooptGtextFBestFit = System::Byte(0xf7);
static const System::Byte msooptGtextFNormalize = System::Byte(0xf8);
static const System::Byte msooptGtextFDxMeasure = System::Byte(0xf9);
static const System::Byte msooptGtextFBold = System::Byte(0xfa);
static const System::Byte msooptGtextFItalic = System::Byte(0xfb);
static const System::Byte msooptGtextFUnderline = System::Byte(0xfc);
static const System::Byte msooptGtextFShadow = System::Byte(0xfd);
static const System::Byte msooptGtextFSmallcaps = System::Byte(0xfe);
static const System::Byte msooptGtextFStrikethrough = System::Byte(0xff);
static const System::Word msooptCropFromTop = System::Word(0x100);
static const System::Word msooptRopFromBottom = System::Word(0x101);
static const System::Word msooptRopFromLeft = System::Word(0x102);
static const System::Word msooptCropFromRight = System::Word(0x103);
static const System::Word msooptPib = System::Word(0x104);
static const System::Word msooptPibName = System::Word(0x105);
static const System::Word msooptPibFlags = System::Word(0x106);
static const System::Word msooptPictureTransparent = System::Word(0x107);
static const System::Word msooptPictureContrast = System::Word(0x108);
static const System::Word msooptPictureBrightness = System::Word(0x109);
static const System::Word msooptPictureGamma = System::Word(0x10a);
static const System::Word msooptPictureId = System::Word(0x10b);
static const System::Word msooptPictureDblCrMod = System::Word(0x10c);
static const System::Word msooptPictureFillCrMod = System::Word(0x10d);
static const System::Word msooptPictureLineCrMod = System::Word(0x10e);
static const System::Word msooptPibPrint = System::Word(0x10f);
static const System::Word msooptPibPrintName = System::Word(0x110);
static const System::Word msooptPibPrintFlags = System::Word(0x111);
static const System::Word msooptFNoHitTestPicture = System::Word(0x13c);
static const System::Word msooptPictureGray = System::Word(0x13d);
static const System::Word msooptPictureBiLevel = System::Word(0x13e);
static const System::Word msooptPictureActive = System::Word(0x13f);
static const System::Word msooptFillType = System::Word(0x180);
static const System::Word msooptFillColor = System::Word(0x181);
static const System::Word msooptFillOpacity = System::Word(0x182);
static const System::Word msooptFillBackColor = System::Word(0x183);
static const System::Word msooptFillBackOpacity = System::Word(0x184);
static const System::Word msooptFillCrMod = System::Word(0x185);
static const System::Word msooptFillBlip = System::Word(0x186);
static const System::Word msooptFillBlipName = System::Word(0x187);
static const System::Word msooptFillBlipFlags = System::Word(0x188);
static const System::Word msooptFillWidth = System::Word(0x189);
static const System::Word msooptFillHeight = System::Word(0x18a);
static const System::Word msooptFillAngle = System::Word(0x18b);
static const System::Word msooptFillFocus = System::Word(0x18c);
static const System::Word msooptFillToLeft = System::Word(0x18d);
static const System::Word msooptFillToTop = System::Word(0x18e);
static const System::Word msooptFillToRight = System::Word(0x18f);
static const System::Word msooptFillToBottom = System::Word(0x190);
static const System::Word msooptFillRectLeft = System::Word(0x191);
static const System::Word msooptFillRectTop = System::Word(0x192);
static const System::Word msooptFillRectRight = System::Word(0x193);
static const System::Word msooptFillRectBottom = System::Word(0x194);
static const System::Word msooptFillDztype = System::Word(0x195);
static const System::Word msooptFillShadePreset = System::Word(0x196);
static const System::Word msooptFillShadeColors = System::Word(0x197);
static const System::Word msooptFillOriginX = System::Word(0x198);
static const System::Word msooptFillOriginY = System::Word(0x199);
static const System::Word msooptFillShapeOriginX = System::Word(0x19a);
static const System::Word msooptFillShapeOriginY = System::Word(0x19b);
static const System::Word msooptFillShadeType = System::Word(0x19c);
static const System::Word msooptFFilled = System::Word(0x1bb);
static const System::Word msooptFHitTestFill = System::Word(0x1bc);
static const System::Word msooptFillShape = System::Word(0x1bd);
static const System::Word msooptFillUseRect = System::Word(0x1be);
static const System::Word msooptFNoFillHitTest = System::Word(0x1bf);
static const System::Word msooptLineColor = System::Word(0x1c0);
static const System::Word msooptLineOpacity = System::Word(0x1c1);
static const System::Word msooptLineBackColor = System::Word(0x1c2);
static const System::Word msooptLineCrMod = System::Word(0x1c3);
static const System::Word msooptLineType = System::Word(0x1c4);
static const System::Word msooptLineFillBlip = System::Word(0x1c5);
static const System::Word msooptLineFillBlipName = System::Word(0x1c6);
static const System::Word msooptLineFillBlipFlags = System::Word(0x1c7);
static const System::Word msooptLineFillWidth = System::Word(0x1c8);
static const System::Word msooptLineFillHeight = System::Word(0x1c9);
static const System::Word msooptLineFillDztype = System::Word(0x1ca);
static const System::Word msooptLineWidth = System::Word(0x1cb);
static const System::Word msooptLineMiterLimit = System::Word(0x1cc);
static const System::Word msooptLineStyle = System::Word(0x1cd);
static const System::Word msooptLineDashing = System::Word(0x1ce);
static const System::Word msooptLineDashStyle = System::Word(0x1cf);
static const System::Word msooptLineStartArrowhead = System::Word(0x1d0);
static const System::Word msooptLineEndArrowhead = System::Word(0x1d1);
static const System::Word msooptLineStartArrowWidth = System::Word(0x1d2);
static const System::Word msooptLineStartArrowLength = System::Word(0x1d3);
static const System::Word msooptLineEndArrowWidth = System::Word(0x1d4);
static const System::Word msooptLineEndArrowLength = System::Word(0x1d5);
static const System::Word msooptLineJoinStyle = System::Word(0x1d6);
static const System::Word msooptLineEndCapStyle = System::Word(0x1d7);
static const System::Word msooptFArrowheadsOK = System::Word(0x1fb);
static const System::Word msooptLine = System::Word(0x1fc);
static const System::Word msooptFHitTestLine = System::Word(0x1fd);
static const System::Word msooptLineFillShape = System::Word(0x1fe);
static const System::Word msooptFNoLineDrawDash = System::Word(0x1ff);
static const System::Word msooptShadowType = System::Word(0x200);
static const System::Word msooptShadowColor = System::Word(0x201);
static const System::Word msooptShadowHighlight = System::Word(0x202);
static const System::Word msooptShadowCrMod = System::Word(0x203);
static const System::Word msooptShadowOpacity = System::Word(0x204);
static const System::Word msooptShadowOffsetX = System::Word(0x205);
static const System::Word msooptShadowOffsetY = System::Word(0x206);
static const System::Word msooptShadowSecondOffsetX = System::Word(0x207);
static const System::Word msooptShadowSecondOffsetY = System::Word(0x208);
static const System::Word msooptShadowScaleXToX = System::Word(0x209);
static const System::Word msooptShadowScaleYToX = System::Word(0x20a);
static const System::Word msooptShadowScaleXToY = System::Word(0x20b);
static const System::Word msooptShadowScaleYToY = System::Word(0x20c);
static const System::Word msooptShadowPerspectiveX = System::Word(0x20d);
static const System::Word msooptShadowPerspectiveY = System::Word(0x20e);
static const System::Word msooptShadowWeight = System::Word(0x20f);
static const System::Word msooptShadowOriginX = System::Word(0x210);
static const System::Word msooptShadowOriginY = System::Word(0x211);
static const System::Word msooptFShadow = System::Word(0x23e);
static const System::Word msooptShadowObscured = System::Word(0x23f);
static const System::Word msooptPerspectiveType = System::Word(0x240);
static const System::Word msooptPerspectiveOffsetX = System::Word(0x241);
static const System::Word msooptPerspectiveOffsetY = System::Word(0x242);
static const System::Word msooptPerspectiveScaleXToX = System::Word(0x243);
static const System::Word msooptPerspectiveScaleYToX = System::Word(0x244);
static const System::Word msooptPerspectiveScaleXToY = System::Word(0x245);
static const System::Word msooptPerspectiveScaleYToY = System::Word(0x246);
static const System::Word msooptPerspectivePerspectiveX = System::Word(0x247);
static const System::Word msooptPerspectivePerspectiveY = System::Word(0x248);
static const System::Word msooptPerspectiveWeight = System::Word(0x249);
static const System::Word msooptPerspectiveOriginX = System::Word(0x24a);
static const System::Word msooptPerspectiveOriginY = System::Word(0x24b);
static const System::Word msooptFPerspective = System::Word(0x27f);
static const System::Word msooptC3DSpecularAmt = System::Word(0x280);
static const System::Word msooptC3DDiffuseAmt = System::Word(0x281);
static const System::Word msooptC3DShininess = System::Word(0x282);
static const System::Word msooptC3DEdgeThickness = System::Word(0x283);
static const System::Word msooptC3DExtrudeForward = System::Word(0x284);
static const System::Word msooptC3DExtrudeBackward = System::Word(0x285);
static const System::Word msooptC3DExtrudePlane = System::Word(0x286);
static const System::Word msooptC3DExtrusionColor = System::Word(0x287);
static const System::Word msooptC3DCrMod = System::Word(0x288);
static const System::Word msooptF3D = System::Word(0x2bc);
static const System::Word msooptFc3DMetallic = System::Word(0x2bd);
static const System::Word msooptFc3DUseExtrusionColor = System::Word(0x2be);
static const System::Word msooptFc3DLightFace = System::Word(0x2bf);
static const System::Word msooptC3DYRotationAngle = System::Word(0x2c0);
static const System::Word msoopt3DXRotationAngle = System::Word(0x2c1);
static const System::Word msoopt3DRotationAxisX = System::Word(0x2c2);
static const System::Word msooptC3DRotationAxisY = System::Word(0x2c3);
static const System::Word msooptC3DRotationAxisZ = System::Word(0x2c4);
static const System::Word msooptC3DRotationAngle = System::Word(0x2c5);
static const System::Word msooptC3DRotationCenterX = System::Word(0x2c6);
static const System::Word msooptC3DRotationCenterY = System::Word(0x2c7);
static const System::Word msooptC3DRotationCenterZ = System::Word(0x2c8);
static const System::Word msooptC3DRenderMode = System::Word(0x2c9);
static const System::Word msooptC3DTolerance = System::Word(0x2ca);
static const System::Word msooptC3DXViewpoint = System::Word(0x2cb);
static const System::Word msooptC3DYViewpoint = System::Word(0x2cc);
static const System::Word msooptC3DZViewpoint = System::Word(0x2cd);
static const System::Word msooptC3DOriginX = System::Word(0x2ce);
static const System::Word msooptC3DOriginY = System::Word(0x2cf);
static const System::Word msooptC3DSkewAngle = System::Word(0x2d0);
static const System::Word msooptC3DSkewAmount = System::Word(0x2d1);
static const System::Word msooptC3DAmbientIntensity = System::Word(0x2d2);
static const System::Word msooptC3DKeyX = System::Word(0x2d3);
static const System::Word msooptC3DKeyY = System::Word(0x2d4);
static const System::Word msooptC3DKeyZ = System::Word(0x2d5);
static const System::Word msooptC3DKeyIntensity = System::Word(0x2d6);
static const System::Word msooptC3DFillX = System::Word(0x2d7);
static const System::Word msooptC3DFillY = System::Word(0x2d8);
static const System::Word msooptC3DFillZ = System::Word(0x2d9);
static const System::Word msoopt3DFillIntensity = System::Word(0x2da);
static const System::Word msooptC3DConstrainRotation = System::Word(0x2fb);
static const System::Word msooptC3DRotationCenterAuto = System::Word(0x2fc);
static const System::Word msooptC3DParallel = System::Word(0x2fd);
static const System::Word msooptC3DKeyHarsh = System::Word(0x2fe);
static const System::Word msooptC3DFillHarsh = System::Word(0x2ff);
static const System::Word msooptHspMaster = System::Word(0x301);
static const System::Word msooptCxstyle = System::Word(0x303);
static const System::Word msooptBWMode = System::Word(0x304);
static const System::Word msooptBWModePureBW = System::Word(0x305);
static const System::Word msooptBWModeBW = System::Word(0x306);
static const System::Word msooptFOleIcon = System::Word(0x33a);
static const System::Word msooptFPreferRelativeResize = System::Word(0x33b);
static const System::Word msooptFLockShapeType = System::Word(0x33c);
static const System::Word msooptFDeleteAttachedObject = System::Word(0x33e);
static const System::Word msooptFBackground = System::Word(0x33f);
static const System::Word msooptSpcot = System::Word(0x340);
static const System::Word msooptDxyCalloutGap = System::Word(0x341);
static const System::Word msooptSpcoa = System::Word(0x342);
static const System::Word msooptSpcod = System::Word(0x343);
static const System::Word msooptDxyCalloutDropSpecified = System::Word(0x344);
static const System::Word msooptDxyCalloutLengthSpecified = System::Word(0x345);
static const System::Word msooptFCallout = System::Word(0x379);
static const System::Word msooptFCalloutAccentBar = System::Word(0x37a);
static const System::Word msooptFCalloutTextBorder = System::Word(0x37b);
static const System::Word msooptFCalloutMinusX = System::Word(0x37c);
static const System::Word msooptFCalloutMinusY = System::Word(0x37d);
static const System::Word msooptFCalloutDropAuto = System::Word(0x37e);
static const System::Word msooptFCalloutLengthSpecified = System::Word(0x37f);
static const System::Word msooptWzName = System::Word(0x380);
static const System::Word msooptZDescription = System::Word(0x381);
static const System::Word msooptPihlShape = System::Word(0x382);
static const System::Word msooptPWrapPolygonVertices = System::Word(0x383);
static const System::Word msooptDxWrapDistLeft = System::Word(0x384);
static const System::Word msooptDyWrapDistTop = System::Word(0x385);
static const System::Word msooptDxWrapDistRight = System::Word(0x386);
static const System::Word msooptDyWrapDistBottom = System::Word(0x387);
static const System::Word msooptLidRegroup = System::Word(0x388);
static const System::Word msooptFEditedWrap = System::Word(0x3b9);
static const System::Word msooptFBehindDocument = System::Word(0x3ba);
static const System::Word msooptFOnDblClickNotify = System::Word(0x3bb);
static const System::Word msooptFIsButton = System::Word(0x3bc);
static const System::Word msooptFOneD = System::Word(0x3bd);
static const System::Word msooptFHidden = System::Word(0x3be);
static const System::Word msooptFPrint = System::Word(0x3bf);
static const System::Word msooptGeoLeft = System::Word(0x140);
static const System::Word msooptGeoTop = System::Word(0x141);
static const System::Word msooptGeoRight = System::Word(0x142);
static const System::Word msooptGeoBottom = System::Word(0x143);
static const System::Word msooptShapePath = System::Word(0x144);
static const System::Word msooptPVertices = System::Word(0x145);
static const System::Word msooptPSegmentInfo = System::Word(0x146);
static const System::Word msooptAdjustValue = System::Word(0x147);
static const System::Word msooptAdjust2Value = System::Word(0x148);
static const System::Word msooptAdjust3Value = System::Word(0x149);
static const System::Word msooptAdjust4Value = System::Word(0x14a);
static const System::Word msooptAdjust5Value = System::Word(0x14b);
static const System::Word msooptAdjust6Value = System::Word(0x14c);
static const System::Word msooptAdjust7Value = System::Word(0x14d);
static const System::Word msooptAdjust8Value = System::Word(0x14e);
static const System::Word msooptAdjust9Value = System::Word(0x14f);
static const System::Word msooptAdjust10Value = System::Word(0x150);
static const System::Word msooptSegmentData1 = System::Word(0x151);
static const System::Word msooptSegmentData2 = System::Word(0x155);
static const System::Word msooptSegmentData3 = System::Word(0x156);
static const System::Word msooptSegmentData4 = System::Word(0x157);
static const System::Word msooptFShadowOK = System::Word(0x17a);
static const System::Word msooptF3DOK = System::Word(0x17b);
static const System::Word msooptFLineOK = System::Word(0x17c);
static const System::Word msooptFGtextOK = System::Word(0x17d);
static const System::Word msooptFFillShadeShapeOK = System::Word(0x17e);
static const System::Word msooptFFillOK = System::Word(0x17f);
static const System::Int8 msoshapeLines = System::Int8(0x0);
static const System::Int8 msoshapeLinesClosed = System::Int8(0x1);
static const System::Int8 msoshapeCurves = System::Int8(0x2);
static const System::Int8 msoshapeCurvesClosed = System::Int8(0x3);
static const System::Int8 msoshapeComplex = System::Int8(0x4);
static const System::Int8 msolineNoEnd = System::Int8(0x0);
static const System::Int8 msolineArrowEnd = System::Int8(0x1);
static const System::Int8 msolineArrowStealthEnd = System::Int8(0x2);
static const System::Int8 msolineArrowDiamondEnd = System::Int8(0x3);
static const System::Int8 msolineArrowOvalEnd = System::Int8(0x4);
static const System::Int8 msolineArrowOpenEnd = System::Int8(0x5);
static const System::Int8 msofillSolid = System::Int8(0x0);
static const System::Int8 msofillPattern = System::Int8(0x1);
static const System::Int8 msofillTexture = System::Int8(0x2);
static const System::Int8 msofillPicture = System::Int8(0x3);
static const System::Int8 msofillShade = System::Int8(0x4);
static const System::Int8 msofillShadeCenter = System::Int8(0x5);
static const System::Int8 msofillShadeShape = System::Int8(0x6);
static const System::Int8 msofillShadeScale = System::Int8(0x7);
static const System::Int8 msofillShadeTitle = System::Int8(0x8);
static const System::Int8 msofillBackground = System::Int8(0x9);
extern DELPHI_PACKAGE Biff_eschertypes5__1 TMSOBlipTypeStr;
}	/* namespace Biff_eschertypes5 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BIFF_ESCHERTYPES5)
using namespace Biff_eschertypes5;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Biff_eschertypes5HPP
