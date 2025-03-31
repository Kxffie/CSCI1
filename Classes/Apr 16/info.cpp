//
// Created by bryce on 3/31/2025.
//

/*
Write a C++ program that creates a struct representing an address: street address, city, state, zip-code, country.
 */

#include <iostream>
#include <string>
using namespace std;

struct Address {
    string streetAddress;
    string city;
    string state;
    string zipCode;
    string country;
};

int main() {
	Address address;

	cout << "Enter street address: ";
	getline(cin, address.streetAddress);

	cout << "Enter city: ";
	getline(cin, address.city);

	cout << "Enter state: ";
	getline(cin, address.state);

	cout << "Enter zip code: ";
	getline(cin, address.zipCode);

	cout << "Enter country: ";
	getline(cin, address.country);

	cout << "Address: " << address.streetAddress << ", " << address.city << ", " << address.state << " " << address.zipCode << ", " << address.country << endl;

	return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\info.exe
Enter street address:201 Donaghey Ave
Enter city:Conway
Enter state:Ar
Enter zip code:72035
Enter country:United States
Address: 201 Donaghey Ave, Conway, Ar 7203
5, United States

Process finished with exit code 0
*/