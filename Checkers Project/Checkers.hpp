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
	//board and piece initialization
	void initBoard(); 
	void printBoard();
	void initPieces();

	//setting up functions to prompt the user for cordinate input
	void setx(int x) {
		_xcord = x;
	}
	int getx() {
		return _xcord;
	}
	void sety(int y) {
		_ycord = y;
	}
	int gety() {
		return _ycord;
	}

	//functions to move pieces
	void selectpiece();
	void selectspace();
	void movepiece(bool& turn);

private:
	//board coordinates and player pieces
	char board[8][8];
	char p1 = 'X';
	char p2 = 'O';

	//piece coordinate values
	int _xcord;
	int _ycord;
};
