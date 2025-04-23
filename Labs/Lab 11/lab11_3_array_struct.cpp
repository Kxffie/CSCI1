//
// Created by bryce on 4/21/2025.
//

#include <iostream>
#include <iomanip>
using namespace std;

struct taxPayer {
	float taxRate;
	float income;
	float taxes;
};

int main() {
	taxPayer citizen[5];
	cout << fixed << showpoint << setprecision(2);
	cout << "Please enter the annual income and tax rate for 5 tax payers:" << endl << endl;

	for (int count = 0; count < 5; count++) {
		cout << "Enter this year's income for tax payer " << (count + 1) << ": ";
		cin >> citizen[count].income;
		cout << "Enter the tax rate for tax payer " << (count + 1) << ": ";
		cin >> citizen[count].taxRate;
		citizen[count].taxes = citizen[count].income * citizen[count].taxRate;
		cout << endl;
	}

	cout << "Taxes due for this year:" << endl << endl;
	for (int index = 0; index < 5; index++) {
		cout << "Tax Payer #" << (index + 1) << ": $ " << citizen[index].taxes << endl;
	}

	return 0;
}

/*
*C:\Users\bryce\CLionProjects\CSCI1\lab11_3_array_struct.exe
Please enter the annual income and tax rate for 5 tax payers:

Enter this year's income for tax payer 1:45000
Enter the tax rate for tax payer 1:.19

Enter this year's income for tax payer 2:60000
Enter the tax rate for tax payer 2:.23

Enter this year's income for tax payer 3:12000
Enter the tax rate for tax payer 3:.01

Enter this year's income for tax payer 4:104000
Enter the tax rate for tax payer 4:.30

Enter this year's income for tax payer 5:50000
Enter the tax rate for tax payer 5:.22

Taxes due for this year:

Tax Payer #1: $ 8550.00
Tax Payer #2: $ 13800.00
Tax Payer #3: $ 120.00
Tax Payer #4: $ 31200.00
Tax Payer #5: $ 11000.00

Process finished with exit code 0
*/