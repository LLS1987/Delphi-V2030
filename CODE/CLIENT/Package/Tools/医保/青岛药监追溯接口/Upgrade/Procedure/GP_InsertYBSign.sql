


if  exists(select * from sysobjects where xtype='p' and name='GP_InsertYBSign')
  DROP PROC GP_InsertYBSign
GO

CREATE PROC GP_InsertYBSign
   @Erec int, --人员编号
   @SignNo VARCHAR(100), --签到编号	
   @QdDate ctDate, --签到日期
   @QdFlag int --签到标志
 
AS

if exists(select * from YB_Sign where Erec=@Erec and QdDate=@QdDate ) DELETE dbo.YB_Sign WHERE Erec=@Erec and QdDate=@QdDate

	  INSERT INTO YB_Sign
	       (Erec,
	        SignNo,
	        QdDate,
	        QdFlag)
	  VALUES(   
			@Erec , --人员编号
			@SignNo , --签到编号	
			@QdDate,  --签到日期
			@QdFlag)  --签到标志
     
GO   
