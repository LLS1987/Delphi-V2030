if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GP_SPDA_GetInStockBill]') and OBJECTPROPERTY(id, N'IsProcedure') = 1)
drop procedure [dbo].[GP_SPDA_GetInStockBill]
GO
CREATE PROCEDURE GP_SPDA_GetInStockBill
(
	@BillType	VARCHAR(1000)
)
AS

GO