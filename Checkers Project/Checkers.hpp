/*
* Gabe Pier
* CS 201
* Final Project (checkers)
* Checkers.hpp
*/
#pragma once
class Checkers
{
public:
	void initBoard();
	void printBoard();
	void initPieces();

private:
	char board[8][8];
	char p1 = 'X';
	char p2 = 'O';
};