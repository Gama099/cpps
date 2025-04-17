/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:28:36 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/17 22:28:37 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

void HumanA::attack(){
	std::cout << name << " attacks with their " << gun.getType() << std::endl;
}

HumanA::HumanA(std::string name_init, Weapon &gunn) : name(name_init), gun(gunn) {}
