if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_QingDao_GetRetailBill]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
DROP PROCEDURE [dbo].[GP_QingDao_GetRetailBill]
GO
CREATE PROCEDURE GP_QingDao_GetRetailBill
(
	@BillID INT=0,
	@Ord	 INT=0
)
AS
SELECT  
	p.SS_DM AS med_list_codg,		--	医疗目录编码	ANS	50	Y	药品的贯标码
	p.FullName AS med_list_name,	--	医疗目录名称	ANS	200	Y	药品的名称
	CAST(mx.Qty AS NUMERIC(16,4)) AS cnt,		--cnt	数量	AN	16,4	Y	
	mx.DiscountPrice AS pric,--pric	单价	AN	16,6	Y	
	mx.DiscountTotal AS amt,--amt	金额	AN	16,6	Y	=数量*单价
	mx.JobNumber AS manu_lotnum, --manu_lotnum	生产批号	ANS	30	Y	
	CONVERT(VARCHAR(10),mx.OutFactoryDate,120) AS manu_date, --	生产日期	日期型		Y	yyyy-MM-dd
	CONVERT(VARCHAR(10),mx.validityPeriod,120) AS expy_end,	--	有效期止	日期型			yyyy-MM-dd
	cast(CASE when p.RX  IN(2,3) then 0 else 1 end AS VARCHAR(3)) rx_flag ,--rx_flag	处方药标志	ANS	3	Y	
	cast(CASE when mx.Unit=101 then 1 else 0 end AS VARCHAR(3)) trdn_flag ,--trdn_flag	拆零标志	ANS	3	Y	0-否；1-是
	mx.DiscountPrice AS finl_trns_pric,--finl_trns_pric	最终成交单价	AN	16,6		
	rx.BillCode AS rxno,--	处方号	ANS	40		
	CAST('' AS VARCHAR(2)) rx_circ_flag ,--rx_circ_flag	外购处方标志	ANS	3		
	idx.BillCode AS rtal_docno,--	零售单据号	ANS	40	Y	
	CAST('' AS VARCHAR(2)) stoout_no,--stoout_no	销售出库单据号	ANS	40		
	CAST('' AS VARCHAR(2)) bchno,--bchno	批次号	ANS	30		
	CAST('' AS VARCHAR(2)) drug_trac_codg,--drug_trac_codg	药品追溯码	ANS	30		
	p.barcode drug_prod_barc,--drug_prod_barc	药品条形码	ANS	30		
	CAST('' AS VARCHAR(2))shelf_posi,--shelf_posi	货架位	ANS	20		
	CAST('' AS VARCHAR(2)) AS used_frqu_dscr,--sin_dos_dscr	单次剂量描述	ANS	200		
	CAST('' AS VARCHAR(2)) AS used_frqu_dscr,--used_frqu_dscr	使用频次描述	ANS	200		
	rx.Days AS prd_days,--prd_days	周期天数	AN	4,2		
	CAST('' AS VARCHAR(2)) AS medc_way_dscr,--medc_way_dscr	用药途径描述	ANS	200		
	CAST('' AS VARCHAR(2)) AS tcmdrug_used_way--tcmdrug_used_way	中药使用方式	ANS	6	Y	
FROM dbo.vRetailBillIndex idx WITH(NOLOCK) INNER JOIN dbo.vRetailBill mx WITH(NOLOCK) ON mx.BillID = idx.BillID
	INNER JOIN dbo.ptype p ON p.Rec=mx.PRec AND p.SS_DM<>''
	LEFT JOIN dbo.ROtherBillIndex rx ON rx.BillID=mx.RxBillId
WHERE idx.BillID=@BillID AND mx.Ord=@Ord
GO
