#include "Session.h"
#include "PaH.h"

Session::Session(Team c_dire, Team c_radiant) {
	auto end = std::chrono::system_clock::now();
	startTime = std::chrono::system_clock::to_time_t(end);
	dire = c_dire;
	radiant = c_radiant;
}

Team Session::CalculateWinner(Team dire, Team radiant)
{
	int direHP = dire.calculateTotalHP() - radiant.calculateTotalDMG();
	int radiantHP = radiant.calculateTotalHP() - dire.calculateTotalDMG();
	if (direHP > radiantHP)
	{
		winner = dire;
	}
	else
	{
		winner = radiant;
	}
	return winner;
}

std::ostream& operator<<(std::ostream& out, const Session& session)
{
	out << "Time: " << std::ctime(&session.startTime) << std::endl
		<< "First Team: " << session.dire << std::endl
		<< "Second Team: " << session.radiant << std::endl;
	return out;
}
