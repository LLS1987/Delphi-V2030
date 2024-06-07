// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FormPivotTable.pas' rev: 35.00 (Windows)

#ifndef FormpivottableHPP
#define FormpivottableHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Variants.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <XLSPivotTables5.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.IniFiles.hpp>
#include <Vcl.CheckLst.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.Menus.hpp>
#include <FormPivotTableField.hpp>
#include <FormSelectValues.hpp>
#include <System.Diagnostics.hpp>
#include <System.Actions.hpp>
#include <FormPivotTableOptions.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Formpivottable
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TfrmPivotTable;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TfrmPivotTable : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Checklst::TCheckListBox* clbFields;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TListBox* lbFilters;
	Vcl::Stdctrls::TListBox* lbColumn;
	Vcl::Stdctrls::TListBox* lbValues;
	Vcl::Stdctrls::TListBox* lbRow;
	Vcl::Stdctrls::TLabel* Label2;
	Vcl::Stdctrls::TLabel* Label3;
	Vcl::Stdctrls::TLabel* Label4;
	Vcl::Stdctrls::TLabel* Label5;
	Vcl::Stdctrls::TButton* btnClose;
	Vcl::Stdctrls::TButton* btnUpdate;
	Vcl::Stdctrls::TLabel* Label6;
	Vcl::Menus::TPopupMenu* popLabels;
	Vcl::Actnlist::TActionList* ActionList;
	Vcl::Actnlist::TAction* acRemove;
	Vcl::Actnlist::TAction* acSettings;
	Vcl::Menus::TMenuItem* Remove1;
	Vcl::Menus::TMenuItem* Fieldsettings1;
	Vcl::Actnlist::TAction* acMoveUp;
	Vcl::Actnlist::TAction* acMoveDown;
	Vcl::Actnlist::TAction* acMoveFirst;
	Vcl::Actnlist::TAction* acMoveLast;
	Vcl::Actnlist::TAction* acToReportFilter;
	Vcl::Actnlist::TAction* acToColumnLabels;
	Vcl::Actnlist::TAction* acToRowLables;
	Vcl::Actnlist::TAction* acToValues;
	Vcl::Menus::TMenuItem* N1;
	Vcl::Menus::TMenuItem* Moveup1;
	Vcl::Menus::TMenuItem* MoveDown1;
	Vcl::Menus::TMenuItem* MovetoBeginning1;
	Vcl::Menus::TMenuItem* MovetoEnd1;
	Vcl::Menus::TMenuItem* N2;
	Vcl::Menus::TMenuItem* N3;
	Vcl::Menus::TMenuItem* MovetoReportFilter1;
	Vcl::Menus::TMenuItem* MovetoColumnLabels1;
	Vcl::Menus::TMenuItem* acMovetoRowLables1;
	Vcl::Menus::TMenuItem* MovetoValues1;
	Vcl::Menus::TPopupMenu* popFields;
	Vcl::Actnlist::TAction* acAddReportFilter;
	Vcl::Actnlist::TAction* acAddColumnLabels;
	Vcl::Actnlist::TAction* acAddRowLables;
	Vcl::Actnlist::TAction* acAddValues;
	Vcl::Menus::TMenuItem* AddtoReportFilter1;
	Vcl::Menus::TMenuItem* AddtoColumnLabels1;
	Vcl::Menus::TMenuItem* AddtoRowLables1;
	Vcl::Menus::TMenuItem* AddtoValues1;
	Vcl::Stdctrls::TButton* btnOptions;
	void __fastcall ListBoxDragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	void __fastcall LsitBoxMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall ListBoxEndDrag(System::TObject* Sender, System::TObject* Target, int X, int Y);
	void __fastcall ListBoxDragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	void __fastcall clbFieldsClickCheck(System::TObject* Sender);
	void __fastcall btnUpdateClick(System::TObject* Sender);
	void __fastcall ListBoxDrawItem(Vcl::Controls::TWinControl* Control, int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	void __fastcall acMoveUpExecute(System::TObject* Sender);
	void __fastcall acMoveDownExecute(System::TObject* Sender);
	void __fastcall acMoveFirstExecute(System::TObject* Sender);
	void __fastcall acMoveLastExecute(System::TObject* Sender);
	void __fastcall acToReportFilterExecute(System::TObject* Sender);
	void __fastcall acToColumnLabelsExecute(System::TObject* Sender);
	void __fastcall acToRowLablesExecute(System::TObject* Sender);
	void __fastcall acToValuesExecute(System::TObject* Sender);
	void __fastcall acRemoveExecute(System::TObject* Sender);
	void __fastcall acAddReportFilterExecute(System::TObject* Sender);
	void __fastcall acAddColumnLabelsExecute(System::TObject* Sender);
	void __fastcall acAddRowLablesExecute(System::TObject* Sender);
	void __fastcall acAddValuesExecute(System::TObject* Sender);
	void __fastcall acSettingsExecute(System::TObject* Sender);
	void __fastcall btnCloseClick(System::TObject* Sender);
	void __fastcall btnOptionsClick(System::TObject* Sender);
	
private:
	Xlspivottables5::TXLSPivotTable* FPivTable;
	Vcl::Stdctrls::TCustomListBox* FCurrLB;
	int FCurrItem;
	System::Classes::TNotifyEvent FUpdateEvent;
	System::Inifiles::TCustomIniFile* FIniFile;
	bool FAutoUpdate;
	__int64 FAutoUpdateMS;
	void __fastcall CheckByName(System::UnicodeString AName, bool AChecked = true);
	void __fastcall InsertFields(Vcl::Stdctrls::TCustomListBox* AListBox, Xlspivottables5::TXLSPivotFieldsDest* AFields);
	void __fastcall DoTable();
	void __fastcall RemoveByName(System::UnicodeString AName)/* overload */;
	void __fastcall RemoveByName(Vcl::Stdctrls::TCustomListBox* AListBox, System::UnicodeString AName)/* overload */;
	void __fastcall UpdateFields(Vcl::Stdctrls::TCustomListBox* AListBox, Xlspivottables5::TXLSPivotFieldsDest* AFields);
	void __fastcall UpdateAllFields();
	void __fastcall EnableActions();
	System::UnicodeString __fastcall CurrName();
	Xlspivottables5::TXLSPivotField* __fastcall CurrField();
	void __fastcall DoUpdate();
	void __fastcall DoExecute(Xlspivottables5::TXLSPivotTable* APivTable, System::Classes::TNotifyEvent AUpdateEvent);
	
public:
	void __fastcall Execute(Xlspivottables5::TXLSPivotTable* APivTable, int ALeft, int ATop, System::Classes::TNotifyEvent AUpdateEvent)/* overload */;
	void __fastcall Execute(Xlspivottables5::TXLSPivotTable* APivTable, System::Inifiles::TCustomIniFile* AIniFile, System::Classes::TNotifyEvent AUpdateEvent)/* overload */;
	__property Xlspivottables5::TXLSPivotTable* PivotTable = {read=FPivTable};
	__property __int64 AutoUpdateMS = {read=FAutoUpdateMS, write=FAutoUpdateMS};
	__property System::Classes::TNotifyEvent OnUpdate = {read=FUpdateEvent, write=FUpdateEvent};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TfrmPivotTable(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TfrmPivotTable(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TfrmPivotTable() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TfrmPivotTable(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Formpivottable */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FORMPIVOTTABLE)
using namespace Formpivottable;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// FormpivottableHPP
