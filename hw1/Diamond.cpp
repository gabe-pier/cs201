/**
* diamond.cpp
* Gabe Pier
* 29 Jan 2021
* hw1 for cs 201
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int n;
	cout << "Please enter a positive integer:\n";
	cin >> n;
	if (n <= 0)
	{
		cout << "Sorry, thats not a valid integer!";
	}
	else
	{
		for (int i = 0; i < n; ++i)
		{
			cout << i;
		}
	}

}