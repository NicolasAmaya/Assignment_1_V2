
#include "Player.h"
#include "Primary.h"
#include "Secondary.h"
#include "Tertiary.h"


int main() {
	Player p;

	//Weapons
	Primary pri;
	Secondary sec;
	Tertiary ter;
	
	Weapon* w1 = &pri;//PRIMARY
	Weapon* w2 = &sec;//SECONDARY
	Weapon* w3 = &ter;//TERTIARY

	//CHECK FOR EQUIPPING A SECONDARY WEAPON IN A PRIMIRY WEAPON SLOT
	p.Equip(1, w1);
	p.Equip(1, w2);

	p.Equip(2, w2);
	p.Equip(3, w3);


	//shooting
	p.Equip_Shoot(w1);
	p.GetType(w1);
	p.Equip_Shoot(w2);
	p.GetType(w2);
	p.Equip_Shoot(w3);
	p.GetType(w3);



	getchar();
	delete w1, w2, w3;

	return 0;
}