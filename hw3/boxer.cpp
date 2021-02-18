/**
* boxer.cpp
* Gabe Pier
* 17 Feb 2021
* hw3 for cs 201
* This code will take an integer and create a box of the size int.
*/

#include <iostream>
#include "boxer.h"
using namespace std;

void boxer() {
	int n;
	string boxstring;
	cout << "Please input a positive integer: ";
	cin >> n;
	cout << "Please input a string: ";
	cin >> boxstring;
	if (n <= 0) {
		cout << "please input a positive integer! ";
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * size(boxstring) + 2; j++) {
			cout << "*";
		}
		cout << endl;
	}
}