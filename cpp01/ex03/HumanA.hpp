/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:28:45 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/17 22:31:46 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
private:
	std::string name;
	Weapon		&gun;
public:
	HumanA(std::string name_init, Weapon &gunn);
	void attack();
};


#endif
