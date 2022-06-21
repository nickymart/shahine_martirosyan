class Database {
    static get() {
        if(localStorage.getItem('db') == null){
            localStorage.setItem('db', "[]");
        }
        return new this;
    }
    creatTable(name, colume, values = null) {
        let arr = JSON.parse(localStorage.getItem('db'));
        for (let key in arr) {
            if (name == arr[key].name) {
                return;
            }
        }
        let table = new Table(name, colume, values);
        this.save(table);
    }

    getTable(name) {
        let arr = JSON.parse(localStorage.getItem('db'));
        for (let key in arr) {
            if (name == arr[key].name) {
                for(let i = 0; i < arr[key].values.length; i++){
                    arr[key].values[i].shift();
                }
                return new Table(arr[key].name, arr[key].columns, arr[key].values);
            }
        }
    }

    save(table) {
        let arr = JSON.parse(localStorage.getItem('db'));
        arr.push(table);
        localStorage.setItem('db', JSON.stringify(arr));
    }
}