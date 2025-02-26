//
// Created by bryce on 2/14/2025.
//

#include "lab5_6_waterfall.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const float g = 9.8;  // Acceleration due to gravity (m/s^2)
	float bridgeHeight;   // Height of the bridge in meters
	int fallTime;         // Number of seconds the watermelon falls

	cout << "Enter the height of the bridge (in meters): ";
	cin >> bridgeHeight;
	cout << "Enter the number of seconds the watermelon falls: ";
	cin >> fallTime;

	cout << "\nTime (s)" << "\t" << "Distance Fallen (m)" << endl;
	cout << "------------------------------------" << endl;

	for (int t = 0; t <= fallTime; t++)
	{
		float distance = 0.5 * g * t * t;
		cout << setw(8) << t << "\t" << setw(20)
			 << fixed << setprecision(2) << distance << endl;
	}

	float totalDistance = 0.5 * g * fallTime * fallTime;

	if (totalDistance > bridgeHeight)
	{
		cout << "\nWarning: The total distance fallen (" << totalDistance
			 << " m) exceeds the height of the bridge (" << bridgeHeight << " m)." << endl;
	}
	else
	{
		cout << "\nThe watermelon falls safely within the bridge height." << endl;
	}

	return 0;
}

/*
*Enter the height of the bridge (in meters):10
Enter the number of seconds the watermelon falls:2

Time (s)        Distance Fallen (m)
------------------------------------
0                        0.00
1                        4.90
2                       19.60

Warning: The total distance fallen (19.60 m) exceeds the height of the bridge (10.00 m).

Process finished with exit code 0
*/