if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_Excel_QueryBuyIndex]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
drop procedure [dbo].GP_Excel_QueryBuyIndex
GO
CREATE PROC GP_Excel_QueryBuyIndex
(
	@UniqueBillid	ctUID=NULL
)
AS
SELECT s.* ,i.BillCode,i.BillDate,i.BRec
FROM 
	(SELECT UniqueBillid,BuyDate,BuyUnit,ERec,MAX(BillDate) AS DoDate,COUNT(1) AS BillCount,SUM(Qty) AS Qty,SUM(BuyTaxTotal) AS BuyTaxTotal,MAX(BuyBillID) AS BuyBillID
	FROM dbo.Excel_ImportTempBill  
	WHERE UniqueBillid=@UniqueBillid OR @UniqueBillid IS NULL
	GROUP BY UniqueBillid,BuyDate,BuyUnit,ERec) s LEFT JOIN dbo.BillIndex i ON s.BuyBillID=i.BillID
	ORDER BY s.DoDate
GO