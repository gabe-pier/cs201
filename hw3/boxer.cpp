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

/* Loop for printing the top half and bottom half of the box. */
void boxtop_bot(int &n, string &boxstring) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n + size(boxstring) + 2; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

/* Loop for printing the middle sections of the box without text. */
void boxmid(int& n, string& boxstring) {
	for (int i = 0; i < n; i++) {
		cout << "*";
	}
	for (int j = 0; j < size(boxstring) + 2; j++) {
		cout << " ";
	}
	for (int i = 0; i < n; i++) {
		cout << "*";
	}
	cout << endl;
}

/* Loop for printing the text section of the box. */
void boxtext(int& n, string& boxstring) {
	for (int i = 0; i < n; i++) {
		cout << "*";
	}
	cout << " " << boxstring << " ";
	for (int i = 0; i < n; i++) {
		cout << "*";
	}
	cout << endl;
}

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
	boxtop_bot(n, boxstring);
	boxmid(n, boxstring);
	boxtext(n, boxstring);
	boxmid(n, boxstring);
	boxtop_bot(n, boxstring);
}

