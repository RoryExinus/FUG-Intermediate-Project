#include <string>
#include <iostream>

class Player {
	int id;
	std::string name;
	int rank;

public:
	Player();
	~Player();
	Player(int c_ind, std::string c_name, int c_rank);
	std::string GetName();
	int GetId();
	int GetRank();
	friend std::ostream& operator<< (std::ostream& out, const Player& player);
};
std::ostream& operator<< (std::ostream& out, const Player& player);