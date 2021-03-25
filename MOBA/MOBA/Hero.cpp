#include "Hero.h"
#include <iostream>

Hero::Hero()
{
	id = 1;
	name = "Anti Mage";
	hp = 30;
	dmg = 20;
}

Hero::~Hero()
{
}

Hero::Hero(int c_id, std::string c_name, int c_hp, int c_dmg)
{
	this->id = c_id;
	this->name = c_name;
	this->hp = c_hp;
	this->dmg = c_dmg;
}

int Hero::GetId()
{
	return id;
}

std::string Hero::GetName()
{
	return name;
}

int Hero::GetDMG()
{
	return dmg;
}

int Hero::GetHP()
{
	return hp;
}

std::ostream& operator<<(std::ostream& out, const Hero& hero)
{
	out << "Hero name: " << hero.name << std::endl
		<< "Hero id: " << hero.id << std::endl
		<< "Hero HP: " << hero.hp << std::endl
		<< "Hero DMG: " << hero.dmg << std::endl;
	return out;
}
