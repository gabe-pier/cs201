/*
* shrinking.cpp
* Gabe Pier
* 23 Feb 2021
* Lab 14 for cs 201
*/

#include <iostream>
#include "shrinking.h"
using namespace std;

void shrink() {
	string s;
	cout << "Please input a string: ";
	cin >> s;
	for (int i = 0; i <= size(s); i++) {
		string r;
		r = s.substr(0, size(s) - i);
		cout << r << endl;
	}
}