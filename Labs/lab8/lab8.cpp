#include <iostream>
#include "intio.hpp"
#include "lab8.hpp"

int doInput() {
	int a;
	a = getInt();
	return a;
}

int compute(int n) {
	int square;
	square = n * n;
	return square;
}
