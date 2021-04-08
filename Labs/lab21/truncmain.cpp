/**
* truncmain.cpp
* Gabe Pier
* 25 March 2021
* Lab 21 for cs 201
*/
#include <iostream>
#include "truncstruct.hpp"
#include <string>
using std::string;
using std::getline;


void print_values(const StringInfo& s) {
	std::cout << "the string is: " << s.str << std::endl;
	std::cout << "the length is: " << s.len << std::endl;

}
int main() {
	string str;
	size_t length;
	std::cout << "please input a string: ";
	getline(std::cin, str);
	std::cout << "please input an int: ";
	std::cin >> length;
	print_values(trunc(StringInfo{str , length}));
}