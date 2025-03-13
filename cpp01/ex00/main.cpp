#include "Zombie.hpp"
#include <iostream>

int main() {
    // Create a zombie on the heap
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie; // Don't forget to free memory!

    // Create a zombie on the stack
    randomChump("StackZombie");

    return 0;
}
