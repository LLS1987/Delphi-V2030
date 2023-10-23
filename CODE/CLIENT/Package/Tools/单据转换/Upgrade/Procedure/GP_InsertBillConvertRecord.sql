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
