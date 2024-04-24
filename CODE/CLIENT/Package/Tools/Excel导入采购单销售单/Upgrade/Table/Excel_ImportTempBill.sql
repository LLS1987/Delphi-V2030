if not exists (select * from dbo.sysobjects where id = object_id(N'[Excel_ImportTempBill]') and OBJECTPROPERTY(id, N'IsUserTable') = 1)
CREATE TABLE Excel_ImportTempBill
(
	ID	ctInt PRIMARY KEY	IDENTITY(1,1),
	BuyDate	ctBillDate,
	BuyUnit	ctName,			--上游	 
	BuyPrice	ctPrice,				--采购单价 	 
	BuyTotal	ctTotal,				--采购金额 
	BuyTax			ctTax,
	BuyTaxPrice	ctPrice,
	BuyTaxTotal	ctTotal,
	BuyComment	ctComment,--数电票号码	
	BuyExplain		ctComment,				
	SaleDate	ctBillDate,
	SaleUnit	ctName,			--购买方名称	 
	SalePrice	ctPrice,				--销售单价 	 
	SaleTotal	ctTotal,				--销售金额 
	SaleTax			ctTax,
	SaleTaxPrice	ctPrice,
	SaleTaxTotal	ctTotal,
	SaleComment	ctComment,--数电票号码	
	SaleExplain		ctComment,						
	PFullName	ctName,			--货物或应税劳务名称	
	PStandard	ctShortStr,			--规格型号	
	PUnit	ctShortStr,			--单位	
	Qty	ctQty,			--数量	
	Jobnumber	ctShortStr,	--批号	
	OutFactoryDate	ctDate,--生产日期	
	ValidityPeriod	ctDate,		--到期日期		
	----功能行字段
	BillDate		DATETIME,
	ERec		ctInt,
	ErrorMessage	ctComment,
	BuyBillID	ctInt,
	SaleBillID	ctInt,
	UniqueBillid	ctUID	--同一次导入的主键
)
GO
if not exists (select * from dbo.sysindexes where name = N'IX_Excel_ImportTempBill_UniqueBillid' and id = object_id(N'[dbo].[Excel_ImportTempBill]'))
 CREATE  INDEX [IX_Excel_ImportTempBill_UniqueBillid] ON [dbo].Excel_ImportTempBill(UniqueBillid) 
go
