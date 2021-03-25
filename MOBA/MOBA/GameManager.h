#pragma once
#include<vector> 
#include"Session.h"
#include"Team.h"
class GameManager {

	std::vector <Session> gameSessions;
	void PerformGameSession(std::vector<PaH> firstT, std::vector<PaH> secondT, std::vector<Player> players, std::vector<Hero> heroes);

	std::vector<PaH> randTeam(std::vector<Player> *players, std::vector<Hero> *heroes);
};