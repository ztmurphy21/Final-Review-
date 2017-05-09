//******************************************************************
//Calories burned program
//write a program that displays the number of callories burned after 
// 5, 10, 15, 20, 25, ad 30 minutes of work out, assume 3.6 calories
// is burned per minute. 
//******************************************************************
//Programmer: Zach Murphy on 5-8-2017

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	double calPerMin = 3.6, minutesCount = 5;
	cout << "***********************************************************************\n";
	cout << "\t\t Calories per Minute Table\n";
	
	do {
		cout << "In " << minutesCount << " minutes you will burn " << calPerMin * minutesCount << " calories.\n";
		minutesCount +=5;
	} while (minutesCount <= 30);
	cout << endl;
	cout << "***********************************************************************\n";


	cout << "Press any key to exit...";

	_getch();
	return 0;
}