#ifndef FRAHTRAP_HPP
#define FRAHTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ScavTrap
{
private:
    /* data */
public:
    FragTrap(std::string name);
    void highFivesGuys(void);
};


#endif