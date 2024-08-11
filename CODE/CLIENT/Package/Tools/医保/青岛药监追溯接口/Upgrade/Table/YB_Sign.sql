

--签到表
IF NOT EXISTS(SELECT * FROM SYSOBJECTS WHERE NAME='YB_Sign' AND XTYPE='U')
CREATE TABLE YB_Sign
(	
  Erec int not null, --人员编号
  SignNo varchar(100) Not null default '',  --签到编号	
  QdDate ctDate, --签到日期
  QdFlag int not null default 0  -- 签到标志
  primary key(erec,qddate)
)
GO