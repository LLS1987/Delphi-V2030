object FormTest: TFormTest
  Left = 268
  Top = 147
  BorderStyle = bsDialog
  Caption = 'Test for Interfaces'
  ClientHeight = 458
  ClientWidth = 466
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  PixelsPerInch = 96
  TextHeight = 13
  object Memo1: TMemo
    Left = 24
    Top = 24
    Width = 417
    Height = 409
    Lines.Strings = (
      '测试对一未知接口的动态判断与覆盖。'
      ''
      
        '场景：Delphi 10.2.3 中的 ToolsAPI 较 10.2.2 添加了主题相关支持的' +
        '接口，专家'
      '包如果要支持主题，则必须使用 10.2.3 编译，并使用这批接口。 '
      ' '
      
        '带来的问题是，如果专家包在 10.2.2 下运行，则会因为无法找到这些接' +
        '口而出'
      '错。'
      ''
      
        '现在改用另外一种方案，不直接引用 10.2.3 的那批新接口，只用其 GUI' +
        'D 进行 '
      'Supports 调用查询，如 10.2.2，会查询不到接口的实现，从而可禁用。'
      ''
      
        '如果查到了实现，也不能直接使用 10.2.3 的那批新接口，只能仿照那批' +
        '接口写'
      '一套对应的一模一样的接口，然后调用。'
      ''
      
        '本例子演示并验证了这种调用，原始接口提供者是 IOriginalInterface ' +
        '以及其实现'
      '，并将实现通过 IUnknown 接口返回。'
      ''
      
        '调用者声明了一个一模一样的接口 IOverrideProvider，通过Supports ' +
        '查询 '
      
        'IOriginalInterface 的 GUID，获得其实现并强制转换成 IOverrideProv' +
        'ider 以成功调'
      '用。完全不用到 IOriginalInterface 的声明。'
      ''
      
        '如果  IOriginalInterface 需要用到新的接口如 AddNotifier 时需要 I' +
        'OriginalNotifier，'
      
        '则 IOriginalNotifier 同样需要一个仿写的接口 IOverrideNotifier，' +
        '然后仿写的 '
      
        'IOverrideProvider 里的 AddNotifier 方法就改用 IOverrideNotifier' +
        '，貌似也能达到要'
      '求。'
      ''
      
        '但如果 IOriginalInterface 实现的代码里如果做了接口类型检测，则会' +
        '发觉我们传'
      
        '入的接口类型不是 IOriginalNotifier，而是 IOverrideNotifier，从而' +
        '出错。这种情况'
      
        '下我们需要对实现 IOverrideNotifier 的类做一个手脚，将其内部 GUID' +
        ' 替换为 '
      'IOriginalNotifier 的 GUID。')
    TabOrder = 0
  end
end
