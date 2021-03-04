#include "Player.h"

Player::Player()
{
	id = 1;
	name = "Ivan";
	rank = 300 + rand() % 1000;
}

Player::Player(int c_ind, std::string c_name, int c_rank)
{
	this->id = c_ind;
	this->name = c_name;
	this->rank = c_rank;
}
