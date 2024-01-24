#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int max) : maxNumber(max), numOfGuesses(0)
{
    cout << "GAME CONSTRUCTOR: object initializes with" << maxNumber << "as a maximum value" << endl;
    srand(time(nullptr));
    randomNumber = rand() % maxNumber + 1;
}

Game::~Game()
{
    cout << "GAME DESTRUCTION: object cleared from stack memory" << endl;
}

void Game::play()
{
    while (true){
        cout << "Give your guess between 1-" << maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses++;
        if (playerGuess < randomNumber){
            cout << "Your guess is too small" << endl;
        }
        else if (playerGuess > randomNumber){
            cout << "Your guess is too big" << endl;
        }
        else{
            cout << "Your guess is right = " << playerGuess << endl;
            printGameResult();
            break;
        }
    }
}

void Game::printGameResult()
{
    cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses " << endl;
}
