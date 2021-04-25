/*
* Gabe Pier
* CS 201
* Final Project (checkers)
* Checkers.cpp
*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <windows.h>
#include "Checkers.hpp"

void Checkers::initBoard() {
	for (int y = 0; y < 8; y++) {
		for (int x = 0; x < 8; x++) {
			if (((x + y + 1) % 2) == 0)
				board[y][x] = '-';
			else if (((x + y + 1) % 2) == 1)
				board[y][x] = ' ';
		}
	}
}

void Checkers::printBoard() {
	cout << "  | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |\n";
	cout << "-----------------------------------\n";

	for (int y = 0; y < 8; y++)
	{
		static int x = 0;
		cout << y + 1 << " | ";
		for (int x = 0; x < 8; x++)
		{
			cout << board[y][x] << " | ";
		}
		cout << endl << "-----------------------------------" << endl;
	}
}

void Checkers::initPieces() {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 8; x++) {
			if (((x + y) % 2) == 0) {
				board[y][x] = p1;
			}
		}
	}
	for (int y = 5; y < 8; y++) {
		for (int x = 0; x < 8; x++) {
			if (((x + y) % 2) == 0)
				board[y][x] = p2;
		}
	}
}

void Checkers::selectpiece() {
	int xselect;
	int yselect;
	cout << "Enter the x coordinate of the piece you want to move: ";
	cin >> xselect;
	if ((xselect < 0) | (xselect > 8)) {
		cout << "sorry, your coordinates are out of bounds. Try again: ";
		cin >> xselect;
		cout << endl;
	}

	cout << endl;
	cout << "Enter the y coordinate of the piece you want to move: ";
	cin >> yselect;
	if ((yselect < 0) | (yselect > 8)) {
		cout << "sorry, your coordinates are out of bounds. Try again: ";
		cin >> yselect;
		cout << endl;
	}
}

void Checkers::selectspace() {
	int xspace;
	int yspace;
	cout << "Enter the x coordinate of the space you want to move to: ";
	cin >> xspace;
	if ((xspace < 0) | (xspace > 8)) {
		cout << "sorry, your coordinates are out of bounds. Try again: ";
		cin >> xspace;
		cout << endl;
	}

	cout << endl;
	cout << "Enter the y coordinate of the space you want to move to: ";
	cin >> yspace;
	if ((yspace < 0) | (yspace > 8)) {
		cout << "sorry, your coordinates are out of bounds. Try again: ";
		cin >> yspace;
		cout << endl;
	}
}