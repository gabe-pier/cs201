/**
* mileskm.cpp
* Gabe Pier
* 29 Jan 2021
* hw1 for cs 201
* This code will convert any given number of miles into km.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
	float mi;
	cout << "input miles:\n";
	cin >> mi;
	cout << mi * 1.609;
	return 0;
}