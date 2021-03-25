#include "Session.h"
#include "PaH.h"
Session::Session(Team c_dire, Team c_radiant) {
	auto end = std::chrono::system_clock::now();
	startTime = std::chrono::system_clock::to_time_t(end);
	dire = c_dire;
	radiant = c_radiant;
}

void Session::CalculateWinner()
{
	int direHP = dire.calculateTotalHP() - radiant.calculateTotalDMG();
	int radiantHP = radiant.calculateTotalHP() - dire.calculateTotalDMG();
	if (direHP > radiantHP)
	{

		winner = dire;
		for (int i = 0; i < 5; i++)
		{
			dire.GetTeam()[i].GetPlayer().editRank(25);
			radiant.GetTeam()[i].GetPlayer().editRank(-25);
		}
	}
	else
	{
		winner = radiant;
		for (int i = 0; i < 5; i++)
		{
			radiant.GetTeam()[i].GetPlayer().editRank(25);
			dire.GetTeam()[i].GetPlayer().editRank(-25);
		}
	}
}

std::ostream& operator<<(std::ostream& out, const Session& session)
{
	out << "Time: " << std::ctime(&session.startTime) << std::endl
		<< "First Team: " << session.dire << std::endl
		<< "Second Team: " << session.radiant << std::endl
		<< "Winner: " << session.winner << std::endl;
	return out;
}
