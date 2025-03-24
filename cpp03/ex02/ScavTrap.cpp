#include "ScavTrap.hpp"

ScavTrap:: ScavTrap(std::string name) : ClapTrap(name, 100, 50,20){}
ScavTrap:: ScavTrap(std::string name, int HP, int EP, int AD) : ClapTrap(name, HP, EP, AD){}

void ScavTrap:: guardGate(){
    std::cout << "ScavTrap " << name << "is now in Gate keeper mode." << std::endl;
}