/*
* reading.cpp
* Gabe Pier
* 23 Feb 2021
* Lab 14 for cs 201
*/

#include <iostream>
#include <sstream>
#include "reading.hpp"

using namespace std;

void read(const string& input) {
	stringstream ss;
	ss << input;
	int found;
	string temp;

	while (getline(ss, temp)) {
		if (stringstream(temp) >> found)
		{
			std::cout << found * found << std::endl;
		}
	}
}