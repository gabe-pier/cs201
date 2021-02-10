/**
* names.cpp
* Gabe Pier
* 08 Feb 2021
* hw2 for cs 201
* This code will take a list of names and return their length.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "names.h"
using std::vector;
using std::string;
using std::cout;
using std::getline;
using std::cin;
using std::endl;

/*
* Function asks the user for an input of 10 names.
*/
void InputNames(vector<string> &names)
{
	for (int i = 0; i < 10; i++) {
		string name;
		cout << "Please enter a name: ";
		getline(cin, name);
		names.push_back(name);
	};
}
/*
* Searches the list for a specific name.
*/
bool DoesNameExist(const string& nameToFind, const vector<string>& names)
{
	if (std::find(names.begin(), names.end(), "nameToFind") != names.end())
		return true;
	else
		return false;
}

/*
* A function that prints the names in the vector.
*/
void PrintNames(const vector<string>& names)
{
	cout << "The vector elements are : ";

	for (int i = 0; i < names.size(); i++)
		cout << names.at(i) << ' ';
}
/*
* A funtion that prints the lengths of the names.
*/
void NameLength(const vector<string>& names)
{
	cout << "\nThe respective lengths are: ";

	for (int i = 0; i < names.size(); i++)
		cout << size(names.at(i)) << ' ';
}

int main(int argc, char **argv) 
{
	vector<string> names;
	InputNames(names);
	string namesToFind;
	cout << "Type a name to search for: ";
	cin >> namesToFind;
	DoesNameExist(namesToFind, names);
	PrintNames(names);
	NameLength(names);
	cout << "\nAdditional Program 1\n";
	money();
	cout << "\nAdditional Program 2\n";
	rice();
}

