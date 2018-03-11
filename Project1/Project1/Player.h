#include "Weapon.h"
#include <string>
#include <vector>

class Player
{
public:
	Player();
	~Player();

	std::string Type;
	Weapon* weaponBelt[5];
	//std::vector<Weapon*> weapons;

	void Equip_Shoot(Weapon* w);
	void GetType(Weapon* w);
	void Equip(int slot, Weapon* w);



};

