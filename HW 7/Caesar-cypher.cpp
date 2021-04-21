#include <iostream>
using std::cout;
using std::endl;
using std::string;
#include <fstream>
using std::ifstream;
#include <vector>
using std::vector;
#include <string>
#include "Caesar-cypher.hpp"

string caesar(string text, int s)
{
    string result = "";

    // traverse text
    for (int i = 0; i < text.length(); i++)
    {
        // apply transformation to each character
        // Encrypt Uppercase letters
        if (isupper(text[i]))
            result += char(int(text[i] + s - 65) % 26 + 65);

        // Encrypt Lowercase letters
        else
            result += char(int(text[i] + s - 97) % 26 + 97);
    }

    // Return the resulting string
    return result;
}