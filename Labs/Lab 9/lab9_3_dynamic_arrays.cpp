//
// Created by bryce on 3/31/2025.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float *monthSales = nullptr;
	float total = 0;
	float average;
	int numOfSales;
	int count;

	cout << fixed << showpoint << setprecision(2);
	cout << "How many monthly sales will be processed? ";
	cin >> numOfSales;

	monthSales = new float[numOfSales];

	if (monthSales == nullptr) {
		cout << "Error allocating memory!" << endl;
		return 1;
	}

	cout << "Enter the sales below" << endl;
	for (count = 0; count < numOfSales; count++) {
		cout << "Sales for Month number " << (count + 1) << ": ";
		cin >> monthSales[count];
	}

	for (count = 0; count < numOfSales; count++) {
		total += monthSales[count];
	}

	average = total / numOfSales;
	cout << "Average Monthly sale is $" << average << endl;

	delete [] monthSales;

	return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab9_3_dynamic_arrays.exe
How many monthly sales will be processed?4
 Enter the sales below
Sales for Month number 1:200
 Sales for Month number 2:1200
 Sales for Month number 3:800
 Sales for Month number 4:900
 Average Monthly
sale is $775.00

Process finished with exit code 0
*/