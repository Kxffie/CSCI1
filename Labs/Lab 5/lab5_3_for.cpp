//
// Created by bryce on 2/14/2025.
//

#include "lab5_3_for.h"
#include <iostream>
using namespace std;
int main()
{
	int n, m;
	int total = 0;
	float count = 0;

	cout << "Enter the starting integer (n): ";
	cin >> n;
	cout << "Enter the ending integer (m), where m >= n: ";
	cin >> m;

	if(m < n) {
		cout << "Invalid input: m must be greater than or equal to n." << endl;
		return 1;
	}

	for (int i = n; i <= m; i++)
	{
		cout << total << "\t" << count<< endl;
		total += i;
		count++;
	}
	const float mean = static_cast<float>(total) / count;
	cout << "The mean of the integers from " << n << " to " << m
		 << " is " << mean << endl;

	return 0;
}

/*
*Enter the starting integer (n):3
Enter the ending integer (m), where m >= n:9
0   0
3       1
7       2
12      3
18      4
25      5
33      6
The mean of the integers from 3 to 9 is 6
*/