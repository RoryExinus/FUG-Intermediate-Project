#pragma once
#include "Player.h"
#include "Hero.h"
class PaH
{
	Player player;
	Hero hero;
public:
	PaH(Player c_player, Hero c_hero);
	int GetHeroDMG();
	int GetHeroHP();
};

