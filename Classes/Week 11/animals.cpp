//
// Created by bryce on 3/13/2025.
//

#include "animals.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> loadAnimals(const string &filename) {
    vector<string> animals;
    ifstream file(filename);
    if (!file) {
        cerr << "Error opening file: " << filename << endl;
        return animals;
    }
    string line;
    while (getline(file, line)) {
        if (!line.empty()) {
            animals.push_back(line);
        }
    }
    file.close();
    return animals;
}

string getUserAnimal() {
    string animal;
    cout << "Enter an animal name to search: ";
    getline(cin, animal);
    return animal;
}

int linearSearch(const vector<string> &animals, const string &target, int &comparisons) {
    comparisons = 0;
    for (size_t i = 0; i < animals.size(); i++) {
        comparisons++;
        if (animals[i] == target) {
            return i;
        }
    }
    return -1;
}

int binarySearch(const vector<string> &animals, const string &target, int &comparisons) {
    int low = 0;
    int high = animals.size() - 1;
    comparisons = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        comparisons++;
        if (animals[mid] == target)
            return mid;
        else if (animals[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    vector<string> animals = loadAnimals("animals.txt");
    if (animals.empty()) {
        return 1;
    }
    cout << "Loaded " << animals.size() << " animals." << endl;

    string searchAnimal = getUserAnimal();

    int linearComparisons = 0;
    int linearIndex = linearSearch(animals, searchAnimal, linearComparisons);
    if (linearIndex != -1) {
        cout << "I found " << searchAnimal << " with a linear search at position "
             << (linearIndex + 1) << " after " << linearComparisons << " tries." << endl;
    } else {
        cout << "I could not find " << searchAnimal << ". I tried "
             << animals.size() << " animals." << endl;
    }

    vector<string> sortedAnimals = animals;
    sort(sortedAnimals.begin(), sortedAnimals.end());

    int binaryComparisons = 0;
    int binaryIndex = binarySearch(sortedAnimals, searchAnimal, binaryComparisons);
    if (binaryIndex != -1) {
        cout << "I found " << searchAnimal << " with a binary search at sorted position "
             << (binaryIndex + 1) << " after " << binaryComparisons << " comparisons." << endl;
    } else {
        cout << "I could not find " << searchAnimal << " using binary search. I tried "
             << sortedAnimals.size() << " animals." << endl;
    }

    return 0;
}

/*
*C:\Users\bryce\CLionProjects\CSCI1\animals.exe
Loaded 378 animals.
Enter an animal name to search:Zebra
I found Zebra with a linear search at position 374 after 374 tries.
I found Zebra with a binary search at sorted position 374 after 8 comparisons.

Process finished with exit code 0

C:\Users\bryce\CLionProjects\CSCI1\animals.exe
Loaded 378 animals.
Enter an animal name to search:Cow
 I found Cow with a linear search at position 96 after 96 tries.
I found Cow with a binary search at sorted position 96 after 7 comparisons.

Process finished with exit code 0

C:\Users\bryce\CLionProjects\CSCI1\animals.exe
Loaded 378 animals.
Enter an animal name to search:Beetle
 I found Beetle with a linear search at position 32 after 32 tries.
I found Beetle with a binary search at sorted position 32 after 7 comparisons.

Process finished with exit code 0

C:\Users\bryce\CLionProjects\CSCI1\animals.exe
Loaded 378 animals.
Enter an animal name to search:Bug
 I could not find Bug. I tried 378 animals.
I could not find Bug using binary search. I tried 378 animals.

Process finished with exit code 0
*/