if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_Excel_QuerySaleIndex]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
drop procedure [dbo].GP_Excel_QuerySaleIndex
GO
CREATE PROC GP_Excel_QuerySaleIndex
(
	@UniqueBillid	ctUID=NULL
)
AS
SELECT s.* ,i.BillCode,i.BillDate,i.BRec
FROM 
	(SELECT BuyBillID,SaleBillID,COUNT(1) AS BillCount,SUM(Qty) AS Qty,SUM(SaleTaxTotal) AS SaleTaxTotal
	FROM dbo.Excel_ImportTempBill  
	WHERE UniqueBillid=@UniqueBillid OR @UniqueBillid IS NULL
	GROUP BY BuyBillID,SaleBillID) s LEFT JOIN dbo.BillIndex i ON s.SaleBillID=i.BillID
WHERE s.SaleBillID>0

GO