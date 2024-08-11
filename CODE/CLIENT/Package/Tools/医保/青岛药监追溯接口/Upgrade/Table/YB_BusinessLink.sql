
--- 进销存管理上传采购/销售的中间表
IF NOT EXISTS(SELECT * FROM SYSOBJECTS WHERE NAME='YB_BusinessLink' AND XTYPE='U')
CREATE TABLE [dbo].YB_BusinessLink 
(
	ID INT IDENTITY(1,1) PRIMARY KEY,
	UniqueBillid UNIQUEIDENTIFIER NOT NULL, --单据UniqueBillid
	BillType INT NOT NULL ,--单据类型
	Flag INT NOT NULL DEFAULT 0,--是否上传成功 1 = 成功，0 = 失败  ,2 = 调用3507被删除
	trandate datetime not null default getdate()
) 
GO
if exists(select * from sysindexes where name='IX_YB_BusinessLink_UniqueBillid' and id = object_id(N'[dbo].[YB_BusinessLink]'))
DROP INDEX YB_BusinessLink.IX_YB_BusinessLink_UniqueBillid
GO

if not exists(select * from syscolumns where id=object_id('YB_BusinessLink') and name='BillID')
begin
  alter table YB_BusinessLink add BillID INT 
end
GO
UPDATE YB_BusinessLink SET BillID = 0 WHERE BillID IS NULL 
GO 
if not exists(select * from syscolumns where id=object_id('YB_BusinessLink') and name='Ord')
begin
  alter table YB_BusinessLink add Ord INT 
end
GO
UPDATE YB_BusinessLink SET Ord = 0 WHERE Ord IS NULL 
GO 


if not exists(select * from syscolumns where id=object_id('YB_BusinessLink') and name='BillDate')
begin
  ALTER table YB_BusinessLink add BillDate DATETIME
end
GO

if NOT EXISTS(select * from sysindexes where name='IX_YB_BusinessLink_Billidord' and id = object_id(N'[dbo].[YB_BusinessLink]'))
 CREATE INDEX IX_YB_BusinessLink_Billidord ON [dbo].YB_BusinessLink(BillID,Ord) 
GO
if NOT EXISTS(select * from sysindexes where name='IX_YB_BusinessLink_Billtype' and id = object_id(N'[dbo].[YB_BusinessLink]'))
 CREATE INDEX IX_YB_BusinessLink_Billtype ON [dbo].YB_BusinessLink(BillType) 
GO
if NOT EXISTS(select * from sysindexes where name='IX_YB_BusinessLink_BillDate' and id = object_id(N'[dbo].[YB_BusinessLink]'))
 CREATE INDEX IX_YB_BusinessLink_BillDate ON [dbo].YB_BusinessLink(BillDate) 
GO

UPDATE a
  SET  billdate=b.BillDate
FROM  YB_BusinessLink a INNER JOIN dbo.vBillIndex_Query b ON  b.BillID = a.BillID AND b.BillType = a.BillType
WHERE  a.billdate IS NULL
GO
UPDATE a
  SET  billdate=b.BillDate
FROM  YB_BusinessLink a INNER JOIN dbo.vRetailBillIndex b ON  b.BillID = a.BillID AND b.BillType = a.BillType
WHERE  a.billdate IS NULL
GO


if not exists(select * from syscolumns where id=object_id('YB_BusinessLink') and name='fixmedins_bchno')
begin
  ALTER table YB_BusinessLink add fixmedins_bchno VARCHAR(100) DEFAULT ''
end
GO
UPDATE a
  SET  fixmedins_bchno=CONVERT(VARCHAR(10),a.BillDate,112)+CAST(a.BillID AS VARCHAR(10))+CAST(a.ord AS VARCHAR(10))
FROM  YB_BusinessLink a 
WHERE  a.fixmedins_bchno IS NULL
GO
if NOT EXISTS(select * from sysindexes where name='IX_YB_BusinessLink_fixmedins_bchno' and id = object_id(N'[dbo].[YB_BusinessLink]'))
 CREATE INDEX IX_YB_BusinessLink_fixmedins_bchno ON [dbo].YB_BusinessLink(fixmedins_bchno) 
GO

if not exists(select * from syscolumns where id=object_id('YB_BusinessLink') and name='Krec')
begin
  ALTER table YB_BusinessLink add Krec INT DEFAULT 0 
end
GO
UPDATE a
  SET  Krec=i.KRec
FROM  YB_BusinessLink a  INNER JOIN dbo.vInOutStockTable i ON  i.BillID = a.BillID AND i.ord = a.Ord
WHERE  a.Krec IS NULL AND a.BillType not IN (151,152)
GO
UPDATE a
  SET  Krec=i.KRec
FROM  YB_BusinessLink a  INNER JOIN dbo.vRetailBill i ON  i.BillID = a.BillID AND i.ord = a.Ord
WHERE  a.Krec IS NULL AND a.BillType  IN (151,152)
GO
if NOT EXISTS(select * from sysindexes where name='IX_YB_BusinessLink_Krec' and id = object_id(N'[dbo].[YB_BusinessLink]'))
 CREATE INDEX IX_YB_BusinessLink_Krec ON [dbo].YB_BusinessLink(Krec) 
GO

--湖北单独向地区上传库存变动的中间表
IF NOT EXISTS(SELECT * FROM SYSOBJECTS WHERE NAME='YB_Other_BusinessLink' AND XTYPE='U')
CREATE TABLE [dbo].YB_Other_BusinessLink 
(
	ID INT IDENTITY(1,1) PRIMARY KEY,
	UniqueBillid UNIQUEIDENTIFIER NOT NULL, --单据UniqueBillid
	BillType INT NOT NULL ,--单据类型
	Flag INT NOT NULL DEFAULT 0,--是否上传成功 1 = 成功，0 = 失败  ,2 = 调用3507被删除
	trandate datetime not null default getdate(),
	BillId INT  NOT NULL DEFAULT 0,
	Ord INT  NOT NULL DEFAULT 0	
) 
GO
if exists(select * from sysindexes where name='IX_YB_Other_BusinessLink_UniqueBillid' and id = object_id(N'[dbo].[YB_Other_BusinessLink]'))
DROP INDEX YB_Other_BusinessLink.IX_YB_Other_BusinessLink_UniqueBillid
GO

if exists(select * from sysindexes where name='IX_YB_Other_BusinessLink_UniqueBillidord' and id = object_id(N'[dbo].[YB_Other_BusinessLink]'))
DROP INDEX YB_Other_BusinessLink.IX_YB_Other_BusinessLink_UniqueBillidord
GO

if not exists(select * from syscolumns where id=object_id('YB_Other_BusinessLink') and name='BillDate')
begin
  ALTER table YB_Other_BusinessLink add BillDate DATETIME
end
GO

if NOT EXISTS(select * from sysindexes where name='IX_YB_Other_BusinessLink_Billidord' and id = object_id(N'[dbo].[YB_Other_BusinessLink]'))
 CREATE INDEX IX_YB_Other_BusinessLink_Billidord ON [dbo].YB_Other_BusinessLink(BillID,Ord) 
GO
if NOT EXISTS(select * from sysindexes where name='IX_YB_Other_BusinessLink_Billtype' and id = object_id(N'[dbo].[YB_Other_BusinessLink]'))
 CREATE INDEX IX_YB_Other_BusinessLink_Billtype ON [dbo].YB_Other_BusinessLink(BillType) 
GO
if NOT EXISTS(select * from sysindexes where name='IX_YB_Other_BusinessLink_BillDate' and id = object_id(N'[dbo].[YB_Other_BusinessLink]'))
 CREATE INDEX IX_YB_Other_BusinessLink_BillDate ON [dbo].YB_Other_BusinessLink(BillDate) 
GO

UPDATE a
  SET  billdate=b.BillDate
FROM  YB_Other_BusinessLink a INNER JOIN dbo.vBillIndex_Query b ON  b.BillID = a.BillID AND b.BillType = a.BillType
WHERE  a.billdate IS NULL
GO
UPDATE a
  SET  billdate=b.BillDate
FROM  YB_Other_BusinessLink a INNER JOIN dbo.vRetailBillIndex b ON  b.BillID = a.BillID AND b.BillType = a.BillType
WHERE  a.billdate IS NULL
GO

if not exists(select * from syscolumns where id=object_id('YB_Other_BusinessLink') and name='fixmedins_bchno')
begin
  ALTER table YB_Other_BusinessLink add fixmedins_bchno VARCHAR(100) DEFAULT ''
end
GO
UPDATE a
  SET  fixmedins_bchno=CONVERT(VARCHAR(10),a.BillDate,112)+CAST(a.BillID AS VARCHAR(10))+CAST(a.ord AS VARCHAR(10))
FROM  YB_Other_BusinessLink a 
WHERE  a.fixmedins_bchno IS NULL
GO
if NOT EXISTS(select * from sysindexes where name='IX_YB_Other_BusinessLink_fixmedins_bchno' and id = object_id(N'[dbo].[YB_Other_BusinessLink]'))
 CREATE INDEX IX_YB_Other_BusinessLink_fixmedins_bchno ON [dbo].YB_Other_BusinessLink(fixmedins_bchno) 
GO

if not exists(select * from syscolumns where id=object_id('YB_Other_BusinessLink') and name='Krec')
begin
  ALTER table YB_Other_BusinessLink add Krec INT DEFAULT 0 
end
GO
UPDATE a
  SET  Krec=i.KRec
FROM  YB_Other_BusinessLink a  INNER JOIN dbo.vInOutStockTable i ON  i.BillID = a.BillID AND i.ord = a.Ord
WHERE  a.Krec IS NULL AND a.BillType not IN (151,152)
GO
UPDATE a
  SET  Krec=i.KRec
FROM  YB_Other_BusinessLink a  INNER JOIN dbo.vRetailBill i ON  i.BillID = a.BillID AND i.ord = a.Ord
WHERE  a.Krec IS NULL AND a.BillType  IN (151,152)
GO
if NOT EXISTS(select * from sysindexes where name='IX_YB_Other_BusinessLink_Krec' and id = object_id(N'[dbo].[YB_Other_BusinessLink]'))
 CREATE INDEX IX_YB_Other_BusinessLink_Krec ON [dbo].YB_Other_BusinessLink(Krec) 
GO
