#include "TeamManager.h"
#include "PaH.h"
#include "Team.h"
#include<istream>
#include<vector>


Team TeamManager::GenerateNewTeam(std::string c_name, std::vector <PaH> c_team)
{
	return Team(c_name, c_team);
}

void TeamManager::GetTeamInfo(Team team )
{
	std::cout << team;
}
