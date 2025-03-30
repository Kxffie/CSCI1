//
// Created by bryce on 1/29/2025.
//

#include "opener.h"
#include <iostream>
using namespace std;

int main() {
    int answer = rand() % 10 + 1;
	int guess;

	cout << "Enter a number between 1 and 10: ";
	cin >> guess;

	cout << "You guessed: " << guess << endl;
	cout << "The answer was: " << answer << endl;

	return 0;
  }