object ModuleUnit: TModuleUnit
  Height = 405
  Width = 635
  PixelsPerInch = 96
  object FDQuery_Open: TFDQuery
    Connection = FDConnection1
    FetchOptions.AssignedValues = [evRowsetSize]
    FetchOptions.RowsetSize = 999999
    SQL.Strings = (
      'select * from dbo.MSreplication_options')
    Left = 112
    Top = 110
  end
  object FDConnection1: TFDConnection
    Params.Strings = (
      'Address=127.0.0.1'
      'ApplicationName=QFBJ'
      'Server=127.0.0.1'
      'DriverID=MSSQL'
      'User_Name=sa'
      'Password=df20010501')
    FetchOptions.AssignedValues = [evRowsetSize, evRecordCountMode]
    FetchOptions.RowsetSize = 999999
    FetchOptions.RecordCountMode = cmFetched
    LoginPrompt = False
    Left = 112
    Top = 48
  end
  object DataSetProvider_Query_Open: TDataSetProvider
    DataSet = FDQuery_Open
    ResolveToDataSet = True
    Options = [poAllowCommandText, poUseQuoteChar]
    Left = 112
    Top = 168
  end
  object FDQuery_Exec: TFDQuery
    Connection = FDConnection1
    FetchOptions.AssignedValues = [evRowsetSize]
    FetchOptions.RowsetSize = 999999
    SQL.Strings = (
      'select * from dbo.MSreplication_options')
    Left = 206
    Top = 110
  end
  object FDStoredProc_Open: TFDStoredProc
    Connection = FDConnection1
    Left = 304
    Top = 110
  end
  object DataSetProvider_Proc_Open: TDataSetProvider
    DataSet = FDStoredProc_Open
    Options = [poAllowCommandText, poUseQuoteChar]
    Left = 304
    Top = 169
  end
  object FDStoredProc_Exec: TFDStoredProc
    Connection = FDConnection1
    Left = 458
    Top = 110
  end
  object DataSetProvider_Proc_Exec: TDataSetProvider
    DataSet = FDStoredProc_Exec
    Options = [poAllowCommandText, poUseQuoteChar]
    Left = 458
    Top = 169
  end
  object FDScript_Upgrade: TFDScript
    SQLScripts = <>
    Connection = FDConnection1
    Params = <>
    Macros = <>
    Left = 208
    Top = 48
  end
end
