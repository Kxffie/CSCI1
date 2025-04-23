//
// Created by bryce on 4/21/2025.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct circle {
	float centerX;
	float centerY;
	float radius;
	float area;
	float circumference;
	float distance_from_origin;
};

const float PI = 3.14159f;

int main() {
	circle circ[6];
	for (int i = 0; i < 6; i++) {
		cout << "Enter radius of circle " << (i + 1) << ": ";
		cin >> circ[i].radius;
		cout << "Enter x-coordinate of center: ";
		cin >> circ[i].centerX;
		cout << "Enter y-coordinate of center: ";
		cin >> circ[i].centerY;

		circ[i].area = PI * pow(circ[i].radius, 2.0f);
		circ[i].circumference = 2 * PI * circ[i].radius;
		circ[i].distance_from_origin =
			sqrt(pow(circ[i].centerX, 2.0f) + pow(circ[i].centerY, 2.0f));
		cout << endl;
	}

	int closest = 0;
	for (int i = 1; i < 6; i++) {
		if (circ[i].distance_from_origin < circ[closest].distance_from_origin) {
			closest = i;
		}
	}

	cout << "Circle " << (closest + 1) << " is closest to the origin" << endl << endl;

	cout << fixed << showpoint << setprecision(2);
	for (int i = 0; i < 6; i++) {
		cout << "Circle " << (i + 1) << ":" << endl;
		cout << "Area: " << circ[i].area << endl;
		cout << "Circumference: " << circ[i].circumference << endl << endl;
	}

	return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab11_5_circles_array.exe
Enter radius of circle 1:10
Enter x-coordinate of center:5
Enter y-coordinate of center:7

Enter radius of circle 2:20
Enter x-coordinate of center:1
Enter y-coordinate of center:3

Enter radius of circle 3:60
Enter x-coordinate of center:20
Enter y-coordinate of center:3

Enter radius of circle 4:100
Enter x-coordinate of center:40
Enter y-coordinate of center:20

Enter radius of circle 5:2
Enter x-coordinate of center:5
Enter y-coordinate of center:1

Enter radius of circle 6:8
Enter x-coordinate of center:2
Enter y-coordinate of center:3

Circle 2 is closest to the origin

Circle 1:
Area: 314.16
Circumference: 62.83

Circle 2:
Area: 1256.64
Circumference: 125.66

Circle 3:
Area: 11309.72
Circumference: 376.99

Circle 4:
Area: 31415.90
Circumference: 628.32

Circle 5:
Area: 12.57
Circumference: 12.57

Circle 6:
Area: 201.06
Circumference: 50.27


Process finished with exit code 0
*/