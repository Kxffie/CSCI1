//
// Created by bryce on 4/12/2025.
//

#include <iostream>
#include <fstream>
using namespace std;

void readLastNameNoGetline() {
	char last[10];
	cout << "Enter your last name (max 9 characters): ";
	cin >> last;
	cout << "Your last name is: " << last << endl;
}

void readLastNameWithGetline() {
	char last[10];
	cin.ignore();
	cout << "Enter your last name (max 9 characters): ";
	cin.getline(last, 10);
	cout << "Your last name is: " << last << endl;
}

void readGrades() {
	const int MAXNAME = 20;
	ifstream inData("grades.txt");
	if (!inData) {
		cout << "Error opening grades.txt" << endl;
		return;
	}
	char name[MAXNAME + 1];
	float average;
	while (inData.get(name, MAXNAME + 1)) {
		inData >> average;
		cout << name << " has a(n) " << average << " average" << endl;
		inData.ignore(80, '\n');
	}
	inData.close();
}

int main() {
	int option;
	cout << "Select an option:" << endl;
	cout << "  1. Read last name using >>" << endl;
	cout << "  2. Read last name using getline" << endl;
	cout << "  3. Display grades from grades.txt" << endl;
	cout << "Enter option number: ";
	cin >> option;

	switch(option) {
		case 1:
			readLastNameNoGetline();
		break;
		case 2:
			readLastNameWithGetline();
		break;
		case 3:
			readGrades();
		break;
		default:
			cout << "Invalid option." << endl;
		break;
	}
	return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab10_3_getline_get.exe
Select an option:
  1. Read last name using >>
  2. Read last name using getline
  3. Display grades from grades.txt
Enter option number:2
 Enter your last name (max 9 characters):Starr
 Your last name is: Starr

Process finished with exit code 0

C:\Users\bryce\CLionProjects\CSCI1\lab10_3_getline_get.exe
Select an option:
  1. Read last name using >>
  2. Read last name using getline
  3. Display grades from grades.txt
Enter option number:3
 Adara Starr has a(n) 94 average
David Starr has a(n) 91 average
Sophia Starr has a(n) 94 average
Maria Starr has a(n) 91 average
Danielle DeFino has a(n) 94 average
Dominic DeFino has a(n) 98 average
McKenna DeFino has a(n) 92 average
Taylor McIntire has a(n) 99 average
Torrie McIntire has a(n) 91 average
Emily Garrett has a(n) 97 average
Lauren Garrett has a(n) 92 average
Marlene Starr has a(n) 83 average
Donald DeFino has a(n) 73 average

Process finished with exit code 0
*/