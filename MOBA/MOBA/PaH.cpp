#include "PaH.h"

PaH::PaH(Player c_player, Hero c_hero)
{
	this->player = c_player;
	this->hero = c_hero;
}

int PaH::GetHeroDMG()
{

	return hero.GetDMG();
}

int PaH::GetHeroHP()
{
	return hero.GetDMG();
}

Player PaH::GetPlayer()
{
	return player;
}

std::ostream& operator<<(std::ostream& out, const PaH& pah)
{
	out << "Player: " << pah.player << " & Hero: " << pah.hero;
	return out;
}
