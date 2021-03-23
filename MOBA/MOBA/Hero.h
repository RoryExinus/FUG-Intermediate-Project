#include <string>

class Hero 
{
	int id;
	std::string name;
	int hp;
	int dmg;
public:
	Hero();
	~Hero();
	Hero(int c_id, std::string c_name, int c_hp, int c_dmg);

	int GetId();
	std::string GetName();
	
	friend std::ostream& operator<< (std::ostream& out, const Hero	&hero);
};
std::ostream& operator<< (std::ostream& out, const Hero	&hero);