/**
* dotcross.cpp
* Gabe Pier
* 29 Jan 2021
* hw1 for cs 201
* This code will take inputs for two 3d vectors and output the dot and cross products.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
	float Ax, Ay, Az, Bx, By, Bz;
	cout << "input 3 values for vector A, separated by spaces.\n";
	cin >> Ax >> Ay >> Az;
	cout << "input 3 values for vector B, separated by spaces.\n";
	cin >> Bx >> By >> Bz;

	int dot();
	{
		float dprod;
		dprod = Ax*Bx + Ay*By + Az*Bz;
		cout << "A dot B is: " << dprod;
	}

}