#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
private:
	Weapon		*gun;
	std::string name;
public:
	HumanB(std::string name_init);
	void setWeapon(Weapon &gun_ptr);
	void attack();
};

#endif
