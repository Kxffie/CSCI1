//
// Created by bryce on 4/21/2025.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct taxPayer {
	string name;
	long socialSecNum;
	float taxRate;
	float income;
	float taxes;
};

int main() {
	taxPayer citizen1 = {"Tim McGuiness", 255871234, 0.35f};
	taxPayer citizen2 = {"John Kane",    278990582, 0.29f};

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter income for " << citizen1.name << ": ";
	cin >> citizen1.income;
	citizen1.taxes = citizen1.income * citizen1.taxRate;
	cout << "Name: " << citizen1.name << endl;
	cout << "Social Security Number: " << citizen1.socialSecNum << endl;
	cout << "Taxes due for this year: $" << citizen1.taxes << endl << endl;

	cout << "Enter income for " << citizen2.name << ": ";
	cin >> citizen2.income;
	citizen2.taxes = citizen2.income * citizen2.taxRate;
	cout << "Name: " << citizen2.name << endl;
	cout << "Social Security Number: " << citizen2.socialSecNum << endl;
	cout << "Taxes due for this year: $" << citizen2.taxes << endl << endl;

	return 0;
}

/*
*C:\Users\bryce\CLionProjects\CSCI1\init_struct.exe
Enter income for Tim McGuiness:30000
Name: Tim McGuiness
Social Security Number: 255871234
Taxes due for this year: $10500.00

Enter income for John Kane:60000
Name: John Kane
Social Security Number: 278990582
Taxes due for this year: $17400.00


Process finished with exit code 0
*/