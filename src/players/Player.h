/*
 * Player.h
 *
 *  Created on: Mar 16, 2012
 *      Author: toffe
 */



#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>
//#include "Board.h"
class Board;

using namespace std;

class Player {
	string name;

public:
	class Move {
	public:
		const Player &player;
		const int pitIndex;

		Move(const Player &player, int pitIndex) : player(player), pitIndex(pitIndex) { }
	};

	Player(const string &name);
	virtual ~Player();

	const string &getName();
	virtual Player::Move getNextMove(const Board &board) = 0;
};

#endif /* PLAYER_H_ */