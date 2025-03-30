//
// Created by bryce on 1/31/2025.
//

#include "exitticket.h"
#include <iostream>
using namespace std;

int main() {
	int guess, number = rand() % 10 + 1;

	cout << "Guess a number (1-10): ";
	cin >> guess;

	cout << (guess == number ? "Winner, winner, chicken dinner!" :
			 guess < number ? "Rise up, my friend, your guess was too low." :
							 "Get low, get low, get low, your guess was too high.")
		 << "\nThe number was " << number << " and you guessed " << guess << endl;
}