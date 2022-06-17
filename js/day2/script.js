'use strict'
// 1
function firstWordToUpper (str) {
  let newStr = "";
  for(let i = 0; i < str.length; i++) {
    if(str[i] != " ") {
      while(str[i] != " " && i < str.length){
        newStr += str[i].toUpperCase();
        i++;
      }
      newStr += str.substr(i, str.length);
      break;
    }
    newStr +=  str[i];
  }
  return newStr;
}

const sentence = prompt();
console.log(firstWordToUpper(sentence));

// 2
console.log(newArray([1, 2, 3, 4], 0));
function newArray(array, subSize) {
  if(subSize <= 0) {
    console.log("Can not be 0 or negative number!")
    return array;
  }
  const newArray = [];
  for (let i = 0; i < array.length; i += subSize) {
    newArray.push(array.slice(i, subSize + i));
  }
  return newArray;
};

// 3

console.log(summ({ a: 10, b: NaN, c: '30' }));
function summ(obj){
  let sum = 0;
  for (const key in obj) {
    if ((typeof (obj[key])) == 'number' && !isNaN(obj[key])) {
      sum += obj[key];
    }
  }
  return sum;
};

// 4
function vowelsCount(str) {
  let vowles = "aeiou"
    let count = 0;
    for(let i = 0; i < str.length; i ++){
        if(vowles.indexOf(str[i]) != -1 || vowles.indexOf(str[i].toLowerCase()) != -1) {
            count ++;
        }
    }
    return count;
};

console.log(vowelsCount('aa ierrrrrr'));

// 5
function positiveAndNegativeValuesSum(array) {
    let obj = {
        positive: 0,
        negative: 0
    };
    for(let i = 0; i < array.length; i++) {
        array[i] > 0 ? obj['positive'] += array[i]: obj['negative'] += array[i];
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
  const uniqueCities = new Set();
    let k = 0;
  for(let i = 0; i < cities.length; i++) {
    uniqueCities.add(cities[i].city);
  }
  return uniqueCities;
};

console.log(getUniqueCities(data));

// 7
function l(str) {
  return str.replace(/\W+/g, '').toLowerCase().split("").sort().join("");
}
function anagrams (str1, str2) {
    if (l(str1) === l(str2))
      return true;
    return false;
}
console.log(anagrams('rail safety', 'fairy tales'));
console.log(anagrams('RAIL! SAFETY!', 'fairy tales'));
console.log(anagrams('Hi there', 'Bye there'));
