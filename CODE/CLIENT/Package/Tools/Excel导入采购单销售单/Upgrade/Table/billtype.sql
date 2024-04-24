if not exists(select * from syscolumns where name='ParID' and id=object_id('billtype'))
alter table billtype add parid int not null default 0
go
