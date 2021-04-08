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
#include "bulls-and-cows.h"

int main() {
	string input;
	vector<string> tokens;
	cout << "Please Input some text." << endl;
	getline(cin, input);
	cout << "there are " << StringToTokensWS(input, tokens) << " tokens" << endl;
	AnalyzeTokens(tokens);
	cout << "~~~~~~~~~~ Bulls and Cows ~~~~~~~~~~" << endl;
	bulls_cows();
}