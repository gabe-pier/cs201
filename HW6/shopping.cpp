#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <unordered_map>
#include "shopping.hpp"

struct Record {
	double unitPrice;
	int units;
};


void shopping()
{
	std::map<std::string, Record> items;
	Record tmp1 = { 1.19, 1 };
	Record tmp2 = { 0.59, 1 };
	Record tmp3 = { 3.50, 1 };
	Record tmp4 = { 4.00, 1 };
	Record tmp5 = { 3.50, 1 };

	items["soda"] = tmp1;
	items["apple"] = tmp2;
	items["raspberries"] = tmp3;
	items["bread"] = tmp4;
	items["eggs"] = tmp5;

	std::cout << "the items are: " << std::endl;
	for (auto elem : items)
	{
		std::cout << left << setw(15) << elem.first << " " << setw(5) << elem.second.unitPrice << " " << setw(5) << elem.second.units << "\n";
	}
}

