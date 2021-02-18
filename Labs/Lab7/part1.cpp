#include <iostream>
#include "intio.hpp"
using std::endl;
using std::cout;

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "input your first integer: ";
	a = getInt();
	cout << "\ninput your second integer: ";
	b = getInt();
	cout << "\ninput your third integer: ";
	c = getInt();
	putInt(a, 10);
	cout << endl;
	putInt(b, 10);
	cout << endl;
	putInt(c, 10);
	cout << endl;


}