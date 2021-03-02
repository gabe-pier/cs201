/**
* tokenizer.cpp
* Gabe Pier
* 1 Mar 2021
* hw4 for cs 201
*/
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "tokenizer.h"
using namespace std;

bool ReadLine() {
	string str;
	cout << "input a string: ";
	return !getline(cin, str);
}

unsigned StringToTokensWS(const string& input, vector<string>& tokens) {
	istringstream ss(input);
	string token;

	while (getline(ss, token, ' ')) {
		cout << token << '\n';
		tokens.push_back(token);
	}
	return size(tokens);
} 