/*
 * Board.cpp
 *
 *  Created on: Mar 16, 2012
 *      Author: toffe
 */

#include "Board.h"
#include <iostream>
Board::Board() { }

Board::~Board() { }

std::ostream &operator<<(std::ostream &out, const Board &board) {
	return out << board.toString();
}