//
// Created by bryce on 4/12/2025.
//

#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(const char* s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i])
            return false;
    }
    return true;
}

int main() {
    char input[51];
    cout << "Enter a string (max 50 characters): ";
    cin.getline(input, 51);

    if (isPalindrome(input))
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab10_5_palindrome.exe
Enter a string (max 50 characters):racecar
The string is a palindrome.

Process finished with exit code 0
*/