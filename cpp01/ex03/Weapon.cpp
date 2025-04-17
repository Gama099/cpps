/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:29:18 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/17 22:29:22 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	this->type = type;
}

const std::string& Weapon::getType(){
	return type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}

