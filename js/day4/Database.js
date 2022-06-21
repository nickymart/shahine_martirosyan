class Database {
    static get() {
        if(localStorage.getItem('db') == null){
            localStorage.setItem('db', "[]");
        }
        return new this;
    }
    creatTable(name, colume, values = null) {
        let table = new Table(name, colume, values);
        let arr = JSON.parse(localStorage.getItem('db'));
        arr.push(table);
        this.save(arr);
    }

    getTable(name) {
        let arr = JSON.parse(localStorage.getItem('db'));
        for (let key in arr) {
            if (name == arr[key].name) {
                return arr[key].name, arr[key].columns, arr[key].values;
            }
        }
    }

    save(arr) {
        localStorage.setItem('db', JSON.stringify(arr));
    }

    delete(id) {
        let arr = JSON.parse(localStorage.getItem('db'));
        arr.splice(id - 1, 1)
        this.save(arr);
    }

    get(id){
        let arr = JSON.parse(localStorage.getItem('db'));
        return arr[id - 1];
    }

    update(name, newname, columns, values) {
        let arr = JSON.parse(localStorage.getItem('db'));
        for(let i = 0; i < arr.length; i++){
            if (arr[i].name == name) {
                arr[i].name = newname;
                arr[i].columns = columns;
                arr[i].values = values;
                this.save(arr);
                return;
            }
        }
    }
}
