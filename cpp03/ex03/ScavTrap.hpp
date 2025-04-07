#ifndef SCAVTRAP_HPP // Fix header guard
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    ScavTrap(std::string name);
    ~ScavTrap();
    void guardGate();
};

#endif