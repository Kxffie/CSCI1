//
// Created by bryce on 3/5/2025.
//

#include "lab6_2_newproverb.h"
#include <iostream>
#include <string>
using namespace std;

void writeProverb(string ending);

int main() {
	string ending;
	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their" << endl;
	cout << "Please input the word you would like to complete the proverb:" << endl;
	cin >> ending;
	cout << endl;
	writeProverb(ending);
	return 0;
}

void writeProverb(string ending) {
	cout << "Now is the time for all good men to come to the aid of their " << ending << endl;
}

/*
Given the phrase:
Now is the time for all good men to come to the aid of their
Please input the word you would like to complete the proverb:
1

Now is the time for all good men to come to the aid of their 1
*/