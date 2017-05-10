//Rainfall Statistics Program
//Calculates year rainful total and average along with min and max
//Programmer: Zach Murphy on 5-10-2017

#include<iostream>
#include<conio.h>

using namespace std;



int main() {
	//declarations for array
	const int MONTHS_OF_YEAR = 12;
	double rainfall[MONTHS_OF_YEAR];
	int count;
	const string MONTHS[12] = { "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL",
		"AUG", "SEP", "OCT", "NOV", "DEC" };

	int monthCounter = 0;

	//declarations for calculations
	double totalRain, avgRain, maxRain, minRain;

	//get rainfall for each month from user input
	for (count=0 ; count < MONTHS_OF_YEAR; count++) {
		cout << "Enter the rainfall amount for " << MONTHS[count] << " : ";
		cout << MONTHS[count];

	}
	return 0; 
}