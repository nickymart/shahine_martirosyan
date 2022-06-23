'use strict'
if(sessionStorage.getItem('highScore') == null){
    sessionStorage.setItem('highScore', '0');
} else{
    document.querySelector('#score').innerText = sessionStorage.getItem('highScore');
}

let highScore = 0;
let randomNumber = Math.floor(Math.random() * 100);
let again = document.querySelector('#again');
let button = document.querySelector('#ok');
let input = document.querySelector('input');
let count = document.querySelector('#count');
let div = document.querySelector('#status');

again.onclick =function() {
    document.querySelector('#status').innerHTML = '';
    randomNumber = Math.floor(Math.random() * 100);
    document.querySelector('input').value = '';
    count.innerHTML = '20';
}

const ok = () => {
    if(Number(input.value) === randomNumber){
        highScore = 20 - Number(count.innerText);
        if(Number(sessionStorage.getItem('highScore')) === 0 || 
        Number(sessionStorage.getItem('highScore')) > highScore){
            document.querySelector('#score').innerText = highScore;
            sessionStorage.setItem('highScore', JSON.stringify(highScore));
        }
        div.innerHTML = '<h1 style="color:green;">You Won!</h1>'
    } else {
        if(Number(count.innerText) === 1 || Number(count.innerText) === 0){
            count.innerHTML = 0;
            div.innerHTML = '<h1 style="color:red;">Game Over!</h1>';
        } else {
            count.innerHTML = Number(count.innerText) - 1;
            if(Number(input.value) > randomNumber){
                if(Number(input.value) - randomNumber < 10){
                    div.innerHTML = '<h1 style="color:green;">It is large!</h1>';
                } else {
                    div.innerHTML = '<h1 style="color:red;">It is very large!</h1>';
                }
            } else {
                if(randomNumber - Number(input.value) < 10){
                    div.innerHTML = '<h1 style="color:green;">It is small!</h1>';
                } else {
                    div.innerHTML = '<h1 style="color:red;">It is very small!</h1>';
                }
            }
        }
    }
    input.value = '';
}

button.onclick = ok;
input.addEventListener("keypress", function(event) {
    if (event.key === "Enter") {
      ok();
    }
  });