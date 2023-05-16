inherited ClientModule_Local: TClientModule_Local
  Height = 374
  Width = 804
  PixelsPerInch = 96
  object query_open: TSQLQuery
    MaxBlobSize = -1
    Params = <>
    SQLConnection = conn
    Left = 264
    Top = 24
  end
  object DataSetProvider_query_open: TDataSetProvider
    DataSet = query_open
    Left = 384
    Top = 24
  end
  object DataSetProvider_proc_open: TDataSetProvider
    Left = 384
    Top = 88
  end
  object query_exec: TSQLQuery
    MaxBlobSize = -1
    Params = <>
    SQLConnection = conn
    Left = 176
    Top = 24
  end
  object proc_exec: TSQLStoredProc
    MaxBlobSize = -1
    Params = <>
    SQLConnection = conn
    Left = 264
    Top = 88
  end
end
