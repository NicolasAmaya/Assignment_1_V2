#include "Player.h"
#include"Primary.h"
#include <string>


Player::Player()
{
	//Type = this.get;
}


Player::~Player()
{
}

void Player::Equip_Shoot(Weapon* w) {

	w->Shoot();


}

void Player::GetType(Weapon* w) {

	std::cout << w->GetType() << std::endl;

}

void Player::Equip(int slot, Weapon* w) {

	switch (slot) {
		
	case 1:


		if (weaponBelt[0] == NULL && w->GetType() == "Primary") {
			weaponBelt[0] = w;
			std::cout << "Weapon Equiped --> Primary" << std::endl;
		}
		else { std::cout << "Weapon already Equiped | Weapon not Primary Type" << std::endl; }
		break;

	case 2:
		if (weaponBelt[1] == NULL && w->GetType() == "Secondary") {
			weaponBelt[1] = w;
			std::cout << "Weapon Equiped --> Secondary" << std::endl;
		}
		else { std::cout << "Weapon already Equiped | Weapon not Secondary Type" << std::endl; }
		break;

	case 3:
		if (weaponBelt[2] == NULL && w->GetType() == "Tertiary") {
			weaponBelt[2] = w;
			std::cout << "Weapon Equiped --> Tertiary" << std::endl;
		}
		else { std::cout << "Weapon already Equiped | Weapon not Tertiary Type" << std::endl; }
		break;
	default:
		std::cout << "Wrong Slot" << std::endl;
		break;
	}

}


