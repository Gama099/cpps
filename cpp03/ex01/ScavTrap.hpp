#ifndef SCAV_HPP
#define SCAV_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(std::string name);
    void guardGate();
};

#endif