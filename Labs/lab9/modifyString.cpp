/**
* modifyString.cpp
* Gabe Pier
* 14 Feb 2021
* Lab 9 for cs 201
*/

#include <iostream>
#include <string>
using namespace std;

/**
 * Append an integer to a string
 * @param referencedString string to append integer to
 * @param n append (n % 10) to referencedString
 * @return New length of referencedString
 */

int modifyString(string& referencedString, int n) {
	string& s = referencedString;
	s = referencedString + to_string(n % 10);
	return size(s);
}
