if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_SPDA_SavePosInfo]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
drop procedure [dbo].GP_SPDA_SavePosInfo
GO
CREATE PROC GP_SPDA_SavePosInfo
(
	@PosID	INT,
	@StoreName		ctName,
	@StoreCode		ctShortStr,			--’À∫≈
	@Password			ctComment,			--√‹¬Î
	@AppKey			ctComment			-- ⁄»®¬Î
)
AS
IF EXISTS(SELECT * FROM SPDA_PosSet WHERE PosID=@PosID)
	UPDATE SPDA_PosSet SET StoreName=@StoreName,StoreCode=@StoreCode,Password=@Password,AppKey=@AppKey WHERE PosID=@PosID
ELSE
	INSERT INTO dbo.SPDA_PosSet(PosID,StoreName,StoreCode,Password,AppKey)
	VALUES	( @PosID,@StoreName,@StoreCode,@Password,@AppKey)

GO
