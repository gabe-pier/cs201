/**
* lab2.cpp
* Gabe Pier
* 23 Jan 2021
* Lab 2 for cs 201
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
int x;
cout << "Type an integer"<< endl;
cin >> x;
int sqr = (x + 1) * (x + 1);
cout << "The square of the next integer is: " << sqr;
return 0;
}