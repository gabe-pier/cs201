/**
* main.cpp
* Gabe Pier
* 1 Mar 2021
* hw4 for cs 201
*/
#include <iostream>
#include <vector>
#include <string>
#include "tokenizer.h"

int main() {
	string input;
	vector<string> tokens;
	getline(cin, input);
	cout << StringToTokensWS(input, tokens) << endl;
}