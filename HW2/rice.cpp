using namespace std;
#include <iostream>
#include "names.h"

int rice()
{
	double grains;
	double rice = 1;
	int atleast1000 = 0;
	int atleast1000000 = 0;
	int atleast1000000000 = 0;
	for (int i = 0; i < 64; i++) {
		grains = rice * 2;
		rice = grains;
		if (rice == 1024) {
			atleast1000 = i+1;
		}
		if (rice == 1048576) {
			atleast1000000 = i + 1;
		}
		if (rice == 1073741824) {
			atleast1000000000 = i + 1;
		}
	}
	cout << "To give atleast 1000 grains, you must get to square " << atleast1000 << endl;
	cout << "To give atleast 1000000 grains, you must get to square " << atleast1000000 << endl;
	cout << "To give atleast 1000000000 grains, you must get to square " << atleast1000000000 << endl;
	cout << "the largest square for int is 30, square 31 returns a negative value, then 0 for everything else." << endl;
	cout << "the largest approximation with double covers all 64 squares of the function." << endl;
	return 0;
}