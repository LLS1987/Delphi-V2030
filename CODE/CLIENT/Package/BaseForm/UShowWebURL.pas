unit UShowWebURL;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, UBaseMdiForm, Winapi.WebView2,
  Winapi.ActiveX, Vcl.Edge, cxStyles, cxClasses, System.ImageList, Vcl.ImgList,
  System.Actions, Vcl.ActnList, Vcl.ExtCtrls;

type
  TShowWebURL = class(TBaseMdiForm)
    EdgeBrowser: TEdgeBrowser;
    ///获取网页的标题
    procedure EdgeBrowserDocumentTitleChanged(Sender: TCustomEdgeBrowser; const ADocumentTitle: string);
    ///网页中打开新的窗体
    procedure EdgeBrowserNewWindowRequested(Sender: TCustomEdgeBrowser; Args: TNewWindowRequestedEventArgs);
    ///获取发送此 Web 消息的文档的 URI。
    procedure EdgeBrowserWebMessageReceived(Sender: TCustomEdgeBrowser; Args: TWebMessageReceivedEventArgs);
    ///获取 Web 资源请求。
    ///  获取或设置 CoreWebView2WebResourceResponse 对象。 如果设置了此对象，则 CoreWebView2.WebResourceRequest 事件将使用此响应完成。
    ///  可以使用 CoreWebView2Environment.CreateWebResourceResponse
    ///  创建一个空的 CoreWebView2WebResourceResponse 对象，然后进行修改以构造响应。
    procedure EdgeBrowserWebResourceRequested(Sender: TCustomEdgeBrowser; Args: TWebResourceRequestedEventArgs);
    ///获取网页发出的关闭事件
    procedure EdgeBrowserWindowCloseRequested(Sender: TObject);
  private
    FAllowJump: Boolean;
    function GetURL: string;
  public
    /// <remarks>
    ///  是否允许网页进行页面跳转
    /// </remarks>
    property AllowJump :Boolean read FAllowJump write FAllowJump;
    /// <summary>
    ///  默认打开的 URL
    /// </summary>
    property URL:string read GetURL;
    procedure BeforeFormShow; override;
  end;

var
  ShowWebURL: TShowWebURL;

implementation

uses
  UComvar;

{$R *.dfm}

procedure TShowWebURL.BeforeFormShow;
var LICoreWebView2:ICoreWebView2;
begin
  inherited;
  //GetInterface( StringToGUID('{189B8AAF-0426-4748-B9AD-243F537EB46B}'),LICoreWebView2);
  //if LICoreWebView2 = EdgeBrowser.DefaultInterface then ShowMessage('LICoreWebView2接口TGUID:'+'{189B8AAF-0426-4748-B9AD-243F537EB46B}');
  //if not EdgeBrowser.WebViewCreated then Exit;
  //设置缓存路径
  EdgeBrowser.UserDataFolder := Goo.SystemDataPath;
  //EdgeBrowser.Navigate(URL);
  //线程中打开链接，
  TThread.CreateAnonymousThread(
    procedure
    begin
      TThread.Synchronize( nil,
        procedure //var AHTMLContent: string;
        begin
          //EdgeBrowser1.NavigateToString(AHTMLContent);
          if EdgeBrowser.Navigate(URL)=false then Goo.Logger.Error('网页打开错误：%s',[URL]);    //:Navigate:如果返回了错误码:=true,否则:=false
        end);
    end
  ).Start;
end;

procedure TShowWebURL.EdgeBrowserDocumentTitleChanged(Sender:TCustomEdgeBrowser; const ADocumentTitle: string);
begin
  inherited;
  Caption := ADocumentTitle;
end;

procedure TShowWebURL.EdgeBrowserNewWindowRequested(Sender: TCustomEdgeBrowser; Args: TNewWindowRequestedEventArgs);
begin
  inherited;
  if not AllowJump then
  begin
    Args.ArgsInterface.Set_Handled(Integer(LongBool(True)));
    var _uri:PWideChar;
    Args.ArgsInterface.Get_uri(_uri);
    Goo.Reg.ShowWebUrl(_uri);
    _uri := nil;
  end;
end;

procedure TShowWebURL.EdgeBrowserWebMessageReceived(Sender: TCustomEdgeBrowser; Args: TWebMessageReceivedEventArgs);
var webMessageAsJson,webMessageAsString: PWideChar;
begin
  inherited;
  //获取从 WebView 内容发布到转换为 JSON 字符串的主机的消息。
  if Args.ArgsInterface.Get_webMessageAsJson(webMessageAsJson)<>0 then
  begin

  end;
  //获取从 WebView 内容以字符串形式发布到主机的消息。
  if Args.ArgsInterface.TryGetWebMessageAsString(webMessageAsString)<>0 then
  begin

  end;
end;

procedure TShowWebURL.EdgeBrowserWebResourceRequested(Sender: TCustomEdgeBrowser; Args: TWebResourceRequestedEventArgs);
begin
  inherited;
  //Goo.Msg.ShowMsg(Sender.LocationURL);
end;

procedure TShowWebURL.EdgeBrowserWindowCloseRequested(Sender: TObject);
begin
  inherited;
  Close;
end;

function TShowWebURL.GetURL: string;
begin
  Result := Self.ParamList.AsString('@URL');
end;

initialization
  Goo.Reg.RegisterClass(TShowWebURL);

end.
