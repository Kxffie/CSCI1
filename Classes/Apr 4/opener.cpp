//
// Created by bryce on 3/21/2025.
//

#include "opener.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	const int SIZE = 7;
	string days[SIZE] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

	for (const string* p = days; p < days + SIZE; ++p) {
		cout << *p << endl;
	}

	return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\opener.exe
Monday
Tuesday
Wednesday
Thursday
Friday
Saturday
Sunday

Process finished with exit code 0
*/