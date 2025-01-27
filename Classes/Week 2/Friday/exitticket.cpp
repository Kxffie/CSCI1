//
// Created by bryce on 1/24/2025.
//

#include "exitticket.h"
#include <iostream>
using namespace std;

/*
In honor of this momentous event, let's go to Cheapo Burgers and let our hair down.

But Cheapo needs help.  They couldn't afford the IT bill, and need someone to write a calculator for their customers to help them with their food bills.

Requirements:

Add three items to the bill, both name and price.
Display both the item name and the price.  Try formatting with '\t'
Display the sub-total the price of those three items.
Then display the taxes, both rate and amount:
Arkansas State Sales tax: 6.5%
Faulkner County Sales Tax: .5%
Conway Municipal Sales Tax: 1.75%
Remember that we don't get taxed on tax--so all tax rates should be calculated on the subtotal.
Display a new subtotal, adding both the price of the food and the sales tax.
Provide three suggestions for tip and display what the total charge (food, tax, and tip) would be for each:
15%,
20%,
25%
 */

#include <iostream>
using namespace std;

int main() {
	struct Item { string name; float price; };
	Item items[] = {{"Burger", 5.99}, {"Fries", 2.99}, {"Drink", 1.99}};

	float subtotal = 0;
	for (auto &item : items) {
		cout << item.name << "\t\t" << item.price << endl;
		subtotal += item.price;
	}

	float taxRates[] = {0.065, 0.005, 0.0175};
	string taxNames[] = {"Arkansas State", "Faulkner County", "Conway Municipal"};
	float totalTax = 0;

	cout << "Subtotal: " << subtotal << endl;
	for (int i = 0; i < 3; i++) {
		float taxAmount = subtotal * taxRates[i];
		cout << taxNames[i] << " Sales Tax (" << taxRates[i] * 100 << "%): " << taxAmount << endl;
		totalTax += taxAmount;
	}
0
	float total = subtotal + totalTax;
	cout << "Total: " << total << endl;
	for (int tip : {15, 20, 25})
		cout << tip << "% Tip: " << total * (tip / 100.0) << endl;

	return 0;
}
