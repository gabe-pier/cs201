/*
* Gabe Pier
* 210412
* CS201
* Lab 28
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using std::cout;
using std::endl;
using std::ofstream;

int main() {
	ofstream fout("abc.txt");
	if (!fout) {
		cout << "Error opening file" << endl;
	}
	for (int i = 0; i < 10; i++) {
		fout << "Hello" << endl;
	}
	if (!fout) {
		cout << "Error writing to file" << endl;
	}
	int x = 1;
	while (x < 101) {
		for (int i = x; i < x+10; i++) {
			fout << std::setw(5) << i;
		}
		x = x + 10;
		fout << std::endl;
	}
	if (!fout) {
		cout << "Error writing to file" << endl;
	}
}