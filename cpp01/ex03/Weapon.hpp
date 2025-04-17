/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:29:29 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/17 22:29:31 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

// class Weapon{
// 	private:
// 		std::string type;
// 	public:
// 		Weapon(std::string type_init);
// 		const std::string &getType();
// 		void setType(std::string type_init);
// };

class Weapon{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		const std::string &getType();
		void setType(std::string type);
};

#endif
