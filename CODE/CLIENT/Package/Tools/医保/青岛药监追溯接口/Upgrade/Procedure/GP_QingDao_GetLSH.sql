if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_QingDao_GetLSH]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
drop procedure [dbo].[GP_QingDao_GetLSH]
GO
CREATE PROCEDURE GP_QingDao_GetLSH
AS
if not Exists(select 1 from YBLSNo_CQ) 	insert into YBLSNo_CQ(YbLSNo) values(1)	
IF EXISTS(SELECT * FROM YBLSNo_CQ WHERE YbLSNo>9990) UPDATE YBLSNo_CQ SET YbLSNo=1
declare @YbLSNo int

UPDATE YBLSNo_CQ SET @YbLSNo=YbLSNo,YbLSNo=YbLSNo+1 

RETURN @YbLSNo
GO