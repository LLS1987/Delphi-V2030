
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