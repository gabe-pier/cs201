/**
* part1.cpp
* Gabe Pier
* 06 Feb 2021
* Lab 6 for cs 201
*/

#include <iostream>
using std::cout;
using std::cin;
using std::string;

int main() {
	string len;
	cout << "input a string: ";
	cin >> len;
	cout << "your input: " << len << "\nThe length of the string is: " << len.length();
	return 0;
}