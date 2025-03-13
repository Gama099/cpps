#include "HumanA.hpp"

void HumanA::attack(){
	std::cout << name << " attacks with their " << gun.getType() << std::endl;
}

HumanA::HumanA(std::string name_init, Weapon &gunn) : name(name_init), gun(gunn) {}
