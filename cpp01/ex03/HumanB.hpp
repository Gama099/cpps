/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:28:59 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/17 22:32:31 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
private:
	std::string name;
	Weapon		*gun;
public:
	HumanB(std::string name_init);
	void setWeapon(Weapon &gun_ptr);
	void attack();
};

#endif
