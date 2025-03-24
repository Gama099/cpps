#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
    std::cout << "FragTrap " << name << " is born!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " is destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}