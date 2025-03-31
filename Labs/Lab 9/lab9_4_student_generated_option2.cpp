//
// Created by bryce on 3/31/2025.
//

#include <iostream>
using namespace std;
int main(){
	int numIds;
	cout << "Enter number of IDs: ";
	cin >> numIds;
	if(numIds <= 0) return 1;
	int *ids = new int[numIds];
	cout << "Enter the IDs:" << endl;
	for(int i = 0; i < numIds; i++){
		cin >> ids[i];
	}
	int searchId;
	cout << "Enter search ID: ";
	cin >> searchId;
	bool found = false;
	for(int i = 0; i < numIds; i++){
		if(ids[i] == searchId){
			found = true;
			break;
		}
	}
	if(found)
		cout << "ID found" << endl;
	else
		cout << "ID not found" << endl;
	delete [] ids;
	return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab9_4_student_generated_option2.exe
Enter number of IDs:4
 Enter the IDs:
96
97
98
99
Enter search ID:67
 ID not found

Process finished with exit code 0
*/