#pragma once
#ifndef tokenizer_h
#define tokenizer_h
using namespace std;

bool ReadLine();
unsigned StringToTokensWS(const string& input, vector<string>& tokens);
void AnalyzeTokens(const vector<string>& tokens);
#endif