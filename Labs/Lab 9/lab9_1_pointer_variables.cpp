//
// Created by bryce on 3/31/2025.
//

#include <iostream>
using namespace std;

int main() {
	int length;
	int width;
	int area;

	int *lengthPtr = nullptr;
	int *widthPtr = nullptr;

	cout << "Please input the length of the rectangle" << endl;
	cin >> length;
	cout << "Please input the width of the rectangle" << endl;
	cin >> width;

	lengthPtr = &length;
	widthPtr = &width;

	area = (*lengthPtr) * (*widthPtr);
	cout << "The area is " << area << endl;

	if (*lengthPtr > *widthPtr)
		cout << "The length is greater than the width" << endl;
	else if (*widthPtr > *lengthPtr)
		cout << "The width is greater than the length" << endl;
	else
		cout << "The width and length are the same" << endl;

	return 0;
}
/*
*C:\Users\bryce\CLionProjects\CSCI1\lab9_1_pointer_variables.exe
Please input the length of the rectangle
10
Please input the width of the rectangle
5
The area is 50
The length is greater than the width

Process finished with exit code 0
*/