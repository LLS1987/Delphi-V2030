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