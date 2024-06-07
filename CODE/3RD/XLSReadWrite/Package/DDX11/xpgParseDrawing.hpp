// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'xpgParseDrawing.pas' rev: 35.00 (Windows)

#ifndef XpgparsedrawingHPP
#define XpgparsedrawingHPP

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
#include <xpgParseDrawingCommon.hpp>
#include <xpgParseChart.hpp>
#include <XLSUtils5.hpp>
#include <Xc12Graphics.hpp>
#include <XLSReadWriteOPC5.hpp>

//-- user supplied -----------------------------------------------------------

namespace Xpgparsedrawing
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCT_Marker_Pos;
class DELPHICLASS TCT_GraphicalObjectFrameLocking;
class DELPHICLASS TCT_ConnectorLocking;
class DELPHICLASS TCT_PictureLocking;
class DELPHICLASS TCT_GroupLocking;
class DELPHICLASS TCT_NonVisualGraphicFrameProperties;
class DELPHICLASS TCT_GraphicalObjectData;
class DELPHICLASS TCT_NonVisualConnectorProperties;
class DELPHICLASS TCT_NonVisualPictureProperties;
class DELPHICLASS TCT_NonVisualGroupDrawingShapeProps;
class DELPHICLASS TCT_GraphicalObjectFrameNonVisual;
class DELPHICLASS TCT_GraphicalObject;
class DELPHICLASS TCT_ConnectorNonVisual;
class DELPHICLASS TCT_PictureNonVisual;
class DELPHICLASS TCT_GroupShapeNonVisual;
class DELPHICLASS TCT_ShapeXpgList;
class DELPHICLASS TCT_GraphicalObjectFrame;
class DELPHICLASS TCT_GraphicalObjectFrameXpgList;
class DELPHICLASS TCT_Connector;
class DELPHICLASS TCT_ConnectorXpgList;
class DELPHICLASS TCT_Picture;
class DELPHICLASS TCT_PictureXpgList;
class DELPHICLASS TCT_GroupShape;
class DELPHICLASS TCT_GroupShapeXpgList;
class DELPHICLASS TEG_ObjectChoices;
class DELPHICLASS TCT_AnchorClientData;
class DELPHICLASS TCT_TwoCellAnchor;
class DELPHICLASS TCT_TwoCellAnchorXpgList;
class DELPHICLASS TCT_XYMarker;
class DELPHICLASS TCT_RelSizeAnchor;
class DELPHICLASS TCT_RelSizeAnchorXpgList;
class DELPHICLASS TCT_OneCellAnchor;
class DELPHICLASS TCT_OneCellAnchorXpgList;
class DELPHICLASS TCT_AbsoluteAnchor;
class DELPHICLASS TCT_AbsoluteAnchorXpgList;
class DELPHICLASS TEG_Anchor;
class DELPHICLASS TCT_Drawing;
class DELPHICLASS T__ROOT__;
class DELPHICLASS TXPGDocXLSXDrawing;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TST_EditAs : unsigned short { steaTwoCell, steaOneCell, steaAbsolute };

typedef System::StaticArray<System::UnicodeString, 3> Xpgparsedrawing__1;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Marker_Pos : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	unsigned FCol;
	unsigned FColOff;
	unsigned FRow;
	unsigned FRowOff;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_Marker_Pos(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Marker_Pos();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Marker_Pos* AItem);
	void __fastcall CopyTo(TCT_Marker_Pos* AItem);
	__property unsigned Col = {read=FCol, write=FCol, nodefault};
	__property unsigned ColOff = {read=FColOff, write=FColOff, nodefault};
	__property unsigned Row = {read=FRow, write=FRow, nodefault};
	__property unsigned RowOff = {read=FRowOff, write=FRowOff, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GraphicalObjectFrameLocking : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	bool FNoGrp;
	bool FNoDrilldown;
	bool FNoSelect;
	bool FNoChangeAspect;
	bool FNoMove;
	bool FNoResize;
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_GraphicalObjectFrameLocking(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GraphicalObjectFrameLocking();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GraphicalObjectFrameLocking* AItem);
	void __fastcall CopyTo(TCT_GraphicalObjectFrameLocking* AItem);
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property bool NoGrp = {read=FNoGrp, write=FNoGrp, nodefault};
	__property bool NoDrilldown = {read=FNoDrilldown, write=FNoDrilldown, nodefault};
	__property bool NoSelect = {read=FNoSelect, write=FNoSelect, nodefault};
	__property bool NoChangeAspect = {read=FNoChangeAspect, write=FNoChangeAspect, nodefault};
	__property bool NoMove = {read=FNoMove, write=FNoMove, nodefault};
	__property bool NoResize = {read=FNoResize, write=FNoResize, nodefault};
	__property Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ConnectorLocking : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
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
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_ConnectorLocking(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ConnectorLocking();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ConnectorLocking* AItem);
	void __fastcall CopyTo(TCT_ConnectorLocking* AItem);
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
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
	__property Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PictureLocking : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
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
	bool FNoCrop;
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_PictureLocking(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PictureLocking();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PictureLocking* AItem);
	void __fastcall CopyTo(TCT_PictureLocking* AItem);
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
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
	__property bool NoCrop = {read=FNoCrop, write=FNoCrop, nodefault};
	__property Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GroupLocking : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	bool FNoGrp;
	bool FNoUngrp;
	bool FNoSelect;
	bool FNoRot;
	bool FNoChangeAspect;
	bool FNoMove;
	bool FNoResize;
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_GroupLocking(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GroupLocking();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GroupLocking* AItem);
	void __fastcall CopyTo(TCT_GroupLocking* AItem);
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property bool NoGrp = {read=FNoGrp, write=FNoGrp, nodefault};
	__property bool NoUngrp = {read=FNoUngrp, write=FNoUngrp, nodefault};
	__property bool NoSelect = {read=FNoSelect, write=FNoSelect, nodefault};
	__property bool NoRot = {read=FNoRot, write=FNoRot, nodefault};
	__property bool NoChangeAspect = {read=FNoChangeAspect, write=FNoChangeAspect, nodefault};
	__property bool NoMove = {read=FNoMove, write=FNoMove, nodefault};
	__property bool NoResize = {read=FNoResize, write=FNoResize, nodefault};
	__property Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_NonVisualGraphicFrameProperties : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_GraphicalObjectFrameLocking* FA_GraphicFrameLocks;
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_NonVisualGraphicFrameProperties(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_NonVisualGraphicFrameProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_NonVisualGraphicFrameProperties* AItem);
	void __fastcall CopyTo(TCT_NonVisualGraphicFrameProperties* AItem);
	TCT_GraphicalObjectFrameLocking* __fastcall Create_A_GraphicFrameLocks();
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property TCT_GraphicalObjectFrameLocking* A_GraphicFrameLocks = {read=FA_GraphicFrameLocks};
	__property Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GraphicalObjectData : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	System::UnicodeString FUri;
	Xpgparsechart::TXPGDocXLSXChart* FChart;
	
public:
	__fastcall TCT_GraphicalObjectData(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GraphicalObjectData();
	void __fastcall Clear();
	Xpgparsechart::TXPGDocXLSXChart* __fastcall Create_Chart();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	void __fastcall Assign(TCT_GraphicalObjectData* AItem);
	void __fastcall CopyTo(TCT_GraphicalObjectData* AItem);
	__property System::UnicodeString Uri = {read=FUri, write=FUri};
	__property Xpgparsechart::TXPGDocXLSXChart* Chart = {read=FChart};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_NonVisualConnectorProperties : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_ConnectorLocking* FA_CxnSpLocks;
	Xpgparsedrawingcommon::TCT_Connection* FA_StCxn;
	Xpgparsedrawingcommon::TCT_Connection* FA_EndCxn;
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_NonVisualConnectorProperties(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_NonVisualConnectorProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_NonVisualConnectorProperties* AItem);
	void __fastcall CopyTo(TCT_NonVisualConnectorProperties* AItem);
	TCT_ConnectorLocking* __fastcall Create_A_CxnSpLocks();
	Xpgparsedrawingcommon::TCT_Connection* __fastcall Create_A_StCxn();
	Xpgparsedrawingcommon::TCT_Connection* __fastcall Create_A_EndCxn();
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property TCT_ConnectorLocking* A_CxnSpLocks = {read=FA_CxnSpLocks};
	__property Xpgparsedrawingcommon::TCT_Connection* A_StCxn = {read=FA_StCxn};
	__property Xpgparsedrawingcommon::TCT_Connection* A_EndCxn = {read=FA_EndCxn};
	__property Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_NonVisualPictureProperties : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	bool FPreferRelativeResize;
	TCT_PictureLocking* FA_PicLocks;
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_NonVisualPictureProperties(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_NonVisualPictureProperties();
	void __fastcall Clear();
	void __fastcall Assign(TCT_NonVisualPictureProperties* AItem);
	void __fastcall CopyTo(TCT_NonVisualPictureProperties* AItem);
	TCT_PictureLocking* __fastcall Create_A_PicLocks();
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property bool PreferRelativeResize = {read=FPreferRelativeResize, write=FPreferRelativeResize, nodefault};
	__property TCT_PictureLocking* A_PicLocks = {read=FA_PicLocks};
	__property Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_NonVisualGroupDrawingShapeProps : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_GroupLocking* FA_GrpSpLocks;
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* FA_ExtLst;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_NonVisualGroupDrawingShapeProps(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_NonVisualGroupDrawingShapeProps();
	void __fastcall Clear();
	void __fastcall Assign(TCT_NonVisualGroupDrawingShapeProps* AItem);
	void __fastcall CopyTo(TCT_NonVisualGroupDrawingShapeProps* AItem);
	TCT_GroupLocking* __fastcall Create_A_GrpSpLocks();
	Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* __fastcall Create_A_ExtLst();
	__property TCT_GroupLocking* A_GrpSpLocks = {read=FA_GrpSpLocks};
	__property Xpgparsedrawingcommon::TCT_OfficeArtExtensionList* A_ExtLst = {read=FA_ExtLst};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GraphicalObjectFrameNonVisual : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	Xpgparsedrawingcommon::TCT_NonVisualDrawingProps* FCNvPr;
	TCT_NonVisualGraphicFrameProperties* FCNvGraphicFramePr;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_GraphicalObjectFrameNonVisual(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GraphicalObjectFrameNonVisual();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GraphicalObjectFrameNonVisual* AItem);
	void __fastcall CopyTo(TCT_GraphicalObjectFrameNonVisual* AItem);
	Xpgparsedrawingcommon::TCT_NonVisualDrawingProps* __fastcall Create_CNvPr();
	TCT_NonVisualGraphicFrameProperties* __fastcall Create_CNvGraphicFramePr();
	__property Xpgparsedrawingcommon::TCT_NonVisualDrawingProps* CNvPr = {read=FCNvPr};
	__property TCT_NonVisualGraphicFrameProperties* CNvGraphicFramePr = {read=FCNvGraphicFramePr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GraphicalObject : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_GraphicalObjectData* FA_GraphicData;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_GraphicalObject(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GraphicalObject();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GraphicalObject* AItem);
	void __fastcall CopyTo(TCT_GraphicalObject* AItem);
	TCT_GraphicalObjectData* __fastcall Create_A_GraphicData();
	__property TCT_GraphicalObjectData* GraphicData = {read=FA_GraphicData};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ConnectorNonVisual : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	Xpgparsedrawingcommon::TCT_NonVisualDrawingProps* FCNvPr;
	TCT_NonVisualConnectorProperties* FCNvCxnSpPr;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_ConnectorNonVisual(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_ConnectorNonVisual();
	void __fastcall Clear();
	void __fastcall Assign(TCT_ConnectorNonVisual* AItem);
	void __fastcall CopyTo(TCT_ConnectorNonVisual* AItem);
	Xpgparsedrawingcommon::TCT_NonVisualDrawingProps* __fastcall Create_CNvPr();
	TCT_NonVisualConnectorProperties* __fastcall Create_CNvCxnSpPr();
	__property Xpgparsedrawingcommon::TCT_NonVisualDrawingProps* CNvPr = {read=FCNvPr};
	__property TCT_NonVisualConnectorProperties* CNvCxnSpPr = {read=FCNvCxnSpPr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PictureNonVisual : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	Xpgparsedrawingcommon::TCT_NonVisualDrawingProps* FCNvPr;
	TCT_NonVisualPictureProperties* FCNvPicPr;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_PictureNonVisual(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_PictureNonVisual();
	void __fastcall Clear();
	void __fastcall Assign(TCT_PictureNonVisual* AItem);
	void __fastcall CopyTo(TCT_PictureNonVisual* AItem);
	Xpgparsedrawingcommon::TCT_NonVisualDrawingProps* __fastcall Create_CNvPr();
	TCT_NonVisualPictureProperties* __fastcall Create_CNvPicPr();
	__property Xpgparsedrawingcommon::TCT_NonVisualDrawingProps* CNvPr = {read=FCNvPr};
	__property TCT_NonVisualPictureProperties* CNvPicPr = {read=FCNvPicPr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GroupShapeNonVisual : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	Xpgparsedrawingcommon::TCT_NonVisualDrawingProps* FCNvPr;
	TCT_NonVisualGroupDrawingShapeProps* FCNvGrpSpPr;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_GroupShapeNonVisual(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GroupShapeNonVisual();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GroupShapeNonVisual* AItem);
	void __fastcall CopyTo(TCT_GroupShapeNonVisual* AItem);
	Xpgparsedrawingcommon::TCT_NonVisualDrawingProps* __fastcall Create_CNvPr();
	TCT_NonVisualGroupDrawingShapeProps* __fastcall Create_CNvGrpSpPr();
	__property Xpgparsedrawingcommon::TCT_NonVisualDrawingProps* CNvPr = {read=FCNvPr};
	__property TCT_NonVisualGroupDrawingShapeProps* CNvGrpSpPr = {read=FCNvGrpSpPr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ShapeXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	Xpgparsedrawingcommon::TCT_Shape* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE Xpgparsedrawingcommon::TCT_Shape* __fastcall GetItems(int Index);
	
public:
	HIDESBASE Xpgparsedrawingcommon::TCT_Shape* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_ShapeXpgList* AItem);
	void __fastcall CopyTo(TCT_ShapeXpgList* AItem);
	__property Xpgparsedrawingcommon::TCT_Shape* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ShapeXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ShapeXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GraphicalObjectFrame : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	System::UnicodeString FMacro;
	bool FFPublished;
	TCT_GraphicalObjectFrameNonVisual* FNvGraphicFramePr;
	Xpgparsedrawingcommon::TCT_Transform2D* FXfrm;
	TCT_GraphicalObject* FA_Graphic;
	
public:
	__fastcall TCT_GraphicalObjectFrame(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GraphicalObjectFrame();
	void __fastcall Clear();
	void __fastcall CreateDefault(int AId, System::UnicodeString AName);
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	void __fastcall Assign(TCT_GraphicalObjectFrame* AItem);
	void __fastcall CopyTo(TCT_GraphicalObjectFrame* AItem);
	TCT_GraphicalObjectFrameNonVisual* __fastcall Create_NvGraphicFramePr();
	Xpgparsedrawingcommon::TCT_Transform2D* __fastcall Create_Xfrm();
	TCT_GraphicalObject* __fastcall Create_A_Graphic();
	bool __fastcall IsChart();
	__property System::UnicodeString Macro = {read=FMacro, write=FMacro};
	__property bool FPublished = {read=FFPublished, write=FFPublished, nodefault};
	__property TCT_GraphicalObjectFrameNonVisual* NvGraphicFramePr = {read=FNvGraphicFramePr};
	__property Xpgparsedrawingcommon::TCT_Transform2D* Xfrm = {read=FXfrm};
	__property TCT_GraphicalObject* Graphic = {read=FA_Graphic};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GraphicalObjectFrameXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_GraphicalObjectFrame* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_GraphicalObjectFrame* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_GraphicalObjectFrame* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_GraphicalObjectFrameXpgList* AItem);
	void __fastcall CopyTo(TCT_GraphicalObjectFrameXpgList* AItem);
	__property TCT_GraphicalObjectFrame* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_GraphicalObjectFrameXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_GraphicalObjectFrameXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Connector : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	System::UnicodeString FMacro;
	bool FFPublished;
	TCT_ConnectorNonVisual* FNvCxnSpPr;
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	Xpgparsedrawingcommon::TCT_ShapeStyle* FStyle;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Connector(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Connector();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Connector* AItem);
	void __fastcall CopyTo(TCT_Connector* AItem);
	TCT_ConnectorNonVisual* __fastcall Create_NvCxnSpPr();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	Xpgparsedrawingcommon::TCT_ShapeStyle* __fastcall Create_Style();
	__property System::UnicodeString Macro = {read=FMacro, write=FMacro};
	__property bool FPublished = {read=FFPublished, write=FFPublished, nodefault};
	__property TCT_ConnectorNonVisual* NvCxnSpPr = {read=FNvCxnSpPr};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
	__property Xpgparsedrawingcommon::TCT_ShapeStyle* Style = {read=FStyle};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_ConnectorXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_Connector* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Connector* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Connector* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_ConnectorXpgList* AItem);
	void __fastcall CopyTo(TCT_ConnectorXpgList* AItem);
	__property TCT_Connector* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_ConnectorXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_ConnectorXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Picture : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	System::UnicodeString FMacro;
	bool FFPublished;
	TCT_PictureNonVisual* FNvPicPr;
	Xpgparsedrawingcommon::TCT_BlipFillProperties* FBlipFill;
	Xpgparsedrawingcommon::TCT_ShapeProperties* FSpPr;
	Xpgparsedrawingcommon::TCT_ShapeStyle* FStyle;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_Picture(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Picture();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Picture* AItem);
	void __fastcall CopyTo(TCT_Picture* AItem);
	TCT_PictureNonVisual* __fastcall Create_NvPicPr();
	Xpgparsedrawingcommon::TCT_BlipFillProperties* __fastcall Create_BlipFill();
	Xpgparsedrawingcommon::TCT_ShapeProperties* __fastcall Create_SpPr();
	Xpgparsedrawingcommon::TCT_ShapeStyle* __fastcall Create_Style();
	Xc12graphics::TXc12GraphicImage* __fastcall GetImage();
	__property System::UnicodeString Macro = {read=FMacro, write=FMacro};
	__property bool FPublished = {read=FFPublished, write=FFPublished, nodefault};
	__property TCT_PictureNonVisual* NvPicPr = {read=FNvPicPr};
	__property Xpgparsedrawingcommon::TCT_BlipFillProperties* BlipFill = {read=FBlipFill};
	__property Xpgparsedrawingcommon::TCT_ShapeProperties* SpPr = {read=FSpPr};
	__property Xpgparsedrawingcommon::TCT_ShapeStyle* Style = {read=FStyle};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_PictureXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_Picture* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_Picture* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_Picture* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_PictureXpgList* AItem);
	void __fastcall CopyTo(TCT_PictureXpgList* AItem);
	__property TCT_Picture* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_PictureXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_PictureXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GroupShape : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_GroupShapeNonVisual* FNvGrpSpPr;
	Xpgparsedrawingcommon::TCT_GroupShapeProperties* FGrpSpPr;
	TCT_ShapeXpgList* FSpXpgList;
	TCT_GroupShapeXpgList* FGrpSpXpgList;
	TCT_GraphicalObjectFrameXpgList* FGraphicFrameXpgList;
	TCT_ConnectorXpgList* FCxnSpXpgList;
	TCT_PictureXpgList* FPicXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_GroupShape(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_GroupShape();
	void __fastcall Clear();
	void __fastcall Assign(TCT_GroupShape* AItem);
	void __fastcall CopyTo(TCT_GroupShape* AItem);
	TCT_GroupShapeNonVisual* __fastcall Create_NvGrpSpPr();
	Xpgparsedrawingcommon::TCT_GroupShapeProperties* __fastcall Create_GrpSpPr();
	TCT_ShapeXpgList* __fastcall Create_SpXpgList();
	TCT_GroupShapeXpgList* __fastcall Create_GrpSpXpgList();
	TCT_GraphicalObjectFrameXpgList* __fastcall Create_GraphicFrameXpgList();
	TCT_ConnectorXpgList* __fastcall Create_CxnSpXpgList();
	TCT_PictureXpgList* __fastcall Create_PicXpgList();
	__property TCT_GroupShapeNonVisual* NvGrpSpPr = {read=FNvGrpSpPr};
	__property Xpgparsedrawingcommon::TCT_GroupShapeProperties* GrpSpPr = {read=FGrpSpPr};
	__property TCT_ShapeXpgList* SpXpgList = {read=FSpXpgList};
	__property TCT_GroupShapeXpgList* GrpSpXpgList = {read=FGrpSpXpgList, write=FGrpSpXpgList};
	__property TCT_GraphicalObjectFrameXpgList* GraphicFrameXpgList = {read=FGraphicFrameXpgList};
	__property TCT_ConnectorXpgList* CxnSpXpgList = {read=FCxnSpXpgList};
	__property TCT_PictureXpgList* PicXpgList = {read=FPicXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_GroupShapeXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_GroupShape* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_GroupShape* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_GroupShape* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_GroupShapeXpgList* AItem);
	void __fastcall CopyTo(TCT_GroupShapeXpgList* AItem);
	__property TCT_GroupShape* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_GroupShapeXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_GroupShapeXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_ObjectChoices : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	Xpgparsedrawingcommon::TCT_Shape* FSp;
	TCT_GroupShape* FGrpSp;
	TCT_GraphicalObjectFrame* FGraphicFrame;
	TCT_Connector* FCxnSp;
	TCT_Picture* FPic;
	
public:
	__fastcall TEG_ObjectChoices(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_ObjectChoices();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall Clear();
	void __fastcall Assign(TEG_ObjectChoices* AItem);
	void __fastcall CopyTo(TEG_ObjectChoices* AItem);
	Xpgparsedrawingcommon::TCT_Shape* __fastcall Create_Sp();
	TCT_GroupShape* __fastcall Create_GrpSp();
	TCT_GraphicalObjectFrame* __fastcall Create_GraphicFrame();
	TCT_Connector* __fastcall Create_CxnSp();
	TCT_Picture* __fastcall Create_Pic();
	bool __fastcall IsPicture();
	bool __fastcall IsChart();
	__property Xpgparsedrawingcommon::TCT_Shape* Sp = {read=FSp};
	__property TCT_GroupShape* GrpSp = {read=FGrpSp};
	__property TCT_GraphicalObjectFrame* GraphicFrame = {read=FGraphicFrame};
	__property TCT_Connector* CxnSp = {read=FCxnSp};
	__property TCT_Picture* Pic = {read=FPic};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AnchorClientData : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	bool FFLocksWithSheet;
	bool FFPrintsWithSheet;
	
public:
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	__fastcall TCT_AnchorClientData(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_AnchorClientData();
	void __fastcall Clear();
	void __fastcall Assign(TCT_AnchorClientData* AItem);
	void __fastcall CopyTo(TCT_AnchorClientData* AItem);
	__property bool FLocksWithSheet = {read=FFLocksWithSheet, write=FFLocksWithSheet, nodefault};
	__property bool FPrintsWithSheet = {read=FFPrintsWithSheet, write=FFPrintsWithSheet, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TwoCellAnchor : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TST_EditAs FEditAs;
	TCT_Marker_Pos* FFrom;
	TCT_Marker_Pos* FTo;
	TEG_ObjectChoices* FEG_ObjectChoices;
	TCT_AnchorClientData* FClientData;
	
public:
	__fastcall TCT_TwoCellAnchor(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_TwoCellAnchor();
	Xpgparsechart::TXPGDocXLSXChart* __fastcall MakeChart();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteAttributes(Xpgpxml::TXpgWriteXML* AWriter);
	virtual void __fastcall AssignAttributes(Xpgpxmlutils::TXpgXMLAttributeList* AAttributes);
	void __fastcall Clear();
	void __fastcall Assign(TCT_TwoCellAnchor* AItem);
	void __fastcall CopyTo(TCT_TwoCellAnchor* AItem);
	__property TST_EditAs EditAs = {read=FEditAs, write=FEditAs, nodefault};
	__property TCT_Marker_Pos* From = {read=FFrom};
	__property TCT_Marker_Pos* To_ = {read=FTo};
	__property TEG_ObjectChoices* Objects = {read=FEG_ObjectChoices};
	__property TCT_AnchorClientData* ClientData = {read=FClientData};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_TwoCellAnchorXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_TwoCellAnchor* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_TwoCellAnchor* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_TwoCellAnchor* __fastcall Add()/* overload */;
	HIDESBASE TCT_TwoCellAnchor* __fastcall Add(int ACol1, int ARow1, int ACol2, int ARow2)/* overload */;
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_TwoCellAnchorXpgList* AItem);
	void __fastcall CopyTo(TCT_TwoCellAnchorXpgList* AItem);
	__property TCT_TwoCellAnchor* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_TwoCellAnchorXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_TwoCellAnchorXpgList() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TCT_XYMarker : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	double FX;
	double FY;
	
public:
	__fastcall TCT_XYMarker(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	virtual int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__property double X = {read=FX, write=FX};
	__property double Y = {read=FY, write=FY};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCT_XYMarker() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RelSizeAnchor : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_XYMarker* FFrom;
	TCT_XYMarker* FTo;
	Xpgparsedrawingcommon::TCT_Shape* FSp;
	
public:
	__fastcall TCT_RelSizeAnchor(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_RelSizeAnchor();
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall AddTextBox(System::UnicodeString AText)/* overload */;
	Xpgparsedrawingcommon::TCT_TextParagraph* __fastcall AddTextBox()/* overload */;
	__property TCT_XYMarker* From = {read=FFrom};
	__property TCT_XYMarker* To_ = {read=FTo};
	__property Xpgparsedrawingcommon::TCT_Shape* Sp = {read=FSp};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_RelSizeAnchorXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_RelSizeAnchor* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_RelSizeAnchor* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_RelSizeAnchor* __fastcall Add()/* overload */;
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	__property TCT_RelSizeAnchor* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_RelSizeAnchorXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_RelSizeAnchorXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OneCellAnchor : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_Marker_Pos* FFrom;
	Xpgparsedrawingcommon::TCT_PositiveSize2D* FExt;
	TEG_ObjectChoices* FEG_ObjectChoices;
	TCT_AnchorClientData* FClientData;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_OneCellAnchor(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_OneCellAnchor();
	void __fastcall Clear();
	void __fastcall Assign(TCT_OneCellAnchor* AItem);
	void __fastcall CopyTo(TCT_OneCellAnchor* AItem);
	TCT_Marker_Pos* __fastcall Create_From();
	Xpgparsedrawingcommon::TCT_PositiveSize2D* __fastcall Create_Ext();
	TCT_AnchorClientData* __fastcall Create_ClientData();
	__property TCT_Marker_Pos* From = {read=FFrom};
	__property Xpgparsedrawingcommon::TCT_PositiveSize2D* Ext = {read=FExt};
	__property TEG_ObjectChoices* Objects = {read=FEG_ObjectChoices};
	__property TCT_AnchorClientData* ClientData = {read=FClientData};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_OneCellAnchorXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_OneCellAnchor* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_OneCellAnchor* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_OneCellAnchor* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_OneCellAnchorXpgList* AItem);
	void __fastcall CopyTo(TCT_OneCellAnchorXpgList* AItem);
	__property TCT_OneCellAnchor* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_OneCellAnchorXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_OneCellAnchorXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AbsoluteAnchor : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	Xpgparsedrawingcommon::TCT_Point2D* FPos;
	Xpgparsedrawingcommon::TCT_PositiveSize2D* FExt;
	TEG_ObjectChoices* FEG_ObjectChoices;
	TCT_AnchorClientData* FClientData;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall TCT_AbsoluteAnchor(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_AbsoluteAnchor();
	void __fastcall Clear();
	void __fastcall Assign(TCT_AbsoluteAnchor* AItem);
	void __fastcall CopyTo(TCT_AbsoluteAnchor* AItem);
	Xpgparsedrawingcommon::TCT_Point2D* __fastcall Create_Pos();
	Xpgparsedrawingcommon::TCT_PositiveSize2D* __fastcall Create_Ext();
	TCT_AnchorClientData* __fastcall Create_ClientData();
	__property Xpgparsedrawingcommon::TCT_Point2D* Pos = {read=FPos};
	__property Xpgparsedrawingcommon::TCT_PositiveSize2D* Ext = {read=FExt};
	__property TEG_ObjectChoices* Objects = {read=FEG_ObjectChoices};
	__property TCT_AnchorClientData* ClientData = {read=FClientData};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_AbsoluteAnchorXpgList : public Xpgparsedrawingcommon::TXPGBaseObjectList
{
	typedef Xpgparsedrawingcommon::TXPGBaseObjectList inherited;
	
public:
	TCT_AbsoluteAnchor* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TCT_AbsoluteAnchor* __fastcall GetItems(int Index);
	
public:
	HIDESBASE TCT_AbsoluteAnchor* __fastcall Add();
	int __fastcall CheckAssigned();
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter, System::UnicodeString AName);
	HIDESBASE void __fastcall Assign(TCT_AbsoluteAnchorXpgList* AItem);
	void __fastcall CopyTo(TCT_AbsoluteAnchorXpgList* AItem);
	__property TCT_AbsoluteAnchor* Items[int Index] = {read=GetItems/*, default*/};
public:
	/* TXPGBaseObjectList.Create */ inline __fastcall TCT_AbsoluteAnchorXpgList(Xpgparsedrawingcommon::TXPGDocBase* AOwner) : Xpgparsedrawingcommon::TXPGBaseObjectList(AOwner) { }
	
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCT_AbsoluteAnchorXpgList() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEG_Anchor : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TCT_TwoCellAnchorXpgList* FTwoCellAnchorXpgList;
	TCT_OneCellAnchorXpgList* FOneCellAnchorXpgList;
	TCT_AbsoluteAnchorXpgList* FAbsoluteAnchorXpgList;
	TCT_RelSizeAnchorXpgList* FRelSizeAnchorXpgList;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	bool __fastcall HasData();
	__fastcall TEG_Anchor(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TEG_Anchor();
	void __fastcall Clear();
	void __fastcall Assign(TEG_Anchor* AItem);
	void __fastcall CopyTo(TEG_Anchor* AItem);
	__property TCT_TwoCellAnchorXpgList* TwoCellAnchors = {read=FTwoCellAnchorXpgList};
	__property TCT_OneCellAnchorXpgList* OneCellAnchors = {read=FOneCellAnchorXpgList};
	__property TCT_AbsoluteAnchorXpgList* AbsoluteAnchors = {read=FAbsoluteAnchorXpgList};
	__property TCT_RelSizeAnchorXpgList* RelSizeAnchors = {read=FRelSizeAnchorXpgList};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCT_Drawing : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	TEG_Anchor* FEG_Anchor;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	bool __fastcall HasData();
	__fastcall TCT_Drawing(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~TCT_Drawing();
	void __fastcall Clear();
	void __fastcall Assign(TCT_Drawing* AItem);
	void __fastcall CopyTo(TCT_Drawing* AItem);
	__property TEG_Anchor* Anchors = {read=FEG_Anchor};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION T__ROOT__ : public Xpgparsedrawingcommon::TXPGBase
{
	typedef Xpgparsedrawingcommon::TXPGBase inherited;
	
protected:
	Xpgplists::TStringXpgList* FRootAttributes;
	System::TClass FCurrWriteClass;
	TCT_Drawing* FWsDr;
	
public:
	virtual int __fastcall CheckAssigned();
	virtual Xpgparsedrawingcommon::TXPGBase* __fastcall HandleElement(Xpgpxml::TXpgReadXML* AReader);
	void __fastcall Write(Xpgpxml::TXpgWriteXML* AWriter);
	void __fastcall WriteUserShapes(Xpgpxml::TXpgWriteXML* AWriter);
	__fastcall T__ROOT__(Xpgparsedrawingcommon::TXPGDocBase* AOwner);
	__fastcall virtual ~T__ROOT__();
	void __fastcall Clear();
	void __fastcall Assign(T__ROOT__* AItem);
	void __fastcall CopyTo(T__ROOT__* AItem);
	__property Xpgplists::TStringXpgList* RootAttributes = {read=FRootAttributes};
	__property TCT_Drawing* WsDr = {read=FWsDr};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXPGDocXLSXDrawing : public Xpgparsedrawingcommon::TXPGDocBase
{
	typedef Xpgparsedrawingcommon::TXPGDocBase inherited;
	
private:
	Xpgputils::TXpgPErrors* __fastcall GetErrors();
	
protected:
	T__ROOT__* FRoot;
	Xpgparsedrawingcommon::TXPGReader* FReader;
	Xpgpxml::TXpgWriteXML* FWriter;
	TCT_Drawing* __fastcall GetWsDr();
	
public:
	__fastcall TXPGDocXLSXDrawing(Xc12graphics::TXc12GraphicManager* AGrManager);
	__fastcall virtual ~TXPGDocXLSXDrawing();
	void __fastcall LoadFromFile(System::UnicodeString AFilename);
	void __fastcall _LoadFromStream(System::Classes::TStream* AStream, bool AUserShapes = false);
	void __fastcall SaveToFile(System::UnicodeString AFilename, System::TClass AClassToWrite);
	void __fastcall SaveToStream(System::Classes::TStream* AStream, bool AUserShapes = false);
	__property T__ROOT__* Root = {read=FRoot};
	__property TCT_Drawing* WsDr = {read=GetWsDr};
	__property Xpgputils::TXpgPErrors* Errors = {read=GetErrors};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Xpgparsedrawing__1 StrTST_EditAs;
}	/* namespace Xpgparsedrawing */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_XPGPARSEDRAWING)
using namespace Xpgparsedrawing;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// XpgparsedrawingHPP
