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