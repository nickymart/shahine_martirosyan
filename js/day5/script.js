let sum = document.getElementById('sum');
sum.onclick = function(){
    document.querySelector('.numbers > h1').innerText = "+";
    let numbers = document.querySelectorAll('.numbers > input');
    if(numbers[0].value === '' || numbers[1].value === ''){
        return;
    }
    document.querySelector('.result > h1').innerText = Number(numbers[0].value) + Number(numbers[1].value);
}

let sub = document.getElementById('sub');
sub.onclick = function(){
    document.querySelector('.numbers > h1').innerText = "-";
    let numbers = document.querySelectorAll('.numbers > input');
    if(numbers[0].value === '' || numbers[1].value === ''){
        return;
    }
    document.querySelector('.result > h1').innerText = Number(numbers[0].value) - Number(numbers[1].value);
}

let div = document.getElementById('div');
div.onclick = function(){
    document.querySelector('.numbers > h1').innerText = "/";
    let numbers = document.querySelectorAll('.numbers > input');
    if(numbers[0].value === '' || numbers[1].value === ''){
        return;
    }
    if(Number(numbers[0].value) === 0 || Number(numbers[1].value) === 0){
    document.querySelector('.result > h1').innerText = 1 / 0;
        return;
    }
    document.querySelector('.result > h1').innerText = Number(numbers[0].value) / Number(numbers[1].value);

}

let mult = document.getElementById('mult');
mult.onclick = function(){
    document.querySelector('.numbers > h1').innerText = "*";
    let numbers = document.querySelectorAll('.numbers > input');
    if(numbers[0].value === '' || numbers[1].value === ''){
        return;
    }
    document.querySelector('.result > h1').innerText = Number(numbers[0].value) * Number(numbers[1].value);

}

let reset = document.querySelector('.reset > button');
reset.onclick = function() {
    document.querySelector('.result > h1').innerText = '';
    document.querySelector('.numbers > h1').innerText = '+'
    let numbers = document.querySelectorAll('.numbers > input');
    numbers[0].value = '';
    numbers[1].value = '';
}