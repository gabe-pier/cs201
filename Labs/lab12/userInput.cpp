/**
* userInput.cpp
* Gabe Pier
* 19 Feb 2021
* Lab 12 for cs 201
*/

#include <iostream>
#include <vector>
#include <string>
#include "userInput.hpp"
using namespace std;

void getUserStrings(vector<string>& words) {
	string temp;
	while (temp != "end") {
		cin >> temp;
		if (temp != "end")
			words.push_back(temp);
	}
}
