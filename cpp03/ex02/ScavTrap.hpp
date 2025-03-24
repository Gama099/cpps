#ifndef SCAV_HPP
#define SCAV_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(std::string name);
    ScavTrap(std::string name, int HP, int EP, int AD);
    void guardGate(void);
};

#endif