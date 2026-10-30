
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class NumberGuessingGame {
private:
    int secretNumber;
    int attempts;

public:
    // Constructor
    NumberGuessingGame() {
        secretNumber = rand() % 100 + 1;
        attempts = 0;
    }

    // Function to play the game
    void play() {
        int guess;

        cout << "\n===== NUMBER GUESSING GAME =====\n";
        cout << "Guess a number between 1 and 100.\n";

        do {
            cout << "Enter your guess: ";
            cin >> guess;

            attempts++;

            if (guess > secretNumber) {
                cout << "Too high! Try again.\n";
            }
            else if (guess < secretNumber) {
                cout << "Too low! Try again.\n";
            }
            else {
                cout << "Congratulations! You guessed it!\n";
                cout << "Total attempts: " << attempts << endl;
            }

        } while (guess != secretNumber);
    }
};

int main() {
    srand(time(0));

    NumberGuessingGame game;
    game.play();

    return 0;
}
