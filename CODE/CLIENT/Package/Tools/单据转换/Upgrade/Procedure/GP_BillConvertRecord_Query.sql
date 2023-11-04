if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_BillConvertRecord_Query]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
drop procedure [dbo].GP_BillConvertRecord_Query
GO
CREATE PROCEDURE GP_BillConvertRecord_Query
(
	@BillType	VARCHAR(500)='11,45',
	@BRec			ctInt=0,
	@ERec			ctInt=0,
	@BillCode	ctShortStr='',
	@SendWay	ctShortStr='',
	@Comment	ctComment='',
	@OnlyBill		ctInt=0,
	@BgnDate	ctDate,
	@EndDate	ctDate
)
AS
	SELECT i.BillID	,i.BillType,i.BillDate,i.BillCode,b.UserCode AS BCode,b.FullName AS BName,e.UserCode AS ECode,e.FullName AS EName,i.Comment,i.explain,i.SendWay,
		CASE WHEN i.BillType = 45 THEN -i.totalqty ELSE i.totalqty END AS totalqty,
		CASE WHEN i.BillType = 45 THEN -i.totalmoney ELSE i.totalmoney END AS totalmoney
	FROM dbo.vBillIndex_Query i INNER JOIN dbo.GetBillTypeTable(@BillType) t ON i.BillType=t.ObjectID 
		INNER JOIN dbo.btype b ON i.BRec=b.Rec AND b.deleted=0
		INNER JOIN dbo.employee e ON i.ERec=e.REC AND e.deleted=0
	WHERE i.draft=0 AND i.RedWord=0 AND BillDate BETWEEN @BgnDate AND @EndDate
	AND (@BRec=0 OR i.BRec=@BRec)
	AND (@ERec=0 OR i.ERec=@ERec)
	AND i.JsYetotal>0	--只有未结算完成的单据才显示
	AND (@OnlyBill=1 OR NOT EXISTS(SELECT * FROM dbo.BillConvertRecord r WHERE i.BillID=r.BillID AND i.BillType=r.BillType))
	AND i.Comment LIKE '%'+@Comment+'%'
	AND (@BillCode='' OR i.BillCode LIKE '%'+ @BillCode + '%')
	AND (@SendWay='' OR b.SendWay=@SendWay)
GO
