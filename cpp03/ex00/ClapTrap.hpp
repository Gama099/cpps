#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int HitPoints; //  represent the health of the ClapTrap
    int EnergyPoints; 
    int AttackDamage;

public:
    ClapTrap(std::string name);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);


    void getStats(){
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "name: " << name << std::endl;
        std::cout << "HitPoints: " << HitPoints << std::endl;
        std::cout << "EnergyPoints: " << EnergyPoints << std::endl;
        std::cout << "AttackDamage: " << AttackDamage << std::endl;
        std::cout << "----------------------------------------" << std::endl;
    }
};


#endif