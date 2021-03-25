#include "Player.h"
#include <iostream>

Player::Player()
{
	id = 1;
	name = "Ivan";
	rank = 300 + rand() % 1000;
}

Player::~Player() {};

Player::Player(int c_ind, std::string c_name, int c_rank)
{
	this->id = c_ind;
	this->name = c_name;
	this->rank = c_rank;
}

std::string Player::GetName()
{
	return name;
}

int Player::GetId()
{
	return id;
}

int Player::GetRank()
{
	return rank;
}

void Player::editRank(int value)
{
	rank += value;
}

std::ostream& operator<<(std::ostream& out, const Player& player)
{
	out << "Player name: " << player.name << std::endl
		<< "Player id: " << player.id << std::endl
		<< "Player rank: " << player.rank << std::endl;
	return out;
}
