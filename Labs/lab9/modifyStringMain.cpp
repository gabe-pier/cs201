/**
* modifyStringMain.cpp
* Gabe Pier
* 14 Feb 2021
* Lab 9 for cs 201
*/

#include <iostream>
#include <string>
#include "modifyString.h"
using namespace std;

int main() {
	int a, b, c;
	cout << "input 3 integers: ";
	cin >> a >> b >> c;
	string stringInMain = "number";
	cout << "length: " << modifyString(stringInMain, a) << std::endl;
	cout << "stringInMain: " << stringInMain << std::endl;
	cout << "length: " << modifyString(stringInMain, b) << std::endl;
	cout << "stringInMain: " << stringInMain << std::endl;
	cout << "length: " << modifyString(stringInMain, c) << std::endl;
	cout << "stringInMain: " << stringInMain << std::endl;
}