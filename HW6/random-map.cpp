#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>


int RandomBetweenU(int first, int last, int seed)
{
	std::uniform_int_distribution<int> uniform_dist(first, last);
	int Uvalue = uniform_dist(seed);
	return Uvalue;
}

int RandomBetweenN(int first, int last, int seed)
{
	std::normal_distribution<int> normal_dist(first, last);
	int Nvalue = normal_dist(seed);
	return Nvalue;
}

int main()
{
	// Seed with a real random value, if available
	std::random_device r;
	// Choose a random mean between 1 and 6
	std::default_random_engine e1(r());
	int f;
	int l;

	std::cout << "please input a lower bound: ";
	std::cin >> f;
	std::cout << "\nplease input an upper bound: ";
	std::cin >> l;
	std::uniform_int_distribution<int> uniform_dist(f, l);
	int mean = uniform_dist(e1);
	std::cout << "Randomly-chosen mean: " << mean << '\n';
	// Generate a normal distribution around that mean
	std::seed_seq seed2{ r(), r(), r(), r(), r(), r(), r(), r() };
	std::mt19937 e2(seed2);
	std::normal_distribution<> normal_dist(mean, 2);
	std::map<int, int> hist;
	for (int n = 0; n < 10000; ++n) {
		++hist[std::round(normal_dist(e2))];
	}
	std::cout << "Normal distribution around " << mean << ":\n";
	for (auto p : hist) {
		std::cout << std::fixed << std::setprecision(1) << std::setw(2)
			<< p.first << ' ' << std::string(p.second / 200, '*') << '\n';
	}
}
