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
#include"Checkers.hpp"

int main() {
	Checkers MyBoard;
	MyBoard.initBoard();
	MyBoard.initPieces();
	MyBoard.printBoard();

	bool player1 = true;
	char a;
	do {
		MyBoard.movepiece(player1);
		cout << "press enter to continue or type quit to end the game." << endl;
	} while ((a = cin.get()) == '\n');
}

