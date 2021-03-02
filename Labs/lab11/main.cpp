/**
* Main.cpp
* Gabe Pier
* 18 Feb 2021
* Lab 11 for cs 201
*/

#include <iostream>
using namespace std;

int main() {
	string word;
	string wordprint = "y";
	do {
		cout << "Input a string: ";
		cin >> word;
		for (int i = 0; i < size(word); i++)
			if (word.at(i) >= 'a' && word.at(i) <= 'z')
				cout << word.at(i);
		cout << "\nwould you like to input another string? (y/n): ";
		cin >> wordprint;
		while (wordprint != "y" && wordprint != "n") {
			cout << "please input y or n for yes or no: ";
			cin >> wordprint;
		}
	} while (wordprint == "y");
}