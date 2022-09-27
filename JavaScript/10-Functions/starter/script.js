'use strict';

// const bookings = [];

const createBooking = function(flightNum, numPassengers=1, price=199*numPassengers){

    const booking = {
        flightNum,
        numPassengers,
        price
    }
    console.log(booking);
    // bookings.push(booking);
}
createBooking('LH123',undefined, 800);


const oneWord = function(str){
    return str.replaceAll(' ', '').toLowerCase();
}

console.log(oneWord('hello world INC.'));

const upperFirstWord = function(str){
    const [first, ...others] = str.split(' ');
    return [first.toUpperCase(), ...others].join(' ');
}

const transformer = function(str, fn){
    console.log(`Original String: ${str}`);
    console.log(`Transformed string: ${fn(str)}`);
    console.log(`Transformed by: ${fn.name}`);
}

// transformer('javaScript is the best', upperFirstWord);
// transformer('javaScript is the best', oneWord);


// const greet = function(greeting){
//     return function(name){
//         console.log(`${greeting} ${name}`);
//     }
// }

// const greeterHey = greet('Hey');

// console.log(greeterHey())
// console.log(greet())
// greeterHey('asutosh');
// greeterHey('asur')


const greet = (greeting) => (name) => console.log(`${greeting} ${name}`);

const greetHey = greet('Hey');
greetHey('asu');

const lufthansa = {
    airline: 'Lufthansa',
    iataCode: 'LH',
    bookings: [],
    //book: function(){}
    book(flightNum, name){
        console.log(`${name} booked a seat on ${this.airline} flight ${this.iataCode}${flightNum}`);

        this.bookings.push({flight: `${this.iataCode}${flightNum}`, name});
    }
};

lufthansa.book(239, 'Ash Ray');

const euroWings = {
    airline: 'EuroWings',
    iataCode: 'EW',
    bookings: []
}

const book = lufthansa.book;

// typeError, coz this book is a fn not a method so this keyword doesn't work here
// book(23, 'Michael Jordan');

book.call(euroWings, 23, 'Michael Jordan');
book.call(lufthansa, 13, 'Asu');

const bookBind = book.bind(euroWings, 23, 'asu');
bookBind();



//////////////////////////////////////

const poll = {
    question:  'What is your favorite programming Language?',
    options: ['0: JavaScript', '1: Python', '2: Java', '3: C++'],
    
    answers: new Array(4).fill(0),

    displayResults(){
        console.log(`Poll results are ${this.answers.join(', ')}`)
    },

    registerNewAnswer(){
        const option = prompt(`${this.question}\n${this.options.join('\n')}\n(Write option number)`);

        if(option < 4){
            this.answers[option]++;
            // console.log(this.answers);
        }
        else
            console.log('INVALID INPUT');

        this.displayResults();
    },
};

const pollfn = poll.registerNewAnswer;

document.querySelector('.poll').addEventListener('click', pollfn.bind(poll));


const secureBooking = function(){
    let passengerCount = 0;

    return function(){
        passengerCount++;
        console.log(passengerCount, 'passengers');
    }
}

const booker = secureBooking();

booker();
booker();
booker();
console.dir(booker);



let f;

const g = function(){
    const a = 23;

    f = function(){
        console.log(a * 2);
    }
}

const h = function(){
    const b = 777;
    
    f = function(){
        console.log(b);
    }
}


g();
f();

h();
f();

g();
f();


const boardPassengers = function(n, wait){
    // const perGroup = n/3;

    setTimeout(function(){
        console.log(`We are now boarding all ${n} passengers`);
        console.log(`There are 3 groups, each with ${perGroup} passengers`);
    }, wait * 1000);

    console.log(`Will start boarding in ${wait} seconds`);
}

const perGroup = 1000;
// boardPassengers(180, 3);


(function(){
    const header = document.querySelector('h1');
    header.style.color = 'red';

    document.querySelector('body').addEventListener('click', function(){
            header.style.color = 'blue';
    });
})();













