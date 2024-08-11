if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_QingHai_GetInStockBill]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
DROP PROCEDURE [dbo].[GP_QingHai_GetInStockBill]
GO
CREATE PROCEDURE GP_QingHai_GetInStockBill
(
	@BgnDate	ctDate,
	@EndDate	ctDate,
	@BillType	ctComment=''
)
AS
DECLARE @SelfUnitRec	ctInt,@SelfUnitName	ctName
SELECT @SelfUnitRec = CAST(SubValue AS INT) FROM dbo.sysdata WHERE SubName = 'SelfUnitRec' AND ISNUMERIC(SubValue)=1
SELECT @SelfUnitName=FullName FROM dbo.btype WHERE Rec=@SelfUnitRec

SELECT	i.BillID,o.ord,DHRQ = CONVERT(VARCHAR(10),i.BillDate,120),	--到货日期 DHRQ datetime Y 2024 年 05 月 05日 错误示范：2024年 5 月 5 日
	GHDW = b.FullName,		--供货单位 GHDW string Y 青海省大药房有限公司
	SPMC   = p.FullName,		--商品名称  string Y 阿莫西林 
	SPBM	= p.UserCode,		--商品编码  string Y 青药202402020000001
	TYMC	= p.Name,			--通用名称  string Y 阿莫西林 
	JX			=	p.Type,				--剂型  string Y 口服
	SPGG	=	p.Standard,		--商品规格 SPGG string Y 盒 
	BZDW	= p.Unit1,	--包装单位  string Y 盒
	RKLX	= '',	--入库类型 RKLX string Y 
	BZSL		= o.Qty,	--包装数量 BZSL string Y 2000 
	ZJS		= o.Qty,	--整件数 ZJS string Y 100 
	SCQY	= cs.FullName,	--生产企业 SCQY string Y 青海省大药房有限公司
	PZWH  = p.PermitNo,
	CPPH	=	o.JobNumber,				--产品批号 
	SCRQ	= o.OutFactoryDate,		--生产日期
	YXQZ	= o.ValidityPeriod,			--有效期至
	ZYCD	=	p.ProArea,					--中药产地
	JSYY		= '',									--拒收原因 
	ZLZK    = '良',								--质量状况
	YSJG		= '合格',							--验收结果
	YSY		= ec.FullName,				--验收员 
	YSHGSL = o.Qty,							--验收合格数量
	CYR		= cl.FullName,					--持有人/注册人/备案人
	KHBH	= '',									--客户编号
	DJBH	= i.BillCode,						--单据编号
	JYJM	= '',									--经营简码
	SJID     = CONVERT(VARCHAR(10),i.BillDate,112)+'_'+CAST(o.BillID AS VARCHAR(10))+'_'+CAST(o.ord AS VARCHAR(10)),	--事件 ID
	SJLY		=	ISNULL(@SelfUnitName,''),	--数据来源
	SJTSSJ = CONVERT(VARCHAR(10),GETDATE(),120),	--数据推送时间
	SJLX		= 'I',	--事件类型:I（代表新增）、U（代表修改）、D（代表删除）
	SSJDGLJ = '青海省药品监督管理局'	--所属监督管理局
FROM dbo.vInOutStockTable o INNER JOIN dbo.vBillIndex_Query i ON i.BillID = o.BillID
	INNER JOIN dbo.btype b ON i.BRec=b.Rec
	INNER JOIN dbo.ptype p ON o.PRec=p.Rec
	LEFT JOIN dbo.cstype cs ON p.Area=cs.Rec
	LEFT JOIN dbo.cstype cl ON p.LicenseHolder=cl.Rec
	INNER JOIN dbo.employee ec ON i.checke=ec.REC
	INNER JOIN dbo.GetBillTypeTable(@BillType) t ON i.BillType=t.ObjectID
WHERE i.BillDate BETWEEN @BgnDate AND @EndDate
AND o.BillDate BETWEEN @BgnDate AND @EndDate
AND NOT EXISTS(SELECT * FROM QingHai_UploadBillRecord r WHERE r.BillID=o.BillID AND r.Ord=o.ord)
GO
