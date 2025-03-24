#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {
private:
    /* data */
public:
    FragTrap(std::string name);
    ~FragTrap();
    void highFivesGuys(void);
};


#endif