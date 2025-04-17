//
// Created by bryce on 4/12/2025.
//

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int countLetters(const char* pass) {
    int count = 0;
    for (int i = 0; pass[i] != '\0'; i++) {
        if(isalpha(pass[i]))
            count++;
    }
    return count;
}

int countDigits(const char* pass) {
    int count = 0;
    for (int i = 0; pass[i] != '\0'; i++) {
        if(isdigit(pass[i]))
            count++;
    }
    return count;
}

bool allLowerCaseLetters(const char* pass) {
    for (int i = 0; pass[i] != '\0'; i++) {
        if(isalpha(pass[i]) && !islower(pass[i]))
            return false;
    }
    return true;
}

bool testPassWordV1(const char* pass) {
    int len = strlen(pass);
    int letters = countLetters(pass);
    int digits = countDigits(pass);
    return (len == 8 && letters == 5 && digits == 3);
}

bool testPassWordV2(const char* pass) {
    int len = strlen(pass);
    int letters = countLetters(pass);
    int digits = countDigits(pass);
    return (len == 10 && letters == 4 && digits == 6);
}

bool testPassWordV3(const char* pass) {
    if(!testPassWordV2(pass))
        return false;
    return allLowerCaseLetters(pass);
}

int main() {
    int mode;
    cout << "Select password validation mode:" << endl;
    cout << "  1: 8 characters (5 letters, 3 digits)" << endl;
    cout << "  2: 10 characters (4 letters, 6 digits)" << endl;
    cout << "  3: 10 characters (4 lowercase letters, 6 digits)" << endl;
    cout << "Enter mode (1-3): ";
    cin >> mode;
    cin.ignore();

    char password[50];
    cout << "Enter password: ";
    cin.getline(password, 50);

    bool valid = false;
    if(mode == 1)
        valid = testPassWordV1(password);
    else if(mode == 2)
        valid = testPassWordV2(password);
    else if(mode == 3)
        valid = testPassWordV3(password);
    else {
        cout << "Invalid mode selected." << endl;
        return 1;
    }

    if(valid) {
        cout << "Password is valid. Please wait - your password is being verified." << endl;
    } else {
        cout << "Invalid password. Enter a password with the following requirements:" << endl;
        if(mode == 1)
            cout << "  Exactly 8 characters with 5 letters and 3 digits." << endl;
        else if(mode == 2)
            cout << "  Exactly 10 characters with 4 letters and 6 digits." << endl;
        else if(mode == 3)
            cout << "  Exactly 10 characters with 4 lowercase letters and 6 digits." << endl;
    }
    cout << "Letter count: " << countLetters(password) << endl;
    cout << "Digit count: " << countDigits(password) << endl;
    return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab10_1_password_validator.exe
Select password validation mode:
  1: 8 characters (5 letters, 3 digits)
  2: 10 characters (4 letters, 6 digits)
  3: 10 characters (4 lowercase letters, 6 digits)
Enter mode (1-3):1
 Enter password:the476NEw
 Invalid password. Enter a password with the following requirements:
  Exactly 8 characters with 5 letters and 3 digits.
Letter count: 6
Digit count: 3

Process finished with exit code 0

C:\Users\bryce\CLionProjects\CSCI1\lab10_1_password_validator.exe
Select password validation mode:
  1: 8 characters (5 letters, 3 digits)
  2: 10 characters (4 letters, 6 digits)
  3: 10 characters (4 lowercase letters, 6 digits)
Enter mode (1-3):3
 Enter password:myNUM741
 Invalid password. Enter a password with the following requirements:
  Exactly 10 characters with 4 lowercase letters and 6 digits.
Letter count: 5
Digit count: 3

Process finished with exit code 0

C:\Users\bryce\CLionProjects\CSCI1\lab10_1_password_validator.exe
Select password validation mode:
  1: 8 characters (5 letters, 3 digits)
  2: 10 characters (4 letters, 6 digits)
  3: 10 characters (4 lowercase letters, 6 digits)
Enter mode (1-3):1
 Enter password:myNUM741
 Password is valid. Please wait - your password is being verified.
Letter count: 5
Digit count: 3

Process finished with exit code 0
 */