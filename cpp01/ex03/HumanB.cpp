/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:28:53 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/21 17:57:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name_init) : name(name_init), gun(0) {}

void HumanB::setWeapon(Weapon &gun_ptr){
	gun = &gun_ptr;
}


void HumanB::attack()
{
	if (gun != 0)
		std::cout << name << " attacks with their " << gun->getType() << std::endl;
	else
		std::cout << name << " has no weapon to attack with!" << std::endl;
}
