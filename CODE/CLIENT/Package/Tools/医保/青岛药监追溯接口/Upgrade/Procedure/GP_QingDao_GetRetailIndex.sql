if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_QingDao_GetRetailIndex]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
DROP PROCEDURE [dbo].[GP_QingDao_GetRetailIndex]
GO
CREATE PROCEDURE GP_QingDao_GetRetailIndex
(
	@KRec	ctInt=0,
	@PRec	ctInt=0,
	@BillType	ctShortStr='',
	@BgnDate	ctDate=NULL,
	@EndDate	ctDate=NULL,
	@BillID int=0
)
AS
DECLARE @DoctorCode	ctShortStr	--药师编号
DECLARE @DoctorNo		ctShortStr	--资格证书号
DECLARE @DoctorName		ctShortStr	--
SET @EndDate=@EndDate+1

SELECT @DoctorCode=e.DoctorCode,@DoctorNo=e.DoctorNo,@DoctorName=e.FullName
FROM dbo.vemployee e 
WHERE IsContactMedical=1 AND EXISTS(SELECT * FROM dbo.PosInfo p WHERE p.PosId=e.Posid AND (ISNULL(@KRec,0)=0 OR p.KRec=@KRec))

IF @@ROWCOUNT=0 SELECT @DoctorCode=e.DoctorCode,@DoctorNo=e.DoctorNo,@DoctorName=e.FullName FROM dbo.vemployee e WHERE IsContactMedical=1

SELECT idx.BillID,mx.Ord,
	p.SS_DM AS med_list_codg,--med_list_codg	医疗目录编码	ANS	50	Y	
	p.UserCode AS fixmedins_hilist_id,	--fixmedins_hilist_id	定点医药机构目录编号	ANS	30	Y	
	p.FullName AS fixmedins_hilist_name,	--fixmedins_hilist_name	定点医药机构目录名称	ANS	200	Y	
	CONVERT(VARCHAR(10),idx.BillDate,112)+CAST(idx.BillID AS VARCHAR(10)) fixmedins_bchno,	--fixmedins_bchno	定点医药机构批次流水号	ANS	30	Y	
	CAST('' AS VARCHAR(2)) prsc_dr_cert_type, --	开方医师证件类型 
	CAST('' AS VARCHAR(2)) prsc_dr_certno,-- 	开方医师证件号码
	ISNULL(r.DoctorName,e.FullName) prsc_dr_name, 	--开方医师姓名 
	CAST('' AS VARCHAR(2)) phar_cert_type, 	--药师证件类型	--phar_cert_type	药师证件类型	ANS	6		参照人员证件类型
	ISNULL(@DoctorCode,'') phar_certno,	--phar_certno	药师证件号码	ANS	50		
	ISNULL(@DoctorName,'') phar_name, 	--phar_name	药师姓名	ANS	50	Y	
	ISNULL(@DoctorNo,'')  phar_prac_cert_no,	--phar_prac_cert_no	药师执业资格证号	ANS	50	Y	
	CAST('' AS VARCHAR(2)) hi_feesetl_type,	--hi_feesetl_type	医保费用结算类型	ANS	6		
	CAST('' AS VARCHAR(2))  setl_id,	--setl_id	结算ID	ANS	30		医保病人必填
	ISNULL(r.BillCode,idx.BillCode)  mdtrt_sn,	--mdtrt_sn	就医流水号	ANS	30	Y	机构生成内唯一就诊流水
	CAST('' AS VARCHAR(2))  psn_no,	--psn_no	人员编号	ANS	30		
	'01' AS  psn_cert_type, 	--psn_cert_type	人员证件类型	ANS	6		
	CAST('' AS VARCHAR(2)) certno ,	--certno	证件号码	ANS	50		
	ISNULL(idx.BuyerName,'') psn_name ,	--psn_name	人员姓名	ANS	50		
	mx.JobNumber AS manu_lotnum,	--manu_lotnum	生产批号	ANS	30	Y	
	CONVERT(VARCHAR(10),mx.OutFactoryDate,120) AS manu_date, --	生产日期	日期型		Y	yyyy-MM-dd
	CONVERT(VARCHAR(10),mx.validityPeriod,120) AS expy_end,	--	有效期止	日期型			yyyy-MM-dd
	cast(CASE when p.RX  IN(2,3) then 0 else 1 end AS VARCHAR(3)) rx_flag ,	--rx_flag	处方药标志	ANS	3	Y	
	cast(CASE when mx.Unit=101 then 1 else 0 end AS VARCHAR(3)) trdn_flag ,	--trdn_flag	拆零标志	ANS	3	Y	0-否；1-是
	mx.DiscountPrice AS finl_trns_pric,	--finl_trns_pric	最终成交单价	AN	16,6		
	ISNULL(r.BillCode,'') AS rxno,	--rxno	处方号	ANS	40		
	CAST('' AS VARCHAR(2)) rx_circ_flag ,	--rx_circ_flag	外购处方标志	ANS	3		
	idx.BillCode AS rtal_docno,	--rtal_docno	零售单据号	ANS	40	Y	
	CAST('' AS VARCHAR(2)) stoout_no,	--stoout_no	销售出库单据号	ANS	40		
	CAST('' AS VARCHAR(2)) bchno,	--bchno	批次号	ANS	30		
	CAST('' AS VARCHAR(2)) drug_trac_codg,	--drug_trac_codg	药品追溯码	ANS	30		
	p.barcode drug_prod_barc,	--drug_prod_barc	药品条形码	ANS	30		
	CAST('' AS VARCHAR(2))shelf_posi,	--shelf_posi	货架位	ANS	20		
	mx.AssQty AS sel_retn_cnt,	--sel_retn_cnt	销售/退货数量	AN	16,4	Y	
	CONVERT(VARCHAR(20),idx.billdate,120) sel_retn_time ,	--sel_retn_time	销售/退货时间	日期时间型		Y	yyyy-MM-dd HH:mm:ss
	e.fullname sel_retn_opter_name,	--sel_retn_opter_name	销售/退货经办人姓名	ANS	50	Y	
	CAST(idx.explain AS VARCHAR(2)) memo	--memo	备注	ANS	500		
FROM  vRetailBillIndex idx WITH(NOLOCK) INNER JOIN employee e on e.rec=idx.erec
		INNER JOIN dbo.vRetailBill mx WITH(NOLOCK) ON mx.BillID = idx.BillID
		INNER JOIN dbo.ptype p ON p.Rec=mx.PRec AND p.SS_DM<>''
		LEFT JOIN dbo.ROtherBillIndex r ON mx.RxBillId = r.BillID
		LEFT JOIN dbo.Employee e2 ON r.CheckERec = e2.REC				
WHERE idx.draft=0 AND idx.BillType = 151   
				AND (ISNULL(@BillID,0)=0 OR idx.BillID=@billid)
				AND  (@BgnDate IS NULL OR @EndDate IS NULL OR idx.BillDate BETWEEN @BgnDate AND @EndDate)
				AND NOT EXISTS(SELECT * FROM YB_BusinessLink yb WHERE yb.BillID=idx.BillID AND idx.BillType=yb.BillType)
				AND (@KRec=0 OR @KRec IS NULL OR idx.KRec=@KRec)
				AND (@PRec=0 OR mx.PRec=@PRec)
ORDER BY idx.BillDate DESC	

GO
