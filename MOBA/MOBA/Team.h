#pragma once
#include <string>
#include <vector>
#pragma once
#include "PaH.h"

class Team
{
	std::string name;
	std::vector <PaH> team;
	int totalDMG;
	int totalHP;

public:
	Team();
	Team(std::string c_name, std::vector <PaH> c_team);
	
	int calculateTotalDMG();
	int calculateTotalHP();
	friend std::ostream& operator<< (std::ostream& out, const Team& team);
};
std::ostream& operator<< (std::ostream& out, const Team& team);

