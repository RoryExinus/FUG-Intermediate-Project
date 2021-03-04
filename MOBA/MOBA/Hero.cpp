#include "Hero.h"

Hero::Hero()
{
	id = 1;
	name = "Anti Mage";
	hp = 30;
	dmg = 20;
}

Hero::Hero(int c_id, std::string c_name, int c_hp, int c_dmg)
{
	this->id = c_id;
	this->name = c_name;
	this->hp = c_hp;
	this->dmg = c_dmg;
}
