//
// Created by bryce on 4/21/2025.
//

#include <iostream>
#include <iomanip>
using namespace std;

struct dimensions {
	float length;
	float width;
};

struct rectangle {
	float area;
	float perimeter;
	dimensions sizes;
};

int main() {
	rectangle box;
	cout << "Enter the length of a rectangle: ";
	cin >> box.sizes.length;
	cout << "Enter the width of a rectangle: ";
	cin >> box.sizes.width;

	box.area = box.sizes.length * box.sizes.width;
	box.perimeter = 2 * (box.sizes.length + box.sizes.width);

	cout << fixed << showpoint << setprecision(2);
	cout << "The area of the rectangle is " << box.area << endl;
	cout << "The perimeter of the rectangle is " << box.perimeter << endl;

	return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab11_4_nestedRect_struct.exe
Enter the length of a rectangle:9
Enter the width of a rectangle:6
The area of the rectangle is 54.00
The perimeter of the rectangle is 30.00

Process finished with exit code 0
*/