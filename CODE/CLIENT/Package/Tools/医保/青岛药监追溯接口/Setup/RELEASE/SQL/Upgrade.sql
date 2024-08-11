

IF NOT EXISTS(SELECT * FROM SYSOBJECTS WHERE NAME='YBLSNo_CQ' AND XTYPE='U')
CREATE TABLE YBLSNo_CQ
(
  YbLSNo int not null default 0
)
GO

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
IF NOT EXISTS(SELECT * FROM SYSOBJECTS WHERE NAME='YB_GoodsStockChange' AND XTYPE='U')
CREATE TABLE [dbo].YB_GoodsStockChange
(
	BillID	ctInt,
	Ord	ctInt	PRIMARY KEY(BillID,Ord)
)

GO
-- 医保库存第一次上传后，记录原始对比库存数据
IF NOT exists(select * from  sysobjects where name='YB_Ori_GoodsStock' and xtype='u')
CREATE TABLE YB_Ori_GoodsStock
(
	PRec CTINT , --商品REC
	KRec ctInt , -- 仓库REC
	jobNumber ctShortStr, --批号
	Qty ctQty, -- 库存数量
	validityPeriod ctDate, -- 有效期	
	StockUniqueid ctUID PRIMARY KEY(StockUniqueid),
	fixmedins_bchno VARCHAR(30) ,--定点医药机构批次流水号，StockUniqueid 去掉-，去掉头尾，生成
	Field1 ctShortStr,  -- 上传成功标志 1 =成功，0=未上传，2=调用3507删除上传
	Field2 ctShortStr, --
	Field3 ctShortStr -- 
)
GO

-- 更换主键
if exists(select *
	from dbo.sysobjects
	where xtype = 'PK'
	and parent_obj = (Select id 
	from dbo.sysobjects where id = OBJECT_ID('YB_Ori_GoodsStock') 
	and OBJECTPROPERTY(id, N'IsUserTable') = 1))
begin
	DECLARE @Name varchar(128)
	select @Name = name
	from dbo.sysobjects
	where xtype = 'PK'
	and parent_obj = (Select id 
	from dbo.sysobjects where id = OBJECT_ID('YB_Ori_GoodsStock') 
	and OBJECTPROPERTY(id, N'IsUserTable') = 1)
	--删除主键
	exec('alter table YB_Ori_GoodsStock drop constraint ' + @name)
END


if Not exists(select * from dbo.sysindexes where name=N'YB_Ori_GoodsStock_Index' and id=OBJECT_ID(N'[dbo].[YB_Ori_GoodsStock]'))
begin
	create  clustered  index YB_Ori_GoodsStock_Index on YB_Ori_GoodsStock(StockUniqueid,jobNumber,validityPeriod)	
END
GO 
--

----- 湖北单独向地区上传库存变动的中间表
IF NOT exists(select * from  sysobjects where name='YB_Other_Ori_GoodsStock' and xtype='u')
CREATE TABLE YB_Other_Ori_GoodsStock
(
	PRec CTINT , --商品REC
	KRec ctInt , -- 仓库REC
	jobNumber ctShortStr, --批号
	Qty ctQty, -- 库存数量
	validityPeriod ctDate, -- 有效期	
	StockUniqueid ctUID ,
	fixmedins_bchno VARCHAR(30) ,--定点医药机构批次流水号，StockUniqueid 去掉-，去掉头尾，生成
	Field1 ctShortStr,  -- 上传成功标志 1 =成功，0=未上传，2=调用3507删除上传
	Field2 ctShortStr, --
	Field3 ctShortStr -- 
)
GO

if Not exists(select * from dbo.sysindexes where name=N'YB_Other_Ori_GoodsStock_Index' and id=OBJECT_ID(N'[dbo].[YB_Other_Ori_GoodsStock]'))
begin
	create  clustered  index YB_Other_Ori_GoodsStock_Index on YB_Other_Ori_GoodsStock(StockUniqueid,jobNumber,validityPeriod)	
END
GO 

--价格
if not exists(select * from syscolumns where id=object_id('YB_Other_Ori_GoodsStock') and name='Price')
begin
  alter table YB_Other_Ori_GoodsStock add Price  numeric(18, 8) 
end
GO
--扯零标记
if not exists(select * from syscolumns where id=object_id('YB_Other_Ori_GoodsStock') and name='trdn_flag')
begin
  alter table YB_Other_Ori_GoodsStock add trdn_flag VARCHAR(2) NOT NULL DEFAULT '0'
end
GO
--扯零标记
if not exists(select * from syscolumns where id=object_id('YB_Ori_GoodsStock') and name='trdn_flag')
begin
  alter table YB_Ori_GoodsStock add trdn_flag VARCHAR(2) NOT NULL DEFAULT '0'
end
GO

--改为50
if  exists(select * from syscolumns where id=object_id('YB_Other_Ori_GoodsStock') and name='fixmedins_bchno')
begin
  alter TABLE YB_Other_Ori_GoodsStock 
  ALTER COLUMN fixmedins_bchno  VARCHAR(100)
end
GO

--改为50
if  exists(select * from syscolumns where id=object_id('YB_Ori_GoodsStock') and name='fixmedins_bchno')
begin
  alter TABLE YB_Ori_GoodsStock 
  ALTER COLUMN fixmedins_bchno  VARCHAR(100)
end
GO

if not exists(select * from syscolumns where id=object_id('YB_Other_Ori_GoodsStock') and name='OutFactoryDate')
begin
  alter table YB_Other_Ori_GoodsStock add OutFactoryDate DATETIME
end
GO

if Not exists(select * from dbo.sysindexes where name=N'YB_Other_Ori_GoodsStock_Krec_Index' and id=OBJECT_ID(N'[dbo].[YB_Other_Ori_GoodsStock]'))
begin
	create   index YB_Other_Ori_GoodsStock_Krec_Index on YB_Other_Ori_GoodsStock(KRec)	
END
GO 


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



if  exists(select * from sysobjects where xtype='p' and name='GP_InsertYBSign')
  DROP PROC GP_InsertYBSign
GO

CREATE PROC GP_InsertYBSign
   @Erec int, --人员编号
   @SignNo VARCHAR(100), --签到编号	
   @QdDate ctDate, --签到日期
   @QdFlag int --签到标志
 
AS

if exists(select * from YB_Sign where Erec=@Erec and QdDate=@QdDate ) DELETE dbo.YB_Sign WHERE Erec=@Erec and QdDate=@QdDate

	  INSERT INTO YB_Sign
	       (Erec,
	        SignNo,
	        QdDate,
	        QdFlag)
	  VALUES(   
			@Erec , --人员编号
			@SignNo , --签到编号	
			@QdDate,  --签到日期
			@QdFlag)  --签到标志
     
GO   
if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_QingDao_GetGoodsStock]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
DROP PROCEDURE [dbo].[GP_QingDao_GetGoodsStock]
GO
CREATE PROCEDURE GP_QingDao_GetGoodsStock
(
	@KRec	ctInt=0,
	@PRec	ctInt=0
)
AS
SELECT p.SS_DM med_list_codg,	--医疗目录编码	ANS	50	Y	
	p.UserCode	fixmedins_hilist_id,	--定点医药机构目录编号	ANS	30	Y	
	p.FullName	fixmedins_hilist_name,	--定点医药机构目录名称	ANS	200	Y	
	CAST(p.RX AS VARCHAR(10))	rx_flag,	--处方药标志	ANS	3	Y	
	CONVERT(VARCHAR(10),GETDATE(),120) invdate,	--盘存日期	日期型		Y	yyyy-MM-dd
	s.Qty	inv_cnt,	--库存数量	AN	16,2	Y	按最小计价包装单位统计
	s.JobNumber	manu_lotnum,	--生产批号	ANS	30		
	RIGHT(REPLACE(s.StockUniqueid,'-','')+CAST(s.GoodsId AS VARCHAR(10)),30) fixmedins_bchno,	--定点医药机构批次流水号	ANS	30	Y	医药机构自定义批次号
	CONVERT(VARCHAR(10),s.OutFactoryDate,120) manu_date,	--生产日期	日期型		Y	yyyy-MM-dd
	CONVERT(VARCHAR(10),s.ValidityPeriod,120) expy_end,	--有效期止	日期型		Y	yyyy-MM-dd
	p.Comment memo	--备注	ANS	500		
FROM dbo.GoodsStocks s INNER JOIN dbo.ptype p ON s.PRec=p.Rec
WHERE (@KRec=0 OR KRec=@KRec)
AND (@PRec=0 OR PRec=@PRec)
AND p.SS_DM<>''

GO
if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_QingDao_GetGoodsStockChange]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
DROP PROCEDURE [dbo].[GP_QingDao_GetGoodsStockChange]
GO
CREATE PROCEDURE GP_QingDao_GetGoodsStockChange
(
	@KRec	ctInt=0,
	@PRec	ctInt=0,
	@BillType	ctShortStr='',
	@BgnDate	ctDate=NULL,
	@EndDate	ctDate=NULL
)
AS
SELECT p.SS_DM AS med_list_codg,--med_list_codg	医疗目录编码	ANS	50	Y	
	t.billName AS inv_chg_type,--inv_chg_type	库存变更类型	ANS	6	Y	
	p.UserCode AS fixmedins_hilist_id,--fixmedins_hilist_id	定点医药机构目录编号	ANS	30	Y	
	p.FullName AS fixmedins_hilist_name,--fixmedins_hilist_name	定点医药机构目录名称	ANS	200	Y	
	CONVERT(VARCHAR(10),s.BillDate,112)+CAST(s.BillID AS VARCHAR(10))+CAST(s.ord AS VARCHAR(10)) fixmedins_bchno,--fixmedins_bchno	定点医药机构批次流水号	ANS	30	Y	
	s.Price AS pric,--pric	单价	AN	16,6	Y	
	s.Qty AS cnt,--cnt	数量	AN	16,4	Y	按最小计价包装单位
	CAST(p.RX AS VARCHAR(10))	rx_flag,--rx_flag	处方药标志	ANS	3	Y	
	CONVERT(VARCHAR(20),i.auditingdate,120) AS inv_chg_time,--inv_chg_time	库存变更时间	日期时间型		Y	yyyy-MM-dd HH:mm:ss
	e.FullName AS inv_chg_opter_name,--inv_chg_opter_name	库存变更经办人姓名	ANS	50		
	CAST('' AS VARCHAR(6)) AS memo,--memo	备注	ANS	500		
	CAST('0' AS VARCHAR(2)) AS trdn_flag,--trdn_flag	拆零标志	ANS	2		
	s.BillID,s.ord
FROM dbo.vInOutStockTable s WITH(NOLOCK) INNER JOIN dbo.vBillIndex_Query i WITH(NOLOCK) ON i.BillID = s.BillID 
	INNER JOIN dbo.ptype p ON s.PRec=p.Rec
	INNER JOIN dbo.BillType t ON t.billtype = s.BillType
	LEFT JOIN dbo.Employee e ON i.ERec=e.REC
WHERE (@KRec=0 OR s.KRec=@KRec)
AND (@PRec=0 OR PRec=@PRec)
AND p.SS_DM<>''
AND (@BgnDate IS NULL OR @EndDate IS NULL OR i.BillDate BETWEEN @BgnDate AND @EndDate)
AND (@BgnDate IS NULL OR @EndDate IS NULL OR s.BillDate BETWEEN @BgnDate AND @EndDate)
AND NOT EXISTS(SELECT * FROM dbo.YB_GoodsStockChange yb WHERE s.BillID=yb.BillID AND s.ord=yb.BillID)

GO
if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_QingDao_GetInoutStockBill]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
DROP PROCEDURE [dbo].[GP_QingDao_GetInoutStockBill]
GO
CREATE PROCEDURE GP_QingDao_GetInoutStockBill
(
	@KRec	ctInt=0,
	@PRec	ctInt=0,
	@BillType	ctShortStr='',
	@BgnDate	ctDate=NULL,
	@EndDate	ctDate=NULL
)
AS
	SELECT i.BillID,s.ord,i.BillType,s.BillDate,s.PRec,
		p.SS_DM AS med_list_codg,	--医疗目录编码	ANS	50	Y	
		p.UserCode AS fixmedins_hilist_id,	--定点医药机构目录编号	ANS	30	Y	
		p.FullName AS fixmedins_hilist_name,--	定点医药机构目录名称	ANS	200	Y	
		i.BillCode AS dynt_no,	--	随货单号	ANS	50		
		CONVERT(VARCHAR(10),i.BillDate,112)+CAST(i.BillID AS VARCHAR(10))+CAST(s.ord AS VARCHAR(10))	AS fixmedins_bchno,		--	定点医药机构批次流水号	ANS	30	Y	
		b.FullName AS spler_name,--	供应商名称	ANS	200	Y	
		b.AdmitLicenceNO spler_pmtno,--spler_pmtno	供应商许可证号	ANS	50		
		CASE WHEN ISNULL(s.jobnumber,'') = '' THEN '无' ELSE s.jobnumber END  manu_lotnum,--manu_lotnum	生产批号	ANS	30	Y	
		cs.fullname prodentp_name ,--prodentp_name	生产厂家名称	ANS	200	Y	
		CASE WHEN ISNULL(p.permitno,'') = '' THEN '无' ELSE p.permitno END aprvno 	,--aprvno	批准文号	ANS	100	Y	
		CONVERT(VARCHAR(10),s.OutFactoryDate,120) AS manu_date,	--	生产日期	日期型		Y	yyyy-MM-dd
		CONVERT(VARCHAR(10),s.ValidityPeriod,120) AS expy_end,			--expy_end	有效期止	日期型		Y	yyyy-MM-dd
		cast(s.taxprice as numeric(18,6)) finl_trns_pric,--finl_trns_pric	最终成交单价	AN	16,6		
		s.qty purc_retn_cnt ,--purc_retn_cnt	采购/退货数量	AN	16,4	Y	
		CAST('' AS VARCHAR(2))purc_invo_codg,--purc_invo_codg	采购发票编码	ANS	50		
		CAST('' AS VARCHAR(2))purc_invo_no ,--purc_invo_no	采购发票号	ANS	50		
		cast(CASE when p.RX  IN(2,3) then 0 else 1 end AS VARCHAR(3)) rx_flag ,--	处方药标志 
		CONVERT(VARCHAR(20),i.auditingdate,120) AS purc_retn_stoin_time, --purc_retn_stoin_time	采购/退货入库时间	日期时间型		Y	yyyy-MM-dd HH:mm:ss
		e.FullName AS purc_Retn_opter_name,--	采购/退货经办人姓名	ANS	50	Y	
		CAST('0' AS VARCHAR(2))prod_geay_flag,--prod_geay_flag	商品赠送标志	ANS	3		0-否；1-是
		CAST('' AS VARCHAR(2)) memo,--memo	备注	ANS	500		*/
		CAST('' AS VARCHAR(10)) medins_prod_purc_no	--退货单的原单编号
	FROM dbo.vBillIndex_Query i INNER JOIN dbo.vInOutStockTable s ON s.BillID = i.BillID
		INNER JOIN dbo.GetBillTypeTable(@BillType) t ON i.BillType=t.ObjectID
		INNER JOIN dbo.ptype p ON s.PRec=p.Rec AND p.SS_DM<>''
		LEFT JOIN  cstype cs on p.area=cs.rec
		INNER JOIN dbo.vBType b ON s.ProviderId=b.Rec
		INNER JOIN employee e on e.rec=i.erec
        
	WHERE (@BgnDate IS NULL OR @EndDate IS NULL OR i.BillDate BETWEEN @BgnDate AND @EndDate)
	AND (@BgnDate IS NULL OR @EndDate IS NULL OR s.BillDate BETWEEN @BgnDate AND @EndDate)
	AND (@KRec=0 OR i.KRec=@KRec)
	AND (@PRec=0 OR s.PRec=@PRec)
	AND NOT EXISTS(SELECT * FROM YB_BusinessLink yb WHERE yb.BillID=i.BillID AND yb.Ord=s.ord)
GO
if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_QingDao_GetLSH]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
drop procedure [dbo].[GP_QingDao_GetLSH]
GO
CREATE PROCEDURE GP_QingDao_GetLSH
AS
if not Exists(select 1 from YBLSNo_CQ) 	insert into YBLSNo_CQ(YbLSNo) values(1)	
IF EXISTS(SELECT * FROM YBLSNo_CQ WHERE YbLSNo>9990) UPDATE YBLSNo_CQ SET YbLSNo=1
declare @YbLSNo int

UPDATE YBLSNo_CQ SET @YbLSNo=YbLSNo,YbLSNo=YbLSNo+1 

RETURN @YbLSNo
GO
if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_QingDao_GetRetailBack]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
DROP PROCEDURE [dbo].[GP_QingDao_GetRetailBack]
GO
CREATE PROCEDURE GP_QingDao_GetRetailBack
(
	@KRec	ctInt=0,
	@PRec	ctInt=0,
	@BillType	ctShortStr='',
	@BgnDate	ctDate=NULL,
	@EndDate	ctDate=NULL
)
AS
SELECT 
	p.SS_DM AS med_list_codg,--med_list_codg	医疗目录编码	ANS	50	Y	
	p.UserCode AS fixmedins_hilist_id,--fixmedins_hilist_id	定点医药机构目录编号	ANS	30	Y	
	p.FullName AS fixmedins_hilist_name,--fixmedins_hilist_name	定点医药机构目录名称	ANS	200	Y	
	CONVERT(VARCHAR(10),idx.BillDate,112)+CAST(idx.BillID AS VARCHAR(10))+CAST(mx.Ord AS VARCHAR(10))	AS fixmedins_bchno,--fixmedins_bchno	定点医药机构批次流水号	ANS	30	Y	
	CAST('' AS VARCHAR(2)),--setl_id	结算ID	ANS	30		
	CAST('' AS VARCHAR(2)),--psn_no	人员编号	ANS	30		
	CAST('01' AS VARCHAR(2)),--psn_cert_type	人员证件类型	ANS	6		
	CAST('' AS VARCHAR(2)),--certno	证件号码	ANS	50		
	idx.BuyerName,--psn_name	人员姓名	ANS	50		
	mx.JobNumber,--manu_lotnum	生产批号	ANS	30	Y	
	CONVERT(VARCHAR(10),mx.OutFactoryDate,120),--manu_date	生产日期	日期型		Y	yyyy-MM-dd
	CONVERT(VARCHAR(10),mx.validityPeriod,120),--expy_end	有效期止	日期型			yyyy-MM-dd
	cast(CASE when p.RX  IN(2,3) then 0 else 1 end AS VARCHAR(3)) rx_flag,--rx_flag	处方药标志	ANS	3	Y	
	cast(CASE when mx.Unit=101 then 1 else 0 end AS VARCHAR(3)) trdn_flag,--trdn_flag	拆零标志	ANS	3	Y	0-否；1-是
	mx.DiscountPrice AS 	finl_trns_pric,--finl_trns_pric	最终成交单价	AN	16,6		
	mx.Qty AS sel_retn_cnt,--sel_retn_cnt	销售/退货数量	AN	16,4	Y	
	CONVERT(VARCHAR(20),idx.billdate,120) sel_retn_time ,--sel_retn_time	销售/退货时间	日期时间型		Y	yyyy-MM-dd HH:mm:ss
	e.fullname sel_retn_opter_name,--sel_retn_opter_name	销售/退货经办人姓名	ANS	50	Y	
	CAST('' AS VARCHAR(2)) memo,--memo	备注	ANS	500		
	idx.explain AS medins_prod_sel_no,--medins_prod_sel_no	商品销售流水号	ANS	50		
	idx.BillID,mx.Ord
FROM  vRetailBillIndex idx WITH(NOLOCK) INNER JOIN employee e on e.rec=idx.erec
		INNER JOIN dbo.vRetailBill mx WITH(NOLOCK) ON mx.BillID = idx.BillID
		INNER JOIN dbo.ptype p ON mx.PRec=p.Rec AND p.SS_DM<>''
		LEFT JOIN dbo.ROtherBillIndex r ON mx.RxBillId = r.BillID
		LEFT JOIN dbo.Employee e2 ON r.CheckERec = e2.REC				
WHERE idx.draft=0 AND idx.BillType = 152  
	AND  (@BgnDate IS NULL OR @EndDate IS NULL OR idx.BillDate BETWEEN @BgnDate AND @EndDate+1)
	AND NOT EXISTS(SELECT * FROM YB_BusinessLink yb WHERE yb.BillID=idx.BillID AND yb.Ord=mx.Ord AND idx.BillType=yb.BillType)
ORDER BY idx.BillDate DESC
GO
if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_QingDao_GetRetailBill]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
DROP PROCEDURE [dbo].[GP_QingDao_GetRetailBill]
GO
CREATE PROCEDURE GP_QingDao_GetRetailBill
(
	@BillID INT=0,
	@Ord	 INT=0
)
AS
SELECT  
	p.SS_DM AS med_list_codg,		--	医疗目录编码	ANS	50	Y	药品的贯标码
	p.FullName AS med_list_name,	--	医疗目录名称	ANS	200	Y	药品的名称
	CAST(mx.Qty AS NUMERIC(16,4)) AS cnt,		--cnt	数量	AN	16,4	Y	
	mx.DiscountPrice AS pric,--pric	单价	AN	16,6	Y	
	mx.DiscountTotal AS amt,--amt	金额	AN	16,6	Y	=数量*单价
	mx.JobNumber AS manu_lotnum, --manu_lotnum	生产批号	ANS	30	Y	
	CONVERT(VARCHAR(10),mx.OutFactoryDate,120) AS manu_date, --	生产日期	日期型		Y	yyyy-MM-dd
	CONVERT(VARCHAR(10),mx.validityPeriod,120) AS expy_end,	--	有效期止	日期型			yyyy-MM-dd
	cast(CASE when p.RX  IN(2,3) then 0 else 1 end AS VARCHAR(3)) rx_flag ,--rx_flag	处方药标志	ANS	3	Y	
	cast(CASE when mx.Unit=101 then 1 else 0 end AS VARCHAR(3)) trdn_flag ,--trdn_flag	拆零标志	ANS	3	Y	0-否；1-是
	mx.DiscountPrice AS finl_trns_pric,--finl_trns_pric	最终成交单价	AN	16,6		
	rx.BillCode AS rxno,--	处方号	ANS	40		
	CAST('' AS VARCHAR(2)) rx_circ_flag ,--rx_circ_flag	外购处方标志	ANS	3		
	idx.BillCode AS rtal_docno,--	零售单据号	ANS	40	Y	
	CAST('' AS VARCHAR(2)) stoout_no,--stoout_no	销售出库单据号	ANS	40		
	CAST('' AS VARCHAR(2)) bchno,--bchno	批次号	ANS	30		
	CAST('' AS VARCHAR(2)) drug_trac_codg,--drug_trac_codg	药品追溯码	ANS	30		
	p.barcode drug_prod_barc,--drug_prod_barc	药品条形码	ANS	30		
	CAST('' AS VARCHAR(2))shelf_posi,--shelf_posi	货架位	ANS	20		
	CAST('' AS VARCHAR(2)) AS used_frqu_dscr,--sin_dos_dscr	单次剂量描述	ANS	200		
	CAST('' AS VARCHAR(2)) AS used_frqu_dscr,--used_frqu_dscr	使用频次描述	ANS	200		
	rx.Days AS prd_days,--prd_days	周期天数	AN	4,2		
	CAST('' AS VARCHAR(2)) AS medc_way_dscr,--medc_way_dscr	用药途径描述	ANS	200		
	CAST('' AS VARCHAR(2)) AS tcmdrug_used_way--tcmdrug_used_way	中药使用方式	ANS	6	Y	
FROM dbo.vRetailBillIndex idx WITH(NOLOCK) INNER JOIN dbo.vRetailBill mx WITH(NOLOCK) ON mx.BillID = idx.BillID
	INNER JOIN dbo.ptype p ON p.Rec=mx.PRec AND p.SS_DM<>''
	LEFT JOIN dbo.ROtherBillIndex rx ON rx.BillID=mx.RxBillId
WHERE idx.BillID=@BillID AND mx.Ord=@Ord
GO
if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_QingDao_GetRetailIndex]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
DROP PROCEDURE [dbo].[GP_QingDao_GetRetailIndex]
GO
CREATE PROCEDURE GP_QingDao_GetRetailIndex
(
	@KRec	ctInt=0,
	@PRec	ctInt=0,
	@BillType	ctShortStr='',
	@BgnDate	ctDate=NULL,
	@EndDate	ctDate=NULL,
	@BillID int=0
)
AS
DECLARE @DoctorCode	ctShortStr	--药师编号
DECLARE @DoctorNo		ctShortStr	--资格证书号
DECLARE @DoctorName		ctShortStr	--
SET @EndDate=@EndDate+1

SELECT @DoctorCode=e.DoctorCode,@DoctorNo=e.DoctorNo,@DoctorName=e.FullName
FROM dbo.vemployee e 
WHERE IsContactMedical=1 AND EXISTS(SELECT * FROM dbo.PosInfo p WHERE p.PosId=e.Posid AND (ISNULL(@KRec,0)=0 OR p.KRec=@KRec))

IF @@ROWCOUNT=0 SELECT @DoctorCode=e.DoctorCode,@DoctorNo=e.DoctorNo,@DoctorName=e.FullName FROM dbo.vemployee e WHERE IsContactMedical=1

SELECT idx.BillID,mx.Ord,
	p.SS_DM AS med_list_codg,--med_list_codg	医疗目录编码	ANS	50	Y	
	p.UserCode AS fixmedins_hilist_id,	--fixmedins_hilist_id	定点医药机构目录编号	ANS	30	Y	
	p.FullName AS fixmedins_hilist_name,	--fixmedins_hilist_name	定点医药机构目录名称	ANS	200	Y	
	CONVERT(VARCHAR(10),idx.BillDate,112)+CAST(idx.BillID AS VARCHAR(10)) fixmedins_bchno,	--fixmedins_bchno	定点医药机构批次流水号	ANS	30	Y	
	CAST('' AS VARCHAR(2)) prsc_dr_cert_type, --	开方医师证件类型 
	CAST('' AS VARCHAR(2)) prsc_dr_certno,-- 	开方医师证件号码
	ISNULL(r.DoctorName,e.FullName) prsc_dr_name, 	--开方医师姓名 
	CAST('' AS VARCHAR(2)) phar_cert_type, 	--药师证件类型	--phar_cert_type	药师证件类型	ANS	6		参照人员证件类型
	ISNULL(@DoctorCode,'') phar_certno,	--phar_certno	药师证件号码	ANS	50		
	ISNULL(@DoctorName,'') phar_name, 	--phar_name	药师姓名	ANS	50	Y	
	ISNULL(@DoctorNo,'')  phar_prac_cert_no,	--phar_prac_cert_no	药师执业资格证号	ANS	50	Y	
	CAST('' AS VARCHAR(2)) hi_feesetl_type,	--hi_feesetl_type	医保费用结算类型	ANS	6		
	CAST('' AS VARCHAR(2))  setl_id,	--setl_id	结算ID	ANS	30		医保病人必填
	ISNULL(r.BillCode,idx.BillCode)  mdtrt_sn,	--mdtrt_sn	就医流水号	ANS	30	Y	机构生成内唯一就诊流水
	CAST('' AS VARCHAR(2))  psn_no,	--psn_no	人员编号	ANS	30		
	'01' AS  psn_cert_type, 	--psn_cert_type	人员证件类型	ANS	6		
	CAST('' AS VARCHAR(2)) certno ,	--certno	证件号码	ANS	50		
	ISNULL(idx.BuyerName,'') psn_name ,	--psn_name	人员姓名	ANS	50		
	mx.JobNumber AS manu_lotnum,	--manu_lotnum	生产批号	ANS	30	Y	
	CONVERT(VARCHAR(10),mx.OutFactoryDate,120) AS manu_date, --	生产日期	日期型		Y	yyyy-MM-dd
	CONVERT(VARCHAR(10),mx.validityPeriod,120) AS expy_end,	--	有效期止	日期型			yyyy-MM-dd
	cast(CASE when p.RX  IN(2,3) then 0 else 1 end AS VARCHAR(3)) rx_flag ,	--rx_flag	处方药标志	ANS	3	Y	
	cast(CASE when mx.Unit=101 then 1 else 0 end AS VARCHAR(3)) trdn_flag ,	--trdn_flag	拆零标志	ANS	3	Y	0-否；1-是
	mx.DiscountPrice AS finl_trns_pric,	--finl_trns_pric	最终成交单价	AN	16,6		
	ISNULL(r.BillCode,'') AS rxno,	--rxno	处方号	ANS	40		
	CAST('' AS VARCHAR(2)) rx_circ_flag ,	--rx_circ_flag	外购处方标志	ANS	3		
	idx.BillCode AS rtal_docno,	--rtal_docno	零售单据号	ANS	40	Y	
	CAST('' AS VARCHAR(2)) stoout_no,	--stoout_no	销售出库单据号	ANS	40		
	CAST('' AS VARCHAR(2)) bchno,	--bchno	批次号	ANS	30		
	CAST('' AS VARCHAR(2)) drug_trac_codg,	--drug_trac_codg	药品追溯码	ANS	30		
	p.barcode drug_prod_barc,	--drug_prod_barc	药品条形码	ANS	30		
	CAST('' AS VARCHAR(2))shelf_posi,	--shelf_posi	货架位	ANS	20		
	mx.AssQty AS sel_retn_cnt,	--sel_retn_cnt	销售/退货数量	AN	16,4	Y	
	CONVERT(VARCHAR(20),idx.billdate,120) sel_retn_time ,	--sel_retn_time	销售/退货时间	日期时间型		Y	yyyy-MM-dd HH:mm:ss
	e.fullname sel_retn_opter_name,	--sel_retn_opter_name	销售/退货经办人姓名	ANS	50	Y	
	CAST(idx.explain AS VARCHAR(2)) memo	--memo	备注	ANS	500		
FROM  vRetailBillIndex idx WITH(NOLOCK) INNER JOIN employee e on e.rec=idx.erec
		INNER JOIN dbo.vRetailBill mx WITH(NOLOCK) ON mx.BillID = idx.BillID
		INNER JOIN dbo.ptype p ON p.Rec=mx.PRec AND p.SS_DM<>''
		LEFT JOIN dbo.ROtherBillIndex r ON mx.RxBillId = r.BillID
		LEFT JOIN dbo.Employee e2 ON r.CheckERec = e2.REC				
WHERE idx.draft=0 AND idx.BillType = 151   
				AND (ISNULL(@BillID,0)=0 OR idx.BillID=@billid)
				AND  (@BgnDate IS NULL OR @EndDate IS NULL OR idx.BillDate BETWEEN @BgnDate AND @EndDate)
				AND NOT EXISTS(SELECT * FROM YB_BusinessLink yb WHERE yb.BillID=idx.BillID AND idx.BillType=yb.BillType)
ORDER BY idx.BillDate DESC	

GO
