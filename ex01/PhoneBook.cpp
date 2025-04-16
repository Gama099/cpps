/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:18:31 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/16 20:28:45 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "PhoneBook.hpp"
#include <sstream> // for stringstream

std::string	PhoneBook::column( std::string name )
{
	std::pair<std::string, std::string> comp;
	comp.first = "          ";
	comp.second = name;

	for (size_t i = 0; i < comp.first.length() && comp.second[i]; i++){
		comp.first[i] = comp.second[i];
		if (i == comp.first.length() - 1)
			comp.first[i] = '.';
	}
	return comp.first;
}


void	PhoneBook::addContact(int index){
	contacts[index % CONTACT_NUM].add_contact();
}

void	PhoneBook::displayContact(int index){
	std::string			cmd;
	int 				idx;
	std::stringstream	ss;

	std::cout << column("index") << "|" << column("firstName") << "|" << column("lastname") << "|" << column("Nickname") << "|" << std::endl;
	for (int  i = 0; (i <= index && i < CONTACT_NUM); i++){
		ss.str("");
		ss << i;
		std::cout << column(ss.str()) << "|" << column(contacts[i].getFirstName()) << "|" << column(contacts[i].getLastname()) << "|" << column(contacts[i].getNickname()) << "|" << std::endl;
	}

	std::cout << "entre index to display" << std::endl;
	if (!std::getline(std::cin, cmd))
		return ;

	if ((int)cmd.length() > 1 || !std::isdigit(cmd[0])){
		displayContact(index);
		return ;
	}

	idx = atoi(cmd.c_str());
	if (idx > CONTACT_NUM - 1 || idx > index)
	{
		displayContact(index);
		return ;
	}

		std::cout << "First Name: ";
		std::cout << contacts[idx].getFirstName() << std::endl;
		std::cout << "Last Name: ";
		std::cout << contacts[idx].getLastname() << std::endl;
		std::cout << "Nick Name: ";
		std::cout << contacts[idx].getNickname() << std::endl;
		std::cout << "Phone Number: ";
		std::cout << contacts[idx].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: ";
		std::cout << contacts[idx].getDarkestSecret() << std::endl;
}
