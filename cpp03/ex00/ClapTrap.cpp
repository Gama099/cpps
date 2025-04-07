#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name) : name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
    std::cout << "constructor has been called!!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "destructor has been called!!" << std::endl;
}



void ClapTrap::attack(const std::string& target){
    if (EnergyPoints > 0 && HitPoints > 0){
        EnergyPoints--;
        std::cout << "ClapTrap " << name << " attacks " << target << " causing " << AttackDamage << " points of damage! " << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " cannot attack because it has no energy or health!" << std::endl;
}



void ClapTrap::takeDamage(unsigned int amount){
    if (HitPoints > 0){
        HitPoints -= amount;
        std::cout << "ClapTrap " << name << " take " << amount << " points of damage! " << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " has no health left to take damage!" << std::endl;
}



void ClapTrap::beRepaired(unsigned int amount){
    if (EnergyPoints > 0 && HitPoints > 0){
        EnergyPoints--;
        HitPoints += amount;
        std::cout << "ClapTrap " << name << " repain " << amount << " points! " << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " cannot repair because it has no energy or health!" << std::endl;
}
