/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:26:47 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/17 22:26:49 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
