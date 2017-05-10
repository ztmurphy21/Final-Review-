//Largest/Smallest Array Values
//Allows the user to enter 10 values into an array
//Program will display largest and smallest values 
//stored in the array
//Programmer: Zach Murphy on 5-9-2017

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	//declarations
	const int NUM_NUMBERS = 10;
	int numbers[NUM_NUMBERS];
	int countHigh, countLowest;
	int highest, lowest;

	//intro
	cout << "*************************************************\n";
	cout << "Please enter ten numbers...\n";
	cout << endl;

	//get 10 numbers from user and assign in array
	for (int x = 0; x <  NUM_NUMBERS; x++) {
		cout << "Enter number " << x + 1 << " :";
		cin >> numbers[x];
	}

	//get highest value
	highest = numbers[0];
	for (countHigh = 1; countHigh < NUM_NUMBERS; countHigh++) {
		if (numbers[countHigh] > highest)
			highest = numbers[countHigh];
	}

	//get lowest value
	lowest = numbers[0];
	for (countLowest = 1; countLowest < NUM_NUMBERS; countLowest++) {
		if (numbers[countLowest] < countLowest)
			lowest = numbers[countLowest];
	}

	//output results
	cout << endl;
	cout << "The highest number is " <<  highest << " . \n";
	cout << "The lowest number is " << lowest << " .\n\n";
	cout << "*************************************************\n";

	//allow user to exit
	cout << "Press any key to exit...";
	_getch();

	return 0;
}