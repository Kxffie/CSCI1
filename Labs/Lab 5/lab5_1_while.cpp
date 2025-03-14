//
// Created by bryce on 2/12/2025.
//

#include "lab5_1_while.h"
#include <iostream>
using namespace std;
int main()
{
	char letter = ' ';
	cout << "Enter letters (enter 'x' to exit):" << endl;
	while (letter != 'x')
	{
		cout << "Enter a letter: ";
		cin >> letter;
		cout << "You entered: " << letter << endl;
		if(letter != 'x')
			cout << "(Enter 'x' when you are finished.)" << endl;
	}
	cout << "Goodbye!" << endl;
	return 0;
}

/*
*Enter letters (enter 'x' to exit):
Enter a letter:2
You entered: 2
(Enter 'x' when you are finished.)
Enter a letter:a
You entered: a
(Enter 'x' when you are finished.)
Enter a letter:x
You entered: x
Goodabye!

Process finished with exit code 0
*/