
if NOT EXISTS (select * from dbo.sysobjects where id = object_id(N'[dbo].[BillConvertRecord]') and OBJECTPROPERTY(id, N'IsTable') = 1)
CREATE TABLE BillConvertRecord
(
	BillID	ctInt,
	BillType	ctInt	PRIMARY KEY(BillID,BillType),
	DescBill	ctInt,
	LastERec	ctInt,
	LastDate	DATETIME,
    DoCount	ctInt
)
GO
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
if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_ConvertBill]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
drop procedure [dbo].GP_ConvertBill
GO
CREATE PROCEDURE GP_ConvertBill
(
	@BillID	ctInt,
	@BillType	ctInt,
	@DescBill	ctInt,
	@ERec			ctInt
)
AS
DECLARE @NewBillID	ctInt
DECLARE @TotalMoney	ctTotal
DECLARE @BillDate	ctDate,@BillCode	ctShortStr,@Comment	ctComment,@BRec ctInt
DECLARE @BillE	ctInt

SELECT @BillDate=CONVERT(VARCHAR(10),GETDATE(),120),@BRec=BRec,@TotalMoney=CASE WHEN BillType=45 THEN -totalmoney ELSE  totalmoney END,
	--@Comment='销售单【'+BillCode+'】，生成的收款单：'+CAST(totalmoney AS VARCHAR(20)),
	@Comment='',
	@BillE=ERec--,@ERec=ERec
FROM dbo.vBillIndex_Query WHERE BillID=@BillID

EXEC dbo.GP_CreateBillCode @nBillId=0,@nBillType = @DescBill,@szBillCode = @BillCode OUTPUT

EXEC @NewBillID=dbo.Gp_InsertBillIndex @BillDate = @BillDate,@BillCode = @BillCode,@BillType = 4,@Comment = @Comment,@BREc = @BRec,@ERec = @BillE,
	@CheckE = @ERec,@ifchecked = 1, @BillE = @ERec,@TotalMoney = @TotalMoney, @TotalQty = 0,@posid = 0,@OfficeId = 0,@OutStockLaw = 'z'

--exec @NewBillID=Gp_InsertBillIndex @BillDate,@BillCode,4,@Comment,0,2,@ERec,0,0,0,0,@ERec,@TotalMoney,$0.0000,@TotalMoney,$0.0000,$0.0000,$0.0000,'',0,0,default,0,0,'',0,0,0,NULL,0,'z','',default,1,NULL,NULL,'','5',0,0,0,0,0,0,'','','',NULL,'','','',default,default,default,'','',@ERec,default,0,0,$0.0000,0,0,0,0,-1
IF @NewBillID<=0 OR @@ERROR>0 RETURN @NewBillID

DECLARE @ARec	ctInt
SELECT @ARec=Rec FROM dbo.Atype WHERE UserCode = '10020011' AND deleted=0
SET @ARec=ISNULL(@ARec,5)

exec Gp_Insertmoneybill @NewBillID,1,@ARec,@TotalMoney,''
exec gp_InsertJSBILLDETAIL @BRec,@NewBillID,@BillID,@TotalMoney,@BillType,@TotalMoney,1,0
exec GP_UpdateJSFlag @NewBillID,'5',0
exec gp_UpdateBillChecked @NewBillID,0,0

EXEC dbo.GP_InsertBillConvertRecord @BillID = @BillID,@BillType = @BillType,@DescBill = @DescBill,@LastERec = @ERec

RETURN @NewBillID
GO
if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_InsertBillConvertRecord]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
drop procedure [dbo].GP_InsertBillConvertRecord
GO
CREATE PROC GP_InsertBillConvertRecord
(
	@BillID	ctInt,
	@BillType	ctInt,
	@DescBill	ctInt,
	@LastERec	ctInt
)
AS
IF NOT EXISTS(SELECT * FROM dbo.BillConvertRecord WHERE BillID=@BillID AND BillType=@BillType)
	INSERT INTO dbo.BillConvertRecord(BillID,BillType,DescBill,LastERec,LastDate,DoCount) VALUES(@BillID,@BillType,@DescBill,@LastERec,GETDATE(),1)
ELSE
	UPDATE dbo.BillConvertRecord SET LastERec=@LastERec,LastDate=GETDATE(),DoCount=DoCount+1 WHERE BillID=@BillID AND BillType=@BillType

GO
