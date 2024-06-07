// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'xpgParseDrawingCommon.pas' rev: 35.00 (Windows)

#ifndef XpgparsedrawingcommonHPP
#define XpgparsedrawingcommonHPP

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
#include <System.IniFiles.hpp>
#include <System.Math.hpp>
#include <xpgPUtils.hpp>
#include <xpgPLists.hpp>
#include <xpgPXMLUtils.hpp>
#include <xpgPXML.hpp>
#include <Xc12Utils5.hpp>
#include <Xc12Graphics.hpp>
#include <XLSUtils5.hpp>
#include <XLSReadWriteOPC5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xpgparsedrawingcommon
{
//-- forward type declarations -----------------------------------------------
struct TST_AdjAngle;
struct TST_AdjCoordinate;
class DELPHICLASS TXPGDocBase;
class DELPHICLASS TXPGBase;
class DELPHICLASS TXPGBaseList;
class DELPHICLASS TXPGAnyElement;
class DELPHICLASS TXPGAnyElements;
class DELPHICLASS TXPGBaseObjectList;
class DELPHICLASS TXPSAlternateContent;
class DELPHICLASS TXPGReader;
class DELPHICLASS TEG_ColorTransform;
class DELPHICLASS TCT_ScRgbColor;
class DELPHICLASS TCT_SRgbColor;
class DELPHICLASS TCT_HslColor;
class DELPHICLASS TCT_SystemColor;
class DELPHICLASS TCT_SchemeColor;
class DELPHICLASS TCT_PresetColor;
class DELPHICLASS TEG_ColorChoice;
class DELPHICLASS TCT_OfficeArtExtension;
class DELPHICLASS TCT_OfficeArtExtensionXpgList;
class DELPHICLASS TCT_RelativeRect;
class DELPHICLASS TCT_Color;
class DELPHICLASS TEG_OfficeArtExtensionList;
class DELPHICLASS TCT_GradientStop;
class DELPHICLASS TCT_GradientStopXpgList;
class DELPHICLASS TCT_LinearShadeProperties;
class DELPHICLASS TCT_PathShadeProperties;
class DELPHICLASS TCT_AlphaBiLevelEffect;
class DELPHICLASS TCT_AlphaBiLevelEffectXpgList;
class DELPHICLASS TCT_AlphaCeilingEffect;
class DELPHICLASS TCT_AlphaCeilingEffectXpgList;
class DELPHICLASS TCT_AlphaFloorEffect;
class DELPHICLASS TCT_AlphaFloorEffectXpgList;
class DELPHICLASS TCT_AlphaInverseEffect;
class DELPHICLASS TCT_AlphaInverseEffectXpgList;
class DELPHICLASS TCT_AlphaModulateFixedEffect;
class DELPHICLASS TCT_AlphaModulateFixedEffectXpgList;
class DELPHICLASS TCT_AlphaReplaceEffect;
class DELPHICLASS TCT_AlphaReplaceEffectXpgList;
class DELPHICLASS TCT_BiLevelEffect;
class DELPHICLASS TCT_BiLevelEffectXpgList;
class DELPHICLASS TCT_BlurEffect;
class DELPHICLASS TCT_BlurEffectXpgList;
class DELPHICLASS TCT_ColorChangeEffect;
class DELPHICLASS TCT_ColorChangeEffectXpgList;
class DELPHICLASS TCT_ColorReplaceEffect;
class DELPHICLASS TCT_ColorReplaceEffectXpgList;
class DELPHICLASS TCT_DuotoneEffect;
class DELPHICLASS TCT_DuotoneEffectXpgList;
class DELPHICLASS TCT_GrayscaleEffect;
class DELPHICLASS TCT_GrayscaleEffectXpgList;
class DELPHICLASS TCT_HSLEffect;
class DELPHICLASS TCT_HSLEffectXpgList;
class DELPHICLASS TCT_LuminanceEffect;
class DELPHICLASS TCT_LuminanceEffectXpgList;
class DELPHICLASS TCT_TintEffect;
class DELPHICLASS TCT_TintEffectXpgList;
class DELPHICLASS TCT_OfficeArtExtensionList;
class DELPHICLASS TCT_TileInfoProperties;
class DELPHICLASS TCT_StretchInfoProperties;
class DELPHICLASS TCT_GradientStopList;
class DELPHICLASS TEG_ShadeProperties;
class DELPHICLASS TCT_Blip;
class DELPHICLASS TEG_FillModeProperties;
class DELPHICLASS TCT_NoFillProperties;
class DELPHICLASS TCT_SolidColorFillProperties;
class DELPHICLASS TCT_GradientFillProperties;
class DELPHICLASS TCT_BlipFillProperties;
class DELPHICLASS TCT_PatternFillProperties;
class DELPHICLASS TCT_GroupFillProperties;
class DELPHICLASS TEG_FillProperties;
class DELPHICLASS TCT_FillOverlayEffect;
class DELPHICLASS TCT_FillOverlayEffectXpgList;
class DELPHICLASS TCT_EffectReference;
class DELPHICLASS TCT_EffectReferenceXpgList;
class DELPHICLASS TCT_AlphaOutsetEffect;
class DELPHICLASS TCT_AlphaOutsetEffectXpgList;
class DELPHICLASS TCT_FillEffect;
class DELPHICLASS TCT_FillEffectXpgList;
class DELPHICLASS TCT_GlowEffect;
class DELPHICLASS TCT_GlowEffectXpgList;
class DELPHICLASS TCT_InnerShadowEffect;
class DELPHICLASS TCT_InnerShadowEffectXpgList;
class DELPHICLASS TCT_OuterShadowEffect;
class DELPHICLASS TCT_OuterShadowEffectXpgList;
class DELPHICLASS TCT_PresetShadowEffect;
class DELPHICLASS TCT_PresetShadowEffectXpgList;
class DELPHICLASS TCT_ReflectionEffect;
class DELPHICLASS TCT_ReflectionEffectXpgList;
class DELPHICLASS TCT_RelativeOffsetEffect;
class DELPHICLASS TCT_RelativeOffsetEffectXpgList;
class DELPHICLASS TCT_SoftEdgesEffect;
class DELPHICLASS TCT_SoftEdgesEffectXpgList;
class DELPHICLASS TCT_TransformEffect;
class DELPHICLASS TCT_TransformEffectXpgList;
class DELPHICLASS TEG_Effect;
class DELPHICLASS TCT_EffectContainer;
class DELPHICLASS TCT_EffectContainerXpgList;
class DELPHICLASS TCT_BlendEffect;
class DELPHICLASS TCT_BlendEffectXpgList;
class DELPHICLASS TCT_AlphaModulateEffect;
class DELPHICLASS TCT_AlphaModulateEffectXpgList;
class DELPHICLASS TCT_DashStop;
class DELPHICLASS TCT_DashStopXpgList;
class DELPHICLASS TCT_PresetLineDashProperties;
class DELPHICLASS TCT_DashStopList;
class DELPHICLASS TCT_LineJoinRound;
class DELPHICLASS TCT_LineJoinBevel;
class DELPHICLASS TCT_LineJoinMiterProperties;
class DELPHICLASS TEG_LineDashProperties;
class DELPHICLASS TEG_LineJoinProperties;
class DELPHICLASS TCT_LineEndProperties;
class DELPHICLASS TCT_EffectList;
class DELPHICLASS TCT_TextUnderlineLineFollowText;
class DELPHICLASS TCT_LineProperties;
class DELPHICLASS TCT_LinePropertiesXpgList;
class DELPHICLASS TCT_TextUnderlineFillFollowText;
class DELPHICLASS TCT_TextUnderlineFillGroupWrapper;
class DELPHICLASS TCT_EmbeddedWAVAudioFile;
class DELPHICLASS TCT_AdjPoint2D;
class DELPHICLASS TCT_AdjPoint2DXpgList;
class DELPHICLASS TCT_TextSpacingPercent;
class DELPHICLASS TCT_TextSpacingPoint;
class DELPHICLASS TCT_TextBulletColorFollowText;
class DELPHICLASS TCT_TextBulletSizeFollowText;
class DELPHICLASS TCT_TextBulletSizePercent;
class DELPHICLASS TCT_TextBulletSizePoint;
class DELPHICLASS TCT_TextBulletTypefaceFollowText;
class DELPHICLASS TCT_TextFont;
class DELPHICLASS TCT_TextNoBullet;
class DELPHICLASS TCT_TextAutonumberBullet;
class DELPHICLASS TCT_TextCharBullet;
class DELPHICLASS TCT_TextBlipBullet;
class DELPHICLASS TCT_TextTabStop;
class DELPHICLASS TCT_TextTabStopXpgList;
class DELPHICLASS TEG_EffectProperties;
class DELPHICLASS TEG_TextUnderlineLine;
class DELPHICLASS TEG_TextUnderlineFill;
class DELPHICLASS TCT_Hyperlink;
class DELPHICLASS TCT_Path2DClose;
class DELPHICLASS TCT_Path2DCloseXpgList;
class DELPHICLASS TCT_Path2DMoveTo;
class DELPHICLASS TCT_Path2DMoveToXpgList;
class DELPHICLASS TCT_Path2DLineTo;
class DELPHICLASS TCT_Path2DLineToXpgList;
class DELPHICLASS TCT_Path2DArcTo;
class DELPHICLASS TCT_Path2DArcToXpgList;
class DELPHICLASS TCT_Path2DQuadBezierTo;
class DELPHICLASS TCT_Path2DQuadBezierToXpgList;
class DELPHICLASS TCT_Path2DCubicBezierTo;
class DELPHICLASS TCT_Path2DCubicBezierToXpgList;
class DELPHICLASS TCT_TextSpacing;
class DELPHICLASS TEG_TextBulletColor;
class DELPHICLASS TEG_TextBulletSize;
class DELPHICLASS TEG_TextBulletTypeface;
class DELPHICLASS TEG_TextBullet;
class DELPHICLASS TCT_TextTabStopList;
class DELPHICLASS TCT_TextCharacterProperties;
class DELPHICLASS TCT_GeomGuide;
class DELPHICLASS TCT_GeomGuideXpgList;
class DELPHICLASS TCT_XYAdjustHandle;
class DELPHICLASS TCT_XYAdjustHandleXpgList;
class DELPHICLASS TCT_PolarAdjustHandle;
class DELPHICLASS TCT_PolarAdjustHandleXpgList;
class DELPHICLASS TCT_ConnectionSite;
class DELPHICLASS TCT_ConnectionSiteXpgList;
class DELPHICLASS TCT_Path2D;
class DELPHICLASS TCT_Path2DXpgList;
class DELPHICLASS TCT_SphereCoords;
class DELPHICLASS TCT_Point3D;
class DELPHICLASS TCT_Vector3D;
class DELPHICLASS TCT_Bevel;
class DELPHICLASS TCT_TextParagraphProperties;
class DELPHICLASS TCT_GeomGuideList;
class DELPHICLASS TCT_AdjustHandleList;
class DELPHICLASS TCT_ConnectionSiteList;
class DELPHICLASS TCT_GeomRect;
class DELPHICLASS TCT_Path2DList;
class DELPHICLASS TCT_TextNoAutofit;
class DELPHICLASS TCT_TextNormalAutofit;
class DELPHICLASS TCT_TextShapeAutofit;
class DELPHICLASS TCT_Camera;
class DELPHICLASS TCT_LightRig;
class DELPHICLASS TCT_Backdrop;
class DELPHICLASS TCT_Shape3D;
class DELPHICLASS TCT_FlatText;
class DELPHICLASS TCT_RegularTextRun;
class DELPHICLASS TCT_TextLineBreak;
class DELPHICLASS TCT_TextField;
class DELPHICLASS TCT_Point2D;
class DELPHICLASS TCT_PositiveSize2D;
class DELPHICLASS TCT_CustomGeometry2D;
class DELPHICLASS TCT_PresetGeometry2D;
class DELPHICLASS TCT_PresetTextShape;
class DELPHICLASS TEG_TextAutofit;
class DELPHICLASS TCT_Scene3D;
class DELPHICLASS TEG_Text3D;
class DELPHICLASS TEG_TextRun;
class DELPHICLASS TEG_TextRunXpgList;
class DELPHICLASS TCT_Connection;
class DELPHICLASS TCT_Transform2D;
class DELPHICLASS TEG_Geometry;
class DELPHICLASS TCT_StyleMatrixReference;
class DELPHICLASS TCT_FontReference;
class DELPHICLASS TCT_TextBodyProperties;
class DELPHICLASS TCT_TextListStyle;
class DELPHICLASS TCT_TextParagraph;
class DELPHICLASS TCT_TextParagraphXpgList;
class DELPHICLASS TCT_GroupTransform2D;
class DELPHICLASS TCT_ShapeProperties;
class DELPHICLASS TCT_ShapeStyle;
class DELPHICLASS TCT_TextBody;
class DELPHICLASS TCT_GroupShapeProperties;
class DELPHICLASS TCT_NonVisualDrawingProps;
class DELPHICLASS TCT_ShapeLocking;
class DELPHICLASS TCT_NonVisualDrawingShapeProps;
class DELPHICLASS TCT_ShapeNonVisual;
class DELPHICLASS TCT_Shape;
class DELPHICLASS TCT_SupplementalFont;
class DELPHICLASS TCT_SupplementalFontXpgList;
class DELPHICLASS TCT_EffectStyleItem;
class DELPHICLASS TCT_EffectStyleItemXpgList;
class DELPHICLASS TCT_FontCollection;
class DELPHICLASS TCT_FillStyleList;
class DELPHICLASS TCT_LineStyleList;
class DELPHICLASS TCT_EffectStyleList;
class DELPHICLASS TCT_BackgroundFillStyleList;
class DELPHICLASS TCT_Ratio;
class DELPHICLASS TCT_CustomColor;
class DELPHICLASS TCT_CustomColorXpgList;
class DELPHICLASS TCT_ColorScheme;
class DELPHICLASS TCT_FontScheme;
class DELPHICLASS TCT_StyleMatrix;
class DELPHICLASS TEG_TextGeometry;
class DELPHICLASS TCT_Scale2D;
class DELPHICLASS TCT_FillProperties;
class DELPHICLASS TCT_EffectProperties;
class DELPHICLASS TCT_CustomColorList;
class DELPHICLASS TCT_ColorMRU;
class DELPHICLASS TCT_BaseStyles;
class DELPHICLASS TCT_PositiveFixedPercentage;
class DELPHICLASS TCT_InverseGammaTransform;
class DELPHICLASS TCT_Angle;
class DELPHICLASS TCT_Percentage;
class DELPHICLASS TCT_ComplementTransform;
class DELPHICLASS TCT_PositivePercentage;
class DELPHICLASS TCT_GrayscaleTransform;
class DELPHICLASS TCT_GammaTransform;
class DELPHICLASS TCT_FixedPercentage;
class DELPHICLASS TCT_PositiveFixedAngle;
class DELPHICLASS TCT_InverseTransform;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TST_SchemeColorVal : unsigned short { stscvBg1, stscvTx1, stscvBg2, stscvTx2, stscvAccent1, stscvAccent2, stscvAccent3, stscvAccent4, stscvAccent5, stscvAccent6, stscvHlink, stscvFolHlink, stscvPhClr, stscvDk1, stscvLt1, stscvDk2, stscvLt2 };

typedef System::StaticArray<System::UnicodeString, 17> Xpgparsedrawingcommon__1;

enum DECLSPEC_DENUM TST_BlackWhiteMode : unsigned short { stbwmClr, stbwmAuto, stbwmGray, stbwmLtGray, stbwmInvGray, stbwmGrayWhite, stbwmBlackGray, stbwmBlackWhite, stbwmBlack, stbwmWhite, stbwmHidden };

typedef System::StaticArray<System::UnicodeString, 11> Xpgparsedrawingcommon__2;

enum DECLSPEC_DENUM TST_PresetColorVal : unsigned short { stpcvAliceBlue, stpcvAntiqueWhite, stpcvAqua, stpcvAquamarine, stpcvAzure, stpcvBeige, stpcvBisque, stpcvBlack, stpcvBlanchedAlmond, stpcvBlue, stpcvBlueViolet, stpcvBrown, stpcvBurlyWood, stpcvCadetBlue, stpcvChartreuse, stpcvChocolate, stpcvCoral, stpcvCornflowerBlue, stpcvCornsilk, stpcvCrimson, stpcvCyan, stpcvDkBlue, stpcvDkCyan, stpcvDkGoldenrod, stpcvDkGray, stpcvDkGreen, stpcvDkKhaki, stpcvDkMagenta, stpcvDkOliveGreen, stpcvDkOrange, stpcvDkOrchid, stpcvDkRed, stpcvDkSalmon, stpcvDkSeaGreen, stpcvDkSlateBlue, stpcvDkSlateGray, stpcvDkTurquoise, stpcvDkViolet, stpcvDeepPink, stpcvDeepSkyBlue, stpcvDimGray, stpcvDodgerBlue, stpcvFirebrick, stpcvFloralWhite, stpcvForestGreen, stpcvFuchsia, 
	stpcvGainsboro, stpcvGhostWhite, stpcvGold, stpcvGoldenrod, stpcvGray, stpcvGreen, stpcvGreenYellow, stpcvHoneydew, stpcvHotPink, stpcvIndianRed, stpcvIndigo, stpcvIvory, stpcvKhaki, stpcvLavender, stpcvLavenderBlush, stpcvLawnGreen, stpcvLemonChiffon, stpcvLtBlue, stpcvLtCoral, stpcvLtCyan, stpcvLtGoldenrodYellow, stpcvLtGray, stpcvLtGreen, stpcvLtPink, stpcvLtSalmon, stpcvLtSeaGreen, stpcvLtSkyBlue, stpcvLtSlateGray, stpcvLtSteelBlue, stpcvLtYellow, stpcvLime, stpcvLimeGreen, stpcvLinen, stpcvMagenta, stpcvMaroon, stpcvMedAquamarine, stpcvMedBlue, stpcvMedOrchid, stpcvMedPurple, stpcvMedSeaGreen, stpcvMedSlateBlue, stpcvMedSpringGreen, stpcvMedTurquoise, stpcvMedVioletRed, stpcvMidnightBlue, stpcvMintCream, stpcvMistyRose, stpcvMoccasin, stpcvNavajoWhite, 
	stpcvNavy, stpcvOldLace, stpcvOlive, stpcvOliveDrab, stpcvOrange, stpcvOrangeRed, stpcvOrchid, stpcvPaleGoldenrod, stpcvPaleGreen, stpcvPaleTurquoise, stpcvPaleVioletRed, stpcvPapayaWhip, stpcvPeachPuff, stpcvPeru, stpcvPink, stpcvPlum, stpcvPowderBlue, stpcvPurple, stpcvRed, stpcvRosyBrown, stpcvRoyalBlue, stpcvSaddleBrown, stpcvSalmon, stpcvSandyBrown, stpcvSeaGreen, stpcvSeaShell, stpcvSienna, stpcvSilver, stpcvSkyBlue, stpcvSlateBlue, stpcvSlateGray, stpcvSnow, stpcvSpringGreen, stpcvSteelBlue, stpcvTan, stpcvTeal, stpcvThistle, stpcvTomato, stpcvTurquoise, stpcvViolet, stpcvWheat, stpcvWhite, stpcvWhiteSmoke, stpcvYellow, stpcvYellowGreen };

typedef System::StaticArray<System::UnicodeString, 140> Xpgparsedrawingcommon__3;

enum DECLSPEC_DENUM TST_SystemColorVal : unsigned short { stscvScrollBar, stscvBackground, stscvActiveCaption, stscvInactiveCaption, stscvMenu, stscvWindow, stscvWindowFrame, stscvMenuText, stscvWindowText, stscvCaptionText, stscvActiveBorder, stscvInactiveBorder, stscvAppWorkspace, stscvHighlight, stscvHighlightText, stscvBtnFace, stscvBtnShadow, stscvGrayText, stscvBtnText, stscvInactiveCaptionText, stscvBtnHighlight, stscv3dDkShadow, stscv3dLight, stscvInfoText, stscvInfoBk, stscvHotLight, stscvGradientActiveCaption, stscvGradientInactiveCaption, stscvMenuHighlight, stscvMenuBar };

typedef System::StaticArray<System::UnicodeString, 30> Xpgparsedrawingcommon__4;

enum DECLSPEC_DENUM TST_RectAlignment : unsigned short { straTl, straT, straTr, straL, straCtr, straR, straBl, straB, straBr };

typedef System::StaticArray<System::UnicodeString, 9> Xpgparsedrawingcommon__5;

enum DECLSPEC_DENUM TST_PathShadeType : unsigned short { stpstShape, stpstCircle, stpstRect };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparsedrawingcommon__6;

enum DECLSPEC_DENUM TST_PresetShadowVal : unsigned short { stpsvShdw1, stpsvShdw2, stpsvShdw3, stpsvShdw4, stpsvShdw5, stpsvShdw6, stpsvShdw7, stpsvShdw8, stpsvShdw9, stpsvShdw10, stpsvShdw11, stpsvShdw12, stpsvShdw13, stpsvShdw14, stpsvShdw15, stpsvShdw16, stpsvShdw17, stpsvShdw18, stpsvShdw19, stpsvShdw20 };

typedef System::StaticArray<System::UnicodeString, 20> Xpgparsedrawingcommon__7;

enum DECLSPEC_DENUM TST_PresetPatternVal : unsigned short { stppvPct5, stppvPct10, stppvPct20, stppvPct25, stppvPct30, stppvPct40, stppvPct50, stppvPct60, stppvPct70, stppvPct75, stppvPct80, stppvPct90, stppvHorz, stppvVert, stppvLtHorz, stppvLtVert, stppvDkHorz, stppvDkVert, stppvNarHorz, stppvNarVert, stppvDashHorz, stppvDashVert, stppvCross, stppvDnDiag, stppvUpDiag, stppvLtDnDiag, stppvLtUpDiag, stppvDkDnDiag, stppvDkUpDiag, stppvWdDnDiag, stppvWdUpDiag, stppvDashDnDiag, stppvDashUpDiag, stppvDiagCross, stppvSmCheck, stppvLgCheck, stppvSmGrid, stppvLgGrid, stppvDotGrid, stppvSmConfetti, stppvLgConfetti, stppvHorzBrick, stppvDiagBrick, stppvSolidDmnd, stppvOpenDmnd, stppvDotDmnd, stppvPlaid, stppvSphere, stppvWeave, stppvDivot, stppvShingle, stppvWave, 
	stppvTrellis, stppvZigZag };

typedef System::StaticArray<System::UnicodeString, 54> Xpgparsedrawingcommon__8;

enum DECLSPEC_DENUM TST_TileFlipMode : unsigned short { sttfmNone, sttfmX, sttfmY, sttfmXy };

typedef System::StaticArray<System::UnicodeString, 4> Xpgparsedrawingcommon__9;

enum DECLSPEC_DENUM TST_BlipCompression : unsigned short { stbcEmail, stbcScreen, stbcPrint, stbcHqprint, stbcNone };

typedef System::StaticArray<System::UnicodeString, 5> Xpgparsedrawingcommon__01;

enum DECLSPEC_DENUM TST_EffectContainerType : unsigned short { stectSib, stectTree };

typedef System::StaticArray<System::UnicodeString, 2> Xpgparsedrawingcommon__11;

enum DECLSPEC_DENUM TST_BlendMode : unsigned short { stbmOver, stbmMult, stbmScreen, stbmDarken, stbmLighten };

typedef System::StaticArray<System::UnicodeString, 5> Xpgparsedrawingcommon__21;

enum DECLSPEC_DENUM TST_ShapeType : unsigned short { ststLine, ststLineInv, ststTriangle, ststRtTriangle, ststRect, ststDiamond, ststParallelogram, ststTrapezoid, ststNonIsoscelesTrapezoid, ststPentagon, ststHexagon, ststHeptagon, ststOctagon, ststDecagon, ststDodecagon, ststStar4, ststStar5, ststStar6, ststStar7, ststStar8, ststStar10, ststStar12, ststStar16, ststStar24, ststStar32, ststRoundRect, ststRound1Rect, ststRound2SameRect, ststRound2DiagRect, ststSnipRoundRect, ststSnip1Rect, ststSnip2SameRect, ststSnip2DiagRect, ststPlaque, ststEllipse, ststTeardrop, ststHomePlate, ststChevron, ststPieWedge, ststPie, ststBlockArc, ststDonut, ststNoSmoking, ststRightArrow, ststLeftArrow, ststUpArrow, ststDownArrow, ststStripedRightArrow, ststNotchedRightArrow, 
	ststBentUpArrow, ststLeftRightArrow, ststUpDownArrow, ststLeftUpArrow, ststLeftRightUpArrow, ststQuadArrow, ststLeftArrowCallout, ststRightArrowCallout, ststUpArrowCallout, ststDownArrowCallout, ststLeftRightArrowCallout, ststUpDownArrowCallout, ststQuadArrowCallout, ststBentArrow, ststUturnArrow, ststCircularArrow, ststLeftCircularArrow, ststLeftRightCircularArrow, ststCurvedRightArrow, ststCurvedLeftArrow, ststCurvedUpArrow, ststCurvedDownArrow, ststSwooshArrow, ststCube, ststCan, ststLightningBolt, ststHeart, ststSun, ststMoon, ststSmileyFace, ststIrregularSeal1, ststIrregularSeal2, ststFoldedCorner, ststBevel, ststFrame, ststHalfFrame, ststCorner, ststDiagStripe, ststChord, ststArc, ststLeftBracket, ststRightBracket, ststLeftBrace, ststRightBrace, 
	ststBracketPair, ststBracePair, ststStraightConnector1, ststBentConnector2, ststBentConnector3, ststBentConnector4, ststBentConnector5, ststCurvedConnector2, ststCurvedConnector3, ststCurvedConnector4, ststCurvedConnector5, ststCallout1, ststCallout2, ststCallout3, ststAccentCallout1, ststAccentCallout2, ststAccentCallout3, ststBorderCallout1, ststBorderCallout2, ststBorderCallout3, ststAccentBorderCallout1, ststAccentBorderCallout2, ststAccentBorderCallout3, ststWedgeRectCallout, ststWedgeRoundRectCallout, ststWedgeEllipseCallout, ststCloudCallout, ststCloud, ststRibbon, ststRibbon2, ststEllipseRibbon, ststEllipseRibbon2, ststLeftRightRibbon, ststVerticalScroll, ststHorizontalScroll, ststWave, ststDoubleWave, ststPlus, ststFlowChartProcess, 
	ststFlowChartDecision, ststFlowChartInputOutput, ststFlowChartPredefinedProcess, ststFlowChartInternalStorage, ststFlowChartDocument, ststFlowChartMultidocument, ststFlowChartTerminator, ststFlowChartPreparation, ststFlowChartManualInput, ststFlowChartManualOperation, ststFlowChartConnector, ststFlowChartPunchedCard, ststFlowChartPunchedTape, ststFlowChartSummingJunction, ststFlowChartOr, ststFlowChartCollate, ststFlowChartSort, ststFlowChartExtract, ststFlowChartMerge, ststFlowChartOfflineStorage, ststFlowChartOnlineStorage, ststFlowChartMagneticTape, ststFlowChartMagneticDisk, ststFlowChartMagneticDrum, ststFlowChartDisplay, ststFlowChartDelay, ststFlowChartAlternateProcess, ststFlowChartOffpageConnector, ststActionButtonBlank, ststActionButtonHome, 
	ststActionButtonHelp, ststActionButtonInformation, ststActionButtonForwardNext, ststActionButtonBackPrevious, ststActionButtonEnd, ststActionButtonBeginning, ststActionButtonReturn, ststActionButtonDocument, ststActionButtonSound, ststActionButtonMovie, ststGear6, ststGear9, ststFunnel, ststMathPlus, ststMathMinus, ststMathMultiply, ststMathDivide, ststMathEqual, ststMathNotEqual, ststCornerTabs, ststSquareTabs, ststPlaqueTabs, ststChartX, ststChartStar, ststChartPlus };

typedef System::StaticArray<System::UnicodeString, 187> Xpgparsedrawingcommon__31;

enum DECLSPEC_DENUM TST_PathFillMode : unsigned short { stpfmNone, stpfmNorm, stpfmLighten, stpfmLightenLess, stpfmDarken, stpfmDarkenLess };

typedef System::StaticArray<System::UnicodeString, 6> Xpgparsedrawingcommon__41;

enum DECLSPEC_DENUM TST_TextShapeType : unsigned short { sttstTextNoShape, sttstTextPlain, sttstTextStop, sttstTextTriangle, sttstTextTriangleInverted, sttstTextChevron, sttstTextChevronInverted, sttstTextRingInside, sttstTextRingOutside, sttstTextArchUp, sttstTextArchDown, sttstTextCircle, sttstTextButton, sttstTextArchUpPour, sttstTextArchDownPour, sttstTextCirclePour, sttstTextButtonPour, sttstTextCurveUp, sttstTextCurveDown, sttstTextCanUp, sttstTextCanDown, sttstTextWave1, sttstTextWave2, sttstTextDoubleWave1, sttstTextWave4, sttstTextInflate, sttstTextDeflate, sttstTextInflateBottom, sttstTextDeflateBottom, sttstTextInflateTop, sttstTextDeflateTop, sttstTextDeflateInflate, sttstTextDeflateInflateDeflate, sttstTextFadeRight, sttstTextFadeLeft, 
	sttstTextFadeUp, sttstTextFadeDown, sttstTextSlantUp, sttstTextSlantDown, sttstTextCascadeUp, sttstTextCascadeDown };

typedef System::StaticArray<System::UnicodeString, 41> Xpgparsedrawingcommon__51;

enum DECLSPEC_DENUM TST_PresetCameraType : unsigned short { stpctLegacyObliqueTopLeft, stpctLegacyObliqueTop, stpctLegacyObliqueTopRight, stpctLegacyObliqueLeft, stpctLegacyObliqueFront, stpctLegacyObliqueRight, stpctLegacyObliqueBottomLeft, stpctLegacyObliqueBottom, stpctLegacyObliqueBottomRight, stpctLegacyPerspectiveTopLeft, stpctLegacyPerspectiveTop, stpctLegacyPerspectiveTopRight, stpctLegacyPerspectiveLeft, stpctLegacyPerspectiveFront, stpctLegacyPerspectiveRight, stpctLegacyPerspectiveBottomLeft, stpctLegacyPerspectiveBottom, stpctLegacyPerspectiveBottomRight, stpctOrthographicFront, stpctIsometricTopUp, stpctIsometricTopDown, stpctIsometricBottomUp, stpctIsometricBottomDown, stpctIsometricLeftUp, stpctIsometricLeftDown, stpctIsometricRightUp, 
	stpctIsometricRightDown, stpctIsometricOffAxis1Left, stpctIsometricOffAxis1Right, stpctIsometricOffAxis1Top, stpctIsometricOffAxis2Left, stpctIsometricOffAxis2Right, stpctIsometricOffAxis2Top, stpctIsometricOffAxis3Left, stpctIsometricOffAxis3Right, stpctIsometricOffAxis3Bottom, stpctIsometricOffAxis4Left, stpctIsometricOffAxis4Right, stpctIsometricOffAxis4Bottom, stpctObliqueTopLeft, stpctObliqueTop, stpctObliqueTopRight, stpctObliqueLeft, stpctObliqueRight, stpctObliqueBottomLeft, stpctObliqueBottom, stpctObliqueBottomRight, stpctPerspectiveFront, stpctPerspectiveLeft, stpctPerspectiveRight, stpctPerspectiveAbove, stpctPerspectiveBelow, stpctPerspectiveAboveLeftFacing, stpctPerspectiveAboveRightFacing, stpctPerspectiveContrastingLeftFacing, 
	stpctPerspectiveContrastingRightFacing, stpctPerspectiveHeroicLeftFacing, stpctPerspectiveHeroicRightFacing, stpctPerspectiveHeroicExtremeLeftFacing, stpctPerspectiveHeroicExtremeRightFacing, stpctPerspectiveRelaxed, stpctPerspectiveRelaxedModerately };

typedef System::StaticArray<System::UnicodeString, 62> Xpgparsedrawingcommon__61;

enum DECLSPEC_DENUM TST_LightRigDirection : unsigned short { stlrdTl, stlrdT, stlrdTr, stlrdL, stlrdR, stlrdBl, stlrdB, stlrdBr };

typedef System::StaticArray<System::UnicodeString, 8> Xpgparsedrawingcommon__71;

enum DECLSPEC_DENUM TST_LightRigType : unsigned short { stlrtLegacyFlat1, stlrtLegacyFlat2, stlrtLegacyFlat3, stlrtLegacyFlat4, stlrtLegacyNormal1, stlrtLegacyNormal2, stlrtLegacyNormal3, stlrtLegacyNormal4, stlrtLegacyHarsh1, stlrtLegacyHarsh2, stlrtLegacyHarsh3, stlrtLegacyHarsh4, stlrtThreePt, stlrtBalanced, stlrtSoft, stlrtHarsh, stlrtFlood, stlrtContrasting, stlrtMorning, stlrtSunrise, stlrtSunset, stlrtChilly, stlrtFreezing, stlrtFlat, stlrtTwoPt, stlrtGlow, stlrtBrightRoom };

typedef System::StaticArray<System::UnicodeString, 27> Xpgparsedrawingcommon__81;

enum DECLSPEC_DENUM TST_PenAlignment : unsigned short { stpaCtr, stpaIn };

typedef System::StaticArray<System::UnicodeString, 2> Xpgparsedrawingcommon__91;

enum DECLSPEC_DENUM TST_LineEndType : unsigned short { stletNone, stletTriangle, stletStealth, stletDiamond, stletOval, stletArrow };

typedef System::StaticArray<System::UnicodeString, 6> Xpgparsedrawingcommon__02;

enum DECLSPEC_DENUM TST_LineEndWidth : unsigned short { stlewSm, stlewMed, stlewLg };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparsedrawingcommon__12;

enum DECLSPEC_DENUM TST_LineCap : unsigned short { stlcRnd, stlcSq, stlcFlat };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparsedrawingcommon__22;

enum DECLSPEC_DENUM TST_PresetLineDashVal : unsigned short { stpldvSolid, stpldvDot, stpldvDash, stpldvLgDash, stpldvDashDot, stpldvLgDashDot, stpldvLgDashDotDot, stpldvSysDash, stpldvSysDot, stpldvSysDashDot, stpldvSysDashDotDot };

typedef System::StaticArray<System::UnicodeString, 11> Xpgparsedrawingcommon__32;

enum DECLSPEC_DENUM TST_LineEndLength : unsigned short { stlelSm, stlelMed, stlelLg };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparsedrawingcommon__42;

enum DECLSPEC_DENUM TST_CompoundLine : unsigned short { stclSng, stclDbl, stclThickThin, stclThinThick, stclTri };

typedef System::StaticArray<System::UnicodeString, 5> Xpgparsedrawingcommon__52;

enum DECLSPEC_DENUM TST_BevelPresetType : unsigned short { stbptRelaxedInset, stbptCircle, stbptSlope, stbptCross, stbptAngle, stbptSoftRound, stbptConvex, stbptCoolSlant, stbptDivot, stbptRiblet, stbptHardEdge, stbptArtDeco };

typedef System::StaticArray<System::UnicodeString, 12> Xpgparsedrawingcommon__62;

enum DECLSPEC_DENUM TST_PresetMaterialType : unsigned short { stpmtLegacyMatte, stpmtLegacyPlastic, stpmtLegacyMetal, stpmtLegacyWireframe, stpmtMatte, stpmtPlastic, stpmtMetal, stpmtWarmMatte, stpmtTranslucentPowder, stpmtPowder, stpmtDkEdge, stpmtSoftEdge, stpmtClear, stpmtFlat, stpmtSoftmetal };

typedef System::StaticArray<System::UnicodeString, 15> Xpgparsedrawingcommon__72;

enum DECLSPEC_DENUM TST_TextCapsType : unsigned short { sttctNone, sttctSmall, sttctAll };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparsedrawingcommon__82;

enum DECLSPEC_DENUM TST_TextStrikeType : unsigned short { sttstNoStrike, sttstSngStrike, sttstDblStrike };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparsedrawingcommon__92;

enum DECLSPEC_DENUM TST_TextUnderlineType : unsigned short { sttutNone, sttutWords, sttutSng, sttutDbl, sttutHeavy, sttutDotted, sttutDottedHeavy, sttutDash, sttutDashHeavy, sttutDashLong, sttutDashLongHeavy, sttutDotDash, sttutDotDashHeavy, sttutDotDotDash, sttutDotDotDashHeavy, sttutWavy, sttutWavyHeavy, sttutWavyDbl };

typedef System::StaticArray<System::UnicodeString, 18> Xpgparsedrawingcommon__03;

enum DECLSPEC_DENUM TST_TextAutonumberScheme : unsigned short { sttasAlphaLcParenBoth, sttasAlphaUcParenBoth, sttasAlphaLcParenR, sttasAlphaUcParenR, sttasAlphaLcPeriod, sttasAlphaUcPeriod, sttasArabicParenBoth, sttasArabicParenR, sttasArabicPeriod, sttasArabicPlain, sttasRomanLcParenBoth, sttasRomanUcParenBoth, sttasRomanLcParenR, sttasRomanUcParenR, sttasRomanLcPeriod, sttasRomanUcPeriod, sttasCircleNumDbPlain, sttasCircleNumWdBlackPlain, sttasCircleNumWdWhitePlain, sttasArabicDbPeriod, sttasArabicDbPlain, sttasEa1ChsPeriod, sttasEa1ChsPlain, sttasEa1ChtPeriod, sttasEa1ChtPlain, sttasEa1JpnChsDbPeriod, sttasEa1JpnKorPlain, sttasEa1JpnKorPeriod, sttasArabic1Minus, sttasArabic2Minus, sttasHebrew2Minus, sttasThaiAlphaPeriod, sttasThaiAlphaParenR, 
	sttasThaiAlphaParenBoth, sttasThaiNumPeriod, sttasThaiNumParenR, sttasThaiNumParenBoth, sttasHindiAlphaPeriod, sttasHindiNumPeriod, sttasHindiNumParenR, sttasHindiAlpha1Period };

typedef System::StaticArray<System::UnicodeString, 41> Xpgparsedrawingcommon__13;

enum DECLSPEC_DENUM TST_ColorSchemeIndex : unsigned short { stcsiDk1, stcsiLt1, stcsiDk2, stcsiLt2, stcsiAccent1, stcsiAccent2, stcsiAccent3, stcsiAccent4, stcsiAccent5, stcsiAccent6, stcsiHlink, stcsiFolHlink };

typedef System::StaticArray<System::UnicodeString, 12> Xpgparsedrawingcommon__23;

enum DECLSPEC_DENUM TST_FontCollectionIndex : unsigned short { stfciMajor, stfciMinor, stfciNone };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparsedrawingcommon__33;

enum DECLSPEC_DENUM TST_TextAlignType : unsigned short { sttatL, sttatCtr, sttatR, sttatJust, sttatJustLow, sttatDist, sttatThaiDist };

typedef System::StaticArray<System::UnicodeString, 7> Xpgparsedrawingcommon__43;

enum DECLSPEC_DENUM TST_TextFontAlignType : unsigned short { sttfatAuto, sttfatT, sttfatCtr, sttfatBase, sttfatB };

typedef System::StaticArray<System::UnicodeString, 5> Xpgparsedrawingcommon__53;

enum DECLSPEC_DENUM TST_TextTabAlignType : unsigned short { stttatL, stttatCtr, stttatR, stttatDec };

typedef System::StaticArray<System::UnicodeString, 4> Xpgparsedrawingcommon__63;

enum DECLSPEC_DENUM TST_TextAnchoringType : unsigned short { sttatT, sttatCtr1, sttatB, sttatJust1, sttatDist1 };

typedef System::StaticArray<System::UnicodeString, 5> Xpgparsedrawingcommon__73;

enum DECLSPEC_DENUM TST_TextVerticalType : unsigned short { sttvtHorz, sttvtVert, sttvtVert270, sttvtWordArtVert, sttvtEaVert, sttvtMongolianVert, sttvtWordArtVertRtl };

typedef System::StaticArray<System::UnicodeString, 7> Xpgparsedrawingcommon__83;

enum DECLSPEC_DENUM TST_TextWrappingType : unsigned short { sttwtNone, sttwtSquare };

typedef System::StaticArray<System::UnicodeString, 2> Xpgparsedrawingcommon__93;

enum DECLSPEC_DENUM TST_TextHorzOverflowType : unsigned short { stthotOverflow, stthotClip };

typedef System::StaticArray<System::UnicodeString, 2> Xpgparsedrawingcommon__04;

enum DECLSPEC_DENUM TST_TextVertOverflowType : unsigned short { sttvotOverflow, sttvotEllipsis, sttvotClip };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparsedrawingcommon__14;

typedef TST_AdjAngle *PST_AdjAngle;

struct DECLSPEC_DRECORD TST_AdjAngle
{
public:
	System::UnicodeString Val2;
	
public:
	int nVal;
	union
	{
		struct 
		{
			System::Byte Dummy2;
		};
		struct 
		{
			int Val1;
		};
		
	};
};


typedef TST_AdjCoordinate *PST_AdjCoordinate;

struct DECLSPEC_DRECORD TST_AdjCoordinate
{
public:
	System::UnicodeString Val2;
	
public:
	int nVal;
	union
	{
		struct 
		{
			System::Byte Dummy2;
		};
		struct 
		{
			int Val1;
		};
		
	};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGDocBase : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Xpgputils::TXpgPErrors* FErrors;
	Xc12graphics::TXc12GraphicManager* FGrManager;
	System::UnicodeString FNS;
	
public:
	__fastcall TXPGDocBase()/* overload */;
	__fastcall TXPGDocBase(Xc12graphics::TXc12GraphicManager* AGrManager)/* overload */;
	__property Xpgputils::TXpgPErrors* Errors = {read=FErrors};
	__property Xc12graphics::TXc12GraphicManager* GrManager = {read=FGrManager};
	__property System::UnicodeString NS = {read=FNS};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TXPGDocBase() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGBase : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TXPGDocBase* FOwner;
	int FElementCount;
	int FAttributeCount;
	Xpgpxmlutils::TXpgAssigneds FAssigneds;
	int FTag;
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	virtual void __fastcall AfterTag();
	__classmethod int __fastcall StrToEnum(System::UnicodeString AValue);
	__classmethod int __fastcall StrToEnumDef(System::UnicodeString AValue, int ADefault);
	__classmethod bool __fastcall TryStrToEnum(System::UnicodeString AValue, System::UnicodeString AText, System::UnicodeString *AEnumNames, const int AEnumNames_High, System::PInteger APtrInt);
	
public:
	bool __fastcall Available();
	bool __fastcall Assigned();
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	__property int ElementCount = {read=FElementCount, write=FElementCount, nodefault};
	__property int AttributeCount = {read=FAttributeCount, write=FAttributeCount, nodefault};
	__property Xpgpxmlutils::TXpgAssigneds Assigneds = {read=FAssigneds, write=FAssigneds, nodefault};
	__property TXPGDocBase* Owner = {read=FOwner};
	__property int Tag = {read=FTag, write=FTag, nodefault};
public:
	/* TObject.Create */ inline __fastcall TXPGBase() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXPGBase() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGBaseList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXPGBase* operator[](int Index) { return this->Items[Index]; }
	
private:
	TXPGBase* __fastcall GetItems(int Index);
	
public:
	__fastcall TXPGBaseList();
	HIDESBASE TXPGBase* __fastcall Add(TXPGBase* AItem);
	void __fastcall CheckAssigned();
	__property TXPGBase* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXPGBaseList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGAnyElement : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FElementName;
	System::UnicodeString FContent;
	Xpgpxmlutils::TXpgXMLAttributeList* FAttributes;
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	
public:
	__fastcall TXPGAnyElement();
	__fastcall virtual ~TXPGAnyElement();
	__property System::UnicodeString ElementName = {read=FElementName, write=FElementName};
	__property System::UnicodeString Content = {read=FContent, write=FContent};
	__property Xpgpxmlutils::TXpgXMLAttributeList* Attributes = {read=FAttributes};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGAnyElements : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
public:
	TXPGAnyElement* operator[](int Index) { return this->Items[Index]; }
	
protected:
	TXPGAnyElement* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TXPGAnyElement* __fastcall Add(System::UnicodeString AElementName, System::UnicodeString AContent);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	HIDESBASE void __fastcall Assign(TXPGAnyElements* AItem);
	__property TXPGAnyElement* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TObjectList.Create */ inline __fastcall TXPGAnyElements()/* overload */ : System::Contnrs::TObjectList() { }
	/* TObjectList.Create */ inline __fastcall TXPGAnyElements(bool AOwnsObjects)/* overload */ : System::Contnrs::TObjectList(AOwnsObjects) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXPGAnyElements() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGBaseObjectList : public System::Contnrs::TObjectList
{
	typedef System::Contnrs::TObjectList inherited;
	
protected:
	TXPGDocBase* FOwner;
	bool FAssigned;
	TXPGBase* __fastcall GetItems(int Index);
	
public:
	__fastcall TXPGBaseObjectList(TXPGDocBase* AOwner);
	__property TXPGBase* Items[int Index] = {read=GetItems};
public:
	/* TList.Destroy */ inline __fastcall virtual ~TXPGBaseObjectList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPSAlternateContent : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TXPGBase* FCurrent;
	bool FInFallback;
	
public:
	void __fastcall BeginHandle(TXPGBase* ACurrent);
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
public:
	/* TObject.Create */ inline __fastcall TXPSAlternateContent() : TXPGBase() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXPSAlternateContent() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGReader : public Xpgpxml::TXpgReadXML
{
	typedef Xpgpxml::TXpgReadXML inherited;
	
protected:
	TXPGBase* FCurrent;
	System::Contnrs::TObjectStack* FStack;
	Xpgputils::TXpgPErrors* FErrors;
	TXPSAlternateContent* FAlternateContent;
	
public:
	__fastcall TXPGReader(Xpgputils::TXpgPErrors* AErrors, TXPGBase* ARoot);
	__fastcall virtual ~TXPGReader();
	virtual void __fastcall BeginTag();
	virtual void __fastcall EndTag();
	__property Xpgputils::TXpgPErrors* Errors = {read=FErrors};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_ColorTransform : public TXPGBase
{
	typedef TXPGBase inherited;
	
private:
	double __fastcall GetAsDouble(const System::UnicodeString AName);
	void __fastcall SetAsDouble(const System::UnicodeString AName, const double Value);
	int __fastcall GetAsInteger(const System::UnicodeString AName);
	void __fastcall SetAsInteger(const System::UnicodeString AName, int Value);
	
protected:
	System::Classes::TStringList* FItems;
	void __fastcall ReadAddValue(const System::UnicodeString AName, int AValue);
	void __fastcall GetNameValue(const int AIndex, /* out */ System::UnicodeString &AName, /* out */ int &AValue);
	int __fastcall HashA(const System::UnicodeString AStr);
	
public:
	__fastcall TEG_ColorTransform(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_ColorTransform();
	int __fastcall Find(const System::UnicodeString AName);
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall Clear();
	void __fastcall Assign(TEG_ColorTransform* AItem);
	void __fastcall CopyTo(TEG_ColorTransform* AItem);
	unsigned __fastcall Apply(unsigned ARGB);
	__property double AsDouble[const System::UnicodeString AName] = {read=GetAsDouble, write=SetAsDouble};
	__property int AsInteger[const System::UnicodeString AName] = {read=GetAsInteger, write=SetAsInteger};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ScRgbColor : public TXPGBase
{
	typedef TXPGBase inherited;
	
private:
	unsigned __fastcall GetRGB();
	void __fastcall SetRGB(const unsigned Value);
	
protected:
	int FR;
	int FG;
	int FB;
	TEG_ColorTransform* FA_EG_ColorTransform;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ScRgbColor(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ScRgbColor();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ScRgbColor* AItem);
	void __fastcall CopyTo(TCT_ScRgbColor* AItem);
	__property unsigned RGB = {read=GetRGB, write=SetRGB, nodefault};
	__property int R = {read=FR, write=FR, nodefault};
	__property int G = {read=FG, write=FG, nodefault};
	__property int B = {read=FB, write=FB, nodefault};
	__property TEG_ColorTransform* ColorTransform = {read=FA_EG_ColorTransform};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SRgbColor : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FVal;
	TEG_ColorTransform* FA_EG_ColorTransform;
	
public:
	__fastcall TCT_SRgbColor(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SRgbColor();
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	void __fastcall Clear();
	void __fastcall Assign(TCT_SRgbColor* AItem);
	void __fastcall CopyTo(TCT_SRgbColor* AItem);
	__property int Val = {read=FVal, write=FVal, nodefault};
	__property TEG_ColorTransform* ColorTransform = {read=FA_EG_ColorTransform};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_HslColor : public TXPGBase
{
	typedef TXPGBase inherited;
	
private:
	unsigned __fastcall GetHSL();
	void __fastcall SetHSL(const unsigned Value);
	
protected:
	int FHue;
	int FSat;
	int FLum;
	TEG_ColorTransform* FA_EG_ColorTransform;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_HslColor(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_HslColor();
	void __fastcall Clear();
	void __fastcall Assign(TCT_HslColor* AItem);
	void __fastcall CopyTo(TCT_HslColor* AItem);
	__property int Hue = {read=FHue, write=FHue, nodefault};
	__property int Sat = {read=FSat, write=FSat, nodefault};
	__property int Lum = {read=FLum, write=FLum, nodefault};
	__property unsigned HSL = {read=GetHSL, write=SetHSL, nodefault};
	__property TEG_ColorTransform* ColorTransform = {read=FA_EG_ColorTransform};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SystemColor : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_SystemColorVal FVal;
	int FLastClr;
	TEG_ColorTransform* FA_EG_ColorTransform;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_SystemColor(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SystemColor();
	void __fastcall Clear();
	void __fastcall Assign(TCT_SystemColor* AItem);
	void __fastcall CopyTo(TCT_SystemColor* AItem);
	__property TST_SystemColorVal Val = {read=FVal, write=FVal, nodefault};
	__property int LastClr = {read=FLastClr, write=FLastClr, nodefault};
	__property TEG_ColorTransform* ColorTransform = {read=FA_EG_ColorTransform};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SchemeColor : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_SchemeColorVal FVal;
	TEG_ColorTransform* FA_EG_ColorTransform;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_SchemeColor(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SchemeColor();
	void __fastcall Clear();
	void __fastcall Assign(TCT_SchemeColor* AItem);
	void __fastcall CopyTo(TCT_SchemeColor* AItem);
	__property TST_SchemeColorVal Val = {read=FVal, write=FVal, nodefault};
	__property TEG_ColorTransform* ColorTransform = {read=FA_EG_ColorTransform};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PresetColor : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_PresetColorVal FVal;
	TEG_ColorTransform* FA_EG_ColorTransform;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PresetColor(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PresetColor();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PresetColor* AItem);
	void __fastcall CopyTo(TCT_PresetColor* AItem);
	__property TST_PresetColorVal Val = {read=FVal, write=FVal, nodefault};
	__property TEG_ColorTransform* ColorTransform = {read=FA_EG_ColorTransform};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_ColorChoice : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_ScRgbColor* FA_ScrgbClr;
	TCT_SRgbColor* FA_SrgbClr;
	TCT_HslColor* FA_HslClr;
	TCT_SystemColor* FA_SysClr;
	TCT_SchemeColor* FA_SchemeClr;
	TCT_PresetColor* FA_PrstClr;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_ColorChoice(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_ColorChoice();
	void __fastcall Clear();
	void __fastcall Assign(TEG_ColorChoice* AItem);
	void __fastcall CopyTo(TEG_ColorChoice* AItem);
	TCT_ScRgbColor* __fastcall Create_ScrgbClr();
	TCT_SRgbColor* __fastcall Create_SrgbClr();
	TCT_HslColor* __fastcall Create_HslClr();
	TCT_SystemColor* __fastcall Create_SysClr();
	TCT_SchemeColor* __fastcall Create_SchemeClr();
	TCT_PresetColor* __fastcall Create_PrstClr();
	__property TCT_ScRgbColor* ScrgbClr = {read=FA_ScrgbClr};
	__property TCT_SRgbColor* SrgbClr = {read=FA_SrgbClr};
	__property TCT_HslColor* HslClr = {read=FA_HslClr};
	__property TCT_SystemColor* SysClr = {read=FA_SysClr};
	__property TCT_SchemeColor* SchemeClr = {read=FA_SchemeClr};
	__property TCT_PresetColor* PrstClr = {read=FA_PrstClr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OfficeArtExtension : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FUri;
	TXPGAnyElements* FAnyElements;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_OfficeArtExtension(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_OfficeArtExtension();
	void __fastcall Clear();
	void __fastcall Assign(TCT_OfficeArtExtension* AItem);
	void __fastcall CopyTo(TCT_OfficeArtExtension* AItem);
	__property System::UnicodeString Uri = {read=FUri, write=FUri};
	__property TXPGAnyElements* AnyElements = {read=FAnyElements};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OfficeArtExtensionXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_OfficeArtExtension* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_OfficeArtExtension* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_OfficeArtExtension* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_OfficeArtExtensionXpgList* AItem);
	void __fastcall CopyTo(TCT_OfficeArtExtensionXpgList* AItem);
	__property TCT_OfficeArtExtension* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_OfficeArtExtensionXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_OfficeArtExtensionXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RelativeRect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FL;
	int FT;
	int FR;
	int FB;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_RelativeRect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_RelativeRect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_RelativeRect* AItem);
	void __fastcall CopyTo(TCT_RelativeRect* AItem);
	bool __fastcall Equal(const int ALeft, const int ARight, const int ATop, const int ABottom);
	bool __fastcall SetValues(const int ALeft, const int ARight, const int ATop, const int ABottom);
	__property int L = {read=FL, write=FL, nodefault};
	__property int T = {read=FT, write=FT, nodefault};
	__property int R = {read=FR, write=FR, nodefault};
	__property int B = {read=FB, write=FB, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Color : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TEG_ColorChoice* FA_EG_ColorChoice;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Color(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Color();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Color* AItem);
	void __fastcall CopyTo(TCT_Color* AItem);
	__property TEG_ColorChoice* A_EG_ColorChoice = {read=FA_EG_ColorChoice};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_OfficeArtExtensionList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_OfficeArtExtension* FA_Ext;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_OfficeArtExtensionList(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_OfficeArtExtensionList();
	void __fastcall Clear();
	void __fastcall Assign(TEG_OfficeArtExtensionList* AItem);
	void __fastcall CopyTo(TEG_OfficeArtExtensionList* AItem);
	TCT_OfficeArtExtension* __fastcall Create_A_Ext();
	__property TCT_OfficeArtExtension* A_Ext = {read=FA_Ext};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GradientStop : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FPos;
	TEG_ColorChoice* FA_EG_ColorChoice;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_GradientStop(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GradientStop();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GradientStop* AItem);
	void __fastcall CopyTo(TCT_GradientStop* AItem);
	__property int Pos = {read=FPos, write=FPos, nodefault};
	__property TEG_ColorChoice* ColorChoice = {read=FA_EG_ColorChoice};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GradientStopXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_GradientStop* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_GradientStop* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_GradientStop* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_GradientStopXpgList* AItem);
	void __fastcall CopyTo(TCT_GradientStopXpgList* AItem);
	__property TCT_GradientStop* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_GradientStopXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_GradientStopXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LinearShadeProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FAng;
	bool FScaled;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_LinearShadeProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LinearShadeProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_LinearShadeProperties* AItem);
	void __fastcall CopyTo(TCT_LinearShadeProperties* AItem);
	__property int Ang = {read=FAng, write=FAng, nodefault};
	__property bool Scaled = {read=FScaled, write=FScaled, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PathShadeProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_PathShadeType FPath;
	TCT_RelativeRect* FA_FillToRect;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PathShadeProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PathShadeProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PathShadeProperties* AItem);
	void __fastcall CopyTo(TCT_PathShadeProperties* AItem);
	TCT_RelativeRect* __fastcall Create_FillToRect();
	void __fastcall Free_FillToRect();
	__property TST_PathShadeType Path = {read=FPath, write=FPath, nodefault};
	__property TCT_RelativeRect* FillToRect = {read=FA_FillToRect};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AlphaBiLevelEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FThresh;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_AlphaBiLevelEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_AlphaBiLevelEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_AlphaBiLevelEffect* AItem);
	void __fastcall CopyTo(TCT_AlphaBiLevelEffect* AItem);
	__property int Thresh = {read=FThresh, write=FThresh, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AlphaBiLevelEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_AlphaBiLevelEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_AlphaBiLevelEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_AlphaBiLevelEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_AlphaBiLevelEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_AlphaBiLevelEffectXpgList* AItem);
	__property TCT_AlphaBiLevelEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_AlphaBiLevelEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_AlphaBiLevelEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AlphaCeilingEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_AlphaCeilingEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_AlphaCeilingEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_AlphaCeilingEffect* AItem);
	void __fastcall CopyTo(TCT_AlphaCeilingEffect* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AlphaCeilingEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_AlphaCeilingEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_AlphaCeilingEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_AlphaCeilingEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_AlphaCeilingEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_AlphaCeilingEffectXpgList* AItem);
	__property TCT_AlphaCeilingEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_AlphaCeilingEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_AlphaCeilingEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AlphaFloorEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_AlphaFloorEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_AlphaFloorEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_AlphaFloorEffect* AItem);
	void __fastcall CopyTo(TCT_AlphaFloorEffect* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AlphaFloorEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_AlphaFloorEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_AlphaFloorEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_AlphaFloorEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_AlphaFloorEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_AlphaFloorEffectXpgList* AItem);
	__property TCT_AlphaFloorEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_AlphaFloorEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_AlphaFloorEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AlphaInverseEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TEG_ColorChoice* FA_EG_ColorChoice;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_AlphaInverseEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_AlphaInverseEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_AlphaInverseEffect* AItem);
	void __fastcall CopyTo(TCT_AlphaInverseEffect* AItem);
	__property TEG_ColorChoice* ColorChoice = {read=FA_EG_ColorChoice};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AlphaInverseEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_AlphaInverseEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_AlphaInverseEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_AlphaInverseEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_AlphaInverseEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_AlphaInverseEffectXpgList* AItem);
	__property TCT_AlphaInverseEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_AlphaInverseEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_AlphaInverseEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AlphaModulateFixedEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FAmt;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_AlphaModulateFixedEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_AlphaModulateFixedEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_AlphaModulateFixedEffect* AItem);
	void __fastcall CopyTo(TCT_AlphaModulateFixedEffect* AItem);
	__property int Amt = {read=FAmt, write=FAmt, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AlphaModulateFixedEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_AlphaModulateFixedEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_AlphaModulateFixedEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_AlphaModulateFixedEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_AlphaModulateFixedEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_AlphaModulateFixedEffectXpgList* AItem);
	__property TCT_AlphaModulateFixedEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_AlphaModulateFixedEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_AlphaModulateFixedEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AlphaReplaceEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FA;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_AlphaReplaceEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_AlphaReplaceEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_AlphaReplaceEffect* AItem);
	void __fastcall CopyTo(TCT_AlphaReplaceEffect* AItem);
	__property int A = {read=FA, write=FA, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AlphaReplaceEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_AlphaReplaceEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_AlphaReplaceEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_AlphaReplaceEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_AlphaReplaceEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_AlphaReplaceEffectXpgList* AItem);
	__property TCT_AlphaReplaceEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_AlphaReplaceEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_AlphaReplaceEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BiLevelEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FThresh;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_BiLevelEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BiLevelEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_BiLevelEffect* AItem);
	void __fastcall CopyTo(TCT_BiLevelEffect* AItem);
	__property int Thresh = {read=FThresh, write=FThresh, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BiLevelEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_BiLevelEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_BiLevelEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_BiLevelEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_BiLevelEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_BiLevelEffectXpgList* AItem);
	__property TCT_BiLevelEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_BiLevelEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_BiLevelEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BlurEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FRad;
	bool FGrow;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_BlurEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BlurEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_BlurEffect* AItem);
	void __fastcall CopyTo(TCT_BlurEffect* AItem);
	__property int Rad = {read=FRad, write=FRad, nodefault};
	__property bool Grow = {read=FGrow, write=FGrow, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BlurEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_BlurEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_BlurEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_BlurEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_BlurEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_BlurEffectXpgList* AItem);
	__property TCT_BlurEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_BlurEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_BlurEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ColorChangeEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FUseA;
	TCT_Color* FA_ClrFrom;
	TCT_Color* FA_ClrTo;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ColorChangeEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ColorChangeEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ColorChangeEffect* AItem);
	void __fastcall CopyTo(TCT_ColorChangeEffect* AItem);
	TCT_Color* __fastcall Create_A_ClrFrom();
	TCT_Color* __fastcall Create_A_ClrTo();
	__property bool UseA = {read=FUseA, write=FUseA, nodefault};
	__property TCT_Color* A_ClrFrom = {read=FA_ClrFrom};
	__property TCT_Color* A_ClrTo = {read=FA_ClrTo};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ColorChangeEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_ColorChangeEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ColorChangeEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ColorChangeEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_ColorChangeEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_ColorChangeEffectXpgList* AItem);
	__property TCT_ColorChangeEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ColorChangeEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ColorChangeEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ColorReplaceEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TEG_ColorChoice* FA_EG_ColorChoice;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_ColorReplaceEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ColorReplaceEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ColorReplaceEffect* AItem);
	void __fastcall CopyTo(TCT_ColorReplaceEffect* AItem);
	__property TEG_ColorChoice* ColorChoice = {read=FA_EG_ColorChoice};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ColorReplaceEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_ColorReplaceEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ColorReplaceEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ColorReplaceEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_ColorReplaceEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_ColorReplaceEffectXpgList* AItem);
	__property TCT_ColorReplaceEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ColorReplaceEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ColorReplaceEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DuotoneEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TEG_ColorChoice* FA_EG_ColorChoice;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_DuotoneEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DuotoneEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_DuotoneEffect* AItem);
	void __fastcall CopyTo(TCT_DuotoneEffect* AItem);
	__property TEG_ColorChoice* ColorChoice = {read=FA_EG_ColorChoice};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DuotoneEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_DuotoneEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_DuotoneEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_DuotoneEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_DuotoneEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_DuotoneEffectXpgList* AItem);
	__property TCT_DuotoneEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_DuotoneEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_DuotoneEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GrayscaleEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_GrayscaleEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GrayscaleEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GrayscaleEffect* AItem);
	void __fastcall CopyTo(TCT_GrayscaleEffect* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GrayscaleEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_GrayscaleEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_GrayscaleEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_GrayscaleEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_GrayscaleEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_GrayscaleEffectXpgList* AItem);
	__property TCT_GrayscaleEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_GrayscaleEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_GrayscaleEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_HSLEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FHue;
	int FSat;
	int FLum;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_HSLEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_HSLEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_HSLEffect* AItem);
	void __fastcall CopyTo(TCT_HSLEffect* AItem);
	__property int Hue = {read=FHue, write=FHue, nodefault};
	__property int Sat = {read=FSat, write=FSat, nodefault};
	__property int Lum = {read=FLum, write=FLum, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_HSLEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_HSLEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_HSLEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_HSLEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_HSLEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_HSLEffectXpgList* AItem);
	__property TCT_HSLEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_HSLEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_HSLEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LuminanceEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FBright;
	int FContrast;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_LuminanceEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LuminanceEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_LuminanceEffect* AItem);
	void __fastcall CopyTo(TCT_LuminanceEffect* AItem);
	__property int Bright = {read=FBright, write=FBright, nodefault};
	__property int Contrast = {read=FContrast, write=FContrast, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LuminanceEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_LuminanceEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_LuminanceEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_LuminanceEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_LuminanceEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_LuminanceEffectXpgList* AItem);
	__property TCT_LuminanceEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_LuminanceEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_LuminanceEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TintEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FHue;
	int FAmt;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TintEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TintEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TintEffect* AItem);
	void __fastcall CopyTo(TCT_TintEffect* AItem);
	__property int Hue = {read=FHue, write=FHue, nodefault};
	__property int Amt = {read=FAmt, write=FAmt, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TintEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_TintEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_TintEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_TintEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_TintEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_TintEffectXpgList* AItem);
	__property TCT_TintEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_TintEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_TintEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OfficeArtExtensionList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TEG_OfficeArtExtensionList* FA_EG_OfficeArtExtensionList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_OfficeArtExtensionList(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_OfficeArtExtensionList();
	void __fastcall Clear();
	void __fastcall Assign(TCT_OfficeArtExtensionList* AItem);
	void __fastcall CopyTo(TCT_OfficeArtExtensionList* AItem);
	__property TEG_OfficeArtExtensionList* A_EG_OfficeArtExtensionList = {read=FA_EG_OfficeArtExtensionList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TileInfoProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FTx;
	int FTy;
	int FSx;
	int FSy;
	TST_TileFlipMode FFlip;
	TST_RectAlignment FAlgn;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TileInfoProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TileInfoProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TileInfoProperties* AItem);
	void __fastcall CopyTo(TCT_TileInfoProperties* AItem);
	__property int Tx = {read=FTx, write=FTx, nodefault};
	__property int Ty = {read=FTy, write=FTy, nodefault};
	__property int Sx = {read=FSx, write=FSx, nodefault};
	__property int Sy = {read=FSy, write=FSy, nodefault};
	__property TST_TileFlipMode Flip = {read=FFlip, write=FFlip, nodefault};
	__property TST_RectAlignment Algn = {read=FAlgn, write=FAlgn, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_StretchInfoProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_RelativeRect* FA_FillRect;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_StretchInfoProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_StretchInfoProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_StretchInfoProperties* AItem);
	void __fastcall CopyTo(TCT_StretchInfoProperties* AItem);
	TCT_RelativeRect* __fastcall Create_A_FillRect();
	__property TCT_RelativeRect* FillRect = {read=FA_FillRect};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GradientStopList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_GradientStopXpgList* FA_GsXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_GradientStopList(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GradientStopList();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GradientStopList* AItem);
	void __fastcall CopyTo(TCT_GradientStopList* AItem);
	TCT_GradientStopXpgList* __fastcall Create_A_GsXpgList();
	__property TCT_GradientStopXpgList* Gs = {read=FA_GsXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_ShadeProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_LinearShadeProperties* FA_Lin;
	TCT_PathShadeProperties* FA_Path;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_ShadeProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_ShadeProperties();
	void __fastcall Clear();
	void __fastcall Assign(TEG_ShadeProperties* AItem);
	void __fastcall CopyTo(TEG_ShadeProperties* AItem);
	TCT_LinearShadeProperties* __fastcall Create_Lin();
	TCT_PathShadeProperties* __fastcall Create_Path();
	__property TCT_LinearShadeProperties* Lin = {read=FA_Lin};
	__property TCT_PathShadeProperties* Path = {read=FA_Path};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Blip : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	Xc12graphics::TXc12GraphicImage* FImage;
	System::UnicodeString FR_Embed;
	System::UnicodeString FR_Link;
	TST_BlipCompression FCstate;
	TCT_AlphaBiLevelEffect* FA_AlphaBiLevel;
	TCT_AlphaCeilingEffect* FA_AlphaCeiling;
	TCT_AlphaFloorEffect* FA_AlphaFloor;
	TCT_AlphaInverseEffect* FA_AlphaInv;
	TCT_AlphaModulateEffect* FA_AlphaMod;
	TCT_AlphaModulateFixedEffect* FA_AlphaModFix;
	TCT_AlphaReplaceEffect* FA_AlphaRepl;
	TCT_BiLevelEffect* FA_BiLevel;
	TCT_BlurEffect* FA_Blur;
	TCT_ColorChangeEffect* FA_ClrChange;
	TCT_ColorReplaceEffect* FA_ClrRepl;
	TCT_DuotoneEffect* FA_Duotone;
	TCT_FillOverlayEffect* FA_FillOverlay;
	TCT_GrayscaleEffect* FA_Grayscl;
	TCT_HSLEffect* FA_Hsl;
	TCT_LuminanceEffect* FA_Lum;
	TCT_TintEffect* FA_Tint;
	TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Blip(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Blip();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Blip* AItem);
	void __fastcall CopyTo(TCT_Blip* AItem);
	TCT_AlphaBiLevelEffect* __fastcall Create_AlphaBiLevel();
	TCT_AlphaCeilingEffect* __fastcall Create_AlphaCeiling();
	TCT_AlphaFloorEffect* __fastcall Create_AlphaFloor();
	TCT_AlphaInverseEffect* __fastcall Create_AlphaInv();
	TCT_AlphaModulateEffect* __fastcall Create_AlphaMod();
	TCT_AlphaModulateFixedEffect* __fastcall Create_AlphaModFix();
	TCT_AlphaReplaceEffect* __fastcall Create_AlphaRepl();
	TCT_BiLevelEffect* __fastcall Create_BiLevel();
	TCT_BlurEffect* __fastcall Create_Blur();
	TCT_ColorChangeEffect* __fastcall Create_ClrChange();
	TCT_ColorReplaceEffect* __fastcall Create_ClrRepl();
	TCT_DuotoneEffect* __fastcall Create_Duotone();
	TCT_FillOverlayEffect* __fastcall Create_FillOverlay();
	TCT_GrayscaleEffect* __fastcall Create_Grayscl();
	TCT_HSLEffect* __fastcall Create_Hsl();
	TCT_LuminanceEffect* __fastcall Create_Lum();
	TCT_TintEffect* __fastcall Create_Tint();
	TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	void __fastcall Free_Lum();
	void __fastcall Free_AlphaModFix();
	__property Xc12graphics::TXc12GraphicImage* Image = {read=FImage, write=FImage};
	__property System::UnicodeString R_Embed = {read=FR_Embed, write=FR_Embed};
	__property System::UnicodeString R_Link = {read=FR_Link, write=FR_Link};
	__property TST_BlipCompression Cstate = {read=FCstate, write=FCstate, nodefault};
	__property TCT_AlphaBiLevelEffect* AlphaBiLevel = {read=FA_AlphaBiLevel};
	__property TCT_AlphaCeilingEffect* AlphaCeiling = {read=FA_AlphaCeiling};
	__property TCT_AlphaFloorEffect* AlphaFloor = {read=FA_AlphaFloor};
	__property TCT_AlphaInverseEffect* AlphaInv = {read=FA_AlphaInv};
	__property TCT_AlphaModulateEffect* AlphaMod = {read=FA_AlphaMod, write=FA_AlphaMod};
	__property TCT_AlphaModulateFixedEffect* AlphaModFix = {read=FA_AlphaModFix};
	__property TCT_AlphaReplaceEffect* AlphaRepl = {read=FA_AlphaRepl};
	__property TCT_BiLevelEffect* BiLevel = {read=FA_BiLevel};
	__property TCT_BlurEffect* Blur = {read=FA_Blur};
	__property TCT_ColorChangeEffect* ClrChange = {read=FA_ClrChange};
	__property TCT_ColorReplaceEffect* ClrRepl = {read=FA_ClrRepl};
	__property TCT_DuotoneEffect* Duotone = {read=FA_Duotone};
	__property TCT_FillOverlayEffect* FillOverlay = {read=FA_FillOverlay, write=FA_FillOverlay};
	__property TCT_GrayscaleEffect* Grayscl = {read=FA_Grayscl};
	__property TCT_HSLEffect* Hsl = {read=FA_Hsl};
	__property TCT_LuminanceEffect* Lum = {read=FA_Lum};
	__property TCT_TintEffect* Tint = {read=FA_Tint};
	__property TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_FillModeProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_TileInfoProperties* FA_Tile;
	TCT_StretchInfoProperties* FA_Stretch;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_FillModeProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_FillModeProperties();
	void __fastcall Clear();
	void __fastcall Assign(TEG_FillModeProperties* AItem);
	void __fastcall CopyTo(TEG_FillModeProperties* AItem);
	TCT_TileInfoProperties* __fastcall Create_Tile();
	TCT_StretchInfoProperties* __fastcall Create_Stretch();
	__property TCT_TileInfoProperties* Tile = {read=FA_Tile};
	__property TCT_StretchInfoProperties* Stretch = {read=FA_Stretch};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_NoFillProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_NoFillProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_NoFillProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_NoFillProperties* AItem);
	void __fastcall CopyTo(TCT_NoFillProperties* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SolidColorFillProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TEG_ColorChoice* FA_EG_ColorChoice;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_SolidColorFillProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SolidColorFillProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_SolidColorFillProperties* AItem);
	void __fastcall CopyTo(TCT_SolidColorFillProperties* AItem);
	__property TEG_ColorChoice* ColorChoice = {read=FA_EG_ColorChoice};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GradientFillProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_TileFlipMode FFlip;
	bool FRotWithShape;
	TCT_GradientStopList* FA_GsLst;
	TEG_ShadeProperties* FA_EG_ShadeProperties;
	TCT_RelativeRect* FA_TileRect;
	
public:
	__fastcall TCT_GradientFillProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GradientFillProperties();
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	void __fastcall Clear();
	void __fastcall Assign(TCT_GradientFillProperties* AItem);
	void __fastcall CopyTo(TCT_GradientFillProperties* AItem);
	TCT_GradientStopList* __fastcall Create_GstLst();
	TCT_RelativeRect* __fastcall Create_TileRect();
	void __fastcall Free_TileRect();
	__property TST_TileFlipMode Flip = {read=FFlip, write=FFlip, nodefault};
	__property bool RotWithShape = {read=FRotWithShape, write=FRotWithShape, nodefault};
	__property TCT_GradientStopList* GsLst = {read=FA_GsLst};
	__property TEG_ShadeProperties* ShadeProperties = {read=FA_EG_ShadeProperties};
	__property TCT_RelativeRect* TileRect = {read=FA_TileRect};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BlipFillProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FDpi;
	bool FRotWithShape;
	TCT_Blip* FA_Blip;
	TCT_RelativeRect* FA_SrcRect;
	TEG_FillModeProperties* FA_EG_FillModeProperties;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_BlipFillProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BlipFillProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_BlipFillProperties* AItem);
	void __fastcall CopyTo(TCT_BlipFillProperties* AItem);
	TCT_Blip* __fastcall Create_Blip();
	TCT_RelativeRect* __fastcall Create_SrcRect();
	__property int Dpi = {read=FDpi, write=FDpi, nodefault};
	__property bool RotWithShape = {read=FRotWithShape, write=FRotWithShape, nodefault};
	__property TCT_Blip* Blip = {read=FA_Blip};
	__property TCT_RelativeRect* SrcRect = {read=FA_SrcRect};
	__property TEG_FillModeProperties* FillModeProperties = {read=FA_EG_FillModeProperties};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PatternFillProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_PresetPatternVal FPrst;
	TCT_Color* FA_FgClr;
	TCT_Color* FA_BgClr;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PatternFillProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PatternFillProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PatternFillProperties* AItem);
	void __fastcall CopyTo(TCT_PatternFillProperties* AItem);
	TCT_Color* __fastcall Create_A_FgClr();
	TCT_Color* __fastcall Create_A_BgClr();
	__property TST_PresetPatternVal Prst = {read=FPrst, write=FPrst, nodefault};
	__property TCT_Color* A_FgClr = {read=FA_FgClr};
	__property TCT_Color* A_BgClr = {read=FA_BgClr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GroupFillProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_GroupFillProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GroupFillProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GroupFillProperties* AItem);
	void __fastcall CopyTo(TCT_GroupFillProperties* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_FillProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
private:
	bool __fastcall GetAutomatic();
	void __fastcall SetAutomatic(const bool Value);
	
protected:
	TCT_NoFillProperties* FA_NoFill;
	TCT_SolidColorFillProperties* FA_SolidFill;
	TCT_GradientFillProperties* FA_GradFill;
	TCT_BlipFillProperties* FA_BlipFill;
	TCT_PatternFillProperties* FA_PattFill;
	TCT_GroupFillProperties* FA_GrpFill;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_FillProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_FillProperties();
	void __fastcall Clear();
	void __fastcall Assign(TEG_FillProperties* AItem);
	void __fastcall CopyTo(TEG_FillProperties* AItem);
	TCT_NoFillProperties* __fastcall Create_NoFill();
	TCT_SolidColorFillProperties* __fastcall Create_SolidFill();
	TCT_GradientFillProperties* __fastcall Create_GradFill();
	TCT_BlipFillProperties* __fastcall Create_BlipFill();
	TCT_PatternFillProperties* __fastcall Create_PattFill();
	TCT_GroupFillProperties* __fastcall Create_GrpFill();
	void __fastcall Remove_NoFill();
	__property TCT_NoFillProperties* NoFill = {read=FA_NoFill};
	__property TCT_SolidColorFillProperties* SolidFill = {read=FA_SolidFill};
	__property TCT_GradientFillProperties* GradFill = {read=FA_GradFill};
	__property TCT_BlipFillProperties* BlipFill = {read=FA_BlipFill};
	__property TCT_PatternFillProperties* PattFill = {read=FA_PattFill};
	__property TCT_GroupFillProperties* GrpFill = {read=FA_GrpFill};
	__property bool Automatic = {read=GetAutomatic, write=SetAutomatic, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FillOverlayEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_BlendMode FBlend;
	TEG_FillProperties* FA_EG_FillProperties;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_FillOverlayEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FillOverlayEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_FillOverlayEffect* AItem);
	void __fastcall CopyTo(TCT_FillOverlayEffect* AItem);
	__property TST_BlendMode Blend = {read=FBlend, write=FBlend, nodefault};
	__property TEG_FillProperties* A_EG_FillProperties = {read=FA_EG_FillProperties};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FillOverlayEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_FillOverlayEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_FillOverlayEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_FillOverlayEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_FillOverlayEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_FillOverlayEffectXpgList* AItem);
	__property TCT_FillOverlayEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_FillOverlayEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_FillOverlayEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_EffectReference : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FRef;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_EffectReference(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_EffectReference();
	void __fastcall Clear();
	void __fastcall Assign(TCT_EffectReference* AItem);
	void __fastcall CopyTo(TCT_EffectReference* AItem);
	__property System::UnicodeString Ref = {read=FRef, write=FRef};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_EffectReferenceXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_EffectReference* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_EffectReference* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_EffectReference* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_EffectReferenceXpgList* AItem);
	void __fastcall CopyTo(TCT_EffectReferenceXpgList* AItem);
	__property TCT_EffectReference* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_EffectReferenceXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_EffectReferenceXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AlphaOutsetEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FRad;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_AlphaOutsetEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_AlphaOutsetEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_AlphaOutsetEffect* AItem);
	void __fastcall CopyTo(TCT_AlphaOutsetEffect* AItem);
	__property int Rad = {read=FRad, write=FRad, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AlphaOutsetEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_AlphaOutsetEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_AlphaOutsetEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_AlphaOutsetEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_AlphaOutsetEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_AlphaOutsetEffectXpgList* AItem);
	__property TCT_AlphaOutsetEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_AlphaOutsetEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_AlphaOutsetEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FillEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TEG_FillProperties* FA_EG_FillProperties;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_FillEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FillEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_FillEffect* AItem);
	void __fastcall CopyTo(TCT_FillEffect* AItem);
	__property TEG_FillProperties* A_EG_FillProperties = {read=FA_EG_FillProperties};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FillEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_FillEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_FillEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_FillEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_FillEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_FillEffectXpgList* AItem);
	__property TCT_FillEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_FillEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_FillEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GlowEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FRad;
	TEG_ColorChoice* FA_EG_ColorChoice;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_GlowEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GlowEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GlowEffect* AItem);
	void __fastcall CopyTo(TCT_GlowEffect* AItem);
	__property int Rad = {read=FRad, write=FRad, nodefault};
	__property TEG_ColorChoice* A_EG_ColorChoice = {read=FA_EG_ColorChoice};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GlowEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_GlowEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_GlowEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_GlowEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_GlowEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_GlowEffectXpgList* AItem);
	__property TCT_GlowEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_GlowEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_GlowEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_InnerShadowEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FBlurRad;
	int FDist;
	int FDir;
	TEG_ColorChoice* FA_EG_ColorChoice;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_InnerShadowEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_InnerShadowEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_InnerShadowEffect* AItem);
	void __fastcall CopyTo(TCT_InnerShadowEffect* AItem);
	__property int BlurRad = {read=FBlurRad, write=FBlurRad, nodefault};
	__property int Dist = {read=FDist, write=FDist, nodefault};
	__property int Dir = {read=FDir, write=FDir, nodefault};
	__property TEG_ColorChoice* A_EG_ColorChoice = {read=FA_EG_ColorChoice};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_InnerShadowEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_InnerShadowEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_InnerShadowEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_InnerShadowEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_InnerShadowEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_InnerShadowEffectXpgList* AItem);
	__property TCT_InnerShadowEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_InnerShadowEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_InnerShadowEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OuterShadowEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FBlurRad;
	int FDist;
	int FDir;
	int FSx;
	int FSy;
	int FKx;
	int FKy;
	TST_RectAlignment FAlgn;
	bool FRotWithShape;
	TEG_ColorChoice* FA_EG_ColorChoice;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_OuterShadowEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_OuterShadowEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_OuterShadowEffect* AItem);
	void __fastcall CopyTo(TCT_OuterShadowEffect* AItem);
	__property int BlurRad = {read=FBlurRad, write=FBlurRad, nodefault};
	__property int Dist = {read=FDist, write=FDist, nodefault};
	__property int Dir = {read=FDir, write=FDir, nodefault};
	__property int Sx = {read=FSx, write=FSx, nodefault};
	__property int Sy = {read=FSy, write=FSy, nodefault};
	__property int Kx = {read=FKx, write=FKx, nodefault};
	__property int Ky = {read=FKy, write=FKy, nodefault};
	__property TST_RectAlignment Algn = {read=FAlgn, write=FAlgn, nodefault};
	__property bool RotWithShape = {read=FRotWithShape, write=FRotWithShape, nodefault};
	__property TEG_ColorChoice* A_EG_ColorChoice = {read=FA_EG_ColorChoice};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OuterShadowEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_OuterShadowEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_OuterShadowEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_OuterShadowEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_OuterShadowEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_OuterShadowEffectXpgList* AItem);
	__property TCT_OuterShadowEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_OuterShadowEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_OuterShadowEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PresetShadowEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_PresetShadowVal FPrst;
	int FDist;
	int FDir;
	TEG_ColorChoice* FA_EG_ColorChoice;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PresetShadowEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PresetShadowEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PresetShadowEffect* AItem);
	void __fastcall CopyTo(TCT_PresetShadowEffect* AItem);
	__property TST_PresetShadowVal Prst = {read=FPrst, write=FPrst, nodefault};
	__property int Dist = {read=FDist, write=FDist, nodefault};
	__property int Dir = {read=FDir, write=FDir, nodefault};
	__property TEG_ColorChoice* A_EG_ColorChoice = {read=FA_EG_ColorChoice};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PresetShadowEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_PresetShadowEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_PresetShadowEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_PresetShadowEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_PresetShadowEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_PresetShadowEffectXpgList* AItem);
	__property TCT_PresetShadowEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PresetShadowEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PresetShadowEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ReflectionEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FBlurRad;
	int FStA;
	int FStPos;
	int FEndA;
	int FEndPos;
	int FDist;
	int FDir;
	int FFadeDir;
	int FSx;
	int FSy;
	int FKx;
	int FKy;
	TST_RectAlignment FAlgn;
	bool FRotWithShape;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ReflectionEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ReflectionEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ReflectionEffect* AItem);
	void __fastcall CopyTo(TCT_ReflectionEffect* AItem);
	__property int BlurRad = {read=FBlurRad, write=FBlurRad, nodefault};
	__property int StA = {read=FStA, write=FStA, nodefault};
	__property int StPos = {read=FStPos, write=FStPos, nodefault};
	__property int EndA = {read=FEndA, write=FEndA, nodefault};
	__property int EndPos = {read=FEndPos, write=FEndPos, nodefault};
	__property int Dist = {read=FDist, write=FDist, nodefault};
	__property int Dir = {read=FDir, write=FDir, nodefault};
	__property int FadeDir = {read=FFadeDir, write=FFadeDir, nodefault};
	__property int Sx = {read=FSx, write=FSx, nodefault};
	__property int Sy = {read=FSy, write=FSy, nodefault};
	__property int Kx = {read=FKx, write=FKx, nodefault};
	__property int Ky = {read=FKy, write=FKy, nodefault};
	__property TST_RectAlignment Algn = {read=FAlgn, write=FAlgn, nodefault};
	__property bool RotWithShape = {read=FRotWithShape, write=FRotWithShape, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ReflectionEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_ReflectionEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ReflectionEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ReflectionEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_ReflectionEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_ReflectionEffectXpgList* AItem);
	__property TCT_ReflectionEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ReflectionEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ReflectionEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RelativeOffsetEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FTx;
	int FTy;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_RelativeOffsetEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_RelativeOffsetEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_RelativeOffsetEffect* AItem);
	void __fastcall CopyTo(TCT_RelativeOffsetEffect* AItem);
	__property int Tx = {read=FTx, write=FTx, nodefault};
	__property int Ty = {read=FTy, write=FTy, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RelativeOffsetEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_RelativeOffsetEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_RelativeOffsetEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_RelativeOffsetEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_RelativeOffsetEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_RelativeOffsetEffectXpgList* AItem);
	__property TCT_RelativeOffsetEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_RelativeOffsetEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_RelativeOffsetEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SoftEdgesEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FRad;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_SoftEdgesEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SoftEdgesEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_SoftEdgesEffect* AItem);
	void __fastcall CopyTo(TCT_SoftEdgesEffect* AItem);
	__property int Rad = {read=FRad, write=FRad, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SoftEdgesEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_SoftEdgesEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_SoftEdgesEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_SoftEdgesEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_SoftEdgesEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_SoftEdgesEffectXpgList* AItem);
	__property TCT_SoftEdgesEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_SoftEdgesEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_SoftEdgesEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TransformEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FSx;
	int FSy;
	int FKx;
	int FKy;
	int FTx;
	int FTy;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TransformEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TransformEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TransformEffect* AItem);
	void __fastcall CopyTo(TCT_TransformEffect* AItem);
	__property int Sx = {read=FSx, write=FSx, nodefault};
	__property int Sy = {read=FSy, write=FSy, nodefault};
	__property int Kx = {read=FKx, write=FKx, nodefault};
	__property int Ky = {read=FKy, write=FKy, nodefault};
	__property int Tx = {read=FTx, write=FTx, nodefault};
	__property int Ty = {read=FTy, write=FTy, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TransformEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_TransformEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_TransformEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_TransformEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_TransformEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_TransformEffectXpgList* AItem);
	__property TCT_TransformEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_TransformEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_TransformEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_Effect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_EffectContainerXpgList* FA_ContXpgList;
	TCT_EffectReferenceXpgList* FA_EffectXpgList;
	TCT_AlphaBiLevelEffectXpgList* FA_AlphaBiLevelXpgList;
	TCT_AlphaCeilingEffectXpgList* FA_AlphaCeilingXpgList;
	TCT_AlphaFloorEffectXpgList* FA_AlphaFloorXpgList;
	TCT_AlphaInverseEffectXpgList* FA_AlphaInvXpgList;
	TCT_AlphaModulateEffectXpgList* FA_AlphaModXpgList;
	TCT_AlphaModulateFixedEffectXpgList* FA_AlphaModFixXpgList;
	TCT_AlphaOutsetEffectXpgList* FA_AlphaOutsetXpgList;
	TCT_AlphaReplaceEffectXpgList* FA_AlphaReplXpgList;
	TCT_BiLevelEffectXpgList* FA_BiLevelXpgList;
	TCT_BlendEffectXpgList* FA_BlendXpgList;
	TCT_BlurEffectXpgList* FA_BlurXpgList;
	TCT_ColorChangeEffectXpgList* FA_ClrChangeXpgList;
	TCT_ColorReplaceEffectXpgList* FA_ClrReplXpgList;
	TCT_DuotoneEffectXpgList* FA_DuotoneXpgList;
	TCT_FillEffectXpgList* FA_FillXpgList;
	TCT_FillOverlayEffectXpgList* FA_FillOverlayXpgList;
	TCT_GlowEffectXpgList* FA_GlowXpgList;
	TCT_GrayscaleEffectXpgList* FA_GraysclXpgList;
	TCT_HSLEffectXpgList* FA_HslXpgList;
	TCT_InnerShadowEffectXpgList* FA_InnerShdwXpgList;
	TCT_LuminanceEffectXpgList* FA_LumXpgList;
	TCT_OuterShadowEffectXpgList* FA_OuterShdwXpgList;
	TCT_PresetShadowEffectXpgList* FA_PrstShdwXpgList;
	TCT_ReflectionEffectXpgList* FA_ReflectionXpgList;
	TCT_RelativeOffsetEffectXpgList* FA_RelOffXpgList;
	TCT_SoftEdgesEffectXpgList* FA_SoftEdgeXpgList;
	TCT_TintEffectXpgList* FA_TintXpgList;
	TCT_TransformEffectXpgList* FA_XfrmXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_Effect(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_Effect();
	void __fastcall Clear();
	void __fastcall Assign(TEG_Effect* AItem);
	void __fastcall CopyTo(TEG_Effect* AItem);
	TCT_EffectContainerXpgList* __fastcall Create_A_ContXpgList();
	TCT_EffectReferenceXpgList* __fastcall Create_A_EffectXpgList();
	TCT_AlphaBiLevelEffectXpgList* __fastcall Create_A_AlphaBiLevelXpgList();
	TCT_AlphaCeilingEffectXpgList* __fastcall Create_A_AlphaCeilingXpgList();
	TCT_AlphaFloorEffectXpgList* __fastcall Create_A_AlphaFloorXpgList();
	TCT_AlphaInverseEffectXpgList* __fastcall Create_A_AlphaInvXpgList();
	TCT_AlphaModulateEffectXpgList* __fastcall Create_A_AlphaModXpgList();
	TCT_AlphaModulateFixedEffectXpgList* __fastcall Create_A_AlphaModFixXpgList();
	TCT_AlphaOutsetEffectXpgList* __fastcall Create_A_AlphaOutsetXpgList();
	TCT_AlphaReplaceEffectXpgList* __fastcall Create_A_AlphaReplXpgList();
	TCT_BiLevelEffectXpgList* __fastcall Create_A_BiLevelXpgList();
	TCT_BlendEffectXpgList* __fastcall Create_A_BlendXpgList();
	TCT_BlurEffectXpgList* __fastcall Create_A_BlurXpgList();
	TCT_ColorChangeEffectXpgList* __fastcall Create_A_ClrChangeXpgList();
	TCT_ColorReplaceEffectXpgList* __fastcall Create_A_ClrReplXpgList();
	TCT_DuotoneEffectXpgList* __fastcall Create_A_DuotoneXpgList();
	TCT_FillEffectXpgList* __fastcall Create_A_FillXpgList();
	TCT_FillOverlayEffectXpgList* __fastcall Create_A_FillOverlayXpgList();
	TCT_GlowEffectXpgList* __fastcall Create_A_GlowXpgList();
	TCT_GrayscaleEffectXpgList* __fastcall Create_A_GraysclXpgList();
	TCT_HSLEffectXpgList* __fastcall Create_A_HslXpgList();
	TCT_InnerShadowEffectXpgList* __fastcall Create_A_InnerShdwXpgList();
	TCT_LuminanceEffectXpgList* __fastcall Create_A_LumXpgList();
	TCT_OuterShadowEffectXpgList* __fastcall Create_A_OuterShdwXpgList();
	TCT_PresetShadowEffectXpgList* __fastcall Create_A_PrstShdwXpgList();
	TCT_ReflectionEffectXpgList* __fastcall Create_A_ReflectionXpgList();
	TCT_RelativeOffsetEffectXpgList* __fastcall Create_A_RelOffXpgList();
	TCT_SoftEdgesEffectXpgList* __fastcall Create_A_SoftEdgeXpgList();
	TCT_TintEffectXpgList* __fastcall Create_A_TintXpgList();
	TCT_TransformEffectXpgList* __fastcall Create_A_XfrmXpgList();
	__property TCT_EffectContainerXpgList* A_ContXpgList = {read=FA_ContXpgList, write=FA_ContXpgList};
	__property TCT_EffectReferenceXpgList* A_EffectXpgList = {read=FA_EffectXpgList};
	__property TCT_AlphaBiLevelEffectXpgList* A_AlphaBiLevelXpgList = {read=FA_AlphaBiLevelXpgList};
	__property TCT_AlphaCeilingEffectXpgList* A_AlphaCeilingXpgList = {read=FA_AlphaCeilingXpgList};
	__property TCT_AlphaFloorEffectXpgList* A_AlphaFloorXpgList = {read=FA_AlphaFloorXpgList};
	__property TCT_AlphaInverseEffectXpgList* A_AlphaInvXpgList = {read=FA_AlphaInvXpgList};
	__property TCT_AlphaModulateEffectXpgList* A_AlphaModXpgList = {read=FA_AlphaModXpgList, write=FA_AlphaModXpgList};
	__property TCT_AlphaModulateFixedEffectXpgList* A_AlphaModFixXpgList = {read=FA_AlphaModFixXpgList};
	__property TCT_AlphaOutsetEffectXpgList* A_AlphaOutsetXpgList = {read=FA_AlphaOutsetXpgList};
	__property TCT_AlphaReplaceEffectXpgList* A_AlphaReplXpgList = {read=FA_AlphaReplXpgList};
	__property TCT_BiLevelEffectXpgList* A_BiLevelXpgList = {read=FA_BiLevelXpgList};
	__property TCT_BlendEffectXpgList* A_BlendXpgList = {read=FA_BlendXpgList, write=FA_BlendXpgList};
	__property TCT_BlurEffectXpgList* A_BlurXpgList = {read=FA_BlurXpgList};
	__property TCT_ColorChangeEffectXpgList* A_ClrChangeXpgList = {read=FA_ClrChangeXpgList};
	__property TCT_ColorReplaceEffectXpgList* A_ClrReplXpgList = {read=FA_ClrReplXpgList};
	__property TCT_DuotoneEffectXpgList* A_DuotoneXpgList = {read=FA_DuotoneXpgList};
	__property TCT_FillEffectXpgList* A_FillXpgList = {read=FA_FillXpgList};
	__property TCT_FillOverlayEffectXpgList* A_FillOverlayXpgList = {read=FA_FillOverlayXpgList};
	__property TCT_GlowEffectXpgList* A_GlowXpgList = {read=FA_GlowXpgList};
	__property TCT_GrayscaleEffectXpgList* A_GraysclXpgList = {read=FA_GraysclXpgList};
	__property TCT_HSLEffectXpgList* A_HslXpgList = {read=FA_HslXpgList};
	__property TCT_InnerShadowEffectXpgList* A_InnerShdwXpgList = {read=FA_InnerShdwXpgList};
	__property TCT_LuminanceEffectXpgList* A_LumXpgList = {read=FA_LumXpgList};
	__property TCT_OuterShadowEffectXpgList* A_OuterShdwXpgList = {read=FA_OuterShdwXpgList};
	__property TCT_PresetShadowEffectXpgList* A_PrstShdwXpgList = {read=FA_PrstShdwXpgList};
	__property TCT_ReflectionEffectXpgList* A_ReflectionXpgList = {read=FA_ReflectionXpgList};
	__property TCT_RelativeOffsetEffectXpgList* A_RelOffXpgList = {read=FA_RelOffXpgList};
	__property TCT_SoftEdgesEffectXpgList* A_SoftEdgeXpgList = {read=FA_SoftEdgeXpgList};
	__property TCT_TintEffectXpgList* A_TintXpgList = {read=FA_TintXpgList};
	__property TCT_TransformEffectXpgList* A_XfrmXpgList = {read=FA_XfrmXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_EffectContainer : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_EffectContainerType FType;
	System::UnicodeString FName;
	TEG_Effect* FA_EG_Effect;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_EffectContainer(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_EffectContainer();
	void __fastcall Clear();
	void __fastcall Assign(TCT_EffectContainer* AItem);
	void __fastcall CopyTo(TCT_EffectContainer* AItem);
	__property TST_EffectContainerType Type_ = {read=FType, write=FType, nodefault};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property TEG_Effect* A_EG_Effect = {read=FA_EG_Effect};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_EffectContainerXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_EffectContainer* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_EffectContainer* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_EffectContainer* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_EffectContainerXpgList* AItem);
	void __fastcall CopyTo(TCT_EffectContainerXpgList* AItem);
	__property TCT_EffectContainer* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_EffectContainerXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_EffectContainerXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BlendEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_BlendMode FBlend;
	TCT_EffectContainer* FA_Cont;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_BlendEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BlendEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_BlendEffect* AItem);
	void __fastcall CopyTo(TCT_BlendEffect* AItem);
	TCT_EffectContainer* __fastcall Create_A_Cont();
	__property TST_BlendMode Blend = {read=FBlend, write=FBlend, nodefault};
	__property TCT_EffectContainer* A_Cont = {read=FA_Cont};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BlendEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_BlendEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_BlendEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_BlendEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_BlendEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_BlendEffectXpgList* AItem);
	__property TCT_BlendEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_BlendEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_BlendEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AlphaModulateEffect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_EffectContainer* FA_Cont;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_AlphaModulateEffect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_AlphaModulateEffect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_AlphaModulateEffect* AItem);
	void __fastcall CopyTo(TCT_AlphaModulateEffect* AItem);
	TCT_EffectContainer* __fastcall Create_A_Cont();
	__property TCT_EffectContainer* Container = {read=FA_Cont};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AlphaModulateEffectXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_AlphaModulateEffect* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_AlphaModulateEffect* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_AlphaModulateEffect* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_AlphaModulateEffectXpgList* AItem);
	void __fastcall CopyTo(TCT_AlphaModulateEffectXpgList* AItem);
	__property TCT_AlphaModulateEffect* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_AlphaModulateEffectXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_AlphaModulateEffectXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DashStop : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FD;
	int FSp;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_DashStop(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DashStop();
	void __fastcall Clear();
	void __fastcall Assign(TCT_DashStop* AItem);
	void __fastcall CopyTo(TCT_DashStop* AItem);
	__property int D = {read=FD, write=FD, nodefault};
	__property int Sp = {read=FSp, write=FSp, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DashStopXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_DashStop* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_DashStop* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_DashStop* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_DashStopXpgList* AItem);
	void __fastcall CopyTo(TCT_DashStopXpgList* AItem);
	__property TCT_DashStop* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_DashStopXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_DashStopXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PresetLineDashProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_PresetLineDashVal FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PresetLineDashProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PresetLineDashProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PresetLineDashProperties* AItem);
	void __fastcall CopyTo(TCT_PresetLineDashProperties* AItem);
	__property TST_PresetLineDashVal Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_DashStopList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_DashStopXpgList* FA_DsXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_DashStopList(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_DashStopList();
	void __fastcall Clear();
	void __fastcall Assign(TCT_DashStopList* AItem);
	void __fastcall CopyTo(TCT_DashStopList* AItem);
	TCT_DashStopXpgList* __fastcall Create_A_DsXpgList();
	__property TCT_DashStopXpgList* A_DsXpgList = {read=FA_DsXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LineJoinRound : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_LineJoinRound(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LineJoinRound();
	void __fastcall Clear();
	void __fastcall Assign(TCT_LineJoinRound* AItem);
	void __fastcall CopyTo(TCT_LineJoinRound* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LineJoinBevel : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_LineJoinBevel(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LineJoinBevel();
	void __fastcall Clear();
	void __fastcall Assign(TCT_LineJoinBevel* AItem);
	void __fastcall CopyTo(TCT_LineJoinBevel* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LineJoinMiterProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FLim;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_LineJoinMiterProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LineJoinMiterProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_LineJoinMiterProperties* AItem);
	void __fastcall CopyTo(TCT_LineJoinMiterProperties* AItem);
	__property int Lim = {read=FLim, write=FLim, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_LineDashProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_PresetLineDashProperties* FA_PrstDash;
	TCT_DashStopList* FA_CustDash;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_LineDashProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_LineDashProperties();
	void __fastcall Clear();
	void __fastcall Assign(TEG_LineDashProperties* AItem);
	void __fastcall CopyTo(TEG_LineDashProperties* AItem);
	TCT_PresetLineDashProperties* __fastcall Create_PrstDash();
	TCT_DashStopList* __fastcall Create_CustDash();
	__property TCT_PresetLineDashProperties* PrstDash = {read=FA_PrstDash};
	__property TCT_DashStopList* CustDash = {read=FA_CustDash};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_LineJoinProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_LineJoinRound* FA_Round;
	TCT_LineJoinBevel* FA_Bevel;
	TCT_LineJoinMiterProperties* FA_Miter;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_LineJoinProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_LineJoinProperties();
	void __fastcall Clear();
	void __fastcall Assign(TEG_LineJoinProperties* AItem);
	void __fastcall CopyTo(TEG_LineJoinProperties* AItem);
	TCT_LineJoinRound* __fastcall Create_Round();
	TCT_LineJoinBevel* __fastcall Create_Bevel();
	TCT_LineJoinMiterProperties* __fastcall Create_Miter();
	__property TCT_LineJoinRound* Round = {read=FA_Round};
	__property TCT_LineJoinBevel* Bevel = {read=FA_Bevel};
	__property TCT_LineJoinMiterProperties* Miter = {read=FA_Miter};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LineEndProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_LineEndType FType;
	TST_LineEndWidth FW;
	TST_LineEndLength FLen;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_LineEndProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LineEndProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_LineEndProperties* AItem);
	void __fastcall CopyTo(TCT_LineEndProperties* AItem);
	__property TST_LineEndType Type_ = {read=FType, write=FType, nodefault};
	__property TST_LineEndWidth W = {read=FW, write=FW, nodefault};
	__property TST_LineEndLength Len = {read=FLen, write=FLen, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_EffectList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_BlurEffect* FA_Blur;
	TCT_FillOverlayEffect* FA_FillOverlay;
	TCT_GlowEffect* FA_Glow;
	TCT_InnerShadowEffect* FA_InnerShdw;
	TCT_OuterShadowEffect* FA_OuterShdw;
	TCT_PresetShadowEffect* FA_PrstShdw;
	TCT_ReflectionEffect* FA_Reflection;
	TCT_SoftEdgesEffect* FA_SoftEdge;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_EffectList(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_EffectList();
	void __fastcall Clear();
	void __fastcall Assign(TCT_EffectList* AItem);
	void __fastcall CopyTo(TCT_EffectList* AItem);
	TCT_BlurEffect* __fastcall Create_A_Blur();
	TCT_FillOverlayEffect* __fastcall Create_A_FillOverlay();
	TCT_GlowEffect* __fastcall Create_A_Glow();
	TCT_InnerShadowEffect* __fastcall Create_A_InnerShdw();
	TCT_OuterShadowEffect* __fastcall Create_A_OuterShdw();
	TCT_PresetShadowEffect* __fastcall Create_A_PrstShdw();
	TCT_ReflectionEffect* __fastcall Create_A_Reflection();
	TCT_SoftEdgesEffect* __fastcall Create_A_SoftEdge();
	__property TCT_BlurEffect* A_Blur = {read=FA_Blur};
	__property TCT_FillOverlayEffect* A_FillOverlay = {read=FA_FillOverlay};
	__property TCT_GlowEffect* A_Glow = {read=FA_Glow};
	__property TCT_InnerShadowEffect* A_InnerShdw = {read=FA_InnerShdw};
	__property TCT_OuterShadowEffect* A_OuterShdw = {read=FA_OuterShdw};
	__property TCT_PresetShadowEffect* A_PrstShdw = {read=FA_PrstShdw};
	__property TCT_ReflectionEffect* A_Reflection = {read=FA_Reflection};
	__property TCT_SoftEdgesEffect* A_SoftEdge = {read=FA_SoftEdge};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextUnderlineLineFollowText : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_TextUnderlineLineFollowText(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextUnderlineLineFollowText();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextUnderlineLineFollowText* AItem);
	void __fastcall CopyTo(TCT_TextUnderlineLineFollowText* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LineProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FW;
	TST_LineCap FCap;
	TST_CompoundLine FCmpd;
	TST_PenAlignment FAlgn;
	TEG_FillProperties* FA_EG_LineFillProperties;
	TEG_LineDashProperties* FA_EG_LineDashProperties;
	TEG_LineJoinProperties* FA_EG_LineJoinProperties;
	TCT_LineEndProperties* FA_HeadEnd;
	TCT_LineEndProperties* FA_TailEnd;
	TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	__fastcall TCT_LineProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LineProperties();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	void __fastcall Assign(TCT_LineProperties* AItem);
	void __fastcall CopyTo(TCT_LineProperties* AItem);
	TCT_LineEndProperties* __fastcall Create_HeadEnd();
	TCT_LineEndProperties* __fastcall Create_TailEnd();
	TCT_OfficeArtExtensionList* __fastcall Create_ExtLst();
	void __fastcall Free_HeadEnd();
	void __fastcall Free_TailEnd();
	__property int W = {read=FW, write=FW, nodefault};
	__property TST_LineCap Cap = {read=FCap, write=FCap, nodefault};
	__property TST_CompoundLine Cmpd = {read=FCmpd, write=FCmpd, nodefault};
	__property TST_PenAlignment Algn = {read=FAlgn, write=FAlgn, nodefault};
	__property TEG_FillProperties* LineFillProperties = {read=FA_EG_LineFillProperties};
	__property TEG_LineDashProperties* LineDashProperties = {read=FA_EG_LineDashProperties};
	__property TEG_LineJoinProperties* LineJoinProperties = {read=FA_EG_LineJoinProperties};
	__property TCT_LineEndProperties* HeadEnd = {read=FA_HeadEnd};
	__property TCT_LineEndProperties* TailEnd = {read=FA_TailEnd};
	__property TCT_OfficeArtExtensionList* ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LinePropertiesXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_LineProperties* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_LineProperties* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_LineProperties* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_LinePropertiesXpgList* AItem);
	void __fastcall CopyTo(TCT_LinePropertiesXpgList* AItem);
	__property TCT_LineProperties* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_LinePropertiesXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_LinePropertiesXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextUnderlineFillFollowText : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_TextUnderlineFillFollowText(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextUnderlineFillFollowText();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextUnderlineFillFollowText* AItem);
	void __fastcall CopyTo(TCT_TextUnderlineFillFollowText* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextUnderlineFillGroupWrapper : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TEG_FillProperties* FA_EG_FillProperties;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_TextUnderlineFillGroupWrapper(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextUnderlineFillGroupWrapper();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextUnderlineFillGroupWrapper* AItem);
	void __fastcall CopyTo(TCT_TextUnderlineFillGroupWrapper* AItem);
	__property TEG_FillProperties* A_EG_FillProperties = {read=FA_EG_FillProperties};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_EmbeddedWAVAudioFile : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FR_Embed;
	System::UnicodeString FName;
	bool FBuiltIn;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_EmbeddedWAVAudioFile(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_EmbeddedWAVAudioFile();
	void __fastcall Clear();
	void __fastcall Assign(TCT_EmbeddedWAVAudioFile* AItem);
	void __fastcall CopyTo(TCT_EmbeddedWAVAudioFile* AItem);
	__property System::UnicodeString R_Embed = {read=FR_Embed, write=FR_Embed};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property bool BuiltIn = {read=FBuiltIn, write=FBuiltIn, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AdjPoint2D : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_AdjCoordinate FX;
	TST_AdjCoordinate *PFX;
	TST_AdjCoordinate FY;
	TST_AdjCoordinate *PFY;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_AdjPoint2D(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_AdjPoint2D();
	void __fastcall Clear();
	void __fastcall Assign(TCT_AdjPoint2D* AItem);
	void __fastcall CopyTo(TCT_AdjPoint2D* AItem);
	__property PST_AdjCoordinate PX = {read=PFX, write=PFX};
	__property PST_AdjCoordinate PY = {read=PFY, write=PFY};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AdjPoint2DXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_AdjPoint2D* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_AdjPoint2D* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_AdjPoint2D* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_AdjPoint2DXpgList* AItem);
	void __fastcall CopyTo(TCT_AdjPoint2DXpgList* AItem);
	__property TCT_AdjPoint2D* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_AdjPoint2DXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_AdjPoint2DXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextSpacingPercent : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TextSpacingPercent(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextSpacingPercent();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextSpacingPercent* AItem);
	void __fastcall CopyTo(TCT_TextSpacingPercent* AItem);
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextSpacingPoint : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TextSpacingPoint(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextSpacingPoint();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextSpacingPoint* AItem);
	void __fastcall CopyTo(TCT_TextSpacingPoint* AItem);
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextBulletColorFollowText : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_TextBulletColorFollowText(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextBulletColorFollowText();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextBulletColorFollowText* AItem);
	void __fastcall CopyTo(TCT_TextBulletColorFollowText* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextBulletSizeFollowText : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_TextBulletSizeFollowText(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextBulletSizeFollowText();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextBulletSizeFollowText* AItem);
	void __fastcall CopyTo(TCT_TextBulletSizeFollowText* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextBulletSizePercent : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TextBulletSizePercent(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextBulletSizePercent();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextBulletSizePercent* AItem);
	void __fastcall CopyTo(TCT_TextBulletSizePercent* AItem);
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextBulletSizePoint : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TextBulletSizePoint(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextBulletSizePoint();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextBulletSizePoint* AItem);
	void __fastcall CopyTo(TCT_TextBulletSizePoint* AItem);
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextBulletTypefaceFollowText : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_TextBulletTypefaceFollowText(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextBulletTypefaceFollowText();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextBulletTypefaceFollowText* AItem);
	void __fastcall CopyTo(TCT_TextBulletTypefaceFollowText* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextFont : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FTypeface;
	int FPanose;
	int FPitchFamily;
	int FCharset;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TextFont(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextFont();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextFont* AItem);
	void __fastcall CopyTo(TCT_TextFont* AItem);
	__property System::UnicodeString Typeface = {read=FTypeface, write=FTypeface};
	__property int Panose = {read=FPanose, write=FPanose, nodefault};
	__property int PitchFamily = {read=FPitchFamily, write=FPitchFamily, nodefault};
	__property int Charset = {read=FCharset, write=FCharset, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextNoBullet : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_TextNoBullet(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextNoBullet();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextNoBullet* AItem);
	void __fastcall CopyTo(TCT_TextNoBullet* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextAutonumberBullet : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_TextAutonumberScheme FType;
	int FStartAt;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TextAutonumberBullet(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextAutonumberBullet();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextAutonumberBullet* AItem);
	void __fastcall CopyTo(TCT_TextAutonumberBullet* AItem);
	__property TST_TextAutonumberScheme Type_ = {read=FType, write=FType, nodefault};
	__property int StartAt = {read=FStartAt, write=FStartAt, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextCharBullet : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FChar;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TextCharBullet(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextCharBullet();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextCharBullet* AItem);
	void __fastcall CopyTo(TCT_TextCharBullet* AItem);
	__property System::UnicodeString Char = {read=FChar, write=FChar};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextBlipBullet : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_Blip* FA_Blip;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_TextBlipBullet(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextBlipBullet();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextBlipBullet* AItem);
	void __fastcall CopyTo(TCT_TextBlipBullet* AItem);
	TCT_Blip* __fastcall Create_A_Blip();
	__property TCT_Blip* A_Blip = {read=FA_Blip};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextTabStop : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FPos;
	TST_TextTabAlignType FAlgn;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TextTabStop(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextTabStop();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextTabStop* AItem);
	void __fastcall CopyTo(TCT_TextTabStop* AItem);
	__property int Pos = {read=FPos, write=FPos, nodefault};
	__property TST_TextTabAlignType Algn = {read=FAlgn, write=FAlgn, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextTabStopXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_TextTabStop* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_TextTabStop* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_TextTabStop* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_TextTabStopXpgList* AItem);
	void __fastcall CopyTo(TCT_TextTabStopXpgList* AItem);
	__property TCT_TextTabStop* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_TextTabStopXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_TextTabStopXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_EffectProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_EffectList* FA_EffectLst;
	TCT_EffectContainer* FA_EffectDag;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_EffectProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_EffectProperties();
	void __fastcall Clear();
	void __fastcall Assign(TEG_EffectProperties* AItem);
	void __fastcall CopyTo(TEG_EffectProperties* AItem);
	TCT_EffectList* __fastcall Create_A_EffectLst();
	TCT_EffectContainer* __fastcall Create_A_EffectDag();
	__property TCT_EffectList* A_EffectLst = {read=FA_EffectLst};
	__property TCT_EffectContainer* A_EffectDag = {read=FA_EffectDag};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_TextUnderlineLine : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_TextUnderlineLineFollowText* FA_ULnTx;
	TCT_LineProperties* FA_ULn;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_TextUnderlineLine(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_TextUnderlineLine();
	void __fastcall Clear();
	void __fastcall Assign(TEG_TextUnderlineLine* AItem);
	void __fastcall CopyTo(TEG_TextUnderlineLine* AItem);
	TCT_TextUnderlineLineFollowText* __fastcall Create_A_ULnTx();
	TCT_LineProperties* __fastcall Create_A_ULn();
	__property TCT_TextUnderlineLineFollowText* A_ULnTx = {read=FA_ULnTx};
	__property TCT_LineProperties* A_ULn = {read=FA_ULn};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_TextUnderlineFill : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_TextUnderlineFillFollowText* FA_UFillTx;
	TCT_TextUnderlineFillGroupWrapper* FA_UFill;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_TextUnderlineFill(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_TextUnderlineFill();
	void __fastcall Clear();
	void __fastcall Assign(TEG_TextUnderlineFill* AItem);
	void __fastcall CopyTo(TEG_TextUnderlineFill* AItem);
	TCT_TextUnderlineFillFollowText* __fastcall Create_A_UFillTx();
	TCT_TextUnderlineFillGroupWrapper* __fastcall Create_A_UFill();
	__property TCT_TextUnderlineFillFollowText* A_UFillTx = {read=FA_UFillTx};
	__property TCT_TextUnderlineFillGroupWrapper* A_UFill = {read=FA_UFill};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Hyperlink : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FR_Id;
	System::UnicodeString FInvalidUrl;
	System::UnicodeString FAction;
	System::UnicodeString FTgtFrame;
	System::UnicodeString FTooltip;
	bool FHistory;
	bool FHighlightClick;
	bool FEndSnd;
	TCT_EmbeddedWAVAudioFile* FA_Snd;
	TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Hyperlink(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Hyperlink();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Hyperlink* AItem);
	void __fastcall CopyTo(TCT_Hyperlink* AItem);
	TCT_EmbeddedWAVAudioFile* __fastcall Create_A_Snd();
	TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property System::UnicodeString R_Id = {read=FR_Id, write=FR_Id};
	__property System::UnicodeString InvalidUrl = {read=FInvalidUrl, write=FInvalidUrl};
	__property System::UnicodeString Action = {read=FAction, write=FAction};
	__property System::UnicodeString TgtFrame = {read=FTgtFrame, write=FTgtFrame};
	__property System::UnicodeString Tooltip = {read=FTooltip, write=FTooltip};
	__property bool History = {read=FHistory, write=FHistory, nodefault};
	__property bool HighlightClick = {read=FHighlightClick, write=FHighlightClick, nodefault};
	__property bool EndSnd = {read=FEndSnd, write=FEndSnd, nodefault};
	__property TCT_EmbeddedWAVAudioFile* A_Snd = {read=FA_Snd};
	__property TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Path2DClose : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Path2DClose(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Path2DClose();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Path2DClose* AItem);
	void __fastcall CopyTo(TCT_Path2DClose* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Path2DCloseXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Path2DClose* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Path2DClose* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Path2DClose* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_Path2DCloseXpgList* AItem);
	void __fastcall CopyTo(TCT_Path2DCloseXpgList* AItem);
	__property TCT_Path2DClose* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_Path2DCloseXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_Path2DCloseXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Path2DMoveTo : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_AdjPoint2D* FA_Pt;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Path2DMoveTo(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Path2DMoveTo();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Path2DMoveTo* AItem);
	void __fastcall CopyTo(TCT_Path2DMoveTo* AItem);
	TCT_AdjPoint2D* __fastcall Create_A_Pt();
	__property TCT_AdjPoint2D* A_Pt = {read=FA_Pt};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Path2DMoveToXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Path2DMoveTo* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Path2DMoveTo* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Path2DMoveTo* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_Path2DMoveToXpgList* AItem);
	void __fastcall CopyTo(TCT_Path2DMoveToXpgList* AItem);
	__property TCT_Path2DMoveTo* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_Path2DMoveToXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_Path2DMoveToXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Path2DLineTo : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_AdjPoint2D* FA_Pt;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Path2DLineTo(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Path2DLineTo();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Path2DLineTo* AItem);
	void __fastcall CopyTo(TCT_Path2DLineTo* AItem);
	TCT_AdjPoint2D* __fastcall Create_A_Pt();
	__property TCT_AdjPoint2D* A_Pt = {read=FA_Pt};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Path2DLineToXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Path2DLineTo* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Path2DLineTo* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Path2DLineTo* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_Path2DLineToXpgList* AItem);
	void __fastcall CopyTo(TCT_Path2DLineToXpgList* AItem);
	__property TCT_Path2DLineTo* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_Path2DLineToXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_Path2DLineToXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Path2DArcTo : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_AdjCoordinate FWR;
	TST_AdjCoordinate *PFWR;
	TST_AdjCoordinate FHR;
	TST_AdjCoordinate *PFHR;
	TST_AdjAngle FStAng;
	TST_AdjAngle *PFStAng;
	TST_AdjAngle FSwAng;
	TST_AdjAngle *PFSwAng;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Path2DArcTo(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Path2DArcTo();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Path2DArcTo* AItem);
	void __fastcall CopyTo(TCT_Path2DArcTo* AItem);
	__property PST_AdjCoordinate PWR = {read=PFWR, write=PFWR};
	__property PST_AdjCoordinate PHR = {read=PFHR, write=PFHR};
	__property PST_AdjAngle PStAng = {read=PFStAng, write=PFStAng};
	__property PST_AdjAngle PSwAng = {read=PFSwAng, write=PFSwAng};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Path2DArcToXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Path2DArcTo* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Path2DArcTo* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Path2DArcTo* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_Path2DArcToXpgList* AItem);
	void __fastcall CopyTo(TCT_Path2DArcToXpgList* AItem);
	__property TCT_Path2DArcTo* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_Path2DArcToXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_Path2DArcToXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Path2DQuadBezierTo : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_AdjPoint2DXpgList* FA_PtXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Path2DQuadBezierTo(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Path2DQuadBezierTo();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Path2DQuadBezierTo* AItem);
	void __fastcall CopyTo(TCT_Path2DQuadBezierTo* AItem);
	__property TCT_AdjPoint2DXpgList* A_PtXpgList = {read=FA_PtXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Path2DQuadBezierToXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Path2DQuadBezierTo* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Path2DQuadBezierTo* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Path2DQuadBezierTo* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_Path2DQuadBezierToXpgList* AItem);
	void __fastcall CopyTo(TCT_Path2DQuadBezierToXpgList* AItem);
	__property TCT_Path2DQuadBezierTo* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_Path2DQuadBezierToXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_Path2DQuadBezierToXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Path2DCubicBezierTo : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_AdjPoint2DXpgList* FA_PtXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Path2DCubicBezierTo(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Path2DCubicBezierTo();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Path2DCubicBezierTo* AItem);
	void __fastcall CopyTo(TCT_Path2DCubicBezierTo* AItem);
	__property TCT_AdjPoint2DXpgList* A_PtXpgList = {read=FA_PtXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Path2DCubicBezierToXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Path2DCubicBezierTo* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Path2DCubicBezierTo* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Path2DCubicBezierTo* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_Path2DCubicBezierToXpgList* AItem);
	void __fastcall CopyTo(TCT_Path2DCubicBezierToXpgList* AItem);
	__property TCT_Path2DCubicBezierTo* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_Path2DCubicBezierToXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_Path2DCubicBezierToXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextSpacing : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_TextSpacingPercent* FA_SpcPct;
	TCT_TextSpacingPoint* FA_SpcPts;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_TextSpacing(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextSpacing();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextSpacing* AItem);
	void __fastcall CopyTo(TCT_TextSpacing* AItem);
	TCT_TextSpacingPercent* __fastcall Create_A_SpcPct();
	TCT_TextSpacingPoint* __fastcall Create_A_SpcPts();
	__property TCT_TextSpacingPercent* A_SpcPct = {read=FA_SpcPct};
	__property TCT_TextSpacingPoint* A_SpcPts = {read=FA_SpcPts};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_TextBulletColor : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_TextBulletColorFollowText* FA_BuClrTx;
	TCT_Color* FA_BuClr;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_TextBulletColor(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_TextBulletColor();
	void __fastcall Clear();
	void __fastcall Assign(TEG_TextBulletColor* AItem);
	void __fastcall CopyTo(TEG_TextBulletColor* AItem);
	TCT_TextBulletColorFollowText* __fastcall Create_A_BuClrTx();
	TCT_Color* __fastcall Create_A_BuClr();
	__property TCT_TextBulletColorFollowText* A_BuClrTx = {read=FA_BuClrTx};
	__property TCT_Color* A_BuClr = {read=FA_BuClr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_TextBulletSize : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_TextBulletSizeFollowText* FA_BuSzTx;
	TCT_TextBulletSizePercent* FA_BuSzPct;
	TCT_TextBulletSizePoint* FA_BuSzPts;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_TextBulletSize(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_TextBulletSize();
	void __fastcall Clear();
	void __fastcall Assign(TEG_TextBulletSize* AItem);
	void __fastcall CopyTo(TEG_TextBulletSize* AItem);
	TCT_TextBulletSizeFollowText* __fastcall Create_A_BuSzTx();
	TCT_TextBulletSizePercent* __fastcall Create_A_BuSzPct();
	TCT_TextBulletSizePoint* __fastcall Create_A_BuSzPts();
	__property TCT_TextBulletSizeFollowText* A_BuSzTx = {read=FA_BuSzTx};
	__property TCT_TextBulletSizePercent* A_BuSzPct = {read=FA_BuSzPct};
	__property TCT_TextBulletSizePoint* A_BuSzPts = {read=FA_BuSzPts};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_TextBulletTypeface : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_TextBulletTypefaceFollowText* FA_BuFontTx;
	TCT_TextFont* FA_BuFont;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_TextBulletTypeface(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_TextBulletTypeface();
	void __fastcall Clear();
	void __fastcall Assign(TEG_TextBulletTypeface* AItem);
	void __fastcall CopyTo(TEG_TextBulletTypeface* AItem);
	TCT_TextBulletTypefaceFollowText* __fastcall Create_A_BuFontTx();
	TCT_TextFont* __fastcall Create_A_BuFont();
	__property TCT_TextBulletTypefaceFollowText* A_BuFontTx = {read=FA_BuFontTx};
	__property TCT_TextFont* A_BuFont = {read=FA_BuFont};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_TextBullet : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_TextNoBullet* FA_BuNone;
	TCT_TextAutonumberBullet* FA_BuAutoNum;
	TCT_TextCharBullet* FA_BuChar;
	TCT_TextBlipBullet* FA_BuBlip;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_TextBullet(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_TextBullet();
	void __fastcall Clear();
	void __fastcall Assign(TEG_TextBullet* AItem);
	void __fastcall CopyTo(TEG_TextBullet* AItem);
	TCT_TextNoBullet* __fastcall Create_A_BuNone();
	TCT_TextAutonumberBullet* __fastcall Create_A_BuAutoNum();
	TCT_TextCharBullet* __fastcall Create_A_BuChar();
	TCT_TextBlipBullet* __fastcall Create_A_BuBlip();
	__property TCT_TextNoBullet* A_BuNone = {read=FA_BuNone};
	__property TCT_TextAutonumberBullet* A_BuAutoNum = {read=FA_BuAutoNum};
	__property TCT_TextCharBullet* A_BuChar = {read=FA_BuChar};
	__property TCT_TextBlipBullet* A_BuBlip = {read=FA_BuBlip};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextTabStopList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_TextTabStopXpgList* FA_TabXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_TextTabStopList(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextTabStopList();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextTabStopList* AItem);
	void __fastcall CopyTo(TCT_TextTabStopList* AItem);
	TCT_TextTabStopXpgList* __fastcall Create_A_TabXpgList();
	__property TCT_TextTabStopXpgList* A_TabXpgList = {read=FA_TabXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextCharacterProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FKumimoji;
	System::UnicodeString FLang;
	System::UnicodeString FAltLang;
	int FSz;
	bool FB;
	bool FI;
	TST_TextUnderlineType FU;
	TST_TextStrikeType FStrike;
	int FKern;
	TST_TextCapsType FCap;
	int FSpc;
	bool FNormalizeH;
	int FBaseline;
	bool FNoProof;
	bool FDirty;
	bool FErr;
	bool FSmtClean;
	int FSmtId;
	System::UnicodeString FBmk;
	TCT_LineProperties* FA_Ln;
	TEG_FillProperties* FA_EG_FillProperties;
	TEG_EffectProperties* FA_EG_EffectProperties;
	TCT_Color* FA_Highlight;
	TEG_TextUnderlineLine* FA_EG_TextUnderlineLine;
	TEG_TextUnderlineFill* FA_EG_TextUnderlineFill;
	TCT_TextFont* FA_Latin;
	TCT_TextFont* FA_Ea;
	TCT_TextFont* FA_Cs;
	TCT_TextFont* FA_Sym;
	TCT_Hyperlink* FA_HlinkClick;
	TCT_Hyperlink* FA_HlinkMouseOver;
	TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TextCharacterProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextCharacterProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextCharacterProperties* AItem);
	void __fastcall AssignFont(TCT_TextCharacterProperties* AItem);
	void __fastcall CopyTo(TCT_TextCharacterProperties* AItem);
	TCT_LineProperties* __fastcall Create_Ln();
	TCT_Color* __fastcall Create_Highlight();
	TCT_TextFont* __fastcall Create_Latin();
	TCT_TextFont* __fastcall Create_Ea();
	TCT_TextFont* __fastcall Create_Cs();
	TCT_TextFont* __fastcall Create_Sym();
	TCT_Hyperlink* __fastcall Create_HlinkClick();
	TCT_Hyperlink* __fastcall Create_HlinkMouseOver();
	TCT_OfficeArtExtensionList* __fastcall Create_ExtLst();
	__property bool Kumimoji = {read=FKumimoji, write=FKumimoji, nodefault};
	__property System::UnicodeString Lang = {read=FLang, write=FLang};
	__property System::UnicodeString AltLang = {read=FAltLang, write=FAltLang};
	__property int Sz = {read=FSz, write=FSz, nodefault};
	__property bool B = {read=FB, write=FB, nodefault};
	__property bool I = {read=FI, write=FI, nodefault};
	__property TST_TextUnderlineType U = {read=FU, write=FU, nodefault};
	__property TST_TextStrikeType Strike = {read=FStrike, write=FStrike, nodefault};
	__property int Kern = {read=FKern, write=FKern, nodefault};
	__property TST_TextCapsType Cap = {read=FCap, write=FCap, nodefault};
	__property int Spc = {read=FSpc, write=FSpc, nodefault};
	__property bool NormalizeH = {read=FNormalizeH, write=FNormalizeH, nodefault};
	__property int Baseline = {read=FBaseline, write=FBaseline, nodefault};
	__property bool NoProof = {read=FNoProof, write=FNoProof, nodefault};
	__property bool Dirty = {read=FDirty, write=FDirty, nodefault};
	__property bool Err = {read=FErr, write=FErr, nodefault};
	__property bool SmtClean = {read=FSmtClean, write=FSmtClean, nodefault};
	__property int SmtId = {read=FSmtId, write=FSmtId, nodefault};
	__property System::UnicodeString Bmk = {read=FBmk, write=FBmk};
	__property TCT_LineProperties* Ln = {read=FA_Ln};
	__property TEG_FillProperties* FillProperties = {read=FA_EG_FillProperties};
	__property TEG_EffectProperties* EffectProperties = {read=FA_EG_EffectProperties};
	__property TCT_Color* Highlight = {read=FA_Highlight};
	__property TEG_TextUnderlineLine* TextUnderlineLine = {read=FA_EG_TextUnderlineLine};
	__property TEG_TextUnderlineFill* TextUnderlineFill = {read=FA_EG_TextUnderlineFill};
	__property TCT_TextFont* Latin = {read=FA_Latin};
	__property TCT_TextFont* Ea = {read=FA_Ea};
	__property TCT_TextFont* Cs = {read=FA_Cs};
	__property TCT_TextFont* Sym = {read=FA_Sym};
	__property TCT_Hyperlink* HlinkClick = {read=FA_HlinkClick};
	__property TCT_Hyperlink* HlinkMouseOver = {read=FA_HlinkMouseOver};
	__property TCT_OfficeArtExtensionList* ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GeomGuide : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	System::UnicodeString FFmla;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_GeomGuide(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GeomGuide();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GeomGuide* AItem);
	void __fastcall CopyTo(TCT_GeomGuide* AItem);
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString Fmla = {read=FFmla, write=FFmla};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GeomGuideXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_GeomGuide* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_GeomGuide* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_GeomGuide* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_GeomGuideXpgList* AItem);
	void __fastcall CopyTo(TCT_GeomGuideXpgList* AItem);
	__property TCT_GeomGuide* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_GeomGuideXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_GeomGuideXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_XYAdjustHandle : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FGdRefX;
	TST_AdjCoordinate FMinX;
	TST_AdjCoordinate *PFMinX;
	TST_AdjCoordinate FMaxX;
	TST_AdjCoordinate *PFMaxX;
	System::UnicodeString FGdRefY;
	TST_AdjCoordinate FMinY;
	TST_AdjCoordinate *PFMinY;
	TST_AdjCoordinate FMaxY;
	TST_AdjCoordinate *PFMaxY;
	TCT_AdjPoint2D* FA_Pos;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_XYAdjustHandle(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_XYAdjustHandle();
	void __fastcall Clear();
	void __fastcall Assign(TCT_XYAdjustHandle* AItem);
	void __fastcall CopyTo(TCT_XYAdjustHandle* AItem);
	TCT_AdjPoint2D* __fastcall Create_A_Pos();
	__property System::UnicodeString GdRefX = {read=FGdRefX, write=FGdRefX};
	__property PST_AdjCoordinate PMinX = {read=PFMinX, write=PFMinX};
	__property PST_AdjCoordinate PMaxX = {read=PFMaxX, write=PFMaxX};
	__property System::UnicodeString GdRefY = {read=FGdRefY, write=FGdRefY};
	__property PST_AdjCoordinate PMinY = {read=PFMinY, write=PFMinY};
	__property PST_AdjCoordinate PMaxY = {read=PFMaxY, write=PFMaxY};
	__property TCT_AdjPoint2D* A_Pos = {read=FA_Pos};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_XYAdjustHandleXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_XYAdjustHandle* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_XYAdjustHandle* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_XYAdjustHandle* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_XYAdjustHandleXpgList* AItem);
	void __fastcall CopyTo(TCT_XYAdjustHandleXpgList* AItem);
	__property TCT_XYAdjustHandle* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_XYAdjustHandleXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_XYAdjustHandleXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PolarAdjustHandle : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FGdRefR;
	TST_AdjCoordinate FMinR;
	TST_AdjCoordinate *PFMinR;
	TST_AdjCoordinate FMaxR;
	TST_AdjCoordinate *PFMaxR;
	System::UnicodeString FGdRefAng;
	TST_AdjAngle FMinAng;
	TST_AdjAngle *PFMinAng;
	TST_AdjAngle FMaxAng;
	TST_AdjAngle *PFMaxAng;
	TCT_AdjPoint2D* FA_Pos;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PolarAdjustHandle(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PolarAdjustHandle();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PolarAdjustHandle* AItem);
	void __fastcall CopyTo(TCT_PolarAdjustHandle* AItem);
	TCT_AdjPoint2D* __fastcall Create_A_Pos();
	__property System::UnicodeString GdRefR = {read=FGdRefR, write=FGdRefR};
	__property PST_AdjCoordinate PMinR = {read=PFMinR, write=PFMinR};
	__property PST_AdjCoordinate PMaxR = {read=PFMaxR, write=PFMaxR};
	__property System::UnicodeString GdRefAng = {read=FGdRefAng, write=FGdRefAng};
	__property PST_AdjAngle PMinAng = {read=PFMinAng, write=PFMinAng};
	__property PST_AdjAngle PMaxAng = {read=PFMaxAng, write=PFMaxAng};
	__property TCT_AdjPoint2D* A_Pos = {read=FA_Pos};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PolarAdjustHandleXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_PolarAdjustHandle* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_PolarAdjustHandle* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_PolarAdjustHandle* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_PolarAdjustHandleXpgList* AItem);
	void __fastcall CopyTo(TCT_PolarAdjustHandleXpgList* AItem);
	__property TCT_PolarAdjustHandle* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PolarAdjustHandleXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PolarAdjustHandleXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ConnectionSite : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_AdjAngle FAng;
	TST_AdjAngle *PFAng;
	TCT_AdjPoint2D* FA_Pos;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ConnectionSite(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ConnectionSite();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ConnectionSite* AItem);
	void __fastcall CopyTo(TCT_ConnectionSite* AItem);
	TCT_AdjPoint2D* __fastcall Create_A_Pos();
	__property PST_AdjAngle PAng = {read=PFAng, write=PFAng};
	__property TCT_AdjPoint2D* A_Pos = {read=FA_Pos};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ConnectionSiteXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_ConnectionSite* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_ConnectionSite* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_ConnectionSite* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_ConnectionSiteXpgList* AItem);
	void __fastcall CopyTo(TCT_ConnectionSiteXpgList* AItem);
	__property TCT_ConnectionSite* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ConnectionSiteXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ConnectionSiteXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Path2D : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FW;
	int FH;
	TST_PathFillMode FFill;
	bool FStroke;
	bool FExtrusionOk;
	TXPGBaseObjectList* FObjects;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Path2D(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Path2D();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Path2D* AItem);
	void __fastcall CopyTo(TCT_Path2D* AItem);
	__property int W = {read=FW, write=FW, nodefault};
	__property int H = {read=FH, write=FH, nodefault};
	__property TST_PathFillMode Fill = {read=FFill, write=FFill, nodefault};
	__property bool Stroke = {read=FStroke, write=FStroke, nodefault};
	__property bool ExtrusionOk = {read=FExtrusionOk, write=FExtrusionOk, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Path2DXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_Path2D* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Path2D* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Path2D* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_Path2DXpgList* AItem);
	void __fastcall CopyTo(TCT_Path2DXpgList* AItem);
	__property TCT_Path2D* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_Path2DXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_Path2DXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SphereCoords : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FLat;
	int FLon;
	int FRev;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_SphereCoords(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SphereCoords();
	void __fastcall Clear();
	void __fastcall Assign(TCT_SphereCoords* AItem);
	void __fastcall CopyTo(TCT_SphereCoords* AItem);
	__property int Lat = {read=FLat, write=FLat, nodefault};
	__property int Lon = {read=FLon, write=FLon, nodefault};
	__property int Rev = {read=FRev, write=FRev, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Point3D : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FX;
	int FY;
	int FZ;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Point3D(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Point3D();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Point3D* AItem);
	void __fastcall CopyTo(TCT_Point3D* AItem);
	__property int X = {read=FX, write=FX, nodefault};
	__property int Y = {read=FY, write=FY, nodefault};
	__property int Z = {read=FZ, write=FZ, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Vector3D : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FDx;
	int FDy;
	int FDz;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Vector3D(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Vector3D();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Vector3D* AItem);
	void __fastcall CopyTo(TCT_Vector3D* AItem);
	__property int Dx = {read=FDx, write=FDx, nodefault};
	__property int Dy = {read=FDy, write=FDy, nodefault};
	__property int Dz = {read=FDz, write=FDz, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Bevel : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FW;
	int FH;
	TST_BevelPresetType FPrst;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Bevel(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Bevel();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Bevel* AItem);
	void __fastcall CopyTo(TCT_Bevel* AItem);
	__property int W = {read=FW, write=FW, nodefault};
	__property int H = {read=FH, write=FH, nodefault};
	__property TST_BevelPresetType Prst = {read=FPrst, write=FPrst, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextParagraphProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FMarL;
	int FMarR;
	int FLvl;
	int FIndent;
	TST_TextAlignType FAlgn;
	int FDefTabSz;
	bool FRtl;
	bool FEaLnBrk;
	TST_TextFontAlignType FFontAlgn;
	bool FLatinLnBrk;
	bool FHangingPunct;
	TCT_TextSpacing* FA_LnSpc;
	TCT_TextSpacing* FA_SpcBef;
	TCT_TextSpacing* FA_SpcAft;
	TEG_TextBulletColor* FA_EG_TextBulletColor;
	TEG_TextBulletSize* FA_EG_TextBulletSize;
	TEG_TextBulletTypeface* FA_EG_TextBulletTypeface;
	TEG_TextBullet* FA_EG_TextBullet;
	TCT_TextTabStopList* FA_TabLst;
	TCT_TextCharacterProperties* FA_DefRPr;
	TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TextParagraphProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextParagraphProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextParagraphProperties* AItem);
	void __fastcall CopyTo(TCT_TextParagraphProperties* AItem);
	TCT_TextSpacing* __fastcall Create_LnSpc();
	TCT_TextSpacing* __fastcall Create_SpcBef();
	TCT_TextSpacing* __fastcall Create_SpcAft();
	TCT_TextTabStopList* __fastcall Create_TabLst();
	TCT_TextCharacterProperties* __fastcall Create_DefRPr();
	TCT_OfficeArtExtensionList* __fastcall Create_ExtLst();
	__property int MarL = {read=FMarL, write=FMarL, nodefault};
	__property int MarR = {read=FMarR, write=FMarR, nodefault};
	__property int Lvl = {read=FLvl, write=FLvl, nodefault};
	__property int Indent = {read=FIndent, write=FIndent, nodefault};
	__property TST_TextAlignType Algn = {read=FAlgn, write=FAlgn, nodefault};
	__property int DefTabSz = {read=FDefTabSz, write=FDefTabSz, nodefault};
	__property bool Rtl = {read=FRtl, write=FRtl, nodefault};
	__property bool EaLnBrk = {read=FEaLnBrk, write=FEaLnBrk, nodefault};
	__property TST_TextFontAlignType FontAlgn = {read=FFontAlgn, write=FFontAlgn, nodefault};
	__property bool LatinLnBrk = {read=FLatinLnBrk, write=FLatinLnBrk, nodefault};
	__property bool HangingPunct = {read=FHangingPunct, write=FHangingPunct, nodefault};
	__property TCT_TextSpacing* LnSpc = {read=FA_LnSpc};
	__property TCT_TextSpacing* SpcBef = {read=FA_SpcBef};
	__property TCT_TextSpacing* SpcAft = {read=FA_SpcAft};
	__property TEG_TextBulletColor* TextBulletColor = {read=FA_EG_TextBulletColor};
	__property TEG_TextBulletSize* TextBulletSize = {read=FA_EG_TextBulletSize};
	__property TEG_TextBulletTypeface* TextBulletTypeface = {read=FA_EG_TextBulletTypeface};
	__property TEG_TextBullet* TextBullet = {read=FA_EG_TextBullet};
	__property TCT_TextTabStopList* TabLst = {read=FA_TabLst};
	__property TCT_TextCharacterProperties* DefRPr = {read=FA_DefRPr};
	__property TCT_OfficeArtExtensionList* ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GeomGuideList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_GeomGuideXpgList* FA_GdXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_GeomGuideList(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GeomGuideList();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GeomGuideList* AItem);
	void __fastcall CopyTo(TCT_GeomGuideList* AItem);
	TCT_GeomGuideXpgList* __fastcall Create_A_GdXpgList();
	__property TCT_GeomGuideXpgList* A_GdXpgList = {read=FA_GdXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AdjustHandleList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_XYAdjustHandleXpgList* FA_AhXYXpgList;
	TCT_PolarAdjustHandleXpgList* FA_AhPolarXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_AdjustHandleList(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_AdjustHandleList();
	void __fastcall Clear();
	void __fastcall Assign(TCT_AdjustHandleList* AItem);
	void __fastcall CopyTo(TCT_AdjustHandleList* AItem);
	TCT_XYAdjustHandleXpgList* __fastcall Create_A_AhXYXpgList();
	TCT_PolarAdjustHandleXpgList* __fastcall Create_A_AhPolarXpgList();
	__property TCT_XYAdjustHandleXpgList* A_AhXYXpgList = {read=FA_AhXYXpgList};
	__property TCT_PolarAdjustHandleXpgList* A_AhPolarXpgList = {read=FA_AhPolarXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ConnectionSiteList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_ConnectionSiteXpgList* FA_CxnXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_ConnectionSiteList(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ConnectionSiteList();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ConnectionSiteList* AItem);
	void __fastcall CopyTo(TCT_ConnectionSiteList* AItem);
	TCT_ConnectionSiteXpgList* __fastcall Create_A_CxnXpgList();
	__property TCT_ConnectionSiteXpgList* A_CxnXpgList = {read=FA_CxnXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GeomRect : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_AdjCoordinate FL;
	TST_AdjCoordinate *PFL;
	TST_AdjCoordinate FT;
	TST_AdjCoordinate *PFT;
	TST_AdjCoordinate FR;
	TST_AdjCoordinate *PFR;
	TST_AdjCoordinate FB;
	TST_AdjCoordinate *PFB;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_GeomRect(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GeomRect();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GeomRect* AItem);
	void __fastcall CopyTo(TCT_GeomRect* AItem);
	__property PST_AdjCoordinate PL = {read=PFL, write=PFL};
	__property PST_AdjCoordinate PT = {read=PFT, write=PFT};
	__property PST_AdjCoordinate PR = {read=PFR, write=PFR};
	__property PST_AdjCoordinate PB = {read=PFB, write=PFB};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Path2DList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_Path2DXpgList* FA_PathXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Path2DList(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Path2DList();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Path2DList* AItem);
	void __fastcall CopyTo(TCT_Path2DList* AItem);
	TCT_Path2DXpgList* __fastcall Create_A_PathXpgList();
	__property TCT_Path2DXpgList* A_PathXpgList = {read=FA_PathXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextNoAutofit : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_TextNoAutofit(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextNoAutofit();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextNoAutofit* AItem);
	void __fastcall CopyTo(TCT_TextNoAutofit* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextNormalAutofit : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FFontScale;
	int FLnSpcReduction;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TextNormalAutofit(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextNormalAutofit();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextNormalAutofit* AItem);
	void __fastcall CopyTo(TCT_TextNormalAutofit* AItem);
	__property int FontScale = {read=FFontScale, write=FFontScale, nodefault};
	__property int LnSpcReduction = {read=FLnSpcReduction, write=FLnSpcReduction, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextShapeAutofit : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_TextShapeAutofit(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextShapeAutofit();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextShapeAutofit* AItem);
	void __fastcall CopyTo(TCT_TextShapeAutofit* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Camera : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_PresetCameraType FPrst;
	int FFov;
	int FZoom;
	TCT_SphereCoords* FA_Rot;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Camera(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Camera();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Camera* AItem);
	void __fastcall CopyTo(TCT_Camera* AItem);
	TCT_SphereCoords* __fastcall Create_A_Rot();
	__property TST_PresetCameraType Prst = {read=FPrst, write=FPrst, nodefault};
	__property int Fov = {read=FFov, write=FFov, nodefault};
	__property int Zoom = {read=FZoom, write=FZoom, nodefault};
	__property TCT_SphereCoords* A_Rot = {read=FA_Rot};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LightRig : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_LightRigType FRig;
	TST_LightRigDirection FDir;
	TCT_SphereCoords* FA_Rot;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_LightRig(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LightRig();
	void __fastcall Clear();
	void __fastcall Assign(TCT_LightRig* AItem);
	void __fastcall CopyTo(TCT_LightRig* AItem);
	TCT_SphereCoords* __fastcall Create_A_Rot();
	__property TST_LightRigType Rig = {read=FRig, write=FRig, nodefault};
	__property TST_LightRigDirection Dir = {read=FDir, write=FDir, nodefault};
	__property TCT_SphereCoords* A_Rot = {read=FA_Rot};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Backdrop : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_Point3D* FA_Anchor;
	TCT_Vector3D* FA_Norm;
	TCT_Vector3D* FA_Up;
	TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Backdrop(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Backdrop();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Backdrop* AItem);
	void __fastcall CopyTo(TCT_Backdrop* AItem);
	TCT_Point3D* __fastcall Create_A_Anchor();
	TCT_Vector3D* __fastcall Create_A_Norm();
	TCT_Vector3D* __fastcall Create_A_Up();
	TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property TCT_Point3D* A_Anchor = {read=FA_Anchor};
	__property TCT_Vector3D* A_Norm = {read=FA_Norm};
	__property TCT_Vector3D* A_Up = {read=FA_Up};
	__property TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Shape3D : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FZ;
	int FExtrusionH;
	int FContourW;
	TST_PresetMaterialType FPrstMaterial;
	TCT_Bevel* FA_BevelT;
	TCT_Bevel* FA_BevelB;
	TCT_Color* FA_ExtrusionClr;
	TCT_Color* FA_ContourClr;
	TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Shape3D(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Shape3D();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Shape3D* AItem);
	void __fastcall CopyTo(TCT_Shape3D* AItem);
	TCT_Bevel* __fastcall Create_A_BevelT();
	TCT_Bevel* __fastcall Create_A_BevelB();
	TCT_Color* __fastcall Create_A_ExtrusionClr();
	TCT_Color* __fastcall Create_A_ContourClr();
	TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property int Z = {read=FZ, write=FZ, nodefault};
	__property int ExtrusionH = {read=FExtrusionH, write=FExtrusionH, nodefault};
	__property int ContourW = {read=FContourW, write=FContourW, nodefault};
	__property TST_PresetMaterialType PrstMaterial = {read=FPrstMaterial, write=FPrstMaterial, nodefault};
	__property TCT_Bevel* A_BevelT = {read=FA_BevelT};
	__property TCT_Bevel* A_BevelB = {read=FA_BevelB};
	__property TCT_Color* A_ExtrusionClr = {read=FA_ExtrusionClr};
	__property TCT_Color* A_ContourClr = {read=FA_ContourClr};
	__property TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FlatText : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FZ;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_FlatText(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FlatText();
	void __fastcall Clear();
	void __fastcall Assign(TCT_FlatText* AItem);
	void __fastcall CopyTo(TCT_FlatText* AItem);
	__property int Z = {read=FZ, write=FZ, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RegularTextRun : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_TextCharacterProperties* FA_RPr;
	System::UnicodeString FA_T;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_RegularTextRun(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_RegularTextRun();
	void __fastcall Clear();
	void __fastcall Assign(TCT_RegularTextRun* AItem);
	void __fastcall CopyTo(TCT_RegularTextRun* AItem);
	TCT_TextCharacterProperties* __fastcall Create_RPr();
	__property TCT_TextCharacterProperties* RPr = {read=FA_RPr};
	__property System::UnicodeString T = {read=FA_T, write=FA_T};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextLineBreak : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_TextCharacterProperties* FA_RPr;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_TextLineBreak(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextLineBreak();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextLineBreak* AItem);
	void __fastcall CopyTo(TCT_TextLineBreak* AItem);
	TCT_TextCharacterProperties* __fastcall Create_RPr();
	__property TCT_TextCharacterProperties* RPr = {read=FA_RPr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextField : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FId;
	System::UnicodeString FType;
	TCT_TextCharacterProperties* FA_RPr;
	TCT_TextParagraphProperties* FA_PPr;
	System::UnicodeString FA_T;
	
public:
	__fastcall TCT_TextField(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextField();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	void __fastcall Assign(TCT_TextField* AItem);
	void __fastcall CopyTo(TCT_TextField* AItem);
	TCT_TextCharacterProperties* __fastcall Create_A_RPr();
	TCT_TextParagraphProperties* __fastcall Create_A_PPr();
	__property System::UnicodeString Id = {read=FId, write=FId};
	__property System::UnicodeString Type_ = {read=FType, write=FType};
	__property TCT_TextCharacterProperties* A_RPr = {read=FA_RPr};
	__property TCT_TextParagraphProperties* A_PPr = {read=FA_PPr};
	__property System::UnicodeString A_T = {read=FA_T, write=FA_T};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Point2D : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FX;
	int FY;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Point2D(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Point2D();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Point2D* AItem);
	void __fastcall CopyTo(TCT_Point2D* AItem);
	__property int X = {read=FX, write=FX, nodefault};
	__property int Y = {read=FY, write=FY, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PositiveSize2D : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FCx;
	int FCy;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PositiveSize2D(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PositiveSize2D();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PositiveSize2D* AItem);
	void __fastcall CopyTo(TCT_PositiveSize2D* AItem);
	__property int Cx = {read=FCx, write=FCx, nodefault};
	__property int Cy = {read=FCy, write=FCy, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustomGeometry2D : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_GeomGuideList* FA_AvLst;
	TCT_GeomGuideList* FA_GdLst;
	TCT_AdjustHandleList* FA_AhLst;
	TCT_ConnectionSiteList* FA_CxnLst;
	TCT_GeomRect* FA_Rect;
	TCT_Path2DList* FA_PathLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_CustomGeometry2D(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CustomGeometry2D();
	void __fastcall Clear();
	void __fastcall Assign(TCT_CustomGeometry2D* AItem);
	void __fastcall CopyTo(TCT_CustomGeometry2D* AItem);
	TCT_GeomGuideList* __fastcall Create_A_AvLst();
	TCT_GeomGuideList* __fastcall Create_A_GdLst();
	TCT_AdjustHandleList* __fastcall Create_A_AhLst();
	TCT_ConnectionSiteList* __fastcall Create_A_CxnLst();
	TCT_GeomRect* __fastcall Create_A_Rect();
	TCT_Path2DList* __fastcall Create_A_PathLst();
	__property TCT_GeomGuideList* A_AvLst = {read=FA_AvLst};
	__property TCT_GeomGuideList* A_GdLst = {read=FA_GdLst};
	__property TCT_AdjustHandleList* A_AhLst = {read=FA_AhLst};
	__property TCT_ConnectionSiteList* A_CxnLst = {read=FA_CxnLst};
	__property TCT_GeomRect* A_Rect = {read=FA_Rect};
	__property TCT_Path2DList* A_PathLst = {read=FA_PathLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PresetGeometry2D : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_ShapeType FPrst;
	TCT_GeomGuideList* FA_AvLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PresetGeometry2D(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PresetGeometry2D();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PresetGeometry2D* AItem);
	void __fastcall CopyTo(TCT_PresetGeometry2D* AItem);
	TCT_GeomGuideList* __fastcall Create_A_AvLst();
	__property TST_ShapeType Prst = {read=FPrst, write=FPrst, nodefault};
	__property TCT_GeomGuideList* A_AvLst = {read=FA_AvLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PresetTextShape : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_TextShapeType FPrst;
	TCT_GeomGuideList* FA_AvLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PresetTextShape(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PresetTextShape();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PresetTextShape* AItem);
	void __fastcall CopyTo(TCT_PresetTextShape* AItem);
	TCT_GeomGuideList* __fastcall Create_A_AvLst();
	__property TST_TextShapeType Prst = {read=FPrst, write=FPrst, nodefault};
	__property TCT_GeomGuideList* A_AvLst = {read=FA_AvLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_TextAutofit : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_TextNoAutofit* FA_NoAutofit;
	TCT_TextNormalAutofit* FA_NormAutofit;
	TCT_TextShapeAutofit* FA_SpAutoFit;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_TextAutofit(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_TextAutofit();
	void __fastcall Clear();
	void __fastcall Assign(TEG_TextAutofit* AItem);
	void __fastcall CopyTo(TEG_TextAutofit* AItem);
	TCT_TextNoAutofit* __fastcall Create_A_NoAutofit();
	TCT_TextNormalAutofit* __fastcall Create_A_NormAutofit();
	TCT_TextShapeAutofit* __fastcall Create_A_SpAutoFit();
	__property TCT_TextNoAutofit* A_NoAutofit = {read=FA_NoAutofit};
	__property TCT_TextNormalAutofit* A_NormAutofit = {read=FA_NormAutofit};
	__property TCT_TextShapeAutofit* A_SpAutoFit = {read=FA_SpAutoFit};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Scene3D : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_Camera* FA_Camera;
	TCT_LightRig* FA_LightRig;
	TCT_Backdrop* FA_Backdrop;
	TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Scene3D(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Scene3D();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Scene3D* AItem);
	void __fastcall CopyTo(TCT_Scene3D* AItem);
	TCT_Camera* __fastcall Create_A_Camera();
	TCT_LightRig* __fastcall Create_A_LightRig();
	TCT_Backdrop* __fastcall Create_A_Backdrop();
	TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property TCT_Camera* A_Camera = {read=FA_Camera};
	__property TCT_LightRig* A_LightRig = {read=FA_LightRig};
	__property TCT_Backdrop* A_Backdrop = {read=FA_Backdrop};
	__property TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_Text3D : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_Shape3D* FA_Sp3d;
	TCT_FlatText* FA_FlatTx;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_Text3D(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_Text3D();
	void __fastcall Clear();
	void __fastcall Assign(TEG_Text3D* AItem);
	void __fastcall CopyTo(TEG_Text3D* AItem);
	TCT_Shape3D* __fastcall Create_A_Sp3d();
	TCT_FlatText* __fastcall Create_A_FlatTx();
	__property TCT_Shape3D* A_Sp3d = {read=FA_Sp3d};
	__property TCT_FlatText* A_FlatTx = {read=FA_FlatTx};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_TextRun : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_RegularTextRun* FA_R;
	TCT_TextLineBreak* FA_Br;
	TCT_TextField* FA_Fld;
	
public:
	__fastcall TEG_TextRun(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_TextRun();
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall Clear();
	void __fastcall Assign(TEG_TextRun* AItem);
	void __fastcall CopyTo(TEG_TextRun* AItem);
	TCT_RegularTextRun* __fastcall Create_R();
	TCT_TextLineBreak* __fastcall Create_Br();
	TCT_TextField* __fastcall Create_Fldt();
	void __fastcall ConvertToRun();
	void __fastcall ConvertToBreak();
	__property TCT_RegularTextRun* Run = {read=FA_R};
	__property TCT_TextLineBreak* Br = {read=FA_Br};
	__property TCT_TextField* Fld = {read=FA_Fld};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_TextRunXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TEG_TextRun* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TEG_TextRun* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TEG_TextRun* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	HIDESBASE void __fastcall Assign(TEG_TextRunXpgList* AItem);
	void __fastcall CopyTo(TEG_TextRunXpgList* AItem);
	__property TEG_TextRun* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TEG_TextRunXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TEG_TextRunXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Connection : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FId;
	int FIdx;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Connection(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Connection();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Connection* AItem);
	void __fastcall CopyTo(TCT_Connection* AItem);
	__property int Id = {read=FId, write=FId, nodefault};
	__property int Idx = {read=FIdx, write=FIdx, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Transform2D : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FRot;
	bool FFlipH;
	bool FFlipV;
	TCT_Point2D* FA_Off;
	TCT_PositiveSize2D* FA_Ext;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Transform2D(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Transform2D();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Transform2D* AItem);
	void __fastcall CopyTo(TCT_Transform2D* AItem);
	TCT_Point2D* __fastcall Create_A_Off();
	TCT_PositiveSize2D* __fastcall Create_A_Ext();
	__property int Rot = {read=FRot, write=FRot, nodefault};
	__property bool FlipH = {read=FFlipH, write=FFlipH, nodefault};
	__property bool FlipV = {read=FFlipV, write=FFlipV, nodefault};
	__property TCT_Point2D* A_Off = {read=FA_Off};
	__property TCT_PositiveSize2D* A_Ext = {read=FA_Ext};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_Geometry : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_CustomGeometry2D* FA_CustGeom;
	TCT_PresetGeometry2D* FA_PrstGeom;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_Geometry(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_Geometry();
	void __fastcall Clear();
	void __fastcall Assign(TEG_Geometry* AItem);
	void __fastcall CopyTo(TEG_Geometry* AItem);
	TCT_CustomGeometry2D* __fastcall Create_CustGeom();
	TCT_PresetGeometry2D* __fastcall Create_PrstGeom();
	__property TCT_CustomGeometry2D* CustGeom = {read=FA_CustGeom};
	__property TCT_PresetGeometry2D* PrstGeom = {read=FA_PrstGeom};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_StyleMatrixReference : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FIdx;
	TEG_ColorChoice* FA_EG_ColorChoice;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_StyleMatrixReference(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_StyleMatrixReference();
	void __fastcall Clear();
	void __fastcall Assign(TCT_StyleMatrixReference* AItem);
	void __fastcall CopyTo(TCT_StyleMatrixReference* AItem);
	__property int Idx = {read=FIdx, write=FIdx, nodefault};
	__property TEG_ColorChoice* A_EG_ColorChoice = {read=FA_EG_ColorChoice};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FontReference : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_FontCollectionIndex FIdx;
	TEG_ColorChoice* FA_EG_ColorChoice;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_FontReference(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FontReference();
	void __fastcall Clear();
	void __fastcall Assign(TCT_FontReference* AItem);
	void __fastcall CopyTo(TCT_FontReference* AItem);
	__property TST_FontCollectionIndex Idx = {read=FIdx, write=FIdx, nodefault};
	__property TEG_ColorChoice* A_EG_ColorChoice = {read=FA_EG_ColorChoice};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextBodyProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FRot;
	bool FSpcFirstLastPara;
	TST_TextVertOverflowType FVertOverflow;
	TST_TextHorzOverflowType FHorzOverflow;
	TST_TextVerticalType FVert;
	TST_TextWrappingType FWrap;
	int FLIns;
	int FTIns;
	int FRIns;
	int FBIns;
	int FNumCol;
	int FSpcCol;
	bool FRtlCol;
	bool FFromWordArt;
	TST_TextAnchoringType FAnchor;
	bool FAnchorCtr;
	bool FForceAA;
	bool FUpright;
	bool FCompatLnSpc;
	TCT_PresetTextShape* FA_PrstTxWarp;
	TEG_TextAutofit* FA_EG_TextAutofit;
	TCT_Scene3D* FA_Scene3d;
	TEG_Text3D* FA_EG_Text3D;
	TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_TextBodyProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextBodyProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextBodyProperties* AItem);
	void __fastcall CopyTo(TCT_TextBodyProperties* AItem);
	TCT_PresetTextShape* __fastcall Create_A_PrstTxWarp();
	TCT_Scene3D* __fastcall Create_A_Scene3d();
	TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property int Rot = {read=FRot, write=FRot, nodefault};
	__property bool SpcFirstLastPara = {read=FSpcFirstLastPara, write=FSpcFirstLastPara, nodefault};
	__property TST_TextVertOverflowType VertOverflow = {read=FVertOverflow, write=FVertOverflow, nodefault};
	__property TST_TextHorzOverflowType HorzOverflow = {read=FHorzOverflow, write=FHorzOverflow, nodefault};
	__property TST_TextVerticalType Vert = {read=FVert, write=FVert, nodefault};
	__property TST_TextWrappingType Wrap = {read=FWrap, write=FWrap, nodefault};
	__property int LIns = {read=FLIns, write=FLIns, nodefault};
	__property int TIns = {read=FTIns, write=FTIns, nodefault};
	__property int RIns = {read=FRIns, write=FRIns, nodefault};
	__property int BIns = {read=FBIns, write=FBIns, nodefault};
	__property int NumCol = {read=FNumCol, write=FNumCol, nodefault};
	__property int SpcCol = {read=FSpcCol, write=FSpcCol, nodefault};
	__property bool RtlCol = {read=FRtlCol, write=FRtlCol, nodefault};
	__property bool FromWordArt = {read=FFromWordArt, write=FFromWordArt, nodefault};
	__property TST_TextAnchoringType Anchor = {read=FAnchor, write=FAnchor, nodefault};
	__property bool AnchorCtr = {read=FAnchorCtr, write=FAnchorCtr, nodefault};
	__property bool ForceAA = {read=FForceAA, write=FForceAA, nodefault};
	__property bool Upright = {read=FUpright, write=FUpright, nodefault};
	__property bool CompatLnSpc = {read=FCompatLnSpc, write=FCompatLnSpc, nodefault};
	__property TCT_PresetTextShape* PrstTxWarp = {read=FA_PrstTxWarp};
	__property TEG_TextAutofit* EG_TextAutofit = {read=FA_EG_TextAutofit};
	__property TCT_Scene3D* Scene3d = {read=FA_Scene3d};
	__property TEG_Text3D* Text3D = {read=FA_EG_Text3D};
	__property TCT_OfficeArtExtensionList* ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextListStyle : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_TextParagraphProperties* FA_DefPPr;
	TCT_TextParagraphProperties* FA_Lvl1pPr;
	TCT_TextParagraphProperties* FA_Lvl2pPr;
	TCT_TextParagraphProperties* FA_Lvl3pPr;
	TCT_TextParagraphProperties* FA_Lvl4pPr;
	TCT_TextParagraphProperties* FA_Lvl5pPr;
	TCT_TextParagraphProperties* FA_Lvl6pPr;
	TCT_TextParagraphProperties* FA_Lvl7pPr;
	TCT_TextParagraphProperties* FA_Lvl8pPr;
	TCT_TextParagraphProperties* FA_Lvl9pPr;
	TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_TextListStyle(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextListStyle();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextListStyle* AItem);
	void __fastcall CopyTo(TCT_TextListStyle* AItem);
	TCT_TextParagraphProperties* __fastcall Create_A_DefPPr();
	TCT_TextParagraphProperties* __fastcall Create_A_Lvl1pPr();
	TCT_TextParagraphProperties* __fastcall Create_A_Lvl2pPr();
	TCT_TextParagraphProperties* __fastcall Create_A_Lvl3pPr();
	TCT_TextParagraphProperties* __fastcall Create_A_Lvl4pPr();
	TCT_TextParagraphProperties* __fastcall Create_A_Lvl5pPr();
	TCT_TextParagraphProperties* __fastcall Create_A_Lvl6pPr();
	TCT_TextParagraphProperties* __fastcall Create_A_Lvl7pPr();
	TCT_TextParagraphProperties* __fastcall Create_A_Lvl8pPr();
	TCT_TextParagraphProperties* __fastcall Create_A_Lvl9pPr();
	TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property TCT_TextParagraphProperties* A_DefPPr = {read=FA_DefPPr};
	__property TCT_TextParagraphProperties* A_Lvl1pPr = {read=FA_Lvl1pPr};
	__property TCT_TextParagraphProperties* A_Lvl2pPr = {read=FA_Lvl2pPr};
	__property TCT_TextParagraphProperties* A_Lvl3pPr = {read=FA_Lvl3pPr};
	__property TCT_TextParagraphProperties* A_Lvl4pPr = {read=FA_Lvl4pPr};
	__property TCT_TextParagraphProperties* A_Lvl5pPr = {read=FA_Lvl5pPr};
	__property TCT_TextParagraphProperties* A_Lvl6pPr = {read=FA_Lvl6pPr};
	__property TCT_TextParagraphProperties* A_Lvl7pPr = {read=FA_Lvl7pPr};
	__property TCT_TextParagraphProperties* A_Lvl8pPr = {read=FA_Lvl8pPr};
	__property TCT_TextParagraphProperties* A_Lvl9pPr = {read=FA_Lvl9pPr};
	__property TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextParagraph : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_TextParagraphProperties* FA_PPr;
	TEG_TextRunXpgList* FA_EG_TextRuns;
	TCT_TextCharacterProperties* FA_EndParaRPr;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_TextParagraph(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextParagraph();
	void __fastcall Clear();
	void __fastcall Assign(TCT_TextParagraph* AItem);
	void __fastcall CopyTo(TCT_TextParagraph* AItem);
	TCT_TextParagraphProperties* __fastcall Create_PPr();
	TCT_TextCharacterProperties* __fastcall Create_EndParaRPr();
	TCT_RegularTextRun* __fastcall AppendText(System::UnicodeString AText)/* overload */;
	TCT_RegularTextRun* __fastcall AppendText(System::UnicodeString AText, double ASize, bool ABold, bool AItalic, bool AUnderline)/* overload */;
	__property TCT_TextParagraphProperties* PPr = {read=FA_PPr};
	__property TEG_TextRunXpgList* TextRuns = {read=FA_EG_TextRuns};
	__property TCT_TextCharacterProperties* EndParaRPr = {read=FA_EndParaRPr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextParagraphXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_TextParagraph* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_TextParagraph* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_TextParagraph* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_TextParagraphXpgList* AItem);
	void __fastcall CopyTo(TCT_TextParagraphXpgList* AItem);
	__property TCT_TextParagraph* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_TextParagraphXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_TextParagraphXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GroupTransform2D : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FRot;
	bool FFlipH;
	bool FFlipV;
	TCT_Point2D* FA_Off;
	TCT_PositiveSize2D* FA_Ext;
	TCT_Point2D* FA_ChOff;
	TCT_PositiveSize2D* FA_ChExt;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_GroupTransform2D(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GroupTransform2D();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GroupTransform2D* AItem);
	void __fastcall CopyTo(TCT_GroupTransform2D* AItem);
	TCT_Point2D* __fastcall Create_A_Off();
	TCT_PositiveSize2D* __fastcall Create_A_Ext();
	TCT_Point2D* __fastcall Create_A_ChOff();
	TCT_PositiveSize2D* __fastcall Create_A_ChExt();
	__property int Rot = {read=FRot, write=FRot, nodefault};
	__property bool FlipH = {read=FFlipH, write=FFlipH, nodefault};
	__property bool FlipV = {read=FFlipV, write=FFlipV, nodefault};
	__property TCT_Point2D* A_Off = {read=FA_Off};
	__property TCT_PositiveSize2D* A_Ext = {read=FA_Ext};
	__property TCT_Point2D* A_ChOff = {read=FA_ChOff};
	__property TCT_PositiveSize2D* A_ChExt = {read=FA_ChExt};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ShapeProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_BlackWhiteMode FBwMode;
	TCT_Transform2D* FA_Xfrm;
	TEG_Geometry* FA_EG_Geometry;
	TEG_FillProperties* FA_EG_FillProperties;
	TCT_LineProperties* FA_Ln;
	TEG_EffectProperties* FA_EG_EffectProperties;
	TCT_Scene3D* FA_Scene3d;
	TCT_Shape3D* FA_Sp3d;
	TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ShapeProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ShapeProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ShapeProperties* AItem);
	void __fastcall CopyTo(TCT_ShapeProperties* AItem);
	TCT_Transform2D* __fastcall Create_Xfrm();
	TCT_LineProperties* __fastcall Create_Ln();
	TCT_Scene3D* __fastcall Create_Scene3d();
	TCT_Shape3D* __fastcall Create_Sp3d();
	TCT_OfficeArtExtensionList* __fastcall Create_ExtLst();
	void __fastcall Free_Ln();
	__property TST_BlackWhiteMode BwMode = {read=FBwMode, write=FBwMode, nodefault};
	__property TCT_Transform2D* Xfrm = {read=FA_Xfrm};
	__property TEG_Geometry* Geometry = {read=FA_EG_Geometry};
	__property TEG_FillProperties* FillProperties = {read=FA_EG_FillProperties};
	__property TCT_LineProperties* Ln = {read=FA_Ln};
	__property TEG_EffectProperties* EffectProperties = {read=FA_EG_EffectProperties};
	__property TCT_Scene3D* Scene3d = {read=FA_Scene3d};
	__property TCT_Shape3D* Sp3d = {read=FA_Sp3d};
	__property TCT_OfficeArtExtensionList* ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ShapeStyle : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_StyleMatrixReference* FA_LnRef;
	TCT_StyleMatrixReference* FA_FillRef;
	TCT_StyleMatrixReference* FA_EffectRef;
	TCT_FontReference* FA_FontRef;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_ShapeStyle(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ShapeStyle();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ShapeStyle* AItem);
	void __fastcall CopyTo(TCT_ShapeStyle* AItem);
	TCT_StyleMatrixReference* __fastcall Create_A_LnRef();
	TCT_StyleMatrixReference* __fastcall Create_A_FillRef();
	TCT_StyleMatrixReference* __fastcall Create_A_EffectRef();
	TCT_FontReference* __fastcall Create_A_FontRef();
	__property TCT_StyleMatrixReference* A_LnRef = {read=FA_LnRef};
	__property TCT_StyleMatrixReference* A_FillRef = {read=FA_FillRef};
	__property TCT_StyleMatrixReference* A_EffectRef = {read=FA_EffectRef};
	__property TCT_FontReference* A_FontRef = {read=FA_FontRef};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TextBody : public TXPGBase
{
	typedef TXPGBase inherited;
	
private:
	System::UnicodeString __fastcall GetPLainText();
	void __fastcall SetPlainText(const System::UnicodeString Value);
	
protected:
	TCT_TextBodyProperties* FA_BodyPr;
	TCT_TextListStyle* FA_LstStyle;
	TCT_TextParagraphXpgList* FA_PXpgList;
	
public:
	__fastcall TCT_TextBody(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TextBody();
	void __fastcall Clear();
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall Assign(TCT_TextBody* AItem);
	void __fastcall CopyTo(TCT_TextBody* AItem);
	TCT_TextBodyProperties* __fastcall Create_BodyPr();
	TCT_TextListStyle* __fastcall Create_LstStyle();
	TCT_TextParagraphXpgList* __fastcall Create_Paras();
	double __fastcall MaxFontHeight();
	__property TCT_TextBodyProperties* BodyPr = {read=FA_BodyPr};
	__property TCT_TextListStyle* LstStyle = {read=FA_LstStyle};
	__property TCT_TextParagraphXpgList* Paras = {read=FA_PXpgList};
	__property System::UnicodeString PlainText = {read=GetPLainText, write=SetPlainText};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GroupShapeProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TST_BlackWhiteMode FBwMode;
	TCT_GroupTransform2D* FA_Xfrm;
	TEG_FillProperties* FA_EG_FillProperties;
	TEG_EffectProperties* FA_EG_EffectProperties;
	TCT_Scene3D* FA_Scene3d;
	TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_GroupShapeProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GroupShapeProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GroupShapeProperties* AItem);
	void __fastcall CopyTo(TCT_GroupShapeProperties* AItem);
	TCT_GroupTransform2D* __fastcall Create_A_Xfrm();
	TCT_Scene3D* __fastcall Create_A_Scene3d();
	TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property TST_BlackWhiteMode BwMode = {read=FBwMode, write=FBwMode, nodefault};
	__property TCT_GroupTransform2D* A_Xfrm = {read=FA_Xfrm};
	__property TEG_FillProperties* A_EG_FillProperties = {read=FA_EG_FillProperties};
	__property TEG_EffectProperties* A_EG_EffectProperties = {read=FA_EG_EffectProperties};
	__property TCT_Scene3D* A_Scene3d = {read=FA_Scene3d};
	__property TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_NonVisualDrawingProps : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FId;
	System::UnicodeString FName;
	System::UnicodeString FDescr;
	bool FHidden;
	TCT_Hyperlink* FA_HlinkClick;
	TCT_Hyperlink* FA_HlinkHover;
	TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_NonVisualDrawingProps(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_NonVisualDrawingProps();
	void __fastcall Clear();
	void __fastcall Assign(TCT_NonVisualDrawingProps* AItem);
	void __fastcall CopyTo(TCT_NonVisualDrawingProps* AItem);
	TCT_Hyperlink* __fastcall Create_A_HlinkClick();
	TCT_Hyperlink* __fastcall Create_A_HlinkHover();
	TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property int Id = {read=FId, write=FId, nodefault};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString Descr = {read=FDescr, write=FDescr};
	__property bool Hidden = {read=FHidden, write=FHidden, nodefault};
	__property TCT_Hyperlink* A_HlinkClick = {read=FA_HlinkClick};
	__property TCT_Hyperlink* A_HlinkHover = {read=FA_HlinkHover};
	__property TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ShapeLocking : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FNoGrp;
	bool FNoSelect;
	bool FNoRot;
	bool FNoChangeAspect;
	bool FNoMove;
	bool FNoResize;
	bool FNoEditPoints;
	bool FNoAdjustHandles;
	bool FNoChangeArrowheads;
	bool FNoChangeShapeType;
	bool FNoTextEdit;
	TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ShapeLocking(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ShapeLocking();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ShapeLocking* AItem);
	void __fastcall CopyTo(TCT_ShapeLocking* AItem);
	TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property bool NoGrp = {read=FNoGrp, write=FNoGrp, nodefault};
	__property bool NoSelect = {read=FNoSelect, write=FNoSelect, nodefault};
	__property bool NoRot = {read=FNoRot, write=FNoRot, nodefault};
	__property bool NoChangeAspect = {read=FNoChangeAspect, write=FNoChangeAspect, nodefault};
	__property bool NoMove = {read=FNoMove, write=FNoMove, nodefault};
	__property bool NoResize = {read=FNoResize, write=FNoResize, nodefault};
	__property bool NoEditPoints = {read=FNoEditPoints, write=FNoEditPoints, nodefault};
	__property bool NoAdjustHandles = {read=FNoAdjustHandles, write=FNoAdjustHandles, nodefault};
	__property bool NoChangeArrowheads = {read=FNoChangeArrowheads, write=FNoChangeArrowheads, nodefault};
	__property bool NoChangeShapeType = {read=FNoChangeShapeType, write=FNoChangeShapeType, nodefault};
	__property bool NoTextEdit = {read=FNoTextEdit, write=FNoTextEdit, nodefault};
	__property TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_NonVisualDrawingShapeProps : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	bool FTxBox;
	TCT_ShapeLocking* FA_SpLocks;
	TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_NonVisualDrawingShapeProps(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_NonVisualDrawingShapeProps();
	void __fastcall Clear();
	void __fastcall Assign(TCT_NonVisualDrawingShapeProps* AItem);
	void __fastcall CopyTo(TCT_NonVisualDrawingShapeProps* AItem);
	TCT_ShapeLocking* __fastcall Create_A_SpLocks();
	TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property bool TxBox = {read=FTxBox, write=FTxBox, nodefault};
	__property TCT_ShapeLocking* A_SpLocks = {read=FA_SpLocks};
	__property TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ShapeNonVisual : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_NonVisualDrawingProps* FCNvPr;
	TCT_NonVisualDrawingShapeProps* FCNvSpPr;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_ShapeNonVisual(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ShapeNonVisual();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ShapeNonVisual* AItem);
	void __fastcall CopyTo(TCT_ShapeNonVisual* AItem);
	TCT_NonVisualDrawingProps* __fastcall Create_CNvPr();
	TCT_NonVisualDrawingShapeProps* __fastcall Create_CNvSpPr();
	__property TCT_NonVisualDrawingProps* CNvPr = {read=FCNvPr};
	__property TCT_NonVisualDrawingShapeProps* CNvSpPr = {read=FCNvSpPr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Shape : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FMacro;
	System::UnicodeString FTextlink;
	bool FFLocksText;
	bool FFPublished;
	TCT_ShapeNonVisual* FNvSpPr;
	TCT_ShapeProperties* FSpPr;
	TCT_ShapeStyle* FStyle;
	TCT_TextBody* FTxBody;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Shape(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Shape();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Shape* AItem);
	void __fastcall CopyTo(TCT_Shape* AItem);
	TCT_ShapeNonVisual* __fastcall Create_NvSpPr();
	TCT_ShapeProperties* __fastcall Create_SpPr();
	TCT_ShapeStyle* __fastcall Create_Style();
	TCT_TextBody* __fastcall Create_TxBody();
	__property System::UnicodeString Macro = {read=FMacro, write=FMacro};
	__property System::UnicodeString Textlink = {read=FTextlink, write=FTextlink};
	__property bool FLocksText = {read=FFLocksText, write=FFLocksText, nodefault};
	__property bool FPublished = {read=FFPublished, write=FFPublished, nodefault};
	__property TCT_ShapeNonVisual* NvSpPr = {read=FNvSpPr};
	__property TCT_ShapeProperties* SpPr = {read=FSpPr};
	__property TCT_ShapeStyle* Style = {read=FStyle};
	__property TCT_TextBody* TxBody = {read=FTxBody};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SupplementalFont : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FScript;
	System::UnicodeString FTypeface;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_SupplementalFont(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_SupplementalFont();
	void __fastcall Clear();
	void __fastcall Assign(TCT_SupplementalFont* AItem);
	void __fastcall CopyTo(TCT_SupplementalFont* AItem);
	__property System::UnicodeString Script = {read=FScript, write=FScript};
	__property System::UnicodeString Typeface = {read=FTypeface, write=FTypeface};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_SupplementalFontXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_SupplementalFont* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_SupplementalFont* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_SupplementalFont* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_SupplementalFontXpgList* AItem);
	void __fastcall CopyTo(TCT_SupplementalFontXpgList* AItem);
	__property TCT_SupplementalFont* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_SupplementalFontXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_SupplementalFontXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_EffectStyleItem : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TEG_EffectProperties* FA_EG_EffectProperties;
	TCT_Scene3D* FA_Scene3d;
	TCT_Shape3D* FA_Sp3d;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_EffectStyleItem(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_EffectStyleItem();
	void __fastcall Clear();
	void __fastcall Assign(TCT_EffectStyleItem* AItem);
	void __fastcall CopyTo(TCT_EffectStyleItem* AItem);
	TCT_Scene3D* __fastcall Create_A_Scene3d();
	TCT_Shape3D* __fastcall Create_A_Sp3d();
	__property TEG_EffectProperties* A_EG_EffectProperties = {read=FA_EG_EffectProperties};
	__property TCT_Scene3D* A_Scene3d = {read=FA_Scene3d};
	__property TCT_Shape3D* A_Sp3d = {read=FA_Sp3d};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_EffectStyleItemXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_EffectStyleItem* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_EffectStyleItem* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_EffectStyleItem* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_EffectStyleItemXpgList* AItem);
	void __fastcall CopyTo(TCT_EffectStyleItemXpgList* AItem);
	__property TCT_EffectStyleItem* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_EffectStyleItemXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_EffectStyleItemXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FontCollection : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_TextFont* FA_Latin;
	TCT_TextFont* FA_Ea;
	TCT_TextFont* FA_Cs;
	TCT_SupplementalFontXpgList* FA_FontXpgList;
	TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_FontCollection(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FontCollection();
	void __fastcall Clear();
	void __fastcall Assign(TCT_FontCollection* AItem);
	void __fastcall CopyTo(TCT_FontCollection* AItem);
	TCT_TextFont* __fastcall Create_A_Latin();
	TCT_TextFont* __fastcall Create_A_Ea();
	TCT_TextFont* __fastcall Create_A_Cs();
	TCT_SupplementalFontXpgList* __fastcall Create_A_FontXpgList();
	TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property TCT_TextFont* A_Latin = {read=FA_Latin};
	__property TCT_TextFont* A_Ea = {read=FA_Ea};
	__property TCT_TextFont* A_Cs = {read=FA_Cs};
	__property TCT_SupplementalFontXpgList* A_FontXpgList = {read=FA_FontXpgList};
	__property TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FillStyleList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TEG_FillProperties* FA_EG_FillProperties;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_FillStyleList(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FillStyleList();
	void __fastcall Clear();
	void __fastcall Assign(TCT_FillStyleList* AItem);
	void __fastcall CopyTo(TCT_FillStyleList* AItem);
	__property TEG_FillProperties* A_EG_FillProperties = {read=FA_EG_FillProperties};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_LineStyleList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_LinePropertiesXpgList* FA_LnXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_LineStyleList(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_LineStyleList();
	void __fastcall Clear();
	void __fastcall Assign(TCT_LineStyleList* AItem);
	void __fastcall CopyTo(TCT_LineStyleList* AItem);
	TCT_LinePropertiesXpgList* __fastcall Create_A_LnXpgList();
	__property TCT_LinePropertiesXpgList* A_LnXpgList = {read=FA_LnXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_EffectStyleList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_EffectStyleItemXpgList* FA_EffectStyleXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_EffectStyleList(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_EffectStyleList();
	void __fastcall Clear();
	void __fastcall Assign(TCT_EffectStyleList* AItem);
	void __fastcall CopyTo(TCT_EffectStyleList* AItem);
	TCT_EffectStyleItemXpgList* __fastcall Create_A_EffectStyleXpgList();
	__property TCT_EffectStyleItemXpgList* A_EffectStyleXpgList = {read=FA_EffectStyleXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BackgroundFillStyleList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TEG_FillProperties* FA_EG_FillProperties;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_BackgroundFillStyleList(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BackgroundFillStyleList();
	void __fastcall Clear();
	void __fastcall Assign(TCT_BackgroundFillStyleList* AItem);
	void __fastcall CopyTo(TCT_BackgroundFillStyleList* AItem);
	__property TEG_FillProperties* A_EG_FillProperties = {read=FA_EG_FillProperties};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Ratio : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FN;
	int FD;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Ratio(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Ratio();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Ratio* AItem);
	void __fastcall CopyTo(TCT_Ratio* AItem);
	__property int N = {read=FN, write=FN, nodefault};
	__property int D = {read=FD, write=FD, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustomColor : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	TEG_ColorChoice* FA_EG_ColorChoice;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_CustomColor(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CustomColor();
	void __fastcall Clear();
	void __fastcall Assign(TCT_CustomColor* AItem);
	void __fastcall CopyTo(TCT_CustomColor* AItem);
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property TEG_ColorChoice* A_EG_ColorChoice = {read=FA_EG_ColorChoice};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustomColorXpgList : public TXPGBaseObjectList
{
	typedef TXPGBaseObjectList inherited;
	
public:
	TCT_CustomColor* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_CustomColor* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_CustomColor* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_CustomColorXpgList* AItem);
	void __fastcall CopyTo(TCT_CustomColorXpgList* AItem);
	__property TCT_CustomColor* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_CustomColorXpgList(TXPGDocBase* AOwner) : TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_CustomColorXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ColorScheme : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	TCT_Color* FA_Dk1;
	TCT_Color* FA_Lt1;
	TCT_Color* FA_Dk2;
	TCT_Color* FA_Lt2;
	TCT_Color* FA_Accent1;
	TCT_Color* FA_Accent2;
	TCT_Color* FA_Accent3;
	TCT_Color* FA_Accent4;
	TCT_Color* FA_Accent5;
	TCT_Color* FA_Accent6;
	TCT_Color* FA_Hlink;
	TCT_Color* FA_FolHlink;
	TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ColorScheme(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ColorScheme();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ColorScheme* AItem);
	void __fastcall CopyTo(TCT_ColorScheme* AItem);
	TCT_Color* __fastcall Create_A_Dk1();
	TCT_Color* __fastcall Create_A_Lt1();
	TCT_Color* __fastcall Create_A_Dk2();
	TCT_Color* __fastcall Create_A_Lt2();
	TCT_Color* __fastcall Create_A_Accent1();
	TCT_Color* __fastcall Create_A_Accent2();
	TCT_Color* __fastcall Create_A_Accent3();
	TCT_Color* __fastcall Create_A_Accent4();
	TCT_Color* __fastcall Create_A_Accent5();
	TCT_Color* __fastcall Create_A_Accent6();
	TCT_Color* __fastcall Create_A_Hlink();
	TCT_Color* __fastcall Create_A_FolHlink();
	TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property TCT_Color* A_Dk1 = {read=FA_Dk1};
	__property TCT_Color* A_Lt1 = {read=FA_Lt1};
	__property TCT_Color* A_Dk2 = {read=FA_Dk2};
	__property TCT_Color* A_Lt2 = {read=FA_Lt2};
	__property TCT_Color* A_Accent1 = {read=FA_Accent1};
	__property TCT_Color* A_Accent2 = {read=FA_Accent2};
	__property TCT_Color* A_Accent3 = {read=FA_Accent3};
	__property TCT_Color* A_Accent4 = {read=FA_Accent4};
	__property TCT_Color* A_Accent5 = {read=FA_Accent5};
	__property TCT_Color* A_Accent6 = {read=FA_Accent6};
	__property TCT_Color* A_Hlink = {read=FA_Hlink};
	__property TCT_Color* A_FolHlink = {read=FA_FolHlink};
	__property TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FontScheme : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	TCT_FontCollection* FA_MajorFont;
	TCT_FontCollection* FA_MinorFont;
	TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_FontScheme(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FontScheme();
	void __fastcall Clear();
	void __fastcall Assign(TCT_FontScheme* AItem);
	void __fastcall CopyTo(TCT_FontScheme* AItem);
	TCT_FontCollection* __fastcall Create_A_MajorFont();
	TCT_FontCollection* __fastcall Create_A_MinorFont();
	TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property TCT_FontCollection* A_MajorFont = {read=FA_MajorFont};
	__property TCT_FontCollection* A_MinorFont = {read=FA_MinorFont};
	__property TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_StyleMatrix : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	System::UnicodeString FName;
	TCT_FillStyleList* FA_FillStyleLst;
	TCT_LineStyleList* FA_LnStyleLst;
	TCT_EffectStyleList* FA_EffectStyleLst;
	TCT_BackgroundFillStyleList* FA_BgFillStyleLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_StyleMatrix(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_StyleMatrix();
	void __fastcall Clear();
	void __fastcall Assign(TCT_StyleMatrix* AItem);
	void __fastcall CopyTo(TCT_StyleMatrix* AItem);
	TCT_FillStyleList* __fastcall Create_A_FillStyleLst();
	TCT_LineStyleList* __fastcall Create_A_LnStyleLst();
	TCT_EffectStyleList* __fastcall Create_A_EffectStyleLst();
	TCT_BackgroundFillStyleList* __fastcall Create_A_BgFillStyleLst();
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property TCT_FillStyleList* A_FillStyleLst = {read=FA_FillStyleLst};
	__property TCT_LineStyleList* A_LnStyleLst = {read=FA_LnStyleLst};
	__property TCT_EffectStyleList* A_EffectStyleLst = {read=FA_EffectStyleLst};
	__property TCT_BackgroundFillStyleList* A_BgFillStyleLst = {read=FA_BgFillStyleLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_TextGeometry : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_CustomGeometry2D* FA_CustGeom;
	TCT_PresetTextShape* FA_PrstTxWarp;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TEG_TextGeometry(TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_TextGeometry();
	void __fastcall Clear();
	void __fastcall Assign(TEG_TextGeometry* AItem);
	void __fastcall CopyTo(TEG_TextGeometry* AItem);
	TCT_CustomGeometry2D* __fastcall Create_A_CustGeom();
	TCT_PresetTextShape* __fastcall Create_A_PrstTxWarp();
	__property TCT_CustomGeometry2D* A_CustGeom = {read=FA_CustGeom};
	__property TCT_PresetTextShape* A_PrstTxWarp = {read=FA_PrstTxWarp};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Scale2D : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_Ratio* FA_Sx;
	TCT_Ratio* FA_Sy;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Scale2D(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Scale2D();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Scale2D* AItem);
	void __fastcall CopyTo(TCT_Scale2D* AItem);
	TCT_Ratio* __fastcall Create_A_Sx();
	TCT_Ratio* __fastcall Create_A_Sy();
	__property TCT_Ratio* A_Sx = {read=FA_Sx};
	__property TCT_Ratio* A_Sy = {read=FA_Sy};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FillProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TEG_FillProperties* FA_EG_FillProperties;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_FillProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FillProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_FillProperties* AItem);
	void __fastcall CopyTo(TCT_FillProperties* AItem);
	__property TEG_FillProperties* A_EG_FillProperties = {read=FA_EG_FillProperties};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_EffectProperties : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TEG_EffectProperties* FA_EG_EffectProperties;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_EffectProperties(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_EffectProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_EffectProperties* AItem);
	void __fastcall CopyTo(TCT_EffectProperties* AItem);
	__property TEG_EffectProperties* A_EG_EffectProperties = {read=FA_EG_EffectProperties};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_CustomColorList : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_CustomColorXpgList* FA_CustClrXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_CustomColorList(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_CustomColorList();
	void __fastcall Clear();
	void __fastcall Assign(TCT_CustomColorList* AItem);
	void __fastcall CopyTo(TCT_CustomColorList* AItem);
	TCT_CustomColorXpgList* __fastcall Create_A_CustClrXpgList();
	__property TCT_CustomColorXpgList* A_CustClrXpgList = {read=FA_CustClrXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ColorMRU : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TEG_ColorChoice* FA_EG_ColorChoice;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_ColorMRU(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ColorMRU();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ColorMRU* AItem);
	void __fastcall CopyTo(TCT_ColorMRU* AItem);
	__property TEG_ColorChoice* A_EG_ColorChoice = {read=FA_EG_ColorChoice};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_BaseStyles : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	TCT_ColorScheme* FA_ClrScheme;
	TCT_FontScheme* FA_FontScheme;
	TCT_StyleMatrix* FA_FmtScheme;
	TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_BaseStyles(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_BaseStyles();
	void __fastcall Clear();
	void __fastcall Assign(TCT_BaseStyles* AItem);
	void __fastcall CopyTo(TCT_BaseStyles* AItem);
	TCT_ColorScheme* __fastcall Create_A_ClrScheme();
	TCT_FontScheme* __fastcall Create_A_FontScheme();
	TCT_StyleMatrix* __fastcall Create_A_FmtScheme();
	TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property TCT_ColorScheme* A_ClrScheme = {read=FA_ClrScheme};
	__property TCT_FontScheme* A_FontScheme = {read=FA_FontScheme};
	__property TCT_StyleMatrix* A_FmtScheme = {read=FA_FmtScheme};
	__property TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PositiveFixedPercentage : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PositiveFixedPercentage(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PositiveFixedPercentage();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PositiveFixedPercentage* AItem);
	void __fastcall CopyTo(TCT_PositiveFixedPercentage* AItem);
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_InverseGammaTransform : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_InverseGammaTransform(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_InverseGammaTransform();
	void __fastcall Clear();
	void __fastcall Assign(TCT_InverseGammaTransform* AItem);
	void __fastcall CopyTo(TCT_InverseGammaTransform* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Angle : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Angle(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Angle();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Angle* AItem);
	void __fastcall CopyTo(TCT_Angle* AItem);
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Percentage : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Percentage(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Percentage();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Percentage* AItem);
	void __fastcall CopyTo(TCT_Percentage* AItem);
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ComplementTransform : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_ComplementTransform(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ComplementTransform();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ComplementTransform* AItem);
	void __fastcall CopyTo(TCT_ComplementTransform* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PositivePercentage : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PositivePercentage(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PositivePercentage();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PositivePercentage* AItem);
	void __fastcall CopyTo(TCT_PositivePercentage* AItem);
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GrayscaleTransform : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_GrayscaleTransform(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GrayscaleTransform();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GrayscaleTransform* AItem);
	void __fastcall CopyTo(TCT_GrayscaleTransform* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GammaTransform : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_GammaTransform(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GammaTransform();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GammaTransform* AItem);
	void __fastcall CopyTo(TCT_GammaTransform* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_FixedPercentage : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_FixedPercentage(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_FixedPercentage();
	void __fastcall Clear();
	void __fastcall Assign(TCT_FixedPercentage* AItem);
	void __fastcall CopyTo(TCT_FixedPercentage* AItem);
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PositiveFixedAngle : public TXPGBase
{
	typedef TXPGBase inherited;
	
protected:
	int FVal;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PositiveFixedAngle(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PositiveFixedAngle();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PositiveFixedAngle* AItem);
	void __fastcall CopyTo(TCT_PositiveFixedAngle* AItem);
	__property int Val = {read=FVal, write=FVal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_InverseTransform : public TXPGBase
{
	typedef TXPGBase inherited;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_InverseTransform(TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_InverseTransform();
	void __fastcall Clear();
	void __fastcall Assign(TCT_InverseTransform* AItem);
	void __fastcall CopyTo(TCT_InverseTransform* AItem);
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Xpgparsedrawingcommon__1 StrTST_SchemeColorVal;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__2 StrTST_BlackWhiteMode;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__3 StrTST_PresetColorVal;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__4 StrTST_SystemColorVal;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__5 StrTST_RectAlignment;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__6 StrTST_PathShadeType;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__7 StrTST_PresetShadowVal;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__8 StrTST_PresetPatternVal;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__9 StrTST_TileFlipMode;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__01 StrTST_BlipCompression;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__11 StrTST_EffectContainerType;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__21 StrTST_BlendMode;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__31 StrTST_ShapeType;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__41 StrTST_PathFillMode;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__51 StrTST_TextShapeType;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__61 StrTST_PresetCameraType;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__71 StrTST_LightRigDirection;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__81 StrTST_LightRigType;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__91 StrTST_PenAlignment;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__02 StrTST_LineEndType;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__12 StrTST_LineEndWidth;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__22 StrTST_LineCap;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__32 StrTST_PresetLineDashVal;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__42 StrTST_LineEndLength;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__52 StrTST_CompoundLine;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__62 StrTST_BevelPresetType;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__72 StrTST_PresetMaterialType;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__82 StrTST_TextCapsType;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__92 StrTST_TextStrikeType;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__03 StrTST_TextUnderlineType;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__13 StrTST_TextAutonumberScheme;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__23 StrTST_ColorSchemeIndex;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__33 StrTST_FontCollectionIndex;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__43 StrTST_TextAlignType;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__53 StrTST_TextFontAlignType;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__63 StrTST_TextTabAlignType;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__73 StrTST_TextAnchoringType;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__83 StrTST_TextVerticalType;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__93 StrTST_TextWrappingType;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__04 StrTST_TextHorzOverflowType;
extern DELPHI_PACKAGE Xpgparsedrawingcommon__14 StrTST_TextVertOverflowType;
extern DELPHI_PACKAGE unsigned __fastcall SolidFillToRGB(TCT_SolidColorFillProperties* AFill)/* overload */;
extern DELPHI_PACKAGE unsigned __fastcall SpPrFillToRGB(TCT_ShapeProperties* ASpPr)/* overload */;
extern DELPHI_PACKAGE void __fastcall ReadUnionTST_AdjAngle(System::UnicodeString AValue, PST_AdjAngle APtr);
extern DELPHI_PACKAGE System::UnicodeString __fastcall WriteUnionTST_AdjAngle(PST_AdjAngle APtr);
extern DELPHI_PACKAGE void __fastcall ReadUnionTST_AdjCoordinate(System::UnicodeString AValue, PST_AdjCoordinate APtr);
extern DELPHI_PACKAGE System::UnicodeString __fastcall WriteUnionTST_AdjCoordinate(PST_AdjCoordinate APtr);
}	/* namespace Xpgparsedrawingcommon */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XPGPARSEDRAWINGCOMMON)
using namespace Xpgparsedrawingcommon;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XpgparsedrawingcommonHPP
