if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_QingDao_GetGoodsStock]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
DROP PROCEDURE [dbo].[GP_QingDao_GetGoodsStock]
GO
CREATE PROCEDURE GP_QingDao_GetGoodsStock
(
	@KRec	ctInt=0,
	@PRec	ctInt=0
)
AS
SELECT p.SS_DM med_list_codg,	--医疗目录编码	ANS	50	Y	
	p.UserCode	fixmedins_hilist_id,	--定点医药机构目录编号	ANS	30	Y	
	p.FullName	fixmedins_hilist_name,	--定点医药机构目录名称	ANS	200	Y	
	CAST(p.RX AS VARCHAR(10))	rx_flag,	--处方药标志	ANS	3	Y	
	CONVERT(VARCHAR(10),GETDATE(),120) invdate,	--盘存日期	日期型		Y	yyyy-MM-dd
	s.Qty	inv_cnt,	--库存数量	AN	16,2	Y	按最小计价包装单位统计
	s.JobNumber	manu_lotnum,	--生产批号	ANS	30		
	RIGHT(REPLACE(s.StockUniqueid,'-','')+CAST(s.GoodsId AS VARCHAR(10)),30) fixmedins_bchno,	--定点医药机构批次流水号	ANS	30	Y	医药机构自定义批次号
	CONVERT(VARCHAR(10),s.OutFactoryDate,120) manu_date,	--生产日期	日期型		Y	yyyy-MM-dd
	CONVERT(VARCHAR(10),s.ValidityPeriod,120) expy_end,	--有效期止	日期型		Y	yyyy-MM-dd
	p.Comment memo	--备注	ANS	500		
FROM dbo.GoodsStocks s INNER JOIN dbo.ptype p ON s.PRec=p.Rec
WHERE (@KRec=0 OR KRec=@KRec)
AND (@PRec=0 OR PRec=@PRec)
AND p.SS_DM<>''

GO
