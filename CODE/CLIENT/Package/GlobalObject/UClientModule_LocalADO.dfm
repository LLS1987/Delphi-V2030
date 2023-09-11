inherited ClientModule_LocalADO: TClientModule_LocalADO
  Height = 345
  Width = 741
  PixelsPerInch = 96
  object Conn_ADO: TADOConnection
    ConnectionString = 
      'Provider=SQLOLEDB.1;Password=df20010501;Persist Security Info=Tr' +
      'ue;User ID=sa;Initial Catalog=QF97;Data Source=127.0.0.1'
    LoginPrompt = False
    Provider = 'SQLOLEDB.1'
    Left = 192
    Top = 24
  end
  object DataSetProvider_query_open: TDataSetProvider
    DataSet = query_open
    Left = 472
    Top = 24
  end
  object DataSetProvider_proc_open: TDataSetProvider
    DataSet = proc_open
    Left = 472
    Top = 96
  end
  object query_open: TADOQuery
    Connection = Conn_ADO
    Parameters = <>
    Left = 344
    Top = 24
  end
  object proc_exec: TADOStoredProc
    Connection = Conn_ADO
    Parameters = <>
    Left = 272
    Top = 96
  end
  object query_exec: TADOQuery
    Connection = Conn_ADO
    Parameters = <>
    Left = 272
    Top = 24
  end
  object proc_open: TADOStoredProc
    Connection = Conn_ADO
    Parameters = <>
    Left = 344
    Top = 96
  end
end
