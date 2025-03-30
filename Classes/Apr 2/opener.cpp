//
// Created by bryce on 3/21/2025.
//

#include "opener.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	string firstName = "Bryce";
	string lastName = "Riordan";
	string *ptr = &firstName;

	cout << "Address of firstName: " << ptr << endl;
	cout << "Value of firstName: " << *ptr << endl;

	ptr = &lastName;
	cout << "Address of lastName: " << ptr << endl;
	cout << "Value of lastName: " << *ptr << endl;

	return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\opener.exe
Address of firstName: 0xf0abbff660
Value of firstName: Bryce
Address of lastName: 0xf0abbff640
Value of lastName: Riordan

Process finished with exit code 0
*/