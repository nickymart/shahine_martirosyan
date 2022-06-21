class Table {
    static columnId = 0;
    constructor(name, columns, values) {
        this.name = name;
        this.columns = columns;
        this.values = values;
        Table.columnId = this.values.length;
        this.addIndex(this.values);
    }

    addIndex(values){
        for(let i = 0; i < Table.columnId; i++){
            values[i].unshift(i + 1);
        }
    }

    add(values){
        this.values.push(values);
        this.values[Table.columnId].unshift(++Table.columnId);
    }

    delete(id) {
        if(id < 0 || id > Table.columnId){
            return;
        }
       this.values.splice(id - 1, 1);
       Table.columnId--;
    }

    get(id){
        if(id < 0 || id > Table.columnId){
            return;
        }
        return this.values[id-1];
    }

    update(id, values) {
        if(id < 0 || id > Table.columnId){
            return;
        }
        this.values[id - 1] = values;
    }
}
