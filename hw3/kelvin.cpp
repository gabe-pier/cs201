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

double ctok(double c) {
	while (c < -275.13) {
		cout << "please input a valid temperature for c: ";
		cin >> c;
	}
	int k = c + 275.13;
}