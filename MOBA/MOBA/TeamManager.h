#include"Team.h"
#include<istream>
#include<vector>

class TeamManager
{
	TeamManager();
	Team GenerateNewTeam(std::string c_name, std::vector<PaH> c_team);
	void GetTeamInfo(Team team);
};

