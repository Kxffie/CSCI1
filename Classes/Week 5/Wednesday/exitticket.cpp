//
// Created by bryce on 2/12/2025.
//

#include "exitticket.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	ifstream file("./nums.txt");
	if (!file) {
		cerr << "Error: Could not open the file!" << endl;
		return 1;
	}

	vector<int> numbers;
	int num;
	double sum = 0;

	while (file >> num) {
		numbers.push_back(num);
		sum += num;
	}

	file.close();

	cout << "Numbers read from file:\n";
	for (const int n : numbers) {
		cout << n << " ";
	}
	cout << endl;

	if (!numbers.empty()) {
		const double average = sum / numbers.size();
		cout << "Average: " << fixed << setprecision(2) << average << endl;
	} else {
		cout << "No numbers found in the file." << endl;
	}

	return 0;
}