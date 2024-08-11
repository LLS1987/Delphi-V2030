if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_QingHai_GetOutStockBill]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
DROP PROCEDURE [dbo].[GP_QingHai_GetOutStockBill]
GO
CREATE PROCEDURE GP_QingHai_GetOutStockBill
(
	@BgnDate	ctDate,
	@EndDate	ctDate,
	@BillType	ctComment=''
)
AS
DECLARE @SelfUnitRec	ctInt,@SelfUnitName	ctName
SELECT @SelfUnitRec = CAST(SubValue AS INT) FROM dbo.sysdata WHERE SubName = 'SelfUnitRec' AND ISNUMERIC(SubValue)=1
SELECT @SelfUnitName=FullName FROM dbo.btype WHERE Rec=@SelfUnitRec
IF @BillType IS NULL SET @BillType='151,152,11,34'
SELECT	i.BillID,o.ord,YZMC = b.FullName,		--业主名称  Y 青海省大药房有限公司
	KPSJ = CONVERT(VARCHAR(10),i.BillDate,120),	--开票时间
	YWDJBH = i.BillCode,		--业务单据编号
	CFDBH	   = i.BillCode,		--拆分单编号
	FPDBH		= i.BillCode,		--分配单编号 
	DDLX		= '出库',					--订单类型 
	DJXFSJ		=  CONVERT(VARCHAR(10),i.BillDate,120),	--单据下发时间 
	JSSJ			=	CONVERT(VARCHAR(10),i.AuditingDate,120),	--结算时间 
	DWBH		= b.UserCode,			--单位编号 
	DWMC		= b.FullName,			--单位名称 
	EJDWMC	= b.FullName,			--二级单位名称 
	EJDWBH	=b.UserCode,			--二级单位编号 
	ZGSYWZGBM	= '',					--子公司业务主管部门 
	SPJTZGBM		= '',					--商品集团主管部门  
	KHYWLB	= '',		--客户业务类别 
	SPMC   = p.FullName,		--商品名称  string Y 阿莫西林 
	SPBM	= p.UserCode,		--商品编码  string Y 青药202402020000001
	TYMC	= p.Name,			--通用名称  string Y 阿莫西林 
	SPLX		=	p.Type,				--剂型  string Y 口服
	SPGG	=	p.Standard,		--商品规格 SPGG string Y 盒 
	BZDW	= p.Unit1,	--包装单位  string Y 盒
	BZSL		= o.Qty,	--包装数量 BZSL string Y 2000 
	SJSL		= o.Qty,	--实际数量 ZJS string Y 100 
	JE			= o.TaxTotal,	--金额
	KB		= '',	--库别 
	KFBH	= k.FullName,	--库房编号 
	QYBH	= '',					--区域编号 
	XSHW	= g.fullname,	--显示货位 
	CLJHY	= '',					--拆零拣货员 
	CLSQSJ='',					--拆零索取时间 
	CLQRSJ='',					--拆零确认时间 
	NFHY	='',					--内复核员 
	NFHSQSJ='',				--内复核索取时间 
	NFHQRSJ='',				--内复核确认时间 
	PXH	='',						--拼箱号 
	ZZXBH='',					--周转箱编号 
	ZJJHY='',						--整件拣货员 
	ZJSQSJ='',					--整件索取时间 
	ZJQRSJ='',					--整件确认时间 
	TPTM='',						--托盘条码 
	WFHY='',						--外复核员 
	WFHSQSJ='',				--外复核索取时间  datetime Y 2024 年 05 月 05日 
	WFHQRSJ='',				--外复核确认时间  datetime Y 2024 年 05 月 05日
	YWLX='',	--业务类型  string Y 
	ZYLB='',	--作业类别  string Y 
	ZYFS ='',	--作业方式 string Y 
	XSLX='',	--销售类型  string Y 零售 
	THFS='',	--提货方式  string Y 自取
	FHTZCWBH='',		--复核台暂存位编号 
	ZCQZZH='',			--暂存区终止号
	ZHSJJS=o.Qty,		--折合实际件数 
	JHSL=o.Qty,			--计划数量 
	JHLSS=0,				--计划零散数 
	TJJHZT='',			--提前拣货状态 
	BHIDH='',				--补货 ID 号 
	JXLBH='',				--拣选篮编号 
	DHBH='',				--钉盒编号 
	SCQY=cs.FullName,		--生产企业 
	DDY='',						--调度员 
	BZ	= i.Comment,		--备注 
	TMLSH=p.BarCode,		--条码流水号 
	ZLSCSJ='',					--指令生成时间 
	LCPBS='',						--冷藏品标识 
	ZTH='',							--站台号 
	TMS='',						--条目数 
	ZHJHJS='',					--折合计划件数 
	YZBH='',						--业主编号 
	ZCQQSH='',					--暂存区起始号 
	RWZT='',						--任务状态 
	SCRQ=o.OutFactoryDate,		--生产日期 
	YXQZ=o.ValidityPeriod,			--有效期至 
	YWY=e.FullName,					--业务员 
	DJ=o.TaxPrice,								--单价 
	PZWH=p.PermitNo,				--批准文号 	
	SJID     = CONVERT(VARCHAR(10),i.BillDate,112)+'_'+CAST(o.BillID AS VARCHAR(10))+'_'+CAST(o.ord AS VARCHAR(10)),	--事件 ID
	SJLY		=	ISNULL(@SelfUnitName,''),	--数据来源
	SJTSSJ = CONVERT(VARCHAR(10),GETDATE(),120),	--数据推送时间
	SJLX		= 'I',	--事件类型:I（代表新增）、U（代表修改）、D（代表删除）
	SSJDGLJ = '青海省药品监督管理局'	--所属监督管理局
FROM dbo.vInOutStockTable o INNER JOIN dbo.vBillIndex_Query i ON i.BillID = o.BillID
	INNER JOIN dbo.btype b ON i.BRec=b.Rec
	INNER JOIN dbo.ptype p ON o.PRec=p.Rec
	INNER JOIN dbo.Stock k ON i.KRec=k.Rec LEFT JOIN dbo.klocation g ON o.GRec=g.Rec
	LEFT JOIN dbo.cstype cs ON p.Area=cs.Rec
	LEFT JOIN dbo.cstype cl ON p.LicenseHolder=cl.Rec
	INNER JOIN dbo.employee e ON e.REC=i.ERec
	INNER JOIN dbo.employee ec ON i.checke=ec.REC
	INNER JOIN dbo.GetBillTypeTable(@BillType) t ON i.BillType=t.ObjectID
WHERE i.BillDate BETWEEN @BgnDate AND @EndDate
AND o.BillDate BETWEEN @BgnDate AND @EndDate
AND NOT EXISTS(SELECT * FROM QingHai_UploadBillRecord r WHERE r.BillID=o.BillID AND r.Ord=o.ord)
GO
