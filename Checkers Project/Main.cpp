/*
* Gabe Pier
* CS 201
* Final Project (checkers)
* Main.cpp
*/
#include <iostream>
#include <windows.h>
#include"Checkers.hpp"

int main() {
	Checkers MyBoard;
	MyBoard.initBoard();
	MyBoard.initPieces();
	MyBoard.printBoard();

	bool player1 = true;
	MyBoard.movepiece(player1);
}

