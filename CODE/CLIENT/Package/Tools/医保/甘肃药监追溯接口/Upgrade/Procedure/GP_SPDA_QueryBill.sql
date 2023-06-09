if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_SPDA_QueryBill]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
drop procedure [dbo].GP_SPDA_QueryBill
GO

CREATE PROC GP_SPDA_QueryBill
(
	@PosID	ctInt=0,
	@BgnDate	ctDate,
	@EndDate	ctDate,
	@Day INT=0
)
AS
SET @Day=ISNULL(@Day,0)
SELECT drugType= CASE WHEN p.RX=1 THEN 'YB' WHEN dbo.GetBitValue(p.Flags,23)=1 THEN 'YC' ELSE 'YD' END,	--药品类型(YB处方药,YC含麻黄碱,YD含麻精)
	drugName=p.FullName,
	quantity	= b.Qty,
	purchaserName = i.BuyerName,	--'购药人'
	purchaserld	= buyer.BuyerNo, --身份证
	purchaserPhone=buyer.Phone,--电话
	purchaserResidence=buyer.Adress,--住址
	drugstoreName=pos.StoreName,--药店名称
	pos.AppKey,pos.Password,b.billid,b.ord,i.BillCode,
	drugstoreTyshxydm=pos.StoreCode,--社会统一信用代码
	saleTime=i.BillDate,
	approvalNo=p.PermitNo,
	dataSource='1'				--数据来源（1 ERP系统对接，2互联网采集，3其它)
FROM dbo.vRetailBillIndex i INNER JOIN dbo.vRetailBill b ON b.BillID = i.BillID
	INNER JOIN dbo.ptype p ON b.PRec=p.Rec
	INNER JOIN dbo.RetailBuyer buyer ON buyer.BillID = i.BillID AND buyer.RetailType=0
	INNER JOIN SPDA_PosSet pos ON i.Posid=pos.PosID
WHERE (@Day>0 OR i.BillDate BETWEEN @BgnDate AND @EndDate+1)
AND (@Day=0 OR DATEDIFF(DAY,BillDate,GETDATE())<@Day)
AND (@PosID=0 OR i.Posid=@PosID)
AND p.RX=1
AND NOT EXISTS(SELECT * FROM SPDA_TransBillRecord r WHERE r.BillID=i.BillID AND r.Ord=b.ord)
ORDER BY i.BillDate,b.BillID
GO