'use strict';

// Data needed for a later exercise
// const flights =
//   '_Delayed_Departure;fao93766109;txl2133758440;11:25+_Arrival;bru0943384722;fao93766109;11:45+_Delayed_Arrival;hel7439299980;fao93766109;12:05+_Departure;fao93766109;lis2323639855;12:30';

// Data needed for first part of the section
const restaurant = {
  name: 'Classico Italiano',
  location: 'Via Angelo Tavanti 23, Firenze, Italy',
  categories: ['Italian', 'Pizzeria', 'Vegetarian', 'Organic'],
  starterMenu: ['Focaccia', 'Bruschetta', 'Garlic Bread', 'Caprese Salad'],
  mainMenu: ['Pizza', 'Pasta', 'Risotto'],

  order: function (i, j) {
    return [this.starterMenu[i], this.mainMenu[j]];
  },

  openingHours: {
    thu: {
      open: 12,
      close: 22,
    },
    fri: {
      open: 11,
      close: 23,
    },
    sat: {
      open: 0, // Open 24 hours
      close: 24,
    },
  },
};


// const properties = Object.keys(restaurant.openingHours);
// console.log(properties);
// const values = Object.values(restaurant.openingHours);
// console.log(values);

// for (const day of Object.keys(restaurant.openingHours)) {
//   console.log(day);
// }

// for (const x of Object.entries(restaurant.openingHours)) {
//   console.log(x);
// }

// for (const [key, { open, close }] of Object.entries(restaurant.openingHours)) {
//   console.log(key, open, close);
// }

// console.log( 13 || "asur");
// console.log("" || "asur");
// console.log(null || "asur");
// console.log(true || undefined);
// console.log(undefined || "");

// let a;
// let b = "asur";
// const c = 10;
// let d = 15;
// var e = 20;

// a ||= 1;
// b ||= a;
// c ||= 3;
// d ||= 4;
// e ||= a;

// a &&= "anonymus";
// b &&= "anonymus";

// console.log(a, b);

const game = {
  team1: 'Bayern Munich',
  team2: 'Borrussia Dortmund',
  players: [
    [
      'Neuer',
      'Pavard',
      'Martinez',
      'Alaba',
      'Davies',
      'Kimmich',
      'Goretzka',
      'Coman',
      'Muller',
      'Gnabry',
      'Lewandowski',
    ],
    [
      'Burki',
      'Schulz',
      'Hummels',
      'Akanji',
      'Hakimi',
      'Weigl',
      'Witsel',
      'Hazard',
      'Brandt',
      'Sancho',
      'Reus',
    ],
  ],

  score: '3:2',
  scored: ['Lewandowski', 'Muller', 'Lewandowski', 'Reus', 'Sancho'],
  date: 'Nov 9th 2050',
  odds: {
    team1: 1.33,
    x: 3.25,
    team2: 6.5,
  },
};


// for(let i=0; i<game.scored.length; ++i){
//   console.log(`Goal ${i+1}: ${game.scored[i]}`)
// }

// let sum = 0;
// let cnt = 0;
// for(const value of Object.values(game.odds)){
//   sum += value;
//   cnt++;
// }
// console.log("Average:", sum/cnt);

// for(const [val, value] of Object.entries(game.odds)){
//   console.log(`Odd of victory ${game[val]}: ${value}`);
// }

// console.log(`Odd of victory ${game.team1}: ${game.odds.team1}`);
// console.log(`Odd of draw: ${game.odds.x}`);
// console.log(`Odd of victory ${game.team2}: ${game.odds.team2}`);

// const scorers = {
//   Gnarby: 1, 
//   Hummels: 1, 
//   Lewandowski: 2
// };

// console.log(scorers); 


// const players1 = game.players[0];
// const players2 = game.players[1];

// const [players1, players2] = game.players;
// console.log(players1, players2);

// let gk;
// let fieldPlayers = [];
// [gk, ...fieldPlayers] = players1;
// console.log(gk, fieldPlayers);

// let allPlayers = [];
// allPlayers = [...players1, ...players2];
// console.log(allPlayers);

// let players1Final = [];
// players1Final = [...players1, "Thiago", "Coutinho", "Perisic"];
// console.log(players1Final);

// let team1 = game.odds.team1;
// const draw = game.odds.x;
// let team2 = game.odds.team2;

// const {odds: {team1, x: draw ,team2}} = game;
// console.log(team1, draw, team2);

// function printGoals(...scored){
//   console.log(`${scored.length} goals were scored.`);
// }

// const {scored} = game;
// const playersScored = ["Davies", "Muller", "Lewandowski", "Kimmich", ...scored];

// printGoals(...playersScored);

// team1 < team2 && console.log("Team1");
// team2 < team1 && console.log("Team2");

// const users = [{ name: "asu", email: "asu2shy@gmail.com"}];

// console.log(users[0]?.name ?? "User Array Empty");

// if(users.length > 0) console.log(users[0].name);
// else console.log("User Array Empty");

// const [m, n] = restaurant.order(1, 2);
// console.log(m, n);

// const arr= [2, 3, 4];
// const a = arr[0];
// const b = arr[1];
// const c = arr[2];

// let [x, y, z, o] = arr;
// console.log(x, y, z, o);

// [x, y, z] = [y, z, x];
// console.log(x, y, z);

// const [first, second] = restaurant.categories;
// console.log(first, second);

// const arr = [2, 3, 4];

// const newArr = [8, 9, ...arr];

// console.log(newArr);

// console.log(...newArr);

// console.log(...arr);

// const newArr2 = [...arr];
// console.log(newArr2);

// const mergeArr = [...newArr,...newArr2];
// console.log(...mergeArr);


//* Sets in JS:

// const ordersSet = new Set(['Pasta', 'Pizza', 'Risotto', 'Pizza', 'Pasta']);

// console.log(...ordersSet);

// console.log(new Set('asur'));

// console.log(ordersSet.size);

// console.log(ordersSet.)

// const rest = new Map();

// rest.set('name', 'Classico Italiano');
// rest.set(1, 'Firenze, Italy');

// console.log(rest.set(2, 'Lisbon, Portugal'));

// rest
// .set('categories', ['Italian', 'Pizzeria', 'Vegetarian', 'Organic'])
// .set('open', 11)
// .set('close', 23)
// .set(true, 'We are open :D')
// .set(false, 'We are close')
// .set(undefined, 719)
// .set(null, 'hola');

// console.log(rest.get('name'))
// console.log(rest.get('open'))
// console.log(rest.get(true))
// console.log(rest.get(undefined))
// console.log(rest.get(null))

const quiz = new Map ([
  ['Q', 'What lang you\'re learning right now'],
  [1, 'C'],
  [2, 'C++'],
  [3, 'Java'],
  [4, 'JavaScript'],
  [true, 4],
  [false, 'Try Again']
]);

// console.log(quiz.get('Q'));

// for(const [key, value] of quiz){
//   if(typeof key === 'number')
//     console.log(`Your option ${key}:${value}`);
// }

// const answer = Number(prompt('Your answer: '));

// (answer === (quiz.get(true))) ? console.log("Right Answer") : console.log("Wrong Answer");


const gameEvents = new Map([
  [17, 'GOAL'], 
  [36, 'Sub'], 
  [47, 'GOAL'],
  [61, 'Sub'],
  [64, 'Yellow Card'],
  [69, 'Red Card'],
  [70, 'Sub'],
  [72, 'Sub'],
  [76, 'GOAL'],
  [80, 'GOAL'],
  [92, 'Yellow Card']
]);

const eventsSet = new Set(gameEvents.values());
const arr = [...eventsSet];
console.log(arr);

gameEvents.delete(64);
console.log(gameEvents);

for(const [key, value] of gameEvents){
  (key <= 45) ? console.log(`[FIRST HALF] ${key}: ${value}`) : console.log(`[SECOND HALF] ${key}: ${value}`);
}

const time = [...gameEvents.keys()].pop();
console.log(`An Event happened, on average, every ${time/gameEvents.size} minutes`);



const airline = 'Air INDIA';
const plane = 'A320';

console.log(plane[1]);
console.log('B737'[1]);

console.log(airline.indexOf('D'));
console.log(airline.lastIndexOf('A'));

console.log(airline.indexOf('INDIA'));

console.log(airline.slice(4));

console.log(airline.slice(0, airline.indexOf(' ')));
console.log(airline.slice(airline.lastIndexOf(' ') + 1));

console.log(airline.slice(-5));
console.log(airline.slice(-100, 6));
console.log(airline.slice(1, -3));

const myName = 'asUtoSh';

// console.log(myName[0].toUpperCase() + myName.substring(1).toLowerCase());
// console.log(myName[0].toUpperCase() + myName.slice(1).toLowerCase());

const email = '  asu2SHy@gmail.com  \n';

console.log(email.trim().toLowerCase());


const announcement = 'All passengers come to boarding door 23. Boarding door 23!';

// console.log(announcement.replaceAll('door', 'gate'));


// const str = 'a+very+nice+string'

const firstName = 'Asutosh';
const lastName = 'Ray';

const newName = ['Mr.', firstName, lastName].join(' ');
// console.log(newName);


const pname = 'robin van persie'

const capitalizeName = function(name){
  const names = name.split(' ');
  const res = [];

  for(const n of names){
    res.push(n[0].toUpperCase() + n.slice(1));
  }
  console.log(res.join(' '));
  // return res;
}

capitalizeName(pname);


//! Camel Case

document.body.append(document.createElement('textarea'));
document.body.append(document.createElement('button'));
const text = document.querySelector('textarea').value;

const camel = function(str, i){

  let str1 = str.replaceAll('_', ' ').trim().split(' ');
  let res = [];
  let j = '✅';

  for(const n of str1){
    res.push(n.replace(n[0], n[0].toUpperCase()));
  }

  res[0] = res[0].toLowerCase();
  res = (res.join(' ')).replaceAll(' ', '').padEnd(30, ' ');
  console.log(res + j.repeat(i));
}

const fncall = function(textBlock){
  const texts = textBlock.split('\n');
  let i = 0;
  for(const m of texts){
    i++;
    camel(m, i);
  }
}

document.querySelector('button').addEventListener('click', function(){
  const text = document.querySelector('textarea').value;
  fncall(text);
});



// underscore_case
// first_name
// Some_Variable
//  calculate_AGE
// delayed_departure


const flights =
  '_Delayed_Departure;fao93766109;txl2133758440;11:25+_Arrival;bru0943384722;fao93766109;11:45+_Delayed_Arrival;hel7439299980;fao93766109;12:05+_Departure;fao93766109;lis2323639855;12:30';

  const flightss = flights.split('+');

  for(const flight of flightss){
      const [type, from, to, time] = flight.split(';');
      const res = `${type.startsWith('_Delayed') ? '🔴' : ''}${type.replaceAll('_', ' ')} ${from.slice(0,3).toUpperCase()} ${to.slice(0, 3).toUpperCase()} (${time.replace(':', 'h ')})`.padStart(45);

      console.log(res);
  }
