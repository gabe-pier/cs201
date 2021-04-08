/*
* Gabe Pier
* 210405
* CS 201
* Lab 25
* main.cpp
*/
#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
using std::pair;
using std::cout;


int main() {
	vector<int> m = { 10, 20, 30, 40, 50 };
	vector<int> n = { 10, 20, 25, 30, 50 };
	pair< vector<int>::iterator,
	vector<int>::iterator > match;
	match = std::mismatch(m.begin(), m.end(), n.begin());

	cout << "the first mitchmatch element is: " << *match.first << " and " << *match.second << std::endl;
}