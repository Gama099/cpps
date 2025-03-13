#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
private:
	Weapon		&gun;
	std::string name;
public:
	HumanA(std::string name_init, Weapon &gunn);
	void attack();
};


#endif
