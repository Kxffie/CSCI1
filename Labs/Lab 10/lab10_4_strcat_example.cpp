//
// Created by bryce on 4/12/2025.
//

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int variant;
	cout << "Select variant:" << endl;
	cout << "  1: string1 size 25" << endl;
	cout << "  2: string1 size 20" << endl;
	cout << "Enter variant (1 or 2): ";
	cin >> variant;

	if (variant == 1) {
		char string1[25] = "Total Eclipse ";
		char string2[11] = "of the Sun";
		cout << "string1: " << string1 << endl;
		cout << "string2: " << string2 << endl;
		strcat(string1, string2);
		cout << "After concatenation, string1: " << string1 << endl;
	}
	else if (variant == 2) {
		char string1[20] = "Total Eclipse ";
		char string2[11] = "of the Sun";
		cout << "string1: " << string1 << endl;
		cout << "string2: " << string2 << endl;
		strcat(string1, string2);
		cout << "After concatenation, string1: " << string1 << endl;
	}
	else {
		cout << "Invalid variant." << endl;
	}
	return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab10_4_strcat_example.exe
Select variant:
1: string1 size 25
2: string1 size 20
Enter variant (1 or 2):1
string1: Total Eclipse
string2: of the Sun
After concatenation, string1: Total Eclipse of the Sun

Process finished with exit code 0

C:\Users\bryce\CLionProjects\CSCI1\lab10_4_strcat_example.exe
Select variant:
  1: string1 size 25
  2: string1 size 20
Enter variant (1 or 2):2
 string1: Total Eclipse
string2: of the Sun
After concatenation, string1: Total Eclipse of the Sun

Process finished with exit code 0

*/