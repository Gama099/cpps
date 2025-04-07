#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): FragTrap(name), ScavTrap(name){
    HitPoints = FragTrap::HitPoints;
    EnergyPoints = ScavTrap::EnergyPoints;
    AttackDamage = FragTrap::AttackDamage;
    std::cout << "DiamondTrap " << name << " is born!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " is destroyed!" << std::endl;
}

void DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap name: " << name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}