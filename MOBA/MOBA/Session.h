#pragma once
#include"Team.h"
#include <chrono>
#include <ctime>   
class Session {

	time_t startTime;
	Team dire;
	Team radiant;
	Team winner;

	Session(Team dire, Team radiant);
	Team CalculateWinner(Team dire, Team radiant);
	friend std::ostream& operator<< (std::ostream& out, const Session& hero);
};
std::ostream& operator<< (std::ostream& out, const Session& hero);