#pragma once
#include <string>
#include <vector>
#include "PaH.h"

class Team
{
	std::string name;
	std::vector <PaH> team;

public:
	Team(std::string c_name, std::vector <PaH> c_team);
};

