//
// Created by bryce on 3/31/2025.
//

#include <iostream>
using namespace std;
float sumSales(float *sales, int num){
	float sum = 0;
	for(int i = 0; i < num; i++){
		sum += sales[i];
	}
	return sum;
}
float averageSales(float *sales, int num){
	float s = sumSales(sales, num);
	return s / num;
}
int main(){
	int numSales;
	cout << "Enter number of monthly sales: ";
	cin >> numSales;
	if(numSales <= 0) return 1;
	float *sales = new float[numSales];
	cout << "Enter monthly sales:" << endl;
	for(int i = 0; i < numSales; i++){
		cin >> sales[i];
	}
	float total = sumSales(sales, numSales);
	float avg = averageSales(sales, numSales);
	cout << "Yearly total: " << total << endl;
	cout << "Average monthly sale: " << avg << endl;
	delete [] sales;
	return 0;
}

/*
C:\Users\bryce\CLionProjects\CSCI1\lab9_4_student_generated_option3.exe
Enter number of monthly sales:4
Enter monthly sales:
1290.89
905.95
1567.98
994.83
Yearly total: 4759.65
Average monthly sale: 1189.91

Process finished with exit code 0
*/