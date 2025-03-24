#include "ScavTrap.hpp"

int main(){
    ClapTrap robot("dex");
    ScavTrap dark("moster");

    for (size_t i = 0; i < 1; i++)
    {
        dark.takeDamage(1);
        dark.guardGate();
    }
    
}