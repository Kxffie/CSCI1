//
// Created by bryce on 4/21/2025.
//

#include <iostream>
#include <iomanip>
using namespace std;

struct rectangle {
	float length;
	float width;
	float area;
	float perimeter;
};

int main() {
	rectangle box;
	cout << "Enter the length of a rectangle: ";
	cin >> box.length;
	cout << "Enter the width of a rectangle: ";
	cin >> box.width;

	box.area = box.length * box.width;
	box.perimeter = 2 * (box.length + box.width);

	cout << fixed << showpoint << setprecision(2);
	cout << "Area: " << box.area << endl;
	cout << "Perimeter: " << box.perimeter << endl;

	if (box.length == box.width) {
		cout << "This is a square." << endl;
	}

	return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\rect_struct.exe
Enter the length of a rectangle:7
Enter the width of a rectangle:7
Area: 49.00
Perimeter: 28.00
This is a square.

Process finished with exit code 0
*/