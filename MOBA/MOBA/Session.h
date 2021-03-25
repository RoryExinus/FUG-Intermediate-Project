#pragma once
#include"Team.h"
#include <chrono>
#include <ctime>   
class Session {

	time_t startTime;
	Team dire;
	Team radiant;
	Team winner;

public:
	Session(Team c_dire, Team c_radiant);
	Team CalculateWinner();
	friend std::ostream& operator<< (std::ostream& out, const Session& hero);
};
std::ostream& operator<< (std::ostream& out, const Session& session);