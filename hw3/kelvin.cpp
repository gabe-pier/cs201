/**
* kelvin.cpp
* Gabe Pier
* 17 Feb 2021
* hw3 for cs 201
* This code will take the code from broken kelvin, and fix the errors.
*/

#include <iostream>
#include "kelvin.h"
using namespace std;

double ctok(double &c) {
	/* Created a while loop to make sure a valid temperature is given.*/
	while (c < -275.13) {
		cout << "please input a valid temperature for c: ";
		cin >> c;
	}
	int k = c + 275.13;
	/* Changed the return to return k instead of the type.*/
	return k;
}
/* The rest of the corrections will be made in main() in boxprint.cpp*/