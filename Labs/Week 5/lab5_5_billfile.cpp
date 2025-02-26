//
// Created by bryce on 2/14/2025.
//

#include "lab5_5_billfile.h"
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
	ifstream dataIn;    // input file stream
	ofstream dataOut;   // output file stream
	int quantity;       // quantity of items purchased
	float itemPrice;    // price per item
	float totalBill;    // total bill amount

	dataIn.open("transaction.dat");
	if (!dataIn) {
		cout << "Error opening transaction.dat" << endl;
		return 1;
	}

	dataOut.open("bill.out");
	if (!dataOut) {
		cout << "Error opening bill.out" << endl;
		return 1;
	}

	dataOut << fixed << showpoint << setprecision(2);

	dataIn >> quantity >> itemPrice;

	totalBill = quantity * itemPrice;

	dataOut << "The total bill is $" << totalBill << endl;

	dataIn.close();
	dataOut.close();
	return 0;
}

/*
 *successfully made bill.out with "The total bill is $241.56"
 */