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

/*Gets line input from user*/
bool ReadLine() {
	string str;
	cout << "input a string: ";
	return !getline(cin, str);
}

/*Prints the size of the tokens*/
unsigned StringToTokensWS(const string& input, vector<string>& tokens) {
	istringstream ss(input);
	string token;

	while (getline(ss, token, ' ')) {
		tokens.push_back(token);
		tokens.push_back(" ");
	}
	return tokens.size();
} 

/*identifies the type of token*/
void AnalyzeTokens(const vector<string>& tokens) {
	for (int i = 0; i < tokens.size(); i++) {
		if (tokens[i].at(0) == '\"') {
			cout << "[string]\t";
			cout << '\"' << tokens[i] << '\"' << '\n';
		}
		else if (tokens[i].at(0) == ' ') {
			cout << "[whitespace]\t";
			cout << '\"' << tokens[i] << '\"' << '\n';
		}
		else if ((tokens[i].at(0) == '+') || (tokens[i].at(0) == '-') || (tokens[i].at(0) == '=') || (tokens[i].at(0) == '*') || (tokens[i].at(0) == '/') || (tokens[i].at(0) == '%')) {
			cout << "[operator]\t";
			cout << '\"' << tokens[i] << '\"' << '\n';
		}
		else if ((tokens[i].at(0) <= 'z') || (tokens[i].at(0) >= 'a') || (tokens[i].at(0) <= 'Z') || (tokens[i].at(0) >= 'A') || (tokens[i].at(0) <= '0') || (tokens[i].at(0) >= '9') || (tokens[i].at(0) == '_')) {
			cout << "[Identifier]\t";
			cout << '\"' << tokens[i] << '\"' << '\n';
		}
	}
}