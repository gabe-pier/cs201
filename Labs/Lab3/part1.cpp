/**
* part1.cpp
* Gabe Pier
* 25 Jan 2021
* Lab 3 for cs 201
*/

#include <iostream>
#include "square.h"
using std::cout;
using std::endl;

int main() {
	int i = 1;
	while (i <= 20)
	{
		cout << i << endl;
		i++;
	}
	int s = square();
	return 0;
}