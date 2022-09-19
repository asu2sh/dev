// "use strict";

// let hasDriversLicense = false;
// const passTest = true;

// if(passTest)
//     hasDriverLicense = true;

// if(hasDriversLicense)   console.log("I can Drive");

// "use strict";
// const interface = "Audio";
// console.log(interface);

"use strict";

// function logger(a, b){
//     return a+b;
// }
// const a = 10;
// const b = 20;
// console.log(logger(a, b));
// console.log(logger("alpha", "q"));

// function calcAge1(birthYear){
//     const age = 2022 - birthYear;
//     return age;
// }

// const yourName = prompt("Enter your Name");
// const birthYear = prompt(`Enter your birth year ${yourName} :)`);
// console.log(`Hi, ${yourName}, your age is ${calcAge1(birthYear)}.`);

// const age = birthYear => 2022 - birthYear;
// console.log(age(1999));

// const yearsUntilRetirement = birthYear => {
//     const age = 2022 - birthYear;
//     const retirement = 60 - age;
//     return retirement;
// }

// console.log(yearsUntilRetirement(1999));

// const avg = (a, b, c) => (a+b+c)/3;

// const dolphin = avg(85, 54, 41);
// const koala = avg(23, 34, 27);

// function checkWinner(dolphin, koala){
//     if(dolphin >= 2*koala)
//         console.log(`Dolphin Wins (${dolphin} vs ${koala})`);
//     else if(koala >= 2*dolphin)
//         console.log(`Koala Wins (${koala} vs ${dolphin})`);
//     else
//         console.log("No team Wins");
// }

// checkWinner(dolphin, koala);

// const friends = ["asu", 123, "ayush"];
// console.log(friends);

// const years = new Array(1999, "asu", true, friends);

// console.log(years)
// console.log(years[years.length - 1]);

// const years = new Array(1999, 2004, 2012);

// console.log(years);
// years.push(2022);
// console.log(years);

// const newLength = years.push(1947);
// console.log(newLength);

// years.unshift(777);
// console.log(years);

// years.pop();
// console.log(years);

// const popped = years.pop();

// console.log(popped);

// console.log(years.indexOf(2012));
// console.log(years.includes(2004));

// const bills = [125, 555, 44];
// console.log(bills);

// function calcTip(billValue){
//     if(billValue < 50 || billValue > 300)
//     return billValue * 0.20;
//     else
//     return billValue * 0.15;
// }

// const tips = [calcTip(bills[0]), calcTip(bills[1]), calcTip(bills[2])];
// console.log(tips);

// const total = (bill, total) => bill + total;

// const totals = new Array(total(bills[0], tips[0]), total(bills[1], tips[1]), total(bills[2], tips[2]));

// console.log(totals);

// const asu = {
//     firstName: "Ashutosh",
//     lastName: "Roy",
//     age: 2022-1999,
//     friends: ["Hritik", "Chango", "Shubham"]
// };

// console.log(asu);

// console.log(asu.firstName);
// console.log(asu["lastName"]);

// const input = prompt("What do yout want to know about asu?");

// console.log(asu[input]);

// if(asu[input]){
//     console.log(asu[input]);

// }else{
//     console.log("Wrong request");
// }

// asu.location = "Jharkhand";
// asu["insta"] = "@asu2sh";

// console.log(`${asu.firstName} has ${asu.friends.length} friends, and his best friend is ${asu.friends[0]}`);

// const asu = {
//     firstName: "Ashutosh",
//     lastName: "Roy",
//     birthYear: 1999,
//     friends: ["Hritik", "Chango", "Shubham"],
//     dl: false,
//     occ: "student",

// calcAge: function (birthYear){
//     return 2022 - birthYear;
// },

// calcAge: function (){
//     console.log(this);
//     console.log(typeof this);
//     return 2022 - this.birthYear;
// },

//     calcAge: function(){
//         this.age = 2022 - this.birthYear;
//         return;
//     },

//     retire: (birthYear) => birthYear + 60,

//     summary: function(){
//         return `${this.firstName} is a ${this.age}-year old ${this.occ}, and he has ${asu.dl ? "a" : "no"} drivers license.`;
//     }
// };

// console.log(asu.calcAge(asu.birthYear));

// console.log(asu.calcAge());

// console.log(asu.retire(asu.birthYear));

// console.log(asu.summary());

// const mark = {
//     firstName: "Mark",
//     lastName: "Miller",
//     mass: 78,
//     height: 1.69,
//     calcBMI: function() {
//         this.bmi = this.mass/(this.height ** 2);
//         return;
//     }
// };
// const john = {
//     firstName: "John",
//     lastName: "Smith",
//     mass: 92,
//     height: 1.95,
//     calcBMI: function() {
//         this.bmi = this.mass/(this.height ** 2);
//         return;
//     }
// };

// const nameKey = "Name";

// mark.calcBMI();
// john.calcBMI();

// if(mark.bmi > john.bmi){
//     console.log(`${mark["first" + nameKey]} ${mark["last" + nameKey]}'s BMI (${mark.bmi}) is higher than ${john["first" + nameKey] + " " + john["last" + nameKey]}'s (${john.bmi})`);
// }
// else{
//     console.log("Otherwise");
// }

// let sum = 0;
// for(let i=0; i<10; ++i){
//     sum += i;
// }
// console.log(sum);

// const arr = [
//     "asu",
//     1999,
//     true,
//     [
//         "hrithik",
//         "chango",
//         "shubham"
//     ]
// ];

// const types = [];

// for(let i=0; i<arr.length; ++i){
//     console.log(arr[i]);
//     types.unshift(typeof arr[i]);
// }

// console.log(types);

// const bills = new Array(22, 295, 176, 440, 37, 105, 10, 1100, 86, 52);

// const tips = new Array();
// const totals = Array();

// const tip = (bill) => bill * 0.15;
// const total = (bill, tip) => {
//   return bill + tip;
// };

// for (let i = 0; i < bills.length; ++i) {
//   tips.push(tip(bills[i]));
//   totals.push(total(bills[i], tips[i]));
// }

// console.log(bills, tips, totals);

// let calcAvg;
// let sum = 0;

// for (let i = 0; i < bills.length; ++i) sum += bills[i];

// calcAvg = sum / bills.length;

// console.log("Avg:", calcAvg);


// const arr = new Array(1, null, 4, 2, 4);

// console.table(arr);


// const arr = new Array(17, 21, 23);

// let str = "... ";

// for(let i=0; i<arr.length; ++i){
//     str = str + `${arr[i]} in ${i+1} days ... `;
// }

// console.log(str);
