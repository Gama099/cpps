/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:28:53 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/17 22:34:05 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name_init) : name(name_init), gun(NULL) {}

void HumanB::setWeapon(Weapon &gun_ptr){
	gun = &gun_ptr;
}


void HumanB::attack()
{
	if (gun)
		std::cout << name << " attacks with their " << gun->getType() << std::endl;
	else
		std::cout << name << " has no weapon to attack with!" << std::endl;
}
