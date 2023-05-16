pquery.exe -auto -path Table -file Table.txt
pquery.exe -auto -path Procedure -file Procedure.txt
pquery.exe -auto -path Config -file Config.txt


Copy Table.txt+Procedure.txt+Config.txt ..\..\..\..\BIN\SQL\Upgrade.sql

del Table.txt
del Procedure.txt
del Config.txt
