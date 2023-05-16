if NOT EXISTS(select * from sysobjects where name='SPDA_PosSet')
CREATE TABLE SPDA_PosSet	--分单信息表
(
	PosID	INT,
	StoreName		ctName,
	StoreCode		ctShortStr,			--账号
	Password			ctComment,			--密码
	AppKey			ctComment			--授权码
)
GO

if NOT EXISTS(select * from sysobjects where name='SPDA_TransBillRecord')
CREATE TABLE SPDA_TransBillRecord	--分单信息表
(
	BillID	ctInt,
	Ord		ctInt	PRIMARY KEY(BillID,Ord),
	DoDate	DATETIME,
	out_code		INT ,
	out_msg		ctComment,
	out_data		VARCHAR(1000),
	TIME	int
)
GO
