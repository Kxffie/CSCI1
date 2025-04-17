//
// Created by bryce on 3/21/2025.
//

#include "opener.h"
#include <iostream>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

char* stringStart(char* word) {
    int count = 0;
    while (word[count] != '\0' && !isVowel(word[count])) {
        count++;
    }

    char* result = new char[count + 1];

    for (int i = 0; i < count; i++) {
        result[i] = word[i];
    }
    result[count] = '\0';

    return result;
}

int main() {
    char input[100];
    cout << "Enter a word: ";
    cin >> input;

    char* lettersBeforeVowel = stringStart(input);
    cout << "Characters before the first vowel: " << lettersBeforeVowel << endl;

    delete [] lettersBeforeVowel;
    lettersBeforeVowel = nullptr;

    return 0;
}