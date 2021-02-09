/**
* part1.cpp
* Gabe Pier
* 05 Feb 2021
* Lab 5 for cs 201
*/

#include <iostream>
using std::cout;
using std::cin;

int main() {
int x;
	cout << "input an integer: ";
	cin >> x;
	switch (x % 3) {
	case 0:
		cout << x << " times 5 is: " << x * 5;
		break;
	case 1:
		cout << "2 to the " << x << " power is: " << pow(2, x);
		break;
	case 2:
		cout << x << " squared is: " << x * x;
		break;
	}
}