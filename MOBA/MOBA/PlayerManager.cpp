#include "PlayerManager.h"


Player PlayerManager::CreatePlayer(int id, std::string name, int rank)
{
	return Player(id, name, rank);
}

Player PlayerManager::GetPlayerByName(std::string name, std::vector<Player> list)
{
	for (int i = 0; i < list.size(); i++)
	{
		if (list[i].GetName() == name)
		{
			return list[i];
		}
		else
		{
			std::cout << "This Player dont Exist\n";
		}
	}
}



Player GetPlayerById(int id, std::vector<Player> list)
{
	for (int i = 0; i < list.size(); i++)
	{
		if (list[i].GetId() == id)
		{
			return list[i];
		}
		else
		{
			std::cout << "This Player dont Exist\n";
		}
	}
}

void PlayerManager::DeletePlayer(Player player)
{
	player.~Player();
}

void PlayerManager::ShowPlayerInfo(Player player)
{
	std::cout << player;
}
