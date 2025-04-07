#include "ClapTrap.hpp"

int main(){
    ClapTrap robot("dex");
    ClapTrap monster("chradir");

    robot.attack("Monster");
    robot.getStats();

    robot.beRepaired(2);
    robot.getStats();

    robot.takeDamage(2);
    robot.getStats();
}