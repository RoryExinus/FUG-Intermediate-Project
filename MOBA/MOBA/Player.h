#include <string>
#include <iostream>

class Player {
	int id;
	std::string name;
	int rank;

public:
	Player();
	Player(int c_ind, std::string c_name, int c_rank);
};