/**
* diamond.cpp
* Gabe Pier
* 29 Jan 2021
* hw1 for cs 201
* This code will take an integer input then print a diamond of that respective size.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::string;
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
			cout << string(n-i, ' ') << string(1+(2*i),'#') << endl;
		}
		for (int i = 0; i < n-1; ++i)
		{
			cout << string(i+2, ' ') << string(((n-1)*2)-1-2*i, '#') << endl;
		}
	}
	return 0;
}