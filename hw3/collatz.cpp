/**
* collatz.cpp
* Gabe Pier
* 17 Feb 2021
* hw3 for cs 201
* This code will execute the collatz conjecture.
*/

#include <iostream>
#include "collatz.h"
using namespace std;

void collatz() {
	int n;
	string boxstring;
	cout << "Please input a positive integer: ";
	cin >> n;
	while (n <= 0) {
		cout << "please input a positive integer! ";
		cin >> n;
	}
	cout << n;
	while (n > 1) {
		if (n % 2 == 0) {
			n = n / 2;
			cout << " " << n;
		}
		else {
			n = 3 * n + 1;
			cout << " " << n;
		}
	}
}