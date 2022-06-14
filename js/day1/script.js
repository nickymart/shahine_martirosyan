'use strict'
let snikersCount =  prompt("Սնիկերս");
let colaCount =  prompt("Կոլա");
let jermukCount =  prompt("Ջերմուկ");
let chocolateCount =  prompt("Շոկոլադ");
let candyCount =  prompt("Կոնֆետ");
let sum = snikersCount * 200 + colaCount * 400 + jermukCount * 99.9 +chocolateCount * 1200 + candyCount * 350;

let paidAmount = prompt("Մուտքագրել գումաարը");

if (!sum) {
    console.log("Դուք ոչինչ չեք գնել");
} else if(!Number(paidAmount)){ 
    console.log("Սխալ գումարի մուտք");
} else if(sum > paidAmount) {
    console.log("Ձեր գումարը բավարար չէ գնումներ կատարելու համար");
} else {
    console.log(`Ընդամենը: ${paidAmount}`);
    console.log(`Վերադարձ: ${paidAmount - sum}`);
    console.log(`Ծախս: ${sum}`);
    console.log('Ապրանքներ։');
    if(snikersCount > 0) console.log(` Սնիկերս ֊ ${snikersCount} հատ ֊ ${snikersCount * 200}դր`);
    if(colaCount > 0) console.log(` Կոլա ֊ ${colaCount} հատ ֊ ${colaCount * 400}դր`);
    if(jermukCount > 0) console.log(` Ջերմուկ ֊ ${jermukCount} հատ ֊ ${jermukCount * 99.9}դր`);
    if(chocolateCount > 0) console.log(` Շոկոլադ ֊ ${chocolateCount} հատ ֊ ${chocolateCount * 1200 }դր`);
    if(candyCount > 0) console.log(` Կոնֆետ ֊ ${candyCount} հատ ֊ ${candyCount * 350} դր`);
}
