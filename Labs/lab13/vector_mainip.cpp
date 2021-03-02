/**
* vector_mainip.cpp
* Gabe Pier
* 19 Feb 2021
* Lab 13 for cs 201
*/

#include <iostream>
#include <vector>
#include <string>
#include "vector_manip.hpp"
using namespace std;

void printvector() {
	vector<string> list {"I", "am", "the", "eggman.", "I", "am", "the", "eggman.", "I", "am", "the", "walrus!"};
	for (auto n : list)
		cout << n << ' ';
}