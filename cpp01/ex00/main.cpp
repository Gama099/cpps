/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:23:23 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/17 22:23:26 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main() {
    Zombie* heapZombie = newZombie("Heap Zombie");

    heapZombie->announce();
    delete heapZombie;
    randomChump("Stack Zombie");
    return 0;
}
