#include "Team.h"
#include "Hero.h"
#include <iostream>

Team::Team()
{
}

Team::Team(std::string c_name, std::vector<PaH> c_team)
{
	this->name = c_name;
	this->team = c_team;
	calculateTotalDMG();
	calculateTotalHP();
}

int Team::calculateTotalDMG()
{
	int sum = 0;
	for (int i = 0; i < team.size(); i++)
	{
		sum += team[i].GetHeroDMG();
	}
	totalDMG = sum;
	return totalDMG;
}

int Team::calculateTotalHP()
{
	int sum = 0;
	for (int i = 0; i < team.size(); i++)
	{
		sum += team[i].GetHeroHP();
	}
	totalHP = sum;
	return totalHP;
}

std::vector<PaH> Team::GetTeam()
{
	return team;
}



std::ostream& operator<<(std::ostream& out, const Team& team)
{
	out << "Team Name: " << team.name << std::endl
		<< "Team total dmg: " << team.totalDMG << std::endl
		<< "Team total hp: " << team.totalHP << std::endl;
	for (int i = 0; i < team.team.size(); i++)
	{
		out << team.team[i] << std::endl;
	}
	return out;
}




