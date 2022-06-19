function add(num1, num2){
    if(num2 != undefined){
        return num1 + num2;
    }
    if(typeof(num1) === 'number'){
        return function sum(num2){
            if(typeof(num2) === 'number')
            {
                return num1 + num2;
            }
            return sum;
        }
    }
    return add;
};
