#include "ClapTrap.hpp"

int main(){
    ClapTrap robot("dex");
    ClapTrap monster("chradir");

    for (size_t i = 0; i < 15; i++)
    {
        robot.takeDamage(1);
    }
    
}