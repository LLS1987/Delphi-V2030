if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_Excel_ImportBill]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
drop procedure [dbo].GP_Excel_ImportBill
GO
CREATE PROC GP_Excel_ImportBill
(
	@UniqueBillid	ctUID,
	@KRec	ctInt=0,
	@ERec	ctInt=0,
	@RetValue	ctComment=''	OUTPUT
)
AS
	IF NOT EXISTS(SELECT * FROM Excel_ImportTempBill WHERE UniqueBillid=@UniqueBillid) RETURN -1
	IF EXISTS(SELECT * FROM Excel_ImportTempBill WHERE UniqueBillid=@UniqueBillid AND BuyBillID>0) RETURN -2
	--如果导入的数据里面有 到期日期 在做单日期之前的，需要给下预警提示
	IF EXISTS(SELECT * FROM Excel_ImportTempBill WHERE UniqueBillid=@UniqueBillid AND ValidityPeriod<BuyDate) RETURN -3
	--经手人，仓库名称，审核人   都取系统对应的  001  
	IF @KRec IS NULL OR @KRec=0 SELECT @KRec=Rec FROM dbo.Stock WHERE UserCode='001' AND deleted=0 AND sonnum=0
	IF @ERec IS NULL OR @ERec=0 SELECT @ERec=ERec FROM Excel_ImportTempBill WHERE UniqueBillid=@UniqueBillid
	declare @bCurrentTran  INT SET @bCurrentTran=@@TRANCOUNT

	SELECT *,0 ProviderId,0 BRec,0 PRec 
		INTO #ImportTempBill 
	FROM dbo.Excel_ImportTempBill WHERE UniqueBillid=@UniqueBillid

	UPDATE t SET t.ProviderId=b.Rec,t.BRec=s.Rec,t.PRec=p.Rec
	FROM #ImportTempBill t INNER JOIN dbo.btype b ON t.BuyUnit=b.FullName AND b.deleted=0 AND b.sonnum=0
		INNER JOIN dbo.btype s ON t.SaleUnit=s.FullName AND s.deleted=0 AND s.sonnum=0
		INNER JOIN dbo.ptype p ON t.PStandard=p.Standard AND p.deleted=0 AND p.sonnum=0

	IF EXISTS(SELECT * FROM #ImportTempBill WHERE ProviderId=0) RETURN -2
	IF EXISTS(SELECT * FROM #ImportTempBill WHERE BRec=0) RETURN -3
	IF EXISTS(SELECT * FROM #ImportTempBill WHERE PRec=0) RETURN -4
	DECLARE @BillDate	ctBillDate,@ProviderId ctInt,@BRec	ctInt,@BillE	ctInt,@TotalQty	ctQty,@TotalMoney	ctTotal,@SaleDate	ctBillDate
	DECLARE @BuyBillCode	ctShortStr,@BillCode	ctShortStr,@Comment	ctComment,@Explain	ctComment,@BuyBillID INT,@BuyUnit	ctName,@SaleBillID INT,@SaleUnit	ctName
	DECLARE @szPId VARCHAR(50),@n INT,@BillDetailCount INT,@MoneyDate   ctdate
IF @bCurrentTran=0 BEGIN TRAN
	DECLARE c_buybill CURSOR FOR SELECT BuyDate,ProviderId,ERec,SUM(Qty) AS Qty,SUM(BuyTaxTotal) AS BuyTaxTotal FROM dbo.#ImportTempBill	GROUP BY BuyDate,ProviderId,ERec
	OPEN c_buybill FETCH NEXT FROM c_buybill INTO @BillDate,@ProviderId,@BillE,@TotalQty,@TotalMoney
	WHILE @@FETCH_STATUS=0
	BEGIN
		SELECT @Comment='Excel导入：'+FullName,@Explain='' FROM dbo.employee WHERE REC=@BillE
		SELECT @Explain=@Explain+BuyExplain+',' FROM #ImportTempBill WHERE ProviderId=@ProviderId AND BuyDate=@BillDate
		SELECT @BuyUnit=FullName FROM dbo.btype WHERE Rec=@ProviderId	

		EXEC dbo.z_CteateBillCode @nBillId = 0,@nBillType = 34,@szBillCode = @BuyBillCode OUTPUT
		--生成
		EXEC @BuyBillID=dbo.Gp_InsertBillIndex @BillDate = @BillDate,@BillCode = @BuyBillCode,@BillType = 34,@Comment = @Explain,
			@ARec = 0,@BREc = @ProviderId,@ERec = @ERec,@KRec = @KRec,@CheckE = @ERec,
			@ifchecked = 1,@BillE = @ERec,@TotalMoney = @TotalMoney,@TotalQty = @TotalQty,@TotalInMoney = 0,@BenefitMoney = 0,@jsyetotal = 0,@Tax = -10,
			@Explain = @Explain,@MoneyDate=@BillDate
		IF @BuyBillID<=0 GOTO Error_BuyIndex
		INSERT INTO dbo.BuyBill(BillID,KRec,GRec,PRec,Qty,AssQty,SalePrice,AssSalePrice,discount,DiscountPrice,AssDiscountPrice,total,
			tax,TaxPrice,AssTaxPrice,TaxTotal,CostPrice,jobnumber,OutFactoryDate,ValidityPeriod,JobCode,GermJobNumber,CheckReportNo,ProviderId,PtypeSource,
			comment,Eligible,unit,UnitRate,retailprice,ord,BackQty,StockUniqueid,PriceDiffQty,PriceType,InvoceTotal,InvoceTag)
		SELECT @BuyBillID,@KRec,0,PRec,Qty,Qty,BuyPrice,BuyPrice,100,BuyPrice,BuyPrice,BuyTotal ,
			BuyTax,BuyTaxPrice,BuyTaxPrice,BuyTaxTotal,BuyPrice,Jobnumber,OutFactoryDate,ValidityPeriod,'','','',@ProviderId,0,
			'','',1,1,0,ID,0,NULL,0,0,0,0
		FROM #ImportTempBill WHERE ProviderId=@ProviderId AND BuyDate=@BillDate
		IF @@ROWCOUNT=0 OR @@ERROR>0 GOTO Error_BuyBill
		UPDATE Excel_ImportTempBill SET BuyBillID=@BuyBillID WHERE UniqueBillid=@UniqueBillid AND BuyDate=@BillDate AND BuyUnit=@BuyUnit
		--采购单过账
		EXEC @n=dbo.Gp_Auditing @BillId = @BuyBillID,@Audit = @ERec,@szPId = @szPId OUTPUT
		IF @n<0 GOTO 	Error_BuyAudit
		--生成销售单
		DECLARE c_salebill CURSOR FOR SELECT SaleDate,BRec,SUM(Qty) AS Qty,SUM(SaleTaxTotal) AS BuyTaxTotal 
			FROM dbo.#ImportTempBill WHERE BuyDate=@BillDate AND ProviderId=@ProviderId	GROUP BY SaleDate,BRec
		OPEN c_salebill FETCH NEXT FROM c_salebill INTO @SaleDate,@BRec,@TotalQty,@TotalMoney
		WHILE @@FETCH_STATUS=0
		BEGIN
			SELECT @Comment='Excel导入：'+FullName+'；对应采购：'+@BuyBillCode,@Explain='' FROM dbo.employee WHERE REC=@BillE
			SELECT @Explain=@Explain+BuyExplain+',' FROM #ImportTempBill WHERE ProviderId=@ProviderId AND BuyDate=@BillDate AND BRec=@BRec AND SaleDate=@SaleDate
			SELECT @SaleUnit=FullName FROM dbo.btype WHERE Rec=@BRec
			EXEC dbo.z_CteateBillCode @nBillId = 0,@nBillType = 11,@szBillCode = @BillCode OUTPUT

			EXEC @SaleBillID=dbo.Gp_InsertBillIndex @BillDate = @BillDate,@BillCode = @BillCode,@BillType = 11,@Comment = @Explain,
				@ARec = 0,@BREc = @BRec,@ERec = @ERec,@KRec = @KRec,@CheckE = @ERec,
				@ifchecked = 1,@BillE = @ERec,@TotalMoney = @TotalMoney,@TotalQty = @TotalQty,@TotalInMoney = 0,@BenefitMoney = 0,@jsyetotal = 0,@Tax = -10,
				@Explain = @Explain,@MoneyDate=@BillDate
			IF @SaleBillID<=0 GOTO Error_SaleIndex
			INSERT INTO dbo.SaleBill(BillID,KRec,GRec,PRec,Qty,AssQty,SalePrice,AssSalePrice,discount,DiscountPrice,AssDiscountPrice,total,
				tax,TaxPrice,AssTaxPrice,TaxTotal,CostPrice,jobnumber,OutFactoryDate,ValidityPeriod,JobCode,GermJobNumber,CheckReportNo,ProviderId,PtypeSource,
				comment,Eligible,unit,UnitRate,retailprice,ord,BackQty,StockUniqueid,PriceDiffQty,PriceType,InvoceTotal,InvoceTag)
			SELECT @SaleBillID,@KRec,0,PRec,Qty,Qty,SalePrice,SalePrice,100,SalePrice,SalePrice,BuyTotal ,
				SaleTax,SaleTaxPrice,SaleTaxPrice,SaleTaxTotal,BuyPrice,Jobnumber,OutFactoryDate,ValidityPeriod,'','','',@ProviderId,0,
				'','',1,1,0,ID,0,NULL,0,0,0,0
			FROM #ImportTempBill WHERE ProviderId=@ProviderId AND BuyDate=@BillDate AND BRec=@BRec AND SaleDate=@SaleDate
			IF @@ROWCOUNT=0 OR @@ERROR>0 GOTO Error_SaleBill
			UPDATE Excel_ImportTempBill SET SaleBillID=@SaleBillID WHERE UniqueBillid=@UniqueBillid AND BuyDate=@BillDate AND BuyUnit=@BuyUnit AND SaleUnit=@SaleUnit AND SaleDate=@SaleDate
			--销售单过账	
			UPDATE s SET s.StockUniqueid=b.StockUniqueid 
			FROM SaleBill s INNER JOIN dbo.BuyBill b ON b.PRec = s.PRec AND b.KRec=s.KRec AND b.Qty=s.Qty AND b.jobnumber=s.jobnumber AND b.OutFactoryDate=s.OutFactoryDate AND b.ValidityPeriod=s.ValidityPeriod
			WHERE s.BillID=@SaleBillID AND b.BillID=@BuyBillID
			PRINT @SaleBillID
			EXEC @n=dbo.Gp_Auditing @BillId = @SaleBillID,@Audit = @ERec,@szPId = @szPId OUTPUT
			IF @n<0 GOTO 	Error_SaleAudit		
			
			FETCH NEXT FROM c_salebill INTO @SaleDate,@BRec,@TotalQty,@TotalMoney
		END
		CLOSE c_salebill
		DEALLOCATE c_salebill
		
		FETCH NEXT FROM c_buybill INTO @BillDate,@ProviderId,@BillE,@TotalQty,@TotalMoney
	END
    CLOSE c_buybill
	DEALLOCATE c_buybill
		                           
	DROP TABLE #ImportTempBill 
IF @bCurrentTran=0 COMMIT TRAN
	RETURN 0
Error_BuyIndex:
	IF @bCurrentTran=0 ROLLBACK TRAN
	DROP TABLE #ImportTempBill
	RETURN -10
Error_BuyBill:
	IF @bCurrentTran=0 ROLLBACK TRAN
	DROP TABLE #ImportTempBill
	RETURN -11
Error_BuyAudit:
	IF @bCurrentTran=0 ROLLBACK TRAN
	DROP TABLE #ImportTempBill
	RETURN -12
Error_SaleIndex:
	IF @bCurrentTran=0 ROLLBACK TRAN
	DROP TABLE #ImportTempBill
	RETURN -20
Error_SaleBill:
	IF @bCurrentTran=0 ROLLBACK TRAN
	DROP TABLE #ImportTempBill
	RETURN -21
Error_SaleAudit:
	IF @bCurrentTran=0 ROLLBACK TRAN
	DROP TABLE #ImportTempBill
	RETURN -22
GO