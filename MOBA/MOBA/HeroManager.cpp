#include "HeroManager.h"
#include <iostream>

HeroManager::HeroManager()
{

}

Hero HeroManager::CreateHero(int id, std::string name, int hp, int dmg)
{
	return Hero(id, name, hp, dmg);
}

Hero HeroManager::GetHeroByName(std::string name, std::vector<Hero> list)
{
	for (int i = 0; i < list.size; i++)
	{
		if (list[i].GetName == name)
		{
			return list[i];
		}
		else
		{
			std::cout << "This Hero dont Exist\n";
		}
	}
}

Hero HeroManager::GetHeroById(int id, std::vector<Hero> list)
{
	for (int i = 0; i < list.size; i++)
	{
		if (list[i].GetId == id)
		{
			return list[i];
		}
		else
		{
			std::cout << "This Hero dont Exist\n";
		}
	}
}

void HeroManager::DeleteHero(Hero hero)
{
	hero.~Hero();
}

void HeroManager::ShowHeroInfo(Hero hero)
{
	std::cout << hero;
}
