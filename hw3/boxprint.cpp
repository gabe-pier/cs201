/**
* boxprint.cpp
* Gabe Pier
* 17 Feb 2021
* hw3 for cs 201
* This code will produce the output of boxer.cpp
*/

#include <iostream>
#include "boxer.h"
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
	return 0;
}

