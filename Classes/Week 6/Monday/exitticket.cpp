//
// Created by bryce on 2/17/2025.
//

#include "exitticket.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void coinFlip() {
	if (int result = rand() % 2 + 1; result == 1) {
		cout << "Heads" << endl;
	} else {
		cout << "Tails" << endl;
	}
}

int main() {
	srand(time(0));

	int numberOfFlips;
	cout << "Enter the number of times you want to flip the coin: ";
	cin >> numberOfFlips;

	for (int i = 0; i < numberOfFlips; ++i) {
		coinFlip();
	}

	return 0;
}