//
// Created by bryce on 2/5/2025.
//

#include "exitticker.h"
#include <iostream>
using namespace std;

int main() {
    char playAgain;
    do {
        const int answer = rand() % 100 + 1;
        int guessCounter = 0;
        int guess;
        do {
            cout << "Enter a number between 1 and 100: ";
            cin >> guess;
            guessCounter++;
            if (guess > answer) {
                cout << "Too high!" << endl;
            } else if (guess < answer) {
                cout << "Too low!" << endl;
            } else {
                cout << "You guessed it in " << guessCounter << " tries!" << endl;
            }
        } while (guess != answer);
        cout << "Play again? (Y/N): ";
        cin >> playAgain;
    } while (tolower(playAgain) == 'y');
    return 0;
}