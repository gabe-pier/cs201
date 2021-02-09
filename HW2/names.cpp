/**
* names.cpp
* Gabe Pier
* 08 Feb 2021
* hw2 for cs 201
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


/*
* Function asks the user for an input of 10 names.
*/
void InputNames()
{
	vector<string> names;
	for (int i = 0; i < 10; i++) {
		string name;
		cout << "Please enter a name: ";
		getline(cin, name);
		names.push_back(name);
	}
}
/*
* Searches the list for a specific name.
*/
bool DoesNameExist(const string& nameToFind, const vector<string>& names)
{
	if 
}

int main(int argc, char **argv) 
{
	InputNames();
}

