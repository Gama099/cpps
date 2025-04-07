#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
protected:
    std::string name;
    int HitPoints;
    int EnergyPoints;
    int AttackDamage;

public:
    ClapTrap(std::string name);
    ClapTrap(std::string name, int HP, int EP, int AD);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif