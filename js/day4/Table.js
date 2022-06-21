class Table {
    constructor(name, columns, values) {
        this.name = name;
        this.columns = columns;
        this.values = values;
        this.constructor.id++;
    }
    static id = 0;
}
