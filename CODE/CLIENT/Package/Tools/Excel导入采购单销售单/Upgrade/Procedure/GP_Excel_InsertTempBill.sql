if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_Excel_InsertTempBill]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
drop procedure [dbo].GP_Excel_InsertTempBill
GO
CREATE PROC GP_Excel_InsertTempBill
(
	@BuyDate	ctDate,
	@BuyUnit	ctName,			--上游	 
	@BuyPrice	ctPrice,				--采购单价 	 
	@BuyTotal	ctTotal,				--采购金额 
	@BuyTax			ctTax,
	@BuyTaxPrice	ctPrice,
	@BuyTaxTotal	ctTotal,
	@BuyComment	ctComment,--数电票号码	
	@BuyExplain		ctComment,				
	@SaleDate	ctDate,
	@SaleUnit	ctName,			--购买方名称	 
	@SalePrice	ctPrice,				--销售单价 	 
	@SaleTotal	ctTotal,				--销售金额 
	@SaleTax			ctTax,
	@SaleTaxPrice	ctPrice,
	@SaleTaxTotal	ctTotal,
	@SaleComment	ctComment,--数电票号码	
	@SaleExplain		ctComment,						
	@PFullName	ctName,			--货物或应税劳务名称	
	@PStandard	ctShortStr,			--规格型号	
	@PUnit	ctShortStr,			--单位	
	@Qty	ctQty,			--数量	
	@Jobnumber	ctShortStr,	--批号	
	@OutFactoryDate	DATETIME,--生产日期	
	@ValidityPeriod		DATETIME,		--到期日期		
	----功能行字段
	@ERec		ctInt,
	@UniqueBillid	ctUID	--同一次导入的主键
)
AS
	SET @OutFactoryDate = NULLIF(@OutFactoryDate,'1899-12-30')
	SET @ValidityPeriod	 = NULLIF(@ValidityPeriod,'1899-12-30')
	--采购
	SET @BuyTax  = 13
	SET @BuyTaxPrice = @BuyTaxTotal/@Qty
	SET @BuyTotal = @BuyTaxTotal/(100+@BuyTax)*100
	SET @BuyPrice = @BuyTotal/@Qty
	--销售
	SET @SaleTax  = 13
	SET @SaleTaxPrice = @SaleTaxTotal/@Qty
	SET @SaleTotal = @SaleTaxTotal/(100+@SaleTax)*100
	SET @SalePrice = @SaleTotal/@Qty
	INSERT INTO dbo.Excel_ImportTempBill(BuyDate,BuyUnit,BuyPrice,BuyTotal,BuyTax,BuyTaxPrice,BuyTaxTotal,BuyComment,BuyExplain,
		SaleDate,SaleUnit,SalePrice,SaleTotal,SaleTax,SaleTaxPrice,SaleTaxTotal,SaleComment,SaleExplain,
		PFullName,PStandard,PUnit,Qty,Jobnumber,OutFactoryDate,ValidityPeriod,
		BillDate,ERec,ErrorMessage,BuyBillID,SaleBillID,UniqueBillid)
	VALUES(@BuyDate,@BuyUnit,@BuyPrice,@BuyTotal,@BuyTax,@BuyTaxPrice,@BuyTaxTotal,@BuyComment,@BuyExplain,
		@SaleDate,@SaleUnit,@SalePrice,@SaleTotal,@SaleTax,@SaleTaxPrice,@SaleTaxTotal,@SaleComment,@SaleExplain,
		@PFullName,@PStandard,@PUnit,@Qty,@Jobnumber,@OutFactoryDate,@ValidityPeriod,
		GETDATE(),@ERec,'',0,0,@UniqueBillid)

GO