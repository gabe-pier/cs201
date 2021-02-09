/**
* part1.cpp
* Gabe Pier
* 2 Feb 2021
* Lab 4 for cs 201
*/

#include <iostream>
using std::cout;
using std::endl;

int main() {
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			cout << "Fizz" << endl;
		else 
			cout << i << endl;
	}
}