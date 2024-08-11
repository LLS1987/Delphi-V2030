if NOT EXISTS(select * from sysobjects where name='QingHai_UploadBillRecord')
CREATE TABLE QingHai_UploadBillRecord
(
	BillID	ctInt,
	Ord	ctInt	PRIMARY KEY(BillID,Ord),
	UploadDate	DATETIME	--´«ÊהÈÕÆÚ
)
GO
