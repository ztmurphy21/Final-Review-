//Rainfall Statistics Program
//Calculates year rainful total and average along with min and max
//Programmer: Zach Murphy on 5-10-2017

#include<iostream>
#include<conio.h>
#include<string>

using namespace std;



int main() {
	//declarations for array
	const int MONTHS_OF_YEAR = 12;
	double rainfall[MONTHS_OF_YEAR];
	string months[12] = { "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL",
		"AUG", "SEP", "OCT", "NOV", "DEC" };
	


	//declarations for calculations
	double totalRain=0, avgRain, maxRain, minRain;

	//intro to user
	 cout << "*********************************************\n";
	 cout << "\t\tRainfall Program:\n\n";


	//get rainfall for each month from user input
	for (int count = 0; count < MONTHS_OF_YEAR; count++) {
		cout << "Enter the rainfall amount for " << months[count] << " : ";
		cin >> rainfall[count];
	}

	//find the highest
	maxRain = rainfall[0];
	for (int count = 1; count < MONTHS_OF_YEAR; count++) {
		if (rainfall[count] > maxRain) {
			maxRain = rainfall[count];
		}
	}

	//find the lowest
	minRain = rainfall[0];
	for (int count = 1; count < MONTHS_OF_YEAR; count++) {
		if (rainfall[count] < minRain) {
			minRain = rainfall[count];
		}
	}

	//find the total
	for (int count = 0; count < MONTHS_OF_YEAR; count++) {
		totalRain += rainfall[count];
	}

	//find average
	avgRain = totalRain / MONTHS_OF_YEAR;

	//output
	cout << "*********************************************\n";
	cout << endl << "*********************************************\n";
	cout << "\t\tResults\n";
	cout << "Total Rainfall for Year: " << totalRain << endl;;
	cout << "Monthly average: " << avgRain << endl;
	cout << "Highest rain: " << maxRain << endl;
	cout << "Lowest rainfall: " << minRain << endl;
	cout << endl << "*********************************************\n";

	_getch();
	return 0;
}