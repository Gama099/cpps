#include "Zombie.hpp"
#include <iostream>

int main() {
	int n = 10;
	Zombie *horde = zombieHorde(n, "foo");
	for (int i = 0; i < n; i++){
		horde[i].announce();
	}
	delete[] horde;
    return 0;
}
