#include "ScavTrap.hpp"

int main() {
    ClapTrap robot("Dex");
    ScavTrap dark("Monster");

    robot.attack("Enemy");
    robot.takeDamage(5);
    robot.beRepaired(3);

    dark.attack("Enemy");
    dark.takeDamage(20);
    dark.beRepaired(10);
    dark.guardGate();

    return 0;
}