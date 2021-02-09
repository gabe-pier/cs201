/**
* part2.cpp
* Gabe Pier
* 25 Jan 2021
* Lab 3 for cs 201
*/

#include <iostream>
using std::cout;
using std::endl;
using std::string;

int square() {
	cout << "square of stars" << endl;
	int i = 1;
	while (i <= 10)
	{
		int j = 1;
		while (j <= 60)
		{
			cout << "*";
			j++;
		}
		cout << endl;
		i++;
	}
	return 0;
}
