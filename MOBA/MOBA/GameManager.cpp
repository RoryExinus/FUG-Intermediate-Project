#include "GameManager.h"

std::vector<PaH> GameManager::randTeam(std::vector<Player> *players, std::vector<Hero> *heroes)
{
	std::vector<PaH> team;
	for (int i = 0; i < 5; i++)
	{
		int randIndP = rand() % players[0].size();
		int randIndH = rand() % players[0].size();
		PaH cell((*players)[randIndP], (*heroes)[randIndH]);
		team.push_back(cell);
		auto iterP = (*players).cbegin();
		(*players).erase(iterP + randIndP);
		auto iterH = (*heroes).cbegin();
		(*heroes).erase(iterH + randIndH);
	}
	return team;
}
