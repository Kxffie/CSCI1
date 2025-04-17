//
// Created by bryce on 4/9/2025.
//

#include <iostream>
#include <sstream>
#include <cctype>
#include <string>

using namespace std;

bool isStandardVowel(char c) {
	c = tolower(c);
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

string convertWord(const string &word) {
	if (word.empty())
		return word;

	if (isStandardVowel(word[0])) {
		if (tolower(word[0]) == 'a')
			return word + "way";
		else
			return word + "hay";
	}

	if (tolower(word[0]) == 'y') {
		return word + "ay";
	}

	size_t pos = string::npos;
	for (size_t i = 0; i < word.size(); i++) {
		if (isStandardVowel(word[i])) {
			pos = i;
			break;
		}
	}

	if (pos != string::npos) {
		return word.substr(pos) + "" + word.substr(0, pos) + "ay";
	} else {
		if (word.find_first_of("yY") != string::npos) {
			return word + "way";
		} else {
			return word + "ay";
		}
	}
}

int main() {
	cout << "Enter a phrase: ";
	string input;
	getline(cin, input);

	istringstream iss(input);
	string word;
	while (iss >> word) {
		cout << convertWord(word) << " ";
	}
	cout << endl;

	return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\exitticket.exe
Enter a phrase:I went to Rome to see the pope
 Ihay entway otay omeRay otay eesay ethay opepay

Process finished with exit code 0
*/