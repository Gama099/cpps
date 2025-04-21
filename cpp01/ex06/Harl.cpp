/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 23:44:47 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/21 21:17:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(){
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(){
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(){
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(){
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	// create array of points to function members and assign them
	void (Harl::*pointer[])() = {&Harl::debug, 
	&Harl::info, 
	&Harl::warning, 
	&Harl::error
	};
	
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int levelIndex = -1;
    for (int i = 0; i < 4; i++) {
        if (level == levels[i]) {
            levelIndex = i;
            break;
        }
    }

	switch (levelIndex) {
		case 0: // DEBUG
			(this->*pointer[0])();
			// Fall through
		case 1: // INFO
			(this->*pointer[1])();
			// Fall through
		case 2: // WARNING
			(this->*pointer[2])();
			// Fall through
		case 3: // ERROR
			(this->*pointer[3])();
			break;
		default:
			std::cout << "Harl has not comment" << std::endl;
	}
}
