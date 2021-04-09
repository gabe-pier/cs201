#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <stdlib.h>
#include "shopping.hpp"


// Uniform Dist function
int RandomBetweenU(int first, int last)
{
	std::random_device r;
	std::default_random_engine e1(r());
	std::uniform_int_distribution<int> uniform_dist(first, last);
	int Uvalue = uniform_dist(e1);
	return Uvalue;
}

//Normal Dist function
int RandomBetweenN(int first, int last)
{
	std::random_device r;
	std::default_random_engine e1(r());
	double mean = (first + last) / 2;
	std::normal_distribution<double> normal_dist(mean, 1);
	int Nvalue = normal_dist(e1);
	return Nvalue;
}

// C++ rand function
int RandomBetween(int first, int last)
{
	int Rvalue = rand() % last + first;
	return Rvalue;
}

// Histogram Plot
void PrintDistribution(const std::map<int, int>& hist)
{
	for (auto p : hist) {
		std::cout << std::fixed << std::setprecision(1) << std::setw(2)
			<< p.first << ' ' << std::string(p.second / 200, '*') << '\n';
	}
}

int main()
{
	// Seed with a real random value, if available
	std::random_device r;
	// Choose a random mean between 1 and 6
	std::default_random_engine e1(r());

	// Calling input from the user to set bounds of the generators.
	double f;
	double l;

	std::cout << "please input a lower bound: ";
	std::cin >> f;
	std::cout << "\nplease input an upper bound: ";
	std::cin >> l;

	// Calling random numbers with bounds
	RandomBetweenN(f, l);
	RandomBetweenU(f, l);
	RandomBetween(f, l);

	// Generating Values
	std::map<int, int> histN;
	std::map<int, int> histU;
	std::map<int, int> histR;
	for (int n = 0; n < 10000; ++n) {
		++histN[std::round(RandomBetweenN(f, l))];
		++histU[std::round(RandomBetweenU(f, l))];
		++histR[std::round(RandomBetween(f, l))];
	}

	// Calling function to pass to the histogram function
	std::cout << "normal distribution" << std::endl;
	PrintDistribution(histN);
	std::cout << std::endl << "uniform distribution" << std::endl;
	PrintDistribution(histU);
	std::cout << std::endl << "rand distribution" << std::endl;
	PrintDistribution(histR);

	std::cout << "~~~~~~~~~~~~~~Additional Program 2~~~~~~~~~~~~~~" << std::endl;
	shopping();
}
