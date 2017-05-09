//****************************************************
//Kinetic Energy Program
//This program calculates the kinetic energy
//****************************************************
//Programmer: Zach Murphy on 5-8-2017

#include <iostream>;
#include <conio.h>;
#include <math.h>;

using namespace std;

//function prototype
double kineticEnergy(double, double);


int main() {
	//variable declarations
	double mass, velocity, kinetic; 
	char continueProgram;

	//intro
	cout << "\t\t Kinetic Energy Calculator\n";
	do {
		cout << endl;
		cout << "*************************************************************\n";
		//get mass
		cout << "Please enter the objects mass (kilograms): ";
		cin >> mass;

		//get velocity
		cout << "Please enter the objects velocity (meters per second)";
		cin >> velocity;

		//cal function to calculate
		kinetic = kineticEnergy(mass, velocity);

		//output result
		cout << "The Kinetic Energy of the object is " << kinetic << endl;
		cout << "*************************************************************\n";

		//another round?
		cout << "Would you like to make another calculator? (Y/N)";
		cin >> continueProgram;
	} while (continueProgram == 'Y' || continueProgram == 'y');

	cout << endl;

	//allow user to exit program
	cout << "Press any key to exit...";
	_getch();

	return 0;
}

//function to alculate kinetic energy
double kineticEnergy(double objectMass, double objectVelocity) {
	//variable declarations
	double keObject;
	keObject = .5 * objectMass * pow(objectVelocity, 2);
	return keObject;
}