if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_SPDA_QueryBill]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
drop procedure [dbo].GP_SPDA_QueryBill
GO

CREATE PROC GP_SPDA_QueryBill
(
	@PosID	ctInt=0,
	@BgnDate	ctDate,
	@EndDate	ctDate,
	@Day INT=0,
	@OnlyRX		ctInt=0,
	@OnlyBuyer	ctInt=0
)
AS
SET @Day=ISNULL(@Day,0)
SET @OnlyBuyer=ISNULL(@OnlyBuyer,0)

IF @Day>0
BEGIN
	SET @EndDate=CONVERT(VARCHAR(10),GETDATE(),120)
	SET @BgnDate=DATEADD(DAY,-@Day,@EndDate)
END

SELECT TOP 1000 drugType= CASE WHEN p.RX=1 THEN 'YB' WHEN dbo.GetBitValue(p.Flags,23)=1 THEN 'YC' ELSE 'YD' END,	--药品类型(YB处方药,YC含麻黄碱,YD含麻精)
	drugName=p.FullName,
	quantity	= CEILING(b.AssQty),
	purchaserName = i.BuyerName,	--'购药人'
	purchaserld	= ISNULL(buyer.BuyerNo,''), --身份证
	purchaserPhone=ISNULL(buyer.Phone,''),--电话
	purchaserResidence=ISNULL(buyer.Adress,''),--住址
	drugstoreName=pos.StoreName,--药店名称
	pos.AppKey,pos.Password,b.billid,b.ord,i.BillCode,
	drugstoreTyshxydm=pos.StoreCode,--社会统一信用代码
	saleTime=i.BillDate,
	approvalNo=p.PermitNo,
	dataSource='1'				--数据来源（1 ERP系统对接，2互联网采集，3其它)
FROM dbo.vRetailBillIndex i WITH(NOLOCK) INNER JOIN dbo.vRetailBill b WITH(NOLOCK) ON b.BillID = i.BillID
	INNER JOIN dbo.ptype p WITH(NOLOCK) ON b.PRec=p.Rec
	INNER JOIN SPDA_PosSet pos ON i.Posid=pos.PosID
	LEFT JOIN dbo.RetailBuyer buyer WITH(NOLOCK) ON buyer.BillID = i.BillID AND buyer.RetailType=0	
WHERE i.draft=0 
AND i.BillDate BETWEEN @BgnDate AND @EndDate+1
AND (@Day=0 OR p.PermitNo<>'')	--自动传输的时候过滤批准文号为空的数据
AND (@PosID=0 OR i.Posid=@PosID)
AND (@OnlyRX=0 OR p.RX=1)
--AND (@OnlyBuyer=0 OR buyer.BillID IS NOT NULL)
AND  (@OnlyBuyer=0 OR dbo.GetBitValue(p.Flags,23)=1)
AND NOT EXISTS(SELECT * FROM SPDA_TransBillRecord r WITH(NOLOCK) WHERE r.BillID=i.BillID AND r.Ord=b.ord)
ORDER BY i.BillDate,b.BillID
GO