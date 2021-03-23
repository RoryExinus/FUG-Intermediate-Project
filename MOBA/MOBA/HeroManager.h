#include "Hero.h" 
#include <string>
#include <vector>


class HeroManager {
public:
	HeroManager();

	Hero CreateHero(int id, std::string name, int hp, int dmg);

	Hero GetHeroByName(std::string name, std::vector<Hero> list);

	Hero GetHeroById(int Id, std::vector<Hero> list);

	void DeleteHero(Hero hero);

	void ShowHeroInfo(Hero hero);
};