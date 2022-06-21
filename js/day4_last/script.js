let obj = Database.get();

obj.creatTable("users" ,['id','username', 'password'],[['Alex','abc'], ['Shahine','ghj']]);
obj.creatTable("users1" ,['id','username', 'password', 'hobby'],[['Alex','abc', 'sadsa'], ['Shahine','ghj', 'asd']]);
obj.creatTable("users" ,['id','username', 'password'],[['Alex','abc'], ['Shahine','ghj']]);
