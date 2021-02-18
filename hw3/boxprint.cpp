/**
* boxprint.cpp
* Gabe Pier
* 17 Feb 2021
* hw3 for cs 201
* This code will produce the output of boxer.cpp
*/

#include <iostream>
#include "boxer.h"
#include "collatz.h"
#include "kelvin.h"
using namespace std;

int main() {
	boxer();
	string a;
	cout << "Would you like to make another box? (y/n) ";
	cin >> a;
	while (a == "y") {
		boxer();
		cout << "Would you like to make another box? (y/n) ";
		cin >> a;
	}

	cout << "Additional Program 1" << endl;
	collatz();

	cout << endl;
	cout << "Additional Program 2" << endl;
	double c = 0;
	/* Added an output to prompt the user for a temperature*/
	cout << "Please input a temperature in celsius: ";
	/* Changed the cin to define c, instead of an uninitialized variable.*/
	cin >> c;
	double k = ctok(c);
	/* Added a cout to tell the user what is being output.*/
	cout << c << " degrees celsius = " << k  << " Kelvin" << endl;
	return 0;
}

