/*
* Gabe Pier
* CS 201
* Final Project (checkers)
* Main.cpp
*/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
#include<time.h>
#include"Checkers.hpp"

int main() {
	Checkers MyBoard;
	MyBoard.initBoard();
	MyBoard.initPieces();
	MyBoard.printBoard();

	bool player1 = true;
	std::string a;
	do {
		MyBoard.movepiece(player1);
		cout << "type quit to end the game, or next for the next turn." << endl;
		cin >> a;
		{
			bool loop = true;
			while (loop == true) {
				if (a == "quit" | a == "QUIT") {
					loop = false;
					player1 = false;
				}
				else if (a == "next" | a == "NEXT") {
					loop = false;
				}
				else {
					cout << "please provide a valid input..." << endl;
					cin >> a;
				}
			}
		}
	} while (player1 == true);
}

