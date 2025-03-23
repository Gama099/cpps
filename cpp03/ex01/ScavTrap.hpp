#ifndef SCAV_HPP
#define SCAV_HPP

#include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{
private:
    std::string name;
    int HitPoints; //  represent the health of the ClapTrap
    int EnergyPoints; 
    int AttackDamage;
public:
    ScavTrap(std::string name);
    ~ScavTrap();
};

#endif