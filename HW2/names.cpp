/**
* diamond.cpp
* Gabe Pier
* 29 Jan 2021
* hw1 for cs 201
* This code will take an integer input then print a diamond of that respective size.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::vector;
using std::string;
using std::cout;
using std::getline;
using std::cin;

int main(int argc, char **argv) 
{
	vector<string> names;
	for (int i = 0; i < 10; i++) {
		string name;
		cout << "Please enter a name: ";
		getline(cin, name);
		names.push_back(name);
	}
	return 0;
}