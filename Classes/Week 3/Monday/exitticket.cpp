//
// Created by bryce on 1/27/2025.
//

#include "exitticket.h"
#include <iostream>
#include <random>
#include <ctime>
using namespace std;

/*
Instructions-

create a C++ program that represents two 6-sided dice.  Rolls those dice, and displays the sum of the two dice rolls.
inputs:  MIN =1, MAX = 6, die1, die2;
Outputs:  display die rolls, sum
Processing:  Use rand() to "roll" the dice;  Add the two dice rolls together and store in sum
 */

void randomDice() {
	constexpr int MIN = 1;
	constexpr int MAX = 6;

	srand(static_cast<unsigned int>(time(0)));

	const int die1 = rand() % (MAX - MIN + 1) + MIN;
	const int die2 = rand() % (MAX - MIN + 1) + MIN;

	const int sum = die1 + die2;

	cout << "Die 1: " << die1 << endl;
	cout << "Die 2: " << die2 << endl;
	cout << "Sum: " << sum << "\n" <<  endl;
}

// did this because using C++11 random number generator is better than rand()

void trueRandomDice() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(1, 6);

	const int die1 = dis(gen);
	const int die2 = dis(gen);

	const int sum = die1 + die2;

	cout << "Die 1: " << die1 << endl;
	cout << "Die 2: " << die2 << endl;
	cout << "Sum: " << sum << "\n" << endl;
}

int main() {
	randomDice();
	trueRandomDice();
}