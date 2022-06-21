class Database {
    static get() {
        if(localStorage.getItem('db') == null){
            localStorage.setItem('db', "[]");
        }
        return new this;
    }
    creatTable(name, colume, values = null) {
        let table = new Table(name, colume, values);
        this.save(table);
    }

    getTable(name) {
        let arr = JSON.parse(localStorage.getItem('db'));
        for (let key in arr) {
            if (name == arr[key].name) {
                return arr[key];
            }
        }
    }

    save(table) {
        let arr = JSON.parse(localStorage.getItem('db'));
        arr.push(table);
        localStorage.setItem('db', JSON.stringify(arr));
    }
}