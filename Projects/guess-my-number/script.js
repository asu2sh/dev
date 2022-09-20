"use strict";

let secretNumber = Math.trunc(Math.random() * 20 + 1);

let score = 5;
document.querySelector(".score").textContent = score;

let highScore = 0;
document.querySelector(".highscore").textContent = highScore;

const displayMessage = function (message) {
  document.querySelector(".message").textContent = message;
};

document.querySelector(".check").addEventListener("click", function () {
  const guess = Number(document.querySelector(".guess").value);

  // NO INPUT
  if (!guess) displayMessage("No Number :)");
  // YOU WIN
  else if (guess === secretNumber) {
    document.querySelector(".number").textContent = secretNumber;
    document.querySelector(".number").style.width = "30rem";
    document.querySelector("body").style.backgroundColor = "#60b347";
    displayMessage("YOU WIN");

    // HIGH SCORE
    if (score > highScore) {
      highScore = score;
      document.querySelector(".highscore").textContent = highScore;
    }

    // guess is WRONG
  } else if (guess !== secretNumber && score > 0) {
    let message = guess > secretNumber ? "Too High" : "Too Low";
    displayMessage(message);
    score--;
  }

  document.querySelector(".score").textContent = score;

  // YOU LOSE
  if (score === 0) displayMessage("YOU LOSE");
});

// PLAY AGAIN
document.querySelector(".again").addEventListener("click", function () {
  secretNumber = Math.trunc(Math.random() * 20 + 1);

  score = 5;
  document.querySelector(".score").textContent = score;

  document.querySelector("body").style.backgroundColor = "#222";

  document.querySelector(".number").textContent = "?";
  document.querySelector(".number").style.width = "15rem";

  document.querySelector(".guess").value = "";

  displayMessage("Start Guessing...");
});
