#pragma once
#include"Player.h"
#include <string>
#include <vector>

class PlayerManager {
public:

	Player CreatePlayer(int id, std::string name,int rank);

	Player GetPlayerByName(std::string name, std::vector<Player> list);

	Player GetPlayerById(int id, std::vector<Player> list);

	void DeletePlayer(Player player);

	void ShowPlayerInfo(Player player);
};