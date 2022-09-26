"use strict";

const player0El = document.querySelector(".player--0");
const player1El = document.querySelector(".player--1");

const score0El = document.querySelector("#score--0");
const score1El = document.getElementById("score--1");

const curr0El = document.getElementById("current--0");
const curr1El = document.getElementById("current--1");

const diceEl = document.querySelector(".dice");

const btnNew = document.querySelector(".btn--new");
const btnRoll = document.querySelector(".btn--roll");
const btnHold = document.querySelector(".btn--hold");

score0El.textContent = 0;
score1El.textContent = 0;

diceEl.classList.add("hidden");

let currScore = 0;
let currPlayer = 0;

let playing = true;

let scores = [0, 0];

const switchPlayer = function () {
    currScore = 0;
    document.getElementById(`current--${currPlayer}`).textContent = currScore;
    currPlayer = currPlayer === 0 ? 1 : 0;
    player0El.classList.toggle("player--active");
    player1El.classList.toggle("player--active");
};

btnRoll.addEventListener("click", function () {
    if (playing) {
        let diceRoll = Math.trunc(Math.random() * 6 + 1);
        diceEl.classList.remove("hidden");
        diceEl.src = `img/dice-${diceRoll}.png`;

        if (diceRoll !== 1) {
            currScore += diceRoll;
            document.getElementById(`current--${currPlayer}`).textContent =
                currScore;
        } else {
            switchPlayer();
        }
    }
});

btnHold.addEventListener("click", function () {
    if (playing) {
        scores[currPlayer] += currScore;
        document.getElementById(`score--${currPlayer}`).textContent =
            scores[currPlayer];

        if (scores[currPlayer] < 100) {
            switchPlayer();
        } else {
            document
                .querySelector(`.player--${currPlayer}`)
                .classList.add("player--winner");
            document
                .querySelector(`.player--${currPlayer}`)
                .classList.remove("player--active");
            playing = false;
            diceEl.classList.add("hidden");
        }
    }
});

btnNew.addEventListener("click", function () {

    player0El.classList.remove("player--winner");
    player1El.classList.remove("player--winner");
    player0El.classList.add("player--active");
    player1El.classList.remove("player--active");

    score0El.textContent = 0;
    score1El.textContent = 0;

    diceEl.classList.add("hidden");

    currScore = 0;

    scores = [0, 0];
    currPlayer = 0;
    playing = true;
});
