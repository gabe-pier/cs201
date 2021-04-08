/*
* Gabe Pier
* 210401
* Lab 24
* CS 201
* main.cpp
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using std::vector;
using std::cout;
int main() {
	vector<int> m{ 15, 34, 6, 124, 26, 14, 1243, 12, 342, 56 };
	cout << "initial vector: ";
	for (size_t x : m)
		cout << x << " ";
	cout << std::endl;

	cout << "sorted vector: ";
	sort(m.begin(), m.end());
	for (size_t x : m)
		cout << x << " ";
	cout << std::endl;
	cout << "sorted with Algorithm sort.";
	cout << std::endl;

	cout << "reversed vector: ";
	reverse(m.begin(), m.end());
	for (size_t x : m)
		cout << x << " ";
	cout << std::endl;

	cout << "filled vector: ";
	auto it1 = m.begin() + 3;
	auto it2 = m.begin() + 8;
	fill(it1, it2, 1);
	for (size_t x : m)
		cout << x << " ";

}