#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class Weapon
{
public:
	Weapon();
	
	virtual void Shoot() = 0;//PURE VIRTUAL
	std::string GetType(); 

protected:

	std::string Type;
};

#endif