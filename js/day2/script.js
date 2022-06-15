'use strict'
// 1
const sentence = prompt();
const splittedSentence = sentence.split(' ');

console.log(splittedSentence[0].toUpperCase() + ' ' + splittedSentence.slice(1).join(' '));

// 2
console.log(newArray([1, 2, 3, 4], 2));
function newArray(array, subSize) {
  const newArray = [];
  for (let i = 0; i < array.length; i += subSize) {
    newArray.push(array.slice(i, subSize + i));
  }
  return newArray;
};

// 3

console.log(summ({ a: 10, b: NaN, c: 'jkajksjk' }));
function summ(obj){
  let sum = 0;
  for (const key in obj) {
    if (Number(obj[key]) && !isNaN(obj[key])) {
      sum += obj[key];
    }
  }
  return sum;
};

// 4
function vowelsCount(str) {
    let count = 0;
    for(let i = 0; i < str.length; i ++){
        if(str[i] == "a" || str[i] == "e" || str[i] == "i" || str[i] == "o" ||str[i] == "u"
        || str[i] == "A" || str[i] == "E" || str[i] == "I" || str[i] == "O" || str[i] == "U") {
            count ++;
        }
    }
    return count;
};

console.log(vowelsCount('aa sjkjsj djfjjdjk aaserio'));

// 5
function positiveAndNegativeValuesSum(array) {
    let obj = {
        positive: 0,
        negative: 0
    };
    for(let i = 0; i < array.length; i++) {
        if(array[i] > 0) obj['positive'] += array[i];
        else obj['negative'] += array[i];
    }
    return obj;
};

console.log(positiveAndNegativeValuesSum([1, 2, 3, -5]));

// 6
const data = [
  { id: 1, name: 'Name one', city: 'Stepanakert' },
  { id: 2, name: 'Name one', city: 'Erevan' },
  { id: 3, name: 'Name one', city: 'Moscow' },
  { id: 4, name: 'Name one', city: 'Stepanakert' },
  { id: 5, name: 'Name one', city: 'Erevan' },
];

const getUniqueCities = (cities) => {
  const uniqueCities = [];
    let k = 0;
  for(let i = 0; i < cities.length; i++) {
    if(uniqueCities) {
        let isExist = false;
        for(let j = 0; j < uniqueCities.length; j++) {
            if(uniqueCities[j].city == cities[i].city){
                isExist = true;
                break;
            }
        }
        if(!isExist){
            uniqueCities[k] = cities[i];
            k++;
        }
    } else {
        uniqueCities[k] = cities[i];
        k++;
    }
  }
  return uniqueCities;
};

console.log(getUniqueCities(data));

// 7
function anagrams (str1, str2) {
    if (str1.replace(/\W+/g, '').toLowerCase().split("").sort().join("") ===
       str2.replace(/\W+/g, '').toLowerCase().split("").sort().join("")) 
       return true;
    return false;
}
console.log(anagrams('rail safety', 'fairy tales'));
console.log(anagrams('RAIL! SAFETY!', 'fairy tales'));
console.log(anagrams('Hi there', 'Bye there'));