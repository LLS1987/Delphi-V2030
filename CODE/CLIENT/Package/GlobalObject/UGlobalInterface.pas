///
/// 对口对象
/// LLS
/// 2023-04-15
///
unit UGlobalInterface;

interface

uses
  System.SysUtils, Vcl.Forms, Vcl.ActnList, UParamList;

type
  IBase = interface(IUnknown)    //IUnknown     IDispatch
    ['{66682FDD-5E91-41D1-AD86-18C6AD6C6A61}']
    function GetObject: TObject;
  end;
  //窗体文件的公共接口
  IForm = interface(IBase)
    ['{71674D27-53AB-43C8-95DF-F9B3B2E53B1F}']
    function GetForm: TForm;
    function GetActionList:TActionList;
    procedure SetParamList(AParamList:TParamList);
    function GetParamList:TParamList;
  end;
  {登录的服务器}
  ILoginServerFormInt = interface(IForm)
    ['{9D05F9ED-6525-4316-9E54-B3415C447251}']
    function LoginServer(Sender:TForm): Boolean;
  end;
  {登录用户}
  ILoginFormInt = interface(IForm)
    ['{4BC40BA6-17E7-4F69-A782-266B857FD7EA}']
    function LoginOk(Sender: TForm; ANew: Boolean = False): Boolean;
  end;
  {进度条窗口}
  IProgressBarFormInt = interface(IForm)
    ['{94FC0B85-C6BF-4E96-ACC3-137E2791C251}']
    procedure ShowProgressBar(Sender: TForm);
  end;

implementation

end.
