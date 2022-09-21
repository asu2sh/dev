'use strict';

// function calcAge(birthYear) {
//     const age = 2022 - birthYear;
//     if(true){
//         var firstName = 'asu';
//     }
//     console.log(firstName);
//     return age;
// }
// calcAge(1999);

// console.log(me);
// console.log(job);
// console.log(year);

// var me = "asu";
// let job = "backend";
// const year = 1999;

// console.log(addDecl(2, 3));
// console.log(addExpr(2, 3));
// console.log(varExpr(2, 3));

// function addDecl(a, b){
//     return a+b;
// };

// const addExpr = function(a, b){
//     return a+b;
// };

// var varExpr = function(a, b){
//     return a+b;
// }

// let age = 22;
// let oldAge = age;
// age = 23;

// console.log(age);
// console.log(oldAge);

// const me = {
//     myName: "asu",
//     age: 22,
// };

// const friend = me;
// friend.age = 25;

// console.log(me.age);
// console.log(friend.age); 

const me = {
    myName: "asu",
    age: 22,
};

// const meCopy = me;
// meCopy.age = 30;

// copying Object:
const meCopy = Object.assign({}, me);

meCopy.age = 30;

console.log(me.age);
console.log(meCopy.age);

