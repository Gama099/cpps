#include "FragTrap.hpp"

int main() {
    FragTrap frag("Boomer");

    frag.attack("Enemy");
    frag.takeDamage(20);
    frag.beRepaired(10);
    frag.highFivesGuys();

    return 0;
}