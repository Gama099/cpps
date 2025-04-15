/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:17:07 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/15 18:17:07 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int	main()
{
	std::string	cmd;
	PhoneBook	log;
	int 		index = 0;
	// displayWelcomeMessage();
	while (1){

		std::cout << "welome to the phone book";
		//TODO draw a phonebook
		std::cout << " available choises ADD SEARCH EXIT" << std::endl;
		std::getline(std::cin, cmd);
		if (!cmd.compare("ADD")){
			log.addContact(index);
			index++;
			// log.disply();
		}
		else if (!cmd.compare("SEARCH")){
			log.displayContact(index);
		}
		else if (!cmd.compare("EXIT"))
			exit(EXIT_SUCCESS);
		else
			continue;
	}
}
