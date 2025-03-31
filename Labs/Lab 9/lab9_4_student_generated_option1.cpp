//
// Created by bryce on 3/31/2025.
//

#include <iostream>
using namespace std;
void bubbleSort(float *scores, int size){
	bool swapped;
	do{
		swapped = false;
		for(int i = 0; i < size - 1; i++){
			if(scores[i] > scores[i + 1]){
				float temp = scores[i];
				scores[i] = scores[i + 1];
				scores[i + 1] = temp;
				swapped = true;
			}
		}
	} while(swapped);
}
int main(){
	int numScores;
	cout << "Enter number of scores: ";
	cin >> numScores;
	if(numScores <= 0) return 1;
	float *scores = new float[numScores];
	float total = 0;
	cout << "Enter scores:" << endl;
	for(int i = 0; i < numScores; i++){
		cin >> scores[i];
		total += scores[i];
	}
	float average = total / numScores;
	cout << "Average score: " << average << endl;
	bubbleSort(scores, numScores);
	cout << "Scores in ascending order: ";
	for(int i = 0; i < numScores; i++){
		cout << scores[i] << " ";
	}
	cout << endl;
	delete [] scores;
	return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab9_4_student_generated_option1.exe
Enter number of scores:5
 Enter scores:
100
90
95
100
90
Average score: 95
Scores in ascending order: 90 90 95 100 100

Process finished with exit code 0
*/