"use strict";

// const currencies = new Map([
//     ['USD', 'United States dollar'],
//     ['EUR', 'Euro'],
//     ['GBP', 'Pound sterling'],
//   ]);

const currencies = [2, 3, 2];

currencies.forEach(function (value, key, map) {
    console.log(key, value);
});

currencies.forEach(function (val, key) {
    console.log(val + 1);
});
console.log(currencies);

////////////////////////////////////////////////////////////

const movements = [1, 5, 3, 2, 4];

const eurToUsd = 1.1;

const movementsUsd = movements.map(function (mov) {
    return mov * eurToUsd;
});

const movementsUSD = movements.map((mov) => mov * eurToUsd);

console.log(movementsUsd);
console.log(movementsUSD);

const movementDesc = movements.map(
    (val, i) =>
        `Movement ${i + 1}: You ${
            val > 0 ? "deposited" : "withdrew"
        } ${Math.abs(val)}\n`
);

console.log(...movementDesc);

////////////////////////////////////////////////////////////

const str = "Robin Van persie";

const str1 = str
    .split(" ")
    .map((word) => word[0])
    .join("")
    .toUpperCase();

console.log(str1);

////////////////////////////////////////////////////////////

const arr = [1, -2, 3, -4];

arr.forEach(function (movement, i) {
    if (movement > 0) {
        console.log(movement, i);
    } else {
        console.log(`Movement ${i}: You Withdrew ${Math.abs(movement)}`);
    }
});

const fArr = arr.filter((num) => num > 0);
console.log(fArr);

////////////////////////////////////////////////////////////

const arr2 = ["a", "b"];

console.log(arr2.reduce((acc, num) => acc + num));
console.log(arr2.reduce((acc, num) => acc + num, 10));

////////////////////////////////////////////////////////////

const arr3 = [10, 2, 3, 4, 5];

const maxVal = arr3.reduce(function (acc, val) {
    if (acc > val) return acc;
    else return val;
}, 5);
console.log(maxVal);

////////////////////////////////////////////////////////////

const dogsJulia = [3, 5, 2, 12, 7];
const dogsKate = [4, 1, 15, 8, 3];

const dogJulia = dogsJulia.slice();
dogJulia.splice(0, 1);
dogJulia.splice(-2);

console.log(dogJulia);

////////////////////////////////////////////////////////////

const mov = [1, 5, -3, 2, 4];

const res = mov.find((val) => val < 0);

console.log(res);

////////////////////////////////////////////////////////////

const idx = mov.findIndex((res) => res < 0);
console.log(idx);

console.log(mov.indexOf(5));

console.log(mov.some((val) => val > 0));
console.log(mov.every((val) => val > 0));

////////////////////////////////////////////////////////////

const flatArr = [1, 2, [3, 4, 5], 6];

console.log(flatArr.flat());

////////////////////////////////////////////////////////////

const uArr = [1, 3, -8, -5, 0, 23, 2];

console.log(uArr.sort());

////////////////////////////////////////////////////////////

const x = new Array(1, 2, 3);
// console.log(x);

const y = new Array(3);
// console.log(y);

console.log(x.map(() => 5));
console.log(y.map(() => 5));

console.log(new Array(1, 2, 3));
console.log(new Array(3));

x.fill(4);
console.log(x);
x.fill(5, 0, 1);
console.log(x);

const z = Array.from({ length: 5 }, () => 1);

console.log(z);

const kia = Array.from({ length: 10 }, () => Math.trunc(Math.random() * 6) + 1);

console.log(kia);

console.log(kia.length);

////////////////////////////////////////////////////////////////////////////////

const convertTitleCase = function (title) {
    const exceptions = [
        "a",
        "an",
        "the",
        "is",
        "but",
        "and",
        "or",
        "on",
        "in",
        "with",
    ];

    const capitalize = (str) => str[0].toUpperCase() + str.slice(1);

    const titleCase = title
        .toLowerCase()
        .split(" ")
        .map((word) => (exceptions.includes(word) ? word : capitalize(word)))
        .join(" ");

    return capitalize(titleCase);
};

console.log(convertTitleCase("and this is a nice title"));
console.log(convertTitleCase("this is a LONG title but not too long"));
console.log(convertTitleCase("this is a LONG title"));

////////////////////////////////////////////////////////////////////////////////

// Julia and Kate are still studying dogs, and this time they are studying if dogs are eating too much or too little.
// Eating too much means the dog's current food portion is larger than the recommended portion, and eating too little is the opposite.
// Eating an okay amount means the dog's current food portion is within a range 10% above and 10% below the recommended portion (see hint).

const dogs = [
    { weight: 22, curFood: 250, owners: ["Alice", "Bob"] },
    { weight: 8, curFood: 200, owners: ["Matilda"] },
    { weight: 13, curFood: 275, owners: ["Sarah", "John"] },
    { weight: 32, curFood: 340, owners: ["Michael"] },
];

// 1. Loop over the array containing dog objects, and for each dog, calculate the recommended food portion and add it to the object as a new property. Do NOT create a new array, simply loop over the array. Forumla: recommendedFood = weight ** 0.75 * 28. (The result is in grams of food, and the weight needs to be in kg)

dogs.forEach(function(val){
    val.recommendedFood = (val.weight ** 0.75 * 28);
});
console.log(dogs);

// 2. Find Sarah's dog and log to the console whether it's eating too much or too little. HINT: Some dogs have multiple owners, so you first need to find Sarah in the owners array, and so this one is a bit tricky (on purpose)

dogs.forEach(function(val){

    if(val.owners.includes('Sarah')){
        if(val.curFood > val.recommendedFood)
            console.log('Sarah\'s dog is Eating Too Much');

        if(val.curFood < val.recommendedFood)
            console.log('Sarah\'s dog is Eating Too Little');
    }
});


const dogSarah = dogs.find(dog => dog.owners.includes('Sarah'));

console.log(`Sarah's dog is eating too ${dogSarah.curFood > dogSarah.recommendedFood ? 'much' : 'little'}`);

// 3. Create an array containing all owners of dogs who eat too much ('ownersEatTooMuch') and an array with all owners of dogs who eat too little ('ownersEatTooLittle').

const ownersEatTooMuch = dogs.filter(dog => dog.curFood > dog.recommendedFood).flatMap(dog => dog.owners);

console.log(ownersEatTooMuch);

const ownersEatTooLittle = dogs.filter(dog => dog.curFood < dog.recommendedFood).flatMap(dog => dog.owners);

console.log(ownersEatTooLittle);

// 4. Log a string to the console for each array created in 3., like this: "Matilda and Alice and Bob's dogs eat too much!" and "Sarah and John and Michael's dogs eat too little!"

console.log(`${ownersEatTooMuch.join(' and ')}'s dogs eat too much!`);
console.log(`${ownersEatTooLittle.join(' and ')}'s dogs eat too little!`);

// 5. Log to the console whether there is any dog eating EXACTLY the amount of food that is recommended (just true or false)

console.log(dogs.some(dog => dog.curFood === dog.recommendedFood));


// 6. Log to the console whether there is any dog eating an OKAY amount of food (just true or false)

const okay = dog => dog.curFood > dog.recommendedFood*0.90 && dog.curFood < dog.recommendedFood*1.10;

console.log(dogs.some(okay));

// 7. Create an array containing the dogs that are eating an OKAY amount of food (try to reuse the condition used in 6.)

const okayDog = dogs.filter(okay);

console.log(...okayDog);

// 8. Create a shallow copy of the dogs array and sort it by recommended food portion in an ascending order (keep in mind that the portions are inside the array's objects)

const dogsCopy = dogs.slice().sort((a, b) => a.recommendedFood - b.recommendedFood);

console.log(dogsCopy);


// HINT 2: Being within a range 10% above and below the recommended portion means: current > (recommended * 0.90) && current < (recommended * 1.10). Basically, the current portion should be between 90% and 110% of the recommended portion.
