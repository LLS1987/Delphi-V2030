unit UComConst;

interface

uses
  Winapi.Messages;

type
              //全部,   批发办    配送版   门店  查询    单体     收银     普及   实时自营门店  独立自营店   独立加盟店   实时加盟店
  TLimitVer  =(lvAll,lvWholeSale,lvCenter,lvPos,lvQuery,lvSingle,lvInCome,lvPJB,lvPosRealTime,lvPosSelf,lvPosJoined,lvPosRealJoined);
  TLimitVers = set of TLimitVer;
  TRegisterType = (rmtForm,rmtBill,rmtRepot,rmtMethod,rmtFile,rmtURL);

  //自定义消息
const  REFRESH_FIND_MESSAGE = WM_USER + 100;
       WM_RefreshData = WM_USER + 101;

implementation

end.
