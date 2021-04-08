/*
* Gabe Pier
* Lab 23
* CS 201
* main.cpp
*/
#include <iostream>
#include <map>
using std::map;
using std::string;
using std::size_t;
using std::endl;
using std::cout;

int main() {
	//init map
	map<string, int> m;
	//adding key-value pairs
	m["orange"] = 17;
	m["apple"] = 42;
	m["mango"] = 6;
	m["kiwi"] = 35;
	m["blueberry"] = 64;

	m.erase("kiwi");

	//loop to print all values of map m
	for (const auto& p : m)
	{
		auto k = p.first; // Key
		auto v = p.second; // Associated value
		cout << "Key: " << k << ", value: " << v;
		cout << endl;
	}
}

