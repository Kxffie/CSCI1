//
// Created by bryce on 3/4/2025.
//

#include "lab6_6_money.h"
#include <iostream>
#include <iomanip>
using namespace std;

void normalizeMoney(float& dollars, int cents = 150);

int main()
{
	int cents;
	float dollars;
	cout << setprecision(2) << fixed << showpoint;

	cents = 95;
	cout << "\nWe will now add 95 cents to our dollar total\n";
	normalizeMoney(dollars, cents);
	cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";

	cout << "\nWe will now add 193 cents to our dollar total\n";
	cents = 193;
	normalizeMoney(dollars, cents);
	cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";

	cout << "\nWe will now add the default value to our dollar total\n";
	normalizeMoney(dollars);
	cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";

	return 0;
}

void normalizeMoney(float& dollars, int cents)
{
	static float sum = 0.0;
	dollars = cents / 100.0;
	float total = dollars;
	sum += dollars;

	cout << "We have added another $" << dollars << " to our total" << endl;
	cout << "Our total so far is $" << sum << endl;
	cout << "The value of our local variable total is $" << total << endl;
}

/*
*We will now add 95 cents to our dollar total
We have added another $0.95 to our total
Our total so far is $0.95
The value of our local variable total is $0.95
Converting cents to dollars resulted in 0.95 dollars

We will now add 193 cents to our dollar total
We have added another $1.93 to our total
Our total so far is $2.88
The value of our local variable total is $1.93
Converting cents to dollars resulted in 1.93 dollars

We will now add the default value to our dollar total
We have added another $1.50 to our total
Our total so far is $4.38
The value of our local variable total is $1.50
Converting cents to dollars resulted in 1.50 dollars
*/