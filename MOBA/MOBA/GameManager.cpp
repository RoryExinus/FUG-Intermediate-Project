#include "GameManager.h"

void GameManager::PerformGameSession(std::vector<PaH> firstT, std::vector<PaH> secondT, std::vector<Player> players, std::vector<Hero> heroes)
{
	TeamManager tm;
	std::vector<Player>* ptr_players = new std::vector<Player>;
	ptr_players = &players;
	std::vector<Hero>* ptr_heroes = new std::vector<Hero>;
	ptr_heroes = &heroes;
	firstT = randTeam(ptr_players, ptr_heroes);
	secondT = randTeam(ptr_players, ptr_heroes);
	Team dire = tm.GenerateNewTeam("Dire", firstT);
	Team radiant = tm.GenerateNewTeam("Radiant", secondT);
	Session session(dire, radiant);
	session.CalculateWinner();
	gameSessions.emplace_back(session);
	std::cout << session;
}

std::vector<PaH> GameManager::randTeam(std::vector<Player> *players, std::vector<Hero> *heroes)
{
	std::vector<PaH> team;
	for (int i = 0; i < 5; i++)
	{
		int randIndP = rand() % players[0].size();
		int randIndH = rand() % players[0].size();
		PaH cell((*players)[randIndP], (*heroes)[randIndH]);
		team.emplace_back(cell);
		auto iterP = (*players).cbegin();
		(*players).erase(iterP + randIndP);
		auto iterH = (*heroes).cbegin();
		(*heroes).erase(iterH + randIndH);
	}
	return team;
}

void GameManager::PrintGameSessions()
{
	for (int i = 0; i < gameSessions.size(); i++)
	{
		std::cout << gameSessions[i] << std::endl;
	}
}


