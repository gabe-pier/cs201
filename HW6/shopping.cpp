#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <numeric>
#include <unordered_map>
#include "shopping.hpp"

struct Record {
	double unitPrice;
	int units;
};


void shopping()
{
	std::map<std::string, int> cart;
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
	
	bool exit = false;
	while (exit == false) {
		cout << "What would you like to buy?" << std::endl;
		std::string i;
		std::cin >> i;
		if (i == "soda" | i == "s") {
			cout << "how many sodas do you want?" << std::endl;
			int n;
			std::cin >> n;
			cart.insert({ "soda" , n });
		}	
		else if (i == "apple" | i == "a") {
			cout << "how many apples do you want?" << std::endl;
			int n;
			std::cin >> n;
			cart.insert({ "apple" , n });
		}	
		else if (i == "raspberries" | i == "r") {
			cout << "how many raspberries do you want?" << std::endl;
			int n;
			std::cin >> n;
			cart.insert({ "raspberry" , n });
		}
		else if (i == "bread" | i == "b") {
			cout << "how much bread do you want?" << std::endl;
			int n;
			std::cin >> n;
			cart.insert({ "bread" , n });
		}
		else if (i == "eggs" | i == "e") {
			cout << "how many eggs do you want?" << std::endl;
			int n;
			std::cin >> n;
			cart.insert({ "eggs" , n });
		}

		std::cout << "your cart is: " << std::endl;
		for (auto elem : cart)
		{
			std::cout << left << setw(5) << elem.first << " " << setw(5) << elem.second << "\n";
		}

		std::cout << "would you like to remove anything from your cart? (yes/no or y/n)" << std::endl;
		std::string p;
		std::cin >> p;
		if (p == "yes" | p =="y") {
			std::cout << "what would you like to remove?" << std::endl;
			std::string i;
			std::cin >> i;
			if (i == "soda" | i == "s") {
				cart.erase( "soda" );
				cout << "removed!" << std::endl;
			}
			else if (i == "apple" | i == "a") {
				cart.erase("apple");
				cout << "removed!" << std::endl;
			}
			else if (i == "raspberries" | i == "r") {
				cart.erase("raspberry");
				cout << "removed!" << std::endl;
			}
			else if (i == "bread" | i == "b") {
				cart.erase("bread");
				cout << "removed!" << std::endl;
			}
			else if (i == "eggs" | i == "e") {
				cart.erase("eggs");
				cout << "removed!" << std::endl;
			}
		}
		std::cout << "would you like to continue shopping? (yes/no or y/n)" << std::endl;
		std::string j;
		std::cin >> j;
		if (j == "yes" | j == "y") {
			exit = false;
		}
		else if (j == "no" | j == "n") {
			exit = true;
		}
		std::cout << "your cart is: " << std::endl;
		for (auto elem : cart)
		{
			std::cout << left << setw(5) << elem.first << " " << setw(5) << elem.second << "\n";
		}
	}
	vector<double> t;
	for (auto elem : cart)
	{
		double a = elem.second * items[elem.first].unitPrice;
		t.push_back(a);
	}
	double sum = std::accumulate(t.begin(), t.end(), 0.0);
	std::cout << "your total is: $" << sum << std::endl;
}

