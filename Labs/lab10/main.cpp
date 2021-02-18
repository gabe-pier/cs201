/**
* Main.cpp
* Gabe Pier
* 16 Feb 2021
* Lab 10 for cs 201
*/

#include <iostream>
using namespace std;

bool isDiv3(int& n) {
	return (n % 3 == 0);
}

int main() {
	cout << "the numbers divisible by 3 are:\n";
	int i = 1;
	while (i <= 40) {
		if (isDiv3(i) == true) {
			cout << i << endl;
		}
		i++;
	}
}